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

I- Inserts text at the beginning of the text line, not the beginning colum of the vi screen
a- Appends to the end of the right of the cursor
A- Appends at the end of the current line
o- Begins a new line below the current line
O- Drops the current line and begins a new one in its place


Vi replace
cw- Vi replace a single word from the current cursor position. To replace a whole word, you put the cursor on the first character of the word.
c$- replace the current line but doesn't extend to change the rest of a wrapped sentence on the screen
r - vi replace the character under the cursor
R - replace the text on the same line until ESC is pressed, but it doesn't change text on the next line. Instead, it pushes to ahead of the current changes.


dd - vi delete line, regardless of the cursors position on the line
D - Deletes all text from the cursor position to the end of the line
dL- Deletes all text from the cursor position to the end of the screen
dG- Deletes all text from the cursor to the EOF
d^ Deletes all text from the beginning of the line to the cursor.


Copy & paste:
yy  - copies a line of the text to the unnamed buffer
3yy - copies 3 lines of text to the unnamed buffer
yw - copies a word
3yw
P - Pastes the contents of the unnamed buffer to the right of the cursor
p - Pastes the contents of the unnamed buffer to the left of the cursor



Named and Unnamed buffers:
ayy -   Plus a line the named buffer(a), overwriting the current contents
Ayy -   Appends the current line to the buffer
A3yy-   plus three lines from the current cursor position and appends the lines to the A buffer
ap  -   pastes the a buffer to the right of the cursor


Options in VI
set number
set tabstop=5
set noh1search
The above code should be placed in the .exrc file which is located in the users home dir.
There are more than 60 options available in vi, to view them all type.
:set all
:set optionname?
:set number
:set nonumber


Advanced Vi commands:
How to run external commands in vi:
Say for example you want to run "ls -l" inside of vi as you can't remember a file name, you would enter:
:! ls -l

Joinining lines in Vi
Back spaces only works on current lines, so to join lines in vi you need to position the curser in either line and press Shift+J


Split windows in vi
When you are editing a file and want to see a different section of the file or even a different file altogether, you can use the following:
:split
:vsplit
To switch between the windows, hit Ctrl+W


To edit two files in vi at the same time, open the first file and then type:
:split file2

To set the height of the split window:
:15split /blah/file
The above will split the top 15 lines of the screen and display the contents of the /blah/file.
To close the split window, take focus by hitting Ctrl+w and then enter :close.
Or to close all the other spit windows, take focus of the main window and enter:
:only
This will close all other windows apart from your window:p


Misc/Additional
U-vi undo, easy to remember, enter U in command line mode to undo the last command.
:+X+! in command mode this will everything you have done since the last disk write.
Ctrl+G shows the file name, total number of lines and current position expressed as a percentatge of the total number of lines in the file.

