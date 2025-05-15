#include<bits/stdc++.h>
using namespace std;

void PrintFunction(int i, int N){    //3,3

if(i<1){
	return;
}

PrintFunction(i-1,N);   //4,3
cout<<i <<" ";

}
int main(){
	int N;

	cout<<"enter the number from which you want to start\n";
	cin >> N;  


PrintFunction(N,N);
return 0;
}