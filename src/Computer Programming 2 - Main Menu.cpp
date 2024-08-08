// Programmer: Sir Lance M. Valerio, BSIT 1-1
// Computer Programming 2: Main Menu
// Sequence, Selection, Loops, 1-D Arrays, 2-D Arrays, Recursive, Structures, File Handling
// IDE Used: Visual Studio 2019

// --------------------Header Files--------------------
#include <iostream>
#include <Windows.h>
#include <iomanip>
#include <process.h>
typedef int N;
using namespace std;

// Function for Gotoxy.
void gotoxy(N x, N y)
{
	HANDLE hConsoleOutput;
	COORD dwCursorPosition;
	dwCursorPosition.X = x;
	dwCursorPosition.Y = y;
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsoleOutput, dwCursorPosition);
}

// --------------------Header Files for Programs--------------------
#include "Sequence.h"
#include "Selection.h"
#include "For Loops.h"
#include "While Loops.h"
#include "Do-While Loops.h"
#include "1-D Arrays.h"
#include "2-D Arrays.h"
#include "Recursive.h"
#include "Structures.h"
#include "File Handling.h"

// --------------------Sub Menus of Loops Menu--------------------

// For Loops Submenu Switch
void ForLoops() {
	N choice;
	do {
		system("CLS");
		gotoxy(26, 6);
		cout << "---LOOP PROGRAMS MENU---";
		gotoxy(29, 7);
		cout << "*For Loop Version*";
		gotoxy(20, 9);
		cout << "1 - Print 1-10";
		gotoxy(20, 10);
		cout << "2 - Print All Even 1-N";
		gotoxy(20, 11);
		cout << "3 - Factorial Identifier";
		gotoxy(20, 12);
		cout << "4 - Fibonacci Series";
		gotoxy(20, 13);
		cout << "5 - Reverse Number";
		gotoxy(20, 14);
		cout << "6 - Palindrome Identifier";
		gotoxy(20, 15);
		cout << "7 - Decimal to Binary";
		gotoxy(20, 16);
		cout << "8 - Add All Even 1-N";
		gotoxy(20, 17);
		cout << "9 - Sum of Square of All Even N-M";
		gotoxy(20, 18);
		cout << "10 - Print Letters A-Z";
		gotoxy(20, 19);
		cout << "11 - Back";
		gotoxy(20, 21);
		cout << "Enter your Choice: ";
		cin >> choice;
		switch (choice)
		{

		case 1:
			// Function with Arguments that does not Returns a Value
			// Print 1-10 (For Loop)
		{system("CLS");
		N ctr = 1, x = 20;
		PrintOneTen(ctr, x);
		break; }

		case 2:
			// Function with Arguments that does not Returns a Value
			// Print All Even 1-N (For Loop)
		{system("CLS");
		N N, ctr = 1, x = 15;
		gotoxy(26, 7);
		cout << "---Print All Even 1-N---";
		gotoxy(27, 10);
		cout << "Enter a Number: ";
		cin >> N;
		PrintEven(N, ctr, x);
		break; }

		case 3:
			// Function with Arguments that Returns a Value
			// Factorial Identifier (For Loop)
		{system("CLS");
		N num, i = 1, Factorials = 1, flag = 0;
		gotoxy(26, 7);
		cout << "---Factorial Identifier---";
		gotoxy(30, 10);
		cout << "Enter a Number: ";
		cin >> num;
		flag = Factorial(num, i, Factorials, flag);
		Factorials = Factorial(num, i, Factorials, flag);
		if (flag == 0) {
			gotoxy(25, 12);
			cout << "The Factorial of " << num << " is: 0.";
		}
		else (flag == 1); {
			gotoxy(25, 12);
			cout << "The Factorial of " << num << " is: " << Factorials << ".";
		}
		gotoxy(10, 15);
		cout << "Press Any Key to Go Back to Loop Programs Menu (For Loops Version)";
		system("pause>0");
		break; }

		case 4:
			// Function without Argument that does not Returns a Value
			// Fibonacci Series (For Loop)
		{Fibonacci();
		break; }

		case 5:
			// Function withour Arguments that Returns a Value
			// Reverse Number (For Loop)
		{long int Rev = ReverseNum();
		gotoxy(20, 12);
		cout << "The Reverse of the Number is: " << Rev << ".";
		gotoxy(10, 15);
		cout << "Press Any Key to Go Back to Loop Programs Menu (For Loops Version)";
		system("pause>0");
		break; }

		case 6:
			// Function without Argument that does not Returns a Value
			// Palindrome Identifier (For Loop)
		{Palindrome();
		break; }

		case 7:
			// Function with Arguments that does not Returns a Value
			// Decimal to Binary (For Loop)
		{system("CLS");
		N binary[10], num, i = 0;
		gotoxy(30, 7);
		cout << "---Decimal to Binary---";
		gotoxy(32, 10);
		cout << "Enter a Number: ";
		cin >> num;
		N decimal = num;
		DeciToBina(binary, num, i, decimal);
		break; }

		case 8:
			// Function with Arguments that Returns a Value
			// Add All Even 1-N (For Loop)
		{system("CLS");
		N N, ctr = 1, sum = 0;
		gotoxy(30, 7);
		cout << "---Add All Even 1-N---";
		gotoxy(32, 11);
		cout << "Enter a Number: ";
		cin >> N;
		sum = AddEven(N, ctr, sum);
		gotoxy(21, 13);
		cout << "The Sum of All Even Numbers from 1-" << N << " is: " << sum;
		gotoxy(10, 15);
		cout << "Press Any Key to Go Back to Loop Programs Menu (For Loops Version)";
		system("pause>0");
		break; }

		case 9:
			// Function with Arguments that does not Returns a Value
			// Sum of Square of All Even N-M (For Loop)
		{system("CLS");
		N N, M, ctr, sq = 0, sum = 0;
		gotoxy(25, 7);
		cout << "---Sum of Square of All Even N-M---";
		gotoxy(25, 10);
		cout << "Enter the Starting Number: ";
		cin >> N;
		gotoxy(25, 12);
		cout << "Enter the Ending Number: ";
		cin >> M;
		ctr = N;
		AddSquaEven(N, M, ctr, sq, sum);
		break; }

		case 10:
			// Function without Argument that does not Returns a Value
			// Print Letters A-Z (For Loop)
		{PrintAZ();
		break; }

		case 11:
			break;

		default:
			gotoxy(20, 23);
			cout << "Invalid Choice.";
			system("pause>0");
			break;
		}
	} while (choice <= 10);
}

