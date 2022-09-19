#include <iostream>

using namespace std;

int main() {
    string binNum;
    int decNum;
    cin >> decNum;
    while (decNum > 0){
        binNum.append(to_string(decNum%2));
        decNum /= 2;
    }
    string reversed(binNum.rbegin(), binNum.rend());
    cout << reversed;
    return 0;
}