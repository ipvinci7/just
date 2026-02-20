#include <stdio.h>
enum protocol { 
    tcp, udp, icmp, 
};
struct Header
{
  char version;
  protocol
};
struct packet
{
    struct Header;
    struct payload;
    struct trailer;
};
int main()
{

}