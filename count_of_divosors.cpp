#include <iostream>
#include<vector>
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


int Factor_count(int A) 
{
    int cnt=0;
    if (A ==0) return 0;
    if (A == 1) return 1;
    for(int i =1;i <= sqrt(A); i++)
    {
        if( A %i ==0)
        {
            //cout <<i<<" "<<A<<endl;
           // cnt ++;
            
            if (A / i == i)
                cnt++;
 
            else // Otherwise count both
                cnt = cnt + 2;
        }
    }
    return cnt ;
}

vector<int> solve(vector<int> &A) 
{
    
    int n=A.size();
    vector<int> B;
    B.resize(n);
    for(int i =0;i<n ;i ++)
    {
        B[i] = Factor_count(A[i]);
    }
    return B;
}

int main()
{
   // vector<int> A = {12, 15, 18};
    vector<int> A = {2, 3, 4, 5, 8};
    vector<int> B;
     B =solve(A) ;
     int n=A.size();
     
     for(int i=0;i<n;i++)
      std::cout << B[i] << std::endl;
    
    //<<modInverse(3, 5)<<endl;
   
   return 0;
}
