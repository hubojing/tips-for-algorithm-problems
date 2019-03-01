//反转一个数字
int reverse(int num)
{
	int result = 0;
	while (num)
	{
		int i = num % 10;
		result = result * 10 + i;
		num = num / 10;
	}
	return result;
}
