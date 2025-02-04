// tempover.cpp --- template overloading
#include <iostream>

template <typename T>            // template A
T SumArray(T arr[], int n);

template <typename T>            // template B
T SumArray(T* arr[], int n);

struct debts
{
    char name[50];
    double amount;
};

int main()
{
    using namespace std;
    int things[6] = { 13, 31, 103, 301, 310, 130 };
    struct debts mr_E[3] =
    {
        {"Ima Wolfe", 2400.0},
        {"Ura Foxe", 1300.0},
        {"Iby Stout", 1800.0}
    };
    double* pd[3];

    int temp1 = 0;
    double temp2 = 0.0;

    // set pointers to the amount members of the structures in mr_E
    for (int i = 0; i < 3; i++)
        pd[i] = &mr_E[i].amount;

    cout << "Listing Mr. E's counts of things:\n";
    // things is an array of int
    temp1 = SumArray(things, 6);  // uses template A
    cout << temp1 << endl;
    cout << "Listing Mr. E's debts(ÖÐÎÄ):\n";
    // pd is an array of pointers to double
    temp2 = SumArray(pd, 3);      // uses template B (more specialized)
    cout << temp2 << endl;
    // cin.get();
    return 0;
}

template <typename T>
T SumArray(T arr[], int n)
{
    T temp = 0;

    for (int i = 0; i < n; i++)
        temp += arr[i];

    return temp;
}

template <typename T>
T SumArray(T* arr[], int n)
{
    T temp = 0;
    for (int i = 0; i < n; i++)
        temp += *arr[i];

    return temp;
}
