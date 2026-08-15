#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::ChangePlayer

   [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

void __thiscall FSGSTy::ChangePlayer(FSGSTy *this,byte *param_1)

{
  byte bVar1;
  int iVar3;
  char *pcVar3;
  int iVar5;
  int iVar4;
  uint uVar6;
  byte *pbVar7;
  char *pcVar8;
  bool bVar9;
  InternalExceptionFrame local_54;
  uint local_10;
  AnonShape_00413AF0_B6B4EE9A *local_c;
  FSGSTy *local_8;

  if (((this->array_00BC[0xc].field_01DF == '\x06') && (this->array_00BC[0xc].field_01E0 == '\0'))
     && (this->field_1EA6 != nullptr)) {
    local_54.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_54;
    local_8 = this;
    iVar3 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
    if (iVar3 == 0) {
      uVar6 = 0;
      local_c = (AnonShape_00413AF0_B6B4EE9A *)local_8->field_1EA6;
      local_10 = ((FSGSTy_field_1EA6DArray *)local_c)->count;
      if (local_10 != 0) {
        if (local_10 == 0) {
          pcVar8 = nullptr;
          goto LAB_005a2aea;
        }
        do {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
          pcVar8 = &((FSGSTy_field_1EA6DArray *)local_c)->data->field_0000 +
                   ((FSGSTy_field_1EA6DArray *)local_c)->elementSize * uVar6;
LAB_005a2aea:
          pcVar3 = pcVar8;
          pbVar7 = param_1;
          if (pcVar8 != nullptr) {
            do {
              bVar1 = *pcVar3;
              bVar9 = bVar1 < *pbVar7;
              if (bVar1 != *pbVar7) {
LAB_005a2b17:
                iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                goto LAB_005a2b1c;
              }
              if (bVar1 == 0) break;
              bVar1 = pcVar3[1];
              bVar9 = bVar1 < pbVar7[1];
              if (bVar1 != pbVar7[1]) goto LAB_005a2b17;
              pcVar3 = pcVar3 + 2;
              pbVar7 = pbVar7 + 2;
            } while (bVar1 != 0);
            iVar5 = 0;
LAB_005a2b1c:
            if (iVar5 == 0) {
              *(undefined4 *)(pcVar8 + 0x25) = *(undefined4 *)(param_1 + 0x25);
              break;
            }
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < local_10);
      }
      local_8->field_002D = 5;
      FUN_006e6080(local_8,2,local_8->field_1B20,(undefined4 *)&local_8->field_0x1d);
      g_currentExceptionFrame = local_54.previous;
      return;
    }
    g_currentExceptionFrame = local_54.previous;
    iVar4 = ReportDebugMessage("E:\\__titans\\Start\\fsgs_obj.cpp",0xa50,0,iVar3,"%s"
                               ,"FSGSTy::ChangePlayer");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0xa50);
  }
  return;
}

