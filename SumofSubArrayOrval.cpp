#include <iostream>
#include<vector>

using namespace std;

class Solution
{
 public :
    int solve(vector<int> &A)  ;
    
};

int Solution::solve(vector<int> &A) {
    
    int n =A.size();
    long sum=0;
    
    
    for (int i =0;i<n;i++)
    {
        int sum1=0;
        for(int j=i;j<n;j++)
        {
                   sum1 = (sum1 | A[j]);
                   sum =sum + sum1;
        }
    }
    return sum % 10000000007;
}

int main()
{
   vector<int> A = { 1,2,3,4,5 }; 
  
  
   Solution Sol;
   int C=Sol.solve(A);
   

        cout<<"C  "    <<C<<endl;

   
   
   return 0;
}
