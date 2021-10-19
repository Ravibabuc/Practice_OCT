#include <iostream>
#include<vector>

using namespace std;

int main()
{
    int n=10;
    int prev=0;
    
    vector<vector<int>> A;
    //int A[7][7];
    A.resize(n+1);
    
     A[0].resize(1);
     A[0][0]= 1;
     //cout<<"hello1"<<endl;
    for(int i =1;i<n;i++)
    {
       //cout<<"hello2"<<endl;
        A[i].resize(i+1);
        //cout<<"hello3"<<endl;
        for(int j=0;j<=i;j++)   
        {
            if(j==0)
                A[i][j] = 1;
            else if(j==i)
            A[i][j] = 1;
            else
            {
              A[i][j]=  A[i-1][j-1] + A[i-1][j] ;
            }
        }
       // cout<<endl;
    }
    
    
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<=i;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    
   cout << "Hello World" << endl; 
   
   return 0;
}
