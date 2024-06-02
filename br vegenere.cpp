#include <iostream>
#include <cctype>
using namespace std;


int main()
{
	string plain, key;
	cout << "Enter plain text: ";
	cin >> plain;
	
	cout << "Enter key: ";
	cin >> key;
	
	string cipher = "";
	int plen = plain.length(), i =0;
	int klen = key.length();
	
	if(klen < plen)
		for(i = klen; i < plen; i++)
			key += key[(i - klen)];
			
	cout <<"\nKey of same length as plain text: " << key << "\n\n";
	for(i = 0; i < plen; i++)
	{
		char tmp = ((toupper(plain[i]) - 'A') + (toupper(key[i]) - 'A') ) % 26;
		if (tmp < 0)
			tmp += 26;
		cipher += tmp + 'A'; 		
	}
	
	cout << "\nEncrypted message: " << cipher;
	string dec="";
for(i = 0; i < plen; i++)
	{
		char tmp = ((toupper(cipher[i]) - 'A') - (toupper(key[i]) - 'A') ) % 26;
		if (tmp < 0)
			tmp += 26;
		dec += tmp + 'A'; 		
	}
		cout << "\nDecrypted message: " << dec;

	
}
