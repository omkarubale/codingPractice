void getPrimeFactors(int n, ordered_map<int, int>& m)
{
    while (n % 2 == 0)
    {
        m[2]++;
        n /= 2;
    }
    
    for(int i = 3; i < sqrt(n); i += 2)
    {
        while (n % i == 0)  
        {  
            m[i]++;  
            n = n/i;  
        }
    }
    
    if(n > 2)
        m[n]++;
    
    return;
}