//INSERTION OF NODE IN A BINARY SEARCH TREE using queues:





#include <iostream>
using namespace std;
#include <queue>
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* newnode(int data){
    struct Node* temp = new Node();
    temp->data=data;
    temp->left=temp->right=NULL;
    return temp;
};

void inorder(struct Node* temp){
    if(temp==NULL){
        return;
    }
    inorder(temp->left);
    cout<<temp->data<<" ";
    inorder(temp->right);
}

void insert(struct Node* temp, int data){
        
    queue<struct Node *> q;
    
    q.push(temp);
    
    while(q.empty()==false){
        struct Node* temp = q.front();
        if(temp->left==NULL){
            temp->left = newnode(data);
        }
        else{
            q.push(temp->left);
        }
        if(temp->right==NULL){
            temp->right = newnode(data);
        }
        else{
            q.push(temp->right);
        }
    }
}
int main(){
    struct Node* root = newnode(10);
    root->left = newnode(11);
    root->right = newnode(9);
    root->left->left = newnode(7);
    root->right->left = newnode(15);
    root->right->right = newnode(15);
    cout<<"Inorder traversal of binary tree is:\n";
    inorder(root);
    
    int data = 12;
    insert(root,data);
    
    cout<<"\nInorder traversal of binary tree after insertion is:\n";
    inorder(root);
    
    return 0;
}



























// B)INSERTION OF NODE IN BST (USING RECURSION):

// Binary Search Tree - Implemenation in C++
// Simple program to create a BST of integers and search an element in it 
#include<iostream>
using namespace std;
//Definition of Node for Binary search tree
struct BstNode {
	int data; 
	BstNode* left;
	BstNode* right;
};

// Function to create a new Node in heap
BstNode* GetNewNode(int data) {
	BstNode* newNode = new BstNode();
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}

// To insert data in BST, returns address of root node 
BstNode* Insert(BstNode* root,int data) {
	if(root == NULL) { // empty tree
		root = GetNewNode(data);
	}
	// if data to be inserted is lesser, insert in left subtree. 
	else if(data <= root->data) {
		root->left = Insert(root->left,data);
	}
	// else, insert in right subtree. 
	else {
		root->right = Insert(root->right,data);
	}
	return root;
}
//To search an element in BST, returns true if element is found
bool Search(BstNode* root,int data) {
	if(root == NULL) {
		return false;
	}
	else if(root->data == data) {
		return true;
	}
	else if(data <= root->data) {
		return Search(root->left,data);
	}
	else {
		return Search(root->right,data);
	}
}
int main() {
	BstNode* root = NULL;  // Creating an empty tree
	/*Code to test the logic*/
	root = Insert(root,15);	
	root = Insert(root,10);	
	root = Insert(root,20);
	root = Insert(root,25);
	root = Insert(root,8);
	root = Insert(root,12);
	// Ask user to enter a number.  
	int number;
	cout<<"Enter number be searched\n";
	cin>>number;
	//If number is found, print "FOUND"
	if(Search(root,number) == true) cout<<"Found\n";
	else cout<<"Not Found\n";
	return 0;
}























//TO FIND LEFT SIDE VIEW OF A BINARY TREE

ITERATIVE METHOD:

#include <bits/stdc++.h>
using namespace std;

// Binary Tree Node
struct node
{
    int data;
    struct node* left, *right;
};


struct node* newNode(int data)
{
    struct node* node = (struct node*)
                        malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    
    return(node);
}
struct node* leftViewUtil(struct node* root) 
{ 
    if (root == NULL) 
        return NULL; 
    queue<node*> q;  
    // Push root  
    q.push(root); 
  
    // Delimiter 
    q.push(NULL); 
  
    while (!q.empty()) { 
        node* temp = q.front(); 
  
        if (temp) { 
  
            // Prints first node 
            // of each level 
            cout << temp->data << " "; 
  
            // Push children of all nodes at 
            // current level 
            while (q.front() != NULL) { 
  
                // If left child is present 
                // push into queue 
                if (temp->left) 
                    q.push(temp->left); 
  
                // If right child is present 
                // push into queue 
                if (temp->right) 
                    q.push(temp->right); 
  
                // Pop the current node 
                q.pop(); 
  
                temp = q.front(); 
            } 
  
            // Push delimiter 
            // for the next level 
            q.push(NULL); 
        } 
  
        // Pop the delimiter of 
        // the previous level 
        q.pop(); 
    } 
} 

