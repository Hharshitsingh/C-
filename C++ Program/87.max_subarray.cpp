#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int currsum = 0;
    int maxsum = INT_MIN;
    for (int  i = 0; i<n; i++){
        cout<<"i = "<<i<<endl;
        currsum += a[i];
        if (currsum < 0)
            currsum = 0;
        maxsum = max(maxsum, currsum);
        cout<<"currsum = "<<currsum<<endl;
        cout<<"maxsum = "<<maxsum<<endl;
        cout<<endl;
    }


    cout << maxsum << endl;
    return 0;
}

/*
for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += a[k];
                // cout << a[k] << " ";
            }
            if(sum > max_sum)
                max_sum = sum;
        }
    }
 
 algo = 2
    int currsum[n + 1];
    currsum[0] = 0;

    for (int i = 0; i <= n; i++)
    {
        currsum[i] = currsum[i - 1] + a[i - 1];
    }

    for (int i = 0; i <= n; i++)
    {
        cout << currsum[i] << " ";
    }
    cout << endl;
    int maxsum = INT_MIN;
    cout << maxsum << endl;
    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        for (int j = 0; j < i; j++)
        {
            sum = currsum[i] - currsum[j];
            cout << currsum[i] << " " << currsum[j] << " " << sum << endl;
            maxsum = max(sum, maxsum);
        }
    }
*/