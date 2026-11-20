#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>
#include <unistd.h>

int	ft_printf(const char *f, ...);

static void	test_basic_and_edge(void)
{
	int		r_ft;
	int		r_std;
	char	*null_str;
	void	*null_ptr;
	int		x;

	null_str = NULL;
	null_ptr = NULL;
	x = 42;
	printf("=== BASIC & EDGE CASES ===\n");
	r_std = printf("STD c: [%c] s: [%s] d: [%d] i: [%i]\n", 'A', "hello", -42, 42);
	r_ft = ft_printf("FT  c: [%c] s: [%s] d: [%d] i: [%i]\n", 'A', "hello", -42, 42);
	printf("ret std=%d | ft=%d\n\n", r_std, r_ft);
	r_std = printf("STD u: [%u] x: [%x] X: [%X] p: [%p] %%\n", 3000000000u, 255, 255, &x);
	r_ft = ft_printf("FT  u: [%u] x: [%x] X: [%X] p: [%p] %%\n", 3000000000u, 255, 255, &x);
	printf("ret std=%d | ft=%d\n\n", r_std, r_ft);
	r_std = printf("STD INT_MIN=[%d] INT_MAX=[%d] zero=[%d]\n", INT_MIN, INT_MAX, 0);
	r_ft = ft_printf("FT  INT_MIN=[%d] INT_MAX=[%d] zero=[%d]\n", INT_MIN, INT_MAX, 0);
	printf("ret std=%d | ft=%d\n\n", r_std, r_ft);
	r_std = printf("STD null_str=[%s] null_ptr=[%p]\n", null_str, null_ptr);
	r_ft = ft_printf("FT  null_str=[%s] null_ptr=[%p]\n", null_str, null_ptr);
	printf("ret std=%d | ft=%d\n\n", r_std, r_ft);
	r_ft = ft_printf("FT invalid spec: [%k] [%%z]\n", 1);
	printf("ret ft invalid spec=%d\n\n", r_ft);
	r_ft = ft_printf("FT trailing percent: abc%");
	printf("ret ft trailing percent=%d\n\n", r_ft);
	r_ft = ft_printf(NULL);
	printf("ret ft(NULL)=%d\n\n", r_ft);
}

static void	test_write_failure(void)
{
	int	saved_stdout;
	int	ret;

	printf("=== WRITE FAILURE TEST ===\n");
	fflush(stdout);
	saved_stdout = dup(STDOUT_FILENO);
	if (saved_stdout == -1)
	{
		perror("dup");
		return ;
	}
	close(STDOUT_FILENO);
	ret = ft_printf("Hello %s %d %p %x\n", "world", 123, &ret, 255);
	dup2(saved_stdout, STDOUT_FILENO);
	close(saved_stdout);
	printf("ft_printf with closed stdout returned: %d (expected -1)\n", ret);
}

int	main(void)
{
	test_basic_and_edge();
	test_write_failure();
	return (0);
}