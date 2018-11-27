bool is_prime(int n){
    if(n == 0 or n == 1) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;
    for(int x = 3; x * x <= n; x+=2){
        if(n % x == 0) return false; 
    }
    return true;
}

bool is_perfect_prime(int n){
    if(!is_prime(n)) return false;
    if(n < 10) return true;

    int suma_n = 0;
    int i = n;
    while(i){
        suma_n += i % 10;
        i /= 10;
    }

    if(n >= 10 and not is_perfect_prime(suma_n)) return false;
    return is_prime(n);
}




int main(){}
