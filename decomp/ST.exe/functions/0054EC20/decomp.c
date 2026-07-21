#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tplaysys.cpp
   PlaySystemTy::SendClientMail */

void __thiscall PlaySystemTy::SendClientMail(PlaySystemTy *this,int param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  AnonPointee_PlaySystemTy_0039 *pAVar7;
  PlaySystemTy *pPVar8;
  undefined4 *puVar9;
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
  iVar3 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  pPVar8 = local_10;
  if (iVar3 == 0) {
    *(undefined4 *)local_10->field_004F = 0;
    if (local_c != (AnonPointee_PlaySystemTy_0039 *)0x0) {
      do {
        puVar6 = &local_c->field_0013;
        puVar9 = &local_c->field_000F;
        local_c = (AnonPointee_PlaySystemTy_0039 *)local_c->field_0000;
        local_8 = local_8 + 0x1b + *puVar6 + *puVar9;
      } while (local_c != (AnonPointee_PlaySystemTy_0039 *)0x0);
      local_c = (AnonPointee_PlaySystemTy_0039 *)0x0;
    }
    uVar2 = local_8;
    if (local_10->field_0053 < local_8) {
      iVar3 = Library::DKW::LIB::FUN_006acf50(local_10->field_004F,local_8);
      pPVar8->field_004F = iVar3;
      pPVar8->field_0053 = uVar2;
    }
    local_c = pPVar8->field_0039;
    puVar6 = (undefined4 *)(pPVar8->field_004F + 4);
    if (local_c != (AnonPointee_PlaySystemTy_0039 *)0x0) {
      do {
        local_8 = local_c->field_0013 + 0x1b + local_c->field_000F;
        pAVar7 = local_c;
        puVar9 = puVar6;
        for (uVar5 = local_8 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar9 = pAVar7->field_0000;
          pAVar7 = (AnonPointee_PlaySystemTy_0039 *)&pAVar7->field_0x4;
          puVar9 = puVar9 + 1;
        }
        for (uVar5 = local_8 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar9 = *(undefined1 *)&pAVar7->field_0000;
          pAVar7 = (AnonPointee_PlaySystemTy_0039 *)((int)&pAVar7->field_0000 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        puVar6 = (undefined4 *)((int)puVar6 + local_8);
        *(int *)local_10->field_004F = *(int *)local_10->field_004F + 1;
        local_c = (AnonPointee_PlaySystemTy_0039 *)local_c->field_0000;
      } while (local_c != (AnonPointee_PlaySystemTy_0039 *)0x0);
      local_c = (AnonPointee_PlaySystemTy_0039 *)0x0;
      pPVar8 = local_10;
    }
    local_14 = uVar2;
    if (pPVar8->field_0039 != (AnonPointee_PlaySystemTy_0039 *)0x0) {
      FUN_006b9890((int *)&pPVar8->field_0039);
    }
    if ((*(int *)pPVar8->field_004F != 0) && (DAT_0080c512 == 0)) {
      iVar3 = FUN_00715360(g_int_00811764,1,'8',(char *)pPVar8->field_004F,local_14,1,0xffffffff);
      if (iVar3 != 0) {
        thunk_FUN_00550380(4);
      }
    }
    g_currentExceptionFrame = local_58.previous;
    return;
  }
  g_currentExceptionFrame = local_58.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\Andrey\\tplaysys.cpp",0x4e6,0,iVar3,"%s",
                             "PlaySystemTy::SendClientMail");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\tplaysys.cpp",0x4e8);
  return;
}

