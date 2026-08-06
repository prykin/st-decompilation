#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall
FUN_0055c320(void *this,byte *param_1,char *param_2,char *param_3,
            AnonShape_0055C320_953077EC *param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  char *pcVar9;
  char *pcVar10;
  byte *pbVar10_mg1;
  char *pcVar9_mg0;
  byte *pbVar7_mg0;
  char *pcVar9_mg2;

  uVar3 = 0xffffffff;
  do {
    pbVar7_mg0 = param_1;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pbVar7_mg0 = param_1 + 1;
    bVar1 = *param_1;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = pbVar7_mg0;
  } while (bVar1 != 0);
  uVar3 = ~uVar3;
  pbVar7 = pbVar7_mg0 + -uVar3;
  pbVar8 = (byte *)((int)this + 0x44);
  memmove(pbVar8, pbVar7, uVar3); /* compiler REP MOVS byte copy */
  uVar4 = 0;
  uVar3 = 0xffffffff;
  do {
    pcVar9_mg0 = param_2;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar9_mg0 = param_2 + 1;
    cVar2 = *param_2;
    param_2 = pcVar9_mg0;
  } while (cVar2 != '\0');
  uVar3 = ~uVar3;
  pcVar10 = pcVar9_mg0 + -uVar3;
  pcVar9 = (char *)((int)this + 0x244);
  memmove(pcVar9, pcVar10, uVar3); /* compiler REP MOVS byte copy */
  uVar4 = 0;
  uVar3 = 0xffffffff;
  do {
    pcVar9_mg2 = param_3;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar9_mg2 = param_3 + 1;
    cVar2 = *param_3;
    param_3 = pcVar9_mg2;
  } while (cVar2 != '\0');
  uVar3 = ~uVar3;
  iVar5 = 0;
  pcVar10 = pcVar9_mg2 + -uVar3;
  pcVar9 = (char *)((int)this + 0x444);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar9 = pcVar9 + 4;
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_1 = nullptr;
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar9 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar9 = pcVar9 + 1;
  }
  if (0 < param_4->field_0008) {
    do {
      uVar3 = 0xffffffff;
      pcVar10 = *(char **)(param_4->field_0014 + iVar5 * 4);
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar2 != '\0');
      iVar5 = iVar5 + 1;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = param_1 + ~uVar3;
    } while (iVar5 < param_4->field_0008);
  }
  if (STField<int>(this,0x644) != 0) {
    FreeAndNull((undefined4 *)((int)this + 0x644));
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_1 = Library::DKW::LIB::MemAllocClear((uint)(param_1 + param_4->field_0008));
  STField<undefined4>(this,0x644) = param_1;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_1 == nullptr) {
    STField<undefined1>(this,10) = 1;
    return;
  }
  iVar5 = param_4->field_0008;
  iVar6 = 0;
  if (iVar5 < 1) {
    STField<undefined1>(this,10) = 1;
    return;
  }
  if (iVar5 < 1) {
    pcVar10 = nullptr;
    goto LAB_0055c414;
  }
  do {
    pcVar10 = *(char **)(param_4->field_0014 + iVar6 * 4);
LAB_0055c414:
    uVar3 = 0xffffffff;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    uVar3 = ~uVar3;
    if (iVar6 < iVar5) {
      pbVar7 = *(byte **)(param_4->field_0014 + iVar6 * 4);
    }
    else {
      pbVar7 = nullptr;
    }
    pbVar10_mg1 = param_1;
    memmove(pbVar10_mg1, pbVar7, uVar3); /* compiler REP MOVS byte copy */
    param_1[uVar3] = -(iVar6 != param_4->field_0008 + -1) & 10;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = param_1 + uVar3 + 1;
    iVar5 = param_4->field_0008;
    iVar6 = iVar6 + 1;
    if (iVar5 <= iVar6) {
      STField<undefined1>(this,10) = 1;
      return;
    }
  } while( true );
}

