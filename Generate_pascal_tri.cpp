#include <iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;


#include <iostream>
#include<vector>
#include<string>
using namespace std;
using namespace std;

#include<iostream>

using namespace std;

vector<vector<int>> getRow(int A) {
    vector <vector<int >> B;
    B.resize(A+1);
   //  int prev = 1;
    //B[0][0] = prev;
 
    for (int i = 0; i <= A; i++) 
    {
        B[i].resize(i+1);
        for (int j=0;j<= i;j++)    
        {
            if(j==0 ||i==j )
            {
                B[i][j] = 1;
            }
            else
            {
                B[i][j]= B[i-1][j-1] + B[i-1][j];
            }
        }
        
    }
    return B;
}


int main()
{
   //vector<int> A = { 0, 1, 0, 1 };
   int A=5;
  
  vector<vector<int>> C=getRow(A);
   int n =C.size();
    for (int i =0;i< n;i++)
    {
       for (int j =0;j<=i ;j++)
       {
        cout <<C[i][j]<<"  ";
       }
       cout<<endl;
    }
     
   return 0;
}
