// seq version of matrix mult

#include<iostream>

#define N 1500

using namespace std; 

// функция генерации случ. чисел
float RandomDouble(double a, double b) {
    double random = ((double) rand()) / (double) RAND_MAX;
    double diff = b - a;
    double r = random * diff;
    return a + r;
}

int main ()
{
    int i, j, k;
    //int A[N][N], B[N][N], C[N][N];
    int **A, **B, **C;
  	

    A = new int*[N];
    B = new int*[N];
    C = new int*[N];
    for (i = 0; i < N; i++)
    {   
        A[i] = new int[N];
        for (j = 0; j < N; j++)
            A[i][j] = RandomDouble(1, 10);
    }

    for (i = 0; i < N; i++)
    {
        B[i] = new int[N];
        for (j = 0; j < N; j++)
            B[i][j] = RandomDouble(2, 9);
    }
        		

    for (i = 0; i < N; i++)
    {
        C[i] = new int[N];
        for (j = 0; j < N; j++)
        {
            C[i][j] = 0;
            for (k = 0; k < N; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    //cout << "Product of matrices\n";
    //for (i = 0; i < N; i++)
    //{    
    //    for (j = 0; j < N; j++)
    //        cout << C[i][j] << "  ";
    //    cout << "\n";
    //}
    return 0;
}