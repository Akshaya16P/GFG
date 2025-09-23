int firstDigit(int n) {
    int b, a = n;
    while(a != 0)
    {
        b = a % 10;
        a /= 10;
    }
    return b;
}