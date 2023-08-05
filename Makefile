# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/19 22:10:52 by nmota-bu          #+#    #+#              #
#    Updated: 2023/08/05 18:01:45 by nmota-bu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ═══ NAMES ═══════════════════════════════════════════════════════════════════#

NAME = libft.a

# ═══ COLORS ══════════════════════════════════════════════════════════════════#

GREEN		=\033[0;32m
BLUE 		=\033[0;34m
ORANGE	=\033[38;5;214m
RED			=\033[0;31m
YELLOW	=\033[0;33m
WHITE		=\033[0;37m
BCYAN		=\033[1;36m

# ═══ COMPILATE ══════════════════════════════════════════════════════════════════#

CC			:= gcc
CFLAGS	:= -Wall -Wextra -Werror -g3
AR 			:= ar -rcs
RM			:= rm -f
MKDIR		:= -mkdir -p

# ═══ DIRECTORIES ═════════════════════════════════════════════════════════════#

INCLUDES := inc/
SRC_DIR := src/
OBJ_DIR := obj/

IS_DIR := is/
LST_DIR := lst/
MEM_DIR := mem/
PUT_DIR := put/
STR_DIR := str/
TO_DIR := to/
GET_DIR := get/
ERR_DIR := err/
PRINTF_DIR := printf/
PRINTF_PRINT_DIR := printf/print/
PRINTF_PUT_DIR := printf/put/
PRINT_DIR := print/
MATH_DIR := math/

# ═══ SOURCES ════════════════════════════════════════════════════════════════#

IS_FILES	:= ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint \
			ft_isprime ft_isnumber

LST_FILES = ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast	ft_lstadd_back \
			ft_lstdelone ft_lstclear ft_lstiter ft_lstmap ft_lstdelitem ft_lstprint \
			ft_lstfind ft_lstreverse ft_lstfree ft_lst_to_dptr ft_lstfree_node \
			ft_lstfind_to_dptr ft_lstfind_rm

MEM_FILES := ft_bzero ft_calloc ft_memcmp ft_memcpy ft_memchr ft_memmove \
			ft_memset ft_free_dptr ft_free_tptr

PUT_FILES := ft_putchar_fd ft_putendl_fd ft_putnbr_fd ft_putstr_fd ft_putuni \
			ft_file_to_dptr

STR_FILES := ft_split ft_strchr ft_strdup ft_striteri ft_strjoin ft_strlcat \
			ft_strlcpy ft_strlen ft_strmapi ft_strncmp ft_strnstr ft_strrchr \
			ft_strtrim ft_substr ft_cp_dptr ft_strcmp ft_strcspn ft_strpbrk \
			ft_strrev ft_strspn ft_strcpy ft_strtok

TO_FILES := ft_atoi ft_itoa ft_tolower ft_toupper ft_abs ft_atoi_long

GET_FILES := get_next_line

ERR_FILES := ft_message

PRINTF_FILES := ft_printf ft_search_arg ft_read_text

PRINTF_PRINT_FILES := ft_print_str ft_print_char ft_print_dec ft_print_unsint \
					 ft_print_ptr ft_print_hex
				
PRINTF_PUT_FILES := ft_putstr ft_write

PRINT_FILES := ft_print_dptr ft_print_tptr

MATH_FILES := ft_len_token ft_len_dptr


# ═══ SOURCES ════════════════════════════════════════════════════════════════#

SRC_FILES+=$(addprefix $(IS_DIR),$(IS_FILES))
SRC_FILES+=$(addprefix $(LST_DIR),$(LST_FILES))
SRC_FILES+=$(addprefix $(MEM_DIR),$(MEM_FILES))
SRC_FILES+=$(addprefix $(PUT_DIR),$(PUT_FILES))
SRC_FILES+=$(addprefix $(STR_DIR),$(STR_FILES))
SRC_FILES+=$(addprefix $(TO_DIR),$(TO_FILES))
SRC_FILES+=$(addprefix $(GET_DIR),$(GET_FILES))
SRC_FILES+=$(addprefix $(ERR_DIR),$(ERR_FILES))
SRC_FILES+=$(addprefix $(PRINTF_DIR),$(PRINTF_FILES))
SRC_FILES+=$(addprefix $(PRINTF_PRINT_DIR),$(PRINTF_PRINT_FILES))
SRC_FILES+=$(addprefix $(PRINTF_PUT_DIR),$(PRINTF_PUT_FILES))
SRC_FILES+=$(addprefix $(PRINT_DIR),$(PRINT_FILES))
SRC_FILES+=$(addprefix $(MATH_DIR),$(MATH_FILES))

SRCS := $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJS := $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))
DEPS := $(addprefix $(OBJ_DIR), $(addsuffix .d, $(SRC_FILES)))

# ═══ RULES ══════════════════════════════════════════════════════════════════#

$(OBJ_DIR)%.o : $(SRC_DIR)%.c Makefile
			@$(MKDIR) $(dir $@)
			@clear
			@echo "$(ORANGE) Compilando libft  ➟  $(BCYAN)[$<]$(WHITE)"
			@$(CC) $(CFLAGS) -I$(INCLUDES) -MMD -MP -c $< -o $@

all: $(NAME)

$(NAME) : $(OBJS)
			@$(AR) $(NAME) $(OBJS)
			@echo "$(GREEN)\n ✓ Creado $(NAME)\n$(WHITE)"

clean : 
			@$(RM) -rf $(OBJ_DIR) $(NAME)
			@echo "$(RED)\n ✗ Archivos objetos libft borrados.‼️\n$(WHITE)";

fclean : clean
			@$(RM) -f $(NAME)
			@echo "$(GREEN) Toda libreria libft limpita...🤟🏼$(WHITE)"

re: fclean all
			@echo "$(YELLOW) Borrado todo y recompilado...🤟🏼$(WHITE)"

norm:
			@norminette $(SRCS) $(INCLUDES) | grep -v Norme -B1 || true

# Non-file targets
-include $(DEPS)
.PHONY: all clean fclean re norm
