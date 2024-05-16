#include <iostream>
using namespace std;

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = (rand() % 50) + 1;
    }
}
void show(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
}

void printdata(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int search(int arr[], int high, int low, int mid, int x)
{
    cout << "\nenter the element which you want to find:";
    cin >> x;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout << "enter the array size:";
    cin >> n;

    int arr[n];
    int x;
    int low = 0;
    int high = n - 1;
    int mid;

    display(arr, n);
    printdata(arr,n);         
    show(arr, n);
    

    int index = search(arr, high, low, mid, x);

    if (index != -1)
    {
        cout << "element found at index:" << index << endl;
    }
    else
    {
        cout << "element not found" << endl;
    }

    return 0;
}