// While Loops Submenu Switch
void WhileLoops() {
	N choice;
	do {
		system("CLS");
		gotoxy(26, 6);
		cout << "---LOOP PROGRAMS MENU---";
		gotoxy(28, 7);
		cout << "*While Loop Version*";
		gotoxy(20, 9);
		cout << "1 - Print 1-10";
		gotoxy(20, 10);
		cout << "2 - Print All Even 1-N";
		gotoxy(20, 11);
		cout << "3 - Factorial Identifier";
		gotoxy(20, 12);
		cout << "4 - Fibonacci Series";
		gotoxy(20, 13);
		cout << "5 - Reverse Number";
		gotoxy(20, 14);
		cout << "6 - Palindrome Identifier";
		gotoxy(20, 15);
		cout << "7 - Decimal to Binary";
		gotoxy(20, 16);
		cout << "8 - Add All Even 1-N";
		gotoxy(20, 17);
		cout << "9 - Sum of Square of All Even N-M";
		gotoxy(20, 18);
		cout << "10 - Print Letters A-Z";
		gotoxy(20, 19);
		cout << "11 - Back";
		gotoxy(20, 21);
		cout << "Enter your Choice: ";
		cin >> choice;
		switch (choice)
		{

		case 1:
			// Function with Arguments that does not Returns a Value
			// Print 1-10 (While Loop)
		{system("CLS");
		N ctr = 1, x = 20;
		PrintOneTen1(ctr, x);
		break; }

		case 2:
			// Function with Arguments that does not Returns a Value
			// Print All Even 1-N (While Loop)
		{system("CLS");
		N N, ctr = 1, x = 15;
		gotoxy(26, 7);
		cout << "---Print All Even 1-N---";
		gotoxy(27, 10);
		cout << "Enter a Number: ";
		cin >> N;
		PrintEven1(N, ctr, x);
		break; }

		case 3:
			// Function with Arguments that Returns a Value
			// Factorial Identifier (While Loop)
		{system("CLS");
		N num, i = 1, Factorials = 1, flag = 0;
		gotoxy(26, 7);
		cout << "---Factorial Identifier---";
		gotoxy(30, 10);
		cout << "Enter a Number: ";
		cin >> num;
		flag = Factorial1(num, i, Factorials, flag);
		Factorials = Factorial1(num, i, Factorials, flag);
		if (flag == 0) {
			gotoxy(25, 12);
			cout << "The Factorial of " << num << " is: 0.";
		}
		else (flag == 1); {
			gotoxy(25, 12);
			cout << "The Factorial of " << num << " is: " << Factorials << ".";
		}
		gotoxy(10, 15);
		cout << "Press Any Key to Go Back to Loop Programs Menu (For Loops Version)";
		system("pause>0");
		break; }

		case 4:
			// Function without Argument that does not Returns a Value
			// Fibonacci Series (While Loop)
		{Fibonacci1();
		break; }

		case 5:
			// Function withour Arguments that Returns a Value
			// Reverse Number (While Loop)
		{long int Rev = ReverseNum1();
		gotoxy(20, 12);
		cout << "The Reverse of the Number is: " << Rev << ".";
		gotoxy(10, 15);
		cout << "Press Any Key to Go Back to Loop Programs Menu (While Loops Version)";
		system("pause>0");
		break; }

		case 6:
			// Function without Argument that does not Returns a Value
			// Palindrome Identifier (While Loop)
		{Palindrome1();
		break; }

		case 7:
			// Function with Arguments that does not Returns a Value
			// Decimal to Binary (While Loop)
		{system("CLS");
		N binary[10], num, i = 0;
		gotoxy(30, 7);
		cout << "---Decimal to Binary---";
		gotoxy(32, 10);
		cout << "Enter a Number: ";
		cin >> num;
		N decimal = num;
		DeciToBina1(binary, num, i, decimal);
		break; }

		case 8:
			// Function with Arguments that Returns a Value
			// Add All Even 1-N (While Loop)
		{system("CLS");
		N N, ctr = 1, sum = 0;
		gotoxy(30, 7);
		cout << "---Add All Even 1-N---";
		gotoxy(32, 11);
		cout << "Enter a Number: ";
		cin >> N;
		sum = AddEven1(N, ctr, sum);
		gotoxy(21, 13);
		cout << "The Sum of All Even Numbers from 1-" << N << " is: " << sum;
		gotoxy(10, 15);
		cout << "Press Any Key to Go Back to Loop Programs Menu (While Loops Version)";
		system("pause>0");
		break; }

		case 9:
			// Function with Arguments that does not Returns a Value
			// Sum of Square of All Even N-M (While Loop)
		{system("CLS");
		N N, M, ctr, sq = 0, sum = 0;
		gotoxy(25, 7);
		cout << "---Sum of Square of All Even N-M---";
		gotoxy(25, 10);
		cout << "Enter the Starting Number: ";
		cin >> N;
		gotoxy(25, 12);
		cout << "Enter the Ending Number: ";
		cin >> M;
		ctr = N;
		AddSquaEven1(N, M, ctr, sq, sum);
		break; }

		case 10:
			// Function without Argument that does not Returns a Value
			// Print Letters A-Z (While Loop)
		{PrintAZ1();
		break; }

		case 11:
			break;

		default:
			gotoxy(20, 23);
			cout << "Invalid Choice.";
			system("pause>0");
			break;
		}
	} while (choice <= 10);
}

// Do-While Loops Submenu Switch
void DoWhileLoops() {
	N choice;
	do {
		system("CLS");
		gotoxy(26, 6);
		cout << "---LOOP PROGRAMS MENU---";
		gotoxy(26, 7);
		cout << "*Do/ While Loop Version*";
		gotoxy(20, 9);
		cout << "1 - Print 1-10";
		gotoxy(20, 10);
		cout << "2 - Print All Even 1-N";
		gotoxy(20, 11);
		cout << "3 - Factorial Identifier";
		gotoxy(20, 12);
		cout << "4 - Fibonacci Series";
		gotoxy(20, 13);
		cout << "5 - Reverse Number";
		gotoxy(20, 14);
		cout << "6 - Palindrome Identifier";
		gotoxy(20, 15);
		cout << "7 - Decimal to Binary";
		gotoxy(20, 16);
		cout << "8 - Add All Even 1-N";
		gotoxy(20, 17);
		cout << "9 - Sum of Square of All Even N-M";
		gotoxy(20, 18);
		cout << "10 - Print Letters A-Z";
		gotoxy(20, 19);
		cout << "11 - Back";
		gotoxy(20, 21);
		cout << "Enter your Choice: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			// Function with Arguments that does not Returns a Value
			// Print 1-10 (Do-While Loop)
		{system("CLS");
		N ctr = 1, x = 20;
		PrintOneTen2(ctr, x);
		break; }

		case 2:
			// Function with Arguments that does not Returns a Value
			// Print All Even 1-N (Do-While Loop)
		{system("CLS");
		N N, ctr = 1, x = 15;
		gotoxy(26, 7);
		cout << "---Print All Even 1-N---";
		gotoxy(27, 10);
		cout << "Enter a Number: ";
		cin >> N;
		PrintEven2(N, ctr, x);
		break; }

		case 3:
			// Function with Arguments that Returns a Value
			// Factorial Identifier (Do-While Loop)
		{system("CLS");
		N num, i = 1, Factorials = 1, flag = 0;
		gotoxy(26, 7);
		cout << "---Factorial Identifier---";
		gotoxy(30, 10);
		cout << "Enter a Number: ";
		cin >> num;
		flag = Factorial2(num, i, Factorials, flag);
		Factorials = Factorial2(num, i, Factorials, flag);
		if (flag == 0) {
			gotoxy(25, 12);
			cout << "The Factorial of " << num << " is: 0.";
		}
		else (flag == 1); {
			gotoxy(25, 12);
			cout << "The Factorial of " << num << " is: " << Factorials << ".";
		}
		gotoxy(10, 15);
		cout << "Press Any Key to Go Back to Loop Programs Menu (For Loops Version)";
		system("pause>0");
		break; }

		case 4:
			// Function without Argument that does not Returns a Value
			// Fibonacci Series (Do-While Loop)
		{Fibonacci2();
		break; }

		case 5:
			// Function withour Arguments that Returns a Value
			// Reverse Number (Do-While Loop)
		{long int Rev = ReverseNum2();
		gotoxy(20, 12);
		cout << "The Reverse of the Number is: " << Rev << ".";
		gotoxy(7, 15);
		cout << "Press Any Key to Go Back to Loop Programs Menu (Do/ While Loops Version)";
		system("pause>0");
		break; }

		case 6:
			// Function without Argument that does not Returns a Value
			// Palindrome Identifier (Do-While Loop)
		{Palindrome2();
		break; }

		case 7:
			// Function with Arguments that does not Returns a Value
			// Decimal to Binary (Do-While Loop)
		{system("CLS");
		N binary[10], num, i = 0;
		gotoxy(30, 7);
		cout << "---Decimal to Binary---";
		gotoxy(32, 10);
		cout << "Enter a Number: ";
		cin >> num;
		N decimal = num;
		DeciToBina2(binary, num, i, decimal);
		break; }

		case 8:
			// Function with Arguments that Returns a Value
			// Add All Even 1-N (Do-While Loop)
		{system("CLS");
		N N, ctr = 1, sum = 0;
		gotoxy(30, 7);
		cout << "---Add All Even 1-N---";
		gotoxy(32, 11);
		cout << "Enter a Number: ";
		cin >> N;
		sum = AddEven2(N, ctr, sum);
		gotoxy(21, 13);
		cout << "The Sum of All Even Numbers from 1-" << N << " is: " << sum;
		gotoxy(7, 15);
		cout << "Press Any Key to Go Back to Loop Programs Menu (Do/ While Loops Version)";
		system("pause>0");
		break; }

		case 9:
			// Function with Arguments that does not Returns a Value
			// Sum of Square of All Even N-M (Do-While Loop)
		{system("CLS");
		N N, M, ctr, sq = 0, sum = 0;
		gotoxy(25, 7);
		cout << "---Sum of Square of All Even N-M---";
		gotoxy(25, 10);
		cout << "Enter the Starting Number: ";
		cin >> N;
		gotoxy(25, 12);
		cout << "Enter the Ending Number: ";
		cin >> M;
		ctr = N;
		AddSquaEven2(N, M, ctr, sq, sum);
		break; }

		case 10:
			// Function without Argument that does not Returns a Value
			// Print Letters A-Z (Do-While Loop)
		{PrintAZ2();
		break; }

		case 11:
			break;

		default:
			gotoxy(20, 23);
			cout << "Invalid Choice.";
			system("pause>0");
			break;
		}
	} while (choice <= 10);
}

