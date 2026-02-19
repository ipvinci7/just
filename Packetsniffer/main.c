#include <stdio.h>
struct Header
{
  char version;
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