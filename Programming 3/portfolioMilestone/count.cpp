#include <iostream>
#include <thread>
#include <mutex>

using namespace std;
mutex output_mutex;

void countUp()
{
    for(int i = 0; i < 21; i++)
    {
        output_mutex.lock();
        std:: cout << "Number: " << i << endl;
        output_mutex.unlock();
    }
    std:: cout << endl;
    
}

void countDown()
{
    for(int i = 20; i > -1; i--)
    {
        output_mutex.lock();
        std:: cout << "Number: " << i << endl;
        output_mutex.unlock();
    }
    std:: cout << endl;
}

int main()
{
    std:: thread threadUp(countUp);
    std:: thread threadDown(countDown);

    threadUp.join();


    if(threadUp.joinable() == false)
    {
        threadDown.join();
    }

    std:: cout << "Done counting.\n";

    return 0;
}