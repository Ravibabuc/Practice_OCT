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
int solve(string A, int B) 
{
    int arr[26];
    int cnt=0;
    
    for(int i =0;i < 26;i++)
    {
        arr[i]=0;
    }
   for(int i =0;i<A.size();i++)
   {
      // cout <<"A[i] "<<A[i]<<endl;
       //cout <<"arr[A[i] -'a'] "<<arr[A[i] -'a']<<endl;
       //int indx = A[i] -97;
       //cout <<" indx ="<<indx<<endl;
        arr[(A[i] -97)]  = arr[(A[i] -97)]  + 1 ;
        //cout <<"arr[A[i] -'a'] "<<arr[A[i] -'a']<<endl;
   }
  
   
    sort(arr, arr + 26);
   
   for (int i=0;i<26;i++)
   {
       
       if( arr[i] > 0  )
       {
            //cout <<"arr[i] "<<arr[i]<<endl;    
            //cout <<"B  "<<B<<endl;    
         if(B >0)
         {//cout <<"B1  "<<B<<endl;  
            if(arr[i] >= B)
            {
              //  cout <<"B2  "<<B<<endl;  
                int tmp =arr[i];
                arr[i] = arr[i]-B;
                B= B-tmp;
            }
            else {
              //  cout <<"B3  "<<B<<endl;  
                B= B-arr[i];
                arr[i]=0;
            }
         }
           //cnt ++;
       }
   }
  
  cout <<" -----------"<<endl;
  
   for (int i=0;i<26;i++)
   {
       
       if( arr[i] > 0  )
       {
        //    cout <<"arr[i] "<<arr[i]<<endl;    
        
           cnt ++;
       }
   }
   
   
  
   return cnt;
}

    
   

int main()
{
   //vector<int> A = { 0, 1, 0, 1 };
   //int A=5;
   
   //vector<string> A = {"abab", "ab", "abcd"};
   string A = "abcabbccd" ;
   int B =3;
   
   cout <<solve(A, B)<<endl;
  
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
