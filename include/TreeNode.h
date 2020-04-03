#ifndef BINARYSEARCHTREE_TREENODE_H_
#define BINARYSEARCHTREEE_TREENODE_H_

/**
 * @brief Binary Search Tree Node.
 */
class TreeNode {

public:
	/**
	 * @brief Left TreeNode.
	 */
	TreeNode *leftTree;

	/**
	 * @brief Right TreeNode.
	 */
	TreeNode *rightTree;

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
	 */
	TreeNode(int dataValue);

	/**
	 * @brief Insert value into TreeNode.
	 *
	 * @param value Value to be inserted.
	 */
	void insert(int value);

};

#endif // BINARYSEARCHTREE_TREENODE_H_