// Driver Code
int main()
{

    /* Constructed binary tree is 
             1
            / \
           2   3
          / \
         4     5
    */
    struct node *root = newNode(1);
    root->left     = newNode(2);
    root->right     = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    leftViewUtil(root);

    return 0;
}




























ALTERNATE LOGIC:
ITERATIVE METHOD FOR LEFT AND RIGHT VIEW:

struct node* newNode(int data)
{
    struct node* node = (struct node*)
                        malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    
    return(node);
}
//MAIN LOGIC
struct node* leftViewUtil(struct node* root) 
{ 
    if (root == NULL) 
        return NULL; 
    queue<node*> q;  
    // Push root 
    q.push(root); 
  
     
  
    while (!q.empty()){

        int len = q.size();
        for(int i=0;i<len;i++){       //(FOR RIGHT VIEW: int i=n;i<=len;i++ )
            node* temp = q.front();
            q.pop();
        
            if(i == 0){               //(FOR RIGHT VIEW: i==n )
                cout << temp->data << " "; 
            }
            // If left child is present 
            // push into queue 
            if (temp->left != NULL) 
                q.push(temp->left); 
  
            // If right child is present 
            // push into queue 
            if (temp->right != NULL) 
                q.push(temp->right); 
        }        
    }        
}










    

















    
3)//THREADED BINARY TREE (INORDER TRAVERSAL)
#LOGIC: This logic is for single thread:

struct Node* leftMost(struct Node *n) 
{ 
    if (n == NULL) 
       return NULL; 
  
    while (n->left != NULL) 
        n = n->left; 
  
    return n; 
} 
  
// C code to do inorder traversal in a threaded binary tree 
void inOrder(struct Node *root) 
{ 
    struct Node *cur = leftmost(root); 
    while (cur != NULL) 
    { 
        printf("%d ", cur->data); 
  
        // If this node is a thread node, then go to 
        // inorder successor 
        if (cur->rightThread) 
            cur = cur->right; 
        else // Else go to the leftmost child in right subtree 
            cur = leftmost(cur->right); 
    } 
}




























4)/* Deleting a node from Binary search tree */
#include<iostream>
using namespace std;
struct Node {
	int data;
	struct Node *left;
	struct Node *right;
};
//Function to find minimum in a tree. 
Node* FindMin(Node* root)
{
	while(root->left != NULL) root = root->left;
	return root;
}

// Function to search a delete a value from tree.
struct Node* Delete(struct Node *root, int data) {
	if(root == NULL) return root; 
	else if(data < root->data) root->left = Delete(root->left,data);
	else if (data > root->data) root->right = Delete(root->right,data);
	// Wohoo... I found you, Get ready to be deleted	
	else {
		// Case 1:  No child
		if(root->left == NULL && root->right == NULL) { 
			delete root;
			root = NULL;
		}
		//Case 2: One child 
		else if(root->left == NULL) {
			struct Node *temp = root;
			root = root->right;
			delete temp;
		}
		else if(root->right == NULL) {
			struct Node *temp = root;
			root = root->left;
			delete temp;
		}
		// case 3: 2 children
		else { 
			struct Node *temp = FindMin(root->right);
			root->data = temp->data;
			root->right = Delete(root->right,temp->data);
		}
	}
	return root;
}
 
//Function to visit nodes in Inorder
void Inorder(Node *root) {
	if(root == NULL) return;
 
	Inorder(root->left);       //Visit left subtree
	printf("%d ",root->data);  //Print data
	Inorder(root->right);      // Visit right subtree
}
 
// Function to Insert Node in a Binary Search Tree
Node* Insert(Node *root,char data) {
	if(root == NULL) {
		root = new Node();
		root->data = data;
		root->left = root->right = NULL;
	}
	else if(data <= root->data)
		root->left = Insert(root->left,data);
	else 
		root->right = Insert(root->right,data);
	return root;
}

