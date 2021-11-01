/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int max_value(int a, int b)
{
    return a > b ?a:b;
}


int min_value(int a, int b)
{
    return a < b ?a:b;
}

int maxArr(vector<int> &A) 
{
    int n =A.size();
    int ans = INT_MIN;
    for (int i =0;i<n ;i++)
    {
        for (int j =0;j<n ;j++)
        {
            if( i != j)
            ans = max_value(ans, (abs(A[i] - A[j]) + abs(i -j)));
        }
    }
    return ans;
}

int main()
{
    vector<int> A= { 1, 3, -1};
    
    cout<<maxArr(A)<<endl;

    return 0;
}
