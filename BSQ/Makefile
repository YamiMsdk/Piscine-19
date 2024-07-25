# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymoussad <ymoussad@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/24 22:49:01 by ymoussad          #+#    #+#              #
#    Updated: 2024/07/24 22:49:09 by ymoussad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nom de l'exécutable final
EXEC = bsq

# Fichiers objets nécessaires
OBJS = dynamic_alloc.o \
	file_reader.o \
	find_square.o \
	input_reader.o \
	line_splitter.o \
	main.o \
	parse_first_line.o \
	utils.o \
	validate_map.o

# Commande pour générer l'exécutable
$(EXEC): $(OBJS)
	gcc -o $(EXEC) $(OBJS)

# Commandes pour générer les fichiers objets
dynamic_alloc.o: dynamic_alloc.c bsq.h
	gcc -c dynamic_alloc.c

file_reader.o: file_reader.c bsq.h
	gcc -c file_reader.c

find_square.o: find_square.c bsq.h
	gcc -c find_square.c

input_reader.o: input_reader.c bsq.h
	gcc -c input_reader.c

line_splitter.o: line_splitter.c bsq.h
	gcc -c line_splitter.c

main.o: main.c bsq.h
	gcc -c main.c

parse_first_line.o: parse_first_line.c bsq.h
	gcc -c parse_first_line.c

utils.o: utils.c bsq.h
	gcc -c utils.c

validate_map.o: validate_map.c bsq.h
	gcc -c validate_map.c

# Nettoyer les fichiers générés
clean:
	rm -f $(EXEC) $(OBJS)
