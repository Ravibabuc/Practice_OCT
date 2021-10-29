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

void swap(int *a, int *b)
{
    int temp =*a;
    *a = *b;
    *b = temp;
}


int gcd1(int A, int B) 
{
    if(A==0) return B;
    if(B==0) return A;
    if(A==B) return A;
    int min1 = min_value(A, B);
    int gcdv =1;
//    cout<<"min1 "<<min1<<endl;
    while  (1)
    {
        if(A > B)
        {
            A= A % B  ;
        }
        else
        {
            B= B % A  ;
        }
        if( A == 0 ) return B;
        if ( B == 0 ) return A;
    }
    return gcdv;
}


int gcd(int A, int B) 
{
       if(A==0) return B;
    if(B==0) return A;
    if(A==B) return A;
    if(A > B)
     return gcd(A%B, B );
     else return gcd(A, B%A);
     
}

int main()
{
    int  A= 114;
    int B=672;
     int ans =gcd1(A, B) ;
    std::cout << ans << std::endl;
    
    //<<modInverse(3, 5)<<endl;
   
   return 0;
}
