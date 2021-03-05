#pragma once
#include<iostream>
#include<cstring>
#include<fstream>
#include<string>
#include<ctype.h>
#include<map>
#include<vector> 
#include<utility>
#include<algorithm>
using namespace std;
//������ 
class countFile{
	public:
		
		countFile();
		//����ַ��� ��д��map 
		string getString(ifstream& in);
		void loadMap(string str,map<string,int>  mp); 
		
		//�ַ�����ͳ���� 
		int countChar(string str);
		int countLine(string str);
		int countWord(map<string,int>  mp);
		//������������  
		void getSort(map<string,int>  mp);
		
		void writeFile(ofstream& out);
			
	private:
		int chars;
		int words;
		int lines;
		vector<pair<int, string> > v;
}; 
