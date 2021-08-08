#include "table.h"

//Please put the impelementation of the required functions here

int countNodes(node* root) {

    if (root == nullptr) {
        return 0;
    }
    return 1 + countNodes(root->left) + countNodes(root->right);
}

int sumLeaves(node* root) {
    if (root == nullptr) {
        return 0;
    }
    if (root->left == nullptr && root->right == nullptr) {
        return sumLeaves(root->right) + sumLeaves(root->left) + root->data;
    }
    else {
        return sumLeaves(root->right) + sumLeaves(root->left);
    }
}
