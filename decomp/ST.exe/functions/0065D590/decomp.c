#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:0: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=1,
   pointer_dereferences=4, scalar_uses=0; sites=0065D590 dereference: MOV EDX,dword ptr [ECX +
   0x20b] | 0065D5BA dereference: MOV EDX,dword ptr [ECX + 0x20b] | 0065D5C8 dereference: MOV dword
   ptr [ECX + 0x284],EDI | 0065D5D2 dereference: MOV dword ptr [ECX + 0x284],EDI */

void __fastcall FUN_0065d590(RecoveredRecordView_0065D590_F2A3738B *param_1)

{
  int iVar1;
  AnonNested_0065D590_020B_7D3FD1B5 *pAVar2;
  uint uVar3;
  bool bVar4;

  pAVar2 = param_1->field_020B;
  uVar3 = 0;
  if (0 < (int)pAVar2->field_000C) {
    bVar4 = pAVar2->field_000C != 0;
    do {
      if (bVar4) {
        iVar1 = pAVar2->field_0008 * uVar3 + pAVar2->field_001C;
      }
      else {
        iVar1 = 0;
      }
      STField<undefined4>(iVar1,0x24) = 0;
      pAVar2 = param_1->field_020B;
      uVar3 = uVar3 + 1;
      bVar4 = uVar3 < (uint)pAVar2->field_000C;
    } while ((int)uVar3 < (int)pAVar2->field_000C);
    param_1->field_0284 = 0;
    return;
  }
  param_1->field_0284 = 0;
  return;
}

