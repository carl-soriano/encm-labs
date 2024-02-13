// lab1exG.c
// ENCM 369 Winter 2024 Lab 1 Exercise G

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_ABS_F (5.0e-9)
#define POLY_DEGREE 4

double polyval(const double *a, int n, double x);
/* Return a[0] + a[1] * x + ... + a[n] * pow(x, n). */

int main(void)
{
    double f[] = {1.47, 0.73, -2.97, -1.15, 1.00};
    double dfdx[POLY_DEGREE];

    double guess;
    int max_updates;
    int update_count;
    int n_scanned;
    int i;
    int flag;

    double current_x, current_f, current_dfdx;

    printf("This program demonstrates use of Newton's Method to find\n"
           "approximate roots of the polynomial\nf(x) = ");
    printf("%.2f", f[0]);
    
    //first for loop
    i = 1;
    goto for_loop1;
    
    for_loop1:
    if(i > POLY_DEGREE) goto print1;
    goto if_block1;
    
    if_block1:
    if (f[0] < 0) goto else_block1;
    printf(" + %.2f*pow(x,%d)", f[i], i);
    i++;
    goto for_loop1;
    
    else_block1:
    printf(" - %.2f*pow(x,%d)", -f[i], i);
    i++;
    goto for_loop1;
    
    print1:
    printf("\nPlease enter a guess at a root, and a maximum number of\n"
           "updates to do, separated by a space.\n");
    
    n_scanned = scanf("%lf%d", &guess, &max_updates);
    ///
    
    ///Second if
    
    if (n_scanned == 2) goto max_update;
        printf("Sorry, I couldn't understand the input.\n");
        exit(1);
    
    max_update:
    if (max_updates >= 1) goto print2;
    printf("Sorry, I must be allowed do at least one update.\n");
    exit(1);
    
        
    print2:
        printf("Running with initial guess %f.\n", guess);
    

    ///For loop #2
    i = POLY_DEGREE - 1;
    current_x = guess;
    update_count = 0;
    flag = 0;
    
    goto for_loop2;
    
    for_loop2:
    if (i < 0) goto while_loop1;
    dfdx[i] = (i + 1) * f[i + 1];
    i--;
    goto for_loop2;
    

        
    
    
    
    
    while_loop1:
    if(flag != 0) goto if_block2;
    current_f = polyval(f, POLY_DEGREE, current_x);
    printf("%d update(s) done; x is %.15f; f(x) is %.15e\n",
           update_count, current_x, current_f);
    if (fabs(current_f) >= MAX_ABS_F) goto elseif_block1;
    flag = 1;
    goto if_blockw2;
        
    elseif_block1:
    if (update_count != max_updates) goto if_blockw2;
    flag = 2;
        
    if_blockw2:
    if(!flag) goto statements;
    goto while_loop1;
    
    statements:
    current_dfdx = polyval(dfdx, POLY_DEGREE - 1, current_x);
    current_x -= current_f / current_dfdx;
    update_count++;
    goto while_loop1;
    
    
 
    

    if_block2:
    if(flag != 2) goto else_block2;
    printf("%d updates performed, |f(x)| still >= %g.\n",
           update_count, MAX_ABS_F);
    goto end_if;
    
    
    else_block2:
    printf("Stopped with approximate solution of %.10f.\n",
           current_x);
    goto end_if;
    
    end_if:
    ;
    return 0;
    
    
}

double polyval(const double *a, int n, double x)
{
    double result = a[n];
        int i = n - 1;
        
        goto for_loop3;
        
        for_loop3:
        if(i < 0) goto return_st;
        result *= x;
        result += a[i];
        i--;
        goto for_loop3;
        
        return_st:
        return result;

}

