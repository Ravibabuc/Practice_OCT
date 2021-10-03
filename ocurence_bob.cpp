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



int solve(string A) {
    
    int count=0;
    string B;
    int n=A.size();
    for (int i =0;i< n;i++)
    {
       if( A.compare(i,3, "bob") ==0)  
        {
            count ++;
        }
    }
    return count;
}

int main()
{
   //vector<int> A = { 0, 1, 0, 1 };
   //int A=5;
   
   string A = "bobob";
   cout <<"solve ="<<solve(A)<<endl;
  
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
