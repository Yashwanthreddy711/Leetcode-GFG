class Solution {
public:
   int binarySearch(vector<int>arr,int target){
    int st=0;
    int en= arr.size()-1;
    while(st<=en){
        int mid=(st+en)/2;
        if(arr[mid]==target)return mid;
        else if(arr[mid]>target){
            en=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    return -1;
   }
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sumA=0;
        int sumB=0;
        for(int i=0;i<aliceSizes.size();i++){
            sumA=sumA+aliceSizes[i];
        }
        for(int i=0;i<bobSizes.size();i++){
            sumB=sumB+bobSizes[i];
        }
        int delta=(sumA-sumB)/2;
        sort(bobSizes.begin(),bobSizes.end());
       
        for(int i=0;i<aliceSizes.size();i++){
            int target=aliceSizes[i]-delta;
            int index=binarySearch(bobSizes,target);
            if(index!=-1){
                return {aliceSizes[i],bobSizes[index]};
            }
        }
        return {};

    }
};