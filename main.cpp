#include <iostream>

int main() {
    int A[4][4];
    int B[4][4];

    std::cout << "A" << std::endl;
    for(int i = 0; i < 4;i++) {
        for (int j = 0; j < 4; j++) {
        std::cin >> A[i][j];
        }
    }

    std::cout << "B" << std::endl;
    for(int i = 0; i < 4;i++) {
        for (int j = 0; j < 4; j++) {
            std::cin >> B[i][j];
        }
    }

    std::string total = "Equal!";

    for(int i = 0; i < 4;i++) {
        for (int j = 0; j < 4; j++) {
            if (A[i][j] != B[i][j]) {
                total = "Not equal!";
                break;
            }
        }
    }

    std::cout << total;

    return 0;
}
