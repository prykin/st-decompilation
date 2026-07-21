#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\grig\visible.cpp
   Visible::PrepareAfterSave

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00558840 -> 005585F0 @ 00558915 */

void __thiscall Visible::PrepareAfterSave(Visible *this,ushort *param_1)

{
  code *pcVar1;
  Visible *pVVar2;
  int errorCode;
  uint uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint *puVar8;
  void **value;
  int iVar9;
  InternalExceptionFrame local_58;
  Visible *local_14;
  int local_10;
  undefined4 *local_c;
  uint *local_8;

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  pVVar2 = local_14;
  if (errorCode == 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_14->field_0020 = *(undefined4 *)(param_1 + 0xc);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_14->field_0024 = *(undefined4 *)(param_1 + 0xe);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_14->field_0028 = *(undefined4 *)(param_1 + 0x10);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_14->field_002C = *(undefined4 *)(param_1 + 0x12);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_14->field_0030 = *(undefined4 *)(param_1 + 0x14);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_14->field_0034 = *(undefined4 *)(param_1 + 0x16);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_14->field_001C = *(undefined4 *)(param_1 + 0x18);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_14->field_0114 = *(undefined4 *)(param_1 + 0x20);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_14->field_00F8 = *(undefined4 *)(param_1 + 0x22);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_14->field_00FC = *(undefined4 *)(param_1 + 0x24);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_14->field_0100 = *(undefined4 *)(param_1 + 0x26);
    if (local_14->field_0114 != 0) {
      local_c = &local_14->field_003C;
      uVar3 = local_14->field_002C * local_14->field_0028;
      local_10 = 4;
      local_8 = (uint *)(param_1 + 0x40);
      do {
        puVar4 = Library::DKW::LIB::FUN_006aac10(uVar3);
        *local_c = puVar4;
        uVar7 = pVVar2->field_002C * pVVar2->field_0028;
        local_c = local_c + 1;
        puVar8 = local_8;
        for (uVar3 = uVar7 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar4 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar4 = puVar4 + 1;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(char *)puVar4 = (char)*puVar8;
          puVar8 = (uint *)((int)puVar8 + 1);
          puVar4 = (uint *)((int)puVar4 + 1);
        }
        uVar3 = pVVar2->field_002C * pVVar2->field_0028;
        puVar8 = (uint *)((int)local_8 + uVar3);
        local_10 = local_10 + -1;
        local_8 = puVar8;
      } while (local_10 != 0);
      puVar5 = Library::DKW::LIB::FUN_006aac10(pVVar2->field_0020 * pVVar2->field_0024 * 2);
      pVVar2->field_0038 = puVar5;
      puVar5 = Library::DKW::LIB::FUN_006aac10(pVVar2->field_0030 * pVVar2->field_0034);
      pVVar2->field_004C = puVar5;
      puVar5 = Library::DKW::LIB::FUN_006aac10(pVVar2->field_0030 * pVVar2->field_0034 * 2);
      pVVar2->field_0050 = puVar5;
      uVar6 = FUN_006b0060((uint *)0x0,puVar8);
      pVVar2->field_00F4 = uVar6;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      uVar6 = FUN_006b0060((uint *)0x0,(uint *)((int)puVar8 + *(int *)(param_1 + 0x1c)));
      pVVar2->field_0110 = uVar6;
    }
    g_currentExceptionFrame = local_58.previous;
    return;
  }
  g_currentExceptionFrame = local_58.previous;
  iVar9 = 4;
  value = (void **)&local_14->field_003C;
  do {
    if (*value != (void *)0x0) {
      FreeAndNull(value);
    }
    value = value + 1;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  iVar9 = ReportDebugMessage("E:\\__titans\\grig\\visible.cpp",0x132,0,errorCode,"%s"
                             ,"Visible::PrepareAfterSave error");
  if (iVar9 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\grig\\visible.cpp",0x133);
  return;
}

