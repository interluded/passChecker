#include <iostream>
#include <windows.h>

using namespace  std;

int main() {
    cout << "Enter the correct password: ";
    string string1;
    bool auth = false;
    int tries = 1;
    while (!auth) {
        cin >> string1;
        if (string1 == "secure_password") {
            cout << "Password correct. Welcome." << endl;
            Sleep(1000);
            auth = true;
        }
        else {
            cout << "Password wrong. Try again." << "You have attempted " << tries << " times" << endl;
            tries++;
            Sleep(tries * 100);
            if (tries >= 5) {
                cout << "locking out due to security.";
                break;
            }
        }
    }


}