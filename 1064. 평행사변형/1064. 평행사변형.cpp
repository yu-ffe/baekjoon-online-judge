#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    double xA, yA, xB, yB, xC, yC;
    cin >> xA >> yA >> xB >> yB >> xC >> yC;

    double crossProduct = (xB - xA) * (yC - yA) - (yB - yA) * (xC - xA);
    if (abs(crossProduct) < 1e-9) { 
        cout << -1;
        return 0;
    }

    double v1 = sqrt(pow(xA - xB, 2) + pow(yA - yB, 2));
    double v2 = sqrt(pow(xB - xC, 2) + pow(yB - yC, 2));
    double v3 = sqrt(pow(xC - xA, 2) + pow(yC - yA, 2));

    double l1 = 2 * (v1 + v2);
    double l2 = 2 * (v2 + v3);
    double l3 = 2 * (v3 + v1);

    cout << fixed;
    cout.precision(10);
    cout << max({ l1, l2, l3 }) - min({ l1, l2, l3 });

    return 0;
}
