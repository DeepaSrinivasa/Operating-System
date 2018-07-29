#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"
#include "procinfo.h"

int
main(int argc, char *argv[])
{
	struct procinfo *p;
	p = (struct procinfo*)malloc(sizeof(struct procinfo*)*64);
	getprocinfo(p);
	exit();
}
