//Basics of Linked list

//Implementation of Linked list in c++

//Basics of Linked list 

//Implementation of Linked list in c++

// Insertion of new node in linked list:


struct Node                 // Defining structure of new node.
{
	int x;
	Node* next;
};

struct Node* head = NULL;   // Declaring head as global variable

void insert(int x)          // Insert function
 
// Node* insert(Node* head, int x){   //If head is not declared globally
	
//}	
{
	struct Node* temp = new Node();  // new node is created.
	
    temp -> x = x;                  //Temp pointer is used to access struct of new node
	
 //Logic for insertion	
	temp -> next = head;
	head = temp;
}
void print()
{
	struct Node* temp = head;
	while(temp != NULL){
	    cout << temp -> x << " ";
		temp = temp -> next;
	}
	cout << endl;	
}	
int main()
{
	head = NULL;
	cout << "How many numbers you want to insert?" << endl;
	
	int n,x;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cout << "Enter the numbers " << endl;
		cin >> x;
		insert(x);
		print();
	}
	return 0;
}
	
================================================================================================	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	