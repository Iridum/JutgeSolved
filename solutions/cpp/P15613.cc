#include <iostream>

using namespace std;

int main() {
    int a;

    cin >> a;
    cout << (a < 10 ? ("it's cold") : (a > 30 ? "it's hot" : "it's ok")) << endl;
    if(a <= 0 || a >= 100)
        cout << (a <= 0 ? ("water would freeze") : (a >= 100 ? "water would boil" : "")) << endl;
}
