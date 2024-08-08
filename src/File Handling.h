#pragma once

// Header Files
#include <iostream>
#include <fstream>
#include <Windows.h>
using namespace std;

// Function without Argument that does not Returns a Value
// Creates & Stores Info in Text File
void createFile() {
	system("CLS");
	fstream File;
	char fName[100], text[100];
	gotoxy(25, 7);
	cout << "---Creates & Stores Info in Text File---";
	gotoxy(20, 10);
	cout << "Enter the File Name (Put .txt at the end): ";
	cin >> fName;
	gotoxy(20, 12);
	cout << "Enter the Info to Store: ";
	cin >> text;
	File.open(fName, ios::out);
	if (File.is_open()) {
		File << text;
		File.close();
	}
	gotoxy(20, 15);
	cout << "The File " << fName << " Created Successfully!";
	gotoxy(20, 18);
	cout << "Press Any Key to Go Back to File Handling Menu";
	system("pause>0");
}

// Function without Argument that Returns a Value
// Read an Existing Text File
int readFile() {
	system("CLS");
	fstream File;
	char fName[100], text[100];
	gotoxy(25, 7);
	cout << "---Read an Existing Text File---";
	gotoxy(20, 9);
	cout << "Enter the File Name: ";
	cin >> fName;
	File.open(fName);
	if (!File) {
		gotoxy(20, 12);
		cout << "Error Opening the File...";
		gotoxy(20, 18);
		cout << "Press Any Key to Go Back to File Handling Menu";
		system("pause>0");
		return 0;
	}
	gotoxy(20, 12);
	cout << "Content of the File:";
	gotoxy(20, 14);
	while (File.eof() == 0)
	{
		File >> text;
		cout << text << " ";
	}
	cout << "\n";
	File.close();
	gotoxy(20, 18);
	cout << "Press Any Key to Go Back to File Handling Menu";
	system("pause>0");
}

// Function without Argument that does not Returns a Value
// Add Data to an Existing Text File
void adddataFile() {
	system("CLS");
	fstream File;
	char fName[100], text[100], text1[100];
	gotoxy(25, 7);
	cout << "---Add Data to a Text File---";
	gotoxy(20, 10);
	cout << "Enter the File Name: ";
	cin >> fName;
	File.open(fName);
	gotoxy(20, 12);
	cout << "Content of the File:";
	gotoxy(20, 14);
	while (File.eof() == 0)
	{
		File >> text;
		cout << text << " ";
	}
	File.close();
	gotoxy(20, 17);
	cout << "Enter Additional Data: ";
	cin >> text1;
	File.open(fName, ios::app);
	if (File.is_open()) {
		File << " " << text1;
		File.close();
	}
	gotoxy(20, 20);
	cout << "Press Any Key to Go Back to File Handling Menu";
	system("pause>0");
}

// Function without Argument that does not Returns a Value
// Creates a Receipt in a Text File
void receiptFile() {
	system("CLS");
	fstream File;
	int totalItem, x = 13, price[50], Paid, Expense = 0, Change;
	char text[100];
	gotoxy(25, 7);
	cout << "---Store a Receipt in a Text File---";
	gotoxy(20, 10);
	cout << "Enter the Number of Items Brought: ";
	cin >> totalItem;
	gotoxy(20, 12);
	cout << "Enter the Prices of Each Items: ";
	for (int i = 0; i < totalItem; i++) {
		int a = x - 12;
		gotoxy(28, x);
		cout << "Item Number " << a << " - P ";
		cin >> price[i];
		x++;
	}
	gotoxy(20, 20);
	cout << "Enter Amount Paid: P ";
	cin >> Paid;
	for (int j = 0; j < totalItem; j++) {
		Expense += price[j];
	}
	Change = Paid - Expense;
	File.open("Receipt.txt", ios::out);
	if (File.is_open()) {
		File << "---Official Receipt---\n";
		for (int k = 0; k < totalItem; k++) {
			int b = k + 1;
			File << "\n\nItem Number " << b << " - P " << price[k];
		}
		File << "\n\nTotal Price to Pay: P " << Expense;
		File << "\n\nAmount Paid: P " << Paid;
		File << "\n\nChange: P " << Change;
		File << "\n\nThannk you for Shopping!";
		File.close();
	}
	gotoxy(20, 25);
	cout << "The Receipt was Created Successfully!";
	gotoxy(20, 28);
	cout << "Press Any Key to Go Back to File Handling Menu";
	system("pause>0");
}

// Function without Argument that does not Returns a Value
// Displays Word and Line Count of a Text File
void word_lineFile() {
	system("CLS");
	fstream File;
	int line = 1, word = 1, size;
	char fName[100], ch;
	gotoxy(25, 7);
	cout << "---Displays Word and Line Count of a Text File---";
	gotoxy(20, 9);
	cout << "Enter the File Name: ";
	cin >> fName;
	File.open(fName);
	File.seekg(0, ios::end);
	File.seekg(0, ios::beg);
	while (File) {
		File.get(ch);
		if (ch == ' ' || ch == '\n')
			word++;
		if (ch == '\n')
			line++;
	}
	gotoxy(20, 11);
	cout << "Number of Words: " << word;
	gotoxy(20, 13);
	cout << "Number of Lines: " << line;
	File.close();
	gotoxy(20, 16);
	cout << "Press Any Key to Go Back to File Handling Menu";
	system("pause>0");

}
