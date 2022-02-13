var removeDuplicates = function(s)
{
    let str = s.split('');
    let res = helper(str, str.length - 1);
    res = res.join('');
    return res;
};

function helper(s, i)
{
    if (i == 0 || s.length == 0)
        return s;
    if (s[i] == s[i - 1])
    {
        let prev = i - 1;
        s.splice(prev, 2);
        if (i > s.length)
        {
            i = s.length - 1;
        }
        else
        {
            i--;
        }
    }
    else
    {
        i--;
    }
    return helper(s, i);
}
