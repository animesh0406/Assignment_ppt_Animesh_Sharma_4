/*
Question 7**
You are given an m x n matrix M initialized with all 0's and an array of operations ops, where ops[i] = [ai, bi] means M[x][y] should be incremented by one for all 0 <= x < ai and 0 <= y < bi.

Count and return *the number of maximum integers in the matrix after performing all the operations*

*/
#include<bits/stdc++.h>
using namespace std;
 int maxCount(int m, int n, vector<vector<int>>& ops) {
        int minRows = m;
        int minCols = n;
        for(auto op : ops)
        {
            int rows = op[0];
            int cols = op[1];
            minRows = min(minRows, rows);
            minCols = min(minCols, cols);
        }
        return minRows * minCols;
    }
int main(){
    vector<vector<int>> ops={{2,2},{3,3}};
    cout<<"ans for m=3,n=3 and ops provided is "<<maxCount(3,3,ops);
}