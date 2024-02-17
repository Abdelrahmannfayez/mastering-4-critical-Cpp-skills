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
//[4] adding 5555 to long number x which is at least 6 digits

void add(string x)
{

    int carry = 0;
    for(int i = 0 ; i < x.size();i++ )
    {

        int num = x[ x.size() - i - 1  ] - '0';
        if(i < 4)
        {
           num+=5;
        }
        num+=carry;
        if(num >=10 ) {
            carry = 1;
            num-=10;
        }
        else
        {
            carry = 0;
        }
        x[ x.size() - i - 1  ] = num+'0' ;

    }
    if(carry)cout<<1;
    cout<<x;


}

//----------------------------------
//[5] replace substring with another
//----------------------------------
bool check(string x , string pattern , int pos)
{
    int j=0;
    for(int i =pos ;i<(pos+pattern.size());i++)
    {
        if(x[i]!= pattern[j])return false;
        j++;
    }
    return true;
}

void replace(string x , string pattern , string to )
{
    string res;
    for(int pos=0;pos<x.size();pos++)
    {
        if(check(x,pattern,pos))
        {
           res+=to;
        }
        else
            res+=x[pos];
    }
    cout<<res;
}


int main() {

    // is_substring("abcd" , "ab");
    //  is_subsequence("abcdefg" , "adefh");
    // group("aaabbbbccccefghhhh");
     //add("666666");
    replace("IamLegend" , "Legend" , "GREAT");
}