#include "../../pseudocode_runtime.h"


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:8: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=1,
   pointer_dereferences=4, scalar_uses=0; sites=006DB160 dereference: MOV AX,word ptr [EBP +
   EAX*0x2] | 006DB17B dereference: MOV AX,word ptr [EBP + EAX*0x2] | 006DB18A dereference: MOV
   AX,word ptr [EBP + EDX*0x2] | 006DB1AB dereference: MOV AX,word ptr [EBP + EAX*0x2] */

void FUN_006db0d0(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,uint param_8,void *param_9)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  byte *puVar5;
  byte *pbVar6;
  int iVar7;
  bool bVar8;
  int iStack_1c;

  puVar5 = &stack0xfffffffc;
  iStack_1c = 0x6db0ed;
  piVar4 = (int *)(&stack0xffffffe8 + param_3 * -4);
  iVar3 = -1;
  iVar2 = -(param_7 >> 1);
  iVar7 = param_3;
  if (0 < param_3) {
    do {
      for (; iVar2 < 1; iVar2 = iVar2 + param_3) {
        iVar3 = iVar3 + 1;
      }
      *piVar4 = iVar3;
      iVar2 = iVar2 - param_7;
      piVar4 = piVar4 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  pbVar6 = (byte *)(param_5 - param_6);
  do {
    iVar2 = *(int *)(puVar5 + 0x20);
    if (iVar2 < 1) {
      do {
        pbVar6 = pbVar6 + *(int *)(puVar5 + 0x1c);
        bVar8 = SCARRY4(iVar2,*(int *)(puVar5 + 0x14));
        iVar2 = iVar2 + *(int *)(puVar5 + 0x14);
      } while (iVar2 == 0 || bVar8 != iVar2 < 0);
    }
    *(int *)(puVar5 + 0x20) = iVar2;
    iVar2 = *(int *)(puVar5 + 0x10);
    piVar4 = *(int **)(puVar5 + -8);
    (&iStack_1c)[-param_3] = (int)puVar5;
    iVar3 = *(int *)(puVar5 + 0x28);
    iVar7 = iVar2;
    if (((uint)param_1 & 2) == 0) {
joined_r0x006db171:
      while (1 < iVar7) {
        piVar1 = piVar4 + 1;
        iVar2 = *piVar4;
        piVar4 = piVar4 + 2;
        *param_1 = CONCAT22(*(undefined2 *)(iVar3 + (uint)pbVar6[*piVar1] * 2),
                            *(undefined2 *)
                             /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                             (iVar3 + CONCAT22((short)((uint)iVar2 >> 0x10),(ushort)pbVar6[iVar2]) *
                                      2));
        param_1 = param_1 + 1;
        iVar7 = iVar7 + -2;
      }
      if (iVar7 + -2 != -2) {
        *(undefined2 *)param_1 = *(undefined2 *)(iVar3 + (uint)pbVar6[*piVar4] * 2);
        param_1 = (undefined4 *)((int)param_1 + 2);
      }
    }
    else {
      piVar4 = piVar4 + 1;
      *(undefined2 *)param_1 = *(undefined2 *)(iVar3 + (uint)*pbVar6 * 2);
      param_1 = (undefined4 *)((int)param_1 + 2);
      iVar7 = iVar2 + -1;
      if (iVar7 != 0 && 0 < iVar2) goto joined_r0x006db171;
    }
    puVar5 = (undefined1 *)(&iStack_1c)[-param_3];
    param_1 = (undefined4 *)
              ((int)param_1 +
              *(int *)(puVar5 + 0xc) + (-*(int *)(puVar5 + 0x10) - *(int *)(puVar5 + 0x10)));
    *(int *)(puVar5 + 0x20) = *(int *)(puVar5 + 0x20) - *(int *)(puVar5 + 0x24);
    iVar2 = *(int *)(puVar5 + -4);
    iVar3 = iVar2 + -1;
    *(int *)(puVar5 + -4) = iVar3;
    if (iVar3 == 0 || iVar2 < 1) {
      return;
    }
  } while( true );
}

