#include<iostream>
using namespace std;

int main()
{
    const int MAX_VALUE = 10;
    int freq[MAX_VALUE+1] = {0};
    int data[100], size;

    cout << "Enter the number of data elements: ";
    cin >> size;

    cout << "Enter " << size << " numbers (between 1 and " << MAX_VALUE << "): \n";
    for (int i = 0; i < size; i++)
    {
        cin >> data[i];
        if (data[i] >= 1 && data[i] <= MAX_VALUE) {
            freq[data[i]]++;  // ✅ Corrected
        }
    }

    cout << "\nHistogram:\n";
    for (int i = 1; i <= MAX_VALUE; i++)
    {
        if (freq[i] > 0)
        {
            cout << i << ": ";
            for (int j = 0; j < freq[i]; j++)
            {
                cout << "*";
            }
            cout << "\n";
        }
    }

    return 0;
}
