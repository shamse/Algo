#include <iostream>
#include <set>
#include <vector>
#include <chrono>

void prime(std::set<int>& p, int n)
{
    // returns prime numbers in [2:n]

    if (n < 2)
        return;
    else
        p.insert(2);

    for (int i = 2; i <= n; i++)
    {
        bool isprime = true;

        // printf("i = %i\n",i);
        // loop over the prime numbers
        for (auto& pr : p)
        {
            if (pr > i/2)
                break;
            
            // printf("\t %i, %i, %i: \n",i,pr,i%pr);
            if (i%pr == 0) 
            {
                isprime = false;
                break;
            }
        }
        if (isprime)
        {
            // std::cout << i << std::endl;
            p.insert(i);
        }
    }
    // std::cout << "total : " << p.size() << std::endl;
}

void sieve_of_erathostens(std::vector<int>& primes, int n)
{
    if (n < 2)
        return;
    
    std::vector<bool> seive(n,1);  // fill with ones
    seive[0] = 0;

    int p = 2;

    // populate seive
    while (p*p < n)
    {
        for (int i = 2*p; i <= n; i+=p)
        {
            seive[i-1] = 0;
        }
        while(!seive[++p-1]){}
    }

    for (int i = 1; i <= n; i++)
    {
        if (seive[i-1])
            primes.push_back(i);
    }
    

}

int main()
{
    std::set<int> p {};

    auto startTime = std::chrono::steady_clock::now();

    prime(p, 100000);
    // for(auto& pr : p)
    //     std::cout << pr << std::endl;

    auto endTime = std::chrono::steady_clock::now();

    auto elapsedTime = std::chrono::duration_cast<std::chrono::milliseconds>(endTime-startTime);

    std::cout << "prime algorithm elapsed time : " << elapsedTime.count() << " [ms]\n";


    // try Seive of Erathosten
    std::vector<int> primes;

    startTime = std::chrono::steady_clock::now();

    sieve_of_erathostens(primes, 100000);

    endTime = std::chrono::steady_clock::now();

    elapsedTime = std::chrono::duration_cast<std::chrono::milliseconds>(endTime-startTime);

    std::cout << "Seive of Erathosten's elapsed time : " << elapsedTime.count() << " [ms]\n";



    // for (auto& pr : primes)
    //     std::cout << pr << std::endl;

    std::cout << p.size() << " " << primes.size() << std::endl;
}