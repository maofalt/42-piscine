/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:22:42 by motero            #+#    #+#             */
/*   Updated: 2022/02/16 23:25:22 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char    *ft_convert_base(char *nbr, char *base_from, char *base_to);

void test(char *in, char *in_base, char *out_base)
{
	char *out = ft_convert_base(in, in_base, out_base);

	if (out)
	{
		printf("'%s' (%s)\t\t=== '%s' (%s)\n", in, in_base, out, out_base);
		free(out);
	}
	else
	{
		printf("invalid base: (%s)\n", in_base);
	}
}

int main()
{
	printf("# Normal\n\n");
	test("c", "", "0123456789");
	test("0", "0123456789", "0123456789");
	test("-0", "0123456789", "0123456789");
	test("1000", "0123456789", "0123456789");
	test("-321", "0123456789", "0123456789");
	test("1000", "0123456789", "0123456789abcdef");
	test("1000", "0123456789", "01");
	test("1000", "0123456789", "0123456789abcdef");
	test("fafa", "0123456789abcdef", "01");
	test("100", "012", "0123456789");
	test("", "01234", "0123456789");
	printf("\n# WTF\n\n");
	test("    +----++abaab", "ab", "cd");
	test(" \t+--+-abaca", "abc", "0ab12");
	test("    a", "ab", "abcdef");
	test("  ++--+abbabcdefaabb", "ab", "0123456789");
	test("  +++100101bonjour", "01", "abc");
	test("", "012", "abr");
	test("", "abc", "ac");
	test("", "", "");
	test("    ", "0123456789", "0123456789");
	test("     ++--++--", "0123456789", "0123456789");
	test("    ++++---", "0123456789", "0123456789");
	test("-2145555557483648", "0123456789", "0123456789");
	printf("\n# Invalid Bases\n\n");
	test("", "", "01");
	test("", "0", "01");
	test("", "010", "01");
	test("", "001", "01");
	test("", "100", "01");
	test("", "10 2", "01");
	test("", "01+2", "01");
	test("", "012-3", "01");
	test("", "+-", "01");
}
