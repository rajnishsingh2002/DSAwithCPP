#include<iostream>
using namespace std;

void occu(int arr[],int n, int key){

    for (int i = 0; i < n; i++)
    {
       for (int j = i+1; j < n; j++)
       {
         for (int k = j+1; k < n; k++)
         {
            if (arr[i]+arr[j]+arr[k]==key)
         {
            cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
            break;
         }
         }
         
         
         
       }
       
    }
    

}
int main(){
     int arr[]={1,2,3,4,5,7};

     occu(arr,7,7);

}