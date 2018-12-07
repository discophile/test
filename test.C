#include "cc/hdr/def.h"
Test:test()
{
    print("create test\n");
}
Test:print()
{
    print("this is test\n");
}
void main()
{
    Test Ins = new test();
    Ins.print("this is main\n");
    return;
}
