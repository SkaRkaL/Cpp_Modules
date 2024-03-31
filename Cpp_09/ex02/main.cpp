#include "PmergeMe.hpp"


int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        std::cout << "Usage: " << argv[0] << " <positive_integer_sequence>" << std::endl;
        return 1;
    }

    std::vector<int> arrVector;
    std::list<int> arrList;
    PmergeMe p;

    // Parse the input sequence and populate both vector and list
    for (int i = 1; i < argc; i++)
    {
        int num = atoi(argv[i]);
        if (num <= 0)
        {
            std::cerr << "Error: Input sequence must contain only positive integers." << std::endl;
            return 1;
        }
        arrVector.push_back(num);
        arrList.push_back(num);
    }

    // Measure time for sorting using vector
    clock_t startVector = clock();
    p.mergeSortVector(arrVector, 0, arrVector.size() - 1);
    clock_t endVector = clock();
    double vectorTime = static_cast<double>(endVector - startVector) / CLOCKS_PER_SEC * 1000;

    // Measure time for sorting using list
    clock_t startList = clock();
    p.mergeSortList(arrList, arrList.begin(), --arrList.end());
    clock_t endList = clock();
    double listTime = static_cast<double>(endList - startList) / CLOCKS_PER_SEC * 1000;

    // Print sorted sequences
    std::cout << "Sorted sequence using vector: ";
    p.printVector(arrVector);
    std::cout << "Sorted sequence using list: ";
    p.printList(arrList);

    // Print time comparisons
    std::cout << "Time taken to sort using vector: " << vectorTime << " seconds" << std::endl;
    std::cout << "Time taken to sort using list: " << listTime << " seconds" << std::endl;

    return 0;
}
