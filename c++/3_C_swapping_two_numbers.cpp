#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int x, y;
    while(cin >> x >> y){
        if ( x == 0 && y == 0) 
        {
            break;
        }
        else if ( x > y)
        {
            printf("%d %d\n", y, x);
        }
        else
        {
            printf("%d %d\n", x, y);
        }
    }
}