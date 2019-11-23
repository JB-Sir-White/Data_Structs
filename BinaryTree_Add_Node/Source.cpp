/* ================ Insertion of a key  :

  The following is definition of Binary Search Tree(BST) according to Wikipedia

  Binary Search Tree, is a node-based binary tree data structure which has the following properties:

  The left subtree of a node contains only nodes with keys lesser than the node’s key.
  The right subtree of a node contains only nodes with keys greater than the node’s key.
  The left and right subtree each must also be a binary search tree.
  There must be no duplicate nodes
  
   :Root:
	 8
   /   \
  3     10
 / \      \
1    6     14
    / \    /
   4   7  13

   The above properties of Binary Search Tree provide an ordering among keys
   so that the operations like search, minimum and maximum can be done fast. If
   there is no ordering, then we may have to compare every key to search a given key.

   To search a given key in Binary Search Tree, we first compare it with root,
   if the key is present at root, we return root. If key is greater than root’s
   key, we recur for right subtree of root node. Otherwise we recur for left subtree.

   struct node* search(struct node* root, int key)
   {
   // Base Cases: root is null or key is present at root
   if (root == NULL || root->key == key)
   return root;

   // Key is greater than root's key
   if (root->key < key)
   return search(root->right, key);

   // Key is smaller than root's key
   return search(root->left, key);
   }

   Illustration to search 6 in below tree:
   1. Start from root.
   2. Compare the inserting element with root, if less than root, then recurse
	   for left, else recurse for right.
   3. If element to search is found anywhere, return true, else return false.



  A new key is always inserted at leaf.We start searching a key from root till
   we hit a leaf node.Once a leaf node is found, the new node is added as a child
   of the leaf node.
	100                                 100
   /   \        Insert 40             /     \
   20  500       --------->          20     500
   /  \                              /  \
   10   30                         10   30
										 \
										  40

   This c++ program demonstrate insert operation in binary search tree
 ============================================================================================= */
#include <iostream> 
using namespace std;

// Creating node
struct node
{
	int key;
	struct node* left, * right;
};

// A utility function to create a new BST node 
struct node* newNode(int item)
{
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->key = item;
	temp->left = temp->right = NULL;
	return temp;
}

// A utility function to do inorder traversal of Binary Search Tree 
void inorder(struct node* root)
{
	if (root != NULL)
	{
		inorder(root->left);
		cout << "\n" << root->key;
		inorder(root->right);
	}
}

/* A utility function to insert a new node with given key in BST */
struct node* insert(struct node* node, int key)
{
	/* If the tree is empty, return a new node */
	if (node == NULL) return newNode(key);

	/* Otherwise, recur down the tree */
	if (key < node->key)
		node->left = insert(node->left, key);
	else if (key > node->key)
		node->right = insert(node->right, key);

	/* return the (unchanged) node pointer */
	return node;
}

// Driver Program to test above functions 
void main()
{
	/* Let us create following Binary trees
	    50
	   /  \
	  30   70
	 / \   / \
   20  40 60  80
				\
				 100 */
	struct node* root = NULL;
	root = insert(root, 50);
	insert(root, 30);
	insert(root, 20);
	insert(root, 40);
	insert(root, 70);
	insert(root, 60);
	insert(root, 80);
	insert(root, 100);

	// print inoder traversal of the Binary trees 
	cout << "The traversal of the Binary Trees inoder: " << endl;
	inorder(root);
	cout << "\n\n";
	system("pause");
}