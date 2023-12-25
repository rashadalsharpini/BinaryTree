#include <iostream>
using namespace std;
#include "BST.h"
int main() {
    BST bb;
//    bb.iInsert(6);
    bb.rInsert(bb.getRoot(),5);
    bb.rInsert(bb.getRoot(),10);
    bb.rInsert(bb.getRoot(),3);
    bb.Inorder(bb.getRoot());


    cout << "Hello, World!" << endl;
    return 0;
}
