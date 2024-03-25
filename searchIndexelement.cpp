#include <iostream>
using namespace std;

//* ------------------------------------ Ye mene bnaaya inear Search se ----------------------------------->

int searchInsert(int arr[], int n, int target)
{
    int ans = n;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
            return i;
        else if (arr[i] > target)
        {
            ans = i;
            break;
        }
    }
    return ans;
}

//! -------------------------------------- Ye mne banaya Binary Search se ------------------------------------>

int SearchElmentPosition(int arr[], int n, int target)
{
    int start = 0, end = n - 1;
    int index = n;
    //* -- 1 5 8 9 17 --  target = 6
    while (start <= end)
    {
        int mid = (end + start) / 2;
        if (arr[mid] == target)
        {
            // return mid;
            index = mid;
            break;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            index = mid;
            end = mid - 1;
        }
    }
    return index;
}

//! ------------------------------------ Ye hai main Function ------------------------------------------------
int main()
{
    int arr[10] = {1, 5, 8, 9, 17, 34, 49, 273, 456, 3499};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;
    cout << "Enter the value whose correct position to be determined ? " << endl;
    cin >> target;
    cout << "Search Insert Element is : " << searchInsert(arr, size, target) << endl;
    cout << "Binary search se search position : " << SearchElmentPosition(arr, size, target);
    return 0;
}