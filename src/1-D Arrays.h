#pragma once

// --------------------1-D Arrays Programs--------------------

// Global Variable
int score[5] = { 1, 2, 3, 4, 5 }, choice;

// Function with Arguments that does not Returns a Value
// Input Elements of the Array
void InputArrays(int x)
{
	gotoxy(26, 6);
	cout << "---Input Elements of the Array---";
	for (int i = 0; i < 5; i++) {
		gotoxy(x, 9);
		x += 3;
		cin >> score[i];
	}
	gotoxy(20, 16);
	cout << "Press Any Key to Go Back to Arrays Menu";
	system("pause>0");
}

// Function without Argument that does not Returns a Value
// Display the Elements of the Array
void DisplayArrays()
{
	system("CLS");
	int x = 32;
	gotoxy(26, 6);
	cout << "---Display the Elements of the Array---";
	for (int i = 0; i < 5; i++) {
		gotoxy(x, 9);
		x += 3;
		cout << score[i];
	}
	gotoxy(26, 16);
	cout << "Press Any Key to Go Back to Arrays Menu";
	system("pause>0");
}

// Function with no Argument that does not Returns a Value
// Search Elements from the Array (Linear Search)
void LinearSearch()
{
	system("CLS");
	int find, i = 0, flag = 0;
	gotoxy(26, 6);
	cout << "---Search Elements from the Array (Linear Search)---";
	gotoxy(28, 9);
	cout << "Enter Element to Find: ";
	cin >> find;
	for (i; i < 5; i++) {
		if (score[i] == find) {
			flag = 1;
			break;
		}
	}
	if (flag == 1) {
		gotoxy(28, 11);
		cout << "The Element can be Found in Index " << i << ".";
	}
	else {
		gotoxy(28, 11);
		cout << "The Element is Not in the Array";
	}
	gotoxy(26, 16);
	cout << "Press Any Key to Go Back to Arrays Menu";
	system("pause>0");
}

// Function without Arguments that does not Returns a Value
// Sort the Elements of the Array (Bubble Sort)
void SortBubble()
{
	system("CLS");
	int temp, temp1, i, j, k, l;
	gotoxy(26, 6);
	cout << "---Sort the Elements of the Array (Bubble Sort)---";
	for (int i = 1; i < 5; i++) {
		for (j = 0; j < 5 - i; j++) {
			if (score[j] > score[j + 1]) {
				temp = score[j];
				score[j] = score[j + 1];
				score[j + 1] = temp;
			}
		}
	}
	gotoxy(26, 10);
	cout << "The Elements Sorted in Ascending Order: ";
	for (j = 0; j < 5; j++) {
		cout << score[j] << " ";
	}
	for (int k = 1; k < 5; k++) {
		for (l = 0; l < 5 - k; l++) {
			if (score[l] < score[l + 1]) {
				temp1 = score[l];
				score[l] = score[l + 1];
				score[l + 1] = temp1;
			}
		}
	}
	gotoxy(26, 12);
	cout << "The Elements Sorted in Descending Order: ";
	for (l = 0; l < 5; l++) {
		cout << score[l] << " ";
	}
	gotoxy(26, 16);
	cout << "Press Any Key to Go Back to Arrays Menu";
	system("pause>0");
}

// Function with Arguments that does not Returns a Value
// Delete Element from the Array
void ArrayDelete(int N, int i)
{
	if (N > 5) {
		gotoxy(26, 14);
		cout << "The Array is Only Upto 5 Elements.";
	}
	else {
		for (int j = N - 1; j < 5; j++) {
			score[j] = score[j + 1];
		}
	}
	gotoxy(26, 14);
	cout << "The Elements of the Array Now is: ";
	for (int k = 0; k < 5; k++) {
		cout << score[k] << " ";
	}
	gotoxy(26, 16);
	cout << "Press Any Key to Go Back to Arrays Menu";
	system("pause>0");
}

