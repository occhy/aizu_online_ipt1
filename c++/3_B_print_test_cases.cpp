#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int x, i;
    i = 1;
    while(cin >> x){
        if ( x == 0 ) break;
        printf("Case %d: %d\n", i, x);
        i = i + 1;
    }
}