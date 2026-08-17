#include "../../pseudocode_runtime.h"


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: complete mutable byte-buffer machine proof: direct_calls=4, byte_reads=3,
   byte_writes=6, rep_movs_transports=1, wide_dereferences=0, escapes=0; byte_read_sites=0040F559
   MOVSB.REP ES:EDI,ESI | 0040F65C CMP byte ptr [EDX + EDI*0x1],0x0 | 0040F74E CMP byte ptr [ESI +
   EDX*0x1],0x0; byte_write_sites=0040F5CD MOV byte ptr [EDX + EDI*0x1],CL | 0040F615 MOV byte ptr
   [EDI + EDX*0x1],CL | 0040F667 MOV byte ptr [EDI],DL | 0040F6CC MOV byte ptr [ESI + EAX*0x1],DL |
   0040F711 MOV byte ptr [ESI + EAX*0x1],DL | 0040F761 MOV byte ptr [ESI],DL */

void FUN_0040f4d0(byte *param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  byte *pbVar12;
  int local_24;
  byte *pbVar13_mg0;

  iVar1 = -(param_2 + 3 & 0xfffffffc);
  pcVar10 = &stack0xffffffbc + iVar1;
  pcVar11 = &stack0xffffffbc + iVar1;
  pbVar13_mg0 = param_1;
  pbVar12 = &stack0xffffffbc + iVar1;
  memmove(pbVar12, pbVar13_mg0, param_2); /* compiler REP MOVS byte copy */
  cVar2 = (char)param_2;
  if (param_4 == 0) {
    local_24 = param_3 / 2;
    iVar3 = 0;
    if (0 < param_3) {
      do {
        if ((&stack0xffffffbc)[iVar3 + iVar1] != '\0') {
          local_24 = local_24 + 1;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_3);
    }
    uVar5 = 0;
    if (0 < param_3) {
      do {
        if (pcVar11[param_3] != '\0') {
          local_24 = local_24 + 1;
        }
        cVar7 = (char)local_24;
        if (*pcVar11 != '\0') {
          cVar7 = cVar7 + cVar2;
        }
        pcVar11[(int)param_1 - (int)(&stack0xffffffbc + iVar1)] = cVar7;
        if ((uVar5 & 1) != 0) {
          local_24 = local_24 + -1;
        }
        uVar5 = uVar5 + 1;
        pcVar11 = pcVar11 + 1;
      } while ((int)uVar5 < param_3);
    }
    if ((int)uVar5 < (int)(param_2 - param_3)) {
      pcVar11 = &stack0xffffffbc + uVar5 + iVar1;
      do {
        if (pcVar11[param_3] != '\0') {
          local_24 = local_24 + 1;
        }
        cVar7 = (char)local_24;
        if (*pcVar11 != '\0') {
          cVar7 = cVar7 + cVar2;
        }
        pcVar11[(int)param_1 - (int)(&stack0xffffffbc + iVar1)] = cVar7;
        if ((&stack0xffffffbc)[(uVar5 - param_3) + iVar1] != '\0') {
          local_24 = local_24 + -1;
        }
        uVar5 = uVar5 + 1;
        pcVar11 = pcVar11 + 1;
      } while ((int)uVar5 < (int)(param_2 - param_3));
    }
    if ((int)uVar5 < (int)param_2) {
      pbVar12 = param_1 + uVar5;
      uVar4 = param_2 - uVar5;
      do {
        if ((uVar4 & 1) == 0) {
          local_24 = local_24 + 1;
        }
        bVar8 = (byte)local_24;
        if (pbVar12[(int)(&stack0xffffffbc + (iVar1 - (int)param_1))] != 0) {
          bVar8 = cVar2 + bVar8;
        }
        *pbVar12 = bVar8;
        if ((&stack0xffffffbc)[(uVar5 - param_3) + iVar1] != '\0') {
          local_24 = local_24 + -1;
        }
        uVar5 = uVar5 + 1;
        uVar4 = uVar4 - 1;
        pbVar12 = pbVar12 + 1;
      } while ((int)uVar5 < (int)param_2);
    }
  }
  else {
    bVar8 = 0;
    iVar9 = param_2 - param_3;
    for (iVar3 = iVar9; iVar3 < (int)param_2; iVar3 = iVar3 + 1) {
      if ((&stack0xffffffbc)[iVar3 + iVar1] != '\0') {
        bVar8 = bVar8 + 1;
      }
    }
    iVar3 = 0;
    if (0 < param_3) {
      do {
        if ((&stack0xffffffbc)[iVar3 + iVar1] != '\0') {
          bVar8 = bVar8 + 1;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_3);
    }
    iVar3 = 0;
    if (0 < param_3) {
      do {
        if (pcVar10[param_3] != '\0') {
          bVar8 = bVar8 + 1;
        }
        bVar6 = bVar8;
        if (*pcVar10 != '\0') {
          bVar6 = cVar2 + bVar8;
        }
        pcVar10[(int)param_1 - (int)(&stack0xffffffbc + iVar1)] = bVar6;
        if ((&stack0xffffffbc)[param_2 + (iVar3 - param_3) + iVar1] != '\0') {
          bVar8 = bVar8 - 1;
        }
        iVar3 = iVar3 + 1;
        pcVar10 = pcVar10 + 1;
      } while (iVar3 < param_3);
    }
    if (iVar3 < iVar9) {
      pcVar11 = &stack0xffffffbc + iVar3 + iVar1;
      do {
        if (pcVar11[param_3] != '\0') {
          bVar8 = bVar8 + 1;
        }
        bVar6 = bVar8;
        if (*pcVar11 != '\0') {
          bVar6 = cVar2 + bVar8;
        }
        pcVar11[(int)param_1 - (int)(&stack0xffffffbc + iVar1)] = bVar6;
        if ((&stack0xffffffbc)[(iVar3 - param_3) + iVar1] != '\0') {
          bVar8 = bVar8 - 1;
        }
        iVar3 = iVar3 + 1;
        pcVar11 = pcVar11 + 1;
      } while (iVar3 < iVar9);
    }
    if (iVar3 < (int)param_2) {
      pbVar12 = param_1 + iVar3;
      do {
        if ((&stack0xffffffbc)[param_3 + (iVar3 - param_2) + iVar1] != '\0') {
          bVar8 = bVar8 + 1;
        }
        bVar6 = bVar8;
        if (pbVar12[(int)(&stack0xffffffbc + (iVar1 - (int)param_1))] != 0) {
          bVar6 = bVar8 + cVar2;
        }
        *pbVar12 = bVar6;
        if ((&stack0xffffffbc)[(iVar3 - param_3) + iVar1] != '\0') {
          bVar8 = bVar8 - 1;
        }
        iVar3 = iVar3 + 1;
        pbVar12 = pbVar12 + 1;
      } while (iVar3 < (int)param_2);
    }
  }
  return;
}

