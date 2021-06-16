#include <iostream>

std::string beaufort(std::string text, std::string key)
{
    std::string cipher;
    std::string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    for(int i=0; i<text.size(); i++) {
        char c0 = text[i];
        char c1 = key[i % key.size()];
        int start = 0;

        for(int j=0; j<26; j++){
            if(alphabet[j] == toupper(c0)){
                start = j;
                break;
            }
        }

        int offset = 0;
        for(int j=start; j<start+26; j++){
            int letter = j % 26;
            if(alphabet[letter] == toupper(c1)){
                break;
            }
            offset++;
        }
        cipher += alphabet[offset];

    }
    return cipher;
}