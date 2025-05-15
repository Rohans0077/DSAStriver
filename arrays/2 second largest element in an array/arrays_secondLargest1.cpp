// 2.  second largest element in an array without sorting


// 1 . brute force approach
// sort the whole array then find the largest and then with that find the second largest


// first we did sorting which took - N log N
// and then run the entire thing - N

// total will be Nlog N + N



#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int secondLargest(vector<int>& arr){

	sort(arr.begin(),arr.end());

	// {1,2,5,7,7,7}  after sorting

	int largest = arr[arr.size()-1];
	int secondlargest = -1;
	for (int i = arr.size()-2; i >= 0; i--)
	{

		if(largest > arr[i]){
			secondlargest = arr[i];
			return secondlargest;
		}
		
		
	}
	if(secondlargest == -1){
		return -1;
	}
	
	
	

}

int main(){
	vector<int> arr = {7,7,7,7,7,7};





	int element = secondLargest(arr);
cout<<element;


	return 0;
}