// Function with Arguments that does not Returns a Value
// Update the Elements of the Array
void UpdateArray(int i, int j, int x)
{
	gotoxy(26, 6);
	cout << "---Update the Elements of the Array---";
	gotoxy(26, 9);
	cout << "Current Array Elements: ";
	for (i; i < 5; i++) {
		cout << score[i] << " ";
	}
	gotoxy(26, 11);
	cout << "Update Array Elements: ";
	for (int j = 0; j < 5; j++) {
		gotoxy(x, 11);
		x += 3;
		cin >> score[j];
	}
	gotoxy(26, 16);
	cout << "Press Any Key to Go Back to Arrays Menu";
	system("pause>0");
}

// Function with Arguments that Returns a Value
// Largest Element in the Array
int LargestArr(int i, int Largest)
{
	gotoxy(26, 6);
	cout << "---Largest Element in the Array---";
	for (i; i < 5; i++) {
		if (Largest < score[i]) {
			Largest = score[i];
		}
	}
	return (Largest);
}

// Function with Arguments that Returns a Value
// Smallest Element in the Array
int SmallestArr(int i, int Smallest)
{
	gotoxy(26, 6);
	cout << "---Smallest Element in the Array---";
	for (i; i < 5; i++) {
		if (Smallest > score[i]) {
			Smallest = score[i];
		}
	}
	return (Smallest);
}

// Function with Arguments that does not Returns a Value
// Display All Even Numbers and its Sum
void Even_Sum(int x, int EvenSum, int i)
{
	gotoxy(26, 6);
	cout << "---Display All Even Numbers and its Sum---";
	gotoxy(30, 9);
	cout << "Even Numbers: ";
	for (i; i < 5; i++) {
		if (score[i] % 2 == 0) {
			gotoxy(x, 9);
			cout << score[i];
			x += 3;
			EvenSum += score[i];
		}
	}
	gotoxy(30, 11);
	cout << "Total Even Numbers: " << EvenSum;
	gotoxy(26, 17);
	cout << "Press Any Key to Go Back to Arrays Menu";
	system("pause>0");
}

// Function with Arguments that does not Returns a Value
// Display All Odd Numbers and Sum of Squared Odds
void Odd_Sum(int x, int OddSum, int i, int j)
{
	gotoxy(26, 6);
	cout << "---Display All Odd Numbers and Sum of Squared Odds---";
	gotoxy(30, 9);
	cout << "Odd Numbers: ";
	for (i; i < 5; i++) {
		if (score[i] % 2 != 0) {
			gotoxy(x, 9);
			cout << score[i];
			x += 3;
			j = score[i] * score[i];
			OddSum += j;
		}
	}
	gotoxy(30, 11);
	cout << "Total Squared Odd Numbers: " << OddSum;
	gotoxy(26, 17);
	cout << "Press Any Key to Go Back to Arrays Menu";
	system("pause>0");
}

// Function without Argument that Returns a Value 
// Sum of All Elements of the Array and Sum of Cube of Elements
int SumArrays()
{
	system("CLS");
	gotoxy(26, 6);
	cout << "---Sum of All Elements of the Array and Sum of Cube of Elements---";
	int Sum = 0;
	int CubedSum = 0;
	for (int i = 0; i < 5; i++) {
		Sum += score[i];
	}
	for (int j = 0; j < 5; j++) {
		CubedSum += score[j] * score[j] * score[j];
	}
	gotoxy(30, 9);
	cout << "The Sum of All Elements is: " << Sum;
	return(CubedSum);
}

// Function without Argument that Returns a Value
// Index of Smallest Element of Array
int SmallestIndex()
{
	system("CLS");
	int i = 1, j = 0, Smallest = score[0];
	gotoxy(26, 6);
	cout << "---Index of Smallest Element of Array---";
	for (i; i < 5; i++) {
		if (Smallest > score[i]) {
			Smallest = score[i];
		}
	}
	for (j; j < 5; j++) {
		if (Smallest == score[j]) {
			return (j);
		}
	}
}

