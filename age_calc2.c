#include <stdio.h>
int date(int d1, int d2)
{
	int d;
	if (d1 <= d2)
	{
		d = d2 - d1;
	}
	else
	{
		d = d1 - d2;
	}
	return d;
}
int month(int m1, int m2)
{
	int m , n = 12;
	if(m1 < m2)
	{
		m = m2 - m1;
	}
	else
	{
		m = n + m2 - m1;
	}

	return m;
}
int year(int m1, int m2, int y1, int y2)
{
	int n = y2 - y1, m = n - 1;
	if(m1 <= m2)
	{
		return n;
	}
	else
	{
		return m;
	}
}
int main()
{

    int d, m, y, d1,d2, m1, m2, y1, y2;
    printf("Welcome to R!AD's Age Calculator!\nPlease enter your date of birth\n");

	printf("Date: ");
    scanf("%d", &d1);
    printf("Month: ");
    scanf("%d", &m1);
    printf("Year: ");
    scanf("%d", &y1);

    printf("Enter the date of today\n");
    printf("Date: ");
    scanf("%d", &d2);
    printf("Month: ");
    scanf("%d", &m2);

    printf("Year: ");
    scanf("%d", &y2);
    d = date(d1, d2);
	y = year(m1, m2, y1, y2);
	m = month(m1, m2);

	printf("Your Accurate Age Is %d Year(s) %d Month(s) %d Day(s)\n", y, m, d);
	return 0;
}
