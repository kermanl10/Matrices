#include<iostream>
using namespace std;

int main() {
    int M,m,N,n,B,b;
    cout<<"1.dizi kaç satırlı olucak: ";
    cin>>M;
     cout<<"1.dizi kaç sütunlu olucak: ";
    cin>>m;
     cout<<"2.dizi kaç satırlı olucak: ";
    cin>>N;
     cout<<"2.dizi kaç sütunlu olucak: "; 
    cin>>n;

	int ary[M][m];
	int Ary[N][n];
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
	}int Tary[M][m],satırToplam=0,sutunToplam=0;
	cout << "Bu Ikinci Diziniz" << endl;
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < m; j++) {
			Tary[i][j] = Ary[i][j] + ary[i][j];
		}
} cout<<"Dizilerin Toplamı"<<endl;
	for (int i = 0; i < M; i++) {
		cout <<endl;
		for (int j = 0; j < m; j++) {
		    satırToplam+=Tary[i][j];
			cout << Tary[i][j] << "\t";
		}
		cout<<"  "<<satırToplam<<endl;
		satırToplam=0;
	}
}
