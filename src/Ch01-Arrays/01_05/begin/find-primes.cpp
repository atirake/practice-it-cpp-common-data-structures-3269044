#include <iostream>
#include <vector>

using namespace std;

bool isPrime(const int num)
{
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

void findPrimes(const int arr[], size_t size, std::vector<int> &primes)
{
    for (size_t i = 0; i < size; i++) {
        if (isPrime(arr[i])) primes.push_back(arr[i]);
    }
    // TODO: Implement
}

int main()
{
    int numbers[] {4, 12};
    
    size_t size = sizeof(numbers) / sizeof(numbers[0]);
    vector<int> primes;

    findPrimes(numbers, size, primes);

    if (primes.empty())
    {
        cout << "No prime numbers found in the array.";
    }
    else
    {
        cout << "The prime numbers in the array are:";
        for (int prime : primes)
        {
            cout << " " << prime;
        }
        cout << endl;
    }
    return 0;
}
