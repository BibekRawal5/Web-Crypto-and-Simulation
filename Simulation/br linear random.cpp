#include <iostream>

using namespace std;

int main()
{
	int x0, x[100], a, c, m, aex[100] = {0}, i = 0;
	float r[100];	
	
	cout << "Enter initial seed(X0): ";
	cin >> x0;
	
	cout << "Enter multiplicative number (a): ";
	cin >> a;
	
	cout << "Enter additive number (c): ";
	cin >> c;
	
	cout << "Enter mod number (m): ";
	cin >> m;
	
	x[i] = (a * x0 + c) % m;
	r[i] = float(x[i]) / m;
	aex[x[i]] = 1; 
	cout << "Random numbers: \n";
	cout << "X: " << x[i] << " \tR: " << r[i] << endl;
	i++;
	 
	while(true)
	{
		x[i] = (a * x[i-1] + c) % m;
		r[i] =float(x[i]) / m;
		if (aex[x[i]] == 1)
			break;
		aex[x[i]] = 1; 
		cout << "X: " << x[i] << " \tR: " << r[i] << endl;
		i++;
	}
}