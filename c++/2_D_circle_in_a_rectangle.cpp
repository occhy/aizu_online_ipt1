#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int w,h,x,y,r;
    cin >> w >> h >> x >> y >> r;
    if(x+r <= w && x-r >= 0 && y+r <= h && y-r >= 0 ){
        printf("yes\n");
    } else {
        printf("no\n");
    }
}