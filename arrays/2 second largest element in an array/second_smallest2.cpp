#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int secondSmallest(vector<int>& array ){
	sort(array.begin(), array.end());
	int smallest = array[0];
	for (int i = 1; i < array.size(); i++)
	{
		if(smallest < array[i]){
			return array[i];
		}
	}

	if(smallest == array[0]){
		return -1;
	}
	
}

int main(){       
	
vector<int> array1 = {2,2,2,2,2};

int secondsmallest =  secondSmallest(array1);
cout<<secondsmallest;




	return 0;
}