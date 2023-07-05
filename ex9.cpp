#include <iostream>


const double PI = 3.14159;

using namespace std;

double calculateCircleArea(double radius) {
    return PI * radius * radius;
}

double calculateRectangleArea(double length, double width) {
    return length * width;
}

double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}

int main() {
    int choice;
    double radius, length, width, base, height;

    cout << "Geometry Calculator\n";
    cout << "1. Calculate the area of a circle\n";
    cout << "2. Calculate the area of a rectangle\n";
    cout << "3. Calculate the area of a triangle\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            cout << "The area of the circle is: " << calculateCircleArea(radius) << endl;
            break;
        case 2:
            cout << "Enter the length of the rectangle: ";
            cin >> length;
            cout << "Enter the width of the rectangle: ";
            cin >> width;
            cout << "The area of the rectangle is: " << calculateRectangleArea(length, width) << endl;
            break;
        case 3:
            cout << "Enter the base of the triangle: ";
            cin >> base;
            cout << "Enter the height of the triangle: ";
            cin >> height;
            cout << "The area of the triangle is: " << calculateTriangleArea(base, height) << endl;
            break;
        default:
            cout << "Invalid choice! Please select a number between 1 and 3." << endl;
            break;
    }

    return 0;
}
