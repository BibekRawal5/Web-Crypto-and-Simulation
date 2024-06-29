#include <iostream>
using namespace std;

int main()
{
	float ts, ta, miu, lambda, su = 0;
	
	cout << "Enter the mean inter arrival time in minutes: ";
	cin >> ta;
	lambda = 1/ta;
	cout << "Enter the mean service time in minutes: ";
	cin >> ts;
	miu = 1/ts;

	su = lambda/miu;

	
	cout << "Probability of no wait at counter: "<< endl << "P(n = 0) :";
	cout << 1 - su  << endl;
	
	cout << "Expected no of customer in the Bank (Ls): ";
	cout << su/(1 - su)  << endl;
	
	cout << "Expected Time customer spend in the Bank (Ws): ";
	cout <<  1/(miu*(1 - su))  << " minutes";
		
}