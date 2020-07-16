# Nuke-Blink-PixelSort
A blinkscript version of my PixelSort gizmo for Nuke

<p>Some have asked for an updated PixelSort plugin, so I decided to rewrite it in Blinkscript. (I did not feel like compiling for every new Nuke version.)<br />It is improved and it works with new Nuke versions now! Enjoy!</p>
<p> </p>
<p>PixelSort sorts pixels row-by-row, based on their luminance. Or based on a custom input channel, if you like.<br />It produces stylized glitch-like effects, see <a href="https://maxvanleeuwen.com/pixelsort" target="_blank">my website</a> for more information and examples!</p>
<p style="text-align: justify;">See <a href="https://youtu.be/Lp81rwgta0Y">this video (youtube)</a> for a demo of PixelSort and <a href="http://www.nukepedia.com/blink/filter/pixelrepeat">PixelRepeat (a similar gizmo)</a> combined!</p>
<p style="text-align: justify;"> </p>
<p style="text-align: justify;"> </p>
<p style="text-align: justify;"> </p>
<p style="text-align: justify;"> </p>
<p style="text-align: justify;"> <img src="https://maxvanleeuwen.com/wp-content/uploads/PixelSort_Node-1.png" alt="nuke pixelsort" /></p>
<p style="text-align: justify;"><img src="https://maxvanleeuwen.com/wp-content/uploads/PixelSort_Gizmo.png" alt="nuke pixelsort" /></p>
<p style="text-align: justify;"> </p>
<p style="text-align: justify;"> </p>
<p style="text-align: justify;"> </p>
<p style="text-align: justify;"> </p>
<p style="text-align: justify;"> </p>
<p style="text-align: justify;"> </p>
<p style="text-align: justify;"> </p>
<p style="text-align: justify;"> </p>
<p style="text-align: justify;">Painting the sorting threshold is possible using the custom Sort input:</p>
<p style="text-align: justify;"> </p>
<p style="text-align: justify;"> </p>
<p style="text-align: justify;"><img src="https://maxvanleeuwen.com/wp-content/uploads/Painting.gif" alt="nuke pixelsort" /></p>
<p style="text-align: justify;"><img src="https://maxvanleeuwen.com/wp-content/uploads/PixelSortPainting.gif" alt="pixel sorting animated" /></p>
<p style="text-align: justify;"> </p>
<p style="text-align: justify;"> </p>
<p style="text-align: justify;"> </p>
<p style="text-align: justify;"> </p>
<p style="text-align: justify;"> </p>
<p style="text-align: justify;"> </p>
<p style="text-align: justify;"> </p>
<p style="text-align: justify;"> </p>
<p style="text-align: justify;"> </p>
<p style="text-align: justify;"> </p>
<p style="text-align: justify;"> </p>
<p style="text-align: justify;"><img src="https://maxvanleeuwen.com/wp-content/uploads/PIXELSORT_04.jpg" alt="nuke pixelsort" width="793" height="595" /></p>
<p style="text-align: justify;"> </p>
<p style="text-align: justify;"> </p>
<p style="text-align: justify;"> </p>
<p style="text-align: justify;"> </p>
<p style="text-align: justify;"> </p>
<p style="text-align: justify;"> </p>
<p style="text-align: justify;"> </p>
<p style="text-align: justify;"> </p>
<p style="text-align: justify;"> </p>
<p style="text-align: justify;"> </p>
<p style="text-align: justify;"><strong>Installation:</strong></p>
<p style="text-align: justify;"> </p>
<p style="text-align: justify;">1. Place the PixelSort folder in your .nuke folder (or somewhere else on your computer)</p>
<p style="text-align: justify;">2. Go to your .nuke folder, and create a file called 'init.py'. If such a file already exists, open it.</p>
<p style="text-align: justify;">3. In the init.py file, add this line of text to the end and save it:</p>
<p style="text-align: justify;">nuke.pluginAddPath('./<span style="text-align: justify;">PixelSort</span>')</p>
<p style="text-align: justify;"> </p>
<p style="text-align: justify;">If you want to place the folder somewhere else than in the .nuke folder, make sure to change the path in the init.py file so that it points to that other path instead!</p>
<p style="text-align: justify;"> </p>
<p style="text-align: justify;"> </p>
<p style="text-align: justify;"><strong>Installation using NukeShared</strong></p>
<p style="text-align: justify;"> </p>
<p style="text-align: justify;">1. Place the PixelSort folder in the '_AutoInstaller' repository.</p>
<p style="text-align: justify;"> </p>
<p style="text-align: justify;">NukeShared is a way of installing plugins by dragging/dropping them in folders, <a href="https://maxvanleeuwen.com/nukeshared" target="_blank">see my website (maxvanleeuwen.com/nukeshared)</a> for more information.</p>
<p style="text-align: justify;"> </p>
<p style="text-align: justify;"> </p>
