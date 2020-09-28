
#include "pq_complheap.h"
#include "pq_headfile.h"
#include <iostream>
//#include <vector>
#include <algorithm>
//#include "pq.h"


using namespace std;



bool compare(vector<int>& a, vector<int>& b) {
    if (a[1] < b[1]) return true;
    return false;
}
int qujian(vector<vector<int>> nums) {
    if (nums.size() == 0) return 0;
    sort(nums.begin(), nums.end(), compare);
    int res = 0;
    int ans = 0;
    for (int i = 1; i < nums.size(); ++i) {
        vector<int> tmp_next = nums[i];
        vector<int> tmp_pre = nums[i - 1];
        if (tmp_next[0] < tmp_pre[1]) {
            res++;
        }
        else {
            res = 0;
        }
        ans = max(ans, res);
    }
    return ans;
}


int main() {
    vector<int> A = { 1,2,3,4,5 };
    PQ_ComplHeap<int> heap(A,5);
    return 0;
}
