#include <iostream>
#include<vector>
#include <bits/stdc++.h>
#include <string>
using namespace std;


#define MAX 256

using namespace std;



bool compare(char arr1[], char arr2[])
{
    for (int i=0; i<256; i++)
        if (arr1[i] != arr2[i])
            return false;
    return true;

}
    
    
    
int search(string A, string B)
{
    int M = A.size();
    int N = B.size();
    int cnt=0;
  
    char countP[MAX] = {0}, countTW[MAX] = {0};
    for (int i = 0; i < M; i++)
    {
        (countP[A[i]])++;
        (countTW[B[i]])++;
    }
 
  
    for (int i = M; i < N; i++)
    {
        if (compare(countP, countTW)){
            //cout << "Found at Index " << (i - M) << endl;
            cnt ++;
            }
 
  
        (countTW[ B[i]])++;
 
        // Remove the first character of previous window
        countTW[B[i-M]]--;
    }
 
    // Check for the last window in text
    if (compare(countP, countTW))
    {
       // cout << "Found at Index " << (N - M) << endl;
        cnt ++;
    }
        
        return cnt;
}
   

int main()
{
   string A="abc";
   string B ="abcbacabc";
   
   cout <<search(A, B)<<endl;

   return 0;
}
