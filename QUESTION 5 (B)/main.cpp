#include <iostream>
using namespace std;

int main() {
    // (i) Print out my name
    cout << "My name is: Uwuwiteka Hodali" << endl;

    // (ii) Print multiples of 3 from 1 to 20
    cout << "Multiples of 3 from 1 to 20 are:" << endl;

    // Loop through numbers from 1 to 20
    for (int i = 1; i <= 20; i++) {
        if (i % 3 == 0) {
            cout << i << endl;
        }
    }

    return 0;
}
