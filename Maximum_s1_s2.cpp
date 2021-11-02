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

int solve(vector<int> &A, int B) {


    int n =A.size();
    int S1 = INT_MAX;
    int ans = INT_MIN;
    int S2=0;
    int S3=0;
    vector<int> pre;
    pre.resize(n);

    vector<int> pre1;
    pre1.resize(n);
   
    //sort(A.begin(), A.end());
    sort(A.begin(), A.end(), greater<int>());
    pre[0] = A[0];
    for (int i =1;i<n ;i++)
    {
        pre[i] = A[i] + pre[i-1];
    }
    
   /* for (int i =0;i<n ;i++)
    {
        cout<<"pre[i] "<<pre[i]<<endl;
    }*/
    //for (int i =0;i<B ;i++)
    //{
         S1 =  pre[B -1];
         S2 = pre[n-1] - S1;
         ans = abs(S1-S2);
              //cout<<"S1 = "<<S1<<endl;
        //cout<<"S2 = "<<S2<<endl;
         //cout<<"ans = "<<ans<<endl;
    //}
    /*(S1 =0;
    for (int i =0;i<B ;i++)
    {
         S1 += A[i];
       //  cout<<"S1 = "<<S1<<endl;
        
    }*/
    
    //S2 = pre[n-1] - S1;
    
    //cout<<" pre[n-1] "<<pre[n-1]<<endl;
    //cout<<" S2 "<<S2<<endl;
    //ans = abs(S1-S2);
    
    sort(A.begin(), A.end());
    pre1[0] = A[0];
    for (int i =1;i<n ;i++)
    {
        pre1[i] = A[i] + pre1[i-1];
    }
    
    S3 =  pre1[B -1];
         S2 = pre1[n-1] - S3;
         ans =max(ans,  abs(S3-S2));
           //   cout<<"S3 = "<<S3<<endl;
        //cout<<"S2 = "<<S2<<endl;
         //cout<<"ans = "<<ans<<endl;
    
    return ans;
}

int main()
{
    //vector<int> A= { 70, 21, 7, 64, 44, 79, 50, 89, 68, 23, 20, 50, 65, 64, 48, 3, 46, 87};
    
    vector<int> A= {  93, 51, 84, 81, 89, 82, 28, 78, 86, 35, 64, 38, 49, 99, 83};
    int B =4;
    
    cout<<solve(A, B)<<endl;

    return 0;
}
