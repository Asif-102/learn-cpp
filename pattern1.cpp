#include <iostream>
using namespace std;

void pattern(int x){
		for(int i=1; i<=x; i++){
				for(int j=1; j<=i; j++){
						cout<<"* ";
					}
				cout<<"\n";
			}
	}

int main(){
		int a;
		cin >> a;
		cout << "\n\n";
		pattern(a);
		return 0;
	}
