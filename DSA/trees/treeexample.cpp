#include <iostream>
using namespace std;

struct node
{
    int data;
    node* left;
    node* right;
};

void traversal(node* a)
{
    if(a != nullptr)
    {
        traversal(a->left);
        cout << a->data << endl;
        traversal(a->right);
    }
}

node* insertion(node* a, int x)
{
    node* t; //will work as a new leaf
    if(a == NULL)
    {
        t = new node;
        t->data = x;
        t->left = t->right = NULL;
        return t;
    }
    else if(x > a->data)
    {
        a->right = insertion(a->right, x);
    }
    else
    {
        a->left = insertion(a->left, x);
    }
    return a;
}

node* search(node* a, int z)
{
    if(a == NULL)
    {
        return NULL;
    }

    if(a->data == z)
    {
        return a;
    }

    if(a->data < z)
    {
        return search(a->right, z);
    }

    else
    {
        return search(a->left, z);
    }
}

node* inordersucc(node* a)
{
    node* temp = a;

    temp = temp->right;

    while(temp -> left != NULL)
    {
        temp = temp->left;
    }

    return temp;
}


node* deletion(node* a, int x)
{
    if(a == NULL)
    {
        return NULL;
    }

    if(x > a->data)
    {
        a->right = deletion(a->right, x);
    }

    else if(x < a->data)
    {
        a->left = deletion(a->left, x);
    }

    else
    {
        if(a->left == NULL)
        {
            node* temp = a->right;  //one child condition to keep in mind
            delete a;
            return temp;
        }
        if(a->right == NULL)
        {
            node* temp = a->left;
            delete a;
            return temp;
        }
        node* succ = inordersucc(a);
        a->data = succ->data;
        a->right = deletion(a->right, succ->data);
    }

    return a;
}

int main()
{
    int y;

    node* teg = NULL;
    teg = insertion(teg, 5);
    teg = insertion(teg, 3);
    teg = insertion(teg, 2);
    teg = insertion(teg, 4);
    teg = insertion(teg, 7);
    teg = insertion(teg, 6);
    teg = insertion(teg, 8);
    cout << "Printing elements of BST in ascending order: " << endl;
    traversal(teg);

    cout << "Searching for a given value in the BST:" << endl;
    cout << search(teg, 2) << endl;


    cout << "Inorder successor of the BST: " << endl;
    cout << inordersucc(teg)->data << endl;


    cout << "Deletion: " << endl;
    teg = deletion(teg, 5);

    traversal(teg);


    


}
