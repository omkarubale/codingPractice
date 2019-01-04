for(i = 0; i< s.length(); i++)
        {
            found = current.find(s[i]);
            if()
            {
                current += s[i];
                count++;
            }
            else
            {
                current = "";
                if(count>max)
                    max = count;
                count = 0;
            }
        }