// This is a better solution to second largest element in an array


// here the TC is N + N == 2N ==O(2N)


// first we found out the largest element

#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int secondlargestElement(vector<int>& array){
   int largest = array[0];
   int secondlargest;

//    this finds the largest element in an array    (N)
   for (int i = 1; i < array.size(); i++)
   {
	if(largest < array[i]){
          largest = array[i];
	}

   }


//    this finds me the second largest element in an array     (N)
   secondlargest = array[0];
   for (int i = 1; i < array.size(); i++)
   {
	
	  if((array[i] > secondlargest)  && (array[i]<largest)){
		secondlargest = array[i];
	  }
   }

   if(secondlargest < largest){

   return secondlargest;
   }
   else{
	return -1;
   }
   




   

}

int main(){
	vector<int> array1 ={4,4,5,7,6,8 };

  int secondlargest  = secondlargestElement(array1);

cout<<secondlargest;
	return 0;
}