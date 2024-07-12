#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Codec {
public:
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        ostringstream out;
        serializeHelper(root, out);
        return out.str();
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        istringstream in(data);
        return deserializeHelper(in);
    }

private:
    void serializeHelper(TreeNode* root, ostringstream &out) {
        if (!root) {
            out << "null ";
            return;
        }
        out << root->val << " ";
        serializeHelper(root->left, out);
        serializeHelper(root->right, out);
    }

    TreeNode* deserializeHelper(istringstream &in) {
        string val;
        in >> val;
        if (val == "null") {
            return nullptr;
        }
        TreeNode* root = new TreeNode(stoi(val));
        root->left = deserializeHelper(in);
        root->right = deserializeHelper(in);
        return root;
    }
};

// Helper function to print the tree (in-order traversal)
void printTree(TreeNode* root) {
    if (!root) return;
    printTree(root->left);
    cout << root->val << " ";
    printTree(root->right);
}

int main() {
    Codec codec; 
    // Construct a sample binary tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(5);

    // Serialize the binary tree
    string serializedData = codec.serialize(root);
    cout << "Serialized Tree: " << serializedData << endl;

    // Deserialize the binary tree
    TreeNode* deserializedTree = codec.deserialize(serializedData);

    // Print the deserialized tree (in-order traversal)
    cout << "Deserialized Tree (In-Order Traversal): ";
    printTree(deserializedTree);
    cout << endl;

    return 0;
}
