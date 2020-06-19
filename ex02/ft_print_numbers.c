/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhumalo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 15:34:26 by ikhumalo          #+#    #+#             */
/*   Updated: 2020/06/19 15:39:52 by ikhumalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_print_number(void){

	int Num = 1;

	while(Num <= 50){

		write(1,&Num,1);
        
		Num++;
	};

	return 0;

};

int main(){

	ft_print_number();
	return 0;

};
