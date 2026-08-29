#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0075C180 -> 0075B800 @ 0075C2A9
   [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:3: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=2,
   pointer_dereferences=5, scalar_uses=0; sites=0075B856 dereference: MOV EBX,dword ptr [EDI] |
   0075B890 dereference: MOV ECX,dword ptr [EDI] | 0075B8B3 dereference: MOV EDX,dword ptr [ECX +
   EAX*0x4 + 0x8c] | 0075B8BA dereference: MOV EDI,dword ptr [ECX + EAX*0x4] | 0075B8BD dereference:
   MOV EAX,dword ptr [ECX + 0xd0] */

uint FUN_0075b800(undefined4 *param_1,RecoveredRecordView_0075C180_C6DA97FC *param_2,int param_3,
                 RecoveredRecord_0075B800_A23E79EB *param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int *piVar3;

  if (param_3 < param_5) {

    iVar1 = FUN_0075b720(param_1,param_2,param_3,param_5);
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    param_2 = (RecoveredRecordView_0075C180_C6DA97FC *)param_1[3];
    param_3 = param_1[4];
  }
  iVar1 = param_3 - param_5;
  piVar3 = (int *)(&param_4->field_0x44 + param_5 * 4);
  uVar2 = (int)param_2 >> ((byte)iVar1 & 0x1f) & (1 << ((byte)param_5 & 0x1f)) - 1U;
  if (*piVar3 < (int)uVar2) {
    do {
      if (iVar1 < 1) {

        iVar1 = FUN_0075b720(param_1,param_2,iVar1,1);
        if (iVar1 == 0) {
          return 0xffffffff;
        }
        param_2 = (RecoveredRecordView_0075C180_C6DA97FC *)param_1[3];
        iVar1 = param_1[4];
      }
      iVar1 = iVar1 + -1;
      piVar3 = piVar3 + 1;
      uVar2 = uVar2 << 1 | (int)param_2 >> ((byte)iVar1 & 0x1f) & 1U;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_5 = param_5 + 1;
    } while (*piVar3 < (int)uVar2);
  }
  param_1[4] = iVar1;
  param_1[3] = param_2;
  if (0x10 < param_5) {
    return 0;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return (uint)*(byte *)((*(int *)(&param_4->field_0x8c + param_5 * 4) -
                         *(int *)(&param_4->field_0x0 + param_5 * 4)) + param_4->field_00D0 + 0x11 +
                        uVar2);
}

