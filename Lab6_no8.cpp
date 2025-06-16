#include <iostream>
using namespace std;
int cubeOfDigits(int number) {
    if (number< 0) number = -number;
    int sum =  0;
    while (number> 0) {
      int digit = number %10;
        sum +=digit *digit *digit;
         number /= 10;
    }
    return sum;
}
bool isArmstrong(int number) {
    return cubeOfDigits(number) ==number;
}
int main() {
    int num;
     cin >>num;
    if (isArmstrong(num)) {
       cout <<"yes" << endl;
    } else {
      cout <<"no"<< endl;
    }
    return 0;
}
