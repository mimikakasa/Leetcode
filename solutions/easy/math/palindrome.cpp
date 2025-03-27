class Solution {
public:
	bool isPalindrome(int x) {
        //负数-号开头肯定不是回文数
		if (x < 0)
		{
			return false;
		}
        //所有以0结尾的数回文后以0开头 只有0满足条件
		if (x % 10 == 0 && x != 0)
		{
			return false;
		}

		int reverseNumber = 0;
		while (x > reverseNumber)
		{
			reverseNumber = x % 10 + reverseNumber * 10;
			x = x / 10;
		}
        //偶数的话直接两者相等 奇数的话中间一位不影响比较直接/10丢掉
		return x == reverseNumber || x == (reverseNumber / 10);
	}
};
