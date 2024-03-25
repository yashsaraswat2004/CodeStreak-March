#include <iostream>
using namespace std;
// ------- ye wala Linear Search ke concept se ------------------------
int findingSqrt(int num)
{
    int ans = 0;
    for (int i = 1; i <= num; i++)
    {
        ans = i * i;
        if (ans == num)
            return i;
    }
    return -1;
}
// -------------- Ye wlaaa Binary Search ke concept se --------------------------------
int FindingSquareRoot(int num)
{
    int start = 0;
    int end = num;
    int ans;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (mid * mid == num)
            return mid;
        else if (mid * mid < num)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
}
int main()
{
    int sqrt;
    cout << "Enter the value you want to find square root of : " << endl;
    cin >> sqrt;
    cout << "Square root of " << sqrt << " is : " << findingSqrt(sqrt) << endl;
    cout << "Square root of " << sqrt << " using Binary Search is : " << FindingSquareRoot(sqrt);
    return 0;
}
