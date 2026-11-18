#include"my_sort.h"
#include<forward_list>
#include<list>
#include<chrono>
#include<cstdlib>
#include<ctime>
#include<algorithm>


//Vector
void Vector_test()
{
    int i;
    auto odd = [](int x) -> bool {return x % 2 != 0;};
    std::vector<int> A, B, C, E, F, G;
    std::cout << "\t\tVECTOR EVALUATION\n";
    //Insertion
    //ascending order
    auto start = std::chrono::high_resolution_clock::now();
    for (i = 1; i <= 100000; ++i)
        A.push_back(i);
    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "\nDuration of ascending order insertion(A): " << duration.count() << " ms";

    //descending order
    start = std::chrono::high_resolution_clock::now();
    for (i = 100000; i >= 1; --i)
        B.push_back(i);
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "\nDuration of descending order insertion(B): " << duration.count() << " ms";

    //random values
    start = std::chrono::high_resolution_clock::now();
    for (i = 1; i <= 100000; ++i)
        C.push_back(rand() % 100000 + 1);
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "\nDuration of random number insertion(C): " << duration.count() << " ms";
    std::cout << std::endl;

    //Sorting
    //ascending order
    start = std::chrono::high_resolution_clock::now();
    std::sort(A.begin(), A.end());
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "\nDuration of sorting ascending order: " << duration.count() << " ms";

    //descending order
    start = std::chrono::high_resolution_clock::now();
    std::sort(B.begin(), B.end());
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "\nDuration of sorting descending order: " << duration.count() << " ms";

    //random values
    start = std::chrono::high_resolution_clock::now();
    std::sort(C.begin(), C.end());
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "\nDuration of sorting random values: " << duration.count() << " ms";
    std::cout << std::endl;

    //Deletion of odd number
    //ascending order
    start = std::chrono::high_resolution_clock::now();
    for (i = 1; i <= 100000; ++i)
        E.push_back(i);
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "\nDuration of ascending order insertion(E): " << duration.count() << " ms";

    //descending order
    start = std::chrono::high_resolution_clock::now();
    for (i = 100000; i >= 1; --i)
        F.push_back(i);
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "\nDuration of descending order insertion(F): " << duration.count() << " ms";

    //random values
    start = std::chrono::high_resolution_clock::now();
    for (i = 1; i <= 100000; ++i)
        G.push_back(rand() % 100000 + 1);
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "\nDuration of random number insertion(G): " << duration.count() << " ms";
    std::cout << std::endl;

    //Ascending order
    start = std::chrono::high_resolution_clock::now();
    std::erase_if(E, odd);
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "\nDuration of deletion of odd in ascending order: " << duration.count() << " ms";

    //Descending order
    start = std::chrono::high_resolution_clock::now();
    std::erase_if(F, odd);
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "\nDuration of deletion of odd in descending order: " << duration.count() << " ms";

    //Random values
    start = std::chrono::high_resolution_clock::now();
    std::erase_if(G, odd);
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "\nDuration of deletion of odd random values: " << duration.count() << " ms";
    std::cout << std::endl;
}

//Forward list
void Forward_list_test()
{
    int i;
    auto odd = [](int x) -> bool {return x % 2 != 0;};
    std::forward_list<int> A, B, C, E, F, G;
    std::cout << "\t\tFORWARD LIST EVALUATION\n";
    //Insertion
    //ascending order
    auto start = std::chrono::high_resolution_clock::now();
    for (i = 100000; i >= 1; --i)
        A.push_front(i);
    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "\nDuration of ascending order insertion(A): " << duration.count() << " ms";

    //descending order
    start = std::chrono::high_resolution_clock::now();
    for (i = 1; i <= 100000; ++i)
        B.push_front(i);
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "\nDuration of descending order insertion(B): " << duration.count() << " ms";

    //random values
    start = std::chrono::high_resolution_clock::now();
    for (i = 1; i <= 100000; ++i)
        C.push_front(rand() % 100000 + 1);
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "\nDuration of random number insertion(C): " << duration.count() << " ms";
    std::cout << std::endl;

    //Sorting
    //ascending order
    start = std::chrono::high_resolution_clock::now();
    A.sort();
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "\nDuration of sorting ascending order: " << duration.count() << " ms";

    //descending order
    start = std::chrono::high_resolution_clock::now();
    B.sort();
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "\nDuration of sorting descending order: " << duration.count() << " ms";

    //random values
    start = std::chrono::high_resolution_clock::now();
    C.sort();
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "\nDuration of sorting random values: " << duration.count() << " ms";
    std::cout << std::endl;

    //Deletion of odd number
    //ascending order
    start = std::chrono::high_resolution_clock::now();
    for (i = 100000; i >= 1; --i)
        E.push_front(i);
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "\nDuration of ascending order insertion(E): " << duration.count() << " ms";

    //descending order
    start = std::chrono::high_resolution_clock::now();
    for (i = 1; i <= 100000; ++i)
        F.push_front(i);
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "\nDuration of descending order insertion(F): " << duration.count() << " ms";

    //random values
    start = std::chrono::high_resolution_clock::now();
    for (i = 1; i <= 100000; ++i)
        G.push_front(rand() % 100000 + 1);
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "\nDuration of random number insertion(G): " << duration.count() << " ms";
    std::cout << std::endl;

    //Ascending order
    start = std::chrono::high_resolution_clock::now();
    std::erase_if(E, odd);
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "\nDuration of deletion of odd in ascending order: " << duration.count() << " ms";

    //Descending order
    start = std::chrono::high_resolution_clock::now();
    std::erase_if(F, odd);
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "\nDuration of deletion of odd in descending order: " << duration.count() << " ms";

    //Random values
    start = std::chrono::high_resolution_clock::now();
    std::erase_if(G, odd);
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "\nDuration of deletion of odd random values: " << duration.count() << " ms";
    std::cout << std::endl;
}

