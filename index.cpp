#include <iostream>
#include <string>
#include <time.h>
using namespace std;

int main(){
	string url= "https://nyanweb.nasiwebhost.com/";
	int port;
	string user;
	port = 4040;
	cout << "helo dunia" << endl;
	cout << "url anda =" << url << endl;
	cout << "masukan nama anda !!" << endl;
	cin >> user;
	if (user == "rezky")
	{
		cout << "welcome to admin panel " << user << endl;
	}
	return 0;
}