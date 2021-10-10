#include <iostream>
using namespace std;

struct Person{
		string name;
		int age;
		string profession;
	} userOne, userTwo;

int main(){
		userOne.name = "Sakib";
		userOne.age=25;
		userOne.profession="Player";
		userTwo.name="Asif";
		cin>>userTwo.profession;
		cout<<userOne.name<<endl;
		cout<<userTwo.name<<endl;
		cout<<userTwo.profession;
		return 0;
	}
