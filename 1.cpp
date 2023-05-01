#include<bits/stdc++.h>

using namespace std;

unsigned long bulbSwitch(unsigned long n) {
        unsigned long arr[n];
		cout<<endl;
        for(unsigned long i=0;i<n;i++)
        {
            arr[i]=1;
        }
        unsigned long count=0;
        for(unsigned long i=1;i<n;i++)
        {
            for(unsigned long j=i;j<n;j+=i+1)
            {
				if(arr[j]==1)
				{
					arr[j]=0;
				}
				else{
					arr[j]=1;
				}
            }
			cout<<endl;
        }
        for (auto &&i : arr)
        {
            if(i==1)
            {
                count++;
            }
        }
        
        return count;
    }

int main()
{
	unsigned long  n;
    cin>>n;
	int ans=bulbSwitch(n);
	cout<<"Ans is: "<<ans;
	return 0;
}