/*
<aside>
💡 **Question 5**
You have n coins and you want to build a staircase with these coins. The staircase consists of k rows where the ith row has exactly i coins. The last row of the staircase **may be** incomplete.

Given the integer n, return *the number of **complete rows** of the staircase you will build*.

**Example 1:**

**Input:** n = 5

**Output:** 2

**Explanation:** Because the 3rd row is incomplete, we return 2.

</aside>
*/
#include<bits/stdc++.h>
using namespace std;
int checkRows(int n){
      int c=n;
        long long i=1;
        if(n==0) return 0;
        else if(n==1) return 1;
        while(c>0){
            i++;
            c-=i;

        }
    return i-1;
    }

int main(){
    
    int i;
    cout<<"Enter coins: ";
    cin>>i;
    cout<<"The number of rows possible = "<<checkRows(i);
    return 0;
}
