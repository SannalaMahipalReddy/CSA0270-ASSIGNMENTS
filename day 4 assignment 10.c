#include <iostream>
#include <cmath>

using namespace std;

union Shape {
    double radius;  
    struct {
        double length;  
        double width;   
    } rectangle;
};

int main() {
    Shape shape;  
    char choice;
    cout << "Enter shape (c for circle, r for rectangle): ";
    cin >> choice;
    
    
    if (choice == 'c') {
        cout << "Enter circle's radius: ";
        cin >> shape.radius;
         
        double area = M_PI * pow(shape.radius, 2);
        cout << "Area of the circle: " << area << endl;
    } else if (choice == 'r') {
        cout << "Enter rectangle's length: ";
        cin >> shape.rectangle.length;
        cout << "Enter rectangle's width: ";
        cin >> shape.rectangle.width;
        
        double area = shape.rectangle.length * shape.rectangle.width;
        cout << "Area of the rectangle: " << area << endl;
    } else {
        cout << "Invalid choice. Exiting..." << endl;
    }

    return 0;
}
