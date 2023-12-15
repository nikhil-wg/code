// Write a function template selection Sort. Write a program that inputs, sorts and
// outputs an int array and a float array.

#include <iostream>
using namespace std;

template <class T>

void selectionSort(T arr[], int n)
{

    int max, last;
    T temp;

    for (int i = 0; i < n - 1; i++)
    {
        max = i;
        last = n - i;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[max])
            {
                arr[max] = arr[j];
            }
        }

        temp = arr[max];
        arr[max] = arr[last];
        arr[last] = temp;
    }
}

int main()
{

    int n;
    cout << "Enter the Size of Array: ";
    cin >> n;
    cout<<"Intiger Array"<<endl;
    int int_arr[n];
    cout << "Enter " << n << " Array Elements:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> int_arr[i];
    }

    selectionSort(int_arr, n);

    cout << "Sorted Int Array :"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << int_arr[i] ;
    }
    cout<<endl;
     
    float float_arr[n];
    cout<<"Float Array: "<<endl;
    cout<<"Enter "<<n<<" Array Elements: ";
    // cout<<sizeof(arr)/sizeof(int);
    for (int i = 0; i < n; i++)
    {
        cin>> float_arr[i];
    }

    selectionSort(float_arr,n);

    cout<<"Sorted Float Array :"<<endl;
        for (int i = 0; i < n; i++)
    {
        cout<< float_arr[i]<<" ";
    }
}