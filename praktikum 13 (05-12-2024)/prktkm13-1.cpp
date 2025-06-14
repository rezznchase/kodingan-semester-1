#include<iostream>
#include<iomanip>
#define N 6
using namespace std;
int A[6];
int indeks1, indeks2, temp;

main(){ 
	for (indeks1=0;indeks1<6;indeks1++) {
	cout << "Masukkan Elemen A Ke:";
	cin >> A[indeks1];
	}

	cout << endl << "Data Sebelum Diurutkan" << endl;
	for (indeks1=0;indeks1<N;indeks1++) {
		cout << A[indeks1]<<setw(5);
	}

	for (indeks1=0;indeks1<N-1;indeks1++) {
		for (indeks2=indeks1+1;indeks2<N;indeks2++)
		if(A[indeks1]<A[indeks2]) {
			temp=A[indeks1];
			A[indeks1]=A[indeks2];
			A[indeks2]=temp;
		}
	}
	
	cout << endl << "Data Setelah Diurutkan" <<endl;
	for (indeks1=0;indeks1<N;indeks1++) { 
	cout<<A[indeks1]<<setw(5);
	}
	return 0;
}