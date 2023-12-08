#include<iostream>
using namespace std;

int FirstLastOccu(int arr[],int n){
    int s=0,e=n-1;

    int key=2;

    int first=-1;
    while (s<=e)
    {
        int mid=(s+e)/2;

        if (arr[mid]==key)
        {
            first=mid;
            e=mid-1;
        }
        else if (arr[mid]<key)
        {
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
        return first;
    

}


int LastOccu(int arr[],int n){
        int s=0,e=n-1;
        int key=2;

        int last=-1;
        while (s<=e)
        {
            int mid=(s+e)/2;
            if (arr[mid]==key)
            {
                last=mid;
                s=mid+1;
            }

            else if (arr[mid]<key)
            {
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            
            
        }
        return last;
}
int main(){

    int arr[]={0,0,1,1,2,2,2,2};

    int f=FirstLastOccu(arr,8);
    int l=LastOccu(arr,8);

    int totalOccu=(l-f)+1;

    cout<<"first occurence : "<<f<<endl;
    cout<<"last occurence : "<<l<<endl;
    cout<<"total occurence : "<<totalOccu<<endl;


}