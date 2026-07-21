
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (11), none consume AL/AX, and every RET path defines full EAX; sites=004FB060 @ 004FBB0E
   -> TEST TEST EAX,EAX | 0071CFD0 @ 0071D4EA -> TEST TEST EAX,EAX | 0071CFD0 @ 0071D5BA -> TEST
   TEST EAX,EAX | 0071CFD0 @ 0071D78B -> TEST TEST EAX,EAX | 0071CFD0 @ 0071D801 -> TEST TEST
   EAX,EAX | 0071CFD0 @ 0071D9F5 -> TEST TEST EAX,EAX | 0071CFD0 @ 0071DA64 -> TEST TEST EAX,EAX |
   00723420 @ 00723E3D -> TEST TEST EAX,EAX | 00723420 @ 00723FE5 -> TEST TEST EAX,EAX | 00724F00 @
   00724F85 -> XOR XOR EAX,EAX | 0072B780 @ 0072BD6F -> TEST TEST EAX,EAX */

int FUN_006b55c0(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;

  uVar1 = (param_2 + 7U & 0xfffffff8) * param_4 + param_3 ^ 7;
  return (uint)((*(byte *)(param_1 + ((int)uVar1 >> 3)) >> (uVar1 & 7) & 1) != 0);
}

