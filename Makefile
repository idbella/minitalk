SERVER=server
CLIENT=client
all:
	make -C libft/
	make $(SERVER)
	make $(CLIENT)
$(SERVER):
	gcc -Wall -Wextra -Werror server.c -o $(SERVER) libft/libft.a
$(CLIENT):
	gcc -Wall -Wextra -Werror client.c -o $(CLIENT) libft/libft.a
clean:
	make -C libft/ clean
fclean:
	rm -rf $(SERVER)
	rm -rf $(CLIENT)
	make -C libft/ clean
re: fclean
	make -C libft/ fclean
	make all
