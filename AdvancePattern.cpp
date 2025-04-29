#include <iostream>
using namespace std;

class AdvancePattern {
public:
    static void ButterflyPattern() {
        // Upper part
        for(int i = 0; i < 5; i++) {
            for(int j = 0; j <= i; j++) {
                cout << "* ";
            }
            for(int j = 0; j < 2 * (5 - i - 1); j++) {
                cout << "  ";
            }
            for(int j = 0; j <= i; j++) {
                cout << "* ";
            }
            cout << endl;
        }

        // Lower part
        for(int i = 5; i > 0; i--) {
            for(int j = 1; j <= i; j++) {
                cout << "* ";
            }
            for(int j = 0; j < 2 * (5 - i); j++) {
                cout << "  ";
            }
            for(int j = 1; j <= i; j++) {
                cout << "* ";
            }
            cout << endl;
        }
    }

    static void Rhombus() {
        for(int i = 0; i < 5; i++) {
            for(int j = 0; j < 5 - i - 1; j++) {
                cout << "  ";
            }
            for(int j = 0; j < 5; j++) {
                cout << "* ";
            }
            cout << endl;
        }
    }
};

int main() {
    // Call Rhombus
    AdvancePattern::Rhombus();

    // Uncomment to call Butterfly Pattern
    // AdvancePattern::ButterflyPattern();

    return 0;
}
