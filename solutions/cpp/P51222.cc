int number_of_digits(int n){
    return n/10 == 0 ? 1 : 1 + number_of_digits(n/10);
}


int main(){};
