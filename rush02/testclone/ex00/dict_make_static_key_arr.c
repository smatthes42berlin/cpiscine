/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_make_static_key_arr.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <smatthes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 14:59:19 by smatthes          #+#    #+#             */
/*   Updated: 2023/04/02 22:36:14 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include "rush02.h"

char	**make_static_key_arr(char **stat_key_arr)
{
	make_first_part(stat_key_arr);
	make_second_part(stat_key_arr);
	stat_key_arr[32] = NULL;
	return (stat_key_arr);
}

void	make_first_part(char **stat_key_arr)
{
	stat_key_arr[0] = "0";
	stat_key_arr[1] = "1";
	stat_key_arr[2] = "2";
	stat_key_arr[3] = "3";
	stat_key_arr[4] = "4";
	stat_key_arr[5] = "5";
	stat_key_arr[6] = "6";
	stat_key_arr[7] = "7";
	stat_key_arr[8] = "8";
	stat_key_arr[9] = "9";
	stat_key_arr[10] = "10";
	stat_key_arr[11] = "11";
	stat_key_arr[12] = "12";
	stat_key_arr[13] = "13";
	stat_key_arr[14] = "14";
	stat_key_arr[15] = "15";
	stat_key_arr[16] = "16";
	stat_key_arr[17] = "17";
	stat_key_arr[18] = "18";
	stat_key_arr[19] = "19";
	stat_key_arr[20] = "20";
}

void	make_second_part(char **stat_key_arr)
{
	stat_key_arr[21] = "30";
	stat_key_arr[22] = "40";
	stat_key_arr[23] = "50";
	stat_key_arr[24] = "60";
	stat_key_arr[25] = "70";
	stat_key_arr[26] = "80";
	stat_key_arr[27] = "90";
	stat_key_arr[28] = "100";
	stat_key_arr[29] = "1000";
	stat_key_arr[30] = "1000000";
	stat_key_arr[31] = "1000000000";
}
