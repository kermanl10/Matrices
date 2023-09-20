#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
/*Although it performs the multiplication correctly, 
it gives an error if the number of columns of your 2nd array is greater than the number of rows.
*/
int main()
{
	system("CLS");
	srand(time(nullptr));
	int M, m, N, n, B, b, rowtotal = 0;
	cout << "How many rows will your first array consist of?: ";
	cin >> M;
	cout << "How many columns will your first array consist of?: ";
	cin >> m;
	cout << "How many rows will your second series consist of?: ";
	cin >> N;
	cout << "How many columns will your second array consist of?: ";
	cin >> n;
	B = M;
	b = n;
	int ary[M][m];
	int Ary[N][n];
	int Cary[B][b];
	int row[B][b];
	if (M == n || m == N)
	{
		for (int i = 0; i < M; i++)
		{
			for (int j = 0; j < m; j++)
			{

				ary[i][j] = rand() % 99 + 1;
			}
		}

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < n; j++)
			{

				Ary[i][j] = rand() % 99 + 1;
			}
		}
		for (int i = 0; i < M; i++)
		{
			cout << endl;
			for (int j = 0; j < m; j++)
			{
				cout << ary[i][j] << "\t";
			}
		}
		cout << "Your First Series" << endl;
		for (int i = 0; i < N; i++)
		{
			cout << endl;
			for (int j = 0; j < n; j++)
			{

				cout << Ary[i][j] << "\t";
			}
		}
		cout << "Your Second Series" << endl;
		for (int i = 0; i < B; i++)
		{
			for (int x = 0; x < B; x++)
			{
				rowtotal = 0;
				for (int j = 0; j < b; j++)
				{
					Cary[i][j] = ary[i][j] * Ary[j][x];
					rowtotal += Cary[i][j];
					row[i][x] = rowtotal;
				}
			}
		}
		for (int i = 0; i < B; i++)
		{
			cout << endl;
			for (int j = 0; j < b; j++)
			{
				cout << row[i][j] << "\t";
			}
		}
		cout<<"Your New Array Containing The Multiplication Results of Your Arrays"<<endl;
	}
	else
	{
		cout << "These two arrays cannot be multiplied";
	}
}
