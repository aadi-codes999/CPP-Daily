#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>

bool isPalindrome(const std::string &text)
{
    std::string filtered;
    filtered.reserve(text.size());

    for (char ch : text)
    {
        if (std::isalnum(static_cast<unsigned char>(ch)))
        {
            filtered.push_back(static_cast<char>(std::tolower(static_cast<unsigned char>(ch))));
        }
    }

    return std::equal(filtered.begin(), filtered.begin() + filtered.size() / 2, filtered.rbegin());
}

int main()
{
    std::cout << "Enter a string to check for palindrome: ";
    std::string input;
    std::getline(std::cin, input);

    if (input.empty())
    {
        std::cout << "No input provided.\n";
        return 0;
    }

    if (isPalindrome(input))
    {
        std::cout << "The input is a palindrome.\n";
    }
    else
    {
        std::cout << "The input is not a palindrome.\n";
    }

    return 0;
}
