#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void pattern2(int n){
for(int i = 0;i<n;i++){
	for(int j = 0;j<=i;j++){
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
	pattern2(num);
}





	return 0;
}