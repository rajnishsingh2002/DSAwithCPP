#include<iostream>
using namespace std;

void swapAlterEle(int arr[],int n){
    
    for (int i = 0; i < n; i+=2)
    {
        swap(arr[i],arr[i+1]);
    }
    
}

int main(){
     int arr[]={5,7,-2,10,22,1,0,25}; //{7,5,10,-2,1,22,25,0}


     swapAlterEle(arr,8);
     for (int i = 0; i <8 ; i++)
     {
       cout<<arr[i]<<" ";
     }
     
}