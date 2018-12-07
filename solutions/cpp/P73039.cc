#include <iostream>
#include <string>

using namespace std;

int main() {
    long long games;
    cin >> games;
    while (games--> 0) {
        int rounds = 10;
        char last = ' ';
        bool tie = true;
        string word;
        while (rounds--> 0) {
            cin >> word;
            if (last == word.at(0) or rounds == 9) last = word.at(word.length() - 1);
            else if (tie) {
                tie = false;
                cout << (rounds % 2 == 0 ? "A" : "B");
            }
        }
        if (tie) cout << "=";
        cout << endl;
    }
    return 0;
}
