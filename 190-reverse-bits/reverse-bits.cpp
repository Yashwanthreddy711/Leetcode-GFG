class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        vector<int>v;
        while(n){
            int rem=n%2;
            v.push_back(rem);
            n=n/2;
        }
        while(v.size()<32){
            v.push_back(0);
        }
        reverse(v.begin(),v.end());
         long long sum=0;
         for(int i=0;i<32;i++){
             if(v[i]==1){
                sum+=pow(2,i);
             }
            
         }
        return (uint32_t)sum;
         
    }
};