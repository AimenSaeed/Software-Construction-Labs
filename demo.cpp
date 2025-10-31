#include <iostream> 
#include <string>
#include <cctype> 

using namespace std; 
int main() { 
    string str; 
    cout << "Enter string: "; 
    cin >> str; 
    string rev = string(str.rbegin(), str.rend()); 
    if (str == rev) cout << "Palindrome"; 
    else cout << "Not Palindrome"; 
    cout << endl;
//Task: 02
    string str2;
    cout << "Enter a string: ";
    cin >> str2;
    int vowels = 0, consonants = 0;
    for (char ch : str2) {
        ch = tolower(ch); 
        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    return 0; 
}
