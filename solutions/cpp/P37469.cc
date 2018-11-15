#include <iostream>

using namespace std;

int main(){
    int i,h,m,s;
    cin >> i;
    if(i >= 3600){ h = i/3600; i = i-3600*h; }
    else h = 0;
    if(i >= 60){ m = i/60; i = i-60*m; }
    else m = 0;
    s = i;
    cout << h << " " << m << " " << s << endl;
}
