#include <iostream>
#include <random>
#include <time.h>
using namespace std;

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void Bubble(int* arr, int l)
{
    for (int i = 0; i < l - 1; i++) 
    {
        for (int j = 0; j < l - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void Choice(int* arr, int l) {
    int  k, x;
    for (int i = 0; i < l - 1; i++)
    {
        k = i; 
        x = arr[i]; 

        for (int j = i + 1; j < l; j++) 
        {
            if (arr[j] < x) 
            {
                k = j; 
                x = arr[k];
            }
        }
        arr[k] = arr[i];
        arr[i] = x;
    }
}
void Insert(int* arr, int l)
{
    for (int i = 1; i < l; i++)
    {
        for (int j = i; j > 0 && arr[j - 1] > arr[j]; j--)
        {
            swap(arr[j - 1], arr[j]);
        }
    }
}

int main() {
    setlocale(LC_ALL, "russian");
    random_device rd;
    const int NumZero = 6;
    int N = 10;
    while (N <= pow(10, NumZero))
    {
        int* bubl = new int[N];
        int* ins = new int[N];
        int* choi = new int[N];

        for (int i = 0; i < N; i++) {
            int rand = rd() % N + 1;
            bubl[i] = rand;
            ins[i] = rand;
            choi[i] = rand;
        }

        Bubble(bubl, N);
        Insert(ins, N);
        Choice(choi, N);

        cout << "\n\n===========================Bubble sorted array===========================\n" << endl;
        for (size_t i = 0; i < N; i++)
        {
            cout << bubl[i] << " ";
        }
        cout << "\n\n===========================Choise sorted array===========================\n" << endl;
        for (size_t i = 0; i < N; i++)
        {
            cout << bubl[i] << " ";
        }
        cout << "\n\n===========================Insert sorted array===========================\n" << endl;
        for (size_t i = 0; i < N; i++)
        {
            cout << bubl[i] << " ";
        }

        delete[] bubl;
        delete[] ins;
        delete[] choi;
        N *= 10;
    }
    system("pause");
}