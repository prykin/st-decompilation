#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0), and
   decompilation contains no value return */

void __cdecl
FUN_006a3930(int *param_1,int param_2,int param_3,int param_4,ushort *param_5,undefined *param_6,
            undefined4 param_7)

{
  uint uVar1;
  ushort *puVar2;
  int iVar3;
  ulonglong local_c;
  uVar1 = thunk_FUN_006a3a00(param_1,param_2,param_3,param_4,param_5);

  puVar2 = STPointerBoundaryCast<ushort *>(thunk_FUN_006a3ae0(uVar1));

  iVar3 = thunk_FUN_006a1370(param_1,param_2,param_3,param_4,
                             (RecoveredRecord_006A1370_30F34641 *)&local_c);

  iVar3 = thunk_FUN_006a24e0((ushort *)&local_c,(short)iVar3,param_5,param_4,0xff);
  if ((iVar3 == 0) || (puVar2 != (ushort *)(STPiece<4,4>(local_c) & 0xf))) {
    thunk_FUN_006a3420(param_5,puVar2);
    thunk_FUN_006a1620(param_1,param_2,param_3,param_4,0xff,param_5,param_6,param_7);
  }
  return;
}

