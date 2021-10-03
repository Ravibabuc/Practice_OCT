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
int solve(string A) {

    int cnt =0;
    int len =0;
    for(int i=0;A[i] != '\0';i++)
    {
        if(A[i] =='A' || A[i] =='E' ||A[i] =='I' || A[i] =='O' || A[i] =='U' ||  A[i] =='a' || A[i] =='e' ||A[i] =='i' || A[i] =='o' || A[i] =='u'     )
        {
            //cout<<"hello  "<<A.size()-i <<endl;
            cnt += A.size()-i ;
        }
        
    }
    
    return cnt % 10003;
}
    
   

int main()
{
   //vector<int> A = { 0, 1, 0, 1 };
   //int A=5;
   
   //vector<string> A = {"abab", "ab", "abcd"};
   string A = "pGpEusuCSWEaPOJmamlFAnIBgAJGtcJaMPFTLfUfkQKXeymydQsdWCTyEFjFgbSmknAmKYFHopWceEyCSumTyAFwhrLqQXbWnXSn" ; //, "aze" };
   
   cout <<solve(A)<<endl;
  
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
