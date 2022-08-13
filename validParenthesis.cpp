class Stack
{

public:
    char *data;
    int lastIndex;
    int size;
    Stack(int n)
    {
        lastIndex = 0;
        size = n;
        data = new char[n];
    }
    void print()
    {
        cout << endl;
        for (int i = lastIndex - 1; i >= 0; i--)
        {
            cout << data[i] << " ";
        }
        cout << endl;
    }
    char top()
    {
        if (lastIndex == -1)
            return 'a';
        return data[lastIndex - 1];
    }

    bool validate(char info)
    {
        // cout<<info<<"-";
        if (top() == '[' && info == ']')
        {
            pop();
            return true;
        }
        else if (top() == '(' && info == ')')
        {

            pop();
            return true;
        }
        else if (top() == '{' && info == '}')
        {
            pop();
            return true;
        }
        else if (top() == 'a')
            return false;
    }
    void push(char info)
    {
        if (lastIndex == size)
        {
            return;
        }
        else
        {

            data[lastIndex++] = info;
        }
    }

    void pop()
    {
        char a = data[lastIndex - 1];

        lastIndex--;
    }
    bool isempty()
    {
        if (lastIndex - 1 == -1)
            return true;
        else
            return false;
    }
};
bool isValid(string s)
{

    int n = s.length();
    Stack s1(n);
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '[' || s[i] == '(' || s[i] == '{')
            s1.push(s[i]);
        else if (s[i] == ']' || s[i] == ')' || s[i] == '}')
        {
            if (s1.validate(s[i]) == true)
            {
            }
            else
            {
                return false;
            }
        }
    }
    return s1.isempty();
}