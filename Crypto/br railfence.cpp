#include <iostream>
#include <cctype>
using namespace std;


int main()
{
	string plain = "LEARNINGCRYPTOGRAPHY", cipher="" ;
	cout << "Enter plain text: ";
	cin >> plain;
	int k, i, j, depth = 3;
	
	cout << "Enter depth: ";
	cin >> depth;
	
	
	for(k = 0; k < depth; k++)
	{
		int tmp = 0;
		if(k% 2 == 0)
			tmp = 1;
		else
			tmp = -1;
		for (i = k; i < plain.length(); i+=depth + tmp)
		{
			if(i == k)
			for(j = 0; j < k; j++)
				cout << " ";
			
			cout<<plain[i];
			cipher += plain[i];
			if(tmp == 1)
				for(j = 0; j < depth ; j++)
					cout << " ";
			
			else
				for(j = 0; j < 1 ; j++)
					cout << " ";
				
		}
		cout << endl;
	}
	
	cout << "\nCIPHER TEXT: " << cipher;
	
}
