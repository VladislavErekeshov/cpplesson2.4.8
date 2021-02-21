/* Вводятся два двузначных натуральных числа. Догадайтесь по двум открытым тестам, какую надо написать программу, чтобы она прошла все оставшиеся закрытые наборы исходных данных.

Sample Input 1:

12 34
Sample Output 1:

64
Sample Input 2:

98 76
Sample Output 2:

156 
*/

#include <iostream>
using namespace std;
int main()
{
	int m, n, m1, m2, n1, n2;
	cin >> m >> n;
	m1 = m / 10;
	m2 = m % 10;
	n1 = n / 10;
	n2 = n % 10;
	cout << m2 * 10 + m1 + n2 * 10 + n1;
	return 0;
}