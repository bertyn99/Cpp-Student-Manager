#include <iostream>
#include <cstring>
#include <utility>
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
    List(const List &other) : length(other.length), capacity(other.capacity), buffer(new float[other.capacity])
    {
        std::cout << "Création d'une copie" << std::endl;
        buffer = new float[capacity];
        std::memcpy(buffer, other.buffer, sizeof(new float[other.capacity]));
    };
    List &operator=(List other)
    {
        std::cout << "Création d'une copie swap" << std::endl;
        std::swap(buffer, other.buffer);
        capacity = other.capacity;
        length = other.length;
    };

    List

        void
        push(float num)
    {
        std::cout << "Ajout d'un element dans le tableau" << std::endl;
        if (length != capacity || length < capacity)
        {
            buffer[length] = num;
            length += 1;
        }
        else
        {
            std::cerr << "Nous ne pouvons pas ajouté d'élément dans le tableau" << std::endl;
        }
    };

    void print()
    {
        std::cout << "Voici les element d ela liste : \n{";
        for (int i = 0; i < length; i++)
        {
            if (i == 0)
            {
                std::cout << buffer[i];
            }
            else
            {
                std::cout << ", " << buffer[i];
            }
        }
        std::cout << "}" << std::endl;
    };
    void count()
    {
        std::cout << "la liste a une taille de " << length << std::endl;
    }

    float &get(int i)
    {
        if (i <= capacity && i >= 0)
        {
            std::cout << buffer[i] << std::endl;
            return buffer[i];
        }
        std::cout << "l'index n'est pas valide" << std::endl;
        return buffer[0];
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
    List l3(8);
    List l2 = l;
    l2.push(5);
    l2.push(3);
    l2.push(7);
    l2.print();
    return 0;
}