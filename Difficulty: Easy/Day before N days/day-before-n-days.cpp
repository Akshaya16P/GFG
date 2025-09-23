int nthDay(int d, int n) {
    
    int k = n >= 7 ? n-int(n/7)*7 : n;
    if(k == 0) return d;
    return k > d ? 7-(k-d) : d-n;
    
}