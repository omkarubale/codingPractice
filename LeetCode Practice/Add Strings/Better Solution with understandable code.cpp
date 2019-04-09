string addStrings(string num1, string num2)
{
    int i = num1.size() - 1, j = num2.size() - 1, carry = 0;
    if (i < j)
        return addStrings(num2, num1);
    for (; (j >= 0 || carry) && i >= 0; carry /= 10)
    {
        if (j >= 0)
            carry += num2[j--] - '0';
        carry += num1[i] - '0';
        num1[i--] = carry % 10 + '0';
    }
    if (carry)
        return '1' + num1;
    return num1;
}