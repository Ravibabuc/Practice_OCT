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
string  solve(string A) {
    //a' , 'e' , 'i' , 'o' , 'u' 
    string B= A + A;
    char *C = new char [B.size()+1];
    int j=0;
    
    
    for(int i=0;B[i] != '\0';i++)
    {
        //cout <<"A1 [i] = "<<A[i]<<endl;
        if(B[i] >= 'A' && B[i]<='Z')
        {
            //cout <<"A2 [i] = "<<A[i]<<endl;
            continue;
        }
        if(B[i] =='a' || B[i] =='e' ||B[i] =='i' || B[i] =='o' || B[i] =='u'     )
        {
          //  cout <<"j ="<<j<<endl;
            //cout <<"A3 [i] = "<<A[i]<<endl;
            C[j]='#';
            //cout <<"A3 ddd [i] = "<<A[i]<<endl;
            j++;
        }
        else
        {
           // cout <<"A4 [i] = "<<A[i]<<endl;
            //cout <<"j ="<<j<<endl;
            C[j]=B[i];
            //cout <<"A4 dd [i] = "<<A[i]<<endl;
            //cout <<"A4 dd C[j] = "<<C[j]<<endl;
            j++;
        }
    }
    C[j]='\0';
    return C;
}
    
   

int main()
{
   //vector<int> A = { 0, 1, 0, 1 };
   //int A=5;
   
   //vector<string> A = {"abab", "ab", "abcd"};
   string A = "AbcaZeoB" ; //, "aze" };
   string B =solve(A);
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
