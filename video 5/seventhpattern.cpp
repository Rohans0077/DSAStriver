// stopped at 27 MINs


#include<iostream>
#include<bits/stdc++.h>
using namespace std;




void pattern7(int n){


// for(int i = 0;i<n;i++){
	// for(int j = n;j>i;j--){    you can do it like this also

	for(int i = 0;i<n;i++){
	for(int j = 0;j<i+1;j++){     

		cout<< "* ";

	}
	cout<<endl;
}
}
int main(){

	// running it using no of test cases
	int testcases;

cin>>testcases;
for(int i = 0;i<testcases;i++){
	int num;
	cin>>num;
	pattern7(num);
}





	return 0;
}