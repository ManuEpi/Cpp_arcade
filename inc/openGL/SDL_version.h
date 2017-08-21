##
## Makefile for openGLARCADE in /home/yannis/tek2/rendu/cpp_arcade/graphics/opengl
## 
## Made by yannis
## Login   <yannis.lang@epitech.eu>
## 
## Started on  Wed Mar 15 02:55:11 2017 yannis
## Last update Wed Mar 15 04:31:01 2017 Rémy
##
CC		= g++ -fPIC -shared

NAME		= ../lib_arcade_sfml.so

RM		= rm -rf

SRC		=	graph_sfml.cpp \

##CXXFLAGS	=	-Wall
##CXXFLAGS	+=	-Werror
##CXXFLAGS	+=	-Wextra
##CXXFLAGS	+=	-I./include
CXXFLAGS	+=	-std=c++11


LDXXFLAGS	+=	-lsfml-window -lsfml-graphics -lsfml-system -lsfml-audio

all:			$(NAME)

$(NAME):
			$(CC) $(CXXFLAGS) $(SRC) $(LDXXFLAGS) -o $(NAME)

clean:
			$(RM) $(OBJ)

fclean:			clean
			$(RM) $(NAME)

re:			fclean all
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           /*
  Simple DirectMedia Layer
  Copyright (C) 1997-2014 Sam Lantinga <slouken@libsdl.org>

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
*/

/**
 *  \file close_code.h
 *
 *  This file reverses the effects of begin_code.h and should be included
 *  after you finish 