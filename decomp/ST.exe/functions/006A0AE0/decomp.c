#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=11, used=0), and
   decompilation contains no value return */

void __thiscall
FUN_006a0ae0(void *this,int param_1,int param_2,undefined4 param_3,int param_4,uint param_5)

{
  uint *puVar1_mg1;
  uint uVar1;
  void *pvVar2;
  int iVar3;
  uint *puVar4;
  byte *puVar5;
  uint *puVar6;
  byte *puVar7;
  uint local_9c;
  ushort local_98;
  uint local_8;
  local_8 = 0;
  puVar1_mg1 = thunk_FUN_00692c10(CASE_A,param_4,&local_8,0,param_5);
  puVar4 = puVar1_mg1 + 5;
  puVar6 = &local_9c;
  memmove(puVar6, puVar4, 0x92); /* compiler REP MOVS byte copy */
  STPiece<2,2>(local_9c) = (undefined2)param_2;
  STPiece<0,2>(local_9c) = (undefined2)param_1;
  uVar1 = thunk_FUN_006a06d0(this,(param_1 * 0x14) / 100,(param_2 * 0x14) / 100);
  local_98 = (undefined2)uVar1;
  iVar3 = STField<int>(this,4) + 1;
  STField<int>(this,4) = iVar3;
  pvVar2 = Library::DKW::LIB::MemRealloc(*(void **)this,iVar3 * 0x92 + 0xaa);
  *(void **)this = pvVar2;
  puVar5 = (byte *)(&local_9c);
  puVar7 = (byte *)((int)pvVar2 + STField<int>(this,4) * 0x92 + -0x7a);
  memmove(puVar7, puVar5, 0x92); /* compiler REP MOVS byte copy */
  return;
}