// --------------------Sub Menus--------------------

// Sequence Menu Switch
void SequenceMenu() {
	char choice;
	do {
		system("CLS");
		gotoxy(26, 6);
		cout << "---SEQUENCE PROGRAMS MENU---";
		gotoxy(20, 8);
		cout << "A - Roots of a Quadratic Equation";
		gotoxy(20, 9);
		cout << "B - Cube and Square";
		gotoxy(20, 10);
		cout << "C - Area and Perimeter of Rectangle";
		gotoxy(20, 11);
		cout << "D - Swapped Values";
		gotoxy(20, 12);
		cout << "E - Gross Pay and Net Pay";
		gotoxy(20, 13);
		cout << "F - Sum, Difference, Product, and Quotient";
		gotoxy(20, 14);
		cout << "G - Area and Circumference of Circle";
		gotoxy(20, 15);
		cout << "H - Celsius to Fahrenheit";
		gotoxy(20, 16);
		cout << "I - Total Sales";
		gotoxy(20, 17);
		cout << "J - Order Change";
		gotoxy(20, 18);
		cout << "K - Back";
		gotoxy(20, 20);
		cout << "Enter your Choice: ";
		cin >> choice;
		switch (choice)
		{

		case 'A':
			// Function with Arguements that does not Returns a Value
			// Roots of a Quadratic Equation
		{system("CLS");
		double a, b, c, rootPart = 0, denom = 0, root1 = 0, root2 = 0;
		gotoxy(26, 7);
		cout << "---Roots of a Quadratic Equation---";
		gotoxy(20, 10);
		cout << "Enter a of the Quadratic Equation: ";
		cin >> a;
		gotoxy(20, 11);
		cout << "Enter b of the Quadratic Equation: ";
		cin >> b;
		gotoxy(20, 12);
		cout << "Enter c of the Quadratic Equation: ";
		cin >> c;
		RootsQuad(a, b, c, rootPart, denom, root1, root2);
		break; }

		case 'B':
			// Function with Arguments that does not Returns a Value
			// Cube and Square
		{system("CLS");
		double num;
		gotoxy(30, 7);
		cout << "---Cube and Square---";
		gotoxy(25, 10);
		cout << "Enter a Number: ";
		cin >> num;
		CubeSquare(num);
		break; }

		case 'C':
			// Function with Arguments that does not Returns a Value
			// Area and Perimeter of Rectangle
		{system("CLS");
		double length, width;
		gotoxy(25, 7);
		cout << "---Area and Perimeter of Rectangle---";
		gotoxy(18, 10);
		cout << "Enter the Length of a Rectangle: ";
		cin >> length;
		gotoxy(18, 11);
		cout << "Enter the Width of a Rectangle: ";
		cin >> width;
		AreaPeri(length, width);
		break; }

		case 'D':
			// Function with Arguments that does not Returns a Value
			// Swapped Values
		{system("CLS");
		float a, b, temp = 0;
		gotoxy(28, 7);
		cout << "---Swapped Values---";
		gotoxy(25, 10);
		cout << "Enter Variable a: ";
		cin >> a;
		gotoxy(25, 11);
		cout << "Enter Variable b: ";
		cin >> b;
		SwapValues(a, b, temp);
		break; }

		case 'E':
			// Function without Argument that does not Returns a Value
			// Gross Pay and Net Pay
		{GrossNet();
		break; }

		case 'F':
			// Function with Arguments that does not Returns a Value
			// Sum, Difference, Product, and Quotient
		{system("CLS");
		double x, y;
		gotoxy(20, 7);
		cout << "---Sum, Difference, Product, and Quotient---";
		gotoxy(25, 9);
		cout << "Enter a Number: ";
		cin >> x;
		gotoxy(25, 11);
		cout << "Enter another Number: ";
		cin >> y;
		SumDifProQuo(x, y);
		break; }

		case 'G':
			// Function with Arguments that does not Returns a Value
			// Area and Circumference of Circle
		{system("CLS");
		double diameter;
		gotoxy(20, 7);
		cout << "---Area and Circumference of Circle---";
		gotoxy(20, 10);
		cout << "Enter the Diameter of a Circle: ";
		cin >> diameter;
		AreaCircum(diameter);
		break; }

		case 'H':
			// Function with Arguments that Returns a Value
			// Celsius to Fahrenheit
		{system("CLS");
		float C;
		gotoxy(30, 7);
		cout << "---Celsius to Fahrenheit---";
		gotoxy(25, 11);
		cout << "Enter a Temperature in Celsius: ";
		cin >> C;
		float F = CeltoFar(C);
		gotoxy(18, 13);
		cout << "The Fahrenheit Equivalent of the Temperature is: " << fixed << setprecision(2) << F;
		gotoxy(20, 15);
		cout << "Press Any Key to Go Back to Sequence Programs Menu";
		system("pause>0");
		break; }

		case 'I':
			// Function without Argument that Returns a Value
			// Total Sales
		{double Total_Sales = TotalSales();
		gotoxy(25, 14);
		cout << "Your Total Sales is: P " << fixed << setprecision(2) << Total_Sales;
		gotoxy(20, 16);
		cout << "Press Any Key to Go Back to Sequence Programs Menu";
		system("pause>0");
		break; }

		case 'J':
			// Function with Arguments that does not Returns a Value
			// Order Change
		{system("CLS");
		N order_num;
		float total_amount, amount_tender, change = 0;
		gotoxy(28, 7);
		cout << "---Order Change---";
		gotoxy(20, 10);
		cout << "Enter the Order Number: ";
		cin >> order_num;
		gotoxy(20, 11);
		cout << "Enter the Total Amount of Order: P ";
		cin >> total_amount;
		gotoxy(20, 12);
		cout << "Enter the Amount Tender: P ";
		cin >> amount_tender;
		OrderChange(total_amount, amount_tender, change);
		break; }

		case 'K':
			break;

		default:
			gotoxy(20, 22);
			cout << "Invalid Choice.";
			system("pause>0");
			break;
		}
	} while (choice <= 'J');
}

