class Solution {
public:
    void swap(vector<int> &arr, int i, int j)
{
    // cout << ("Swapping index " + to_string(i) + " and index " + to_string(j)) << endl;
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=i-1,k=n-1;
        while(i<=k){
            if(nums[i]==0){
                j++;
                swap(nums,i,j);
                i++;
            }
            else if(nums[i]==2){
                swap(nums,i,k);
                k--;
            }
            else{
                i++;
            }   
        }
    }
};