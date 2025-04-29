#include <iostream>
using namespace std;

class Pattern {
public:
    // Simple Rectangular Pattern
    static void RectPattern(int a, int b) {
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                cout << "* ";
            }
            cout << endl;
        }
    }

    // Hollow Rectangular Pattern
    static void HollowRectPattern(int a, int b) {
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                if (i == 0 || i == a - 1 || j == 0 || j == b - 1) {
                    cout << "* ";
                } else {
                    cout << "  ";
                }
            }
            cout << endl;
        }
    }

    // Half Pyramid Pattern
    static void HalfParamidPattern(int a) {
        for (int i = 0; i < a; i++) {
            for (int j = 0; j <= i; j++) {
                cout << "* ";
            }
            cout << endl;
        }
    }
};

int main() {
    // Rectangular Pattern
    Pattern::RectPattern(4, 5);
    cout << endl;

    // Hollow Rectangular Pattern
    Pattern::HollowRectPattern(4, 5);
    cout << endl;

    // Half Pyramid Pattern
    Pattern::HalfParamidPattern(5);

    return 0;
}