// Selection Menu Switch
void SelectionMenu() {
	char choice;
	do {
		system("CLS");
		gotoxy(26, 6);
		cout << "---SELECTION PROGRAMS MENU---";
		gotoxy(20, 8);
		cout << "A - Positive, Negative, or Neutral";
		gotoxy(20, 9);
		cout << "B - Odd or Even";
		gotoxy(20, 10);
		cout << "C - Largest Among the 3";
		gotoxy(20, 11);
		cout << "D - Largest Among the 2";
		gotoxy(20, 12);
		cout << "E - Prime Number Identifier";
		gotoxy(20, 13);
		cout << "F - Passed or Failed";
		gotoxy(20, 14);
		cout << "G - Commission of the Salesman";
		gotoxy(20, 15);
		cout << "H - Vowel or Consonant";
		gotoxy(20, 16);
		cout << "I - Back";
		gotoxy(20, 18);
		cout << "Enter your Choice: ";
		cin >> choice;
		switch (choice)
		{

		case 'A':
			// Function with Arguments that does not Returns a Value
			// Positive, Negative, or Neutral
		{system("CLS");
		float num;
		gotoxy(23, 7);
		cout << "---Positive, Negative, or Neutral---";
		gotoxy(30, 10);
		cout << "Enter a Number: ";
		cin >> num;
		PosNegNeu(num);
		break; }

		case 'B':
			// Function with Arguments that Returns a Value
			// Odd or Even
		{system("CLS");
		N n, flag = 0;
		gotoxy(30, 7);
		cout << "---Odd or Even---";
		gotoxy(29, 10);
		cout << "Enter a number: ";
		cin >> n;
		flag = OddEven(n, flag);
		if (flag == 1) {
			gotoxy(29, 12);
			cout << n << " is an Even Number.";
		}
		else {
			gotoxy(29, 12);
			cout << n << " is an Odd Number.";
		}
		gotoxy(17, 15);
		cout << "Press Any Key to Go Back to Selection Programs Menu";
		system("pause>0");
		break; }

		case 'C':
			// Function with Arguments that Returns a Value
			// Largest Among the 3
		{system("CLS");
		float a, b, c, flag = 0;
		gotoxy(25, 7);
		cout << "---Largest Among the 3---";
		gotoxy(23, 9);
		cout << "Enter the first number: ";
		cin >> a;
		gotoxy(23, 11);
		cout << "Enter the second number: ";
		cin >> b;
		gotoxy(23, 13);
		cout << "Enter the third number: ";
		cin >> c;
		flag = LargestOnThree(a, b, c, flag);
		if (flag == 0) {
			gotoxy(18, 15);
			cout << a << " is the Largest Among the Three Numbers.";
		}
		else if (flag == 1) {
			gotoxy(18, 15);
			cout << b << " is the Largest Among the Three Numbers.";
		}
		else if (flag == 2) {
			gotoxy(18, 15);
			cout << c << " is the Largest Among the Three Nummbers.";
		}
		gotoxy(15, 17);
		cout << "Press Any Key to Go Back to Selection Programs Menu";
		system("pause>0");
		break; }

		case 'D':
			// Function with Arguments that does not Returns a Value
			// Largest Among the 2
		{system("CLS");
		float a, b;
		gotoxy(25, 7);
		cout << "---Largest Among the 2---";
		gotoxy(23, 10);
		cout << "Enter the first number: ";
		cin >> a;
		gotoxy(23, 12);
		cout << "Enter the second number: ";
		cin >> b;
		LargestOnTwo(a, b);
		break; }

		case 'E':
			// Function with Arguments that Returns a Value
			// Prime Number Identifier
		{system("CLS");
		N num1, p = 2, m = 1;
		gotoxy(25, 7);
		cout << "---Prime Number Identifier---";
		gotoxy(30, 10);
		cout << "Enter a number: ";
		cin >> num1;
		m = PrimeNum(num1, p, m);
		if (m == 1) {
			gotoxy(25, 12);
			cout << num1 << " is a Prime Number.";
		}
		else {
			gotoxy(25, 12);
			cout << num1 << " is Not a Prime Number.";
		}
		gotoxy(17, 15);
		cout << "Press Any Key to Go Back to Selection Programs Menu";
		system("pause>0");
		break; }

		case 'F':
			// Function without Argument that Returns a Value
			// Passed or Failed
		{float average = PassFail();
		if (average < 75) {
			gotoxy(22, 15);
			cout << "Your General Average is : ";
			cout << fixed << setprecision(2) << average << ", Failed.";
		}
		else {
			gotoxy(22, 15);
			cout << "Your General Average is : ";
			cout << fixed << setprecision(2) << average << ", Passed.";
		}
		gotoxy(18, 17);
		cout << "Press Any Key to Go Back to Selection Programs Menu";
		system("pause>0");
		break; }

		case 'G':
			// Function with Arguments that does not Returns a Value
			// Commission of the Salesman
		{system("CLS");
		double TotalSales, Commission = 0;
		gotoxy(25, 7);
		cout << "---Commission of the Salesman---";
		gotoxy(25, 11);
		cout << "Enter the Total Sales: P ";
		cin >> TotalSales;
		CommiSales(TotalSales, Commission);
		break; }

		case 'H':
			// Function without Argument that does not Returns a Value
			// Vowel or Consonant
		{VowelConso();
		break; }

		case 'I':
			break;

		default:
			gotoxy(20, 20);
			cout << "Invalid Choice.";
			system("pause>0");
			break;
		}
	} while (choice <= 'H');
}

// Loops Menu Switch
void LoopsMenu() {
	char choice;
	do {
		system("CLS");
		gotoxy(26, 6);
		cout << "---LOOP PROGRAMS MENU---";
		gotoxy(20, 8);
		cout << "A - For Loops Version";
		gotoxy(20, 9);
		cout << "B - While Version";
		gotoxy(20, 10);
		cout << "C - Do/ While Version";
		gotoxy(20, 11);
		cout << "D - Back";
		gotoxy(20, 13);
		cout << "Enter your Choice: ";
		cin >> choice;
		switch (choice)
		{

		case 'A':
			// For Loops Menu
		{
			ForLoops();
			break;
		}

		case 'B':
			// While Loops Menu
		{
			WhileLoops();
			break;
		}

		case 'C':
			// Do-While Loops Menu
		{
			DoWhileLoops();
			break;
		}

		case 'D':
			break;

		default:
		{
			gotoxy(20, 22);
			cout << "Invalid Choice.";
			system("pause>0");
			break;
		}
		}
	} while (choice <= 'C');
}

