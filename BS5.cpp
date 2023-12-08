#include<iostream>
using namespace std;

int search(int arr[],int n,int k){
    int s=0,e=n-1;

    while (s<e)
    {
        int mid=(s+e)/2;
        if (arr[mid]==k)
        {
            return mid;
        }
        
       else if (arr[mid]>arr[s])
        {
            if (k>=arr[s] && k<arr[mid])
            {
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        else{
            if (k>arr[mid] && k<=arr[e])
            {
               s=mid+1;
            }
            else{
                e=mid-1;
            }
            
        }
        
    }
    
}

int main(){
     int arr[]={7,9,1,2,3,4,5};
     cout<<search(arr,7,1);
}