#include <iostream>

// 定义二叉树节点结构
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {};
};

// 前序遍历二叉树
void preOrderTraversal(TreeNode *root)
{
    if (root == nullptr)
    {
        return;
    }
    std::cout << root->val << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

// 释放内存
void deleteTraversal(TreeNode *root)
{
    if (root == nullptr)
    {
        return;
    }

    TreeNode *temp = root;
    deleteTraversal(root->left);
    deleteTraversal(root->right);
    delete temp;
}

int main()
{
    // 创建二叉树
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    // 前序遍历二叉树
    std::cout << "前序遍历结果：";
    preOrderTraversal(root);
    std::cout << std::endl;

    // 释放二叉树内存
    deleteTraversal(root);

    return 0;
}
