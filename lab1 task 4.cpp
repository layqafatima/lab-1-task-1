#include<bits/stdc++.h>
using namespace std;
int main(){
	float kg,pounds;
	cout <<"Enter the weight in kg:";
	cin>>kg;
	pounds=2.2*kg;
	cout<< fixed<< setprecision(2);
	cout<<"Weight in kg:"<<kg<<endl;
	cout<<"Weight in pounds:"<<pounds;
	return 0;
}