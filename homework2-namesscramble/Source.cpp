#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1;
	cout << "First Name? ";
	cin >> str1;
	string str2;
	cout << "Last name? ";
	cin >> str2;
	random_shuffle(str1.begin(), str1.end());
	random_shuffle(str2.begin(), str2.end());
	cout << str1 << "" << str2  << '\n';
	//cout << str2 << '\n';
	cout << "Your name should be confused";
	return 0;

}
	