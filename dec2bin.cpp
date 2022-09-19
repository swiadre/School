#include <iostream>

using namespace std;

int main() {
    int binNum, decNum, rem, base=1;

    cin >> binNum;

    while(binNum != 0){
        rem = binNum % 10;
        decNum = decNum + rem * base;
        binNum /= 10;
        base = base * 2;
    }

    cout << decNum;

    return 0;
}