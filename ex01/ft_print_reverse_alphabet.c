/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhumalo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 15:02:02 by ikhumalo          #+#    #+#             */
/*   Updated: 2020/06/19 15:17:53 by ikhumalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char ft_print_reverse_alphabet(void){

	char i = 'z';

		while(i>='a'){

			write(1,&i,1);

			i--;
		};
	return 0;
};	

int main(){
	ft_print_reverse_alphabet();
	return 0;
}	


