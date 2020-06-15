#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int a,b,c,curr,n;
    cin >> a >> b >> c;
    curr = a;
    n = 0;
    while(curr <= b){
        if ( c % curr == 0 ) {
            n = n + 1;
        }
        curr = curr + 1;
    }
    printf("%d\n", n);
}