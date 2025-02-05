#ifndef __USER_LIBS_SYSCALL_H__
#define __USER_LIBS_SYSCALL_H__

int sys_exit(int error_code);
int sys_fork(void);
int sys_wait(int pid, int *store);
int sys_execve(const char *name, const char **argv, const char **envp);
int sys_yield(void);
int sys_kill(int pid);
int sys_getpid(void);
int sys_pgdir(void);
int sys_sleep(unsigned int time);
int sys_gettime(void);

struct stat;
struct dirent;

int sys_open(const char *path, uint32_t open_flags);
int sys_close(int fd);
int sys_read(int fd, void *base, size_t len);
int sys_write(int fd, void *base, size_t len);
int sys_seek(int fd, off_t pos, int whence);
int sys_fstat(int fd, struct stat *stat);
int sys_fsync(int fd);
int sys_getcwd(char *buffer, size_t len);
int sys_getdirentry(int fd, struct dirent *dirent);
int sys_dup(int fd1, int fd2);
void sys_set_priority(uint32_t priority); //only for lab6
void *sys_mmap(void *addr, size_t len, int prot, int flags, int fd, size_t offset);
int sys_munmap(void *addr, size_t len);

#endif /* !__USER_LIBS_SYSCALL_H__ */

