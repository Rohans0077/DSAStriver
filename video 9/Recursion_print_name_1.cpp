// This program prints name n times using recursion

#include<bits/stdc++.h>
using namespace std;
void PrintNameFunction(int i,int n){

	if(i > n){
		return ;
	}
	cout<<"Rohan.S" <<endl;
	
	PrintNameFunction(i+1,n);

}
int main(){
int n;
cout << "enter the number of times you want your name to be printed "<<endl;
cin >> n;
	PrintNameFunction(1,n);
return 0;
}