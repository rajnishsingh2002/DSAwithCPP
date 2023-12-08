#include<iostream>
using namespace std;

int duplicateEle(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]==arr[j])
            {
               arr[j]=-1;
            }
            
        }
        
    }

    

    
    
}

int main(){
     int arr[]={4,7,2,10,22,7,0,25};// find duplicate

    duplicateEle(arr,8);
    for (int i = 0; i < 8; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}