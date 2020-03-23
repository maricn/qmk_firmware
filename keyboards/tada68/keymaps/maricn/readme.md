# FabulousAnomalyKeyBoard

This layout features an efficient layout for people without
a mouse.

## layers

Layer Base:	complete basic keyboard
Layer Fn-Space:	F1-F12, Arrow Keys (hjkl only), Home, End, Backlight, Media
Layer Fn-Tab: mouse keys in a vim like manner

For detailed info check out keymap.c

- FN+Z toggles the backlight breathing mode
* LCTRL and Caps have been swapped and the new CTRL also acts as ESC when tapped and CTRL when held.  
* Changed volume controls to `Fn+m,.` (this makes volume controls make more sense `<` `>` act as you think they should and M is for Mute)
* Leds go into breath animation when USB suspends (because why not).
## the CTRL key

It is where you would suspect CAPSLOCK to be.
WHO NEEDS CAPSLOCK ANYWAYS?
For those rare cases you need to shout at somebody in a comment
section you can still do a capslock by using TAB+CTRL

## SUPER key

There are two super keys. They are next to the space bar.
The intention is easing the use of tiling window mangers

## emergency mouse

Without a mouse you will find yourself in a situation where all
your tiling goodness will just not be able to click onto that 
"close ads" button.
This keymap integrates a basic mouse pointer directly into the keyboard.
Mouse is accessible via holding SPACE and tapping keys:
```
SPACE+
h	Move cursor left
j	Move cursor down
k	Move cursor up
l	Move cursor right

w	Middle Mouse Click
r	Right click
e	Left click

s	Scroll wheel left
d	Scroll wheel down
f	Scroll wheel up
g	Scroll wheel right
```
<!--
## shell focused

Working in a shell the up and down arrow keys are often needed to
look at old commands or reuse some.
When held, the left ctrl and left shift will act as expected,
but when tapped they will become UP and DOWN arrow-keys.
--> 
## krautfriend
The keys <|> are accessible even without a 102nd key
