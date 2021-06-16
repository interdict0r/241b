#include "beaufort.h"

int main()
{
    std::string text, key, out;
    std::cout << "text: ";
    std::cin >> text;
    std::cout << "key: ";
    std::cin >> key;
    out = beaufort(text, key);
    std::cout << out << "\n";
}