// Function without Argument that Returns a Value
// Index of Largest Element of Array
int LargestIndex()
{
	system("CLS");
	int i = 1, j = 0, Largest = score[0];
	gotoxy(26, 6);
	cout << "---Index of Largest Element of Array---";
	for (i; i < 5; i++) {
		if (Largest < score[i]) {
			Largest = score[i];
		}
	}
	for (j; j < 5; j++) {
		if (Largest == score[j]) {
			return (j);
		}
	}
}

// Function with Arguments that Returns a Value
// Sum of All Squares of the Array and All Prime Numbers
int SumSquare(int Square, int Sum, int i)
{
	gotoxy(26, 6);
	cout << "---Sum of All Squares of the Array and All Prime Numbers---";
	for (i; i < 5; i++) {
		Square = score[i] * score[i];
		Sum += Square;
	}
	return (Sum);
}

// Function without Argument that does not Returns a Value
// Copies the Elements of the 1-D Array to Another 1-D
void One_DtoOne_D()
{
	system("CLS");
	int x = 38, copy[5] = { 0, 0, 0, 0, 0 };
	gotoxy(18, 6);
	cout << "---Copies the Elements of the 1-D Array to Another 1-D---";
	for (int i = 0; i < 5; i++) {
		copy[i] = score[i];
		gotoxy(x, 9);
		x += 3;
		cout << copy[i];
	}
	gotoxy(26, 14);
	cout << "Press Any Key to Go Back to Arrays Menu";
	system("pause>0");
}

// Function without Argument that does not Returns a Value
// Search an Array Element (Binary Search)
void BinaryArray()
{
	system("CLS");
	int F = 0, L = 4, i = 0, find, M;
	bool found = false;
	gotoxy(26, 6);
	cout << "---Search Elements from the Array (Binary Search)---";
	gotoxy(28, 9);
	cout << "Enter Element to Find: ";
	cin >> find;
	while (F <= L && !found) {
		M = (F + L) / 2;
		if (score[M] == find) {
			found = true;
		}
		else {
			if (score[M] > find) {
				L = M - 1;
			}
			else {
				F = M + 1;
			}
		}
	}
	if (found == true) {
		gotoxy(28, 11);
		cout << "The Element can be Found in Index " << M << ".";
	}
	else {
		gotoxy(28, 11);
		cout << "The Element is Not in the Array";
	}
	gotoxy(26, 16);
	cout << "Press Any Key to Go Back to Arrays Menu";
	system("pause>0");
}

// Function with Arguments that does not Returns a Value
// Sort the Elements of the Array (Insertion Sort)
void SortIsertion(int Key, int i, int j)
{
	gotoxy(26, 6);
	cout << "---Sort the Elements of the Array (Insertion Sort)---";
	for (int i = 1; i < 5; i++) {
		if (score[i] < score[i - 1]) {
			Key = score[i];
			j = i - 1;
			while (j >= 0 && score[j] > Key) {
				score[j + 1] = score[j];
				j--;
			}
			score[j + 1] = Key;
		}
	}
	gotoxy(26, 10);
	cout << "The Elements Sorted in Ascending Order: ";
	for (i = 0; i < 5; i++) {
		cout << score[i] << " ";
	}
	for (int i = 1; i < 5; i++) {
		if (score[i] > score[i - 1]) {
			Key = score[i];
			j = i - 1;
			while (j >= 0 && score[j] < Key) {
				score[j + 1] = score[j];
				j--;
			}
			score[j + 1] = Key;
		}
	}
	gotoxy(26, 12);
	cout << "The Elements Sorted in Descending Order: ";
	for (i = 0; i < 5; i++) {
		cout << score[i] << " ";
	}
	gotoxy(26, 16);
	cout << "Press Any Key to Go Back to Arrays Menu";
	system("pause>0");
}
