/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhumalo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 17:05:20 by ikhumalo          #+#    #+#             */
/*   Updated: 2020/06/20 09:44:26 by ikhumalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_print_comb(void){

	int l;
	int m;
	int num[10];
	int temp;
	int t =4;	


	
        
		num[0]=1;
		num[1]=3;
		num[2]=7;	
			
       while(l<=t){
		   while(m<=t-1){
			   temp = num[m];
			   num[m] = num[m+1];
			   num[m+1] = temp;
	            write(1,&num[m],1);
	              m++;
	        };
            l++;
	    };

	   return 0;
};

int main(){

  ft_print_comb();
  return 0;
};
