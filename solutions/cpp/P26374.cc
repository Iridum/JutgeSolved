#include <vector>

using namespace std;

typedef vector< vector<int> > Matrix;


Matrix sum(const Matrix& a, const Matrix& b){
    Matrix matrix;
    unsigned size = a.size();
    for(unsigned i = 0; i < size; i++) {
        matrix.push_back({});
        for(unsigned j = 0; j < size; j++) {
            matrix[i].push_back(a[i][j] + b[i][j]);
        }
    }
    return matrix;
}

int main(){}