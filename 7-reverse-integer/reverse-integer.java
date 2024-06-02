class Solution {
    public int reverse(int x) {
      if(x>=2147483647 || x<=-2147483647)
        {
            return 0;
        }
        int ori=x;
        long sum =0 ;
        if(ori<0)x=x*-1;
        while(x>0){
          int rem=x%10;
          sum=sum*10+rem;
          x=x/10;
        }
         if(sum>2147483647)
        {
            return 0;
        }
        if(ori<x){
            return (int)(-1*sum);
        }
        return (int)sum ;
    }
}