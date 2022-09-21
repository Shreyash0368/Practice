#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v1;

    v1.push_back(1);
    v1.push_back(4);
    v1.push_back(17);
    v1.push_back(18);
    v1.push_back(0);

    cout << "Vector is: ";
    /* for (auto i = 0; i < v1.size(); i++)
    {
        cout<< v1[i] <<" ";
    }
    cout<<endl;
    output method same as array but we can also use at() function
    */
    cout << "output with at(): ";
    for (auto i = 0; i < v1.size(); i++)
    {
        cout << v1.at(i) << " ";
    }
    cout << endl;
    // inserting element at some index (before sepcified index no.)
    //.begin function returns pointer to 1st element

    v1.insert(v1.begin() + 3, 22);
    for (auto i = 0; i < v1.size(); i++)
    {
        cout << v1.at(i) << " ";
    }
    cout << endl;
    // .erase removes element at specified index no. (not before like insert)

    v1.erase(v1.begin() + 3);
    for (auto i = 0; i < v1.size(); i++)
    {
        cout << v1.at(i) << " ";
    }
    cout << endl;

    // .clear removes all elements of a vector
    // .empty returns a boolean value of whether the vector is empty

    if (v1.empty())
    {
        cout<<"Is Empty "<<endl;
    }
    else
    {
        cout<<"Not Empty"<<endl;
    }
    v1.clear();
    if (v1.empty())
    {
        cout<<"Is Empty "<<endl;
    }
    else
    {
        cout<<"Not Empty"<<endl;
    }
    

    return 0;
}