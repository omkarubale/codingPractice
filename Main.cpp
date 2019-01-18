/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<iostream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;

unsigned long long equalMultisets(int n, std::vector<unsigned long long> &A, std::vector<unsigned long long> &B )
{
    const unsigned int M = 1000000007;
    unsigned long long result;
    std::unordered_map<unsigned long long, std::vector<int> > checker;
    std::cout<<"really m8\n";
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    
    for(int i = 0; i < n; i++)
    {
        if(checker.find(A[i])==checker.end())
        {
            std::vector<int> temp{1, 0};
            checker[A[i]] = temp;
        }
        else
            checker[A[i]][0]++;
        
        if(checker.find(B[i])==checker.end())
        {
            std::vector<int> temp{0, 1};
            checker[B[i]] = temp;
        }
        else
            checker[A[i]][1]++;
    }
    
    for(int i = 0; i < n; i++)
    {
        if(checker[A[i]][0] > 0  && checker[A[i]][1] > 0)
        {
            int common = std::min(checker[A[i]][0], checker[A[i]][1]);
            checker[A[i]][0] -= 2*common;
            checker[A[i]][1] -= common;
            
            int difference = std::max(checker[A[i]][0], checker[A[i]][1]);
            
            A.erase(A.begin() + i,A.begin() + i + common);
            i += (checker[A[i]][0] > 0) ? checker[A[i]][0]: 0;
        }
    }
    
    for(int i = 0; i < n; i++)
    {
        if(checker[B[i]][0] < 0)
        {
            int common = - checker[B[i]][0];
            checker[B[i]][0] = 0;
            B.erase(B.begin() + i,B.begin() + i + common);
            i += checker[B[i]][1];
        }
        
        unsigned long long t1 = (A[i]-B[i] > 0) ? A[i]-B[i] : B[i]-A[i];
        
        result += t1%M;
    }
    std::cout<<"dddd";
    std::cout<<result;
    
}

int main()
{
    int n;
    std::cin>>n;
    std::cout<<"waa";
    std::vector<unsigned long long> A;
    std::vector<unsigned long long> B;
    for(int i = 0; i < n; i++) std::cin>> A[i];
    for(int i = 0; i < n; i++) std::cin>> B[i];
    
    equalMultisets(n,A,B);
}