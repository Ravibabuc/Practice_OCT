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
string solve(string A) {
    int cnt =0;
    int n=A.size();
    int pal=0;
    
    if(n==1)
        return "YES";
    for(int i =0, j=n-1; j>i ;i++, j--)
    {
      //cout <<" A [i]"<<A[i]<<endl;
      //cout <<" A [j]"<<A[j]<<endl;
        if(A[i] == A[j])
        {
            pal=1;
            continue;
        }
        else
        {
            pal=0;
            cnt ++;
        }
    }
 //   cout<<"pal "<<pal<<endl;
   // cout<<"cnt "<<cnt<<endl;
    //cout <<"A.size"<<A.size()<<endl;
    if(pal ==1)
    {
      if(A.size() % 2 == 0 )    
      {
            
        if(cnt ==1) return "YES";
            else return "NO";    
      }
      else
      {
      if(cnt ==0 || cnt ==1) return "YES";
            else return "NO";    
      } 
    }
    
   
    
}

    
   

int main()
{
   //vector<int> A = { 0, 1, 0, 1 };
   //int A=5;
   
   //vector<string> A = {"abab", "ab", "abcd"};
   string A = "asdfghjklasdfghjklasdfgqjklasdfghjkllkjhgfdsalkjhgfdsalkjhgfdsalkjhgfdsa" ;
   
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
