#include <iostream>
#include <sstream>
#include <map>
#include <string>

using namespace std;

int main() {
    string paragraph;
    map<string, int> wordCount;

    cout << "Enter a paragraph: ";
    getline(cin, paragraph);

    stringstream ss(paragraph);
    string word;
    while (ss >> word) {
        ++wordCount[word];
    }

    cout << "Word frequencies:" << endl;
    for (const auto& entry : wordCount) {
        cout << entry.first << ": " << entry.second << endl;
    }

    return 0;
}
