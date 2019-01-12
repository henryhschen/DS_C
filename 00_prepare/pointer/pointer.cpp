
#include <iostream>
using namespace std;

int main ()
{
	cout << "Welcome to C++!\n";
	int i = 25;
	int *ip;
	ip = &i;
	cout << i<<" "<<ip<< " " << *ip << "\n";

	int m = 5;
	int &mp = i;
	cout << m <<" "<<&mp<< " " << mp <<"\n";

	return 0;
}
