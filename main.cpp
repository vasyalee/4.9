#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;
int main() {
    int root, newRoot, count, powed, mod;
    int decResult = 0;
    string number;

    cout << "Enter number: " << endl;
    cin >> number;

    cout << "Enter root: " << endl;
    cin >> root;

    cout << "Enter new root: " << endl;
    cin >> newRoot;

    std::vector<char> letters = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f', 'g'};
    std::vector<char> digits = {};
    std::vector<int> newDigits = {};

    for (int i = 0; i < number.length(); i++) {
        digits.push_back(number[i]);
    }

    count = digits.size() - 1;
    for (int j = 0; j < digits.size(); j++ ) {
        for (int k = 0; k < letters.size(); k++) {
            if (letters[k] == digits[j]) {
                powed = pow(root, count);
                decResult += k * powed;
                count -= 1;
            }
        }

    }
    cout << decResult << endl;

    while (decResult >= newRoot) {
        mod = decResult % newRoot;
        newDigits.push_back(mod);
        decResult = decResult / newRoot;
        if (decResult <= newRoot) {
            newDigits.push_back(decResult);
        }
    }
    std::reverse(newDigits.begin(), newDigits.end());
    for (int a = 0; a < newDigits.size(); a++) {
        cout << newDigits[a];
    }









    return 0;
}
