//P进制数x转换为十进制数y
int y = 0, product = 1;//product在循环中会不断乘P，得到1、P、P^2、P^3...
while(x != 0)
{
	y = y + (x % 10)*product;
	x = x / 10;//去掉x的个位
	product = product * P;
}

//十进制数y转为Q进制数z
int z[40], num = 0;//数组z存放Q进制数y的每一位，num为位数
do{
	z[num++] = y % Q;//除基取余
	y = y / Q;
}while (y != 0);//当商不为0时进行循环
