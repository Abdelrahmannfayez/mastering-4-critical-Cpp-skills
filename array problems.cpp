//
// Created by A-Fayez on 2/3/2024.
//
#define  ll long long

#include <iostream>

using namespace std;

//[1]
//count sort algorithm
void countsort() {
    int x;
    cin >> x;
    int *arr = new int[x]{0};
    int freq[1000] = {0};
    int max = arr[0];
    for (int i = 0; i < x; i++) {
        cin >> arr[i];
        freq[arr[i]]++;
        if (max < arr[i]) { max = arr[i]; }
    }
    cout << "sorted array: ";
    for (int i = 0; i < 1000; i++) {
        for (int j = 0; j < freq[i]; j++) {
            cout << i << " ";
        }
    }

}

//[2]
//insert integer and return what is the value of this index
//in Recaman's sequence
void get_value_recaman(int x) {
    int freq[1000] = {0};
    int arr[1000] = {0};
    arr[0] = 0;
    freq[0] = 1;
    for (int i = 1; i <= x; i++) {

        int temp = arr[i - 1] - (i - 1) - 1;
        if (temp > 0 && freq[temp] == 0) {
            arr[i] = temp;
            freq[temp]++;
        } else {
            temp = arr[i - 1] + (i - 1) + 1; // Update temp with new value
            arr[i] = temp;
            freq[temp]++;
        }


    }
    cout << arr[x];
}

//[3]
// max sum - sub array - k elements
//Kadane's algorithm


void kadane_Alg() {
    ll n;
    cin >> n;
    ll arr[n];

    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }

    ll max_sum = arr[0], curr_sum = arr[0];

    for (ll i = 1; i < n; i++) {
        curr_sum = max(arr[i], curr_sum + arr[i]);
        max_sum = max(max_sum, curr_sum);
    }

    cout << max_sum;
}

//[4]
//Josephus problem
void Josephus_Alg() {

}

// max sub arrays of equal zeroes and ones
void max_1_0()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int maxlength = 0;
    int maxS=0;
    int maxE=0;
    for(int s= 0 ;s<n;s++)
    {
        int localmax=0;
        int zero=0,one=0;
        for(int e=s;e<n;e++ )
        {
            if(arr[e] == 0)zero++;
            else one++;
            localmax++;
            if(zero==one)
            {
                maxlength = max(maxlength,localmax);
                if(maxlength==localmax)
                {
                    maxE=e;
                    maxS=s;
                }
            }

        }


    }
    if(maxlength == 0)cout<<"NOT FOUND!!";
    else
    {
        cout<<maxlength<<endl;
        cout<<"start: "<<maxS<<"  "<<"end: "<<maxE;
    }




}


int main() {
    // countsort();
    //  get_value_recaman(7);
    //  kadane_Alg();
    //Josephus_Alg();
    //  max_1_0();
}
