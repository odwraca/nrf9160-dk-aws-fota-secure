/* auto-generated by gen_syscalls.py, don't edit */
#if __GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 6)
#pragma GCC diagnostic push
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif
#include <syscalls/counter.h>

extern u64_t z_vrfy_counter_ticks_to_us(const struct device * dev, u32_t ticks);
uintptr_t z_mrsh_counter_ticks_to_us(uintptr_t arg0, uintptr_t arg1, uintptr_t arg2,
		uintptr_t arg3, uintptr_t arg4, uintptr_t arg5, void *ssf)
{
	_current_cpu->syscall_frame = ssf;
	(void) arg3;	/* unused */
	(void) arg4;	/* unused */
	(void) arg5;	/* unused */
	u64_t ret = z_vrfy_counter_ticks_to_us(*(const struct device **)&arg0, *(u32_t*)&arg1)
;
	Z_OOPS(Z_SYSCALL_MEMORY_WRITE(((u64_t *)arg2), 8));
	*((u64_t *)arg2) = ret;
	return 0;
}

#if __GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 6)
#pragma GCC diagnostic pop
#endif
