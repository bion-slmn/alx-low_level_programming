This project is for static libraries.
It involves writing making a static file from command line and using and shell script,

In shell script the following commands are used: 

          1:gcc -c -Wall -Werror -Wextra -pedantic -std=gnu89 *.c 

the command compile the all c-file inthe directory using gcc compiler to object files.
The flag -c tell the compile to not link the filesand produce object files.

-Wall -Werror -Wextra -pedantic -std=gnu89 just enusure we are compile good quality

           2:ar -rcs liball.c *o

The archiver (ar) basically zips all the object files int one liball.a file.
the flag -r and c tell the  an archive (option c) and to insert the objects,(option r)
 replacing older files where needed.
