
// printing numbers linearly from 1 to N

#include<bits/stdc++.h>
using namespace std;


void PrintFunction(int i,int N){
if(i>N){
	return;
}


cout<< i<<" ";
i++;
PrintFunction(i,N);
}

int main(){
	int N;
cout<<"Enter the Number uptil which you want to print\n";
cin >> N;

PrintFunction(1,N);

return 0;
}