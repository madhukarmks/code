// C++ program to convert number into words by breaking 
// it into groups of three

#include <iostream>
#include <vector>
#include <string>
using namespace std;

string convertToWords(int n) {
    if (n == 0) 
        return "Zero";
    
    // Words for numbers 0 to 19
    vector<string> units = {
        "",        "One",       "Two",      "Three",
        "Four",    "Five",      "Six",      "Seven",
        "Eight",   "Nine",      "Ten",      "Eleven",
        "Twelve",  "Thirteen",  "Fourteen", "Fifteen",
        "Sixteen", "Seventeen", "Eighteen", "Nineteen"
    };
    
    // Words for numbers multiple of 10        
    vector<string> tens = { 
        "",     "",     "Twenty",  "Thirty", "Forty",
        "Fifty", "Sixty", "Seventy", "Eighty", "Ninety" 
    };
    
    vector<string> multiplier = 
                    {"", "Thousand", "Million", "Billion"};
  
    string res = "";
    int group = 0;
    
    // Process number in group of 1000s
    while (n > 0) {
        if (n % 1000 != 0) {
            
            int value = n % 1000;
            string temp = "";
            
            // Handle 3 digit number
            if (value >= 100) {
                temp = units[value / 100] + " Hundred ";
                value %= 100;
            }

            // Handle 2 digit number
            if (value >= 20) {
                temp += tens[value / 10] + " ";
                value %= 10;
            }

            // Handle unit number
            if (value > 0) {
                temp += units[value] + " ";
            }

            // Add the multiplier according to the group
            temp += multiplier[group] + " ";
            
            // Add this group result to overall result
            res = temp + res;
        }
        n /= 1000;
        group++;
    }
    
    // Remove trailing space
    return res.substr(0, res.find_last_not_of(" ") + 1);
}

int main() {
    int n = 214;
    cout << convertToWords(n) << endl;
    return 0;
}