//Rameeza sabir
//04072513018
#include <iostream>
#include <string>
#include <vector>

int sumNatural(int n)
{
	if (n == 0)
		return 0;
	return n + sumNatural(n - 1);
}

int sumDigits(int n)
{
	if (n == 0)
		return 0;
	int digit = n % 10;
	return digit + sumDigits(n / 10);
}

bool isPalindrome(const std::string& str, int left, int right)
{
	if (left >= right)
		return true;
	if (str[left] != str[right])
		return false;
	return isPalindrome(str, left + 1, right - 1);
}

int findMaximum(const std::vector<int>& v, int index)
{
	if (index == v.size() - 1)
		return v[index];
	int max = findMaximum(v, index + 1);
	if (v[index] > max)
		return v[index];
	return max;
}

int main()
{
	//sum of first natural numbers
	int n, sum;
	std::string str;
	bool check;
	std::cout << "Enter the last natural number to add until: ";
	std::cin >> n;
	sum = sumNatural(n);
	std::cout << "The sum is: " << sum << std::endl;

	//sum of digits
	std::cout << "Enter the natural number to add its digits: ";
	std::cin >> n;
	sum = sumDigits(n);
	std::cout << "The sum of digits is: " << sum << std::endl;

	//Palindrome checker
	std::cout << "Enter the string to check palindrome: ";
	std::cin >> str;
	check = isPalindrome(str,0,str.length()-1);
	if(check)
		std::cout << "The string is palindrome "  << std::endl;
	else
		std::cout << "The string is not palindrome " << std::endl;
	//vector
	std::vector<int> v = {2,6,1,89,45,78};
	std::cout << "Maximum among the vector is: " << findMaximum(v, 0) << std::endl;
}
