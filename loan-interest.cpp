#include <iostream>

using namespace std;

int main(){
		int i, loan_amount, interest_rate, month;
		float total_amount;
		
		cout<<"Enter Loan Amount\n Interest rate \n Month \n";
		cin >> loan_amount >> interest_rate >> month;
		
		total_amount = loan_amount + loan_amount * (interest_rate/100.0);
		
		for(i=1; i<=month; i++){
				total_amount = total_amount + total_amount * (interest_rate/100.0);
				cout << i << " month =" << total_amount <<endl;
			}
		return 0;
	}
