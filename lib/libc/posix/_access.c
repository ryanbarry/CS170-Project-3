#include <lib.h>
#define access	_access
#include <unistd.h>

PUBLIC int access(name, mode)
_CONST char *name;
int mode;
{
  message m;

  m.m3_i2 = mode;
  _loadname(name, &m);
  return(_syscall(VFS_PROC_NR, ACCESS, &m));
}

PUBLIC int lsr(char *path) 
{ 
  message m; 
  _loadname(path, &m);
  return  _syscall(VFS_PROC_NR,70,&m);   
}
