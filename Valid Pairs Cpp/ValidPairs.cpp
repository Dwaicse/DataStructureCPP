#include <iostream>
#include<map>
#include<unordered_map>
using namespace std;

bool CheckSumPairs(int arr[], int n, int k, int m) {

if(n&1)
        return false;
    
   unordered_map<int,int>mp;
    
    for(int i = 0;i<n; i++){
        mp[arr[i]%k]++;
        
    }
    
    int check1,check2;
    for(int i = 0; i<n;i++){
        check1 = mp[arr[i]%k];
        
        if(arr[i]%k <=m){
            check2 = mp[m-arr[i]%k];
        } else {
          check2 = mp[k - (arr[i] % k) + m];
        }
        if (check1 != check2)
          return false;
    }
    return true;
}



int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int k,m;
	cin>>k>>m;
	if(CheckSumPairs(arr,n,k,m))
		cout<<"true";
	else
		cout<<"false";
}
