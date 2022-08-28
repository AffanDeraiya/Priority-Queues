#include <iostream>
#include <queue>
using namespace std;

vector<int> kSmallest(int arr[], int n, int k) {
    // Write your code here
    vector <int> v;
    priority_queue<int> minimum;
    for(int i=0;i<k;i++)
    {
        minimum.push(arr[i]);
    }
    for(int i=k;i<n;i++)
    {
        if(minimum.top()>arr[i])
        {
            minimum.pop();
            minimum.push(arr[i]);
        }
    }
    while(!minimum.empty())
    {
        v.push_back(minimum.top());
        minimum.pop();
    }
    return v;
}

vector<int> kLargest(int input[], int n, int k){
   vector <int> v;
    priority_queue<int,vector<int>,greater<int>> minimum;
    for(int i=0;i<k;i++)
    {
        minimum.push(input[i]);
    }
    for(int i=k;i<n;i++)
    {
        if(minimum.top()<input[i])
        {
            minimum.pop();
            minimum.push(input[i]);
        }
    }
    while(!minimum.empty())
    {
        v.push_back(minimum.top());
        minimum.pop();
    }
    return v;

}

int kthLargest(int* arr, int n, int k) {
    // Write your code here
     vector <int> v;
    priority_queue<int,vector<int>,greater<int>> minimum;
    for(int i=0;i<k;i++)
    {
        minimum.push(arr[i]);
    }
    for(int i=k;i<n;i++)
    {
        if(minimum.top()<arr[i])
        {
            minimum.pop();
            minimum.push(arr[i]);
        }
    }
    while(!minimum.empty())
    {
        v.push_back(minimum.top());
        minimum.pop();
    }
    return v[0];
}
