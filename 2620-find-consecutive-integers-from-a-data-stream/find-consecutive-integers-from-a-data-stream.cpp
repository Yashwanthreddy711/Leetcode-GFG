class DataStream {
public:
int val;
int t=0;
int cons=0;


queue<int>q;
    DataStream(int value, int k) {
        val=value;
        t=k;
    }

    
    bool consec(int num) {
     q.push(num);
     if(num==val){
             cons++;
         }
         else{
             cons=0;
         }
     if(q.size()<t)return false;
     else{
         if(cons>=t)return true;
     }
     return false;
          
    }
};
/*
value=4  k=3
4  
4
4
*/
/**
 * Your DataStream object will be instantiated and called as such:
 * DataStream* obj = new DataStream(value, k);
 * bool param_1 = obj->consec(num);
 */