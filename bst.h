#include <string>
#include <iostream>

 //found thus online with documentation on how to set it up it maakes sense on how its done 


class binarySearchTree{
    public:
    binarySearchTree(void);
    ~binarySearchTree();
    void Insert(std::string);
    std::string *Find(int value);
    int Size();
    std::string allAcending();
    std::string allDecending();
    void emptyTree();
    private:
};