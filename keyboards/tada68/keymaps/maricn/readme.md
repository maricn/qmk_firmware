# maricn layout (xkb ready)

This layout features an efficient QWERTY based layout for people without a mouse.

## layers

Layer Base:	complete basic keyboard
Layer Fn-Space:	F1-F12, Arrow Keys (hjkl only), Home, End, Backlight, Media
Layer Fn-Tab: mouse keys in a vim like manner

For detailed info check out keymap.c

* ESC mapped to grave. Tap (tap only, no holding) CAPS for ESC.
* CAPS button remains CAPS.. But I use xkb that maps Caps_Lock to ISO_Level3_Shift and then `xcape -t 150 -e 'ISO_Level3_Shift=Escape'`. That way I universally have the same behavior across keyboard devices (CAPS is ISO_Level3_Shift when held and ESC when tapped under 150ms).
* FN+Z toggles the backlight breathing mode
* Changed volume controls to `Fn+m,.` (this makes volume controls make more sense `<` `>` act as you think they should and `M` is for Mute)
* Leds go into breath animation when USB suspends (because why not).

## emergency mouse

Without a mouse you will find yourself in a situation where all your tiling goodness will just not be able to click onto that "close ads" button.
This keymap integrates a basic mouse pointer directly into the keyboard.

Mouse is accessible via holding SPACE and tapping keys:
```
TAB+
h	Move cursor left
j	Move cursor down
k	Move cursor up
l	Move cursor right

q       Button 4 (back)
w	Left click
e	Middle Mouse Click
r	Right click
t       Button 5 (forward)

s	Scroll wheel left
d	Scroll wheel down
f	Scroll wheel up
g	Scroll wheel right
```
