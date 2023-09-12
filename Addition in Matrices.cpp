#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main() {
	system("CLS");
    srand(time(nullptr));
	/*Even if the code works properly, when writing the sum of the trailing columns, 
	  complex numbers will be given due to the language problem.*/
    int M,m,N,n;
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
	}
    double Tary[M][m],satirToplam=0,Sary[m];
    int x;
	cout << "Your Second Series" << endl;
    cout<<endl;
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < m; j++) {
			Tary[i][j] = Ary[i][j] + ary[i][j];
		}
    } 
    cout<<"Total of Your Sequences"<<endl;
	/*When you run your code, the numbers at the bottom will give you the total of the columns of your array, 
	  and the numbers at the bottom right will give you the sum of the array elements diagonally in your total array.*/
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
