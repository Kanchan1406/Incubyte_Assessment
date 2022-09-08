#include<iostream>
#include<string>
using namespace std;

int StringCalculator()
{
	int n;
	string str;
	cout <<"Input:";
	getline (cin, str);
	n=str.length();
	cout << n;
	return 0;
}



int main()
{
	
	StringCalculator();
	return 0;
}

