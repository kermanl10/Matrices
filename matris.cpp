#include<iostream>
using namespace std;

int main() {
    int M,m,N,n,B,b;
    cout<<"1.dizi kaç satırlı olucak?";
    cin>>M;
     cout<<"1.dizi kaç sütunlu olucak?";
    cin>>m;
     cout<<"2.dizi kaç satırlı olucak?";
    cin>>N;
     cout<<"2.dizi kaç sütunlu olucak?";
    cin>>n;
     cout<<"toplam dizi kaç satırlı olacak?";
    cin>>B;
     cout<<"toplam dizi kaç sütunlu olucak?";
    cin>>b;
	int ary[M][m];
	int Ary[N][n];
	int Tary[B][b];
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < m; j++) {
		
			ary[i][j]=rand()%99+1;
		}
	}
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < n; j++) {
		
			Ary[i][j]=rand()%99+1;
		}
	}
	for (int i = 0; i < M; i++) {
		cout << endl;
		for (int j = 0; j < m; j++) {
			cout << ary[i][j] << "\t";
			}
		
	}
	cout << "Bu Birinci Diziniz" << endl;
	for (int i = 0; i < N; i++) {
		cout << endl;
		for (int j = 0; j < n; j++) {


			cout << Ary[i][j] << "\t";
		}
	}
	cout << "Bu Ikinci Diziniz" << endl;
	for (int i = 0; i < B; i++) {
		for (int j = 0; j < b; j++) {
			Tary[i][j] = Ary[i][j] + ary[i][j];
		}
}
	for (int i = 0; i < B; i++) {
		cout << endl;
		for (int j = 0; j < b; j++) {
			cout << Tary[i][j] << "\t";
		}
	}
	cout<<"Dizilerin Toplamı"<<endl;
}
