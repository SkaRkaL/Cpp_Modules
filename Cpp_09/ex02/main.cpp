#include "PmergeMe.hpp"

bool	FillContainers(vector<int> &vec, deque<int> &deq, int ac, char **av)
{
	for (int i = 1; i < ac; i++)
	{
		if (av[i][0] == '\0')
		{
			cout << "Error: There's an emty array." << endl;
			return 1;
		}
		int n = atoi(av[i]);
		if (n < 0)
		{
			cout << "Error: " << av[i] << " is not a positive integer." << endl;
			return 1;
		}
		size_t j = 0;

		if (av[i][j] == '+')
			j++;
		for (; j < strlen(av[i]); j++)
		{
			if (!isdigit(av[i][j]))
			{
				cout << "Error: " << av[i] << " is not a number." << endl;
				return 1;
			}
		}
		vec.push_back(n);
		deq.push_back(n);
	}
	return 0;
}

void	printVector(vector<int> vec)
{
	for (size_t i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << " ";
	}
	cout << endl;
}

void	printDeque(deque<int> deq)
{
	for (size_t i = 0; i < deq.size(); i++)
	{
		cout << deq[i] << " ";
	}
	cout << endl;
}


int main(int ac, char **av)
{
	if (ac < 2)
    {
        cout << "Usage: " << av[0] << " <positive_integer_sequence>" << endl;
        return 1;
    }

	vector<int>		vec;
	vector<int>		sorted_vec;

	deque<int>		deq;
	deque<int>		sorted_deq;

	if (FillContainers(vec, deq, ac, av) == 1)
		return 1;

	cout << "Before : ";
	printVector(vec);

	clock_t startVector = clock();

	MergeInsertionSort <vector<int>, vector<pair<int, int> > > (vec, sorted_vec);
	
	clock_t endVector = clock();
	
	double vectorTime = static_cast<double>(endVector - startVector) / CLOCKS_PER_SEC * 1000;

	
	
	clock_t startDeque = clock();
	
	MergeInsertionSort <deque<int>, deque<pair<int, int> > > (deq, sorted_deq);
	
	clock_t endDeque = clock();
	
	double dequeTime = static_cast<double>(endDeque - startDeque) / CLOCKS_PER_SEC * 1000;
	
	cout << "After  : ", printVector(sorted_vec), cout << endl;


	cout << "Sorted sequence using [std::vector]	: ";
	printVector(sorted_vec);

	cout << "Sorted sequence using [std::deque]	: ";
	printDeque(sorted_deq);
	cout	<< endl;


	cout	<< "Time taken to sort a range of "
			<< sorted_vec.size()
			<< " using [std::vector]	: "
			<< vectorTime
			<< " seconds"
			<< endl;

	cout	<< "Time taken to sort a range of "
			<< sorted_deq.size()
			<< " using [std::deque]	: "
			<< dequeTime
			<< " seconds"
			<< endl;

	return 0;
}
