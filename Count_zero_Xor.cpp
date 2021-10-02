#include <iostream>
#include<vector>

using namespace std;

class Solution
{
 public :
 vector<vector<int> > solve(vector<int> &A, 
    vector<vector<int> > &B) ;
    
};

vector<vector<int> > Solution::solve(vector<int> &A, 
vector<vector<int> > &B) 
{
    vector<vector<int> > C;
    int n = A.size();
    int Nquer=B.size();
    vector<int> Pf;
    Pf.resize(n);
    C.resize(Nquer);
    for(int i=0;i<Nquer;i++)
    {
        C[i].resize(2);
    }
    Pf[0]= A[0];
    
    for(int i =1; i< n;i++)
    {
        Pf[i]= A[i] + Pf[i-1];
     
    }
    
     
    //1,0,0,0,1
    int NoofOnce =0;
    int R=0, L=0;
    int Q1 =0;
    for (int i=0;i< Nquer;i++)
    {
         R= B[i][1] -1;
         L= B[i][0] -1;
     //   cout <<"R ="<<R<<" L ="<<L<<endl;
       // cout <<"Pf[R]="<<Pf[R]<<" Pf[L] ="<<Pf[L]<<endl;
        if(R== n-1 && L==0)
        {
            NoofOnce= Pf[R];
        }
        else
        {
             NoofOnce = Pf[R] - Pf[L-1];    
        }
        
        int len =R-L +1-NoofOnce;
      //  cout<<"NoofOnce ="<<NoofOnce<<endl;
        C[i][1]= len;
        if(NoofOnce==0)
        {
            C[i][0]= 0;        
        }
        else
        {
            if(NoofOnce % 2 ==0)
             C[i][0]= 0;   
             else C[i][0]= 1;   
        }
        
       // cout<<"Q1 ="<<Q1<<"len = "<<len<<endl;
    }
    
    
    
    
    
    return C;
}

int main()
{
   vector<int> A = {1,0,0,0,1}; 
  
   vector<vector<int> > B = { {2,4},{1,5},{3,5}};
   Solution Sol;
   vector<vector<int> > C=Sol.solve(A, B);
   
   int n =B.size();
   for(int i=0;i<n;i++)
   {
       cout<<"C [0] "    <<C[i][0]<<endl;
        cout<<"C [1] "    <<C[i][1]<<endl;
   }
   
   
   return 0;
}
