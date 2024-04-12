#include <iostream>
using namespace std;

int main() {
    int c = 0, count = 0, n;
    cout << "Enter the string size: ";
    cin >> n;
    char s[n];
    cout << "Input a string\n";
    cin >> s;

    while (s[c] != '\0') {
        if (s[c] == 'a' || s[c] == 'A' || s[c] == 'e' || s[c] == 'E' || s[c] == 'i' || s[c] == 'I' || s[c] == 'o' || s[c] == 'O' || s[c] == 'u' || s[c] == 'U')
            count++;
        c++;
    }
    cout << "Number of vowels in the string: " << count << endl;
    return 0;
}
