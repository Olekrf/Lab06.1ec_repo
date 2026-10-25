#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

void Create(int* r, const int size, const int Low, const int High, int i);
void Print(int* r, const int size, int i);
int  Count(int* r, const int size, int i);
int  Sum(int* r, const int size, int i);
void Zero(int* r, const int size, int i);

int main () {
    srand((unsigned)time(NULL)); 

    const int n = 25;
    int r[n];

    int Low = 4;
    int High = 73;

    Create(r, n, Low, High, 0);
    cout << "r:     ";
    Print(r, n, 0);
    cout << endl;

    cout << "Count = " << Count(r, n, 0) << endl;
    cout << "Sum   = " << Sum(r, n, 0) << endl;

    Zero(r, n, 0);
    cout << "r:     ";
    Print(r, n, 0);
    cout << endl;
    return 0;
}
void Create(int* r, const int size, const int Low, const int High, int i) {
    r[i] = Low + rand() % (High - Low + 1);
    if (i < size - 1)
        Create(r, size, Low, High, i + 1);
}
void Print(int* r, const int size, int i)
{
    cout << setw(4) << r[i];
    if (i < size - 1)
        Print(r, size, i + 1);
}
int  Count(int* r, const int size, int i) {
    if (i >= size)
        return 0;
    else if (r[i] % 6 == 0 || i % 5 != 0)
        return 1 + Count(r, size, i + 1);
    else return Count(r, size, i + 1);
}
int Sum(int* r, const int size, int i) {
    if (i < size)
        if (r[i] % 6 == 0 || i % 5 != 0)
            return r[i] + Sum(r, size, i+1);
        else return Sum(r, size, i + 1);
    else
        return 0;
}
void Zero(int* r, const int size, int i)
{
    if (i < size)
    {
        if (r[i] % 6 == 0 || i % 5 != 0)
            r[i] = 0;
        Zero(r, size, i + 1);
    }
}