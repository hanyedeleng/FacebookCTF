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


Automatic Display
display [/f] expr               show value of expr each time program stops [according to format f]
display                         display all enabled expressions on list
undisplay n                     remove number(s) n from list of automatically displayed expressions
disable disp n                  disable display for expression(s) number n
enable disp n
info display


Expresions
expr                            an expression in C, C++, or Modula-2 (including function calls), or:
adr@len                         an array of len elements beginning at addr
file::nm                        a variable or function nm defined in file
{type} addr                     read memory at addr as specified type
$                               most recent displayed value
$n                              nth displayed value
$$                              displayed value previous to $
$$n
$_
$var

show values [n]
show conv

Symbol talble
info address s
info func [regex]
info var [regex]
whatis [expr]
ptype [expr]
ptype type


GDB Scripts
source script
define cmd
    command-list
end
document end
    help-text
end

Signals
handle signan act
    print
    noprint
    stop
    nostop
    pass
    nopass
info signals

Debugging Targets:
target type param       connect to target machine, process, or file
help tartget            display available targets
attach param            connect to another process
detach                  release target from GDB control

Controlling GDB
set param value         set one of GDB's internal parameters
show param              display current setting of parameter

Parameters understood by set and show:
complaint limit         number of messages on unusual symbols
confirm on/off          enable or disable cautionary queries
editing on/off          control readline command-line editing
height lpp              number of lines before pause in display
language lang           Language for GDB expressions (auto, c or modula-2)
listsize n              number of lines shown by list
prompt str              use str as GDB prompt
radix base              octal, decimal, or hex number representation
verbose on/off          control messages when loading sysmbols
width cpl               number of characters before line folded
write on/off            Allow or forbid patching binary, core files (when reopened with exec or core)
history ...             groups with the following options:
h ...           
h exp off/on            disable/enable readline history expansion
h file filename         file for recording GDB command history
h size size             number of commands kept in history list
h save off/on           control use of external file for command history

print ...               groups with the following options:
p ...
p address on/off        print memory addresses in stacks, values
p array off/on          compact or attractive format for arrays
p demangl on/off        source (demangled) or internal form for C++ symbols
p asm-dem on/off        demangle C++ symbols in machine-instruction output
p elements limit        number of array elements to display
p object on/off         print C++ derived types for objects
p pretty on/off         struct display: compact or indented
p union on/off          display of union members
v vtbl off/on           display of C++ virtual function tables

show commands           show last 10 commands
show commands n         show 10 commands around number n
show commands +         show next 10 commands

Working files
file [file]             use file for both symbols and executable;
                        with no arg, discard both
core [file]             read file as cordump; or discard
exec [file]             use file as executable only; or discard
symbol [file]           use symbol table from file; or discard
load file               dynamically link file and add its symbols
add-sym file addr       read additional symbols from file,
                            dynamically loaded at addr
info files              display working files and targets in use
path dirs               add dirs to front of path searched for 
                            executable and symbol files
show path               display executable and symbol file path
info share              list names of shared libraries currently loaded


Source Files
dir names               add directory names to front of source path
dir                     clear source path
show dir                show current source path
list                    show nect ten lines of source
list -                  show previous ten lines
list lines              display source surrounding lines, specified as
  [file:] num           line number [in named file]
  [file:]function       beginning of function [in named file]
  +off                  off lines after last printed
  -off                  off lines previous to last printed
  *addree               line contaning address
list f,l                from line f to line l
info line num           show starting, ending addresses of compiled code for source line num
info source             show name of current source file
info sources            list all source files in use
forw regex              search following source lines for regex
rev regex               search preceding source lines for regex



