#include <iostream>
#include <string>


using namespace std;

int main() {
    int speed, s = 0, SUM = 0;
    string a, b, c, letter_plate;


    while (letter_plate != "A999AA") {
        cin >> speed >> letter_plate;

        a = letter_plate.at(1);
        b = letter_plate.at(2);
        c = letter_plate.at(3);

        if (speed > 60) {
            if ((a == b) or (a == c) or (b ==c )) {
                if (a == b and b == c) {
                    s = 1000;
                }
                else s = 500;
            }
            else s = 100;
        }
        if (letter_plate == "A999AA") {
            s = 0; }

        SUM += s;
        s = 0;
    }
    cout << SUM;
    return 0; }