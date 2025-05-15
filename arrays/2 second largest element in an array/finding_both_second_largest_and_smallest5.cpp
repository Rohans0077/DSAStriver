// https://www.naukri.com/code360/problems/ninja-and-the-second-order-elements_6581960?utm_source=striver&utm_medium=website&utm_campaign=codestudio_a_zcourse&leftPanelTabValue=SUBMISSION

#include<iostream>
#include <bits/stdc++.h>
using namespace std;



int SecondSmallest(vector<int> & arr){
    int smallest = arr[0];
    int secondsmallest = INT_MAX;

    for(int i = 0; i< arr.size();i++){
        if(arr[i] < smallest){  
            secondsmallest = smallest;
            smallest = arr[i];

        }
        
if((smallest < arr[i]) && (secondsmallest >arr[i])){
secondsmallest = arr[i];
    }

}
  

  

return secondsmallest;


}


vector<int> getSecondOrderElements( vector<int> a) {
   int largest = a[0];
	int secondlargest = INT_MIN;



	for (int i = 0; i < a.size(); i++)
	{
	     if(largest < a[i]){          
			 
		    secondlargest = largest;   
			largest = a[i];               
		 }

		
                                       
		 if((a[i]< largest)&& (a[i] > secondlargest)){
			secondlargest = a[i];
		 }
		
		        
	}

    int secondsmallest = SecondSmallest(a);

    



	cout<<secondlargest<<endl<<secondlargest<<endl;

	return {secondlargest , secondsmallest};
}



int main(){
	

	vector<int> array = {56,56,56,56};

	vector<int> result  =  getSecondOrderElements(array);
	cout << "Second Largest: " << result[0] << endl;
    cout << "Second Smallest: " << result[1] ;

	return 0;
}