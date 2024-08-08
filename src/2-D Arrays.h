#pragma once

// --------------------2-D Arrays Programs--------------------

// Function with Arguments that Returns a Value
// Input Elements of the Array
int InputArrays(int score[50][50], int i, int j)
{
	int row, col, x = 32;
	gotoxy(26, 6);
	cout << "---Input Elements of the Array---";
	for (row = 0; row < i; row++) {
		for (col = 0; col < j; col++) {
			gotoxy(x, 9);
			x += 3;
			cin >> score[row][col];
		}
	}
	gotoxy(23, 16);
	cout << "Press Any Key to Go Back to Arrays Menu";
	system("pause>0");
	return (score[row][col]);
}

// Function with Argument that does not Returns a Value
// Display the Elements of the Array
void DisplayArrays(int score[50][50], int i, int j)
{
	system("CLS");
	int row, col, x = 32;
	gotoxy(26, 6);
	cout << "---Display the Elements of the Array---";
	for (row = 0; row < i; row++) {
		for (col = 0; col < j; col++) {
			gotoxy(x, 9);
			x += 3;
			cout << score[row][col] << "\n";
		}
	}
	gotoxy(26, 16);
	cout << "Press Any Key to Go Back to Arrays Menu";
	system("pause>0");
}

// Function with Arguments that does not Returns a Value
// Search Elements from the Array (Linear Search)
void LinearSearch(int score[50][50], int i, int j)
{
	system("CLS");
	int row, col, find, flag = 0, row1, col1;
	gotoxy(26, 6);
	cout << "---Search Elements from the Array (Linear Search)---";
	gotoxy(28, 9);
	cout << "Enter Element to Find: ";
	cin >> find;
	for (row = 0; row < i; row++) {
		for (col = 0; col < j; col++) {
			if (score[row][col] == find) {
				flag = 1;
				row1 = row;
				col1 = col;
				break;
			}
		}
	}
	if (flag == 1) {
		gotoxy(28, 11);
		cout << "The Element can be Found in Index " << row1 << " " << col1 << ".";
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
// Sort the Elements of the Array (Bubble Sort)
void SortBubble(int score[50][50], int i, int j)
{
	system("CLS");
	gotoxy(26, 6);
	cout << "---Sort the Elements of the Array (Bubble Sort)---";
	for (int row = 0; row < i; row++) {
		for (int col = 0; col < j; col++) {
			for (int row1 = 0; row1 < i; row1++) {
				for (int col1 = 0; col1 < j; col1++) {
					if (score[row][col] < score[row1][col1]) {
						int temp = score[row][col];
						score[row][col] = score[row1][col1];
						score[row1][col1] = temp;
					}
				}
			}
		}
	}
	gotoxy(26, 10);
	cout << "The Elements Sorted in Ascending Order: ";
	for (int m = 0; m < i; m++) {
		for (int n = 0; n < j; n++) {
			cout << score[m][n] << "  ";
		}
	}
	for (int row2 = 0; row2 < i; row2++) {
		for (int col2 = 0; col2 < j; col2++) {
			for (int row3 = 0; row3 < i; row3++) {
				for (int col3 = 0; col3 < j; col3++) {
					if (score[row2][col2] > score[row3][col3]) {
						int temp1 = score[row2][col2];
						score[row2][col2] = score[row3][col3];
						score[row3][col3] = temp1;
					}
				}
			}
		}
	}
	gotoxy(26, 12);
	cout << "The Elements Sorted in Descending Order: ";
	for (int o = 0; o < i; o++) {
		for (int p = 0; p < j; p++) {
			cout << score[o][p] << "  ";
		}
	}
	gotoxy(26, 16);
	cout << "Press Any Key to Go Back to Arrays Menu";
	system("pause>0");
}

// Function with Arguments that Returns a Value
// Delete Element from the Array
bool ArrayDelete(int score[50][50], int i, int j)
{
	int N, temp;
	gotoxy(26, 6);
	cout << "---Delete Element from the Array---";
	gotoxy(26, 9);
	cout << "The Elements are: ";
	for (int row = 0; row < i; row++) {
		for (int col = 0; col < j; col++) {
			cout << score[row][col] << "  ";
		}
	}
	gotoxy(26, 11);
	cout << "Enter the Element to be Deleted: ";
	cin >> N;
	for (int row = 0; row < i; row++) {
		for (int col = 0; col < j; col++) {
			if (score[row][col] == N) {
				score[row][col] = 0;
				return true;
			}
		}
	}
}

// Function with Arguments that Returns a Value
// Update the Elements of the Array
int UpdateArray(int score[50][50], int i, int j)
{
	int m = 0, n = 0, x = 49;
	gotoxy(26, 6);
	cout << "---Update the Elements of the Array---";
	gotoxy(26, 9);
	cout << "Current Array Elements: ";
	for (int m = 0; m < i; m++) {
		for (int n = 0; n < j; n++) {
			cout << score[m][n] << " ";
		}
	}
	gotoxy(26, 11);
	cout << "Update Array Elements: ";
	for (int o = 0; o < i; o++) {
		for (int p = 0; p < j; p++) {
			gotoxy(x, 11);
			x += 3;
			cin >> score[o][p];
		}
	}
	gotoxy(26, 16);
	cout << "Press Any Key to Go Back to Arrays Menu";
	system("pause>0");
	return (score[50][50]);
}

// Function with Arguments that Returns a Value
// Largest Element in the Array
int LargestArr(int score[50][50], int i, int j)
{
	int Largest = score[0][0];
	gotoxy(26, 6);
	cout << "---Largest Element in the Array---";
	for (int row = 0; row < i; row++) {
		for (int col = 0; col < j; col++) {
			if (Largest < score[row][col]) {
				Largest = score[row][col];
			}
		}
	}
	return (Largest);
}

// Function with Arguments that Returns a Value
// Smallest Element in the Array
int SmallestArr(int score[50][50], int i, int j)
{
	int Smallest = score[0][0];
	gotoxy(26, 6);
	cout << "---Smallest Element in the Array---";
	for (int row = 0; row < i; row++) {
		for (int col = 0; col < j; col++) {
			if (Smallest > score[row][col]) {
				Smallest = score[row][col];
			}
		}
	}
	return (Smallest);
}

// Function with Arguments that does not Returns a Value
// Display All Even Numbers and its Sum
void Even_Sum(int score[50][50], int i, int j)
{
	int EvenSum = 0;
	gotoxy(26, 6);
	cout << "---Display All Even Numbers and its Sum---";
	gotoxy(30, 9);
	cout << "Even Numbers: ";
	for (int row = 0; row < i; row++) {
		for (int col = 0; col < j; col++) {
			if (score[row][col] % 2 == 0) {
				cout << score[row][col] << "  ";
				EvenSum += score[row][col];
			}
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
void Odd_Sum(int score[50][50], int i, int j)
{
	int OddSum = 0;
	gotoxy(26, 6);
	cout << "---Display All Odd Numbers and Sum of Squared Odds---";
	gotoxy(30, 9);
	cout << "Odd Numbers: ";
	for (int row = 0; row < i; row++) {
		for (int col = 0; col < j; col++) {
			if (score[row][col] % 2 != 0) {
				cout << score[row][col] << "  ";
				OddSum += score[row][col] * score[row][col];
			}
		}
	}
	gotoxy(30, 11);
	cout << "Total Squared Odd Numbers: " << OddSum;
	gotoxy(26, 17);
	cout << "Press Any Key to Go Back to Arrays Menu";
	system("pause>0");
}

// Function with Arguments that Returns a Value 
// Sum of All Elements of the Array and Sum of Cube of Elements
int SumArrays(int score[50][50], int i, int j)
{
	system("CLS");
	gotoxy(26, 6);
	cout << "---Sum of All Elements of the Array &---";
	gotoxy(31, 7);
	cout << "---Sum of Cube of Elements---";
	int Sum = 0, CubedSum = 0;
	for (int row = 0; row < i; row++) {
		for (int col = 0; col < j; col++) {
			Sum += score[row][col];
		}
	}
	for (int row1 = 0; row1 < i; row1++) {
		for (int col1 = 0; col1 < j; col1++) {
			CubedSum += score[row1][col1] * score[row1][col1] * score[row1][col1];
		}
	}
	gotoxy(30, 10);
	cout << "The Sum of All Elements is: " << Sum;
	return(CubedSum);
}

// Function with Arguments that does not Return a Value
// Index of Smallest Element of Array
void SmallestIndex(int score[50][50], int i, int j)
{
	system("CLS");
	int Smallest = score[0][0];
	gotoxy(26, 6);
	cout << "---Index of Smallest Element of Array---";
	for (int row = 0; row < i; row++) {
		for (int col = 0; col < j; col++) {
			if (Smallest > score[row][col]) {
				Smallest = score[row][col];
			}
		}
	}
	for (int row1 = 0; row1 < i; row1++) {
		for (int col1 = 0; col1 < j; col1++) {
			if (Smallest == score[row1][col1]) {
				gotoxy(25, 9);
				cout << "Index of the Smallest Element: " << row1 << " " << col1;
			}
		}
	}
	gotoxy(26, 13);
	cout << "Press Any Key to Go Back to Arrays Menu";
	system("pause>0");
}

// Function with Arguments that does not Return a Value
// Index of Largest Element of Array
void LargestIndex(int score[50][50], int i, int j)
{
	system("CLS");
	int Largest = score[0][0];
	gotoxy(26, 6);
	cout << "---Index of Largest Element of Array---";
	for (int row = 0; row < i; row++) {
		for (int col = 0; col < j; col++) {
			if (Largest < score[row][col]) {
				Largest = score[row][col];
			}
		}
	}
	for (int row1 = 0; row1 < i; row1++) {
		for (int col1 = 0; col1 < j; col1++) {
			if (Largest == score[row1][col1]) {
				gotoxy(25, 9);
				cout << "Index of the Largest Element: " << row1 << " " << col1;
			}
		}
	}
	gotoxy(26, 13);
	cout << "Press Any Key to Go Back to Arrays Menu";
	system("pause>0");
}

// Function with Arguments that Returns a Value
// Sum of All Squares of the Array and All Prime Numbers
int SumSquare(int score[50][50], int i, int j)
{
	int Sum = 0;
	gotoxy(26, 6);
	cout << "---Sum of All Squares of the Array & All Prime Numbers---";
	for (int row = 0; row < i; row++) {
		for (int col = 0; col < j; col++) {
			int Square = score[row][col] * score[row][col];
			Sum += Square;
		}
	}
	return (Sum);
}

// Function with Arguments that does not Returns a Value
// Copies the Elements of the 2-D Array to Another 2-D
void Two_DtoTwo_D(int score[50][50], int i, int j)
{
	system("CLS");
	int copy[50][50];
	gotoxy(18, 6);
	cout << "---Copies the Elements of the 2-D Array to Another 2-D---";
	gotoxy(23, 9);
	cout << "The Elements Copied to Another Array: ";
	for (int row = 0; row < i; row++) {
		for (int col = 0; col < j; col++) {
			copy[row][col] = score[row][col];
			cout << copy[row][col] << "  ";
		}
	}
	gotoxy(26, 14);
	cout << "Press Any Key to Go Back to Arrays Menu";
	system("pause>0");
}

// Function with Arguments that does not Returns a Value
// Search an Array Element (Binary Search)
void BinaryArray(int score[50][50], int i, int j)
{
	system("CLS");
	int FR = 0, FC = 0, LR = i - 1, LC = j - 1, find, row, col;
	bool found = false;
	gotoxy(26, 6);
	cout << "---Search Elements from the Array (Binary Search)---";
	gotoxy(28, 9);
	cout << "Enter Element to Find: ";
	cin >> find;
	while (FR <= LR && !found) {
		row = (FR + LR) / 2;
		while (FR <= LR && !found) {
			col = (FC + LC) / 2;
			if (score[row][col] == find) {
				found = true;
			}
			else {
				if (score[row][col] > find) {
					LR = row - 1;
					LC = col - 1;
				}
				else {
					FR = row + 1;
					FC = col + 1;
				}
			}
		}
	}
	if (found == true) {
		gotoxy(28, 11);
		cout << "The Element can be Found in Index " << row << " " << col << ".";
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
void SortIsertion(int score[50][50], int i, int j)
{
	int score1d[50];
	int x = 0, Key = 0, m, p;
	gotoxy(26, 6);
	cout << "---Sort the Elements of the Array (Insertion Sort)---";
	for (int row = 0; row < i; row++) {
		for (int col = 0; col < j; col++) {
			score1d[x] = score[row][col];
			x++;
		}
	}
	for (int l = 1; l < x; l++) {
		if (score1d[l] < score1d[l - 1]) {
			Key = score1d[l];
			m = l - 1;
			while (m >= 0 && score1d[m] > Key) {
				score1d[m + 1] = score1d[m];
				m--;
			}
			score1d[m + 1] = Key;
		}
	}
	gotoxy(26, 10);
	cout << "The Elements Sorted in Ascending Order: ";
	for (int a = 0; a < x; a++) {
		cout << score1d[a] << "  ";
	}
	for (int o = 1; o < x; o++) {
		if (score1d[o] > score1d[o - 1]) {
			Key = score1d[o];
			p = o - 1;
			while (p >= 0 && score1d[p] < Key) {
				score1d[p + 1] = score1d[p];
				p--;
			}
			score1d[p + 1] = Key;
		}
	}
	gotoxy(26, 12);
	cout << "The Elements Sorted in Descending Order: ";
	for (int b = 0; b < x; b++) {
		cout << score1d[b] << "  ";
	}
	gotoxy(26, 16);
	cout << "Press Any Key to Go Back to Arrays Menu";
	system("pause>0");
}


