#include <iostream>
#include <string>

std::string removeSpaces(const std::string &input) {
    std::string result;
    for (char c : input) {
        if (c != ' ') {
            result += c;
        }
    }
    return result;
}

int main() {
    std::string input = "geeks  for geeks";
    std::string output = removeSpaces(input);
    std::cout << "Input: " << input << std::endl;
    std::cout << "Output: " << output << std::endl;
    return 0;
}
