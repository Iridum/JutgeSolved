#include <map>
#include <iostream>
#include <string>

using namespace std;

int main() {
    int amount;
    cin >> amount;
    map<int, int>  m;

    while (amount-- > 0) {
        int numero;
        cin >> numero;
        m[numero]++;
    }

    for (auto const& x : m) cout << x.first << " : " << x.second << endl;

    return 0;
}
