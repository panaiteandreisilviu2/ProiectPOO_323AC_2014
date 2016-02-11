
#include "StdAfx.h"
#include <string.h>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <math.h>
#include <vector>
#include <iomanip>


#include "SingularValueDecomposition.h"



using namespace std;


namespace{

class LinkedList{

public:
	LinkedList* next;
	int *frequency;
	char word[30];
	void cleanMemory(void);

	//TREBUIE DEALOCATA MEMORIA

};

void LinkedList::cleanMemory(void)
{

	LinkedList *p = this;
	LinkedList *last;

	while(p->next != NULL)
	{
		last = p;	
		p = p->next;
		delete[] last->frequency;
		delete last;
	}

	delete p;
}


class LSA{

private:

	int *nrfiles;	   //nr fisiere pt fiecare proiect
	int numberoffiles; //nr total de fisiere
	int terms;		   //nr total de termeni
	int **matrix;          //matricea frecventa termeni
	float **matrixB;       //matricea frecventa termeni normalizata
	float *singularValues; //valori singulare calculate de SVD
	float **vMatrix;		   //Matricea V calculata de SVD
	float **fileByfileMatrix;  //Matricea ce contine rezultatele finale
	vector<char*> filePaths;	//Path-urile catre fisiere;

public:
	LSA(int* , vector<char*>);
	~LSA();
	void GetLsaMatrix(void);
	void NormalizeMatrix(void);
	void ApplySVD(void);
	int getNumberoffiles(void) {return numberoffiles;}
	int getTerms(void) {return terms;}
	int** getMatrix(void) {return matrix;}
	float** getMatrixB(void) {return matrixB;}
	

