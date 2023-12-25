//
// Created by rashadalsharpini on 25/12/23.
//

#ifndef BINARYTREE_BST_H
#define BINARYTREE_BST_H

#include <iostream>
using namespace std;
class Node{
public:
    Node* lchild;
    int data;
    Node* rchild;
};

class BST{
private:
    Node* root= nullptr;
public:
    BST(){ root = nullptr; }
    Node* getRoot(){ return root; }
    void iInsert(int key);
    void Inorder(Node* p);
    Node* iSearch(int key);
    Node* rInsert(Node* p, int key);
    Node* rSearch(Node* p, int key);
    Node* Delete(Node* p, int key);
    int Height(Node* p);
    Node* InPre(Node* p);
    Node* InSucc(Node* p);
};


#endif //BINARYTREE_BST_H
