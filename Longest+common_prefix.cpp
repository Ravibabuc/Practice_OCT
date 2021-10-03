#include <iostream>
#include<vector>
#include <bits/stdc++.h>
#include <string>
using namespace std;


#include <iostream>
#include<vector>
#include<string>
using namespace std;
using namespace std;

#include<iostream>

using namespace std;

string comm(string S1, string S2, int smal)
{
    string B;
    
     for (int p=smal;p>=0;p--)
    {
       if(S1.compare(0, p, S2, 0,p ) ==0 )
       {
           B = S1.substr(0, p);
           B[p]='\0';
           return B;
       }
       
    }
    return B;
}

int min_val(int a, int b)
{
    return a < b? a:b;
}

string longestCommonPrefix(vector<string> &A)
{

    
    int count=0;
    string B;
    string Value;
    //int n=A.size();
    
    int n = A.size();
    
    
   int smal=A[0].size();
   for (int i =1;i<n;i++)
   {
       smal = min_val(smal, A[i].size());
       if( Value.size() < A[i].size())
            Value = A[i];
   }
    
    if(n== 1)
     return A[0];
    for(int i=0;i<n-1;i++)
    {
        
      B = comm( A[i],  A[i+1], smal);
      if(B.size() < Value.size())
      {
          Value =B.size();
      }
    }
    
    
    return B;
}


int main()
{
   //vector<int> A = { 0, 1, 0, 1 };
   //int A=5;
   
   //vector<string> A = {"abab", "ab", "abcd"};
   vector<string> A = {"abcd"} ; //, "aze" };
   string B =longestCommonPrefix(A);
   cout <<"B ="<<B<<endl;
  
 /* vector<vector<int>> C=getRow(A);
   int n =C.size();
    for (int i =0;i< n;i++)
    {
       for (int j =0;j<=i ;j++)
       {
        cout <<C[i][j]<<"  ";
       }
       cout<<endl;
    }*/
     
   return 0;
}
