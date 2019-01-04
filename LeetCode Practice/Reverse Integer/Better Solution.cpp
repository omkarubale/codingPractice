    int reverse(int x) {
        string sx(to_string(x));
        if(sx[0] == '-')
            std::reverse(sx.begin()+1, sx.end());
        else
            std::reverse(sx.begin(), sx.end());
        long long lres = stoll(sx);
        if(lres > numeric_limits<int>::max() or lres < numeric_limits<int>::min())
            return 0;
        else
            return lres;
    }