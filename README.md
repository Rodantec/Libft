# Libft

`libft` est une bibliothèque personnelle de fonctions utilitaires en C réalisée à 42. Ce projet reprend une partie des fonctions de la libc et ajoute des outils pratiques pour manipuler les chaînes, la mémoire et les listes chaînées.

## Contenu

La bibliothèque expose notamment :

- Fonctions sur les caractères: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`
- Fonctions sur la mémoire: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`
- Fonctions sur les chaînes: `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`, `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_strmapi`, `ft_striteri`, `ft_itoa`, `ft_atoi`
- Fonctions d'affichage sur des descripteurs de fichier: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`
- Fonctions bonus sur les listes chaînées: `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

## Compilation

Le projet est prévu pour Linux. Depuis le dossier `Libft/`, lance :

```bash
make
```

Cela génère l'archive statique `libft.a`.

## Règles de compilation

Le `Makefile` utilise :

- `gcc`
- les flags `-Wall -Wextra -Werror`
- l'outil `ar` pour créer la bibliothèque statique

## Cibles Makefile

- `make` : compile la bibliothèque
- `make bonus` : compile la bibliothèque avec les fonctions bonus des listes chaînées
- `make clean` : supprime les fichiers objets
- `make fclean` : supprime les fichiers objets et `libft.a`
- `make re` : relance un build complet

## Utilisation

Inclure le header dans ton projet :

```c
#include "libft.h"
```

Puis compiler avec la bibliothèque, par exemple :

```bash
gcc main.c -L. -lft
```


```

## Notes

- Si tu veux l'utiliser dans un projet, ajoute simplement le dossier `Libft/` à ton chemin d'inclusion et lie `libft.a` pendant la compilation.
