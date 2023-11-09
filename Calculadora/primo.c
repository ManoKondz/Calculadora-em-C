int Primo(int num, int divisor) {
    if (num <= 1) {
        return 0;
    }
    if (divisor == 1) {
        return 1;
    }
    if (num % divisor == 0) {
        return 0;
    }
    return Primo(num, divisor - 1);
}