// 1-D Arrays Menu Switch
void OneArraysMenu()
{
	system("CLS");
	char choice;
	do {
		system("CLS");
		gotoxy(26, 6);
		cout << "---ARRAYS MENU---";
		gotoxy(20, 8);
		cout << "A - Input Elements of the Array";
		gotoxy(20, 9);
		cout << "B - Display the Elements of the Array";
		gotoxy(20, 10);
		cout << "C - Search Elements from the Array (Linear Search)";
		gotoxy(20, 11);
		cout << "D - Sort the Elements of the Array (Bubble Sort)";
		gotoxy(20, 12);
		cout << "E - Delete Element from the Array";
		gotoxy(20, 13);
		cout << "F - Update the Elements of the Array";
		gotoxy(20, 14);
		cout << "G - Largest Element in the Array";
		gotoxy(20, 15);
		cout << "H - Smallest Element in the Array";
		gotoxy(20, 16);
		cout << "I - Display All Even Numbers and its Sum";
		gotoxy(20, 17);
		cout << "J - Display All Odd Numbers and Sum of Squared Odds";
		gotoxy(20, 18);
		cout << "K - Sum of All Elements of the Array and Sum of Cube of Elements";
		gotoxy(20, 19);
		cout << "L - Index of Smallest Element of Array";
		gotoxy(20, 20);
		cout << "M - Index of Largest Element of Array";
		gotoxy(20, 21);
		cout << "N - Sum of All Squares of the Array and All Prime Numbers";
		gotoxy(20, 22);
		cout << "O - Copies the Elements of the 1-D Array to Another 1-D";
		gotoxy(20, 23);
		cout << "P - Search an Array Element (Binary Search)";
		gotoxy(20, 24);
		cout << "Q - Sort the Elements of the Array (Insertion Sort)";
		gotoxy(20, 25);
		cout << "R - Back";
		gotoxy(20, 27);
		cout << "Enter your Choice: ";
		cin >> choice;
		switch (choice)
		{

		case 'A':
			// Function with Arguments that does not Returns a Value
			// Input Elements of the Array
		{system("CLS");
		N x = 32;
		InputArrays(x);
		break;
		}

		case'B':
			// Function without Argument that does not Returns a Value
			// Display the Elements of the Array
		{DisplayArrays();
		break;
		}

		case 'C':
			// Function with no Argument that does not Returns a Value
			// Search Elements from the Array (Linear Search)
		{LinearSearch();
		break;
		}

		case 'D':
			// Function without Argument that does not Returns a Value
			// Sort the Elements of the Array (Bubble Sort)
		{SortBubble();
		break;
		}

		case 'E':
			// Function with Arguments that does not Returns a Value
			// Delete Element from the Array
		{system("CLS");
		N N, i = 0;
		gotoxy(26, 6);
		cout << "---Delete Element from the Array---";
		gotoxy(26, 9);
		cout << "The Elements are: ";
		for (i; i < 5; i++) {
			cout << score[i] << " ";
		}
		gotoxy(26, 11);
		cout << "Enter the Position of the Element to be Deleted: ";
		cin >> N;
		ArrayDelete(N, i);
		break;
		}

		case 'F':
			// Function with Arguments that does not Returns a Value
			// Update the Elements of the Array
		{system("CLS");
		N i = 0, j = 0, x = 49;
		UpdateArray(i, j, x);
		break;
		}

		case 'G':
			// Function with Arguments that Returns a Value
			// Largest Element in the Array
		{system("CLS");
		N i = 1, Largest = score[0];
		Largest = LargestArr(i, Largest);
		gotoxy(32, 9);
		cout << "Largest Element: " << Largest;
		gotoxy(26, 13);
		cout << "Press Any Key to Go Back to Arrays Menu";
		system("pause>0");
		break;
		}

		case 'H':
			// Function with Arguments that Returns a Value
			// Smallest Element in the Array
		{system("CLS");
		N i = 1, Smallest = score[0];
		Smallest = SmallestArr(i, Smallest);
		gotoxy(32, 9);
		cout << "Smallest Element: " << Smallest;
		gotoxy(26, 13);
		cout << "Press Any Key to Go Back to Arrays Menu";
		system("pause>0");
		break;
		}

		case 'I':
			// Function with Arguments that does not Return a Value
			// Display All Even Numbers and its Sum
		{system("CLS");
		N x = 44, EvenSum = 0, i = 0;
		Even_Sum(x, EvenSum, i);
		break;
		}

		case 'J':
			// Function with Arguments that does not Return a Value
			// Display All Odd Numbers and Sum of Squared Odds
		{	system("CLS");
		N x = 43, OddSum = 0, i = 0, j = 0;
		Odd_Sum(x, OddSum, i, j);
		break;
		}

		case 'K':
			// Function without Argument that Returns a Value 
			// Sum of All Elements of the Array and Sum of Cube of Elements
		{N CubedSum = SumArrays();
		gotoxy(30, 11);
		cout << "The Sum of All Cubed Elements is: " << CubedSum;
		gotoxy(26, 16);
		cout << "Press Any Key to Go Back to Arrays Menu";
		system("pause>0");
		break;
		}

		case 'L':
			// Function without Argument that Returns a Value
			// Index of Smallest Element of Array
		{N j = SmallestIndex();
		gotoxy(25, 9);
		cout << "Index of the Smallest Element: " << j;
		gotoxy(26, 13);
		cout << "Press Any Key to Go Back to Arrays Menu";
		system("pause>0");
		break;
		}

		case 'M':
			// Function without Argument that Returns a Value
			// Index of Largest Element of Array
		{N j = LargestIndex();
		gotoxy(25, 9);
		cout << "Index of the Largest Element: " << j;
		gotoxy(26, 13);
		cout << "Press Any Key to Go Back to Arrays Menu";
		system("pause>0");
		break;
		}

		case 'N':
			// Function with Arguments that Returns a Value
			// Sum of All Squares of the Array and All Prime Numbers
		{system("CLS");
		N Square = 0, Sum = 0, i = 0;
		Sum = SumSquare(Square, Sum, i);
		gotoxy(27, 10);
		cout << "The Sum of All Squared Elements: " << Sum;
		gotoxy(27, 12);
		cout << "The Prime Number Elements are: ";
		for (i = 0; i < 5; i++) {
			if (score[i] != 2 && score[i] != 3) {
				if (score[i] % 2 != 0) {
					if (score[i] % 3 != 0) {
						cout << score[i] << " ";
					}
				}
			}
			else {
				cout << score[i] << " ";
			}
		}
		gotoxy(26, 16);
		cout << "Press Any Key to Go Back to Arrays Menu";
		system("pause>0");
		break;
		}

		case 'O':
			// Function without Argument and doesn't Return a Value
			// Copies the Elements of the 1-D Array to Another 1-D
		{One_DtoOne_D();
		break;
		}

		case 'P':
			// Function without Argument that does not Returns a Value
			// Search an Array Element (Binary Search)
		{BinaryArray();
		break;
		}

		case 'Q':
			// Function with Arguments that does not Returns a Value
			// Sort the Elements of the Array (Insertion Sort)
		{system("CLS");
		N Key = 0, i = 0, j = 0;
		SortIsertion(Key, i, j);
		break;
		}

		case 'R':
		{
			break;
		}

		default:
		{	gotoxy(20, 30);
		cout << "Invalid Choice.";
		system("pause>0");
		break;
		}
		}
	} while (choice <= 'Q');
}

