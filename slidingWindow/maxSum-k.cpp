#include <iostream>
using namespace std;

// find maximum subarray sum of size k
int main()
{
    int k = 2; // size of window
    int arr[] = {2, 5, 1, 6, 8, 3};
    int size = sizeof(arr) / 4;
    int st=0, end = k; // window
    int sum=0, maxSum = 0;
    for (int i = st; i <= k; i++)
    {
        sum = sum + arr[i];
    }
    st++;
    end++;
    while (end <= size - 1)
    {
        sum = sum - arr[st - 1] + arr[end];
        if (sum > maxSum)
        {
            maxSum = sum;
        }
        st++;
        end++;
    }

    cout << "Max sum " << maxSum;

    return 0;
}