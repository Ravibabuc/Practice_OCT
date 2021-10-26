#include <iostream>
#include<vector>
using namespace std;


int max_value(int a, int b)
{
    return a > b ?a:b;
}

void swap(int *a, int *b)
{
    int temp =*a;
    *a = *b;
    *b = temp;
}

void solove(vector<vector<int> > &A)
{
    int n=A.size();
    for (int i =0;i<n;i++)
    {
        for (int j =i+1;j<n;j++)
        {
            swap(&A[i][j], &A[j][i]);
        }
    }
    
   /* for (int i =0;i<n;i++)
    {
        for (int j =0;j<n;j++)
        {
            cout<<A[i][j]<< "  ";
        }
        cout<<endl;
    }*/
    for(int i =0;i<n;i++)
    {
        for(int j=0,k=n-1;j<k;j++, k-- )
        {
            swap(&A[i][j], &A[i][k]);
        }
    }
    
   /* cout<<"rotated matrix "<<endl;
     for (int i =0;i<n;i++)
    {
        for (int j =0;j<n;j++)
        {
            cout<<A[i][j]<< "  ";
        }
        cout<<endl;
    }*/
}

int main()
{
    vector<vector<int> >  A= {{1, 2 , 3}, {4, 5 ,6}, {7,8,9}};
    solove(A) ;
    //cout<<" ans ="<<ans<<endl;
   
   return 0;
}
