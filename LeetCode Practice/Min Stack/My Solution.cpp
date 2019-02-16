class MinStack {
public:
    /** initialize your data structure here. */
    unsigned long long topElement;
    vector<int> elements;
    
    
    MinStack() {
        topElement = 0;
    }
    
    void push(int x) {
        elements.emplace_back(x);
        topElement++;
    }
    
    void pop() {
        
        if(topElement != 0)
        {
            int poppedElement = elements[elements.size()-1];
            elements.resize(elements.size()-1);
            topElement--;
        }
        else
            printf("Stack Empty.\n");
        
    }
    
    int top() {
        return elements[elements.end()-elements.begin()-1];
    }
    
    int getMin() {
        int min = INT_MAX;
        for(auto i = elements.begin(); i != elements.end(); i++)
        {
            if(min > (*i))
                min = (*i);
        }
        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */