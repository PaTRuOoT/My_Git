int Factorial (int x) {
    int answer;
    if (x <= 1) {
        return 1;
    }
    answer = Factorial(x-1) * (x);
    return answer;
}