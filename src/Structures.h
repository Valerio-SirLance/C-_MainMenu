#pragma once

// --------------------Structure Programs--------------------

// Structures
struct studentGrade {
	char lastname[20];
	char firstname[20];
	char middlename[20];
	int quiz1score;
	double quiz1grade;
	int quiz2score;
	double quiz2grade;
	double exercisesgrade;
	double projectgrade;
	double semestralGrade;
	double equiGrade;
	char remarks[20];
}; studentGrade student[20], temp[20];

// Function without Argument that does not Returns a Value
// Add Students Info Except quiz2grade, quiz1grade, semestralgrade, equiGrade and remarks.
void studentInfo() {
	for (int i = 0; i < 20; i++) {
		system("CLS");
		int a;
		a = i + 1;
		gotoxy(26, 6);
		cout << "---Student Information---";
		gotoxy(20, 9);
		cout << "Student #" << a;
		gotoxy(20, 11);
		cout << "Last Name: ";
		cin >> student[i].lastname;
		gotoxy(20, 13);
		cout << "First Name: ";
		cin >> student[i].firstname;
		gotoxy(20, 15);
		cout << "Middle Name: ";
		cin >> student[i].middlename;
		gotoxy(20, 17);
		cout << "Quiz 1 Score: ";
		cin >> student[i].quiz1score;
		gotoxy(20, 19);
		cout << "Quiz 2 Score: ";
		cin >> student[i].quiz2score;
		gotoxy(20, 21);
		cout << "Exercise Grade: ";
		cin >> student[i].exercisesgrade;
		gotoxy(20, 23);
		cout << "Project Grade: ";
		cin >> student[i].projectgrade;
		gotoxy(20, 25);
		cout << "Next Student...";
	}
	system("pause>0");
}

// Function without Argument that does not Returns a Value
// Display Students Info in Horizontal Manner.
void displayInfo() {
	system("CLS");
	int a = 10;
	gotoxy(26, 6);
	cout << "---Display Student Information---";
	gotoxy(20, 8);
	cout << "Order: Last Name | First Name | Middle Name | Quiz 1 Score | ";
	gotoxy(20, 9);
	cout << "Quiz 2 Score | Exercise Grade | Project Grade";
	for (int i = 0; i < 20; i++) {
		a++;
		gotoxy(20, a);
		cout << student[i].lastname << " | " << student[i].firstname << " | " << student[i].middlename << " | " << fixed << setprecision(2) << student[i].quiz1score << " | " << fixed << setprecision(2) << student[i].quiz2score << " | " << fixed << setprecision(2) << student[i].exercisesgrade << " | " << fixed << setprecision(2) << student[i].projectgrade;
	}
	system("pause>0");
}

// Function with Arguments that does not Returns a Value
/* Input the Total Score for quiz1and qui2; these variables must be Global Variables,
then Compute the quiz1Grade, quiz2grade, semestralGrade, Equigradeand remarks. */
void computeGrade(double quiz1, double quiz2) {
	for (int i = 0; i < 20; i++) {
		system("CLS");
		int x = i + 1;
		gotoxy(26, 6);
		cout << "---Compute for Grades---";
		gotoxy(20, 8);
		cout << "Student #" << x;
		gotoxy(26, 10);
		cout << student[i].lastname << ", " << student[i].firstname << " " << student[i].middlename;
		double a = student[i].quiz1score;
		double b = student[i].quiz2score;
		student[i].quiz1grade = a / quiz1 * 100;
		student[i].quiz2grade = b / quiz2 * 100;
		gotoxy(20, 12);
		cout << "Quiz 1 Grade: " << fixed << setprecision(2) << student[i].quiz1grade;
		gotoxy(20, 14);
		cout << "Quiz 2 Grade: " << fixed << setprecision(2) << student[i].quiz2grade;
		student[i].semestralGrade = (student[i].quiz1grade + student[i].quiz2grade + student[i].exercisesgrade + student[i].projectgrade) / 4;
		gotoxy(20, 16);
		cout << "Semestral Grade: " << fixed << setprecision(2) << student[i].semestralGrade;
		if (student[i].semestralGrade >= 97 && student[i].semestralGrade <= 100) {
			student[i].equiGrade = 1.00;
		}
		if (student[i].semestralGrade >= 94 && student[i].semestralGrade <= 96) {
			student[i].equiGrade = 1.25;
		}
		if (student[i].semestralGrade >= 91 && student[i].semestralGrade <= 93) {
			student[i].equiGrade = 1.50;
		}
		if (student[i].semestralGrade >= 88 && student[i].semestralGrade <= 90) {
			student[i].equiGrade = 1.75;
		}
		if (student[i].semestralGrade >= 85 && student[i].semestralGrade <= 87) {
			student[i].equiGrade = 2.00;
		}
		if (student[i].semestralGrade >= 82 && student[i].semestralGrade <= 84) {
			student[i].equiGrade = 2.25;
		}
		if (student[i].semestralGrade >= 79 && student[i].semestralGrade <= 81) {
			student[i].equiGrade = 2.50;
		}
		if (student[i].semestralGrade >= 76 && student[i].semestralGrade <= 78) {
			student[i].equiGrade = 2.75;
		}
		if (student[i].semestralGrade == 75) {
			student[i].equiGrade = 3.00;
		}
		if (student[i].semestralGrade >= 65 && student[i].semestralGrade <= 74) {
			student[i].equiGrade = 4.00;
		}
		if (student[i].semestralGrade <= 64) {
			student[i].equiGrade = 5.00;
		}
		gotoxy(20, 18);
		cout << "Equivalent Grade: " << fixed << setprecision(2) << student[i].equiGrade;
		if (student[i].equiGrade >= 1.00 && student[i].equiGrade <= 3.00) {
			strcpy_s(student[i].remarks, "Passed!");
			gotoxy(20, 20);
			cout << "Remarks: Passed!";
		}
		else {
			gotoxy(20, 20);
			cout << "Remarks: Failed!";
			strcpy_s(student[i].remarks, "Failed!");
		}
		system("pause>0");
	}
}

// Function without Argument that Returns a Value
// Search Students.
int searchStudent() {
	system("CLS");
	string find;
	gotoxy(26, 6);
	cout << "---Search Students---";
	gotoxy(20, 9);
	cout << "Enter the Last Name of the Student to Find: ";
	cin >> find;
	for (int i = 0; i < 20; i++) {
		if (student[i].lastname == find) {
			int n = i + 1;
			gotoxy(20, 11);
			cout << "Student #" << n;
			gotoxy(20, 13);
			cout << "Name: " << student[i].lastname << ", " << student[i].firstname << " " << student[i].middlename;
			return 1;
		}
	}
}

// Function without Argument that does not Returns a Value
// Sort Records in Descending Order Based on equiGrade.
void sortedGrades() {
	system("CLS");
	string find;
	gotoxy(26, 6);
	cout << "---Sort Records Based on Grades---";
	for (int i = 1; i < 20; i++) {
		for (int j = 0; j < 20 - i; j++) {
			if (student[j].equiGrade < student[j + 1].equiGrade) {
				temp[i] = student[j];
				student[j] = student[j + 1];
				student[j + 1] = temp[i];
			}
		}
	}
	gotoxy(26, 9);
	cout << "The Records Sorted in Descending Order of Grades: ";
	int x = 11;
	for (int k = 0; k < 20; k++) {
		gotoxy(26, x);
		cout << student[k].lastname << ", " << student[k].firstname << " " << student[k].middlename << " | " << fixed << setprecision(2) << student[k].equiGrade;
		x += 2;
	}
	system("pause>0");
}