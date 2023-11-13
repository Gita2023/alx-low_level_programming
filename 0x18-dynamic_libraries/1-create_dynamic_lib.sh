#!/bin/bash
gcc -fPIC -c *.C
gcc -shared *.o -o liball.sh
