long long sium = 0;

long long recursion(long long n){
    if(n == 0){
        return sium;
    }else{
        recursion(n-1);
        sium += n; 
    }
}

long long sumFirstN(long long n) {
    long long sium = recursion(n);
    return sium;
}