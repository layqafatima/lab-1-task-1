#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
char firstname[50], lastname[50];
float sum=0,score[50];

cin>>firstname>>lastname;
for(int i=0;i<5;i++){
	cin>> score[i];
	sum+=score[i];
}
float avg=sum/5;
cout<< "Student Name: "<<firstname<<" "<<lastname<<endl;
cout<<"Test Scores: ";
for(int i=0;i<5;i++){
	cout<<fixed<< setprecision(2)<<score[i]<<" ";
}
	cout<< endl;
    cout<< "Average test score: "<<fixed<<setprecision(2) <<avg <<endl;
    return 0;
}