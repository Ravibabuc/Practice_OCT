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
    
    int Xmin =INT_MAX;
    int Xmax =INT_MIN;
    int ymin =INT_MAX ;
    int ymax =INT_MIN;
    
    for (int i =0;i<n ;i++)
    {
        Xmin = min_value(Xmin, A[i] +i );
        Xmax = max_value(Xmax, A[i]  +i );
        
        ymin = min_value(ymin, A[i] -i );
        ymax = max_value(ymax, A[i]  -i );
    }
    
   // cout<<"Xmin "<<Xmin<<endl;
    //cout<<"Xmax "<<Xmax<<endl;
    //cout<<"ymin "<<ymin<<endl;
    //cout<<"ymax "<<ymax<<endl;
    ans = max_value((Xmax - Xmin) ,( ymax-  ymin));
    return ans;
}

int main()
{
    vector<int> A= { 1, 3, -1};
    
    cout<<maxArr(A)<<endl;

    return 0;
}
