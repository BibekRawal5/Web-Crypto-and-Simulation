#include <iostream>
#include <math.h>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	int cp = 0, sp = 0, epochs, i, j;
	double rand_x, rand_y, dist, pi;
	
	cout << "Enter number of itereations: ";
	cin >> epochs;
	
	for(i = 0; i < epochs; i++)
	{
		rand_x = double(rand() % epochs + 1) / epochs;
		rand_y = double(rand() % epochs + 1) / epochs;
		
		dist = rand_x * rand_x + rand_y * rand_y;
		
		if(origin <= 1)
		{
			cp++;
		}
		sp++;
		
		
		pi = double(4.0 * cp / sp);
		cout << "\nApproximate value of PI after " << i << " iterations: "<< pi;
	}
	
	
	
	
		
}