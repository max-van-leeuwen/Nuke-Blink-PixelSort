![nuke pixelsort](https://maxvanleeuwen.com/wp-content/uploads/PIXELSORT_04.jpg)

<br>


# Nuke-Blink-PixelSort

A blinkscript version of my PixelSort gizmo for Nuke

Some have asked for an updated PixelSort plugin, so I decided to rewrite it in Blinkscript.
<br>(I did not feel like compiling for every new Nuke version.)
<br>It's improved and it works with new Nuke versions now! Enjoy!

PixelSort sorts pixels row-by-row, based on their luminance. Or based on a custom input channel, if preferred.
<br>It produces stylized glitch-like effects, see [my website](https://maxvanleeuwen.com/pixelsort) for more information and examples!

See [this video (youtube)](https://youtu.be/Lp81rwgta0Y) for a demo of PixelSort and [PixelRepeat (a similar gizmo)](http://www.nukepedia.com/blink/filter/pixelrepeat) combined!

<br>

![nuke pixelsort](https://maxvanleeuwen.com/wp-content/uploads/PixelSort_Gizmo.png) ![nuke pixelsort](https://maxvanleeuwen.com/wp-content/uploads/PixelSort_Node-1.png)

<br>

Painting the sorting threshold is possible using the custom Sort input:

![nuke pixelsort](https://maxvanleeuwen.com/wp-content/uploads/Painting.gif)
![pixel sorting animated](https://maxvanleeuwen.com/wp-content/uploads/PixelSortPainting.gif)

<br>

## Installation

1. Place the PixelSort folder in your .nuke folder (or somewhere else on your computer).
2. Go to your .nuke folder, and create a file called 'init.py'. If such a file already exists, open it.
3. In the init.py file, add this line of text to the end and save it:
   ```python
   nuke.pluginAddPath('./PixelSort')
   ```

If you want to place the folder somewhere else than in the .nuke folder, make sure to change the path in the init.py file so that it points to that other path instead!

<br>

## Installation using NukeShared

1. Place the PixelSort folder in the '_AutoInstaller' repository.

NukeShared is a way of installing plugins by dragging/dropping them in folders, [see my website (maxvanleeuwen.com/nukeshared)](https://maxvanleeuwen.com/nukeshared) for more information.
