
/* [STReturnSemanticsApplier] boolean_return_domain.
   Evidence: all explicit return values are constants in {0,1}: [0, 1, 1, 0, 0]
   [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (8), none consume AL/AX, and every RET path defines full EAX; sites=006A0EF0 @ 006A0F8B
   -> TEST TEST EAX,EAX | 006A17B0 @ 006A188B -> TEST TEST EAX,EAX | 006A1EB0 @ 006A1FF7 -> TEST
   TEST EAX,EAX | 006A34E0 @ 006A3587 -> TEST TEST EAX,EAX | 006A34E0 @ 006A35F1 -> TEST TEST
   EAX,EAX | 006A3840 @ 006A38B7 -> TEST TEST EAX,EAX | 006A3930 @ 006A397D -> TEST TEST EAX,EAX |
   006A3A00 @ 006A3A63 -> TEST TEST EAX,EAX */

int __cdecl FUN_006a24e0(ushort *param_1,int param_2,ushort *param_3,int param_4,int param_5)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  bool bVar5;

  if (param_2 == param_4) {
    uVar1 = param_1[2];
    if ((uVar1 & 0x2000) == 0) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = uVar1 & 0xff00;
    }
    uVar2 = param_3[2];
    if ((uVar2 & 0x2000) == 0) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = uVar2 & 0xff00;
    }
    if ((uVar1 & uVar3) == (uVar2 & uVar4)) {
      if (param_5 == 1) {
        bVar5 = ((-(ushort)((param_1[1] & 0x2000) != 0) & 0xff01) - 1 & param_1[1]) ==
                ((-(ushort)((param_3[1] & 0x2000) != 0) & 0xff01) - 1 & param_3[1]);
      }
      else {
        bVar5 = ((-(ushort)((*param_1 & 0x2000) != 0) & 0xff01) - 1 & *param_1) ==
                ((-(ushort)((*param_3 & 0x2000) != 0) & 0xff01) - 1 & *param_3);
      }
      if (bVar5) {
        if (param_5 == 1) {
          uVar1 = param_1[1];
          if ((uVar1 == param_3[1]) && (uVar1 == 0)) {
            return 0;
          }
          if ((uVar1 & 0x2000) != 0) {
            return 1;
          }
        }
        else {
          uVar1 = *param_1;
          if ((uVar1 != *param_3) || (uVar1 != 1)) {
            if ((uVar1 & 0x2000) != 0) {
              return 1;
            }
            return 0;
          }
        }
      }
    }
  }
  return 0;
}

