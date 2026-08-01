#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=11, used=0), and
   decompilation contains no value return */

void __thiscall
FUN_006a0ae0(void *this,int param_1,int param_2,undefined4 param_3,int param_4,uint param_5)

{
  uint *puVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  byte *puVar5;
  uint *puVar6;
  byte *puVar7;
  undefined4 local_9c;
  undefined2 local_98;
  undefined4 local_8;

  local_8 = 0;
  puVar1 = thunk_FUN_00692c10(CASE_A,param_4,&local_8,0,param_5);
  puVar1 = puVar1 + 5;
  puVar6 = &local_9c;
  memmove(puVar6, puVar1, 0x92); /* compiler REP MOVS byte copy */
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  local_9c._2_2_ = (undefined2)param_2;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  local_9c._0_2_ = (undefined2)param_1;
  uVar2 = thunk_FUN_006a06d0(this,(param_1 * 0x14) / 100,(param_2 * 0x14) / 100);
  local_98 = (undefined2)uVar2;
  iVar4 = *(int *)((int)this + 4) + 1;
  *(int *)((int)this + 4) = iVar4;
  pvVar3 = Library::DKW::LIB::MemRealloc(*(AnonPointee_TLOBaseTy_0607 **)this,iVar4 * 0x92 + 0xaa);
  *(void **)this = pvVar3;
  puVar5 = (byte *)(&local_9c);
  puVar7 = (byte *)((int)pvVar3 + *(int *)((int)this + 4) * 0x92 + -0x7a);
  memmove(puVar7, puVar5, 0x92); /* compiler REP MOVS byte copy */
  return;
}

