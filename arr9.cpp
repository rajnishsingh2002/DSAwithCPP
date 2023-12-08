#include<iostream>
using namespace std;

void sort(int arr[], int n){
    int i=0,j=n-1;
    while (i<=j)
    {
        if (arr[i]>arr[j])
        {
           swap(arr[i++],arr[j--]);
        }
        else if (arr[i]<arr[j])
        {
            i++;
        }
        else{
            j--;
        }
        
    }
    
}


 int main(){
    int arr[]={1,0,0,1,0,1,0};
    sort(arr,7);

    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<" ";
    }
    
 }