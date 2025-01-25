#include<bits/stdc++.h>
using namespace std;
int main(){
	char moviename[50];
	float adultticketprice,childticketprice,percentageofgrossamount;
	int adulttickets,childtickets;
	cout<<"Enter movie name: "<<endl;
	cin>>moviename;
	cout<<"Enter number of adult tickets: "<<endl;
	cin>>adulttickets;
	cout<<"Enter number of child tickets: "<<endl;
	cin>>childtickets;
	cout<<"Enter price of adult tickets: "<<endl;
	cin>>adultticketprice;
	cout<<"Enter price of child tickets: "<<endl;
	cin>>childticketprice;
	cout<<"Enter percentage of gross amount to be donated: "<<endl;
	cin>>percentageofgrossamount;
    float grossamount=(adultticketprice*adulttickets)+(childticketprice*childtickets);
	float amountdonated=grossamount*(percentageofgrossamount/100);
    float netsale=grossamount-amountdonated;
    printf("\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
    printf("Movie Name: %s\n", moviename);
    printf("Number of Tickets Sold: %d\n", adulttickets + childtickets);
    printf("Gross Amount: $ %.2f\n", grossamount);
    printf("Percentage of Gross Amount Donated: %.2f%%\n", percentageofgrossamount);
    printf("Amount Donated: $ %.2f\n", amountdonated);
    printf("Net Sale: $ %.2f\n", netsale);
    return 0;
}






//Input: The input to the program consists of the movie name, adult ticket price, child ticket price, number
//of adult tickets sold, number of child tickets sold, and percentage of the gross amount to be donated to the
//charity.