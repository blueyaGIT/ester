/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etina <etina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 13:36:43 by etina             #+#    #+#             */
/*   Updated: 2024/10/12 14:03:00 by etina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)

{
	if (c >= 97 && c <= 122)
	{
		c -= 32;
		return (c);
	}
	else
	{
		return (c);
	}
}