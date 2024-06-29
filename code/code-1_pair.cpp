#include <iostream>
using namespace std;

void learnPair()
{
    // pair is a container that can store two values of different data types
    // pair is defined in <utility> header file
    // pair is a template class
    // pair is used to combine two values together
    // pair is used to return two values from a function

    // Syntax
    // pair<data_type1, data_type2> pair_name;
    // pair<data_type1, data_type2> pair_name(value1, value2);

    pair <int, int> p1;
    cin>>p1.first>>p1.second;
    cout<<"Sum of Two Integer is : "<<p1.first + p1.second<<endl;

    pair<int, int> arr[] = {{1,2},{3,4},{5,6}};
    for(int i=0; i<3; i++)
    {
        cout<<arr[i].first<<" "<<arr[i].second<<endl;
    }
}

int main()
{
    learnPair();
    return 0;
} 


/**
 * @brief This function demonstrates the usage of the pair container in C++.
 * 
 * The pair container is a template class defined in the <utility> header file.
 * It is used to store two values of different data types together.
 * 
 * The syntax to declare a pair is:
 * pair<data_type1, data_type2> pair_name;
 * 
 * The pair container can be used in various scenarios, such as:
 * - Combining two values together
 * - Returning two values from a function
 * 
 * In this function, the pair container is used to store two integers.
 * The user is prompted to enter two integers, and their sum is calculated and displayed.
 * 
 * Additionally, an array of pairs is declared and initialized with values.
 * The values of the pairs in the array are then printed using a loop.
 */
