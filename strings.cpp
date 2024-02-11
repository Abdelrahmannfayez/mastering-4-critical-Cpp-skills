#include<iostream>

using namespace std;

//[1]brute force ... is b substring of a ?

void is_substring(string a, string b) {
    if (a.size() < b.size()) {
        cout << "No";
        return;
    }
    bool ismatch = true;
    for (int i = 0; i < a.size() - b.size() + 1; i++) {
        for (int j = 0; j < b.size() && ismatch; j++) {
            if (b[j] != a[i + j])ismatch = false;

        }

        if (ismatch) {
            cout << "YES";
            return;
        }
    }

    cout << "NO";
}

//[2]brute force ... is b subsequence of a ?
void is_subsequence(string a, string b) {
    int i=0,j=0;
    while(i<a.size() && j<b.size())
    {
        if(a[i]==b[j])
        {
            j++;
        }
        i++;
    }
    if(j==b.size())cout<<"Yes";
    else cout<<"NO";

}

//[3] separete unique items with spaces
void group(string x)
{

    for(int i=0;i<x.size();i++)
    {
        if(i!=0 && x[i]!=x[i-1])cout<<" ";
        cout<<x[i];

    }
}

int main() {

    // is_substring("abcd" , "ab");
    //  is_subsequence("abcdefg" , "adefh");
    // group("aaabbbbccccefghhhh");
}