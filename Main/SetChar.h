#pragma once
#include <iostream>
#include <set>
using namespace std;

class SetChar
{
public:
	SetChar();
	SetChar(char* mas);
	SetChar(const SetChar& set);
	SetChar operator= (const SetChar& set);
	SetChar operator+ (const SetChar& set);
	SetChar operator+ (const char& character);
	void GetNewSize();
	void Add(char character);
	void Print();
	void Show();
private:
	char* mas;
	int size;
	int count;
};

//class SetChar
//{
//public:
//	SetChar(set<char> elements);
//	SetChar operator+ (SetChar set) const;
//	SetChar operator+ (const char& character) const;
//	set<char> GetElements();
//private:
//	set<char> elements;
//};