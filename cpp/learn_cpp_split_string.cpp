#include <iostream>
#include <sstream> // has method to split str by whitespace
#include <vector>
#include <string>

using namespace std;

int main()
{
    // Define the input string
    std::string msg = "I improved my vscode config for C/C++ today! :)";
    
    // Create a vector to store the words
    std::vector<std::string> words;
    
    // Initialize an istringstream with the input string
    std::istringstream iss(msg);
    std::string word;
    
    // Read words from the istringstream and add them to the vector
    while (iss >> word) {
        words.push_back(word);
    }
    
    // Print the words to verify
    for (const auto& w : words) {
        cout << w << " ";
    }
    cout << endl;

    // Print the amount of words
    cout << "Message Length: " << words.capacity() << endl;


    return 0;
}