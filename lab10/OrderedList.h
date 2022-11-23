//
// Created by Heni on 11/23/2022.
//

#ifndef CPP_2022_ORDEREDLIST_H
#define CPP_2022_ORDEREDLIST_H
#include <functional>
#include <iostream>
using namespace std;


template< class T, class LessComp=less<T>, class Equal=equal_to<T> >
class Iterator;

template <class T, class LessComp = less<T>, class Equal = equal_to<T> >
class OrderedList{
private:
    struct Node{
    T value;
    Node* next;

    Node(T value, Node *next = nullptr) : value(value),next(next){}
    };
    Node* first{nullptr};
    int numElements{0};
public:
    virtual ~OrderedList();
    void listItems(ostream& os = cout);
    void insert(const T &what);
    bool isEmpty();
    void remove(const T &what);
    bool find(const T &what);
    int size();
    friend class Iterator<T, LessComp, Equal>;

};

template< class T, class LessComp, class Equal >
void OrderedList<T, LessComp, Equal>::listItems(ostream &os) {
    Node* aux = first;
    while (aux != nullptr){
        os << aux->value << " ";
        aux = aux->next;
    }
    os << endl;
}

template<class T, class LessComp, class Equal>
void OrderedList<T, LessComp, Equal>::insert(const T &what) {
    Node *newNode = new Node(what);
    Node *actual = first;
    Node* prev = nullptr;

    while(actual != nullptr && LessComp()(actual->value,what)){
        prev = actual;
        actual = actual->next;
    }

    //ures lista
    if(prev == nullptr){
         newNode->next = first;
         first = newNode;
         ++numElements;
         return;
    }

    //altalanos eset
    prev->next = newNode;
    newNode->next = actual;
    ++numElements;


}

template<class T, class LessComp, class Equal>
OrderedList<T, LessComp, Equal>::~OrderedList() {
    while(first != nullptr){
        Node* aux = first;
        first = first->next;
        delete aux;
    }
    //cout << "Destructor called" << endl;
}

template<class T, class LessComp, class Equal>
int OrderedList<T, LessComp, Equal>::size() {
    return numElements;
}

template<class T, class LessComp, class Equal>
bool OrderedList<T, LessComp, Equal>::isEmpty() {
    if(numElements == 0 )
        return true;
    else return false;
}

template<class T, class LessComp, class Equal>
bool OrderedList<T, LessComp, Equal>::find(const T &what) {
    Node *actual = first;
    while (actual != nullptr) {
        if (Equal()(actual->value, what)) {
            return true;
        }
        actual = actual->next;
    }
    if (actual == nullptr) {
        return false;
    }
}
// Class definition
template< class T, class LessComp, class Equal >
class Iterator{
    OrderedList<T, LessComp, Equal>& list;
    typename OrderedList<T, LessComp, Equal>::Node* act;
public:
    Iterator(OrderedList<T, LessComp, Equal> &list) : list(list), act(list.first) {}
    bool hasNext();
    T next();
};
template<class T, class LessComp, class Equal>
bool Iterator<T, LessComp, Equal>::hasNext() {
    if( act->next == nullptr) return false;
    return true;
}

template<class T, class LessComp, class Equal>
T Iterator<T, LessComp, Equal>::next() {
    T aux = act->value;
    act = act->next;
    return aux;
}
#endif //CPP_2022_ORDEREDLIST_H
