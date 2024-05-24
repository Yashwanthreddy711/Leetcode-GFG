class Solution {
public:
    long long int calculateHour(long long int capacity, vector<int>& piles) {
        long long int  required_hours = 0;
        for(int i = 0; i < piles.size(); i++) {
            required_hours += piles[i] / capacity;
            if(piles[i] % capacity) required_hours++;
        }
        return required_hours;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        long long int min_speed = 1;
        long long int max_speed = INT_MIN;
        for(int i = 0; i < piles.size(); i++) {
            if(piles[i] > max_speed) max_speed = piles[i];
        }
        
        long long int s = min_speed;
        long long int e = max_speed;
         long long ans = max_speed;  
        
        while(s <= e) {
            long long int m = (s + e) / 2;
            long long int hours = calculateHour(m, piles);
            
            if(hours > h) {
                s = m + 1; 
            } else {
                ans = m;    // Store the possible answer
                e = m - 1;  // Try to find a smaller speed
            }
        }

        return (int)ans;
    }
};
