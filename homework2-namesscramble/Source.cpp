#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main(){
	string str1;
	cout << "First Name? ";
	cin >> str1;
	string str2;
	cout << "Last Name? ";
	cin >> str2;
	string reverse (str1);
	for (int i = str1.length(); i >= 0; --i)
	{
		cout << str1[i];
	}

	for (int b = str2.length(); b >= 0; --b)
	{
		cout << str2[b];
	}
	
	return 0;
		

	}