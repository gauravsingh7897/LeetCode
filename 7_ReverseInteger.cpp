class Solution {
public:
    int reverse(int x) {
        bool negative = false;
        if (x<0){
            negative = true;
            x = (unsigned int) x;
        }
        int r = 0;
        int newNumber=0;
        while(x!=0){
            r = x % 10;
            x = x/10;
            if ((long) newNumber*10 <INT_MIN ||(long) newNumber*10>INT_MAX){
                return 0;
            }
            newNumber = newNumber * 10 + r;
            
        }
        if(negative){
            newNumber = (signed int)newNumber;
        }
        return newNumber;
    }
};
