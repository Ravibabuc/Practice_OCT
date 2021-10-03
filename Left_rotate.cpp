#include <iostream>
#include<vector>

using namespace std;



/******************************************************************************
Given a positive integer A, return an array of strings with all the integers from 1 to N. But for multiples of 3 the array should have “Fizz” instead of the number. For the multiples of 5, the array should have “Buzz” instead of the number. For numbers which are multiple of 3 and 5 both, the array should have "FizzBuzz" instead of the number.

Look at the example for more details.

Example Input

Input 1:

 A = 5



Example Output

Output 1:

 [1 2 Fizz 4 Buzz]



Example Explanation

Explanation 1:

 3 is divisible by 3 so it is replaced by "Fizz".
 Similarly, 5 is divisible by 5 so it is replaced by "Buzz".
*******************************************************************************/

#include <iostream>
#include<vector>
#include<string>
using namespace std;
using namespace std;

#include<iostream>

using namespace std;

vector<vector<int> > solve(vector<int> &A, vector<int> &B) 
{
    int n = A.size();
    vector<vector<int> >C;
    int m =B.size();
    C.resize(m);
    
    for(int i=0;i<m;i++)
    {
        C[i].resize(n);
    }
    

    for(int k=0;k<m;k++)
    {
         if(B[k]>= n)
    {
        B[k]= B[k] %n;
    }
        for(int i =0, j= B[k] ;i< n ; i++ ,j++)
        {
               // cout<<" i ="<<i<<" j ="<<j<<endl;
               // if(j < 0)
               //{
                 //   j=n-B[k]%n;
                //}
               // cout<<" i ="<<i<<"K ="<<k<<endl;
                //cout<<" A[j] ="<<A[j]<<"K ="<<k<<endl;
                C[k][i]= A[j];
                
                //cout<<" C[k][i] ="<<C[k][i]<<"K ="<<k<<endl;
                if (j == n-1)
                {
                    
                    j = -1;
                }
        }
    }
          
    return C;
}

/*
 [2, 3, 4, 5, 1]

2: [3, 4, 5, 1, 2]

B[1] = 3 which requires 3 times left rotation

1: [2, 3, 4, 5, 1]

2: [3, 4, 5, 1, 2]

2: [4, 5, 1, 2, 3] */
int main()
{
   vector<int> A = { 6, 31, 33, 13, 82, 66, 9, 12, 69, 21, 17, 2, 50, 69, 90, 71, 31, 1, 13, 70, 94, 46, 89, 13, 55, 54, 67, 97, 28, 27, 62, 34, 41, 18, 15, 35, 13, 84, 93, 27, 89, 23, 6, 56, 94, 40, 54, 95, 47 };
   vector<int> B = {  88, 85, 98, 36, 66, 40, 30, 26, 51, 77, 62, 60, 92, 64, 53, 86, 24, 53, 85, 49, 57, 29, 32, 60, 75, 82, 17, 23, 67, 51, 23, 11, 70, 59 };
   vector<vector<int> >C=solve(A, B);
   int n =A.size();
   int m=B.size();
   cout<<" n = "<<n<<endl;
   cout<<" m = "<<m<<endl;
   
   for (int i =0;i< m;i++)
   {
       for (int j =0;j< n;j++)
       {
        cout<<"C  "    <<C[i][j]<<endl;
       }
       cout<<"========================="<<endl;
    }
   
   return 0;
}
