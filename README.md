# ClockType Class C++ Example

This example C++ code defines a class named `clockType` and performs basic clock operations.

## Code Content

This C++ code contains a class named `clockType`. This class stores hour, minute, and second information and provides various functions to set, increment, and display this information.

## Usage

By using this code, you can create a `clockType` object, set the time, increment it, and display the results.

```cpp
#include <iostream>
using namespace std;

// Definition and functions of the clockType class...

int main()
{
    clockType myClock(12, 30, 58);
    myClock.printTime();
    myClock.incrementSeconds();
    myClock.incrementSeconds();
    myClock.printTime();
}
