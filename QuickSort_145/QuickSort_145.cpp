#include <iostream>
using namespace std;


int arr[20];            // Array of integers to hold values
int cmp_count = 0;      // Number of comparison
int mov_count = 0;      // Number of data movements
int n;

void input() {
    while (true)
    {
        cout << "Masukkan panjang element array: ";
        cin >> n;

        if (n <= 20)
            break;
        else
            cout << "\nMaksimum panjang array adalah 20" << endl;
    }

    cout << "\n-------------------" << endl;
    cout << "\nEnter Array Element" << endl;
    cout << "\n-------------------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << ">";
        cin >> arr[i];
    }
}

// Swaps the element st index x with the element at index y
void swap(int x, int y)
{
    int temp;

    temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}

void q_short(int low, int high)
{
    int pivot, i, j;
    if (low > high)                                             // Langkah Algoritma No.1
        return;

    // Partition the list into two parts:
    // One containing elements less that or equal to pivot
    // Outher containing elements greater than pivot

    pivot = arr[low];                                           // Langkah Algoritma No.2

    i = low + 1;                                                // Langkah Algoritma No.3
    j = high;                                                   // Langkah Algoritma No.4


    while (i <= j)                                              // Langkah Algoritma No.10
    {
        // Search for an element greater than pivot
        while ((arr[i] <= pivot) && (i <= high))                // Langkah Algoritma No.5
        {
            i++;                                                // Langkah Algoritma No.6
            cmp_count++;
        }
        cmp_count++;

        // Search for an element less than or equal to pivot
        while ((arr[j] > pivot) && (j >= low))                  // Langkah Algoritma No.7
        {
            j--;                                                // Langkah Algoritma No.8
            cmp_count++;
        }
        cmp_count++;

        // If the greater element is on the left of the element
        if (i < j)                                              // Langkah Algoritma No.9
        {
            
        }
    }
}


int main()
{
    std::cout << "Hello World!\n";
}