//
// Created by Heni on 12/12/2022.
//

#ifndef CPP_2022_HUFFMAN_H
#define CPP_2022_HUFFMAN_H

#include <iostream>
#include <map>
#include <fstream>
#include <queue>

using namespace std;

class Huffman {
public:
    Huffman(const string &filename);

private:
    map<char, int> frequencies;
    struct node {
        char data;
        long freq;
        struct node *left, *right;
        node(char data=' ', long freq=0, node* left= nullptr, node* right = nullptr): data(data), freq(freq),left(left), right(right){};

        friend ostream &operator<<(ostream &os, const node &node) {
            os << "data: " << node.data << " freq: " << node.freq << ";";
            return os;
        }
    };
    struct CompNode{
        bool operator()(node* n1, node* n2){
            return n1->freq>n2->freq;
        };
    };
    priority_queue<node *, vector<node *>, CompNode> priorityQueue;
    void createTree();
};


#endif //CPP_2022_HUFFMAN_H
