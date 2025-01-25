#include<iostream>
using namespace std;
int main(){
	int arr[20];
	int *max=&arr[0];
	int *secondmax=&arr[0];
	for(int i=0;i<20;i++){
		cin>>arr[i];
	}
	for(int i=0;i<20;i++){
		if(arr[i]>*max){
			secondmax=max;
			max=&arr[i];
		}
		else if(arr[i]>*secondmax && arr[i]!=*max){
			secondmax=&arr[i];
		}
		}
			cout<<"The second highest number is "<<*secondmax;
			return 0;
	}
