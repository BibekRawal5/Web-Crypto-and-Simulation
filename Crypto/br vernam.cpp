#include<iostream>
#include<string>
using namespace std;
string encrypt(string msg, string key)
{
    while (msg.length() > key.length())
    {
        key += key;
    }
    string encrypt_Text = "";
    for (size_t i = 0; i < msg.length(); i++)
    {

encrypt_Text+=((msg[i]-'0')^(key[i]-'0')+'0');
    }
    cout << "the cipher text is:" << encrypt_Text << endl;
	return encrypt_Text;
}

string decrypt(string cipher, string key)
{
    while (cipher.length() > key.length())
    {
        key += key;
    }
    string decrypt_Text = "";
    for (int i = 0; i < cipher.length(); i++)
    {

        decrypt_Text +=((cipher[i]-'0')^(key[i]-'0'))+'0';
    }
    cout << "the messege is:" << decrypt_Text << endl;
	return decrypt_Text;
}

int main()
{
    string msg, key;
    cout << "enter your messege in boolean : " << endl;
    cin >> msg;
    cout << "enter your key in boolean : " << endl;
    cin >> key;
    decrypt(encrypt(msg, key), key);
}