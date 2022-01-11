#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}




void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

void showMatrix(const bool A[][N])
{
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			cout << A[i][j] << " ";
		}
		cout << "\n";
	}
}



void findLocalMax(const double P[][N], bool B[][N]){
    for (int k = 0; k < N; k++)
    {
        for (int l = 0; l < N; l++)
        {
            if (P[k][l]>=P[k][l-1] && P[k][l]>=P[k][l+1] && P[k][l]>=P[k-1][l] && P[k][l]>=P[k+1][l])
            {
                B[k][l] =true;
            }else B[k][l]=false;
            
        }
        
    }
    for (int i = 0; i<N; i++){
        B[0][i] =0;
        B[N-1][i] =0;
    }
    for (int j = 0; j < N-2; j++){
        B[j+1][0]=0;
        B[j+1][N-1]=0;
    }
    
}
