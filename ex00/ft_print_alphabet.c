/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhumalo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 13:50:18 by ikhumalo          #+#    #+#             */
/*   Updated: 2020/06/19 14:54:14 by ikhumalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <ctype.h>


char  ft_print_alphabet(void){

	
 char	i = 'a';
	while(i <= 'z'){
      	;
	write(1,&i,1);  
	  i++; 	   
	};
return 0;

};

int main(){
	ft_print_alphabet();

	return 0;
};


