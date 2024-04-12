/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   12-rombosconfunciones.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarulls <gbarulls>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 23:43:57 by gbarulls          #+#    #+#             */
/*   Updated: 2023/01/02 23:44:08 by gbarulls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void ft_Top(int mid, int top, int *count);
void ft_Bottom(int mid, int top, int *count);

int main(int argc, char *argv[]) {
  int top, mid, count;

  count = 0;
  mid = atoi(argv[1]);
  if (mid < 0) {
    mid *= -1;
  }
  top = (mid * 2) - 1;
  
  if (argc == 2) {
    ft_Top(mid, top, &count);
    ft_Bottom(mid, top, &count);
  } else {
    printf("No ha introducido ningún argumento o a introducido mas de uno\n");
  }
  return 0;
}

void ft_Top(int mid, int top, int *count) {
  int i;

  while (*count < mid) {
    i = 1;
    while (i <= top) {
      if ((i < mid - *count) || (i > mid + *count)) {
        printf(" ");
      } else {
        printf("*");
      }
      i++;
    }
    printf("\n");
    *count = *count + 1;
  }
  *count = *count - 2;
}

void ft_Bottom(int mid, int top, int *count) {
  int i;

  while (*count >= 0) {
    i = 1;
    while (i <= top) {
      if ((i < mid - *count) || (i > mid + *count)) {
        printf(" ");
      } else {
        printf("*");
      }
      i++;
    }
    printf("\n");
    *count = *count - 1;
  }
}
