class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(0, nums.size()-1, nums);
        return nums;
    }

private:
    void mergeSort(int l, int r, vector<int>& array) {
        // base case 
        if (l>=r) return;

        // calculate middle
        int m = (l+r)/2;
        // recursive calls
        mergeSort(l, m, array);
        mergeSort(m+1, r, array);
        // merge
        merge(l, m, r, array);
    }

    void merge(int l, int m, int r, vector<int>& arr){
        int i=l; 
        int j =m+1;
        vector<int> temp;
        while (i<=m && j<=r) {
            if (arr[i]<arr[j]) { 
                temp.push_back(arr[i]);
                i++;
            }
            else {
                temp.push_back(arr[j]);
                j++;
            }
        }

        while (i<=m) {
            temp.push_back(arr[i]);
            i++;
        }
        while (j<=r) {
            temp.push_back(arr[j]);
            j++;
        }

        for (int i=l; i<=r; i++) {
            arr[i] = temp[i-l];
        }
    }
};