#include "StdAfx.h"
#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>
#include <conio.h>


#define MIN3(a, b, c) ((a) < (b) ? ((a) < (c) ? (a) : (c)) : ((b) < (c) ? (b) : (c)))

using namespace std;

namespace {

int levenshteinFunc(char *s1, char *s2) {
    unsigned int s1len, s2len, x, y, lastdiag, olddiag;
    s1len = strlen(s1);
    s2len = strlen(s2);
    //unsigned int column[s1len+1];
	unsigned int *column;
	column = new unsigned int [s1len+1];

    for (y = 1; y <= s1len; y++)
        column[y] = y;
    for (x = 1; x <= s2len; x++) {
        column[0] = x;
        for (y = 1, lastdiag = x-1; y <= s1len; y++) {
            olddiag = column[y];
            column[y] = MIN3(column[y] + 1, column[y-1] + 1, lastdiag + (s1[y-1] == s2[x-1] ? 0 : 1));
            lastdiag = olddiag;
        }
    }

	int temp = column[s1len];
	delete column;
    return(temp);
}


class LineByLine{
	
	private:
		char editedFilePaths[2][50];
		char filePaths[2][50];
		
	public:
		
		int numberOfLines[2];
		int *plagiarisedLines;	
		int numberOfPlagiarisedLines;
		//LineByLine(char[2][50]);
		void removeWhitespaceAndComments(char* , char*);
		void calculateSimilarity(void);
};

//LineByLine::LineByLine(char files[2][50])
//{
//	strcpy(filePaths[0] , files[0]);
//	strcpy(filePaths[1] , files[1]);
//}

void LineByLine::removeWhitespaceAndComments(char* file1 , char* file2)
{
	
	char s[256];
	int i = 0;
	ifstream in(file1);
	ofstream out("LineByLine_file1_out1.txt");
	
	bool foundSlashStar = false;
		
	while( !in.eof())
	{
		for(i = 0 ; i <256 ; i++)
		{
			s[i] = 0;
		}
		in.getline(s,256);
		
		for(i = 0 ; i < 256 ; i++)
		{
			if(s[i-1] == '/' && s[i] == '/')
			{
				s[i-1] = NULL;
				continue;
			}
			
			if(s[i-1] == '/' && s[i] == '*')
			{
				foundSlashStar = true;
			}
			
			if(foundSlashStar)
			{
				if(s[i-1] == '*' && s[i] == '/')
				foundSlashStar = false;
				s[i-1] = NULL;
				
			}
			
			//DE REZOLVAT : NU VERIFICA DACA EXISTA TEXT DUPA */ PE ACEASI LINIE
			
		}
		
		if(!foundSlashStar)
		{
			////cout<< s << endl;
			out << s << endl;
		}
		
	}
	
	in.close();
	out.close();
	in.clear();
	out.clear();
	
	
	////cout << "Part Two" << endl;
	
	ifstream in2 ("LineByLine_file1_out1.txt");
	ofstream out2 ("LineByLine_file1_out2.txt");
	
	char one;
	char two;
	
	
	/*DE RETINUT
		
		in.getline(s,n) imi citeste o linie intreaga pana la \n
		in >> char  NU imi citeste ENDL si spatii , pe cand
		in.get(c) face acest lucru
	*/
		
	in2.get(one);
	
	if(one != '\n')
	{
		out2 << one;
	}
	
	while( !in2.eof())
	{
		in2.get(two);
		
		if( !(one == two && two == '\n') && !(one == two && two == ' ') && two != '\t' && ! (two == '}' || two == '{') ) 
		{
			
			out2 << two;
		}
		
		one = two;
		
		
		
	}
	
	in2.close();
	out2.close();
	
	//cout << "Part Three"<<endl;
	ifstream in3 ("LineByLine_file1_out2.txt");
	ofstream out3 ("LineByLine_file1_out3.txt");
	
	char input3[128];
	
	one = ' ';
	
	numberOfLines[0] = 1;
	
	while( !in3.eof() )
	{
		i = 0;
		
		in3.getline(input3, 128);
		
		
		while(input3[i] != NULL)
		{
			i++;
		}		
		
		if(i > 2)
		{
			numberOfLines[0]++;
			out3 << input3 << endl;
		}
		
	}
	
	in3.close();
	out3.close();
	
	in.clear();
	out.clear();
	
	in2.clear();
	out2.clear();
	
	in3.clear();
	out3.clear();
	
	
	
	
	//Se repeta tot codul de mai sus
	
	
	
	
	i = 0;
	ifstream in_file2(file2);
	ofstream out_file2("LineByLine_file2_out1.txt");
	foundSlashStar = false;
		
	while( !in_file2.eof())
	{
		for(i = 0 ; i <256 ; i++)
		{
			s[i] = 0;
		}
		in_file2.getline(s,256);
		
		for(i = 0 ; i < 256 ; i++)
		{
			if(s[i-1] == '/' && s[i] == '/')
			{
				s[i-1] = NULL;
				continue;
			}
			
			if(s[i-1] == '/' && s[i] == '*')
			{
				foundSlashStar = true;
			}
			
			if(foundSlashStar)
			{
				if(s[i-1] == '*' && s[i] == '/')
				foundSlashStar = false;
				s[i-1] = NULL;
				
			}
			
			//DE REZOLVAT : NU VERIFICA DACA EXISTA TEXT DUPA */ PE ACEASI LINIE
			
		}
		
		if(!foundSlashStar)
		{
			//cout<< s << endl;
			out_file2 << s << endl;
		}
		
	}
	
	in_file2.close();
	out_file2.close();

	
	
	//cout << "Part Two" << endl;
	
	ifstream in2_file2 ("LineByLine_file2_out1.txt");
	ofstream out2_file2 ("LineByLine_file2_out2.txt");
	
	
	/*DE RETINUT
		
		in.getline(s,n) imi citeste o linie intreaga pana la \n
		in >> char  NU imi citeste ENDL si spatii , pe cand
		in.get(c) face acest lucru
	*/
		
	in2_file2.get(one);
	
	if(one != '\n')
	{
		out2_file2 << one;
	}
	
	while( !in2_file2.eof())
	{
		in2_file2.get(two);
		
		if( !(one == two && two == '\n') && !(one == two && two == ' ') && two != '\t' && ! (two == '}' || two == '{') ) 
		{
			
			out2_file2 << two;
		}
		
		one = two;
		
		
		
	}
	
	in2_file2.close();
	out2_file2.close();
	
	//cout << "Part Three"<<endl;
	ifstream in3_file2 ("LineByLine_file2_out2.txt");
	ofstream out3_file2 ("LineByLine_file2_out3.txt");
	
	one = ' ';
	
	numberOfLines[1] = 0;
	
	while( !in3_file2.eof() )
	{
		i = 0;
		
		in3_file2.getline(input3, 128);
		
		
		while(input3[i] != NULL)
		{
			i++;
		}		
		
		if(i > 2)
		{
			numberOfLines[1]++;
			out3_file2 << input3 << endl;
		}
		
	}
	
	//cout << numberOfLines[0] << endl;
	//cout << numberOfLines[1] << endl;
	
	
	out3.clear();
	out3_file2.clear();
	
	in3_file2.close();
	out3_file2.close();
	
	
	
}


void LineByLine::calculateSimilarity(void)
{
	
	
	plagiarisedLines = new int [numberOfLines[0]]();
	
	int distance = 0;
	
	char inputOne[128] , inputTwo[128];
	ifstream in4 ("LineByLine_file1_out3.txt");
	ofstream outTest("#logfile_LineByLine.txt");
	
	int line1 = 1;
	int line2 = 1;
	numberOfPlagiarisedLines = 0;

	while( !in4.eof() )
	{
		//cout << line1 << " / " << numberOfLines[0] << endl;
		outTest << endl <<endl << line1 << " / " << numberOfLines[0] << endl << endl;
		line1++;
		
		in4.getline(inputOne , 128);
		
		ifstream in5 ("LineByLine_file2_out3.txt");
		
		while( !in5.eof() )
		{
			in5.getline(inputTwo , 128);
			
			int lev = levenshteinFunc(inputOne , inputTwo);
			outTest << lev << "    " << inputOne << "     " << inputTwo <<  "    " << endl;
			


			if ( lev < 5 )
			{
				distance++;
				plagiarisedLines[line1] = 1;
				numberOfPlagiarisedLines++;
				break;
			}
		}
		
		
		in5.close();
	}
	
	
	outTest << endl <<"LineByLine_Plagiarised Lines : " << endl;
	for(int i = 0 ; i < numberOfLines[0] ; i++)
	{	
		outTest << "Line:" << i << "  " << plagiarisedLines[i] << endl;
	}
	//cout << "Number of plagiarised lines :  " << distance;
	
}

}