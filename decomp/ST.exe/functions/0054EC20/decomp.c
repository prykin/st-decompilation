#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tplaysys.cpp
   PlaySystemTy::SendClientMail

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall PlaySystemTy::SendClientMail(PlaySystemTy *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  AnonPointee_PlaySystemTy_0039 *pAVar9;
  PlaySystemTy *pPVar10;
  char *pcVar11;
  InternalExceptionFrame local_58;
  uint local_14;
  PlaySystemTy *local_10;
  AnonPointee_PlaySystemTy_0039 *local_c;
  uint local_8;

  local_c = this->field_0039;
  local_8 = 4;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_10 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  pPVar10 = local_10;
  if (iVar5 == 0) {
    pcVar6 = local_10->field_004F;
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6[2] = '\0';
    pcVar6[3] = '\0';
    if (local_c != nullptr) {
      do {
        puVar1 = &local_c->field_0013;
        puVar2 = &local_c->field_000F;
        local_c = (AnonPointee_PlaySystemTy_0039 *)local_c->field_0000;
        local_8 = local_8 + 0x1b + *puVar1 + *puVar2;
      } while (local_c != nullptr);
      local_c = nullptr;
    }
    uVar4 = local_8;
    if (local_10->field_0053 < local_8) {
      pcVar6 = Library::DKW::LIB::MemRealloc(local_10->field_004F,local_8);
      pPVar10->field_004F = pcVar6;
      pPVar10->field_0053 = uVar4;
    }
    local_c = pPVar10->field_0039;
    pcVar6 = pPVar10->field_004F + 4;
    if (local_c != nullptr) {
      do {
        local_8 = local_c->field_0013 + 0x1b + local_c->field_000F;
        pAVar9 = local_c;
        pcVar11 = pcVar6;
        for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar11 = pAVar9->field_0000;
          pAVar9 = (AnonPointee_PlaySystemTy_0039 *)&pAVar9->field_0x4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar11 = *(char *)&pAVar9->field_0000;
          pAVar9 = (AnonPointee_PlaySystemTy_0039 *)((int)&pAVar9->field_0000 + 1);
          pcVar11 = pcVar11 + 1;
        }
        pcVar6 = pcVar6 + local_8;
        *(int *)local_10->field_004F = *(int *)local_10->field_004F + 1;
        local_c = (AnonPointee_PlaySystemTy_0039 *)local_c->field_0000;
      } while (local_c != nullptr);
      local_c = nullptr;
      pPVar10 = local_10;
    }
    local_14 = uVar4;
    if (pPVar10->field_0039 != nullptr) {
      FUN_006b9890((int *)&pPVar10->field_0039);
    }
    if ((*(int *)pPVar10->field_004F != 0) && (DAT_0080c512 == 0)) {
      iVar5 = FUN_00715360(g_int_00811764,1,'8',pPVar10->field_004F,local_14,1,0xffffffff);
      if (iVar5 != 0) {
        thunk_FUN_00550380(4);
      }
    }
    g_currentExceptionFrame = local_58.previous;
    return;
  }
  g_currentExceptionFrame = local_58.previous;
  iVar7 = ReportDebugMessage("E:\\__titans\\Andrey\\tplaysys.cpp",0x4e6,0,iVar5,"%s",
                             "PlaySystemTy::SendClientMail");
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar5,0,"E:\\__titans\\Andrey\\tplaysys.cpp",0x4e8);
  return;
}

