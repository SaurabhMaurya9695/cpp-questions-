class Solution {
public:
    Node* connect(Node* root) {
        // Node* node = root;
        if(root == NULL)
            return root;
        queue<Node*> q;
        q.push(root);
        while(!q.empty())
        {
            int size = q.size();
            for(int i = 0; i < size; i++)
            {
                Node* node = q.front();
                q.pop();
                if(q.front() && i < size - 1)
                    node->next = q.front();
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
            }
        }
        return root;
    }
};


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     long long n;
//     cin>> n;
//     vector<int> v(n);
//     for(int i = 0 ; i< n ; i++)
//     {
//         cin>> v[i];

//     }
//     sort(v.begin() , v.end());
//     int x = v[n -1] ;
//     int y = v[n- 2];
//     int sum = x + y;
//     cout<< sum << endl;
//     return 0;
// }