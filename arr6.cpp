#include<iostream>
using namespace std;
int uniqueEle(int arr[],int n){
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        ans=ans^arr[i];  //0,1=1   0,0=0   1,1=0
        //0^3^4^7^3^7^77^4

        // for (int j = i+1; j < n; j++)
        // {
        //     if (arr[i]==arr[j])
        // {
        //     arr[j]=-1;
        //     arr[i]=-1;
        // }
        // }
        
        

    }
    return ans;
}
int main(){
    int arr[]={3,4,7,3,7,77,4};

  cout<< uniqueEle(arr,7);
   
    
}