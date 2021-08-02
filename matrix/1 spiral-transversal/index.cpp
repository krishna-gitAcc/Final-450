#include <bits/stdc++.h>
using namespace std;

void spiraltransversal(int **matrix, int m, int n) {
  char dir = 'r';
  int upl = 0, lol = m - 1, lel = 0, ril = n - 1;
  while (upl <= lol || lel <= ril) {
    switch (dir) {
    case 'r':
      for (int i = lel; i <= ril; i++) {
        cout << matrix[upl][i] << " ";
      }

      upl++;
      dir = 'd';

      break;
    case 'd':
      for (int i = upl; i <= lol; i++) {
        cout << matrix[i][ril] << " ";
      }
      ril--;
      dir = 'l';
      break;
    case 'l':
      for (int i = ril; i >= lel; i--) {
        cout << matrix[lol][i] << " ";
      }
      lol--;
      dir = 'u';
      break;

    default:
      for (int i = lol; i >= upl; i--) {
        cout << matrix[i][lel] << " ";
      }
      lel++;
      dir = 'r';
      break;
    }
  }
}

int main() {
  int m, n;
  cin >> m >> n;

  // create the matrix
  int **matrix = new int *[m];
  for (int i = 0; i < m; i++) {
    /* code */
    matrix[i] = new int[n];
  }
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> matrix[i][j];
    }
  }
  // print the matrix

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cout << matrix[i][j] << " ";
    }
    cout << "\n";
  }
  spiraltransversal(matrix, m, n);

  // delete the stack memory
  for (int i = 0; i < n; i++) {
    delete[] matrix[i];
  }
  delete[] matrix;
}