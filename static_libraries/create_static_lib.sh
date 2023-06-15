#!/bin/bash
find -type f -name "\*.c" | gcc -c *
ar rcs liball.a *.o
