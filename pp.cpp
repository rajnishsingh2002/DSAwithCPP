#include<iostream>
#include<vector>
using namespace std;
int max(vector<int> v){
    int m=v[0];

        int ans=-1;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i]>m)
        {
            m=v[i];
            ans=i;
        }
        
    }
 return ans;   
}


int originalMax(vector<int> v){
        int m=v[0];

        int ans=-1;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i]>m)
        {
            m=v[i];
            ans=i;
        }
        
    }
 return m;   
}
int main(){
    vector<int> v={1,2,2,211,41,5,5,71,17};


    // cout<<"enter the number "<<endl;

    // for (int i = 0; i < 5; i++)
    // {
    //     int ele;
    //     cin>>ele;
    //     v.push_back(ele);
    // }

    // }


    int m= max(v);
    v[m]=-1;

   cout<< originalMax(v);

    
}