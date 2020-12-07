void printQueue(queue<Node*> q, string queueName)
{
    Node* current;
    cout<<"Printing Queue:"<<queueName<<"\n";
    while(!q.empty())
    {
        current = q.front();
        cout<<"Node Element: "<<current->val<<"\n";
        q.pop();
    }
    
    cout<<"\n\n";
    
    return;
}