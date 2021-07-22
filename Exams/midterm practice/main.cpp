#include "dlist.h"
using namespace std;

int main()
{
    node* head = NULL;
    build(head);
    display(head);

    //PLEASE PUT YOUR CODE HERE to call the function assigned
    cout << "-------------------------------------------------------" << endl;
    cout << "Remove number ' 2 ' from the linkedlist " << endl;
    cout << "-------------------------------------------------------" << endl;
    int sum = removeValue(head, 2);
    cout << "Number of nodes remove = " << sum << endl;
    cout << "-------------------------------------------------------" << endl;


    display(head);
    destroy(head);
    return 0;
}
