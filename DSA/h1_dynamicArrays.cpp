#include <iostream>
#include <vector>
using namespace std;

vector <int> Dynamicarray(int n, vector<vector<int>> queries){
    vector<vector<int>> arr(n, vector<int>());
    int last = 0;
    vector<int> ans;

    for (auto i = 0; i < queries.size(); i++)
    {
        int x = queries[i][1];
        int y = queries[i][2];
        int index = (x ^ last) % n;
        
        if ( queries[i][0] == 1)
        {
            arr[index].push_back(y);            
        }
        else if (queries[i][0] == 2)
        {
            last = arr[index][y % arr[index].size()];
            ans.push_back(last);
        }       
    }
    return ans;
    
}
int main(int argc, char const *argv[])
{
    int n, q;    
    cin>>n>>q;
    vector<vector<int>> queries(q, vector<int> ());
    for (int i = 0; i < q; i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        queries[i].push_back(x);
        queries[i].push_back(y);
        queries[i].push_back(z);
    }
    vector<int> ans = Dynamicarray(n, queries);

    for (auto i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<endl;
    } 

    
    return 0;
}