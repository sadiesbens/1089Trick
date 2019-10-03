#include "pch.h"
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
/*Mercedes James
10/2/19
This program will take a 3 digit number(the first and last numbers must be different) 
output the original number,
reverse it,
subtract original and reverse number,
reverse the difference,
add differnece and reverse difference,
should always equal 1089
*/

void Trick(int num);
int main()
{
	int num = 100;
	while (num >= 100 && num <= 998) {
		cout << "Enter a 3 digit number(first and last digits must differ) : " << endl;
		cin >> num;
		Trick(num);

	}

}

void Trick(int num) {
	//convert num to string
	string strO = to_string(num);
	//reverse string
	//reverse(strO.begin(), strO.end());
	swap(strO.front(), strO.back());
	//convert to intger
	int reverse = stoi(strO);
	//find difference
	int diff = abs(num - reverse);
	//convert to string
	string strD = to_string(diff);
	//reverse
	swap(strD.front(), strD.back());
	//convert to intger
	int reverseD = stoi(strD);
	//difference + reverse of difference
	int diffN = abs(reverseD + diff);
	//output
	cout << "orginal: " << num << endl;
	cout << "reverse: " << reverse << endl;
	cout << "difference: " << diff << endl;
	cout << "reverse of difference: " << reverseD << endl;
	cout << "difference + reverse of difference: " << diffN << endl;

}