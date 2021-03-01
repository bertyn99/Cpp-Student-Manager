#include <iostream>

const size_t DEFAULT_CAPACITY = 5;

class List
{
    size_t capacity;
    size_t length;
    float *buffer;

private:
    /* data */
public:
    List(size_t cap) : length(0), capacity(cap), buffer(new float[cap])
    {
        std::cout << "Création de la list avec un capacity defini" << std::endl;
    };
    List() : List(DEFAULT_CAPACITY)
    {
        std::cout << "Création de la list avec un capacity par defaut" << std::endl;
    };
    ~List()
    {
        std::cout << "Freeing buffer List" << std::endl;
        delete[] buffer;
    };
    List(const List &other){

    };
    List &operator=(List other){

    };
};

/* List::List()
{
}

List::~List()
{
} */

int main(int argc, char const *argv[])
{
    List l;
    return 0;
}