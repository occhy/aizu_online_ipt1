#include <iostream>
#include <stdio.h>
using namespace std;

// https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/5/ITP1_5_A
// 長方形の描画
// たてH cm よこ W cm の長方形を描くプログラムを作成して下さい。
// 1 cm × 1cm の長方形を '#'で表します。
// Input
// 入力は複数のデータセットから構成されています。各データセットの形式は以下のとおりです：
// H W
// H, W がともに 0 のとき、入力の終わりとします。

// Output
// 各データセットについて、H × W 個の '#' で描かれた長方形を出力して下さい。
// 各データセットの後に、１つの空行を入れて下さい。

// Constraints
// 1 ≤ H ≤ 300
// 1 ≤ W ≤ 300

// Sample Input
// 3 4
// 5 6
// 2 2
// 0 0
// Sample Output
// ####
// ####
// ####

// ######
// ######
// ######
// ######
// ######

// ##
// ##


int main(){
    int h,w;
    while(cin >> h >> w){       
        std::string str_row = std::string(w, '#');
        for(int i = 0; i<h; i++) {
            printf("%s\n", str_row.c_str());   
        }
        if (h != 0) {printf("\n");}
    }
}