	/*
	void printMatrixB(void)
	{
		for(int i = 0 ; i < terms ; i++)
		{
			for (int j = 0 ; j < numberoffiles ; j++)
			{
				//outLogFile << matrixB[i][j] << " ";
			}

			//outLogFile << endl;
		}
	}*/

};





ofstream outLogFile ("logFileDetailed_LSA.txt");
ofstream outLogFile2 ("logFileSimple_LSA.txt");



LSA::LSA(int* nroffiles , vector<char*>fPaths)
{
	nrfiles = new int [2];

	nrfiles = nroffiles;
	numberoffiles = nrfiles[0] + nrfiles[1];
	terms = 0;

	filePaths.swap(fPaths);	//COPIERE RAPIDA
	/*
	for(int i = 0 ; i < nrfiles ; i++)
	{
		strcpy(filePaths[i] , fPaths[i]);
		//copiere in obiect
	}
	*/
}

LSA::~LSA()
{
	outLogFile << endl << "Destructor";
}



void LSA::GetLsaMatrix(void)
{
	
	//	vector<char*> words;
	//	vector<int> frequencies;
	//	words.capacity(10);
	//	frequencies.capacity(10);

	LinkedList** listHead; //trb eliminat
	LinkedList *tempMatrixHead; //trb eliminat


	listHead = new LinkedList* [numberoffiles];
	//DEALOCAT
	for(int i = 0 ; i<numberoffiles ; i++)
	{
		listHead[i] = new LinkedList;
	}


	for(int i = 0 ; i < numberoffiles; i++)
	{



		bool foundWord = false;

		LinkedList* p = listHead[i];
		p->next = NULL;
		p->frequency = new int;
		*p->frequency = 1;

		ifstream input(filePaths[i]);  
		//input.open;

		char s[45] = " .{}()[]!@#$%^&*,.:;|+-_<>/\\=`~\"0123456789";
		s[0] = ' ';
		s[43] = '\n';
		s[44] = '\t';
		char *token;
		char str[256];
		int tokenSize;

		while ( !input.eof())
		{

			input.getline(str , 256);
			outLogFile << "LINIE : " << str << endl;
			token = strtok(str, s);

			while( token != NULL )
			{
				tokenSize = strlen(token);

				//eliminare majuscule
				char tokenLowercase[30];	   		
				strcpy(tokenLowercase , token);
				for(int i = 0 ; i < tokenSize-1 ; i++)
				{
					tokenLowercase[i] = tolower(tokenLowercase[i]);
				}


				//printf( "%10.20s %d", tokenLowercase , tokenSize );

				//se adauga intr-o lista inlantuita toate tokenurile si se numara frecventa aparitiilor lor
				if(tokenSize > 1)
				{
					foundWord = false;
					LinkedList* countFrequency = listHead[i];
					while(countFrequency->next != NULL)
					{
						if( !strcmp(tokenLowercase,countFrequency->word))
						{
							*countFrequency->frequency += 1;
							foundWord = true;
							break;
						}

						countFrequency = countFrequency->next;
					}

					if (!foundWord)
					{
						strcpy(p->word , tokenLowercase);
						p->frequency = new int;
						*p->frequency = 1;
						p->next = new LinkedList;
						p = p->next;
						p->next = NULL;

					}

				}

				if(tokenSize <2)
				{
					//printf("  [x]");

				}

				//printf("\n");

				//strcat(line , token);
				token = strtok(NULL, s);

			}
		}

		outLogFile << endl << endl;

		p = listHead[i];

		while(p->next != NULL)
		{
			outLogFile << p->word << " " << *p->frequency << " " << endl;
			p = p->next;
		}


		input.close();  
		input.clear();

		

	}


	//creare matrice temporara nesortata

	tempMatrixHead = new LinkedList;
	//DEALOCAT
	LinkedList *pMatrix = tempMatrixHead;
	pMatrix->next = NULL;

	//cu pMatrix parcurg a doua lista
	LinkedList *p;
	p = listHead[0];
	while(p->next != NULL)
	{
		pMatrix->frequency = new int [numberoffiles](); // aloca si initializeaza cu 0
		pMatrix->frequency[0] = *p->frequency;
		strcpy(pMatrix->word , p->word);

		pMatrix->next = new LinkedList;
		pMatrix = pMatrix->next;
		pMatrix->next = NULL;
		p = p->next;
	}

	for(int i = 1 ; i<numberoffiles ; i++)
	{
		p = listHead[i];

		bool found = false;

		while(p->next != NULL)
		{

			found = false;

			pMatrix = tempMatrixHead;

			while(pMatrix->next != NULL)
			{
				if( !strcmp(pMatrix->word , p->word) )
				{
					pMatrix->frequency[i] = *p->frequency;
					found = true;
					break;

				}

				pMatrix = pMatrix->next;
			}

			if (!found)
			{
				pMatrix->next = new LinkedList;
				pMatrix->frequency = new int [numberoffiles](); // aloca si initializeaza cu 0
				pMatrix->frequency[i] = *p->frequency;
				strcpy(pMatrix->word , p->word);
				pMatrix->next->next = NULL;
			}
			p = p->next;
		}
		outLogFile << endl << endl;



	}

	//DEALOCARE LISTHEAD

	for(int i = 0 ; i < numberoffiles ; i++)
	{
		//listHead[i]->cleanMemory();
	}

	//numarul tokenurilor (termenilor)
	pMatrix = tempMatrixHead;
	terms = 0;
	while(pMatrix->next != NULL)
	{
		terms++;
		pMatrix = pMatrix->next;
	}

	outLogFile << "TERMENI SI NUMARUL DE FISIERE : " << terms << " " << numberoffiles;

	matrix = new int* [terms];
	for(int i = 0 ; i < terms ; i++)
	{
		matrix[i] = new int [numberoffiles]();
	}


	pMatrix = tempMatrixHead;
	int i = 0;
	while(pMatrix->next !=NULL)
	{
		//printf("%12.20s " , pMatrix->word);
		for(int j = 0 ; j<numberoffiles ; j++)
		{
			//printf("%3.1d " , pMatrix->frequency[j]);
			matrix[i][j] = pMatrix->frequency[j];
			//outLogFile << pMatrix->frequency[i] << " ";
		}


		//outLogFile << endl;
		pMatrix = pMatrix->next;
		i++;

	}


	//DEALOCARE MEMORIE
	//tempMatrixHead->cleanMemory();

	outLogFile << endl;


	tempMatrixHead->cleanMemory();
	delete[] tempMatrixHead;

	for(int i = 0 ; i < numberoffiles ; i++)
	{
		listHead[i]->cleanMemory();
		delete[] listHead[i];
	}

	delete[] listHead;

}

void LSA::NormalizeMatrix()
{
	
	outLogFile <<endl << endl << "Matricea frecventa termeni" << endl;
	for(int i = 0 ; i < terms ; i++ )
	{
		for(int j = 0 ; j < numberoffiles ; j++)
		{
			//printf("%3.1d ",matrix[i][j]);
			outLogFile << matrix[i][j] << " ";
		}

		outLogFile << endl;
	}


	//TRB DEALOCATA
	matrixB = new float* [terms];
	for(int i = 0 ; i < terms ; i++)
	{
		matrixB[i] = new float [numberoffiles]();

	}

	float *globalWeighting;
	globalWeighting = new float [terms];

	//CALCULARE GLOBAL WEIGHTING
	for(int i = 0 ; i < terms ; i++)
	{
		globalWeighting[i] = 0;

		for(int j = 0 ; j < numberoffiles ; j++)
		{
			globalWeighting[i] += matrix[i][j] * matrix[i][j];
		}

		globalWeighting[i] = 1 / sqrt(globalWeighting[i]);
	}

	//PRINTARE GLOBAL WEIGHTING
	outLogFile << endl << "Global Weighting" << endl;
	for(int i = 0 ; i < terms ; i++)
	{
		outLogFile << globalWeighting[i] << " ";
	}

	outLogFile << endl;



	float *documLenghtNorm;
	documLenghtNorm = new float [numberoffiles];
	//CALCULARE DOCUMENT LENGTH NORMALISATION
	for(int j = 0 ; j < numberoffiles ; j++)
	{
		documLenghtNorm[j] = 0;

		for(int i = 0 ; i < terms ; i++)
		{
			documLenghtNorm[j] += globalWeighting[i] * matrix[i][j]   *  globalWeighting[i] * matrix[i][j] ;
		}

		documLenghtNorm[j] = 1 / sqrt(documLenghtNorm[j]);
	}

	outLogFile << endl << "Document Length Normalisation" << endl;
	//PRINTARE DOCUMENT LENGTH NORMALISATION
	for(int j = 0 ; j < numberoffiles ; j++)
	{
		outLogFile << documLenghtNorm[j] << " ";
	}

	outLogFile << endl;



	for(int i = 0 ; i < terms ; i++)
	{
		for(int j = 0 ; j < numberoffiles ; j++)
		{
			matrixB[i][j] = matrix[i][j] * globalWeighting[i] * documLenghtNorm[j];
		}
	}


	outLogFile << endl << "Matrice Normalizata" << endl;
	for(int i = 0 ; i < terms ; i++ )
	{
		for(int j = 0 ; j < numberoffiles ; j++)
		{
			outLogFile << setprecision(4) << fixed << matrixB[i][j] << "   ";
		}

		outLogFile << endl;

	}

	outLogFile << endl;

	for(int i = 0 ; i < terms ; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;


}

void LSA::ApplySVD(void)
{
	outLogFile <<endl << endl << "Aplicare SVD" << endl;
	singularValues = new float [numberoffiles];
	 vMatrix = new float*[numberoffiles];
	for(int i = 0 ; i < numberoffiles ; i++)
	{
		vMatrix[i] = new float [numberoffiles];
	}

	dsvd(matrixB , terms , numberoffiles , singularValues , vMatrix);

	//ELIMINARE VALORI SINGULARE FOARTE MICI
	for(int i = 0 ; i < numberoffiles ; i++)
	{
		if(singularValues[i] < 0.01 && singularValues[i] > -0.01 )
		{
			singularValues[i] = 0;
		}
	}

	//TRB DEALOCAT
	fileByfileMatrix = new float* [numberoffiles];
	for(int i = 0 ; i < numberoffiles ; i++)
	{
		fileByfileMatrix[i] = new float [numberoffiles]();
	}


	float **tempMatrix;
	tempMatrix = new float* [numberoffiles];
	for(int i = 0 ; i < numberoffiles ; i++)
	{
		tempMatrix[i] = new float [numberoffiles]();
	}



	//V * SIGMA * SIGMA 
	for(int i = 0 ; i < numberoffiles ; i++)
	{
		for(int j = 0 ; j < numberoffiles ; j++)
		{
			tempMatrix[i][j] = vMatrix[i][j]*singularValues[j]*singularValues[j];
		}
	}

	//V * SIGMA * SIGMA    *   V(TRANSPUS)
	for(int i = 0 ; i < numberoffiles ; i++)
	{
		for(int j = 0 ; j < numberoffiles ; j++)
		{
			float sum = 0;
			for(int k  = 0 ; k < numberoffiles ; k++)
			{
				sum += tempMatrix[i][k]*vMatrix[j][k];
			}

			fileByfileMatrix[i][j] = sum;

		}
	}








	outLogFile << endl << "Matricea U" << endl;
	for(int i = 0 ; i < terms ; i++ )
	{
		for(int j = 0 ; j < numberoffiles ; j++)
		{
			outLogFile << setprecision(4) << fixed << matrixB[i][j] << "   ";
		}

		outLogFile << endl;

	}


	outLogFile2<< endl << "Fisiere Proiect 1" << endl;
	for(int i = 0 ; i < nrfiles[0] ; i++ )
	{
		outLogFile2 << filePaths[i] << endl;
	}

	outLogFile2<< endl << "Fisiere Proiect 2" << endl;
	for(int i = nrfiles[0] ; i < numberoffiles ; i++ )
	{
		outLogFile2 << filePaths[i] << endl;
	}

	outLogFile2 <<endl;

	outLogFile << endl << "Vectorul Sigma" << endl;
	outLogFile2 << endl << "Vectorul Sigma" << endl;
	for(int i = 0 ; i < numberoffiles ; i++)
	{
		outLogFile << setprecision(4) << fixed << singularValues[i] << " ";
		outLogFile2 << setprecision(4) << fixed << singularValues[i] << " ";
	}

	outLogFile << endl;
	outLogFile2 << endl;

	outLogFile << endl << "Matricea V" << endl;
	outLogFile2 << endl << "Matricea V" << endl;

	for(int i = 0 ; i < numberoffiles ; i++ )
	{
		for(int j = 0 ; j < numberoffiles ; j++)
		{
			outLogFile << setprecision(4) << fixed << vMatrix[i][j] << "   ";
			outLogFile2 << setprecision(4) << fixed << vMatrix[i][j] << "   ";
		}

		outLogFile << endl;
		outLogFile2 << endl;

	}

	outLogFile << endl;

	outLogFile << endl << "FILE BY FILE MATRIX" << endl;
	outLogFile2 << endl << "FILE BY FILE MATRIX" << endl;

	for(int i = 0 ; i < numberoffiles ; i++ )
	{
		for(int j = 0 ; j < numberoffiles ; j++)
		{
			outLogFile << setprecision(4) << fixed << fileByfileMatrix[i][j] << "   ";
			outLogFile2 << setprecision(4) << fixed << fileByfileMatrix[i][j] << "   ";
		}

		outLogFile << endl;
		outLogFile2 << endl;

	}

	ofstream raportHtml ("d:\\raport_html.html");

	raportHtml << "<!DOCTYPE html>\
				  <html>\
				  <head>\
				  <title>Raport HTML</title>\
				  <style>\
				  body{\
				  background-color:rgb(245, 245, 245);\
				  margin:0;\
				  }\
				  #wrapper{\
				  margin-left:auto;\
				  margin-right:auto;\
				  width:100%;\
				  }\
				  #header{\
				  height:80px;\
				  width:90%;\
				  margin:0;\
				  background-color:rgb(85, 85, 85);\
				  color:#eaeaea;\
				  font-size:30px;\
				  line-height:80px;\
				  //text-align:center;\
				  padding-left:10%;\
				  text-shadow: 3px 4px 10px rgb(130 , 130 , 130);\
				  }\
				  #navbar{\
				  display:inline-block;\
				  width:100%;\
				  background-color:rgb(120, 120, 120);\
				  box-shadow:2px 4px 7px rgba(156,156,156,1.00);\
				  //border-top:1px solid gray;\
				  }\
				  #content{\
				  float:left;\
				  width:100%;\
				  margin-top:50px;\
				  }\
				  #links{\
				  width:100%;\
				  }\
				  #links ul{\
				  margin:0;\
				  padding:0;\
				  }\
				  #links ul li{\
				  display:inline;\
				  font-size:13px;\
				  float:left;\
				  padding:7px;\
				  margin:0;\
				  list-style:none;\
				  background-color:rgb(120, 120, 120);\
				  color:white;\
				  transition: all 0.2s;\
				  }\
				  #links a{\
				  text-decoration:none;\
				  color:white;\
				  }\
				  links a:hover{\
				  cursor: pointer;\
				  cursor: hand;\
				  }\
				  #links ul li:hover{\
				  background-color:rgb(70, 70, 70);\
				  transition:all 0.2s;\
				  cursor: pointer;\
				  cursor: hand;\
				  }\
				  #Rezultate{\
				  overflow:hidden;\
				  display:inline-block;\
				  position:relative;\
				  margin:5% 2.5% 0% 5%;\
				  width:500px;\
				  height:400px;\
				  background-color : rgb(230, 230, 230);\
				  box-shadow: 3px 3px 10px rgba(170,170,170,1.00);\
				  border-radius: 0.25em;\
				  padding:0px;\
				  font-size:13px;\
				  color: rgb(70, 70, 70);\
				  float:left;\
				  \
				  }\
				  \
				  #Fisiere{\
				  position:relative;\
				  width:500px;\
				  height:400px;\
				  margin:5% 2.5% 0% 5%;\
				  margin-bottom:0px;\
				  display:inline-block;\
				  background-color : rgb(230, 230, 230);\
				  box-shadow: 3px 3px 10px rgba(170,170,170,1.00);\
				  border-radius: 0.25em;\
				  padding:0px;\
				  overflow:hidden;\
				  font-size:13px;\
				  color: rgb(70, 70, 70);\
				  }\
				  \
				  .Content_Header{\
				  \
				  width:100%;\
				  height:25px;\
				  color:rgb(230 , 230 , 230);\
				  line-height:25px;\
				  font-size:19px;\
				  border-radius:5px 5px 0px 0px;\
				  margin:0;\
				  padding:0px;\
				  text-align:center;\
				  background-color:rgb(120, 120, 120);\
				  }\
				  \
				  .Content_Text{\
				  \
				  padding:20px;\
				  height:400px;\
				  font-size:17px;\
				  overflow:scroll;\
				  }\
				  \
				  \
				  \
				  </style>\
				  \
				  </head>	\
				  <body>\
				  \
				  <div id=\"wrapper\">\
				  <div id=\"header\">\
				  Raport Analiza Latenta Semantica\
				  </div>\
				  <div id=\"navbar\">\
				  <div id=\"links\">\
				  \
				  <ul>\
				  <li> <a>Rezultate</a> </li>\
				  <li> <a></a> </li>\
				  <li> <a></a> </li>\
				  </ul>\
				  </div>\
				  </div>\
				  \
				  <div id = \"Content\">\
				  \
				  <div id = \"Rezultate\">\
				  <div class = \"Content_Header\">\
				  Rezultate Analiza\
				  </div>\
				  <div class = \"Content_Text\">";

	raportHtml << "<h4>File By File Matrix </h4><br>";

	for (int i = 0 ; i < numberoffiles ; i++)
	{
		for(int j = 0 ; j < numberoffiles ; j++)
		{
			raportHtml << setprecision(2) << fixed << fileByfileMatrix[i][j]*100 << "%   ";
		}

		raportHtml << "<br><br>";
	}



	raportHtml << "</div>\
				  </div>\
				  \
				  <div id = \"Fisiere\">\
				  <div class = \"Content_Header\">\
				  Fisiere\
				  </div>\
				  <div class = \"Content_Text\">";
				  
	raportHtml << "Fiserere Analizate : <br><br>Proiect 1 :<br>";


	for(int i = 0 ; i < nrfiles[0] ; i++)
	{
		raportHtml << filePaths[i] << "<br>";
	}


	raportHtml << "<br>Proiect 2 : <br>";

	for(int i = nrfiles[0] ; i < numberoffiles ; i++)
	{
		raportHtml << filePaths[i] << "<br>";
	}


	raportHtml << "</div>\
				  </div>\
				  \
				  </div>\
				  </div>\
				  </body></html>";		
	raportHtml.close();

	

	for(int i = 0 ; i < terms ; i++)
	{
		delete[] matrixB[i];
	}
	delete[] matrixB;


	for(int i = 0 ; i < numberoffiles ; i++)
	{
		delete[] vMatrix[i];
	}
	delete[] vMatrix;


	for(int i = 0 ; i < numberoffiles ; i++)
	{
		delete[] fileByfileMatrix[i];
	}
	delete[] fileByfileMatrix;


	for(int i = 0 ; i < numberoffiles ; i++)
	{
		delete[] tempMatrix[i];
	}
	delete[] tempMatrix;


	delete[] singularValues;
	delete[] nrfiles;
	
	outLogFile << endl << "Finalizare Memory Cleanup" << endl;
	outLogFile2 << endl << "Finalizare Memory Cleanup" << endl;
	
	outLogFile << "Finalizare EXECUTIE";
	outLogFile2 << "Finalizare EXECUTIE";
	
	outLogFile.clear();
	outLogFile.close();

	outLogFile2.clear();
	outLogFile2.close();

	
	
}



namespace filePathManager{

	void addText(char *a)
	{
		ofstream fisier;
		fisier.open ("files.dat",ios::app);
		fisier << a;
		fisier << endl;
		fisier.close();
	}

	void deleteText(void)
	{
		ofstream fisier;
		fisier.open ("files.dat",ios::trunc);
		fisier.close();
	}

}

}//end namespace

/*
int main()
{
	char file[3][50];
	strcpy(file[0] , "outEnd.txt");
	strcpy(file[1] , "outEnd2.txt");
	strcpy(file[2] , "outEnd3.txt");

	LSA objectLSA(3 , file);
	objectLSA.GetLsaMatrix();
	objectLSA.NormalizeMatrix();

	float *w;
	w = new float [objectLSA.getNumberoffiles()];
	float **v = new float*[objectLSA.getNumberoffiles()];
	for(int i = 0 ; i < objectLSA.getNumberoffiles() ; i++)
	{
		v[i] = new float [objectLSA.getNumberoffiles()];
	}

	SVD::dsvd(objectLSA.getMatrixB() , objectLSA.getTerms() , objectLSA.getNumberoffiles() , w , v);
	cout << endl << endl;
	objectLSA.printMatrixB();

	//	int dsvd(float **a, int m, int n, float *w, float **v)

	return(0);
}

*/