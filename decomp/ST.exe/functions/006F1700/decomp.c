
/* Recovered from embedded debug metadata:
   E:\Ourlib\Mf32int.cpp
   cMf32::RecPutNoname */

uint __thiscall cMf32::RecPutNoname(cMf32 *this,undefined4 *param_1,uint param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_4c;
  undefined4 local_48 [16];
  cMf32 *local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  local_8 = this;
  iVar2 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if ((param_1 == (undefined4 *)0x0) || (param_2 == 0)) {
      FUN_006a5e40(-0x34,DAT_007ed77c,0x7efaa4,0x11b);
    }
    uVar3 = FUN_00751050(*(uint **)local_8,(ushort *)0x0,param_1,param_2);
    DAT_00858df8 = (undefined4 *)local_4c;
    return uVar3;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar4 = FUN_006ad4d0(s_E__Ourlib_Mf32int_cpp_007efaa4,0x120,0,iVar2,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  FUN_006a5e40(iVar2,0,0x7efaa4,0x122);
  return 0xffffffff;
}

