//// lab1exH.c
//// ENCM 369 Winter 2024 Lab 1 Exercise H
//
//#include <stdio.h>
//
//void print_array(const char *str, const int *a, int n);
//// Prints the string given by str on stdout, then
//// prints a[0], a[1], ..., a[n - 1] on stdout on a single line.
//
//void sort_array(int *x, int n);
//// Sorts x[0], x[1], ..., x[n - 1] from smallest to largest.
//
//int main(void)
//{
//  int test_array[] = { 4000, 5000, 7000, 1000, 3000, 4000, 2000, 6000 };
//
//  print_array("before sorting ...", test_array, 8);
//  sort_array(test_array, 8);
//  print_array("after sorting ...", test_array, 8);
//  return 0;
//}
//
//void print_array(const char *str, const int *a, int n)
//{
//    int i;
//    puts(str);
//    i = 0;
//    
//    goto for_loop;
//    
//    for_loop:
//    if (i >= n) goto end_if;
//    printf("    %d",a[i]);
//    i++;
//    goto for_loop;
//    
//    end_if:
//    printf("\n");
//    
//}
//
//void sort_array(int *x, int n)
//{
//  // This is an implementation of an algorithm called selection sort.
//
//    int outer, inner, max, i_of_max;
//       outer = n - 1;
//
//       goto for_loop1;
//
//   for_loop1:
//       if (outer <= 0)
//           goto end_if1;
//       i_of_max = outer;
//       max = x[outer];
//       inner = 0;
//       goto for_loop2;
//
//   for_loop2:
//       if (inner >= outer)
//           goto continue_forloop1;
//       if (x[inner] > max) {
//           i_of_max = inner;
//           max = x[inner];
//       }
//       inner++;
//       goto for_loop2;
//
//   continue_forloop1:
//       x[i_of_max] = x[outer];
//       x[outer] = max;
//       outer--;
//       goto for_loop1;
//
//   end_if1:
//       ;
//  }
//
//