//List
void List_test()
{
    int i;
    auto odd = [](int x) -> bool {return x % 2 != 0;};
    std::list<int> A, B, C, E, F, G;
    std::cout << "\t\tLIST EVALUATION\n";
    //Insertion
    //ascending order
    auto start = std::chrono::high_resolution_clock::now();
    for (i = 100000; i >= 1; --i)
        A.push_front(i);
    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "\nDuration of ascending order insertion(A): " << duration.count() << " ms";

    //descending order
    start = std::chrono::high_resolution_clock::now();
    for (i = 1; i <= 100000; ++i)
        B.push_front(i);
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "\nDuration of descending order insertion(B): " << duration.count() << " ms";

    //random values
    start = std::chrono::high_resolution_clock::now();
    for (i = 1; i <= 100000; ++i)
        C.push_front(rand() % 100000 + 1);
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "\nDuration of random number insertion(C): " << duration.count() << " ms";
    std::cout << std::endl;

    //Sorting
    //ascending order
    start = std::chrono::high_resolution_clock::now();
    A.sort();
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "\nDuration of sorting ascending order: " << duration.count() << " ms";

    //descending order
    start = std::chrono::high_resolution_clock::now();
    B.sort();
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "\nDuration of sorting descending order: " << duration.count() << " ms";

    //random values
    start = std::chrono::high_resolution_clock::now();
    C.sort();
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "\nDuration of sorting random values: " << duration.count() << " ms";
    std::cout << std::endl;

    //Deletion of odd number
    //ascending order
    start = std::chrono::high_resolution_clock::now();
    for (i = 100000; i >= 1; --i)
        E.push_front(i);
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "\nDuration of ascending order insertion(E): " << duration.count() << " ms";

    //descending order
    start = std::chrono::high_resolution_clock::now();
    for (i = 1; i <= 100000; ++i)
        F.push_front(i);
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "\nDuration of descending order insertion(F): " << duration.count() << " ms";

    //random values
    start = std::chrono::high_resolution_clock::now();
    for (i = 1; i <= 100000; ++i)
        G.push_front(rand() % 100000 + 1);
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "\nDuration of random number insertion(G): " << duration.count() << " ms";
    std::cout << std::endl;

    //Ascending order
    start = std::chrono::high_resolution_clock::now();
    std::erase_if(E, odd);
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "\nDuration of deletion of odd in ascending order: " << duration.count() << " ms";

    //Descending order
    start = std::chrono::high_resolution_clock::now();
    std::erase_if(F, odd);
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "\nDuration of deletion of odd in descending order: " << duration.count() << " ms";

    //Random values
    start = std::chrono::high_resolution_clock::now();
    std::erase_if(G, odd);
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "\nDuration of deletion of odd random values: " << duration.count() << " ms";
    std::cout << std::endl;
}


int main()
{
    srand(time(0));

    //Part a
    std::cout << "PART A\n";
    //vector
    Vector_test();
    std::cout << std::endl;

    //Forward list
    Forward_list_test();
    std::cout << std::endl;

    //List
    List_test();
    std::cout << std::endl;

    //Part b
    std::cout << "PART B\n";

    int i;
    std::vector<int> A, B, C, E, F, G;
    my_sort s;

    //inserting new values
    for (i = 1; i <= 100000; ++i)
        A.push_back(i);
    for (i = 100000; i >= 1; --i)
        B.push_back(i);
    for (i = 1; i <= 100000; ++i)
        C.push_back(rand() % 100000 + 1);
    for (i = 1; i <= 100000; ++i)
        E.push_back(i);
    for (i = 100000; i >= 1; --i)
        F.push_back(i);
    for (i = 1; i <= 100000; ++i)
        G.push_back(rand() % 100000 + 1);

    //Heap Sorting
    //ascending order
    auto start = std::chrono::high_resolution_clock::now();
    s.heap_sort(A);
    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "\nDuration of heap sorting ascending order: " << duration.count() << " ms";

    //descending order
    start = std::chrono::high_resolution_clock::now();
    s.heap_sort(B);
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "\nDuration of heap sorting descending order: " << duration.count() << " ms";

    //random values
    start = std::chrono::high_resolution_clock::now();
    s.heap_sort(C);
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "\nDuration of heap sorting random values: " << duration.count() << " ms";
    std::cout << std::endl;

    //Insertion Sorting
    //ascending order
    start = std::chrono::high_resolution_clock::now();
    s.insertion_sort(E);
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "\nDuration of insertion sorting ascending order: " << duration.count() << " ms";

    //descending order
    start = std::chrono::high_resolution_clock::now();
    s.insertion_sort(F);
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "\nDuration of insertion sorting descending order: " << duration.count() << " ms";

    //random values
    start = std::chrono::high_resolution_clock::now();
    s.insertion_sort(G);
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "\nDuration of insertion sorting random values: " << duration.count() << " ms";
    std::cout << std::endl;

    return 0;
}