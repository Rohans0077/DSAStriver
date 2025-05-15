#include<bits/stdc++.h>
using namespace std;


void PrintFunction(int N,int i){
   if(N<i){
	return;
}
	cout <<N<<" ";
	PrintFunction(N-1,i);

}
int main(){
	int N;
cout<<"Enter the number from which you want to start\n";
cin>> N;


PrintFunction(N,1);

cout<<endl << N;


}