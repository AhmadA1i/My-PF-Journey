// Task 1) Sum of two numbers
#include<iostream>
using namespace std;
int main()
{
		int num1, num2, sum;
		cout << "Enter two numbers to find their sum" << endl;
		cin >> num1;
		cin >> num2;
		sum = num1 + num2;
		cout << "The Sum of two numbers is: " << sum;
		system("pause");
		return 0;
}

// Task 2) Difference of two numbers
#include<iostream>
using namespace std;
int main()
{
		int num1, num2, difference;
		cout << "Enter two numbers to find their difference" << endl;
		cin >> num1;
		cin >> num2;
		difference = num1 - num2;
		cout << "The difference of two numbers is: " << difference;
		system("pause");
		return 0;
}

// Task 3) Multiply two numbers
#include<iostream>
using namespace std;
int main()
{
		int num1, num2, product;
		cout << "Enter two numbers to find their product" << endl;
		cin >> num1;
		cin >> num2;
		product = num1 * num2;
		cout << "The product of two numbers is: " << product;
		system("pause");
		return 0;
}

// Task 4) Division of two numbers
#include<iostream>
using namespace std;
int main()
{
		int num1, num2, quotient;
		cout << "Enter two numbers to find their quotient" << endl;
		cin >> num1;
		cin >> num2;
		quotient = num1 / num2;
		cout << "The quotient of two numbers is: " << quotient;
		system("pause");
		return 0;
}

// Task 5) Calculate area of Rectangle
#include<iostream>
using namespace std;
int main()
{
		float length, width, area_rectangle;
		cout << "Enter length and width of rectangle to calculate its area" << endl;
		cin >> length;
		cin >> width;
		area_rectangle = length * width;
		cout << "The area of rectangle is: " << area_rectangle;
		system("pause");
		return 0;
}

// Task 6) Calculate perimeter of a rectangle
#include<iostream>
using namespace std;
int main()
{
		float length, width, perimeter_rectangle;
		cout << "Enter length and width of rectangle to calculate its perimeter" << endl;
		cin >> length;
		cin >> width;
		perimeter_rectangle = (length + width) * 2;
		cout << "The perimeter of rectangle is: " << perimeter_rectangle;
		system("pause");
		return 0;
}

// Task 7) Calculate area of circle
#include<iostream>
using namespace std;
int main()
{
		float radius, area_circle;
		const float pie = 3.1416;
		cout << "Enter radius of circle to calculate its area" << endl;
		cin >> radius;
		area_circle = radius * radius * pie;
		cout << "The area of circle is: " << area_circle;
		system("pause");
		return 0;
}

// Task 8) Calculate the Circumference of a circle
#include<iostream>
using namespace std;
int main()
{
		float radius, circumference_circle;
		const float pie = 3.1416;
		cout << "Enter radius of circle to calculate its circumference" << endl;
		cin >> radius;
		circumference_circle = 2 * pie * radius;
		cout << "The circumference of circle is: " << circumference_circle;
		system("pause");
		return 0;
}

// Task 9) Convert Celsius to Fahrenheit
#include<iostream>
using namespace std;
int main()
{
		float temp_C, temp_F;
		cout << "Enter temperature in celsius to convert it into fahrenheit" << endl;
		cin >> temp_C;
		temp_F = (9.0/5.0) * temp_C + 32;
		cout << "Celsius temperature in Fahrenheit: " << temp_F;
		system("pause");
		return 0;
}

// Task 10) Convert Fahrenheit to Celsius
#include<iostream>
using namespace std;
int main()
{
		float temp_C, temp_F;
		cout << "Enter temperature in Fahrenheit to convert it into Celsius" << endl;
		cin >> temp_F;
		temp_C = (temp_F - 32.0) * 5.0/ 9.0;
		cout << "Fahrenheit temperature in Celsius: " << temp_C;
		system("pause");
		return 0;
}
