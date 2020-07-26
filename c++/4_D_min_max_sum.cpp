#include <iostream>
#include <stdio.h>
using namespace std;

// 最小値、最大値、合計値
// n個の整数を入力し、それらの最小値、最大値、合計値を求めるプログラムを作成してください。
// Sample Input
// 5
// 10 1 5 4 17
// Sample Output
// 1 17 37

int main() {
    long long sum = 0;
    long long n;
    cin >> n;
    
    long long min = 1000000;
    long long max = -1000000;

    long long i = 0;

    while ( i < n ){
        int a;
        cin >> a;
        sum += a;
        if ( a < min ) {min = a;}
        if ( a > max ) {max = a;}
        i++;

    }
    printf("%lld %lld %lld\n", min, max, sum);

    return 0;
}
