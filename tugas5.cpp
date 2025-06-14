#include <iostream>
using namespace std;

void programGabungMatriks();
void programPisahMatriks();
void programPenjumlahanMatriks();
void programPerkalianMatriks();
void programTransposeMatriks();

int main() {
    int pilihan;
    do {
        cout << "\n==================================" << endl;
        cout << "    Program Operasi Matriks" << endl;
        cout << "==================================" << endl;
        cout << "1. Gabung Dua Matriks" << endl;
        cout << "2. Pisahkan Matriks" << endl;
        cout << "3. Penjumlahan Dua Matriks" << endl;
        cout << "4. Perkalian Dua Matriks" << endl;
        cout << "5. Transpose Matriks" << endl;
        cout << "6. Keluar" << endl;
        cout << "==================================" << endl;
        cout << "Pilih menu (1-6): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                programGabungMatriks();
                break;
            case 2:
                programPisahMatriks();
                break;
            case 3:
                programPenjumlahanMatriks();
                break;
            case 4:
                programPerkalianMatriks();
                break;
            case 5:
                programTransposeMatriks();
                break;
            case 6:
                cout << "Keluar dari program. Terima kasih!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid! Silakan pilih lagi." << endl;
        }
    } while (pilihan != 6);

    return 0;
}

void programGabungMatriks() {
    const int brs1 = 3, kol1 = 4, brs2 = 2, kol2 = 4;
    const int brs3 = brs1 + brs2, kol3 = kol1;
    int M1[brs1][kol1], M2[brs2][kol2], M3[brs3][kol3];

    cout << "\nIsi matriks M1:" << endl;
    for (int i = 0; i < brs1; i++) {
        for (int j = 0; j < kol1; j++) {
            cout << "M1[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> M1[i][j];
        }
    }

    cout << "\nIsi matriks M2:" << endl;
    for (int i = 0; i < brs2; i++) {
        for (int j = 0; j < kol2; j++) {
            cout << "M2[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> M2[i][j];
        }
    }

    for (int i = 0; i < brs1; i++) {
        for (int j = 0; j < kol1; j++) {
            M3[i][j] = M1[i][j];
        }
    }
    for (int i = 0; i < brs2; i++) {
        for (int j = 0; j < kol2; j++) {
            M3[brs1 + i][j] = M2[i][j];
        }
    }

    cout << "\nMatriks hasil gabungan:" << endl;
    for (int i = 0; i < brs3; i++) {
        for (int j = 0; j < kol3; j++) {
            cout << M3[i][j] << " ";
        }
        cout << endl;
    }
}

void programPisahMatriks() {
    const int brs1 = 4, kol1 = 5;
    const int brs2 = 4, kol2 = 2;
    const int brs3 = 4, kol3 = 3;
    int M[brs1][kol1], A[brs2][kol2], B[brs3][kol3];

    cout << "\nIsi matriks M:" << endl;
    for (int i = 0; i < brs1; i++) {
        for (int j = 0; j < kol1; j++) {
            cout << "M[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> M[i][j];
        }
    }

    for (int i = 0; i < brs2; i++) {
        for (int j = 0; j < kol2; j++) {
            A[i][j] = M[i][j];
        }
    }

    for (int i = 0; i < brs3; i++) {
        for (int j = 0; j < kol3; j++) {
            B[i][j] = M[i][kol2 + j];
        }
    }

    cout << "\nMatriks A:" << endl;
    for (int i = 0; i < brs2; i++) {
        for (int j = 0; j < kol2; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nMatriks B:" << endl;
    for (int i = 0; i < brs3; i++) {
        for (int j = 0; j < kol3; j++) {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
}

void programPenjumlahanMatriks() {
    const int brs = 3, klm = 3;
    int A[brs][klm], B[brs][klm], C[brs][klm];

    cout << "\nMasukkan elemen matriks A:" << endl;
    for (int i = 0; i < brs; i++) {
        for (int j = 0; j < klm; j++) {
            cout << "A[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> A[i][j];
        }
    }

    cout << "\nMasukkan elemen matriks B:" << endl;
    for (int i = 0; i < brs; i++) {
        for (int j = 0; j < klm; j++) {
            cout << "B[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < brs; i++) {
        for (int j = 0; j < klm; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "\nHasil penjumlahan matriks (C = A + B):" << endl;
    for (int i = 0; i < brs; i++) {
        for (int j = 0; j < klm; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
}

void programPerkalianMatriks() {
    const int brsA = 3, klmA = 4;
    const int brsB = 4, klmB = 5;
    int A[brsA][klmA], B[brsB][klmB], C[brsA][klmB] = {0};

    cout << "\nMasukkan elemen matriks A:" << endl;
    for (int i = 0; i < brsA; i++) {
        for (int j = 0; j < klmA; j++) {
            cout << "A[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> A[i][j];
        }
    }

    cout << "\nMasukkan elemen matriks B:" << endl;
    for (int i = 0; i < brsB; i++) {
        for (int j = 0; j < klmB; j++) {
            cout << "B[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < brsA; i++) {
        for (int j = 0; j < klmB; j++) {
            for (int k = 0; k < klmA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "\nHasil perkalian matriks (C = A x B):" << endl;
    for (int i = 0; i < brsA; i++) {
        for (int j = 0; j < klmB; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
}

void programTransposeMatriks() {
    const int idx1 = 3, idx2 = 4;
    int A[idx1][idx2], AT[idx2][idx1];

    cout << "\nMasukkan elemen matriks A:" << endl;
    for (int i = 0; i < idx1; i++) {
        for (int j = 0; j < idx2; j++) {
            cout << "A[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < idx1; i++) {
        for (int j = 0; j < idx2; j++) {
            AT[j][i] = A[i][j];
        }
    }

    cout << "\nHasil transpose matriks (AT):" << endl;
    for (int i = 0; i < idx2; i++) {
        for (int j = 0; j < idx1; j++) {
            cout << AT[i][j] << " ";
        }
        cout << endl;
    }
}
