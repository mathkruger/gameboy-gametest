:: compiling the entire thing
c:\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -c -o build/main.o main.c
c:\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -o build/main.gb build/main.o

:: cleaning up the mess
rm build/main.lst
rm build/main.map
rm build/main.o
rm build/main.sym