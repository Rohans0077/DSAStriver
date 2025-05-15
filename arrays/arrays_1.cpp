// if you declare an array inside main function()
// then all the elements of that array will store garbage value.
// but if you declare an array globally then the array gets stored with 0 
 


// 1. largest element in an array
// brute force ->  sort it and then print the last element

// TC - O(N log N)
// SC = O{n}



// #include<iostream>
// #include <bits/stdc++.h>
// using namespace std;


// int sortArr(vector<int>& arr){
// 	sort(arr.begin(),arr.end());
// 	return arr[arr.size()-1];
// }

// int main(){
// 	vector<int> arr1 = {2,3,5,3,8,5,3};
// 	vector<int> arr2 = {4,2,4,2,7,5,9};

// 	cout<<"The largest element in the sorted arr1 is : "<<sortArr(arr1)<<endl;
// 	cout<<"The largest element in the sorted arr2 is : "<<sortArr(arr2)<<endl;

// 	return 0;
// }








// 2nd approach

// Solution2: Using a max variable
// Intuition:
// We can maintain a max variable that will update whenever the current value is greater than the value in the max variable.  

// Approach: 
// Create a max variable and initialize it with arr[0].
// Use a for loop and compare it with other elements of the array
// If any element is greater than the max value, update max value with the element’s value
// Print the max variable.

// TC - O(N)
// SC - 0(1)



#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int LargestElement(int arr[],int n){
int max = arr[0];

for (int i = 0; i < n; i++){
      if( max < arr[i]){
		max = arr[i];
	   
}


}

return max;
}

int main(){
	int n;
	cin>>n;

	int arr[n];

	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}

	int largestelement = LargestElement(arr, n);

	cout<<largestelement;

	
	return 0;
}















































// optimal solution

// assume the first element as largest, iterate the whole array and keep changing the largest

// TC - O(n)



// #include<iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//      int n;
// 	 cout<<"Enter the number of elements you want to store";
// 	 cin>>n;

// 	int arr[n] ;

// 	for (int i = 0; i < n; i++)
// 	{
// 		cin>>arr[i];
// 	}
	


// 	int largest = arr[0];

// 	for (int i = 0; i < n; i++)
// 	{
// 		if(arr[i] > largest){
//                largest = arr[i];
// 		}

		


// 	}
// 	cout<<largest;

// 	return 0;
// }