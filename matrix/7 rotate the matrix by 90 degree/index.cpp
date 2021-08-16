#include <bits/stdc++.h>
using namespace std;

// using extra space and a squre matrix

// void rotatemtx(int **mtx, int n) {
//   int **tmtx = new int *[n];
//   for (int i = 0; i < n; i++) {
//     tmtx[i] = new int[n];
//   }
//   for (int i = 0; i < n; i++) {
//     for (int j = 0; j < n; j++) {
//       tmtx[i][j] = mtx[n - 1 - j][i];
//     }
//   }
//   cout << endl;
//   for (int i = 0; i < n; i++) {
//     for (int j = 0; j < n; j++) {
//       cout << tmtx[i][j] << " ";
//     }
//     cout << endl;
//   }

//   for (int i = 0; i < n; i++) {
//     delete[] tmtx[i];
//   }
//   delete[] tmtx

// for a matrix with m row and n column using extra space

// void rotatemtx(int **mtx,int m, int n) {
//   int **tmtx = new int *[n];
//   for (int i = 0; i < n; i++) {
//     tmtx[i] = new int[m];
//   }
//   for (int i = 0; i < n; i++) {
//     for (int j = 0; j < m; j++) {
//       tmtx[i][j] = mtx[m - 1 - j][i];
//     }
//   }
//   cout << endl;
//   for (int i = 0; i < n; i++) {
//     for (int j = 0; j < m; j++) {
//       cout << tmtx[i][j] << " ";
//     }
//     cout << endl;
//   }

//   for (int i = 0; i < n; i++) {
//     delete[] tmtx[i];
//   }
//   delete[] tmtx;
// }

// inplace rotation of a squre matrix in anticlock-wise direction

void rotatemtx(int **mtx, int n) {
  for (int i = 0; i < n / 2; i++) {
    for (int j = i; j < n - 1 - i; j++) {
      int temp = mtx[i][j];
      mtx[i][j] = mtx[j][n - 1 - i];
      mtx[j][n - 1 - i] = mtx[n - 1 - i][n - 1 - j];
      mtx[n - 1 - i][n - 1 - j] = mtx[n - 1 - j][i];
      mtx[n - 1 - j][i] = temp;
    }
  }
}

// inplace rotation of a squre mattrix in clockwise direction
void rotatemtxclock(int **mtx, int n) {
  for (int i = 0; i < n / 2; i++) {
    for (int j = i; j < n - 1 - i; j++) {
      //   int temp = mtx[i][j];
      //   mtx[i][j] = mtx[j][n - 1 - i];
      //   mtx[j][n - 1 - i] = mtx[n - 1 - i][n - 1 - j];
      //   mtx[n - 1 - i][n - 1 - j] = mtx[n - 1 - j][i];
      //   mtx[n - 1 - j][i] = temp;
      int temp = mtx[i][j];
      mtx[i][j] = mtx[n - 1 - j][i];
      mtx[n - 1 - j][i] = mtx[n - 1 - i][n - 1 - j];
      mtx[n - 1 - i][n - 1 - j] = mtx[j][n - 1 - i];
      mtx[j][n - 1 - i] = temp;
    }
  }
}

int main() {
  int n;
  cin >> n;
  int **mtx = new int *[n];
  for (int i = 0; i < n; i++) {
    mtx[i] = new int[n];
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> mtx[i][j];
    }
  }
  cout << endl;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << mtx[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;
  rotatemtx(mtx, n);
  cout << endl;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << mtx[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;
  rotatemtxclock(mtx, n);
  cout << endl;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << mtx[i][j] << " ";
    }
    cout << endl;
  }

  //   for (int i = 0; i < n; i++) {
  //     for (int j = 0; j < n; j++) {
  //       cout << mtx[i][j] << " ";
  //     }
  //     cout << endl;
  //   }
  for (int i = 0; i < n; i++) {
    delete[] mtx[i];
  }
  delete[] mtx;
  return 0;
}