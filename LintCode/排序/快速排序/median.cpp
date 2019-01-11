class Solution {
public:
    /**
     * @param nums: A list of integers.
     * @return: An integer denotes the middle number of the array.
     */


    void quickSort(int arr[], int l,int r) {
      if (l>=r) return;
      swap(arr[l],arr[rand()%(r-l+1)+l]);
      int v = arr[l];
      int j = l;
      for (int i = l+1;i<=r;i++) {
        if (arr[i]<v) {
          j++;
          swap(arr[j],arr[i]);
        }
      }
      swap(arr[l],arr[j]);
      quickSort(arr,l,j-1);
      quickSort(arr,j+1,r);
    }

    int median(vector<int> &nums) {
        int n = nums.size();
        quickSort(nums,0,n-1);
        return nums[n/2];
    }
};
