#ifndef IPRECORD_H
#define IPRECORD_H

#include <string>

class IPrecord
{
    public:
        IPrecord(int connectionCount, std::string sourceIP, std::string destinationIP, int port);
        virtual ~IPrecord();

    protected:

    private:
};

#endif // IPRECORD_H