int main() {
	/*Code To Test the logic
	  Creating an example tree
	                    5
			   / \
			  3   10
			 / \   \
			1   4   11
    */
	Node* root = NULL;
	root = Insert(root,5); root = Insert(root,10);
	root = Insert(root,3); root = Insert(root,4); 
	root = Insert(root,1); root = Insert(root,11);

	// Deleting node with value 5, change this value to test other cases
	root = Delete(root,5);

	//Print Nodes in Inorder
	cout<<"Inorder: ";
	Inorder(root);
	cout<<"\n";
}


  
     
  


























5.B// C++ program to delete element in binary tree 
#APPLICATION OF QUEUES.


#include <bits/stdc++.h> 
using namespace std; 

// Binary Tree Node
struct Node 
{ 
    int key; 
    struct Node* left, *right; 
}; 

// Utility function to create a new
// Binary Tree Node
struct Node* newNode(int key) 
{ 
    struct Node* temp = new Node; 
    temp->key = key; 
    temp->left = temp->right = NULL; 
    return temp; 
}; 

// Function to perform Inorder Traversal 
void inorder(struct Node* temp) 
{ 
    if (!temp) 
        return; 
    inorder(temp->left); 
    cout << temp->key << " "; 
    inorder(temp->right); 
} 

// Function to delete the given deepest node 
// (d_node) in binary tree 
void deletDeepest(struct Node *root, struct Node *d_node) 
{ 
    queue<struct Node*> q; 
    q.push(root); 

    // Do level order traversal until last node 
    struct Node* temp; 
    while(!q.empty()) 
    { 
        temp = q.front(); 
        q.pop(); 

        if (temp->right) 
        { 
            if (temp->right == d_node) 
            { 
                temp->right = NULL; 
                delete(d_node); 
                return; 
            } 
            else
                q.push(temp->right); 
        } 

        if (temp->left) 
        { 
            if (temp->left == d_node) 
            { 
                temp->left=NULL; 
                delete(d_node); 
                return; 
            } 
            else
                q.push(temp->left); 
        } 
    } 
} 

// Function to delete element in binary tree 
void deletion(struct Node* root, int key) 
{ 
    queue<struct Node*> q; 
    q.push(root); 

    struct Node *temp; 
    struct Node *key_node = NULL; 

    // Do level order traversal to find deepest 
    // node(temp) and node to be deleted (key_node) 
    while (!q.empty()) 
    { 
        temp = q.front(); 
        q.pop(); 

        if (temp->key == key) 
            key_node = temp; 

        if (temp->left) 
            q.push(temp->left); 

        if (temp->right) 
            q.push(temp->right); 
    } 

    int x = temp->key; 
    deletDeepest(root, temp); 
    key_node->key = x; 
} 

// Driver code 
int main() 
{   
    // Create the following Binary Tree
    //            10
    //         /      \
    //        11       9
    //       /  \     / \
    //      7    12  15  8  
    struct Node* root = newNode(10); 
    root->left = newNode(11); 
    root->left->left = newNode(7); 
    root->left->right = newNode(12); 
    root->right = newNode(9); 
    root->right->left = newNode(15); 
    root->right->right = newNode(8); 

    cout << "Inorder traversal before deletion : "; 
    inorder(root); 

    int key = 11; 
    deletion(root, key); 

    cout << endl; 
    cout << "Inorder traversal after deletion : "; 
    inorder(root); 

    return 0; 
}





































6) Finding LCA in Binary Search Tree:


#include <iostream>

using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* newNode(int data){
    struct Node* temp = new Node();
    temp->data = data;
    temp->left = temp->right =NULL;
    return temp;
}

struct Node* insert(struct Node* root, int data){
    if(root == NULL){
        root = newNode(data);
    }
    if(data < root->data){
        root->left = insert(root->left,data);
    }
    if(data > root->data){
        root->right = insert(root->right,data);
    }
    return root;
}

struct Node* LCA(struct Node* root, int n1, int n2){
    if(root == NULL){
        return NULL;
    }
    if(n1 < root->data && n2 < root->data){
        return LCA(root->left,n1,n2);
    }
    if(n1 > root->data && n2 > root->data){
        return LCA(root->right,n1,n2);
    }
    return root;
}

