#include<bits/stdc++.h>
using namespace std;

void PrintFunction(int i){
cout<< 1 <<endl;

cout<<"The number of times executes is "<<++i<<endl;


// recursion calling same function again

PrintFunction(i);
}

int main(){
	int i = 0;
	PrintFunction(i);
	return 0;
}