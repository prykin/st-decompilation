
/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (6), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=006A7D50 @ 006A7DCE -> read as EAX on
   every CFG path | 006A7D50 @ 006A7EB3 -> read as EAX on every CFG path | 006A88F0 @ 006A8B82 ->
   read as EAX on every CFG path | 006A88F0 @ 006A8D6C -> read as EAX on every CFG path | 006AE3B0 @
   006AE411 -> read as EAX on every CFG path | 006AE3B0 @ 006AE48F -> read as EAX on every CFG path
    */

int FUN_006a6360(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint local_8;

  local_8 = 0xffe;
  iVar3 = param_3;
switchD_006a63e5_caseD_1:
  do {
    while( true ) {
      if ((((param_1 == param_4) && (param_2 == param_5)) && (iVar3 == param_6)) ||

         (local_8 = FUN_006a5f20(param_1,param_2,iVar3,param_4,param_5,param_6,&param_3),
         0x19 < (int)local_8)) {
        return local_8;
      }
      uVar1 = (&SHORT_007ed576)[local_8 * 4];
      local_8 = (uint)(short)uVar1;
      if ((local_8 & 0x4000) == 0) {
        if ((uVar1 & 0x2000) != 0) {
          iVar3 = iVar3 + param_3;
        }
      }
      else {
        iVar3 = iVar3 - param_3;
      }
      uVar2 = (short)uVar1 & 0xffff9fff;
      if (0xb4 < (int)uVar2) break;
      if (uVar2 == 0xb4) {
        param_1 = param_1 - param_3;
      }
      else {
        switch(uVar2) {
        case 0:
          param_1 = param_1 + param_3;
          break;
        case 0x2d:
          param_1 = param_1 + param_3;
        case 0x5a:
          param_2 = param_2 - param_3;
          break;
        case 0x87:
          param_1 = param_1 - param_3;
          param_2 = param_2 - param_3;
        }
      }
    }
    if (uVar2 != 0xe1) {
      if (uVar2 != 0x10e) break;
      goto LAB_006a641e;
    }
    param_1 = param_1 - param_3;
    param_2 = param_2 + param_3;
  } while( true );
  if (uVar2 == 0x13b) {
    param_1 = param_1 + param_3;
LAB_006a641e:
    param_2 = param_2 + param_3;
  }
  goto switchD_006a63e5_caseD_1;
}

