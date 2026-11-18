#pragma once
#include<iostream>
#include<vector>

void reheap_down(std::vector<int>& v, int first, int last)
{
	int left, right, max;
	left = first * 2 + 1;
	right = first * 2 + 2;
	max = left;
	while (left <= last)
	{
		if (right <= last)
		{
			if (v[right] > v[left])
				max = right;
		}
		if (v[first] < v[max])
		{
			std::swap(v[first], v[max]);
			first = max;
			left = first * 2 + 1;
			right = first * 2 + 2;
			max = left;
		}
		else
			break;
	}
}
class my_sort
{
public:
	void heap_sort(std::vector<int>& v)
	{
		int i;
		for (i = (v.size() / 2) - 1;i >= 0;--i)
			reheap_down(v, i, v.size() - 1);
		for (i = v.size() - 1;i > 0;--i)
		{
			std::swap(v[0], v[i]);
			reheap_down(v, 0, i - 1);
		}
	}
	void insertion_sort(std::vector<int>& v)
	{
		int num, i, j;
		for (i = 1;i < v.size();++i)
		{
			num = v[i];
			for (j = i - 1;j >= 0;--j)
			{
				if (num < v[j])
					v[j + 1] = v[j];
				else
					break;
			}
			v[j + 1] = num;

		}
	}
};
