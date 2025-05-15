#include<bits/stdc++.h>
using namespace std;

// here counter variable is global

int counter = 0;
void PrintFunction(){
if(counter == 5){
	return;
}
else{
	cout<<"The value of the counter is:"<< counter <<endl;
	counter++;
	PrintFunction();
}

}
int main(){


	PrintFunction();
}