#pragma once

// --------------------Recursive Programs--------------------

// Function with Arguments that does not Returns a Value
// Print 1-10
void RPrintOneTen(int ctr) {
	int x = 24;
	if (ctr >= 1) {
		gotoxy(x, 10);
		RPrintOneTen(ctr - 1);
		cout << ctr << " ";
		x += 2;
	}
}

// Function with Arguments that does not Returns a Value
// Print All Even 1-N
void RPrintEven(int N) {
	int x = 24;
	if (N >= 1) {
		if (N % 2 == 0) {
			gotoxy(x, 14);
			RPrintEven(N - 1);
			cout << N << " ";
			x += 2;
		}
		else {
			RPrintEven(N - 1);
		}
	}
}

// Function with Arguments that Returns a Value
// Factorial Identifier
int RFactorial(int num) {
	if (num > 1) {
		return num * RFactorial(num - 1);
	}
	else {
		return 1;
	}
}

// Function with Arguments that Returns a Value
// Fibonacci Series 
int RFibonacci(int i) {
	if (i == 1 || i == 0) {
		return 1;
	}
	else {
		return (RFibonacci(i - 1) + RFibonacci(i - 2));
	}
}

// Function with Arguments that des not Returns a Value
// Reverse Number
void RReverseNum(int num) {
	if (num < 10) {
		cout << num;
		return;
	}
	else {
		cout << num % 10;
		RReverseNum(num / 10);
	}
}

// Function with Arguments that Returns a Value
// Palindrome Identifier
int RPalindrome(string text, int i) {
	if (i > text.size() / 2) {
		return 1;
	}
	return text[i] == text[text.size() - i - 1] && RPalindrome(text, i + 1);
}

// Function with Arguments that Returns a Value
// Decimal to Binary
int RDeciToBina(int num) {
	if (num == 0) {
		return 0;
	}
	else {
		return (num % 2 + 10 * RDeciToBina(num / 2));
	}
}

// Function with Arguments that Returns a Value
// Add All Even 1-N
int RAddEven(int i, int N) {
	if (i < N) {
		return  i + RAddEven(i + 2, N);
	}
}

// Function with Arguments that Returns a Value
// Sum of Square of All Even N-M
int RAddSquaEven(int N, int M) {
	if (N < M) {
		if (N % 2 == 0) {
			return  (N * N) + RAddSquaEven(N + 2, M);
		}
		else {
			RAddSquaEven(N + 1, M);
		}
	}
}

// Function with Arguments that does not Returns a Value
// Print Letters A-Z
void RPrintAZ(char letter) {
	int x = 18;
	if (letter >= 'A') {
		gotoxy(x, 10);
		RPrintAZ(letter - 1);
		cout << letter << " ";
		x += 2;
	}
}
