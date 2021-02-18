# Personl Planck Config
# Space Captian Layout (rev.Code)
QWERTY Base layer

| BASE | 0x0         | 0x1    | 0x2   | 0x3  | 0x4 | 0x5   | 0x6 | 0x7          | 0x8           | 0x9 | 0x10 | 0x11        |
| 0x0  | Tab         | Q      | W     | E    | R   | T     | Y   | U            | I             | O   | P    | Backspace   |
| 0x1  | Escape      | A      | S     | D    | F   | G     | H   | J            | K             | l   | ;    | Enter       |
| 0x2  | LSpaceShift | Z      | X     | C    | V   | B     | N   | M            | ,             | .   | /    | RSpaceShift |
| 0x3  | LCTRL       | NUMPAD | SUPER | LALT | NOP | SPACE | NOP | ' or Symbols | TAP(SHORTCUT) | NOP | NOP  | NUMS        |

| SYMBOLS | 0x0 | 0x1   | 0x2    | 0x3 | 0x4 | 0x5 | 0x6 | 0x7 | 0x8 | 0x9    | 0x10  | 0x11 |
| 0x0     |     | !     | @      | #   | $   | [   | ]   | &   | *   | %      | ^     |      |
| 0x1     |     | {}    | ()     | `   | =   | (   | )   | -   | '   | ''     | ""    | \    |
| 0x2     |     | CLS   | ()=>{} | =>  | ->  | {   | }   | <-  | <=  | {}<=() | ACLS  |      |
| 0x3     |     |       |        |     |     |     |     |     |     |        |       |      |

| NUMS | 0x0 | 0x1 | 0x2 | 0x3 | 0x4 | 0x5 | 0x6 | 0x7 | 0x8 | 0x9 | 0x10 | 0x11 |
| 0x0  |     | []  | {}  | ()  | 5   |     |     | 6   | ''  | ""  | ``   |      |
| 0x1  |     | 1   | 2   | 3   | 4   |     |     | 7   | 8   | 9   | 0    |      |
| 0x2  |     |     |     |     |     |     |     |     |     |     |      |      |
| 0x3  |     |     |     |     |     |     |     |     |     |     |      |      |

| SHORTCUTS | 0x0 | 0x1 | 0x2 | 0x3 | 0x4      | 0x5   | 0x6 | 0x7 | 0x8 | 0x9 | 0x10 | 0x11 |
| 0x0       |     |     |     |     | Append ; | <>    |     |     |     |     |      |      |
| 0x1       |     |     |     |     | Append , | $('') |     |     |     |     |      |      |
| 0x2       |     |     |     |     | Append . |       |     |     |     |     |      |      |
| 0x3       |     |     |     |     |          |       |     |     |     |     |      |      |
# Features
  - Shift locking
    Must use correct shift
  -
## LAYERS
  - Numpad
    Tweaked Numpad
  - Shortcuts
    In-line Text macros
  - Numbers
    Compressed Home Row Numbers
  - Symbols
    Extended Symbol set
  - Navigation
    Mirrored Navigation

## Vim Magic
some use full vim short cuts
  - Toggle wrap (vim only)
| leading | sequence   |
| W       | <Escape>   |
|         | :set wrap! |
|         | <Enter>    |
  - Toggle Spell (vim only)
| leading | sequence    |
| S       | <Escape>    |
|         | :set spell! |
|         | <Enter>     |

  - Check spell (vim only)
opens default spell suggestion window
| leading | seq      |
| C       | <Escape> |
|         | z=       |

## Custom Symbols
  - Left Arrow (LARW, ->)
  - Right Arrow (RARW, <-)
  - Left Equal Arrow (LEARW, =>)
  - Right Equal Arrow (REARW, <=)
## Javascript Symbols
  - Jquery query (JQID, $('')<LEFT><LEFT>)
  - anon function (AFN, ()=>{}<LEFT><ENTER>)
  - closure (CLS, ||{}<LEFT><ENTER>)
  - anti anon function (AAFN, {}<=()<ESCAPE>ba<ENTER>)
  - anti closure (ACLS, {}||<ESCAPE>ba<ENTER>)
{}<=()
## Marco Keycodes
`Vim Only`
  - Append Simicolon (ASIM, A;)
  - Append Comma (ACOM A,)
  - Append Dot  (ADOT, A.)

`Universeal`
  - Double Paren (DPRN, () <LEFT>)
  - Double Bracket (DBKT, [] <LEFT>)
  - Double Curly Bracket (DCBKT, {} <LEFT>)
  - Double Quote (DQTE, '' <LEFT>)
  - Double Double Quote (DDQTE, "" <LEFT>)
  - Double Qrave (DGRVE, `` <LEFT>)
  - Jquery Query (JQRY, $('') <LEFT>x2)
  - Arrow function (FARW_FUNC, ()=>{} <LEFT><ENTER>)
  - Closue (CLSE, ||{} <LEFT> <ENTER>)
  -

