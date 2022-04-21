// You are given a rectangular board of m × n squares. Also you are given an unlimited number of standard domino pieces of 2 × 1 squares. You are allowed to rotate the pieces. You are asked to place as many dominoes as possible on the board so as to meet the following conditions:

// 1. Each domino completely covers two squares. No two dominoes overlap.Each domino lies entirely inside the board. It is allowed Find the maximum number of dominoes, which can be placed under these restrictions.

// Input
// In a single line you are given two integers M and N — board sizes in squares (1 ≤ m ≤ n ≤ 16).

// Output
// Output one number — the maximal number of dominoes, which can be placed.

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int maxNumberOfDominoes = floor(n*m*0.5);
    cout<<maxNumberOfDominoes;

    return 0;
}