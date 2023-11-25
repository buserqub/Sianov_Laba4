#include <iostream>
#include <set>
#include "SetChar.h"
using namespace std;

SetChar::SetChar() {
	size = 2;
	count = 0;
	mas = new char;
}
void SetChar::GetNewSize() {
	while (size <= count) {
		size *= 2;
		char* newMas = mas;
		mas = new char[size];
		strcpy(mas, newMas);
	}
}
void SetChar::Add(char character) {
	GetNewSize();
	char* newMas = mas;
	mas = new char[size];
	strcpy(mas, newMas);
	mas[count] = character;
	count++;
}
SetChar::SetChar(char* mas) {
	this->mas = mas;

	int i = 0;
	while (mas[i] != '\0') {
		i++;
	}
	count = i;
	size = 1;
	GetNewSize();
}
SetChar::SetChar(const SetChar& set) : mas{ set.mas }, size { set.size }, count{ set.count } {
}
SetChar SetChar::operator= (const SetChar& set) {
	return set;
}
SetChar SetChar::operator+ (const SetChar& set) {
	SetChar newSet(*this);

	for (int i = 0; i < set.count; i++) {
		newSet.Add(set.mas[i]);
	}
	return newSet;
}
SetChar SetChar::operator+ (const char& character) {
	this->Add(character);
	return *this;
}
void SetChar::Print() {
	for (int i = 0; i < count; i++) {
		cout << mas[i];
	}
}
void SetChar::Show() {
	cout << "\nМассив.\n\tРазмер: " << size << "\n\tКоличество элементов: " << count << "\n\tЭлементы массива: ";
	Print();
}


//SetChar::SetChar(set<char> elements) : elements{ elements } {
//	
//}
//set<char> SetChar::GetElements() {
//	return elements;
//}
//SetChar SetChar::operator+ (SetChar set) const {
//	return SetChar(elements + set->elements);
//}
//SetChar SetChar::operator+ (const char& character) const{
//	set<char> set1;
//	set1.insert(character);
//	return SetChar(elements.insert(character));
//}