
struct Node
{
    int data;
    Node* next;
};

class LinkedList
{
    Node* first;
    Node* last;
    int length;

public:

    LinkedList()
    :first(NULL), last(NULL), length(0)
    {}

    explicit LinkedList(int data)
    :first(new Node)
    {
        length = 0;
        first->data = data;
        first->next = NULL;
        last = first;
        ++length;
    }

    void append(int data)
    {
        if (last)
        {
            last->next = new Node;
            last = last->next;
            last->data = data;
            last->next = NULL;
            ++length;
        }
        else
        {
            first = new Node;
            first->data = data;
            first->next = NULL;
            last = first;
            ++length;
        }
    }

    int findElement(int number)
    {
        Node* current = first;
        int indexCount = 0;

        while (current)
        {
            if (current->data == number)

                return indexCount;

            current = current->next;
            ++indexCount;
        }

        return -1;
    }

    int getLength()
    {
        return length;
    }

    void display()
    {
        Node* current = first;

        std::cout << "[";

        while (current)
        {
            std::cout << current->data;
            current = current->next;
            (current)? std::cout << ", " : std::cout << "";
        }

        std::cout << "]" << std::endl;
    }

    int operator[] (unsigned int elementIndex)
    {
        if (elementIndex >= length)

            std::cerr << "\nError! Index out of bound. " << std::endl;


        else
        {
            Node* current = first;

            while (elementIndex--)
            {
                current = current->next;
            }

            return current->data;
        }

        return -1;
    }

    void delElement(int index)
    {

        if (index >= length)

            std::cerr << "Invalid index!" << std::endl;

        else
        {
            Node* current = first;
            Node* previous;
            Node* tmp;

            while( index--)
            {
                previous = current;
                current = current->next;
                tmp = current->next;
            }

            delete current;
            previous->next = tmp;
        }

    }

    void sortList()
    {
        Node* p1 = first;
        Node* p2;
        int temp = 0;

        for(int i = 0; i < length - 1; ++i)
        {
            for(int j = i + 1; j < length; ++j)
            {

                (j == i + 1) ? p2 = p1->next : p2 = p2;

                if (p1->data > p2->data)
                {
                    temp = p1->data;
                    p1->data = p2->data;
                    p2->data = temp;
                    p2 =  p2->next;
                }

                else

                    p2 = p2->next;
            }

            p1 = p1->next;
        }
    }

};
