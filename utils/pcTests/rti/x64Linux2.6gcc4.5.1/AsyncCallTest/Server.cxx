/** 
 * Generated by RPCDDS   *
 * Simplest server main  *
 */

#include "AsyncCallTestServer.h"
#include "strategies/ThreadPoolStrategy.h"

int main(int argc, char **argv)
{
    int returnedValue = 0;
    unsigned int threadPoolSize = 5;
    eProsima::RPCDDS::ThreadPoolStrategy *pool = new eProsima::RPCDDS::ThreadPoolStrategy(threadPoolSize);
    AsyncCallTestServer *server = new AsyncCallTestServer("AsyncCallTestService", pool);
    server->serve();
    
    while(1)
    {
        sleep(10000);
    }

    delete server;
    delete pool;
    
    return 0;
}
