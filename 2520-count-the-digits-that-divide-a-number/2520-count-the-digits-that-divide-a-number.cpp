class Solution {
public:
    int countDigits(int num) {
        int rem, last=0,count=0, ans=num;
        while(num>0){
            rem = num%10;
            if(ans%rem==0){
                count++;
            
            }
            num=num/10;
        }
        return count;
    }
};