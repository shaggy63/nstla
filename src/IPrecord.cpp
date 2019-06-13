#include "IPrecord.h"
#include "IPv4.h"

int connectionCount;
IPv4 sourceIP();
IPv4 destinationIP();
int port;


IPrecord::IPrecord(int connectionCount, std::string sourceIP, std::string destinationIP, int port)
{
    //ctor
}

IPrecord::~IPrecord()
{
    //dtor
}
