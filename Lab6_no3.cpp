#include <iostream>
using namespace std;
void fun(double R) {
    double circumference = 2*3.14*R;
    double area = 3.14*R*R;
    cout << "circumference is " << circumference << "area is " << area << endl;
}
int main() {
    double r;
    cin >>r;
    fun(r); 
    return 0;
}
