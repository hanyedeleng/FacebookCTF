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


