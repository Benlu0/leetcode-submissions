#include <iostream>
#include <string>

int main() {
    std::string testString = "MCMXCIV";
    int num = 0;

    for (int i = 0; i < testString.size(); i++) {
        if (testString[i] == 'I' && testString[i + 1] == 'V') {
            num += 4;
            i++;
        } else if (testString[i] == 'I' && testString[i + 1] == 'X') {
            num += 9;
            i++;
        } else if (testString[i] == 'X' && testString[i + 1] == 'L') {
            num += 40;
            i++;
        } else if (testString[i] == 'X' && testString[i + 1] == 'C') {
            num += 90;
            i++;
        } else if (testString[i] == 'C' && testString[i + 1] == 'D') {
            num += 400;
            i++;
        } else if (testString[i] == 'C' && testString[i + 1] == 'M') {
            num += 900;
            i++;
        } else {
            switch (testString[i]) {
                case 'I':
                    num++;
                    break;
                case 'V':
                    num += 5;
                    break;
                case 'X':
                    num += 10;
                    break;
                case 'L':
                    num += 50;
                    break;
                case 'C':
                    num += 100;
                    break;
                case 'D':
                    num += 500;
                    break;
                case 'M':
                    num += 1000;
                    break;
                default:
                    break;
            }
        }
    }

    std::cout << testString << std::endl;
    std::cout << std::to_string(num) << std::endl;
}
// I first started with a switch statement that goes through every numeral
// Then I added the IV, XC, etc cases through if else if
// This is obviously so unoptimized but I'll come back to it later