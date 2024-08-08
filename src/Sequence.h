#pragma once

// --------------------Sequence Programs--------------------

// Function with Arguements that does not Returns a Value
// Roots of a Quadratic Equation
void RootsQuad(double a, double b, double c, double rootPart, double denom, double root1, double root2)
{
	rootPart = sqrt(b * b - 4 * a * c);
	denom = 2 * a;
	root1 = (-b + rootPart) / denom;
	root2 = (-b - rootPart) / denom;
	gotoxy(12, 14);
	cout << "These are the Roots of the Quadratic Equation: ";
	cout << root1 << ", " << root2;
	gotoxy(12, 16);
	cout << "Press Any Key to Go Back to Sequence Programs Menu";
	system("pause>0");
}

// Function with Arguments that does not Returns a Value
// Cube and Square
void CubeSquare(double num) {
	double cube, sq;
	cube = num * num * num;
	sq = num * num;
	gotoxy(25, 12);
	cout << "The Cube of the Number is: " << fixed << setprecision(2) << cube;
	gotoxy(25, 14);
	cout << "The Square of the Number is: " << fixed << setprecision(2) << sq;
	gotoxy(25, 16);
	cout << "Press Any Key to Go Back to Sequence Programs Menu";
	system("pause>0");
}

// Function with Arguments that does not Returns a Value
// Area and Perimeter of Rectangle
void AreaPeri(double length, double width) {
	double area, perimeter;
	area = length * width;
	perimeter = 2 * (length + width);
	gotoxy(18, 13);
	cout << "The Area of the Rectangle is: " << fixed << setprecision(2) << area;
	gotoxy(18, 14);
	cout << "The Perimeter of the Rectangle is: " << fixed << setprecision(2) << perimeter;
	gotoxy(18, 16);
	cout << "Press Any Key to Go Back to Sequence Programs Menu";
	system("pause>0");
}

// Function with Arguments that does not Returns a Value
// Swapped Values
void SwapValues(float a, float b, float temp) {
	temp = a;
	a = b;
	b = temp;
	gotoxy(23, 13);
	cout << "The Swapped Values are: " << a << ", " << b;
	gotoxy(23, 16);
	cout << "Press Any Key to Go Back to Sequence Programs Menu";
	system("pause>0");
}

// Function without Argument that does not Returns a Value
// Gross Pay and Net Pay
void GrossNet() {
	system("CLS");
	int emp_num;
	char emp_name[30];
	double noOfhours, ratePerhour, netPay, grossPay;
	gotoxy(25, 7);
	cout << "---Gross Pay and Net Pay---";
	gotoxy(20, 9);
	cout << "Enter Employee Number: ";
	cin >> emp_num;
	gotoxy(20, 10);
	cout << "Enter Employee Name: ";
	cin >> emp_name;
	gotoxy(20, 11);
	cout << "Enter Number of Hours Worked: ";
	cin >> noOfhours;
	gotoxy(20, 12);
	cout << "Enter Rate per Hour: ";
	cin >> ratePerhour;
	grossPay = noOfhours * ratePerhour;
	netPay = grossPay - (grossPay * 0.1);
	gotoxy(20, 14);
	cout << "Your Gross Pay is: P " << fixed << setprecision(2) << grossPay;
	gotoxy(20, 15);
	cout << "Your Net Pay is: P " << fixed << setprecision(2) << netPay;
	gotoxy(20, 17);
	cout << "Press Any Key to Go Back to Sequence Programs Menu";
	system("pause>0");
}

// Function with Arguments that Returns a Value
// Sum, Difference, Product, and Quotient
void SumDifProQuo(double x, double y) {
	double sum, diff, product, quotient;
	sum = x + y;
	diff = x - y;
	product = x * y;
	quotient = x / y;
	gotoxy(25, 13);
	cout << "The Sum is: " << fixed << setprecision(2) << sum;
	gotoxy(25, 15);
	cout << "The Difference is: " << fixed << setprecision(2) << diff;
	gotoxy(25, 17);
	cout << "The Product is: " << fixed << setprecision(2) << product;
	gotoxy(25, 19);
	cout << "The Quotient is: " << fixed << setprecision(2) << quotient;
	gotoxy(18, 21);
	cout << "Press Any Key to Go Back to Sequence Programs Menu";
	system("pause>0");
}

// Function with Arguments that does not Returns a Value
// Area and Circumference of Circle
void AreaCircum(double diameter) {
	double radius, Pi, area, circum;
	radius = diameter / 2;
	Pi = 3.14;
	area = Pi * radius * radius;
	circum = 2 * Pi * radius;
	gotoxy(20, 12);
	cout << "The Area of the Circle is: " << fixed << setprecision(2) << area;
	gotoxy(20, 14);
	cout << "The Circumference of the Circle is: " << fixed << setprecision(2) << circum;
	gotoxy(20, 16);
	cout << "Press Any Key to Go Back to Sequence Programs Menu";
	system("pause>0");
}

// Function with Arguments that Returns a Value
// Celsius to Fahrenheit
float CeltoFar(float C) {
	float F;
	F = (C * 9 / 5) + 32;
	return (F);
}

// Function without Argument that Returns a Value
// Total Sales
double TotalSales() {
	system("CLS");
	int sale_num;
	char sale_name[30];
	double unitSold, unitPrice, Total_Sales;
	gotoxy(30, 7);
	cout << "---Total Sales---";
	gotoxy(25, 9);
	cout << "Enter Salesman Number: ";
	cin >> sale_num;
	gotoxy(25, 10);
	cout << "Enter Salesman Name: ";
	cin >> sale_name;
	gotoxy(25, 11);
	cout << "Enter Unit Sold: ";
	cin >> unitSold;
	gotoxy(25, 12);
	cout << "Enter Unit Price: P ";
	cin >> unitPrice;
	Total_Sales = unitSold * unitPrice;
	return (Total_Sales);
}

// Function with Arguments that does not Returns a Value
// Order Change
void OrderChange(float total_amount, float amount_tender, float change) {
	change = amount_tender - total_amount;
	gotoxy(20, 14);
	cout << "Your Change is: P " << fixed << setprecision(2) << change;
	gotoxy(20, 16);
	cout << "Press Any Key to Go Back to Sequence Programs Menu";
	system("pause>0");
}

