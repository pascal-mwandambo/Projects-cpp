
#include <iostream>
#include <string>
using namespace std;

int main() {
      int*  num = new int;
      string* word = new string;
      cout << "Enter an integer: ";
       cin >> *num;

       // cin.ignore();

    cout << "Enter a string: ";
    cin>> *word;
 //   getline(cin, *word);

     cout << "\nThe integer is: " << *num << endl;
    cout << "The string is: " << *word << endl;

    delete num;
    delete word;

    return 0;
}