// 2-D Arrays Menu Switch
void TwoArraysMenu()
{
	system("CLS");
	N score[50][50], i, j;
	char choice;
	gotoxy(26, 6);
	cout << "---2-DIMENSIONAL ARRAYS---";
	gotoxy(20, 9);
	cout << "Input Number of Rows: ";
	cin >> i;
	gotoxy(20, 11);
	cout << "Input Number of Columns: ";
	cin >> j;
	do {
		system("CLS");
		gotoxy(26, 3);
		cout << "---2-DIMENSIONAL ARRAYS MENU---";
		gotoxy(20, 5);
		cout << "A - Input Elements of the Array";
		gotoxy(20, 6);
		cout << "B - Display the Elements of the Array";
		gotoxy(20, 7);
		cout << "C - Search Elements from the Array (Linear Search)";
		gotoxy(20, 8);
		cout << "D - Sort the Elements of the Array (Bubble Sort)";
		gotoxy(20, 9);
		cout << "E - Delete Element from the Array";
		gotoxy(20, 10);
		cout << "F - Update the Elements of the Array";
		gotoxy(20, 11);
		cout << "G - Largest Element in the Array";
		gotoxy(20, 12);
		cout << "H - Smallest Element in the Array";
		gotoxy(20, 13);
		cout << "I - Display All Even Numbers and its Sum";
		gotoxy(20, 14);
		cout << "J - Display All Odd Numbers and Sum of Squared Odds";
		gotoxy(20, 15);
		cout << "K - Sum of All Elements of the Array & Sum of Cube of Elements";
		gotoxy(20, 16);
		cout << "L - Index of Smallest Element of Array";
		gotoxy(20, 17);
		cout << "M - Index of Largest Element of Array";
		gotoxy(20, 18);
		cout << "N - Sum of All Squares of the Array & All Prime Numbers";
		gotoxy(20, 19);
		cout << "O - Copies the Elements of the 2-D Array to Another 2-D";
		gotoxy(20, 20);
		cout << "P - Search an Array Element (Binary Search)";
		gotoxy(20, 21);
		cout << "Q - Sort the Elements of the Array (Insertion Sort)";
		gotoxy(20, 22);
		cout << "R - Back";
		gotoxy(20, 24);
		cout << "Please Don't Forget to Input Elements First ^v^";
		gotoxy(20, 25);
		cout << "Enter your Choice: ";
		cin >> choice;
		switch (choice)
		{

		case 'A':
			// Function with Arguments that Returns a Value
			// Input Elements of the Array
		{system("CLS");
		InputArrays(score, i, j);
		break;
		}

		case 'B':
			// Function with Arguments that does not Returns a Value
			// Display the Elements of the Array
		{DisplayArrays(score, i, j);
		break;
		}

		case 'C':
			// Function with Arguments that does not Returns a Value
			// Search Elements from the Array (Linear Search)
		{LinearSearch(score, i, j);
		break;
		}

		case 'D':
			// Function with Argument that does not Returns a Value
			// Sort the Elements of the Array (Bubble Sort)
		{SortBubble(score, i, j);
		break;
		}

		case 'E':
			// Function with Arguments that Returns a Value
			// Delete Element from the Array
		{system("CLS");
		N Delete = ArrayDelete(score, i, j);
		if (Delete == 1) {
			gotoxy(26, 14);
			cout << "The Elements of the Array Now is: ";
			for (N row1 = 0; row1 < i; row1++) {
				for (N col1 = 0; col1 < j; col1++) {
					cout << score[row1][col1] << "  ";
				}
			}
		}
		else {
			gotoxy(26, 14);
			cout << "That Variable Does Not Belong to the Array.";
		}
		gotoxy(26, 16);
		cout << "Press Any Key to Go Back to Arrays Menu";
		system("pause>0");
		break;
		}

		case 'F':
			// Function with Arguments that Returns a Value
			// Update the Elements of the Array
		{system("CLS");
		UpdateArray(score, i, j);
		break;
		}

		case 'G':
			// Function with Arguments that Returns a Value
			// Largest Element in the Array
		{system("CLS");
		N Largest = LargestArr(score, i, j);
		gotoxy(32, 9);
		cout << "Largest Element: " << Largest;
		gotoxy(24, 13);
		cout << "Press Any Key to Go Back to Arrays Menu";
		system("pause>0");
		break;
		}

		case 'H':
			// Function with Arguments that Returns a Value
			// Smallest Element in the Array
		{system("CLS");
		N Smallest = SmallestArr(score, i, j);
		gotoxy(32, 9);
		cout << "Smallest Element: " << Smallest;
		gotoxy(24, 13);
		cout << "Press Any Key to Go Back to Arrays Menu";
		system("pause>0");
		break;
		}

		case 'I':
			// Function with Arguments that does not Return a Value
			// Display All Even Numbers and its Sum
		{system("CLS");
		Even_Sum(score, i, j);
		break;
		}

		case 'J':
			// Function with Arguments that does not Return a Value
			// Display All Odd Numbers and Sum of Squared Odds
		{	system("CLS");
		Odd_Sum(score, i, j);
		break;
		}

		case 'K':
			// Function with Arguments that Returns a Value 
			// Sum of All Elements of the Array & Sum of Cube of Elements
		{N CubedSum = SumArrays(score, i, j);
		gotoxy(30, 12);
		cout << "The Sum of All Cubed Elements is: " << CubedSum;
		gotoxy(26, 16);
		cout << "Press Any Key to Go Back to Arrays Menu";
		system("pause>0");
		break;
		}

		case 'L':
			// Function with Arguments that does not Return a Value
			// Index of Smallest Element of Array
		{system("CLS");
		SmallestIndex(score, i, j);
		break;
		}

		case 'M':
			// Function with Arguments that does not Return a Value
			// Index of Largest Element of Array
		{system("CLS");
		LargestIndex(score, i, j);
		break;
		}

		case 'N':
			// Function with Arguments that Returns a Value
			// Sum of All Squares of the Array and All Prime Numbers
		{system("CLS");
		N Sum = SumSquare(score, i, j);
		gotoxy(27, 10);
		cout << "The Sum of All Squared Elements: " << Sum;
		gotoxy(27, 12);
		cout << "The Prime Number Elements are: ";
		for (N row1 = 0; row1 < i; row1++) {
			for (N col1 = 0; col1 < j; col1++) {
				if (score[row1][col1] != 1) {
					if (score[row1][col1] != 2 && score[row1][col1] != 3) {
						if (score[row1][col1] % 2 != 0) {
							if (score[row1][col1] % 3 != 0) {
								cout << score[row1][col1] << "  ";
							}
						}
					}
					else {
						cout << score[row1][col1] << "  ";
					}
				}
			}
		}
		gotoxy(26, 16);
		cout << "Press Any Key to Go Back to Arrays Menu";
		system("pause>0");
		break;
		}

		case 'O':
			// Function with Arguments and does not Return a Value
			// Copies the Elements of the 2-D Array to Another 2-D
		{system("CLS");
		Two_DtoTwo_D(score, i, j);
		break;
		}

		case 'P':
			// Function with Arguments that does not Returns a Value
			// Search an Array Element (Binary Search)
		{BinaryArray(score, i, j);
		break;
		}

		case 'Q':
			// Function with Arguments that does not Returns a Value
			// Sort the Elements of the Array (Insertion Sort)
		{system("CLS");
		SortIsertion(score, i, j);
		break;
		}

		case 'R':
		{	break;
		}

		default:
		{	gotoxy(20, 28);
		cout << "Invalid Choice.";
		system("pause>0");
		break;
		}
		}
	} while (choice <= 'Q');
}

