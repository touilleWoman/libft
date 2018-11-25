#include "libft.h"


#include <stdio.h>


static int		tell_num_of_str(char const *s, char c)
{
	int		i;
	int		num_str;	

	i = 0;
	num_str = 0;
	while (s[i] != 0)
	{
		if ((s[i] != c) && (s[i] != 0))
		{
			while ((s[i] != c) && (s[i] != 0))
			{
				i++;
			}
			num_str++;
			i--;
		}
		i++;
	}
	return (num_str);
}


static int		start(char const *s, char c,	int	index)
{
	while (s[index] != 0)
	{
		if (s[index] != c)
		{
			return (index);
		}
		index++;
	}
	return (0);
}


static int		sub_str_len(char const *s, char c, int start_point)
{
		int 	len;

		len = 0;
		while ((s[start_point] != c) && s[start_point] != '\0')
		{
			len++;
			start_point++;
		}
		return len;
}


char	**ft_strsplit(char const *s, char c)
{
#if 0
	s = 0;
	c = 3;
	char **pptr = (char**)malloc(sizeof(char*) * 1);
	pptr[0] = NULL;
	return pptr;
#else
	char	**pptr;
	int		num_str;
	int		y;
	int		len;
	int		start_point;
	int		x;

	if (!s)
	{
		return (0);
	}
	num_str = tell_num_of_str(s, c);
	pptr = (char**)malloc(sizeof(char*) * (num_str + 1));
	if (pptr == 0)
	{
		return (0);
	}
	y = 0;
	start_point = 0;	
	while (y < num_str)
	{
		start_point = start (s, c, start_point);
		len = sub_str_len(s, c, start_point);
		pptr[y] = (char*)malloc(sizeof(char) * (len + 1));
		while (x < len)
		{
			pptr[y][x] = s[start_point];
			x++;
			start_point++;
		}
		pptr[y][x] = '\0';
		x = 0;
		y++;
	}
	pptr[y] = 0;
	return (pptr);
#endif
}


#ifdef TEST


static int test_start()
{
	int ret = 0;

	#define _TEST_START(str, index, expected) { \
		int got = start(str, '*', index);       \
		if (got != expected) {                  \
            printf("ERROR %i: start(%s, '*', %i) == %i (expected: %i)\n", \
            	__LINE__, str, index, got, expected); \
               ret = 1;                               \
		}                                             \
	}

	_TEST_START("", 0, 0);
	_TEST_START("a", 0, 0);
	_TEST_START("*a", 0, 1);
	_TEST_START("*a*", 0, 1);
	_TEST_START("*a*a*a*a*", 0, 1);
	_TEST_START("**aaaa", 0, 2);
	_TEST_START("****", 0, 0);

	_TEST_START("****", 1, 0);
	_TEST_START("**aaaa", 2, 2);
	_TEST_START("*a*a*a*a*", 3, 3);
	_TEST_START("*a*a*a*a*", 2, 3);

	return ret;
}


static int test_tell_num_of_str()
{
	int ret = 0;

	#define _TEST_TELL_NUM_OF_STR(str, expected) { \
		int got = tell_num_of_str(str, '*');       \
		if (got != expected) {                  \
            printf("ERROR %i: tell_num_of_str(\"%s\", '*') == %i (expected: %i)\n", \
            	__LINE__, str, got, expected); \
               ret = 1;                               \
		}                                             \
	}

	_TEST_TELL_NUM_OF_STR("", 0);
	_TEST_TELL_NUM_OF_STR("a", 1);
	_TEST_TELL_NUM_OF_STR("*a", 1);
	_TEST_TELL_NUM_OF_STR("*a*", 1);
	_TEST_TELL_NUM_OF_STR("*a*a**a*a*", 4);
	_TEST_TELL_NUM_OF_STR("*a**a*a", 3);
	_TEST_TELL_NUM_OF_STR("a*a", 2);
	_TEST_TELL_NUM_OF_STR("**aaaa", 1);
	_TEST_TELL_NUM_OF_STR("****", 0);

	return ret;
}

static int test_sub_str_len()
{
	int ret = 0;

	#define _TEST_SUB_STR_LEN(str, index, expected) { \
		int got = sub_str_len(str, '*', index);       \
		if (got != expected) {                  \
            printf("ERROR %i: sub_str_len(\"%s\", '*', %i) == %i (expected: %i)\n", \
            	__LINE__, str, index, got, expected); \
               ret = 1;                               \
		}                                             \
	}

	_TEST_SUB_STR_LEN("", 0, 0);
	_TEST_SUB_STR_LEN("a", 0, 1);
	_TEST_SUB_STR_LEN("*a", 0, 0);
	_TEST_SUB_STR_LEN("*a*", 0, 0);
	_TEST_SUB_STR_LEN("a*a*a*a*", 0, 1);
	_TEST_SUB_STR_LEN("aa**aa", 0, 2);
	_TEST_SUB_STR_LEN("****", 0, 0);

	_TEST_SUB_STR_LEN("****", 1, 0);
	_TEST_SUB_STR_LEN("**aaaa", 2, 4);
	_TEST_SUB_STR_LEN("*a*a*a*a*", 3, 1);
	_TEST_SUB_STR_LEN("*a*a*a*a*", 2, 0);

	return ret;
}

static int _test_ft_strsplit(char *str, char **expected)
{
	#define STR_OR_NULL(x) (x ? x : "<NULL>")

	char **got = ft_strsplit(str, '*');

	int need_stop = 0;
	for (int i = 0; !need_stop; ++i)
	{
		if (!got[i] || !expected[i]) {
			if (got[i] != expected[i]) {
	            printf("ERROR %i: ft_strsplit(\"%s\", '*')[%i] == \"%s\" (expected: \"%s\")\n",
    	        	__LINE__, str, i, STR_OR_NULL(got[i]), STR_OR_NULL(expected[i]));
                return 1;
			} else {
				return 0;
			}
		}

		if (strcmp(got[i], expected[i]))
		{
            printf("ERROR %i: ft_strsplit(\"%s\", '*')[%i] == \"%s\" (expected: \"%s\")\n",
            	__LINE__, str, i, STR_OR_NULL(got[i]), STR_OR_NULL(expected[i]));
               return 1;
		}
	}

	return 0;
}


static int test_ft_strsplit()
{
	int ret = 0;

	{
		char *expected[] = {NULL};
		ret |= _test_ft_strsplit("", expected);
	}



	{
		char *expected[] = {"a", NULL};
		ret |= _test_ft_strsplit("a", expected);
	}

	{
		char *expected[] = {"a", NULL};
		ret |= _test_ft_strsplit("*a", expected);
	}

	{
		char *expected[] = {"a", NULL};
		ret |= _test_ft_strsplit("*a*", expected);
	}

	{
		char *expected[] = {"a", "a", "a", "a", NULL};
		ret |= _test_ft_strsplit("*a*a**a*a*", expected);
	}

	{
		char *expected[] = {"a", "a", "a", NULL};
		ret |= _test_ft_strsplit("*a**a*a", expected);
	}

	{
		char *expected[] = {"a", "a", NULL};
		ret |= _test_ft_strsplit("a*a", expected);
	}

	{
		char *expected[] = {"aaaa", NULL};
		ret |= _test_ft_strsplit("**aaaa", expected);
	}

	{
		char *expected[] = {NULL};
		ret |= _test_ft_strsplit("****", expected);
	}

	return ret;
}


int main()
{
	int ret = 0;

	ret |= test_start();
	ret |= test_tell_num_of_str();
	ret |= test_sub_str_len();
	ret |= test_ft_strsplit();

	return ret;
}
#endif
