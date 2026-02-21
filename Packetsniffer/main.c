#include <stdio.h>
enum protocol { 
    tcp, udp, icmp, 
};
struct Header
{
  char version;
  enum protocol proto;
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


int createip()
{
    
}