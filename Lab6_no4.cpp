#include <iostream>
using namespace std;
void fun(double R) {
    double circumference = 2*3.14*R;
    double area = 3.14*R*R;
    cout << "circumference is " << circumference << "area is " << area << endl;
}
void fun(double a, double b) {
    double perimeter = 2*(a + b);
    double area = a * b;
    cout << "perimeter is " <<perimeter << "area is " << area << endl;
}
int main() {
    double r;
    cin >> r;
    fun(r);
    double a, b;
    cin >> a >> b; 
    fun(a,b);
    return 0;
}
