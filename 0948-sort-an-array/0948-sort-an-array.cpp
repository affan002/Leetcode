class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(0, nums.size()-1, nums);
        return nums;
    }

private:
    void mergeSort(int left, int right, vector<int>& array) {
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

    void merge(int left, int right, int mid, vector<int>& array) {
        vector<int> temp; // temporary array
        int i=left, j=mid+1;

        while (i<= mid && j<= right) {
            if(array[i]<array[j]) {
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