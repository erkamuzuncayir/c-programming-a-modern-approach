//
// Created by erkam on 3/27/25.
//

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    struct lconv* loc;
    if (argc != 2)
    {
        fprintf(stderr, "usage: pp_02 locale-code\n");
        exit(EXIT_FAILURE);
    }

    if (setlocale(LC_ALL, argv[2]) == NULL)
    {
        fprintf(stderr, "%s locale information can't found!\n", argv[2]);
        exit(EXIT_FAILURE);
    }

    loc       = localeconv();
    int grouping     = loc->grouping[0];
    int mon_grouping = loc->mon_grouping[0];

    printf("decimal_point = \"%s\"\n", loc->decimal_point);
    printf("thousands_sep = \"%s\"\n", loc->thousands_sep);
    printf("grouping = \"%d\"\n", grouping);
    printf("mon_decimal_point = \"%s\"\n", loc->mon_decimal_point);
    printf("mon_thousands_sep = \"%s\"\n", loc->mon_thousands_sep);
    printf("mon_grouping = \"%d\"\n", mon_grouping);
    printf("positive_sign = \"%s\"\n", loc->positive_sign);
    printf("negative_sign = \"%s\"\n", loc->negative_sign);
    printf("currency_symbol = \"%s\"\n", loc->currency_symbol);
    printf("int_curr_symbol = \"%s\"\n", loc->int_curr_symbol);
    printf("frac_digits = \"%d\"\n", loc->frac_digits);
    printf("p_cs_precedes = \"%d\"\n", loc->p_cs_precedes);
    printf("n_cs_precedes = \"%d\"\n", loc->n_cs_precedes);
    printf("p_sep_by_space = \"%d\"\n", loc->p_sep_by_space);
    printf("n_sep_by_space = \"%d\"\n", loc->n_sep_by_space);
    printf("p_sign_posn = \"%d\"\n", loc->p_sign_posn);
    printf("n_sign_posn = \"%d\"\n", loc->n_sign_posn);
    printf("int_frac_digits = \"%d\"\n", loc->int_frac_digits);
    printf("int_p_cs_precedes = \"%d\"\n", loc->int_p_cs_precedes);
    printf("int_n_cs_precedes = \"%d\"\n", loc->int_n_cs_precedes);
    printf("int_p_sep_by_space = \"%d\"\n", loc->int_p_sep_by_space);
    printf("int_n_sep_by_space = \"%d\"\n", loc->int_n_sep_by_space);
    printf("int_p_sign_posn = \"%d\"\n", loc->int_p_sign_posn);
    printf("int_n_sign_posn = \"%d\"\n", loc->int_n_sign_posn);
}
