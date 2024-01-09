#include <iostream>
int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    int matrix[n][n];
    std::cout << "Enter " << n * n << " numbers for the matrix:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cin >> matrix[i][j];
        }
    }
    std::cout << "Matrix in Row-Major Order:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << "Matrix in Column-Major Order:\n";
    for (int j = 0; j < n; ++j) {
        for (int i = 0; i < n; ++i) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
 