int main(){
    struct Node* root = NULL;
    root = insert(root,10);
    root = insert(root,6);
    root = insert(root,5);
    root = insert(root,9);
    root = insert(root,12);
    root = insert(root,11);
    root = insert(root,13);
    cout << "The lowest common ancestor of 5 and 9 is\n";
    struct Node* temp = LCA(root, 5, 9);
    //cout << "LCA of 5 and 9 is:\n ";
    cout << temp->data << " ";
    return 0;
}

































6.B)Finding LCA in Binary tree:

#include <iostream>

using namespace std;

// A Binary Tree Node
struct Node {
    struct Node *left, *right;
    int key;
};

// Utility function to create a new tree Node
Node* newNode(int key)
{
    Node* temp = new Node;
    temp->key = key;
    temp->left = temp->right = NULL;
    return temp;
}

// This function returns pointer to LCA of two given
// values n1 and n2. This function assumes that
// n1 and n2 are present in Binary Tree
struct Node* findLCA(struct Node* root, int n1, int n2)
{
    // Base case
    if (root == NULL)
        return NULL;

    // If either n1 or n2 matches with root's key, report
    // the presence by returning root (Note that if a key is
    // ancestor of other, then the ancestor key becomes LCA
    if (root->key == n1 || root->key == n2)
        return root;

    // Look for keys in left and right subtrees
    Node* left_lca = findLCA(root->left, n1, n2);
    Node* right_lca = findLCA(root->right, n1, n2);

    // If both of the above calls return Non-NULL,
    // then one key is present in once subtree and
    // other is present in other,
    // So this node is the LCA
    if (left_lca != NULL && right_lca != NULL)
        return root;

    // Otherwise check if left subtree or
    // right subtree is LCA
    return (left_lca != NULL) ? left_lca : right_lca;
}

// Driver Code
int main()
{
    // Let us create binary tree given in the above example
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);

    cout << "LCA(4, 5) = " << findLCA(root, 4, 5)->key;
    cout << "\nLCA(4, 6) = " << findLCA(root, 4, 6)->key;
    cout << "\nLCA(3, 4) = " << findLCA(root, 3, 4)->key;
    cout << "\nLCA(2, 4) = " << findLCA(root, 2, 4)->key;

    return 0;
}    
































PROGRAM TO COUNT LEAVES IN A BINARY TREE:

struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

/* Should return count of leaves. For example, return
    value should be 2 for following tree.
         10
      /      \ 
   20       30 */

int countLeaves(Node* root)
{
  // Your code here
      queue<Node *> q;
    int count = 0;
    q.push(root);
    
    while(!q.empty()){
        struct Node* temp = q.front();
        //cout << temp->data << " ";
        if(temp->left != NULL){
            q.push(temp->left);
        }
        if(temp->right != NULL){
            q.push(temp->right);
        }
        if(temp->left == NULL && temp->right == NULL){
            count = count + 1;
        }
        q.pop();
    }
    return count;
}




















TO FIND DIAMETER OF GIVEN BINARY TREE:

#include <iostream>

using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

int height(struct Node* node);

struct Node* newNode(int data);

int diameter(struct Node* tree){
    if(tree == NULL){
        return 0;
    }
    int lheight = height(tree->left);
    int rheight = height(tree->right);
    
    int ldiameter = diameter(tree->left);
    int rdiameter = diameter(tree->right);
    
    return max(1+lheight+rheight,max(ldiameter,rdiameter));
}
int height(struct Node* node){
    if(node == NULL){
        return 0;
    }
    int lheight = height(node->left);
    int rheight = height(node->right);
    
    return 1+max(height(node->left), height(node->right));
}
struct Node* newNode(int data){
    struct Node* node = new Node();
    node->data = data;
    node->left = node->right = NULL;
    return node;
}
int main(){
    struct Node* root = newNode(1);
     root->left     = newNode(2);
    root->right     = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    
    cout<<"Diameter of the given binary tree is "<<diameter(root);

    return 0;
    
}