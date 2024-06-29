# C++ Standard Template Library (STL)
<img src="https://user-images.githubusercontent.com/74038190/212744287-14f66c13-5458-40dc-9244-8ff533fc8f4a.gif" width="1000">
<br><br>

This project aims to provide a comprehensive explanation of the C++ Standard Template Library (STL). The STL is a powerful set of reusable components that provide data structures and algorithms for efficient programming in C++.

## Table of Contents

- 📁[/code](#code)
    - 📄[code-1_pair.cpp](#pair)


In the `/code` folder, you will find examples and explanations of various STL components.

### 1. Pair

The `pair` is a fundamental component of the STL that allows you to store two values together as a single entity. It is commonly used to represent key-value pairs or to associate two related values.

Here is an example of how to use the `pair` in C++:

<details>
<summary>Click to view code</summary>

```cpp
#include <iostream>
using namespace std;

void learnPair()
{

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

```

</details>

## Credits

This project was authored by [Sahir Ahmed](https://www.linkedin.com/in/sahir-ahmed). Connect with me on LinkedIn:

[![LinkedIn](https://img.shields.io/badge/LinkedIn-Sahir%20Ahmed-blue?style=flat-square&logo=linkedin)](https://www.linkedin.com/in/sahir-ahmed)

<p align="center">
  <img src="https://github.com/thesahirahmed/gif/blob/main/loader.gif?raw=true" width="1000">
</p>

