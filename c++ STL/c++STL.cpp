#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int comparitive_function(int x, int y)
{
    return x > y;
}

void vectorDemo()
{
    vector<int> A = {1, 5, 3, 2, 4, 8, 7, 6};
    cout << A[3] << endl;

    sort(A.begin(), A.end()); //O(NlogN)
    //(1,2,3,4,5,6,7,8)

    //Binary Search in O(logN) time
    bool present = binary_search(A.begin(), A.end(), 4); //True
    present = binary_search(A.begin(), A.end(), 9);      // False

    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(123);
    //1,2,3,4,5,6,7,8,100,100,100,100,123

    //vector<int>::iterator it = lower_bound(A.begin(),A.end(),100);  //>=
    //vector<int>::iterator it2 = upper_bound(A.begin(),A.end(),100);

    //ALTERNATE DECLARATION FOR ITERATORS IN VECTORS:

    auto it = lower_bound(A.begin(), A.end(), 100);
    auto it2 = upper_bound(A.begin(), A.end(), 100);

    cout << *it << " " << *it2 << endl;
    cout << it2 - it << endl; // 4   O(1) time

    //sorting a vector in descending order using c++ Stl

    //Syntax 1:
    /*
    sort(A.begin(),A.end(),f);
    vector<int>::iterator it3;
    for(it3 = A.begin(); it3 != A.end(); it3++){
        cout << *it3 << " ";
    }
    cout << endl;
*/

    //Easy Syntax:
    sort(A.begin(), A.end(), comparitive_function);

    for (int x : A)
    {
        x++;
        cout << x << " ";
    }
    cout << endl;
}

//Insert operation in sets takes log n time. No time is required for sorting.Also you can erase element from set in O(logN)
//time
void SetDemo()
{
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(-1);
    s.insert(-4);
    s.insert(3);
    s.insert(-10);
    for (int x : s)
    {
        cout << x << " ";
    }
    //-10 -4 -1 1 2 3
    auto it = s.find(-1);
    if (it == s.end())
    {
        cout << "Not Present\n";
    }
    else
    {
        cout << "Present\n";
        cout << *it << endl;
    }
    //Present

    auto it2 = s.upper_bound(-1);
    auto it3 = s.upper_bound(0);
    cout << *it2 << " " << *it3 << endl; // 1 , 1

    auto it4 = s.upper_bound(2); // 3
    if (it4 == s.end())
    {
        cout << "Can't find something like this" << endl;
    }
    else
    {
        cout << *it4 << endl;
    }

    auto it5 = s.upper_bound(3);
    if (it5 == s.end())
    {
        cout << "oops!,Can't find something like this" << endl;
    }
    else
    {
        cout << *it5 << endl;
    }
}
/*
int main()
{
    SetDemo();
    return 0;
}
*/

void mapDemo() //Time complexity O(logN)
{

    map<int, int> m;
    vector<int> A = {100, -1, 100, 200, 2};

    for (int i : A)
    {
        m[i]++;
    }

    cout << m[100] << " ";

    cout << endl;

    map<char, int> cnt;
    string x = "yash ghan";

    for (char c : x)
    {
        cnt[c]++;
    }
    cout << cnt['a'] << " " << cnt['z'] << endl;
}
/*
int main()
{
    mapDemo();
    return 0;
}
*/

void PowerofStl()
{
    //problem statement: In the given function add; based on the input point from the
    // user we have to return the correct range.
    //add [x,y]
    //add [2,3];
    //add [10,20];
    //add [30,400];
    //add [401,450];
    set<pair<int, int>> s;
    s.insert({30, 400});
    s.insert({10, 20});
    s.insert({401, 450});
    s.insert({2, 3});

    //point(11,?)
    for (auto itr : s)
    {
        cout << itr.first << " " << itr.second << " ";
    }
    cout << endl;
    //2,3
    //10,20
    //30,400
    //400,450

    int point = 32;

    auto it = s.upper_bound({point, INT_MAX});
    if (it == s.begin())
    {
        cout << "The given point is not lying in any interval" << endl;
        return;
    }

    it--;
    pair<int, int> current = *it;
    if (current.first <= point && point < current.second)
    {
        cout << "Yes it's present: " << current.first << " " << current.second << endl;
    }
    else
    {
        cout << "The given point is not lying in any interval..\n";
    }
}

/*
int main()
{
    PowerofStl();
    return 0;
}
*/
/*
int main()
{
    map<char, int> M;
    unordered_map<char, int> U;

    string s = "Yash Ghan";
    //add(key ,value) - O(logN) -> ordered_map  ;  O(1) -> unordered_map
    //erase(key) - O(log N) ->  ordered_map  ;  O(1) -> unordered_map
    for (char c : s)
    { // O(NlogN)
        M[c]++;
    }
    cout << M['a'] << " ";
    cout << endl;

    for (char c : s)
    { // O(N)
        U[c]++;
    }
    cout << U['s'] << " ";

    return 0;
}
*/
// Application of c++ stl to solve a problem:
int main()
{
    int n;
    cin >> n;
    vector<int> A(n + 5, 0);
    long long S = 0;
    long long sdash = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        S += A[i];
    }
    map<long long, int> first, second;
    first[A[0]] = 1;

    for (int i = 1; i < n; i++)
    {
        second[A[i]]++;
    }
    if (S & 1)
    {
        cout << " NO\n";
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        sdash += A[i];
        if (sdash == S / 2)
        {
            cout << "Yes\n";
            return 0;
        }
        if (sdash < S / 2)
        {
            long long x = S / 2 - sdash;
            if (second[x] > 0)
            {
                cout << "YES\n";
            }
        }
        else
        {
            long long y = sdash - S / 2;
            if (first[y] > 0)
            {
                cout << "YES\n";
            }
        }
        first[A[i + 1]]++;
        second[A[i + 1]]--;
    }
    cout << "NO\n";

    return 0;
}