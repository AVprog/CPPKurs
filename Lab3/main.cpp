#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template<typename T>
void AddVectors(vector<T>& v1,const vector<T>& v2);

int main()
{
    vector<int> v1 {1,34,12,54,4};
    vector<int> v2 {4,22,54,6,76};
    AddVectors(v1,v2);
    for(auto x:v1)
    {
        cout<<x<<endl;
    }


}

template<typename T>
void AddVectors(vector<T>& v1,const vector<T>& v2)
{
    for (size_t i = 0; i < v1.size(); i++)
    {
        v1[i]+=v2[i];
    }   
}
