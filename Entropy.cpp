#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double p3 = 0.15; //write your value here
    double p4 = 0.1;  //and here

    for (double p1 = 0; p1 <= 1; p1 += 0.1) {
        double p2 = 1 - p1 - p3 - p4;

        double H = -p1 * log2(p1) - p2 * log2(p2) - p3 * log2(p3) - p4 * log2(p4);

        cout << "p1 = " << p1 << ", H = " << H << endl;
    }

    return 0;
}