/*
Question 1
Given three integer arrays arr1, arr2 and arr3 **sorted** in **strictly increasing** order, return a sorted array of **only** the integers that appeared in **all** three arrays.

Example 1:

Input: arr1 = [1,2,3,4,5], arr2 = [1,2,5,7,9], arr3 = [1,3,4,5,8]

Output: [1,5]

Explanation: Only 1 and 5 appeared in the three arrays.


*/
#include <bits/stdc++.h>
using namespace std;
 
void findCommonintersect(int ar1[], int ar2[], int ar3[], int n1,
                int n2, int n3)
{
    
    int i = 0, j = 0, k = 0;
 
    
    while (i < n1 && j < n2 && k < n3) {
      
        if (ar1[i] == ar2[j] && ar2[j] == ar3[k]) {
            cout << ar1[i] << " ";
            i++;
            j++;
            k++;
        }
 
     
        else if (ar1[i] < ar2[j])
            i++;
 

        else if (ar2[j] < ar3[k])
            j++;
 
      
        else
            k++;
    }
}
 
// Driver code
int main()
{
    int ar1[] = { 1,2,3,4,5 };
    int ar2[] = { 1,2,5,7,9};
    int ar3[] = { 1,3,4,5,8 };
    int n1 = sizeof(ar1) / sizeof(ar1[0]);
    int n2 = sizeof(ar2) / sizeof(ar2[0]);
    int n3 = sizeof(ar3) / sizeof(ar3[0]);
 
    cout << "Common Elements are ";
    findCommonintersect(ar1, ar2, ar3, n1, n2, n3);
    return 0;
}