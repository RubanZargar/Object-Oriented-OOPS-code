#include<iostream>
using namespace std;
int main(){
	int guests,chairs;
	cout<<"Enter number of guests:";
	cin>>guests;
	cout<<"Enter number of chairs:";
	cin>>chairs;
	if(chairs>guests){
		cout<<"Invalid input!(Chairs cannot be more than guests)"<<endl;
		return 0;
		
	}
	long ways=1;
	for(int i=0;i<chairs;i++){
		ways *=(guests - i);
	}
	cout<<"Number of possible arrangements="<<ways<<endl;
	return 0;
}
