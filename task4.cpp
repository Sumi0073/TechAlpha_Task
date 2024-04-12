#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter the string: ";
    getline(cin, str); 
    string result;
    for (char c : str) {
        if (c != ' ') {
            result += c;
        }
    }

    cout << "Output: " << result << endl;

    return 0;
}
