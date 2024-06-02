#include <iostream>
using namespace std;

int modinverse(int A, int M)
{
    for (int X = 1; X < M; X++)
        if (((A % M) * (X % M)) % M == 1)
            return X;
}

int main()
{

	int i, j, k, r1 = 2, c1 = 2, c2 = 1;
	int enc[2][1], dec[2][1];
	int key[3][3] = {{7,2}, {9,3}};
	int p[2][1] = {{7}, {8}};
	
	cout << "\nPlain Text: \n";
	for(i = 0; i < 2; ++i)
	{
        for(j = 0; j < 1; ++j)
        {
				cout <<char (p[i][j] + 65);
		}
	}
	cout << "\n";
	
	cout << "\nKEY: \n";
		for(i = 0; i < 2; ++i)
	{
	
        for(j = 0; j < 2; ++j)
        {
			cout << key[i][j] << "\t";
		}
		cout <<"\n";
	}
	
	for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
        {
        	enc[i][j] = 0;
		    for(k = 0; k < c1; ++k)
            {
                enc[i][j] += key[i][k] * p[k][j];
            }
            
            enc[i][j] = enc[i][j] % 26;
		}
		
	int deter = (key[0][0] * key[1][1]) - (key[0][1] * key[1][0]);
	int MI = modinverse(deter, 26);
	
	int adj[2][2] = {{key[1][1], -1 * key[0][1]}, {-1 * key[1][0], key[0][0]}};
	int invkey[2][2];
	
	cout << "\nEncrypted Text: \n";
	for(i = 0; i < 2; ++i)
	{
	
        for(j = 0; j < 1; ++j)
        {
				cout <<char (enc[i][j] + 65);
		}
	}
	
	cout << "\n";




	for(i = 0; i < 2; ++i)
	{
	
        for(j = 0; j < 2; ++j)
        {
			invkey[i][j] = (adj[i][j] * MI) % 26;
			if(invkey[i][j] < 0)
				invkey[i][j] += 26;
		}
	}

	cout << "\nINVERTED KEY: \n";
		for(i = 0; i < 2; ++i)
	{
	
        for(j = 0; j < 2; ++j)
        {
//			invkey[i][j] = (adj[i][j] * deter) % 26;
			cout << invkey[i][j] << "\t";
		}
		cout <<"\n";
	}
	
	// DECRYPT
	for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
        {
        	dec[i][j] = 0;
		    for(k = 0; k < c1; ++k)
            {
                dec[i][j] += invkey[i][k] * enc[k][j];
            }
            
            dec[i][j] = dec[i][j] % 26;
		}
	
	cout << "\nDecrypted text: \n";
	for(i = 0; i < 2; ++i)
	{
	
        for(j = 0; j < 1; ++j)
        {
				cout << char(dec[i][j] + 65);
		}
	}
	
}
