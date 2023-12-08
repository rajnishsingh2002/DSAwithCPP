#include<iostream>
using namespace std;

void arrInterSec(int arr1[],int n1,int arr2[],int n2){
   
   for (int i = 0; i < n1; i++)
   {

    for(int j=0;j<n2;j++){
        if (arr1[i]==arr2[j])
        {
            cout<<arr2[j]<<" ";
            arr2[j]=INT32_MIN;
            break;
        }
    }
        
   }
   
    
}

int main(){
    int arr1[]={1,2,3,4};
    int arr2[]={2,4,6};


   arrInterSec(arr1,4,arr2,3);
}

