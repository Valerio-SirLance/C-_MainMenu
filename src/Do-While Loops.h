#pragma once

// --------------------Do-While Loops Programs--------------------

// Function with Arguments that does not Returns a Value
// Print 1-10 (Do-While Loop)
void PrintOneTen2(int ctr, int x) {
	gotoxy(26, 7);
	cout << "---Print 1-10---";
	do {
		gotoxy(x, 12);
		cout << ctr << ", ";
		x += 3;
		ctr++;
	} while (ctr < 10);
	cout << ctr << ".";
	gotoxy(7, 15);
	cout << "Press Any Key to Go Back to Loop Programs Menu (Do/ While Loops Version)";
	system("pause>0");
}

// Function with Arguments that does not Returns a Value
// Print All Even 1-N (Do-While Loop)
void PrintEven2(int N, int ctr, int x) {
	gotoxy(20, 12);
	cout << "These are the Even Numbers from 1-" << N;
	do {
		if (ctr % 2 == 0) {
			gotoxy(x, 14);
			cout << ctr << ", ";
			x += 4;
		}
		ctr++;
	} while (ctr <= N - 2);
	if (ctr % 2 == 0) {
		gotoxy(x, 14);
		cout << ctr << ".";
	}
	else {
		ctr++;
		gotoxy(x, 14);
		cout << ctr << ".";
	}
	gotoxy(7, 16);
	cout << "Press Any Key to Go Back to Loop Programs Menu (Do/ While Loops Version)";
	system("pause>0");
}

// Function with Arguments that Returns a Value
// Factorial Identifier (Do-While Loop)
int Factorial2(int num, int i, int Factorials, int flag) {
	if (num == 0) {
		flag = 0;
	}
	else {
		do {
			Factorials *= i;
			i++;
		} while (i <= num);
		return (Factorials);
		flag = 1;
	}
	return (flag);
}

// Function without Argument that does not Returns a Value
// Fibonacci Series (Do-While Loop)
void Fibonacci2() {
	system("CLS");
	int N, x = 15, Fib = 0, a = 1, b = 0, i = 0;
	gotoxy(26, 7);
	cout << "---Fibonacci Series---";
	gotoxy(27, 11);
	cout << "Enter a Number: ";
	cin >> N;
	gotoxy(23, 13);
	cout << "The Fibonacci Series of " << N << " is:";
	do {
		gotoxy(x, 15);
		cout << Fib << ", ";
		x += 4;
		Fib = a + b;
		a = b;
		b = Fib;
		i++;
	} while (i < N);
	cout << Fib << ".";
	gotoxy(7, 17);
	cout << "Press Any Key to Go Back to Loop Programs Menu (Do/ While Loops Version)";
	system("pause>0");
}

// Function withour Arguments that Returns a Value
// Reverse Number (Do-While Loop)
long int ReverseNum2() {
	system("CLS");
	long int num, Rev = 0;
	gotoxy(26, 7);
	cout << "---Reverse Number---";
	gotoxy(26, 10);
	cout << "Enter a Number: ";
	cin >> num;
	do {
		Rev = (Rev * 10) + (num % 10);
		num /= 10;
	} while (num != 0);
	return (Rev);
}

// Function without Argument that does not Returns a Value
// Palindrome Identifier (Do-While Loop)
void Palindrome2() {
	system("CLS");
	char text[20];
	int i = 0, length, flag = 0;
	gotoxy(25, 7);
	cout << "---Palindrome Identifier---";
	gotoxy(25, 10);
	cout << "Enter a Word: ";
	cin >> text;
	length = strlen(text);
	do {
		if (text[i] != text[length - i - 1]) {
			flag = 1;
			break;
		}
		i++;
	} while (i < length);
	if (flag) {
		gotoxy(25, 12);
		cout << text << " is Not a Palindrome Word.";
	}
	else {
		gotoxy(25, 12);
		cout << text << " is a Palindrome Word.";
	}
	gotoxy(7, 15);
	cout << "Press Any Key to Go Back to Loop Programs Menu (Do/ While Loops Version)";
	system("pause>0");
}

// Function with Arguments that does not Returns a Value
// Decimal to Binary (Do-While Loop)
void DeciToBina2(int binary[10], int num, int i, int decimal) {
	do {
		binary[i] = num % 2;
		num = num / 2;
		i++;
	} while (num > 0);
	gotoxy(22, 12);
	cout << "The Equivalent Binary Number of " << decimal << " is: ";
	i = i - 1;
	do {
		cout << binary[i];
		i--;
	} while (i >= 0);
	gotoxy(7, 15);
	cout << "Press Any Key to Go Back to Loop Programs Menu (Do/ While Loops Version)";
	system("pause>0");
}

// Function with Arguments that Returns a Value
// Add All Even 1-N (Do-While Loop)
int AddEven2(int N, int ctr, int sum) {
	do {
		if (ctr % 2 == 0) {
			sum += ctr;
		}
		ctr++;
	} while (ctr <= N);
	return (sum);
}

// Function with Arguments that does not Returns a Value
// Sum of Square of All Even N-M (Do-While Loop)
void AddSquaEven2(int N, int M, int ctr, int sq, int sum) {
	if (ctr < M) {
		do {
			if (ctr % 2 == 0) {
				sq = ctr * ctr;
				sum += sq;
			}
			ctr++;
		} while (ctr <= M);
		gotoxy(10, 14);
		cout << "The Sum of the Square of All Even Numbers from " << N << " to ";
		cout << M << " is: " << sum;
	}
	else {
		gotoxy(10, 14);
		cout << "The Starting Number Must Be Less Than the Ending Number.";
	}
	gotoxy(7, 16);
	cout << "Press Any Key to Go Back to Loop Programs Menu (Do/ While Loops Version)";
	system("pause>0");
}

// Function without Argument that does not Returns a Value
// Print Letters A-Z (Do-While Loop)
void PrintAZ2() {
	system("CLS");
	int x = 23;
	char letter = 'A';
	string letters = "";
	gotoxy(29, 7);
	cout << "---Print Letters A-Z---";
	do {
		gotoxy(x, 11);
		cout << letter << ", ";
		x += 3;
		letter++;
	} while (letter < 'N');
	x = 23;
	do {
		gotoxy(x, 13);
		cout << letter << ", ";
		x += 3;
		letter++;
	} while (letter < 'Z');
	gotoxy(x, 13);
	cout << letter << ".";
	gotoxy(7, 15);
	cout << "Press Any Key to Go Back to Loop Programs Menu (Do/ While Loops Version)";
	system("pause>0");
}
