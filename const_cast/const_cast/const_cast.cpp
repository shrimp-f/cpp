#include "pch.h"
#include <iostream>
using namespace std;


size_t StrLen(char* str) {
	size_t i;
	for (i = 0; str[i] != '\0'; ++i) {

	}
	return i;
}

void ShowLength(char* str) {
	cout << "文字列「" << str << "」の長さ"
		<< StrLen(str) << "バイト。" << endl;
}

int main()
{
	char* string = const_cast<char*>("Hello");
	//	char* string_ = "Hello";//コンパイルエラーなる

	ShowLength(string);
	ShowLength(const_cast<char*>(""));
}