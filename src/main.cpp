#include <iostream>
#include <stdlib.h>

/// @brief In a linked list each is connected by node
///         node contains two field `data` and `next`
struct node
{
    /// @brief stores the actual data
    int data;
    /// @brief points to next node
    node *next;
};
int main(int argc, char const *argv[])
{
    std::cout << "Hello, world!\n";
    return 0;
}
