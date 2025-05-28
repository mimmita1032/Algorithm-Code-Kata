#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int num1, int num2) {
    int answer = num1 * num2;

    return answer;
}

int main() {
    int num1 = 2;
    int num2 = 4;

    int result = solution(num1, num2);
    cout << "°á°ú : " << result << endl;

    return 0;
}