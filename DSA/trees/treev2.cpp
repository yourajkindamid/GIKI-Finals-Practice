#include <iostream>

using namespace std;

struct node
{
    int data;
    node* left;
    node* right;
}*key = NULL;

node* insertion(node* key, int k)
{
    node* t;
    if(key == NULL)
    {
        t = new node;
        t->data = k;
        t->left = t->right = NULL;
        return t;
    }
    if(k > key->data)
    {
        key->right = insertion(key->right, k);
    }
    if(k < key->data)
    {
        key->left = insertion(key->left, k);
    }

    return key;
}

node* traversal(node* key)
{
    if(key == NULL)
    {
        return NULL;
    }

    traversal(key->left);
    cout << key->data << endl;
    traversal(key->right);

    return key;
}



node* inorderpred(node* m)
{
    if(m->right != NULL)
    {
        return inorderpred(m->right);
    }

    return m;
}


node* deletion(node* key, int k)
{
    if(key == NULL)
    {
        return NULL;
    }

    if(k > key->data)
    {
        key->right = deletion(key->right, k);
    }

    else if(k<key->data)        //EXTREMELY CRUCIAL TO HAVE ELSE IF HERE
    {
        key->left = deletion(key->left, k);        
    }

    else
    {
        if(key->left == NULL)
        {
            node* temp = key->right;
            delete key;

            return temp;
        }
        if(key->right == NULL)
        {
            node* temp = key->left;
            delete key;

            return temp;
        }

            node* t = inorderpred(key);
            key -> data = t->data;
            key->left = deletion(key->left, t->data);
    }

    return key;
}

int main()
{
    key = insertion(key, 5);
    key = insertion(key, 3);
    key = insertion(key, 2);
    key = insertion(key, 4);
    key = insertion(key, 6);
    key = insertion(key, 7);
    key = insertion(key, 8);
    cout << "Printing elements of BST in ascending order: " << endl;
    traversal(key);
    cout << endl;
    node* t = key->left;
    cout << "The inorder predecessor: " << inorderpred(t)->data << endl;


    key = deletion(key, 5);
    traversal(key);
}

