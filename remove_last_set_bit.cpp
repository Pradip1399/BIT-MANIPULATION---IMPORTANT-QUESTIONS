1) n & (n-1) - remove last set bit

2) if( n & (n-1) == 0) then n is the power if 2

3) ///count no. of set bits
while(n!=0)
{
	if(n&1 == 1)
		count++
	n = n >> 1;
}
cout << count