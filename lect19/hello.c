
#include <stdio.h>

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}

    };

    int t = 0, b = 2;
    int left = 0, right = 2;

    while (t <= b && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            printf("%d ", arr[t][i]);
        }
        t++;

        for (int i = t; i <= b; i++)
            printf("%d ", arr[i][right]);
        right--;

        for (int i = right; i >= left; i--)
            printf("%d ", arr[b][i]);
        b--;

        for (int i = b; i >= t; i--)
            printf("%d ", arr[i][left]);
        left++;
    }

    return 0;
}
