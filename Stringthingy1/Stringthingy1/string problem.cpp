#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string str1, str2;
	
	cin >> str1;
	cin >> str2;

	cout << str1.length() << " " << str2.length() << endl;
	cout << str1 + str2 << endl;
		
	int temp1 = str1[0];
	int temp2 = str2[0];
	

	swap(str1[0], str2[0]);

	cout << str1 << " " << str2;


	return 0;
}


