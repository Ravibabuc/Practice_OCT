#include <iostream>
#include<vector>
using namespace std;


int max_value(int a, int b)
{
    return a > b ?a:b;
}

int min_value(int a, int b)
{
    return a < b ?a:b;
}

int trap(const vector<int> &A) 
{
     vector<int> lmax;
     vector<int> rmax;
     int n = A.size();
     lmax.resize(n);
     rmax.resize(n);
     lmax[0] = A[0];
     rmax[n-1] = A[n-1];
     int total=0;
     for(int i =1,j = n-2 ;i<n;i++,j--)
     {
         lmax[i]=max_value(lmax[i-1], A[i]);
          rmax[j]=max_value(rmax[j+1], A[j]);
     }
     
     /* for(int  j = n-2;j>=0;j-- )
     {
         
         rmax[j]=max_value(rmax[j+1], A[j]);
        // cout <<"rmax[dddddddd] =" <<rmax[j]<<endl;
         
         
     }*/
     //0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1
     for(int i =1;i<n;i++)
     {
        // cout <<"A[i] =" <<A[i]<<endl;
          //      cout <<"lmax[i] =" <<lmax[i]<<endl;
            //      cout <<"rmax[i] =" <<rmax[i]<<endl;

         if(A[i] < lmax[i] && A[i] < rmax[i])
         {
             total += min_value(lmax[i], rmax[i])- A[i];
         }
     }
     return total;
}

int main()
{
    vector<int> A = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1,5,0,1 };    
    int ans = trap(A) ;
    cout<<" ans ="<<ans<<endl;
   
   return 0;
}
