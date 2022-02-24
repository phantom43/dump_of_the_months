#include <iostream>
#include <random>
#include <string>

using namespace std;

int main(){
	int radikal = rand()%100-83;
	cout << "debug of new project" << endl;
	cout << "you have number = " << radikal << endl;
	if (radikal <= 50)
	{
		cout << "you piece of shit" << endl;
	}
	else {
		cout << "good job dude" << endl;
	}
	return 0;
}