#include<iostream>
using namespace std;

int peakEle(int arr[],int n){
    int s=0,e=n-1;
    int peak=-1;

    while (s<e)
    {
        int mid=(s+e)/2;

        if (arr[mid]<arr[mid+1])
        {
           
            s=mid+1;
        }
        else {
            e=mid;
        }
        
    }
    return s;
}

int main(){
    int arr[]={0,10,5,2};
    // int arr[]={3,4,5,1};

   cout<< peakEle(arr,4);
    
}