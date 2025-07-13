#include <iostream>
using namespace std;
const int SIZE = 4;
typedef int Matrix[SIZE][SIZE];
void add(Matrix A, Matrix B, Matrix C, int size) {
  for (int i = 0; i < size; i++)
    for (int j = 0; j < size; j++)
      C[i][j] = A[i][j] + B[i][j];
}
void subtract(Matrix A, Matrix B, Matrix C, int size) {
  for (int i = 0; i < size; i++)
    for (int j = 0; j < size; j++)
      C[i][j] = A[i][j] - B[i][j];
}
void strassen(Matrix A, Matrix B, Matrix C, int size) {
  if (size == 1) {
    C[0][0] = A[0][0] * B[0][0];
    return;
  }
  int newSize = size / 2;
  Matrix A11, A12, A21, A22, B11, B12, B21, B22;
  Matrix P1, P2, P3, P4, P5, P6, P7;
  Matrix temp1, temp2;
  for (int i = 0; i < newSize; i++) {
    for (int j = 0; j < newSize; j++) {
      A11[i][j] = A[i][j];
      A12[i][j] = A[i][j + newSize];
      A21[i][j] = A[i + newSize][j];
      A22[i][j] = A[i + newSize][j + newSize];
      B11[i][j] = B[i][j];
      B12[i][j] = B[i][j + newSize];
      B21[i][j] = B[i + newSize][j];
      B22[i][j] = B[i + newSize][j + newSize];
    }
  }
  add(A11, A22, temp1, newSize);
  add(B11, B22, temp2, newSize);
  strassen(temp1, temp2, P1, newSize);
  add(A21, A22, temp1, newSize);
  strassen(temp1, B11, P2, newSize);
  subtract(B12, B22, temp1, newSize);
  strassen(A11, temp1, P3, newSize);
  subtract(B21, B11, temp1, newSize);
  strassen(A22, temp1, P4, newSize);
  add(A11, A12, temp1, newSize);
  strassen(temp1, B22, P5, newSize);
  subtract(A21, A11, temp1, newSize);
  add(B11, B12, temp2, newSize);
  strassen(temp1, temp2, P6, newSize);
  subtract(A12, A22, temp1, newSize);
  add(B21, B22, temp2, newSize);
  strassen(temp1, temp2, P7, newSize);
  for (int i = 0; i < newSize; i++) {
    for (int j = 0; j < newSize; j++) {
      C[i][j] = P1[i][j] + P4[i][j] - P5[i][j] + P7[i][j];
      C[i][j + newSize] = P3[i][j] + P5[i][j];
      C[i + newSize][j] = P2[i][j] + P4[i][j];
      C[i + newSize][j + newSize] = P1[i][j] - P2[i][j] + P3[i][j] + P6[i][j];
    }
  }
}
void printMatrix(Matrix M) {
  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
      cout << M[i][j] << " ";
    }
    cout << endl;
  }
}
int main() {
  Matrix A = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
  Matrix B = {{1, 0, 0, 1}, {0, 1, 1, 0}, {1, 1, 0, 0}, {0, 0, 1, 1}};
  Matrix C = {0};
  strassen(A, B, C, SIZE);
  printMatrix(C);
  return 0;
}