// Recursive Menu Switch
void RecursiveMenu() {
	char choice;
	do {
		system("CLS");
		gotoxy(26, 6);
		cout << "---RECURSIVE PROGRAMS MENU---";
		gotoxy(20, 9);
		cout << "A - Print 1-10";
		gotoxy(20, 10);
		cout << "B - Print All Even 1-N";
		gotoxy(20, 11);
		cout << "C - Factorial Identifier";
		gotoxy(20, 12);
		cout << "D - Fibonacci Series";
		gotoxy(20, 13);
		cout << "E - Reverse Number";
		gotoxy(20, 14);
		cout << "F - Palindrome Identifier";
		gotoxy(20, 15);
		cout << "G - Decimal to Binary";
		gotoxy(20, 16);
		cout << "H - Add All Even 1-N";
		gotoxy(20, 17);
		cout << "I - Sum of Square of All Even N-M";
		gotoxy(20, 18);
		cout << "J - Print Letters A-Z";
		gotoxy(20, 19);
		cout << "K - Back";
		gotoxy(20, 21);
		cout << "Enter your Choice: ";
		cin >> choice;
		switch (choice)
		{

		case 'A':
			// Function with Arguments that does not Returns a Value
			// Print 1-10
		{system("CLS");
		N ctr = 10;
		gotoxy(26, 7);
		cout << "---Print 1-10---";
		RPrintOneTen(ctr);
		gotoxy(12, 15);
		cout << "Press Any Key to Go Back to Recursive Programs Menu";
		system("pause>0");
		break; }

		case 'B':
			// Function with Arguments that does not Returns a Value
			// Print All Even 1-N
		{system("CLS");
		N N;
		gotoxy(26, 7);
		cout << "---Print All Even 1-N---";
		gotoxy(27, 10);
		cout << "Enter a Number: ";
		cin >> N;
		gotoxy(20, 12);
		cout << "These are the Even Numbers from 1-" << N;
		RPrintEven(N);
		gotoxy(12, 16);
		cout << "Press Any Key to Go Back to Recursive Programs Menu";
		system("pause>0");
		break; }

		case 'C':
			// Function with Arguments that Returns a Value
			// Factorial Identifier
		{system("CLS");
		N num;
		gotoxy(26, 7);
		cout << "---Factorial Identifier---";
		gotoxy(30, 10);
		cout << "Enter a Number: ";
		cin >> num;
		gotoxy(25, 12);
		cout << "The Factorial of " << num << " is: " << RFactorial(num) << ".";
		gotoxy(15, 15);
		cout << "Press Any Key to Go Back to Recursive Programs Menu";
		system("pause>0");
		break; }

		case 'D':
			// Function with Arguments that Returns a Value
			// Fibonacci Series
		{system("CLS");
		N N, i = 0, x = 14;
		gotoxy(26, 7);
		cout << "---Fibonacci Series---";
		gotoxy(27, 11);
		cout << "Enter a Number: ";
		cin >> N;
		gotoxy(23, 13);
		cout << "The Fibonacci Series of " << N << " is:";
		while (i < N) {
			gotoxy(x, 15);
			cout << " " << RFibonacci(i);
			i++;
			x += 2;
		}
		gotoxy(15, 17);
		cout << "Press Any Key to Go Back to Recursive Programs Menu";
		system("pause>0");
		break; }

		case 'E':
			// Function with Arguments that does not Returns a Value
			// Reverse Number
		{system("CLS");
		N num;
		gotoxy(26, 7);
		cout << "---Reverse Number---";
		gotoxy(26, 10);
		cout << "Enter a Number: ";
		cin >> num;
		gotoxy(20, 12);
		cout << "The Reverse of the Number is: ";
		RReverseNum(num);
		gotoxy(15, 15);
		cout << "Press Any Key to Go Back to Recursive Programs Menu";
		system("pause>0");
		break; }

		case 'F':
			// Function with Arguments that Returns a Value
			// Palindrome Identifier
		{system("CLS");
		string text;
		gotoxy(25, 7);
		cout << "---Palindrome Identifier---";
		gotoxy(25, 10);
		cout << "Enter a Word: ";
		cin >> text;
		if (RPalindrome(text, 0)) {
			gotoxy(25, 12);
			cout << text << " is a Palindrome Word.";
		}
		else {
			gotoxy(25, 12);
			cout << text << " is Not a Palindrome Word.";
		}
		gotoxy(15, 15);
		cout << "Press Any Key to Go Back to Recursive Programs Menu";
		system("pause>0");
		break; }

		case 'G':
			// Function with Arguments that Returns a Value
			// Decimal to Binary
		{system("CLS");
		N num;
		gotoxy(30, 7);
		cout << "---Decimal to Binary---";
		gotoxy(32, 10);
		cout << "Enter a Number: ";
		cin >> num;
		gotoxy(22, 12);
		cout << "The Equivalent Binary Number of " << num << " is: " << RDeciToBina(num);
		gotoxy(19, 15);
		cout << "Press Any Key to Go Back to Recursive Programs Menu";
		system("pause>0");
		break; }

		case 'H':
			// Function with Arguments that Returns a Value
			// Add All Even 1-N
		{system("CLS");
		N i = 2, N;
		gotoxy(30, 7);
		cout << "---Add All Even 1-N---";
		gotoxy(32, 11);
		cout << "Enter a Number: ";
		cin >> N;
		gotoxy(22, 13);
		cout << "The Sum of All Even Numbers from 1-" << N << " is: " << RAddEven(i, N);
		gotoxy(18, 15);
		cout << "Press Any Key to Go Back to Recursive Programs Menu";
		system("pause>0");
		break; }

		case 'I':
			// Function with Arguments that Returns a Value
			// Sum of Square of All Even N-M
		{system("CLS");
		N N, M;
		gotoxy(25, 7);
		cout << "---Sum of Square of All Even N-M---";
		gotoxy(25, 10);
		cout << "Enter the Starting Number: ";
		cin >> N;
		gotoxy(25, 12);
		cout << "Enter the Ending Number: ";
		cin >> M;
		if (N < M) {
			gotoxy(13, 14);
			cout << "The Sum of the Square of All Even Numbers from " << N << " to ";
			cout << M << " is: " << RAddSquaEven(N, M);
		}
		else {
			gotoxy(13, 14);
			cout << "The Starting Number Must Be Less Than the Ending Number.";
		}
		gotoxy(17, 16);
		cout << "Press Any Key to Go Back to  Recursive Programs Menu";
		system("pause>0");
		break; }

		case 'J':
			// Function with Arguments that does not Returns a Value
			// Print Letters A-Z
		{system("CLS");
		char letter = 'Z';
		gotoxy(29, 7);
		cout << "---Print Letters A-Z---";
		RPrintAZ(letter);
		gotoxy(18, 15);
		cout << "Press Any Key to Go Back to Recursive Programs Menu";
		system("pause>0");
		break; }

		case 'K':
			break;

		default:
			gotoxy(20, 23);
			cout << "Invalid Choice.";
			system("pause>0");
			break;
		}
	} while (choice <= 'J');
}

