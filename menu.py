import nuke
nuke.menu('Nodes').addCommand('Filter/PixelSort', "nuke.createNode('PixelSort.gizmo')", icon='PixelSort.png')