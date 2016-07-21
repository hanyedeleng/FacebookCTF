gdb program [core]      debug program [using coredump core]
b [file:]function       set breakpoint at function [in file]
run [arglist]           start your program [with arglist]
bt                      backtrace: display program stack
p expr                  display the value of an expression
c                       continue running your program
n                       next line, stepping over function calls
s                       next line, stepping into function calss


Starting GDB
gdb                 start GDB, with no debugging files
gdb program         begin debugging program
gdb program core    debug coredump core produced by program
gdb --help          describe command line options

Stopping GDB
quit                exit GDB; also q or EOF (eg C-d)
INTERRUPT           (eg C-c) terminate current command, or send to running process

Getting Help
help                list classes of commands
help class          one-line descriptions for commands in class
help command        describe command

Executing your Program
run arglist         start your program with arglist
run                 start your program with current argument list
run ...<info>outf   start your program with input, output redirected
kill                kill running program
tty dev             use dev as stdin and stdout for next run
set args arglist    specify arglist for next run
set args            specify empty argument list
show args           display argument list
show env            show all environment variables
show env var        show value of environment variable var
set env var string  set environment variable var
unset env var       remove var from environment

Shell Commands
cd dir              change working directory to dir
shell cmd           execute arbitrary shell command string


Breakpoints and Watchpoints
break [file:]line               set breakpoint at line number [in file]
b [file:]line                   eg: break main.c:37
break [file:]func               set breakpoint at func [in file]
break +offset                   set break at offset lines from current stop
break -offset
break *addr                     set breakpoint at address addr
break                           set breakpoint at next instruction
break ...if expr                break conditionally on nonzero expr
cond n [expr]                   new conditoinal expression on breakpoint n; make unconditonal if no expr
tbreak ...                      temporary break; disable when reached
rbreak regex                    berak on all functions matching regex
watch expr                      set a watchpoint for expression expr
catch event                     break at event, which my be catch throw, exec, fork, vfork, load, or unload
info break                      show defined breakpoints
info match
clear                           delete breakpoints at next instruction
clear [file:]fun
clear [file:]line
delete [n]                      delete breakpoints [or breakpoint n]
disable [n]                     disable breakpoints [or breakpoint n]
enable [n]
enable once [n]
enable del [n]
ignore n count                  ignore breakpoint n, count times
commands n                      execute GDB command-list every time breakpoint n is reached. [silent supresses      [silent]                    default display ]
end                             end of command-list

Program stack
backtrace [n]                   print trace of all frames in stack; or of n frames n>0 inner most, n<0, outer
frame [n]                       select frame number n or frame at address n; if no n, display current frame
up n                            select frame n frames up
down n
info frame [addr]               describe selected frame, or frame at addr
info args                       arguments of selected frame
info locals                     local variables of selected frame
info reg [rn]                   register values [for regs rn] in selected
info all-reg [rn]               frame; all-reg includes floating point


Execution Control
continue [count]
c [count]
step
s

stepi                           step ny machine instructions rather than source lines
si

next
n
nexti
ni

until [location]                run until next instruction (or location)
finish                          run until selected stack frame returns
return [expr]                   pop selected stack frame without executing [setting return value]
signal num                      resume execution with signal s (none if 0)
jump line                       resume execution at spedified line number
jump *address                   or address
set var=expr                    evaluate expr without displaying it; use for altering program variables

Display
print [/f] [expr]               show value of expr [or last value $] according to format f;
p [/f] [expr]
    x                           hexadecimal
    d                           signed decimal
    u                           unsigned decimal
    o                           octal
    t                           binary
    a                           address, absolute and relative
    c                           character
    f                           floating point
call [/f] expr                  like print but does not display void
x [/Nuf] expr                   examine memory at address expr; optional format spec follows slash
  N                             count of how many units to display
  u                             unit size; one of 
                                    b individual bytes
                                    h halfwords (two bytes)
                                    w words (four bytes)
                                    g giant words (eight bytes)
 f                              printing format. Any print format or
                                    s null-terminated string
                                    i machine instructions
disassem [addr]                 display memory as machine instructions


            
