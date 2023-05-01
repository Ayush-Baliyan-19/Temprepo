#include<bits/stdc++.h>

using namespace std;

void print(vector<int>arr)
{
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
}

int kthSmallest(vector<int> arr,int n,int k)
{
    int small;
    for(int i=0;i<k;i++)
    {   
        small=arr[i];
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        print(arr);
        cout<<endl;
    }
    return arr[k-1];
}


int main()
{
    vector<int> arr={7,10,4,20,15};
    int ksmall=kthSmallest(arr,5,4);
    print(arr);
    cout<<3<<"rd smallest is: "<<ksmall;

    return 0;
}

{
        int i=0,j=0,t=0;
        for(i=0;i<=r;i++)
        {
            for(j=i+1;j<=r;j++)
            {
                if(arr[i]>arr[j])
                {
                    t=arr[i];
                    arr[i]=arr[j];
                    arr[j]=t;
                }
            }
        }
        return arr[k-1];
    }