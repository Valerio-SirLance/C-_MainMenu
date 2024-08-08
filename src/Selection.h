#pragma once

// --------------------Selection Programs--------------------

// Function with Arguments that does not Returns a Value
// Positive, Negative, or Neutral
void PosNegNeu(float num) {
	if (num > 0) {
		gotoxy(28, 12);
		cout << num << " is a Positive Number.";
	}
	else if (num < 0) {
		gotoxy(28, 12);
		cout << num << " is a Negative Number.";
	}
	else if (num == 0) {
		gotoxy(28, 12);
		cout << num << " is a Neutral Number.";
	}
	gotoxy(16, 16);
	cout << "Press Any Key to Go Back to Selection Programs Menu";
	system("pause>0");
}

// Function with Arguments that Returns a Value
// Odd or Even
int OddEven(int n, int flag) {
	if (n % 2 == 0) {
		flag = 1;
	}
	else {
		flag = 0;
	}
	return (flag);
}

// Function without Argument that Returns a Value
// Largest Among the 3
float LargestOnThree(float a, float b, float c, float flag) {
	if (a > b, a > c) {
		flag = 0;
	}
	else if (b > a, b > c) {
		flag = 1;
	}
	else if (c > a, c > b) {
		flag = 2;
	}
	return (flag);
}

// Function with Arguments that does not Returns a Value
// Largest Among the 2
void LargestOnTwo(float a, float b) {
	if (a > b) {
		gotoxy(27, 14);
		cout << a << " is larger than " << b << ".";
	}
	else if (b > a) {
		gotoxy(27, 14);
		cout << b << " is larger than " << a << ".";
	}
	else if (a == b) {
		gotoxy(27, 14);
		cout << "Both numbers are equal.";
	}
	gotoxy(15, 16);
	cout << "Press Any Key to Go Back to Selection Programs Menu";
	system("pause>0");
}

// Function with Arguments that Returns a Value
// Prime Number Identifier
int PrimeNum(int num1, int p, int m) {
	for (p; p < num1; p++) {
		if (num1 % p == 0) {
			m = 0;
		}
	}
	return (m);
}

// Function without Argument that Returns a Value
// Passed or Failed
float PassFail() {
	system("CLS");
	float prelim, midterm, finals, average;
	gotoxy(30, 7);
	cout << "---Passed or Failed---";
	gotoxy(15, 9);
	cout << "*The Three Tests Must Have an Overall Score of 100*";
	gotoxy(26, 11);
	cout << "Enter your Prelim Score: ";
	cin >> prelim;
	gotoxy(26, 12);
	cout << "Enter your Midterm Score: ";
	cin >> midterm;
	gotoxy(26, 13);
	cout << "Enter your Finals Score: ";
	cin >> finals;
	average = (prelim + midterm + finals) / 3;
	return (average);
}

// Function with Arguments that does not Returns a Value
// Commission of the Salesman
void CommiSales(double TotalSales, double Commission) {
	if (TotalSales <= 10000) {
		Commission = TotalSales * 0.1;
	}
	else if (TotalSales <= 15000) {
		Commission = TotalSales * 0.15;
	}
	else if (TotalSales <= 20000) {
		Commission = TotalSales * 0.2;
	}
	else {
		Commission = TotalSales * 0.3;
	}
	gotoxy(25, 13);
	cout << "Your Commission is: P ";
	cout << fixed << setprecision(2) << Commission;
	gotoxy(18, 15);
	cout << "Press Any Key to Go Back to Selection Programs Menu";
	system("pause>0");
}

// Function without Argument that does not Returns a Value
// Vowel or Consonant
void VowelConso() {
	system("CLS");
	char var[10] = { 'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U' };
	char letter;
	int i = 0, a = 1;
	gotoxy(28, 7);
	cout << "---Vowel or Consonant---";
	gotoxy(31, 10);
	cout << "Enter a Letter: ";
	cin >> letter;
	for (i; i < 10; i++) {
		if (letter == var[i]) {
			a = 0;
		}
	}
	if (a == 0) {
		gotoxy(30, 12);
		cout << letter << " is a Vowel Letter.";
	}
	else {
		gotoxy(28, 12);
		cout << letter << " is a Consonant Letter.";
	}
	gotoxy(17, 14);
	cout << "Press Any Key to Go Back to Selection Programs Menu";
	system("pause>0");
}