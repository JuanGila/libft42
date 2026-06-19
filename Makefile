LIBFT_A_NAME = libft.a
LIBFT_SRCS = ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strlen.c \
	ft_strlcpy.c \
	ft_strncmp.c \
	ft_strlcat.c \
	ft_strnstr.c \
	ft_atoi.c \
	ft_strdup.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_bzero.c \
	ft_memset.c \
	ft_memcpy.c \
	ft_memcmp.c \
	ft_memchr.c \
	ft_calloc.c \
	ft_memmove.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_lstnew.c \
	ft_lstadd_front.c \
	ft_lstsize.c \
	ft_lstlast.c \
	ft_lstadd_back.c \
	ft_lstdelone.c \
	ft_lstclear.c \
	ft_lstiter.c \
	ft_lstmap.c
LIB_OBJS = $(LIBFT_SRCS:.c=.o)
CC = cc
CC_FLAGS = -Wall -Wextra -Werror
# # Programa ar (archiver).
# r = replace (reemplaza objetos existentes)
# c = create (crea la librería si no existe)
# s = crea el índice de símbolos para que el linker la use
CMD_AR_RCS_FLAG = ar rcs
# # Comando rm
# -f = force
CMD_RM_F_FLAG = rm -f
# #
%.o: %.c
	@echo "Compiling  ..." 
	@$(CC) $(CC_FLAGS) -c $< -o $@
# make all
all: $(LIBFT_A_NAME)
# Esto es una dependencia. Indica que para construir libft.a(LIB_A_NAME), primero necesito que existan los objetos .o(LIB_OBJ).
# Cuando existen los objetos, ejecutamos el programa ar (archiver) para crear una libreria estatica. Es equivalente a decir "mete estos .o dentro del archivo libft.a".
$(LIBFT_A_NAME): $(LIB_OBJS)
	@echo "Doing ar comand ..."
	@$(CMD_AR_RCS_FLAG) $(LIBFT_A_NAME) $(LIB_OBJS)
# # Make Rules
# make clean
clean:
	@echo "Doing clean ..."
	@$(CMD_RM) $(LIB_OBJS)
# make fclean
fclean: clean
	@echo "Doing fclean ..."
	@$(CMD_RM) $(LIBFT_A_NAME)
# make re
re: fclean all
# .PHONY
.PHONY: all clean fclean re