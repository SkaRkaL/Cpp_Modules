#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <iterator>

using std::cout;
using std::deque;
using std::endl;
using std::lower_bound;
using std::make_pair;
using std::pair;
using std::vector;

template <typename T>
void binarySearchSort(T &left, T &right)
{
	typename T::iterator it = left.begin();

	for (size_t i = 0; i < right.size(); i++)
	{
		it = lower_bound(left.begin(), left.end(), right[i]);
		left.insert(it, right[i]);
	}
}

template <typename T>
void insertionSort(T &left)
{
	for (size_t i = 1; i < left.size(); i++)
	{
		int key = left[i];
		int j = i - 1;

		while (j >= 0 && left[j] > key)
		{
			left[j + 1] = left[j];
			j -= 1;
		}
		left[j + 1] = key;
	}
}

template <typename PairType, typename T>
void left_right(PairType pairs, T &left, T &right, int odd)
{
	for (size_t i = 0; i < pairs.size(); i += 2)
	{
		left.push_back(pairs[i].first);
		right.push_back(pairs[i].second);
	}
	if (odd != -1)
		left.push_back(odd);
}

template <typename PairType, typename T>
PairType makePairs(T vec)
{
	PairType pairs;

	for (size_t i = 0; i < vec.size(); i++)
	{
		if (i + 1 == vec.size())
			break;
		if (vec[i] > vec[i + 1])
			pairs.push_back(make_pair(vec[i], vec[i + 1]));
		else
			pairs.push_back(make_pair(vec[i + 1], vec[i]));
	}

	return pairs;
}

template <typename T>
int checkOddOrEven(T &vec)
{
	int odd = -1;

	if (vec.size() % 2 == 1)
		odd = vec[vec.size() - 1];
	return odd;
}

template <typename C, typename P>
void MergeInsertionSort(C &vec, C &left)
{
	P	pairs;
	C	right;
	int	odd;

	odd = checkOddOrEven(vec);

	pairs = makePairs<P>(vec);

	left_right(pairs, left, right, odd);
	insertionSort(left);
	binarySearchSort(left, right);
}
