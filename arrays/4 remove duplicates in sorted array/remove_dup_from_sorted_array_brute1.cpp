#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n = 7;
	int arr[n] = {1,1,2,2,2,3,3};
	set<int> st;

	for (int  i = 0; i < n; i++)
	{
		st.insert(arr[i]);
	}

	int index =0;
	for(auto it:st){
		arr[index] = it;
		index++;
	}

	
	for (int i = 0; i < n; i++)
	{
		cout<<arr[i];
	}
	
	
	return 0;
}