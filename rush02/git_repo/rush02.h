#ifndef RUSH02_H
#define RUSH02_H

int		ft_isalphanum(char c);
void	ft_putstring(char *str);
char	*ft_strcat(char *dest, char *src);
int		ft_isspace(char c);
int		ft_atoi(char *str);
void	convert_2(unsigned int number, char *result, char ***key_val_arr);
void	convert_1(unsigned int number, char *result, char ***key_val_arr);
void	deciding_convert(unsigned int number, char *result, char ***key_val_arr);

#endif
