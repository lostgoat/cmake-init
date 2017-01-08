#include <stdio>
#include <myproject/config.h>

// Cpp-check sample from http://cppcheck.sourceforge.net/demo/
void f1(struct fred_t *p)
{
    // dereference p and then check if it's NULL
    int x = p->x;
    if (p)
        do_something(x);
}

int main()
{
	printf("Hello world %d.%d\n", MyProject_VERSION_MAJOR, MyProject_VERSION_MINOR);
	return 0;
}
