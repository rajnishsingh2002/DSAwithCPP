#include<iostream>
using namespace std;

void occu(int arr[],int n, int k){

    for (int i = 0; i < n; i++)
    {
       for (int j = i+1; j < n; j++)
       {
         if (arr[i]+arr[j]==k)
         {
            cout<<arr[i]<<" "<<arr[j]<<endl;
            break;
         }
         
         
       }
       
    }
    

}
int main(){
     int arr[]={1,2,3,4,5};

     occu(arr,7,5);

}