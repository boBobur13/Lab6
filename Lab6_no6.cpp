#include <iostream>
using namespace std;
int minimum(int a,int b, int c) {
    int min;
    if (a<= b && a<= c)
    min = a;
    else if (b <= a && b <= c)
     min = b;
    else
   min= c;
    return min;
}
int maximum(int a, int b, int c) {
    int max;
    if (a >= b && a >= c)
    max =a;
    else if (b>= a && b >= c)
    max =b;
    else
    max =c;
    return max;
}
int main() {
    int x, y, z;
    cin >> x >> y >> z;
    cout << "maximun " << maximum(x, y, z) << endl;
    cout << "minimum " << minimum(x, y, z) << endl;
    return 0;
}
