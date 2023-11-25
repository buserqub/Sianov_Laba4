#include <iostream>
#include <set>
#include "SetChar.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	/*string str = "abcd";
	SetChar set1(set<char> (str.begin(), str.end()));
	set1 = set1 + 'a';*/



	/*set<char> set2;
	char character = 'a';
	set2.insert(character);


	set<char> set3;
	char character = 'b';
	set3.insert(character);

	set<char> set4 = set2 + set3;*/

	//set = set + "a";

	char* mas = (char*)"Detail1";
	char character = '1';

	/*mas = new char[strlen(mas) + 1];
	strcpy(mas, (char*)character);
	cout << mas;*/

	SetChar set1 = SetChar((char*)"Gear1");
	SetChar set2((char*)"Detail1");
	set2.Show();

	SetChar set3 = set1 + set2;
	set3.Show();

	set3 = set3 + 'p';
	set3.Show();

	SetChar set4 = set2 + set1;
	set4.Show();
}