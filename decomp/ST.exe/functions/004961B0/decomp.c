
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (58), none consume AL/AX, and every RET path defines full EAX; sites=004AE0B0 @ 004AE3E1
   -> TEST TEST EAX,EAX | 004B1690 @ 004B19EB -> TEST TEST EAX,EAX | 004B1690 @ 004B1A03 -> TEST
   TEST EAX,EAX | 004E3910 @ 004E3A07 -> TEST TEST EAX,EAX | 004E3910 @ 004E3ACD -> TEST TEST
   EAX,EAX | 004E3910 @ 004E3BF8 -> TEST TEST EAX,EAX | 004E3910 @ 004E3CB2 -> TEST TEST EAX,EAX |
   00555880 @ 005558C6 -> TEST TEST EAX,EAX | 00578630 @ 005788C5 -> TEST TEST EAX,EAX | 00579170 @
   00579268 -> TEST TEST EAX,EAX | 0057D700 @ 0057DBF5 -> TEST TEST EAX,EAX | 0057F6E0 @ 0057FCEB ->
   TEST TEST EAX,EAX | 005809E0 @ 005809F8 -> TEST TEST EAX,EAX | 00584060 @ 005841EB -> TEST TEST
   EAX,EAX | 005845B0 @ 00584791 -> TEST TEST EAX,EAX | 00585020 @ 005853AA -> TEST TEST EAX,EAX |
   00585020 @ 00585486 -> TEST TEST EAX,EAX | 00589C10 @ 00589F1F -> TEST TEST EAX,EAX | 0058B190 @
   0058B60D -> TEST TEST EAX,EAX | 0058BB90 @ 0058BC8A -> TEST TEST EAX,EAX | 0058BB90 @ 0058BCA4 ->
   TEST TEST EAX,EAX | 0058D160 @ 0058D2F0 -> TEST TEST EAX,EAX | 0058D160 @ 0058D380 -> TEST TEST
   EAX,EAX | 0058F680 @ 0058FBF1 -> TEST TEST EAX,EAX */

int FUN_004961b0(short param_1,short param_2,short param_3)

{
  if ((((-1 < param_1) && (param_1 < g_worldGrid.sizeX)) && (-1 < param_2)) &&
     (((param_2 < g_worldGrid.sizeY && (-1 < param_3)) && (param_3 < g_worldGrid.sizeZ)))) {
    return (uint)(g_pathingGrid.cells
                  [(int)g_pathingGrid.sizeX * (int)param_2 +
                   (int)g_pathingGrid.planeStride * (int)param_3 + (int)param_1] == 0);
  }
  return 0;
}

