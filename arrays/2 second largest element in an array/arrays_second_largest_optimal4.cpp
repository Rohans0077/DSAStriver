#include<iostream>
#include <bits/stdc++.h>
using namespace std;


void SecondLargest(vector<int>& array){
	int largest = array[0];
	int secondlargest = INT_MIN;

	for (int i = 0; i < array.size(); i++)
	{
	     if(largest < array[i]  ){          
			 
		    secondlargest = largest;   
			largest = array[i];               
		 }

		
                                       
		 if((array[i]< largest)&& (array[i] > secondlargest)){
			secondlargest = array[i];
		 }
		
		        
	}
	

	cout<<largest<<endl<< secondlargest;
}
int main(){
	vector<int> array = {56,56,50};


	 SecondLargest(array);

	
	return 0;
}