Basic:
:e filename
:w
:q
:w!

/word
?word
/jo[ha]n
/\<the
/the\>
/\<the\>
/\<|.\>     search all words of 4 letters
/\/
/fred\joe
/\<\d\d\d\d>    search exactly 4 digits
\^\n\{3}
:bufdo /searchstr/      search in all open files

Repalce:
:%s/old/new/g
:%s/old/new/gw      replace all occurences with confirmation
:2,35s/old/new/g
:5,$s/old/new/g
:%s/^/hello/g
:%s/$/Harry/g
:%s/onward/forward/gi           case unsensitive
:%s/*$//g       delete all white spaces
:g/string/d     delete all lines containing string
:v/string/d     delete all lines containing which didn't contain string
:s/Bill/Steve/      replace the first occurence of Bill by Steve in current line
:%s/\r//g       delete DOS carriage returns (^M)

Case:
Vu      lowercase line
VU      uppercase line
g~~     Invert case
vEU     switch word to uppercase
vE~     Modify word case
ggguG   Set all text to lowercase
:set ignorecaes     Ignore case in searches
:set smartcase      Ignore case in searches excepted if an uppercase letter is used
:%s/\<./\u&/g       sets first letter of each word to uppercase
:%s/\<./\|&/g       set first letter of each word to lowcase
:%s/.*/\u&          set first letter of each line to uppercase
:%s/.*/\|&          set first letter of each line to lowercase

Read/writefiles
:1,10 w outfile     save lines 1 to 10 in outfile
:1,10 w >>outfile   Appends lines 1 to 10 to outfile
:r infile           Insert the content of infile
:23r infile         Insert the content of infile under line 23


