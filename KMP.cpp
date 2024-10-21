vector<int> kmp(string a)
{
    int n = a.size();
    vector<int> lps(n);
    int j = 0;
    int i = 1;
    while (i < n)
    {
        if (a[i] == a[j])
        {
            j++;
            lps[i] = j;
            i++;
        }
        else
        {
            if (j != 0)
            {
                j = lps[j - 1]; // best example for this line abcabd >> abcabcabd
                                //                                 ^         ^
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
    return lps;
}
