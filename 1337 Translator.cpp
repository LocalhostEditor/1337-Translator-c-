﻿// 1337 Language Translator v.10
//Enter text or Paragraph to change it into 1337 language (Leet Language)
//very simple and cool Tool.

#include "stdafx.h"
#include "convert.h"
#include<iostream>
#include<stdio.h>
#include<Windows.h>

int main()
{
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
	system("Color 04");
	cout << "\t\t\t\t                   ________________,       " << endl;
	cout << "\t\t\t\t                \-'       _____|           " << endl;
	cout << "\t\t\t\t                )   _ __/                  " << endl;
	cout << "\t\t\t\t               / `./_'_/                   " << endl;
	cout << "\t\t\t\t               |   |     Text to 1337!     " << endl;
	cout << "\t\t\t\t               |   |  Coded by Hamza       " << endl;
	cout << "\t\t\t\t               `---'        v1.0            " << endl;
	cout << "\n\t\t\t\t\tConvert Simple Text to 1337 Language   " << endl;
	char text[200]; //change the length accoording to need
	cout << "\nEnter Text to Translate (ex:localhostEditor) : ";
	SetConsoleTextAttribute(color, 2);
	cin.getline(text, 200);
	convert(text);
	cout << endl << endl;
	SetConsoleTextAttribute(color, 04);
	system("pause");
	return 0;
}

