readme for static libraries
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c //created *.o files for all *.c files
ar -rc libmy.a *.o //combines *.o files into a single archive file in ar archive format
ar -t libmy.a //t: it displays the contents of the archive in a listed manner
ranlib libmy.a //converts each Archive library to a random library. A random library is an archive library that contains a symbol table.
nm libmy.a //displays information about symbols in the specified file

