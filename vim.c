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


FILE EXPLORER:
:e .        Open integrated file explorer
:Sex        Split window and open integrated file explorer
:browse e   Graphical file explorer
:ls         List buffers
:cd ..      Move to parent directory
:args       List files
:args *.php Open file list
grep expression *.php   Returns a list of .php  files contening expression
gf          Open file name under cursor

INTERACT WITH UNIX
:!pwd       Execute the pwd unix command, then returns to Vi
!!pwd       Execute the pwd unix command and insert output in file
:sh         Temporary returns to Unix
$exit       Returns to Vi

ALIGNMENT
:%!fmt      Align all lines
!}fmt       Align all lines at the current position
5!!fmt      Align the next 5 lines


TABS
:tabnew     Creates a new tab
gt          Show next tab
:tabfirst   Show first tab
:tabm n(position)   Rearrange tabs
:tabdo %s/foo/bar/g Execute a command in all tabs
:tab ball   Puts all open files in tabs


WINDOWS SPLITING
:e filename     Edit filename in current window
:split filename Split the window and open filename
ctrl-w up arrow     Puts cursor in top window
ctrl-w  ctrl-w      Puts cursor in next window
ctrl-w_             Maximise current window
ctrl-w=             Gives the same size to all windows
10 ctrl-w+          Add 10 lines to current window
:vsplit file        SPlit window vertically
:sview file         Same as :split in readonly mode
:hide               Close current window
:nly                Close all windows, excepted current
:b 2                Open #2 in this window


AUTO-COMPLETION
Ctrl+n Ctrl+p (in insert mode)      Complete word
Ctrl+x Ctrl+l                       Complete line
:set dictionary=dict                Define dict as a dictionnary
Ctrl+x Ctrl+k                       Complete with dictionary


MARKS
mk      Marks current position as k
~k      Moves cursor to mark k
d~k     Delete all until mark k


Abbreviations:
:ab mail mail@provider.org      Define mail as abbreviation of mail@provider.org


Text indent:
:set autoindent     Turn on auto-indent
:set smartindent    Turn on intelligent auto-indent
:set shiftwidth=4   Defines 4 spaces as indent size
ctrl-t, ctrl-d      Indent/un-indent in insert mode
>>                  Indent
<<                  un-indent


Syntax highlighting:
:syntax on          Turn on syntax highlighting
:syntax off         Turn off syntax highlighting
:set syntax=perl    Force syntax highlighting


