#include <iostream>
#include <unordered_map>

using namespace std;

unordered_map<int, u_long> memo;

unsigned long int fib(int n)
{
    if (memo.find(n) != memo.end())
    {
        return memo[n];
    }
    if (n <= 2)
    {
        return 1;
    }
    memo[n] = fib(n - 1) + fib(n - 2);
    return memo[n];
}

int main()
{
    cout << fib(60);
}