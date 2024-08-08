#pragma once

// --------------------For Loops Programs--------------------

// Function with Arguments that does not Returns a Value
// Print 1-10 (For Loop)
void PrintOneTen(int ctr, int x) {
	gotoxy(26, 7);
	cout << "---Print 1-10---";
	for (ctr = 1; ctr < 10; ctr++) {
		gotoxy(x, 12);
		cout << ctr << ", ";
		x += 3;
	}
	cout << ctr << ".";
	gotoxy(10, 15);
	cout << "Press Any Key to Go Back to Loop Programs Menu (For Loops Version)";
	system("pause>0");
}

// Function with Arguments that does not Returns a Value
// Print All Even 1-N (For Loop)
void PrintEven(int N, int ctr, int x) {
	gotoxy(20, 12);
	cout << "These are the Even Numbers from 1-" << N;
	for (ctr; ctr <= N - 2; ctr++) {
		if (ctr % 2 == 0) {
			gotoxy(x, 14);
			cout << ctr << ", ";
			x += 4;
		}
	}
	if (ctr % 2 == 0) {
		gotoxy(x, 14);
		cout << ctr << ".";
	}
	else {
		ctr++;
		gotoxy(x, 14);
		cout << ctr << ".";
	}
	gotoxy(10, 16);
	cout << "Press Any Key to Go Back to Loop Programs Menu (For Loops Version)";
	system("pause>0");
}

// Function with Arguments that Returns a Value
// Factorial Identifier (For Loop)
int Factorial(int num, int i, int Factorials, int flag) {
	if (num == 0) {
		flag = 0;
	}
	else {
		for (i; i <= num; i++) {
			Factorials *= i;
		}
		return (Factorials);
		flag = 1;
	}
	return (flag);

}

// Function without Argument that does not Returns a Value
// Fibonacci Series (For Loop)
void Fibonacci() {
	system("CLS");
	int N, x = 15, Fib = 0, a = 1, b = 0, i = 0;
	gotoxy(26, 7);
	cout << "---Fibonacci Series---";
	gotoxy(27, 11);
	cout << "Enter a Number: ";
	cin >> N;
	gotoxy(23, 13);
	cout << "The Fibonacci Series of " << N << " is:";
	for (i; i < N; i++) {
		gotoxy(x, 15);
		cout << Fib << ", ";
		x += 4;
		Fib = a + b;
		a = b;
		b = Fib;
	}
	cout << Fib << ".";
	gotoxy(10, 17);
	cout << "Press Any Key to Go Back to Loop Programs Menu (For Loops Version)";
	system("pause>0");
}

// Function withour Arguments that Returns a Value
// Reverse Number (For Loop)
long int ReverseNum() {
	system("CLS");
	long int num, Rev = 0;
	gotoxy(26, 7);
	cout << "---Reverse Number---";
	gotoxy(26, 10);
	cout << "Enter a Number: ";
	cin >> num;
	for (num; num != 0; num /= 10) {
		Rev = (Rev * 10) + (num % 10);
	}
	return (Rev);
}

// Function without Argument that does not Returns a Value
// Palindrome Identifier (For Loop)
void Palindrome() {
	system("CLS");
	char text[20];
	int i, length, flag = 0;
	gotoxy(25, 7);
	cout << "---Palindrome Identifier---";
	gotoxy(25, 10);
	cout << "Enter a Word: ";
	cin >> text;
	length = strlen(text);
	for (i = 0; i < length; i++) {
		if (text[i] != text[length - i - 1]) {
			flag = 1;
			break;
		}
	}
	if (flag) {
		gotoxy(25, 12);
		cout << text << " is Not a Palindrome Word.";
	}
	else {
		gotoxy(25, 12);
		cout << text << " is a Palindrome Word.";
	}
	gotoxy(10, 15);
	cout << "Press Any Key to Go Back to Loop Programs Menu (For Loops Version)";
	system("pause>0");
}

// Function with Arguments that does not Returns a Value
// Decimal to Binary (For Loop)
void DeciToBina(int binary[10], int num, int i, int decimal) {
	for (i; num > 0; i++)
	{
		binary[i] = num % 2;
		num = num / 2;
	}
	gotoxy(22, 12);
	cout << "The Equivalent Binary Number of " << decimal << " is: ";
	for (i = i - 1; i >= 0; i--)
	{
		cout << binary[i];
	}
	gotoxy(10, 15);
	cout << "Press Any Key to Go Back to Loop Programs Menu (For Loops Version)";
	system("pause>0");
}

// Function with Arguments that Returns a Value
// Add All Even 1-N (For Loop)
int AddEven(int N, int ctr, int sum) {
	for (ctr; ctr <= N; ctr++) {
		if (ctr % 2 == 0) {
			sum += ctr;
		}
	}
	return (sum);
}

// Function with Arguments that does not Returns a Value
// Sum of Square of All Even N-M (For Loop)
void AddSquaEven(int N, int M, int ctr, int sq, int sum) {
	if (ctr < M) {
		for (ctr; ctr <= M; ctr++) {
			if (ctr % 2 == 0) {
				sq = ctr * ctr;
				sum += sq;
			}
		}
		gotoxy(10, 14);
		cout << "The Sum of the Square of All Even Numbers from " << N << " to ";
		cout << M << " is: " << sum;
	}
	else {
		gotoxy(10, 14);
		cout << "The Starting Number Must Be Less Than the Ending Number.";
	}
	gotoxy(10, 16);
	cout << "Press Any Key to Go Back to Loop Programs Menu (For Loops Version)";
	system("pause>0");
}

// Function without Argument that does not Returns a Value
// Print Letters A-Z (For Loop)
void PrintAZ() {
	system("CLS");
	int x = 23;
	char letter = 'A';
	string letters = "";
	gotoxy(29, 7);
	cout << "---Print Letters A-Z---";
	for (letter; letter < 'N'; letter++) {
		gotoxy(x, 11);
		cout << letter << ", ";
		x += 3;
	}
	x = 23;
	for (letter; letter < 'Z'; letter++) {
		gotoxy(x, 13);
		cout << letter << ", ";
		x += 3;
	}
	gotoxy(x, 13);
	cout << letter << ".";
	gotoxy(10, 15);
	cout << "Press Any Key to Go Back to Loop Programs Menu (For Loops Version)";
	system("pause>0");
}


