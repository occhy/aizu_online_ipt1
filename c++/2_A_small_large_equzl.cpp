#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int a;
    int b;
    cin >> a >> b;
    if (a-b>0){
        printf("a > b\n");
    } else if (a==b) {
        printf("a == b\n");
    } else {
        printf("a < b\n");
    }
    return 0;
}