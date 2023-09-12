#include<iostream>
using namespace std;

int main() {
    int M,m,N,n,B,b;
    cout<<"How many rows will your first array consist of?: ";
    cin>>M;
     cout<<"How many columns will your first array consist of?: ";
    cin>>m;
     cout<<"How many rows will your second series consist of?: ";
    cin>>N;
     cout<<"How many columns will your second array consist of?: "; 
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
	cout << "Your First Series" << endl;
	for (int i = 0; i < N; i++) {
		cout << endl;
		for (int j = 0; j < n; j++) {


			cout << Ary[i][j] << "\t";
		}
	}int Tary[M][m],satirToplam=0,sutunToplam=0;
	cout << "Your Second Series" << endl;
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < m; j++) {
			Tary[i][j] = Ary[i][j] + ary[i][j];
		}
} cout<<"Total of Sequences"<<endl;
	for (int i = 0; i < M; i++) {
		cout <<endl;
		for (int j = 0; j < m; j++) {
		    satirToplam+=Tary[i][j];
			cout << Tary[i][j] << "\t";
		}
		cout<<"  "<<satirToplam<<endl;
		satirToplam=0;
	}
}
