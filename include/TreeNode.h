#ifndef BINARYSEARCHTREE_TREENODE_H_
#define BINARYSEARCHTREEE_TREENODE_H_

// Include files.
#include <iostream>

/**
 * @brief Binary Search Tree Node.
 */
class TreeNode {

public:
	/**
	 * @brief Left TreeNode.
	 */
	TreeNode *leftNode;

	/**
	 * @brief Right TreeNode.
	 */
	TreeNode *rightNode;

	/**
	 * @brief Data of TreeNode. For the sake of simplicity, we will only use unsigned integers.
	 */
	unsigned int data;

	/**
	 * @brief General constructor.
	 */
	TreeNode();

	/**
	 * @brief Parameterized constructor.
	 *
	 * @param dataValue Value of current node (unsigned int).
	 */
	TreeNode(unsigned int dataValue);

	/**
	 * @brief Parameterized constructor.
	 *
	 * @param dataValue Value of currentNode (unsigned int).
	 * @param leftNode Left Node of root.
	 * @param rightNode Right Node of root.
	 */
	TreeNode(unsigned int dataValue, TreeNode* leftNode, TreeNode* rightNode);

	/**
	 * @brief Insert value into TreeNode.
	 *
	 * @param value Value to be inserted (unsigned int).
	 */
	TreeNode* insert(TreeNode* root, unsigned int value);

};

#endif // BINARYSEARCHTREE_TREENODE_H_
