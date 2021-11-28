#include <iostream>
#include <iomanip>

using namespace std;

void Filling(int* list, const int size, const int Low, const int High);
void Calculate(int* list, const int size, int& sum, int& count);
void Output(int* list, const int size);

int main()
{

    srand((unsigned)time(NULL));

    const int n = 23;
    int a[n];

    int Min = 4;
    int Max = 68;

    int sum = 0;
    int count = 0;

    cout << "iter" << endl;
    cout << endl;

    Filling(a, n, Min, Max);
    cout << "Masive: "; Output(a, n);

    Calculate(a, n, sum, count);
    cout << "Sum: " << setw(4) << sum << endl;
       
}

void Filling(int* list, const int size, const int Min, const int Max)
{
    for (int i = 0; i < size; i++)
        list[i] = rand() % (Max - Min + 1) + Min; // де Min - ліва межа, а Max - права
}

void Calculate(int* list, const int size, int& sum, int& count) {
    for (int i = 0; i < size; i++)
    {
        if (list[i] % 2 == 0 ) { 
            sum += list[i];
            count++;
        }
    }
}

void Output(int* list, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(3) << list[i];
    cout << endl;
}