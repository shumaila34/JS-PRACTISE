#include <iostream>
#include <string>        // ✅ yeh add karo
using namespace std;     // ✅ yeh add karo

int main() {
    string str;
    char word;
    int count = 0;

    cout << "Enter a string: ";
    cin >> str;           // ✅ semicolon missing tha

    cout << "Enter a letter: ";
    cin >> word;

    for(int i = 0; i < str.length(); i++){  // ✅ length() brackets chahiye
        if(str[i] == word){
            count++;
        }
    }

    cout << "Count: " << count;  // ✅ << use karo, aur count alag tha

    return 0;
}