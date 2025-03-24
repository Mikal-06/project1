#include <iostream>
#include<cctype>
#include <cmath>
using namespace std;
const int PI =3.14159265358979323846;

void area(char shape) {
    switch (shape) {
    case 'c':
        int radius;
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        if (radius < 0) {
            cout << "Radius can not be negative." << endl;
        }
        else {
            cout << "The area of the circle is: " << PI * (pow(radius, 2)) << endl;
        }
        break;
    case's':
        int side;
        cout << "Enter the length of the square: ";
        cin >> side;
        if (side < 0) {
            cout << "Length can not be negative." << endl;
        }
        else {
            cout << "The area of the square is: " << pow(side, 2) << endl;
        }
        break;
    case'r':
        int length, width;
        cout << "Enter the length of the rectangular: ";
        cin >> length;
        cout << "Enter the width of the rectangular: ";
        cin >> width;
        if (length < 0 || width < 0) {
            cout << "Length and width can not be negative." << endl;
        }
        else {
            cout << "The area of the rectangular is: " << length * width <<endl;
        }
        break;
    case't':
        int base, hight;
        cout << "Enter the base of the triangle: ";
        cin >> base;
        cout << "Enter the hight of the triangle: ";
        cin >> hight;
        if (base < 0 || hight < 0) {
            cout << "Base and hight can not be negative." << endl;
        }
        else {
            cout << "The area of the triangle is: " << (0.5*(base*hight))<< endl;
        }
        break;
    }  
}

void circum(char shape) {
    switch (shape) {
    case 'c':
        int radius;
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        if (radius < 0) {
            cout << "Radius can not be negative." << endl;
        }
        else {
            cout << "The circumference of the circle is: " << (2*(PI*radius)) << endl;
        }
        break;
    case's':
        int side;
        cout << "Enter the length of the square: ";
        cin >> side;
        if (side < 0) {
            cout << "length can not be negative." << endl;
        }
        else {
            cout << "The circumference of the square is: " << 4 * side << endl;
        }
        break;
    case'r':
        int length, width;
        cout << "Enter the length of the rectangular: ";
        cin >> length;
        cout << "Enter the width of the rectangular: ";
        cin >> width;
        if (length < 0||width<0) {
            cout << "length or width can not be negative." << endl;
        }
        else {
            cout << "The circumference of the rectangular is: " << (2 * (length*width)) << endl;
        }
        break;
    case't':
        int side1, side2,side3;
        cout << "Enter the first side of the rectangular: ";
        cin >> side1;
        cout << "Enter the second side of the rectangular: ";
        cin >> side2;
        cout << "Enter the third side of the rectangular: ";
        cin >> side3;
        if (side1 < 0 || side2 < 0||side3<0) {
            cout << "all sides should not be negative." << endl;
        }
        else {
            int sum = side1 + side2 + side3;
            cout << "The circumference of the triangle is: " << sum << endl;
        }
        break;
    }
}

int main() {
    int radius;
    char shape, type;

    while (true) {
        cout << "Enter 'a' for area,'c' for circumference, 'q' to quit" << endl;
        cin >> type;

        if (tolower(type) == 'q') { // to quit the loop
            break;
        }
        else if (tolower(type) == 'a') {
            cout << "Enter the shape ('c' for circle,'s' for square,'r' for rectangular,'t' for triangle): " << endl;
            cin >> shape;

            if (shape == 'c') {
                area(shape);
            }
            else if (shape == 's') {
                area(shape);
            }
            else if (shape == 'r') {
                area(shape);
            }
            else if (shape == 't') {
                area(shape);
            }
        }
        else if (tolower(type) == 'c') {
            cout << "Enter the shape ('c' for circle,'s' for square,'r' for rectangular,'t' for triangle): " << endl;
            cin >> shape;
            if (shape == 'c') {
                circum(shape);
            }
            else if (shape == 's') {
                circum(shape);
            }
            else if (shape == 'r') {
                circum(shape);
            }
            else if (shape == 't') {
                circum(shape);
            }
        }

        else {
            cout << "Invalid input." << endl;
        }
    }

    return 0;
}
