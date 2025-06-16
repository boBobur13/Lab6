#include <iostream>
using namespace std;

void displayeven(int num) {
    if (num < 0) num = -num;
    int digits[10];
    int count = 0;
    while (num > 0) {
    digits[count] = num % 10;
    num /= 10;
    count++;
    }
    for (int i=count-1; i>=0; i--) {
    if (digits[i] % 2==0) {
     cout << digits[i] << " ";
        }
    }
    cout <<endl;
}
int main() {
    int num;
    cin >> num;
    displayeven(num);
    return 0;
}
