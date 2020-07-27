class Solution {
public:
    string addBinary(string a, string b) {
        int sum;
        int carry=0;
        int i = a.size()-1;
        int j = b.size()-1;
        string result="";
        while( i>=0 || j>=0) {
            sum = carry;
            if(i>=0){
                sum += a[i] == '1' ? 1 : 0;
                i--;
            }
            if(j >= 0){
                sum += b[j] == '1' ? 1 : 0; 
                j--;
            }
            carry = sum / 2;
            if(sum == 1 || sum == 3){
                result = result + '1';
            }
            else{
                result = result + '0';
            }
        }
        if(carry){
            result = result + '1';
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
