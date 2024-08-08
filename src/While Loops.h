#pragma once

// --------------------While Loops Programs--------------------

// Function with Arguments that does not Returns a Value
// Print 1-10 (While Loop)
void PrintOneTen1(int ctr, int x) {
	gotoxy(26, 7);
	cout << "---Print 1-10---";
	while (ctr < 10) {
		gotoxy(x, 12);
		cout << ctr << ", ";
		x += 3;
		ctr++;
	}
	cout << ctr << ".";
	gotoxy(10, 15);
	cout << "Press Any Key to Go Back to Loop Programs Menu (While Loops Version)";
	system("pause>0");
}

// Function with Arguments that does not Returns a Value
// Print All Even 1-N (While Loop)
void PrintEven1(int N, int ctr, int x) {
	gotoxy(20, 12);
	cout << "These are the Even Numbers from 1-" << N;
	while (ctr <= N - 2) {
		if (ctr % 2 == 0) {
			gotoxy(x, 14);
			cout << ctr << ", ";
			x += 4;
		}
		ctr++;
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
	cout << "Press Any Key to Go Back to Loop Programs Menu (While Loops Version)";
	system("pause>0");
}

// Function with Arguments that Returns a Value
// Factorial Identifier (While Loop)
int Factorial1(int num, int i, int Factorials, int flag) {
	if (num == 0) {
		flag = 0;
	}
	else {
		while (i <= num) {
			Factorials *= i;
			i++;
		}
		return (Factorials);
		flag = 1;
	}
	return (flag);
}

// Function without Argument that does not Returns a Value
// Fibonacci Series (While Loop)
void Fibonacci1() {
	system("CLS");
	int N, x = 15, Fib = 0, a = 1, b = 0, i = 0;
	gotoxy(26, 7);
	cout << "---Fibonacci Series---";
	gotoxy(27, 11);
	cout << "Enter a Number: ";
	cin >> N;
	gotoxy(23, 13);
	cout << "The Fibonacci Series of " << N << " is:";
	while (i < N) {
		gotoxy(x, 15);
		cout << Fib << ", ";
		x += 4;
		Fib = a + b;
		a = b;
		b = Fib;
		i++;
	}
	cout << Fib << ".";
	gotoxy(10, 17);
	cout << "Press Any Key to Go Back to Loop Programs Menu (While Loops Version)";
	system("pause>0");
}

// Function withour Arguments that Returns a Value
// Reverse Number (While Loop)
long int ReverseNum1() {
	system("CLS");
	long int num, Rev = 0;
	gotoxy(26, 7);
	cout << "---Reverse Number---";
	gotoxy(26, 10);
	cout << "Enter a Number: ";
	cin >> num;
	while (num != 0) {
		Rev = (Rev * 10) + (num % 10);
		num /= 10;
	}
	return (Rev);
}

// Function without Argument that does not Returns a Value
// Palindrome Identifier (While Loop)
void Palindrome1() {
	system("CLS");
	char text[20];
	int i = 0, length, flag = 0;
	gotoxy(25, 7);
	cout << "---Palindrome Identifier---";
	gotoxy(25, 10);
	cout << "Enter a Word: ";
	cin >> text;
	length = strlen(text);
	while (i < length) {
		if (text[i] != text[length - i - 1]) {
			flag = 1;
			break;
		}
		i++;
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
	cout << "Press Any Key to Go Back to Loop Programs Menu (While Loops Version)";
	system("pause>0");
}

// Function with Arguments that does not Returns a Value
// Decimal to Binary (While Loop)
void DeciToBina1(int binary[10], int num, int i, int decimal) {
	while (num > 0)
	{
		binary[i] = num % 2;
		num = num / 2;
		i++;
	}
	gotoxy(22, 12);
	cout << "The Equivalent Binary Number of " << decimal << " is: ";
	i = i - 1;
	while (i >= 0)
	{
		cout << binary[i];
		i--;
	}
	gotoxy(10, 15);
	cout << "Press Any Key to Go Back to Loop Programs Menu (While Loops Version)";
	system("pause>0");
}

// Function with Arguments that Returns a Value
// Add All Even 1-N (While Loop)
int AddEven1(int N, int ctr, int sum) {
	while (ctr <= N) {
		if (ctr % 2 == 0) {
			sum += ctr;
		}
		ctr++;
	}
	return (sum);
}

// Function with Arguments that does not Returns a Value
// Sum of Square of All Even N-M (While Loop)
void AddSquaEven1(int N, int M, int ctr, int sq, int sum) {
	if (ctr < M) {
		while (ctr <= M) {
			if (ctr % 2 == 0) {
				sq = ctr * ctr;
				sum += sq;
			}
			ctr++;
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
	cout << "Press Any Key to Go Back to Loop Programs Menu (While Loops Version)";
	system("pause>0");
}

// Function without Argument that does not Returns a Value
// Print Letters A-Z (While Loop)
void PrintAZ1() {
	system("CLS");
	int x = 23;
	char letter = 'A';
	string letters = "";
	gotoxy(29, 7);
	cout << "---Print Letters A-Z---";
	while (letter < 'N') {
		gotoxy(x, 11);
		cout << letter << ", ";
		x += 3;
		letter++;
	}
	x = 23;
	while (letter < 'Z') {
		gotoxy(x, 13);
		cout << letter << ", ";
		x += 3;
		letter++;
	}
	gotoxy(x, 13);
	cout << letter << ".";
	gotoxy(10, 15);
	cout << "Press Any Key to Go Back to Loop Programs Menu (While Loops Version)";
	system("pause>0");
}


