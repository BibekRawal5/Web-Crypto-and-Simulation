#include <iostream>
#include <string>

using namespace std;

std::string monoalphabeticCipher(const std::string& text, const std::string& key, bool dec) {
    char lowerMap[26];
    char upperMap[26];
    std::string result = "";
    std::string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	if(dec == false)
    // Create the mapping arrays
    for (int i = 0; i < 26; ++i) {
        upperMap[i] = toupper(key[i]);
        lowerMap[i] = tolower(key[i]);
    }
    
    else
    for (size_t i = 0; i < 26; ++i) {
        upperMap[toupper(key[i]) - 'A'] = alphabet[i];
        lowerMap[tolower(key[i]) - 'a'] = tolower(alphabet[i]);
    }

    // Encrypt the text
    for (char c : text) {
        if (isupper(c)) {
            result += upperMap[c - 'A'];
        } else if (islower(c)) {
            result += lowerMap[c - 'a'];
        } else {
            result += c;  // Non-alphabetic characters are added unchanged
        }
    }

    return result;
}

int main() {
    std::string text;
    std::string key;

    std::cout << "Enter text: ";
    std::getline(std::cin, text);
    std::cout << "Enter 26-letter key: ";
    std::getline(std::cin, key);

    if (key.size() != 26) {
        std::cerr << "Error: Key must be 26 letters long." << std::endl;
        return 1;
    }

    std::string encryptedText = monoalphabeticCipher(text, key, false);
    std::cout << "Encrypted text: " << encryptedText << std::endl;
    
    std::string decryptedText = monoalphabeticCipher(encryptedText, key, true);
    std::cout << "Decrypted text: " << decryptedText << std::endl;
    

    return 0;
}
