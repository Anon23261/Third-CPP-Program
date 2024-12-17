#include <iostream>
#include <cmath>  // For mathematical operations

using namespace std;

/**
 * @brief Demonstrates various C++ concepts including variables, arithmetic, and output formatting
 * @details Shows different data types, mathematical operations, and formatted console output
 * @return int Exit status code (0 for success)
 */
int main() {
    // Integer examples with meaningful values
    int studentCount = 25;        // Number of students in a class
    int booksPerStudent = 3;      // Books each student needs
    int totalBooks = studentCount * booksPerStudent;

    // Floating point examples
    double piValue = 3.14159;     // Mathematical constant Pi
    double radius = 5.0;          // Radius in meters
    double circleArea = piValue * pow(radius, 2);  // Area of a circle

    // Temperature conversion example
    int fahrenheit = 98;
    double celsius = (fahrenheit - 32) * 5.0 / 9.0;

    // Output section with clear formatting
    cout << "\n=== Class Statistics ===" << endl;
    cout << "Students: " << studentCount << endl;
    cout << "Books per student: " << booksPerStudent << endl;
    cout << "Total books needed: " << totalBooks << endl;

    cout << "\n=== Circle Calculations ===" << endl;
    cout << "Radius: " << radius << " meters" << endl;
    cout << "Area: " << circleArea << " square meters" << endl;

    cout << "\n=== Temperature Conversion ===" << endl;
    cout << "Temperature in Fahrenheit: " << fahrenheit << "°F" << endl;
    cout << "Temperature in Celsius: " << celsius << "°C" << endl;

    return 0;
}
