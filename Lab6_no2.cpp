#include <iostream>
using namespace std;
double acceleration(double V1, double V2, double T) {
    return (V2 - V1) / T;
}
int main() {
    double v1, v2, t;
    cin >> v1 >> v2 >> t;
    double a = acceleration(v1, v2, t);
    cout <<a<< endl;

    return 0;
}
