class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for (int num : nums) {
            count[num]++;
        }

        vector<pair<int,int>> count_pairs;
        for (auto& c : count) {
            count_pairs.push_back({c.second, c.first});
        }

        mergeSort(0, count_pairs.size()-1, count_pairs);

        vector<int> out;
        for (int i=0; i<k; i++) {
            out.push_back(count_pairs[i].second);
        }

        return out;
    }

private: 
    void mergeSort(int left, int right, vector<pair<int,int>>& array) {
        //base case
        if (left>=right) return;

        // calculate mid
        int mid = (left + right) / 2;
        //recursive calls 
        mergeSort(left, mid, array);
        mergeSort(mid+1, right, array);
        //merge
        merge(left, right, mid, array);
    }

    void merge(int left, int right, int mid, vector<pair<int,int>>& array) {
        vector<pair<int,int>> temp; // temporary array
        int i=left, j=mid+1;

        while (i<= mid && j<= right) {
            if(array[i].first>array[j].first) {
                temp.push_back(array[i]);
                i++;
            } else {
                temp.push_back(array[j]);
                j++;
            }
        }

        while (i<=mid) temp.push_back(array[i++]);
        while (j<=right) temp.push_back(array[j++]);

        for (int k=left; k<=right; k++) {
            array[k] = temp[k-left];
        }
    }
};