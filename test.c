/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdurro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:44:33 by cdurro            #+#    #+#             */
/*   Updated: 2023/05/11 17:04:28 by cdurro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>
#include<string.h>
#include<bsd/string.h>
#include<ctype.h>
#include<stdlib.h>
#include<limits.h>
#include<fcntl.h>

void	to_upper2(unsigned int i, char *c)
{
	(void)i;
	if (*c >= 97 && *c <= 122)
		*c = *c - 32;
}

int main()
{

	// isalpha
	printf("\n\n---- isalpha ----\n\n");
	printf("\n------ TEST 1 ------\n");
	printf("5 isalpha : %d, real : %d\n", ft_isalpha('5'), isalpha('5'));
	printf("\n------ TEST 2 ------\n");
	printf("p isalpha : %d, real : %d\n", ft_isalpha('p'), isalpha('p'));
	printf("\n------ TEST 3 ------\n");
	printf("O isalpha : %d, real : %d\n", ft_isalpha('O'), isalpha('O'));
	printf("\n--------------------------------------------------------\n\n");
	
	// isdigit
	printf("\n\n---- isdigit ----\n\n");
	printf("\n------ TEST 1 ------\n");
	printf("5 isdigit : %d, real : %d\n", ft_isdigit('5'), isdigit('5'));
	printf("\n------ TEST 2 ------\n");
	printf("p isdigit : %d, real : %d\n", ft_isdigit('p'), isdigit('p'));
	printf("\n------ TEST 3 ------\n");
	printf("0 isdigit : %d, real : %d\n", ft_isdigit('0'), isdigit('0'));
	printf("\n--------------------------------------------------------\n\n");
	
	// isalnum
	printf("\n\n---- isalnum ----\n\n");
	printf("\n------ TEST 1 ------\n");
	printf("5 isalnum : %d, real : %d\n", ft_isalnum('5'), isalnum('5'));
	printf("\n------ TEST 2 ------\n");
	printf("p isalnum : %d, real : %d\n", ft_isalnum('p'), isalnum('p'));
	printf("\n------ TEST 3 ------\n");
	printf("D isalnum : %d, real : %d\n", ft_isalnum('D'), isalnum('D'));
	printf("\n------ TEST 4 ------\n");
	printf("! isalnum : %d, real : %d\n", ft_isalnum('!'), isalnum('!'));
	printf("\n--------------------------------------------------------\n\n");
	
	// isascii
	printf("\n\n---- isascii ----\n\n");
	printf("\n------ TEST 1 ------\n");
	printf("5 isascii : %d, real : %d\n", ft_isascii('5'), isascii('5'));
	printf("\n------ TEST 2 ------\n");
	printf("¡ isascii : %d, real : %d\n", ft_isascii(0xA1), isascii(0xA1));
	printf("\n--------------------------------------------------------\n\n");
	
	// isprint
	printf("\n\n---- isprint ----\n\n");
	printf("\n------ TEST 1 ------\n");
	printf("5 isprint : %d, real : %d\n", ft_isprint('5'), isprint('5'));
	printf("\n------ TEST 2 ------\n");
	printf("¡ isprint : %d, real : %d\n", ft_isprint(0xA1), isprint(0xA1));
	printf("\n--------------------------------------------------------\n\n");
	
	// strlen
	printf("\n\n---- strlen ----\n\n");
	printf("\n------ TEST 1 ------\n");
	printf("\"Hello 42\" strlen : %zu, real : %zu\n", ft_strlen("Hello 42"), strlen("Hello 42"));
	printf("\n------ TEST 2 ------\n");
	printf("\"\" strlen : %zu, real : %zu\n", ft_strlen(""), strlen(""));
	printf("\n--------------------------------------------------------\n\n");

	//tolower	
	printf("\n\n------ tolower ------\n\n");
	printf("\n------ TEST 1 ------\n");
	printf("tolower(H): %c\n", ft_tolower('H'));
	printf("\n------ TEST 2 ------\n");
	printf("tolower('m'): %c\n", ft_tolower('m'));
	printf("\n------ TEST 3 ------\n");
	printf("tolower(4): %c\n", ft_tolower('4'));
	printf("\n------ TEST 4 ------\n");
	printf("tolower(\\n): %c\n", ft_tolower('\n'));
	printf("\n--------------------------------------------------------\n\n");

	//toupper
	printf("\n\n------ toupper ------\n\n");
	printf("\n------ TEST 1 ------\n");
	printf("toupper(H): %c\n", ft_toupper('H'));
	printf("\n------ TEST 2 ------\n");
	printf("toupper(m): %c\n", ft_toupper('m'));
	printf("\n------ TEST 3 ------\n");
	printf("toupper(4): %c\n", ft_toupper('4'));
	printf("\n------ TEST 4 ------\n");
	printf("toupper(\\n): %c\n", ft_toupper('\n'));
	printf("\n--------------------------------------------------------\n\n");

	//idigit
	printf("\n\n------ isdigit ------\n\n");
	printf("\n------ TEST 1 ------\n");
	printf("isdigit(3): %i\n", ft_isdigit('3'));
	printf("\n------ TEST 2 ------\n");
	printf("isdigit(a): %i\n", ft_isdigit('a'));
	printf("\n------ TEST 3 ------\n");
	printf("isdigit(@): %i\n", ft_isdigit('@'));
	printf("\n--------------------------------------------------------\n\n");
	
	// memset
	printf("\n\n---- memset ----\n\n");
	char str_real[50];
	printf("\n------ TEST 1 ------\n");
	strcpy(str_real, "Hello 42");
	memset(str_real, '-', 20);
	char str_test[50];
	strcpy(str_test, "Hello 42");
	ft_memset(str_test, '-', 20);
	printf("\"Hello 42\" memset ('-', 20) : %s, real : %s\n", str_test, str_real);
	printf("\n--------------------------------------------------------\n\n");
	
	// bzero
	printf("\n\n---- bzero ----\n\n");
	printf("\n------ TEST 1 ------\n");
	char str_real2[50];
	strcpy(str_real2, "Hello 42");
	bzero(str_real2, 6);
	char str_test2[50];
	strcpy(str_test2, "Hello 42");
	ft_bzero(str_test2, 6);
	printf("\"Hello 42\" bzero (6) : %s seventh char : %c, real : %s seventh char : %c\n", str_test2, str_test2[6], str_real2, str_real2[6]);
	printf("\n--------------------------------------------------------\n\n");
	
	// memcpy
	printf("\n\n---- memcpy ----\n\n");
	char src_real1[50];
	char src_test1[50];
	char dest_real1[50];
	char dest_test1[50];
	printf("\n------ TEST 1 ------\n");
	strcpy(src_real1, "Lorem ipsum dolor sit amet");
	strcpy(src_test1, "Lorem ipsum dolor sit amet");
	strcpy(dest_real1, "consectetur adipiscing");
	strcpy(dest_test1, "consectetur adipiscing");
	printf("src content : %s, dest content : %s\n", src_real1, dest_real1);
	memcpy(dest_real1, src_real1, 6);
	ft_memcpy(dest_test1, src_test1, 6);
	printf("memcpy (dest, src, 6) : %s, real : %s\n", dest_test1, dest_real1);
	printf("\n--------------------------------------------------------\n\n");
	
	// memmove
	printf("\n\n---- memmove ----\n\n");
	printf("\n------ TEST 1 ------\n");
	char str_test7[] = "memmove can be very useful......";
	char str_real7[] = "memmove can be very useful......";
	ft_memmove(str_test7 + 20, str_test7 + 15, 11);
	memmove(str_real7 + 20, str_real7 + 15, 11);
	printf("Real : %s\n", str_real7);
	printf("Test : %s\n", str_test7);
	
	printf("\n------ TEST 2 ------\n");
	printf("\nstr1 : Geeks, str2 : Quiz\n");
	char str1_test8[] = "Geeks";
	char str1_real8[] = "Geeks";
	char str2_test8[] = "Quiz";
	char str2_real8[] = "Quiz";
	ft_memmove(str1_test8, str2_test8, sizeof(str2_test8));
	memmove(str1_real8, str2_real8, sizeof(str2_real8));
	printf("    Real, str1 : %s, str2 : %s\n", str1_real8, str2_real8);
	printf("    Test, str1 : %s, str2 : %s\n", str1_test8, str2_test8);
	printf("\n--------------------------------------------------------\n\n");



	//atoi
	printf("\n\n------ atoi ------\n\n");
	printf("\n------ TEST 1 ------\n");
	printf("ft_atoi(321): %i\n", ft_atoi("321"));
	printf("atoi(321): %i\n", atoi("321"));
	printf("\n------ TEST 2 ------\n");
	printf("ft_atoi(-321): %i\n", ft_atoi("-321"));
	printf("atoi(-321): %i\n", atoi("-321"));
	printf("\n------ TEST 3 ------\n");
	printf("ft_atoi(0): %i\n", ft_atoi("0"));
	printf("atoi(0): %i\n", atoi("0"));
	printf("\n------ TEST 4 ------\n");
	printf("ft_atoi(2147483647): %i\n", ft_atoi("2147483647"));
	printf("atoi(2147483647): %i\n", atoi("2147483647"));
	printf("\n------ TEST 5 ------\n");
	printf("ft_atoi(-2147483648): %i\n", ft_atoi("-2147483648"));
	printf("atoi(-2147483648): %i\n", atoi("-2147483648"));
	printf("\n------ TEST 6 ------\n");
	printf("ft_atoi(-+325): %i\n", ft_atoi("-+325"));
	printf("atoi(-+325): %i\n", atoi("-+325"));
	printf("\n------ TEST 7 ------\n");
	printf("ft_atoi(-42a52b62): %i\n", ft_atoi("-42a52b62"));
	printf("atoi(-42a52b62): %i\n", atoi("-42a52b62"));
	printf("\n------ TEST 8 ------\n");
	printf("ft_atoi(+42a52b62): %i\n", ft_atoi("+42a52b62"));
	printf("atoi(+42a52b62): %i\n", atoi("+42a52b62"));
	printf("\n------ TEST 9 ------\n");
	printf("ft_atoi(a42): %i\n", ft_atoi("a42"));
	printf("atoi(a42): %i\n", atoi("a42"));
	printf("\n------ TEST 10 ------\n");
	printf("ft_atoi(	42): %i\n", ft_atoi("	42"));
	printf("atoi(	42): %i\n", atoi("	42"));
	printf("\n------ TEST 11 ------\n");
	printf("ft_atoi(\\n      42      56): %i\n", ft_atoi("\n      42      56"));
	printf("atoi(\\n      42      56): %i\n", atoi("\n      42      56"));
	printf("\n--------------------------------------------------------\n\n");

		// strlcpy
	printf("\n\n---- strlcpy ---\n\n");
	printf("\n------ TEST 1 ------\n");
	char src_real2[] = "Hello 42 !";
	char dest_real2[19];
	char dest_test2[19];
	int src_real2_s;
	int src_test2_s;
	src_test2_s = ft_strlcpy(dest_test2, src_real2, 5);
	src_real2_s = strlcpy(dest_real2, src_real2, 5);
	printf("Real : Copied '%s' into '%s', length %d\n", src_real2, dest_real2, src_real2_s);
	printf("Test : Copied '%s' into '%s', length %d\n", src_real2, dest_test2, src_test2_s);
	printf("\n--------------------------------------------------------\n\n");
	
	// strlcat
	printf("\n\n---- strlcat ----\n\n");
	printf("\n------ TEST 1 ------\n");
	char src_real6[] = "Hello 42 !";
	char dest_real6[19];
	char dest_test6[19];
	int src_real6_s;
	int src_test6_s;
	strcpy(dest_real6, "Hi, ");
	strcpy(dest_test6, "Hi, ");
	src_test6_s = ft_strlcat(dest_test6, src_real6, 9);
	src_real6_s = strlcat(dest_real6, src_real6, 9);
	printf("Real : Added '%s' : '%s', length %d\n", src_real6, dest_real6, src_real6_s);
	printf("Test : Added '%s' : '%s', length %d\n", src_real6, dest_test6, src_test6_s);
	printf("\n--------------------------------------------------------\n\n");
	
	// toupper
	printf("\n\n---- toupper ----\n\n");
	printf("\n------ TEST 1 ------\n");
	printf("t, H, 5, k, z toupper : %c, %c, %c, %c, %c\n", ft_toupper('t'), ft_toupper('H'), ft_toupper('5'), ft_toupper('k'), ft_toupper('z'));
	printf("\n--------------------------------------------------------\n\n");
	
	// tolower
	printf("\n\n---- tolower ----\n\n");
	printf("\n------ TEST 1 ------\n");
	printf("t, H, 5, k, Z tolower : %c, %c, %c, %c, %c\n", ft_tolower('t'), ft_tolower('H'), ft_tolower('5'), ft_tolower('k'), ft_tolower('Z'));
	printf("\n--------------------------------------------------------\n\n");
	
	// strchr
	printf("\n\n---- strchr ----\n\n");
	printf("\n------ TEST 1 ------\n");
	char str_real3[50];
	strcpy(str_real3, "Hello 42 !");
	char *pos_real1 = strchr(str_real3, 'o');
	char *pos_test1 = ft_strchr(str_real3, 'o');
	printf("str : %s : strchr : %s, real : %s\n", str_real3, pos_test1, pos_real1);
	printf("\n--------------------------------------------------------\n\n");
	
	// strrchr
	printf("\n\n---- strrchr ----\n\n");
	printf("\n------ TEST 1 ------\n");
	char str_real4[50];
	strcpy(str_real4, "Hello 42 ! ! 24 olleH");
	char *pos_real2 = strrchr(str_real4, 'e');
	char *pos_test2 = ft_strrchr(str_real4, 'e');
	printf("str : %s : strrchr : %s, real : %s\n", str_real4, pos_test2, pos_real2);
	printf("\n--------------------------------------------------------\n\n");
	
	// strncmp
	printf("\n\n---- strncmp ----\n\n");
	printf("\n------ TEST 1 ------\n");
	printf("(\"abcdef\", \"ABCDEF\", 2) : %d, real : %d\n", ft_strncmp("abcdef", "ABCDEF", 2), strncmp("abcdef", "ABCDEF", 2));
	printf("\n------ TEST 2 ------\n");
	printf("(\"abcdef\", \"abcdef\", 2) : %d, real : %d\n", ft_strncmp("abcdef", "abcdef", 2), strncmp("abcdef", "abcdef", 2));
	printf("\n------ TEST 3 ------\n");
	printf("(\"abcdef\", \"abcdey\", 5) : %d, real : %d\n", ft_strncmp("abcdef", "abcdey", 5), strncmp("abcdef", "abcdey", 5));
	printf("\n------ TEST 4 ------\n");
	printf("(\"abcdef\", \"abcdey\", 6) : %d, real : %d\n", ft_strncmp("abcdef", "abcdey", 6), strncmp("abcdef", "abcdey", 6));
	printf("\n------ TEST 5 ------\n");
	printf("(\"\\200\", \"\\0\", 6) : %d, real : %d\n", ft_strncmp("\200", "\0", 6), strncmp("\200", "\0", 6));
	printf("\n--------------------------------------------------------\n\n");
	
	// memchr
	printf("\n\n---- memchr ----\n\n");
	printf("\n------ TEST 1 ------\n");
	char str_real5[50];
	strcpy(str_real5, "Hello 42 !");
	char *pos_real3 = memchr(str_real5, 'o', 5);
	char *pos_test3 = ft_memchr(str_real5, 'o', 5);
	printf("str : %s : memchr : %s, real : %s\n", str_real5, pos_test3, pos_real3);
	printf("\n--------------------------------------------------------\n\n");
	
	// memcmp
	printf("\n\n---- memcmp ----\n\n");
	printf("\n------ TEST 1 ------\n");
	printf("(\"abcdef\", \"ABCDEF\", 2) : %d, real : %d\n", ft_memcmp("abcdef", "ABCDEF", 2), memcmp("abcdef", "ABCDEF", 2));
	printf("\n------ TEST 2 ------\n");
	printf("(\"abcdef\", \"abcdef\", 2) : %d, real : %d\n", ft_memcmp("abcdef", "abcdef", 2), memcmp("abcdef", "abcdef", 2));
	printf("\n------ TEST 3 ------\n");
	printf("(\"abcdef\", \"abcdey\", 5) : %d, real : %d\n", ft_memcmp("abcdef", "abcdey", 5), memcmp("abcdef", "abcdey", 5));
	printf("\n------ TEST 4 ------\n");
	printf("(\"abcdef\", \"abcdey\", 6) : %d, real : %d\n", ft_memcmp("abcdef", "abcdey", 6), memcmp("abcdef", "abcdey", 6));	
	printf("\n------ TEST 5 ------\n");
	printf("(\"\\200\", \"\\0\", 6) : %d, real : %d\n", ft_memcmp("\200", "\0", 6), memcmp("\200", "\0", 6));
	printf("\n--------------------------------------------------------\n\n");
	
	// strnstr
	printf("\n\n---- strnstr ----\n\n");
	printf("\n------ TEST 1 ------\n");
	printf("hay = 'Hello 42', need = '', len = 4 : %s, real : %s\n", ft_strnstr("Hello 42", "", 4), strnstr("Hello 42", "", 4));
	printf("\n------ TEST 2 ------\n");
	printf("hay = 'Hello 42', need = 'lo', len = 5 : %s, real : %s\n", ft_strnstr("Hello 42", "lo", 5), strnstr("Hello 42", "lo", 5));
	printf("\n------ TEST 3 ------\n");
	printf("hay = 'Hello 42', need = 'lo', len = 100 : %s, real : %s\n", ft_strnstr("Hello 42", "lo", 100), strnstr("Hello 42", "lo", 100));
	printf("\n------ TEST 4 ------\n");
	printf("hay = 'Hello 42', need = 'uiok', len = 100 : %s, real : %s\n", ft_strnstr("Hello 42", "uiok", 100), strnstr("Hello 42", "uiok", 100));
	printf("\n--------------------------------------------------------\n\n");

	// calloc
	printf("\n\n---- calloc ----\n\n");
	printf("\n------ TEST 1 ------\n");
	int	*calloc_test;
	calloc_test = (int *)ft_calloc(6, sizeof(int));
	printf("Calloc an array of 6 int\n    ");
	for(int i = 0; i < 6; i++)
		printf("%d ", calloc_test[i]);
	printf("\n");
	free(calloc_test);
	printf("\n--------------------------------------------------------\n\n");
	
	// strdup
	printf("\n\n---- strdup ----\n\n");
	printf("\n------ TEST 1 ------\n");
	char *str9 = "Hello 42";
	char *str10;
	str10 = ft_strdup(str9);
	printf("Original : %s, Dup : %s\n", str9, str10);
	free(str10);
	printf("\n--------------------------------------------------------\n\n");
	
	// substr
	printf("\n\n---- substr ----\n\n");
	printf("\n------ TEST 1 ------\n");
	char *str11 = "Hello 42";
	char *str12;
	str12 = ft_substr(str11, 6, 2);
	printf("substr(\"Hello 42\", 6, 2) : %s\n", str12);
	free(str12);
	printf("\n--------------------------------------------------------\n\n");
	
	// strjoin
	printf("\n\n---- strjoin ----\n\n");
	printf("\n------ TEST 1 ------\n");
	char *str13 = "Hello";
	char *str14 = " 42";
	char *str15 = ft_strjoin(str13, str14);
	printf("strjoin(\"Hello\", \" 42\") : %s\n", str15);
	free(str15);
	printf("\n--------------------------------------------------------\n\n");
	
	// strtrim
	printf("\n\n---- strtrim ----\n\n");
	printf("\n------ TEST 1 ------\n");
	char *str16 = ft_strtrim("--__-___----4-2-___---__-_-__--", "-_");
	printf("\"--__-___----4-2-___---__-_-__--\" trimmed : %s\n", str16);
	free(str16);
	printf("\n------ TEST 2 ------\n");
	printf("'    ' trimmed : '%s'", ft_strtrim("    ", " "));
	printf("\n--------------------------------------------------------\n\n");
	
	// split
	printf("\n\n---- split ----\n\n");
	printf("\n------ TEST 1 ------\n");
	char	**result;
	int		cur;

	printf("Hello World    !! :\n");
	result = ft_split("Hello World    !!", ' ');
	cur = -1;
	while (cur++, result[cur] != 0)
		printf("%d => %s\n", cur, result[cur]);

	printf("\n------ TEST 2 ------\n");
	printf("\naaaa bbbb..cccc .dddd!!eeee :\n");
	result = ft_split("aaaa bbbb..cccc .dddd!!eeee", '.');
	cur = -1;
	while (cur++, result[cur] != 0)
		printf("%d => %s\n", cur, result[cur]);
	printf("\n--------------------------------------------------------\n\n");
		
	// itoa
	printf("\n\n---- itoa ----\n\n");
	printf("\n------ TEST 1 ------\n");
	printf("48 to string : %s\n", ft_itoa(48));
	printf("\n------ TEST 2 ------\n");
	printf("0 to string : %s\n", ft_itoa(0));
	printf("\n------ TEST 3 ------\n");
	printf("-6115048 to string : %s\n", ft_itoa(-6115048));
	printf("\n------ TEST 4 ------\n");
	printf("INT_MAX to string : %s\n", ft_itoa(INT_MAX));
	printf("\n------ TEST 5 ------\n");
	printf("INT_MIN to string : %s\n", ft_itoa(INT_MIN));
	printf("\n--------------------------------------------------------\n\n");

	// striteri
	printf("\n\n---- striteri ----\n\n");
	printf("\n------ TEST 1 ------\n");
	char c[20];
	printf("Will put 'Hello 42' to upper case\n");
	strcpy(c, "Hello 42");
	ft_striteri(c, to_upper2);
	printf("%s\n", c);
	printf("\n--------------------------------------------------------\n\n");
	
	// putchar_fd
	printf("\n\n---- putchar_fd ----\n\n");
	printf("\n------ CHECK FILE PUTCHAR ------\n");
	int	fd;
	
	fd = open("putchar.txt", O_WRONLY | O_CREAT, 0644);
	printf(": Put char 'o', on fd");
	ft_putchar_fd('o', fd);
	close(fd);
	printf("\n");
	printf("\n--------------------------------------------------------\n\n");
	
	// putstr_fd
	printf("\n\n---- putstr_fd ----\n\n");
	printf("\n------ CHECK FILE PUTSTR ------\n");
	int fd2;
	
	fd2 = open("putstr.txt", O_WRONLY | O_CREAT, 0644);
	printf(": Put str 'Hello', on fd2");
	ft_putstr_fd("Hello", fd2);
	close(fd2);
	printf("\n");
	printf("\n--------------------------------------------------------\n\n");
	
	// putendl_fd
	printf("\n\n---- putendl_fd ----\n\n");
	printf("\n------ CHECK FILE PUTENDL ------\n");
	int fd3;
	
	fd3 = open("putendl.txt", O_WRONLY | O_CREAT, 0644);
	printf(": Put str and newline 'Hello', on fd3");
	ft_putendl_fd("Hello", fd3);
	close(fd3);
	printf("\n");
	printf("\n--------------------------------------------------------\n\n");
	
	// putnbr_fd
	printf("\n\n---- putnbr_fd ----\n\n");
	printf("\n------ CHECK FILE PUTNBR ------\n");
	int fd4;
	
	fd4 = open("putnbr.txt", O_WRONLY | O_CREAT, 0644);
	ft_putnbr_fd(54, fd4);
	ft_putstr_fd("\n", fd4);
	ft_putnbr_fd(540056, fd4);
	ft_putstr_fd("\n", fd4);
	ft_putnbr_fd(0, fd4);
	ft_putstr_fd("\n", fd4);
	ft_putnbr_fd(-54, fd4);
	ft_putstr_fd("\n", fd4);
	ft_putnbr_fd(-2147483648, fd4);
	ft_putstr_fd("\n", fd4);
	ft_putnbr_fd(2147483647, fd4);
	ft_putstr_fd("\n", fd4);
	close(fd4);
	printf("\n--------------------------------------------------------\n\n");
	
	// lstnew && lstadd_front && lstadd_back && lstsize && lstlast
	printf("\n\n---- lstnew && lstadd_front && lstadd_back && lstsize && lstlast ----\n\n");
	t_list *list1;
	t_list *new_node;
	t_list *new_node2;
	t_list *new_node3;
	t_list *new_node4;

	list1 = NULL;
	new_node = ft_lstnew("added 1st");
	ft_lstadd_front(&list1, new_node);

	new_node2 = ft_lstnew("added 2nd");
	ft_lstadd_front(&list1, new_node2);

	new_node3 = ft_lstnew("added 3rd");
	ft_lstadd_front(&list1, new_node3);

	new_node4 = ft_lstnew("added 4th");
	ft_lstadd_back(&list1, new_node4);
	printf("\nlist size is: %d\n", ft_lstsize(list1));
	printf("\nlast element is: %s\n", (char *)ft_lstlast(list1)->content);
	
	while (list1 != NULL)
	{
		printf("%s", (char *)list1->content);
		if (list1->next != NULL)
			printf("->");
		list1 = list1->next;
	}
}

