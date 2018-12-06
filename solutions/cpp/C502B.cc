#include <iostream>
#include <string>
#include <vector>

using namespace std;
typedef vector< vector<int> > Matriu;

void init_matrix(const int &f,const int &c,Matriu &m){
    char ch;
    for(int i = 0; i < f;i++){
        for (int j = 0;j < c;j++){
            cin >> ch;
            m[i][j] = ch;
        }
    }
}

int main() {
    int f,c,fInit,cInit,points;	
    while (cin >> f >> c) {
        Matriu m(f,vector<int> (c));
        points = 0;
        init_matrix(f,c,m);
        cin >> fInit >> cInit;
        string command;
        cin >> command;
        bool bomba = false;
        for (unsigned int i = 0; i < command.size() && !bomba;i++){
            if (command[i] == 'N') fInit--;
            else if (command[i] == 'S') fInit++;
            else if (command[i] == 'E') cInit++;
            else if (command[i] == 'O') cInit--;

            if (m[fInit][cInit] == 66) bomba = true;
            else if (m[fInit][cInit] >= 48 && m[fInit][cInit] <= 57) {
                points += m[fInit][cInit] - 48;
                m[fInit][cInit] = 46;
            }
        }
        cout << points << endl;
    }
}