// Structures Menu Switch
void StructuresMenu()
{
	char choice;
	do {
		system("CLS");
		gotoxy(26, 6);
		cout << "---PROGRAMMING  2---";
		gotoxy(26, 7);
		cout << "---Student Grades---";
		gotoxy(20, 9);
		cout << "A - Add Students Info Except quiz2grade, quiz1grade,";
		gotoxy(20, 10);
		cout << "semestralgrade, equiGrade and remarks.";
		gotoxy(20, 12);
		cout << "B - Display Students Info in Horizontal Manner.";
		gotoxy(20, 14);
		cout << "C- Input the Total Score for quiz1 and qui2; these";
		gotoxy(20, 15);
		cout << "variables must be Global Variables, then Compute the";
		gotoxy(20, 16);
		cout << "quiz1Grade, quiz2grade, semestralGrade, Equigradeand remarks.";
		gotoxy(20, 18);
		cout << "D - Search Students.";
		gotoxy(20, 20);
		cout << "E - Sort Records in Descending Order Based on equiGrade.";
		gotoxy(20, 22);
		cout << "F - Back";
		gotoxy(20, 24);
		cout << "Please Don't Forget to Input Some Information First ^v^";
		gotoxy(20, 25);
		cout << "Enter your Choice: ";
		cin >> choice;
		switch (choice)
		{

		case 'A':
			// Function without Argument that does not Returns a Value
			// Add Students Info Except quiz2grade, quiz1grade, semestralgrade, equiGrade and remarks.
		{
			studentInfo();
			break;
		}

		case 'B':
			// Function without Argument that does not Returns a Value
			// Display Students Info in Horizontal Manner.
		{
			displayInfo();
			break;
		}

		case 'C':
			// Function with Arguments that does not Returns a Value
			/* Input the Total Score for quiz1and qui2; these variables must be Global Variables,
			then Compute the quiz1Grade, quiz2grade, semestralGrade, Equigradeand remarks. */
		{
			system("CLS");
			double quiz1, quiz2;
			gotoxy(26, 6);
			cout << "---Compute for Grades---";
			gotoxy(20, 8);
			cout << "Input Quiz 1 Total Score: ";
			cin >> quiz1;
			gotoxy(20, 9);
			cout << "Input Quiz 2 Total Score: ";
			cin >> quiz2;
			computeGrade(quiz1, quiz2);
			break;
		}

		case 'D':
			// Function without Argument that Returns a Value
			// Search Students.
		{
			N N = searchStudent();
			if (N == 1) {
				gotoxy(20, 15);
				cout << "The Student is Here! ";
			}
			else {
				gotoxy(20, 15);
				cout << "The Student is Not in the List!";
			}

			system("pause>0");
			break;
		}

		case 'E':
			// Function without Argument that does not Returns a Value
			// Sort Records in Descending Order Based on equiGrade.
		{
			sortedGrades();
			break;
		}

		case 'F':
		{
			break;
		}

		default:
		{
			gotoxy(20, 27);
			cout << "Invalid Choice.";
			system("pause>0");
		}
		}
	} while (choice <= 'E');
}

// File Handling Menu Switch
void FileHandlingMenu() {
	char choice;
	do {
		system("CLS");
		gotoxy(26, 6);
		cout << "---FILE HANDLING PROGRAMS MENU---";
		gotoxy(20, 9);
		cout << "A - Creates & Stores Infos in Text File";
		gotoxy(20, 10);
		cout << "B - Read an Existing Text File";
		gotoxy(20, 11);
		cout << "C - Add Data to an Existing Text File";
		gotoxy(20, 12);
		cout << "D - Creates a Receipt in a Text File";
		gotoxy(20, 13);
		cout << "E - Displays Word and Line Count of a Text File";
		gotoxy(20, 14);
		cout << "F - Back";
		gotoxy(20, 17);
		cout << "Enter your Choice: ";
		cin >> choice;
		switch (choice)
		{

		case 'A':
			// Function without Argument that does not Returns a Value
			// Creates & Stores Info in Text File
		{
			createFile();
			break;
		}

		case 'B':
			// Function without Argument that Returns a Value
			// Read an Existing Text File
		{
			readFile();
			break;
		}

		case 'C':
			// Function without Argument that does not Returns a Value
			// Add Data to an Existing Text File
		{
			adddataFile();
			break;
		}

		case 'D':
			// Function without Argument that does not Returns a Value
			// Creates a Receipt in a Text File
		{
			receiptFile();
			break;
		}

		case 'E':
			// Function without Argument that does not Returns a Value
			// Displays Word and Line Count of a Text File
		{
			word_lineFile();
			break;
		}

		case 'F':
		{
			break;
		}

		default:
		{
			gotoxy(20, 21);
			cout << "Invalid Choice.";
			system("pause>0");
		}
		}
	} while (choice <= 'E');
}

// --------------------Main Menu--------------------

N main()
{
	char choice;

	do {
		system("CLS");
		gotoxy(26, 6);
		cout << "---MAIN MENU---";
		gotoxy(20, 8);
		cout << "A - Sequence Programs";
		gotoxy(20, 9);
		cout << "B - Selection Programs";
		gotoxy(20, 10);
		cout << "C - Loop Programs";
		gotoxy(20, 11);
		cout << "D - 1-D Arrays Programs";
		gotoxy(20, 12);
		cout << "E - 2-D Arrays Programs";
		gotoxy(20, 13);
		cout << "F - Recursive Programs";
		gotoxy(20, 14);
		cout << "G - Structure Programs";
		gotoxy(20, 15);
		cout << "H - File Handling Programs";
		gotoxy(20, 16);
		cout << "I - Exit";
		gotoxy(20, 18);
		cout << "Enter your Choice: ";
		cin >> choice;
		switch (choice)
		{

		case 'A':
			// Sequence Menu
		{
			SequenceMenu();
			break;
		}

		case 'B':
			// Selection Menu
		{
			SelectionMenu();
			break;
		}

		case 'C':
			// Loops Menu
		{
			LoopsMenu();
			break;
		}

		case 'D':
			// 1-D Arrays Menu
		{
			OneArraysMenu();
			break;
		}

		case 'E':
			// 2-D Arrays Menu
		{
			TwoArraysMenu();
			break;
		}

		case 'F':
			// Recursive Menu
		{
			RecursiveMenu();
			break;
		}

		case 'G':
			// Structures Menu
		{
			StructuresMenu();
			break;
		}

		case 'H':
			// File Hadling Menu
		{
			FileHandlingMenu();
			break;
		}

		case 'I':
		{
			gotoxy(20, 25);
			cout << "Thank you for Coming!";
			system("pause>0");
			return 0;
		}

		default:
		{
			gotoxy(20, 25);
			cout << "Invalid Choice.";
			system("pause>0");
		}
		}
	} while (choice <= 'H');
}