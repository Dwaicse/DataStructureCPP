#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n)
{
   

    
    vector<pair<int, int>> a ;
    sort(arr.begin(),arr.end());
    int i = 0;
    int j = n-1;

    while(i<j)
    {
        if(arr[i]+arr[j] == target)
        {
            a.push_back({arr[i],arr[j]});
            i++;
            j--;
        }
        else if(arr[i]+arr[j]<target)
        {
            i++;
        }
        else{
            j--;
        }
    }

    if(a.empty()) a.push_back({-1,-1});

return a;
}









int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n,target;
        cin>>n>>target;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        
        vector<pair<int,int>> ans=twoSum(v,target,n);
        for(auto i:ans)
        {
            if(i.first<i.second)
                cout<<i.first<<" "<<i.second<<"\n";
            else
                cout<<i.second<<" "<<i.first<<"\n";
        }
        
    }
}