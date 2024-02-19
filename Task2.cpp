#include <iostream>

using namespace std;

void print_matrix(int N, int *p){
    for(int i; i < N; i++)
    {
        cout << *(p + i) << endl;
    }
}

void print_matrix_chet(int N, int *p){
    for(int i; i < N/2; i++)
    {
        cout << *(p + 2*i + 1) << endl;
    }
}

void sort_matrix(int N, int *p, int j){
    int temp;
    for(j; j < N; j++)
    {
        for(int i = j; i < N; i++)
        {
            if (*(p + j) < *(p + i))
            {
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
        cout << *(p + j) << endl;
    }
}

int main()
{
    int N, q;
    cin >> N;
    int A[N];

    for (int i; i < N; i++)
    {
        A[i] = rand() % 10;
    }

    int *p = &A[0];
    q = rand() % N;
    cout << *(p + q) << "\n" << endl;

    print_matrix(N, &A[0]);
    cout << endl;
    print_matrix_chet(N, &A[0]);
    cout << endl;
    sort_matrix(N, &A[0], 0);
    return 0;
}
