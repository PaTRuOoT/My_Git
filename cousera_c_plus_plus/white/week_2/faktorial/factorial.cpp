using namespace std;

int Factorial (int x) {
    int answer;
    if (x <= 1) {
        return 1;
    }
    answer = Factorial(x) * (x-1);
    return answer;
}

int main () {
    return 0;
}