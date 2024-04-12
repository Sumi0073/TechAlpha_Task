#include <iostream>

using namespace std;

void draw(int length, char symbol) {
    for (int i = 0; i < length; ++i) {
        cout << symbol;
    }
    cout << endl;
}

void Rectangle(int width, int height, char symbol) {
    for (int i = 0; i < height; ++i) {
        draw(width, symbol);
    }
}

void Triangle(int height, char symbol) {
    for (int i = 1; i <= height; ++i) {
        draw(i, symbol);
    }
}

int main() {
    char choice;
    

    do {
        cout << "Choose a shape to draw:" << endl;
        cout << "1. Rectangle" << endl;
        cout << "2. Triangle" << endl;
        cout << "3. Line" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case '1': {
                int width, height;
                cout << "Enter width and height of the rectangle: ";
                cin >> width >> height;
                Rectangle(width, height, '*');
                break;
            }
            case '2': {
                int height;
                cout << "Enter height of the triangle: ";
                cin >> height;
                Triangle(height, '*');
                break;
            }
            case '3': {
                int length;
                cout << "Enter length of the line: ";
                cin >> length;
                draw(length, '*');
                break;
            }
            case '4':
                cout << "Exit" << endl;
                break;
            default:
                cout << "Invalid choice! Please enter a valid option." << endl;
        }
    } while (choice != '4');

    return 0;
}
