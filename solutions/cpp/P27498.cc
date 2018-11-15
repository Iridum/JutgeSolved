#include <vector>

using namespace std;

typedef vector< vector<int> > Matrix;

void transpose(Matrix& m){
    Matrix copy = m;
    unsigned int lenght = m.size();
    for(unsigned int i = 0; i < lenght; i++){
        for(unsigned int j = 0; j < lenght; j++){
            m[i][j] = copy[j][i];
        }
    }
}

int main(){}
