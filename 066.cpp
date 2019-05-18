class Solution {
public:
 vector<int> plusOne(vector<int>& digits) {
        int i=0;
        int size=digits.size();//记录当前容量大小
        for(i=size-1;i>=0;i--)
        {
            digits[i]++;
            digits[i]=digits[i]%10;//进位
            if(digits[i]!=0)//若无进位则返回
                return digits;
        }
        if(i==-1) //处理99，999类数字情况
        {
            digits.insert(digits.begin(),1);
            //此处不能写成digits[0]=1,因为这样写没有为容器增加容量就写入会出现内存溢出问题。
        }
        return digits;
    }
};