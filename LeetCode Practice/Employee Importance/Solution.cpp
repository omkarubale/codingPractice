/*
// Employee info
class Employee {
public:
    // It's the unique ID of each node.
    // unique id of this employee
    int id;
    // the importance value of this employee
    int importance;
    // the id of direct subordinates
    vector<int> subordinates;
};
*/
class Solution {
public: 
    Employee* findEmployee(vector<Employee*> &employees, int id){
        for(Employee* e : employees)
            if(e->id == id) return e;
        return NULL;
    }
        int getImportance(vector<Employee*> employees, int id) {
        if(employees.size() == 0) return 0;
        stack<int> s;
        int totalImportance = 0;
        
        s.push(id);
        
        while(!s.empty())
        {
            Employee* currentEmployee = findEmployee(employees, s.top());
            s.pop();
            totalImportance += currentEmployee->importance;
            for(int e : currentEmployee->subordinates)
                s.push(e);
        }
        
        return totalImportance;
    }
};