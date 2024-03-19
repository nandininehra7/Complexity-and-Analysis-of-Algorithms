#include<bits/stdc++.h>
using namespace std;

int power(int m, long long n) {
    if (n == 0) {
        return 1;
    } else if (n % 2 == 0) {
        int temp = power(m, n / 2);
        return temp * temp;
    } else {
        return m * power(m, n - 1);
    }
}

int main()
{

}