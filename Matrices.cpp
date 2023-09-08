#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main() {
	system("CLS");
    srand(time(nullptr));
    int M,m,N,n;
    cout<<"1.dizi kac satirli olucak: ";
    cin>>M;
     cout<<"1.dizi kac sutunlu olucak: ";
    cin>>m;
     cout<<"2.dizi kac satirli olucak: ";
    cin>>N;
     cout<<"2.dizi kac sutunlu olucak: "; 
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
	}
    double Tary[M][m],satirToplam=0,Sary[m];
    int x;
	cout << "Bu Ikinci Diziniz" << endl;
    cout<<endl;
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < m; j++) {
			Tary[i][j] = Ary[i][j] + ary[i][j];
		}
    } 
    cout<<"Dizilerin Toplami"<<endl;
	for (int i = 0; i < M; i++) {
		cout <<endl;
		for (int j = 0; j < m; j++) {
            if(i==j)x+=Tary[i][j];
		    satirToplam+=Tary[i][j];
            Sary[j]+=Tary[i][j];
			cout << Tary[i][j] << "\t";
		}
		cout<<"  "<<satirToplam<<endl;
		satirToplam=0;
      
	}
	for(int i = 0; i < m; i++) cout<<Sary[i]<<"\t";
    cout<<x;
}
