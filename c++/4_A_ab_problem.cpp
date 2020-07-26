#include <iostream>
#include <stdio.h>
using namespace std;
// https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/4/ITP1_4_A
// ２つの整数 a と b を読み込んで、以下の値を計算するプログラムを作成して下さい：

// a ÷ b ： d (整数)
// a ÷ b の余り ： r (整数)
// a ÷ b ： f (浮動小数点数)
// Input
// 1行に２つの整数 a, b が与えられます。

// Output
// d, r, f を１つの空白で区切って１行に出力して下さい。fについては、0.00001以下の誤差があってもよいものとします。

// Constraints
// 1 ≤ a, b ≤ 10^9
// Sample Input
// 3 2
// Sample Output
// 1 1 1.50000

int main(){
    int a,b,d,r;
    double f;
    cin >> a >> b;
    d = a/b;
    r = a%b;
    f = 1.0*a/b; 
    printf("%d %d %.5lf\n", d,r,f);
}