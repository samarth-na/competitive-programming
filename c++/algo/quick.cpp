#include <vector>

using namespace std;

vector<int> quick_sort(vector<int> arr) {
    if (arr.size() <= 1) {
        return arr;
    }

    int pivot = arr[0];
    vector<int> lo;
    vector<int> hi;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] < pivot) {
            lo.push_back(arr[i]);
        } else {
            hi.push_back(arr[i]);
        }
    }
    vector<int> sorted_lo = quick_sort(lo);
    vector<int> sorted_hi = quick_sort(hi);

    sorted_lo.insert(sorted_lo.end(), sorted_hi.begin(), sorted_hi.end());
    return sorted_lo;
}
