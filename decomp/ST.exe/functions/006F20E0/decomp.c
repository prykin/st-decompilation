
/* Recovered from embedded debug metadata:
   E:\Ourlib\Mf32int.cpp
   cMf32::RecMemFree */

void __thiscall cMf32::RecMemFree(cMf32 *this,uint *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  undefined4 uVar4;
  undefined4 local_48 [16];
  cMf32 *local_8;
  
  uVar4 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb4;
  local_8 = this;
  iVar2 = __setjmp3(local_48,0,unaff_ESI,uVar4);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined1 *)uVar4;
    iVar3 = FUN_006ad4d0(s_E__Ourlib_Mf32int_cpp_007efaa4,0x237,0,iVar2,&DAT_007a4ccc);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar2,0,0x7efaa4,0x239);
    return;
  }
  if (*param_1 != 0) {
    iVar2 = FUN_00751b10(*(int **)local_8,*param_1);
    if (iVar2 == 0) {
      FUN_006ab060(param_1);
      DAT_00858df8 = (undefined1 *)uVar4;
      return;
    }
    *param_1 = 0;
  }
  DAT_00858df8 = (undefined1 *)uVar4;
  return;
}

