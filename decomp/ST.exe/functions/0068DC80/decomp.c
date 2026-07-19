
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::InitData */

int __thiscall AiTactClassTy::InitData(AiTactClassTy *this,undefined4 *param_1)

{
  code *pcVar1;
  AiTactClassTy *pAVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  undefined4 *puVar7;
  int *piVar8;
  void *unaff_EDI;
  undefined4 *puVar9;
  InternalExceptionFrame local_64;
  undefined4 local_20;
  int local_1c;
  AiTactClassTy *local_18;
  uint local_14;
  undefined4 *local_10;
  int local_c;
  undefined4 *local_8;
  
  puVar9 = (undefined4 *)0x0;
  local_c = 0;
  local_10 = (undefined4 *)0x0;
  local_8 = (undefined4 *)0x0;
  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  local_18 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_64.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pAVar2 = local_18;
  if (iVar3 == 0) {
    if (local_18 != (AiTactClassTy *)0x0) {
      puVar9 = &local_18->field_0020;
    }
    puVar7 = param_1;
    for (iVar3 = 0x43; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    local_18->field_0020 = 0x38e;
    local_18->field_0038 = 1;
    piVar8 = &local_18->field_00A5;
    iVar3 = 8;
    do {
      if (*piVar8 != 0) {
        iVar4 = FUN_006b0060((uint *)0x0,(uint *)(piVar8[1] + 0x10b + (int)param_1));
        *piVar8 = iVar4;
      }
      piVar8 = piVar8 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (pAVar2->field_00A5 == 0) {
      puVar5 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,8,10);
      pAVar2->field_00A5 = puVar5;
    }
    if (pAVar2->field_00B1 == 0) {
      puVar5 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x34,10);
      pAVar2->field_00B1 = puVar5;
    }
    if (pAVar2->field_00BD == 0) {
      puVar5 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x4a,10);
      pAVar2->field_00BD = puVar5;
    }
    if (pAVar2->field_00C9 == 0) {
      puVar5 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,8,10);
      pAVar2->field_00C9 = puVar5;
    }
    iVar3 = 0;
    if (0 < pAVar2->field_0125) {
      *(undefined4 *)(pAVar2->field_00A5 + 0xc) = 0;
      iVar4 = *(int *)((int)param_1 + 0x107) + 0x10b + (int)param_1;
      if (0 < pAVar2->field_0125) {
        do {
          *(undefined4 *)(iVar4 + 4) = *(undefined4 *)&pAVar2->field_0x24;
          *(undefined4 *)(iVar4 + 0x77) = pAVar2->field_009D;
          *(undefined1 *)(iVar4 + 0x6a) = pAVar2->field_0088;
          STPlaySystemC::CreateGameObject(DAT_00802a38,900,&local_14,&local_c,iVar4,0);
          local_1c = local_c;
          local_20 = *(undefined4 *)(local_c + 0x18);
          Library::DKW::TBL::FUN_006ae1c0((uint *)pAVar2->field_00A5,&local_20);
          *(AiTactClassTy **)(local_c + 0x284) = pAVar2;
          iVar4 = iVar4 + *(int *)(iVar4 + 0x14);
          iVar3 = iVar3 + 1;
        } while (iVar3 < pAVar2->field_0125);
      }
      local_10 = thunk_FUN_00668180(s___REPAIR_FLEET___007d571c,pAVar2->field_0039,0x8000,0,
                                    pAVar2->field_0x24);
      local_8 = FltDataPack(local_10,&local_14);
      thunk_FUN_006686c0((int *)&local_10);
      local_8[1] = *(undefined4 *)&pAVar2->field_0x24;
      *(undefined4 *)((int)local_8 + 0x77) = pAVar2->field_009D;
      *(undefined1 *)((int)local_8 + 0x6a) = pAVar2->field_0088;
      STPlaySystemC::CreateGameObject(DAT_00802a38,900,&local_14,&local_c,local_8,0);
      thunk_FUN_006686c0((int *)&local_8);
      local_1c = local_c;
      local_20 = *(undefined4 *)(local_c + 0x18);
      uVar6 = Library::DKW::TBL::FUN_006ae1c0((uint *)pAVar2->field_00A5,&local_20);
      pAVar2->field_00A1 = uVar6;
      *(AiTactClassTy **)(local_c + 0x284) = pAVar2;
    }
    g_currentExceptionFrame = local_64.previous;
    return 0;
  }
  g_currentExceptionFrame = local_64.previous;
  thunk_FUN_0068e010((int)local_18);
  thunk_FUN_006686c0((int *)&local_8);
  thunk_FUN_006686c0((int *)&local_10);
  iVar4 = ReportDebugMessage(s_E____titans_ai_ai_tact_cpp_007d56e0,0x61,0,iVar3,&DAT_007a4ccc,
                             s_AiTactClassTy__InitData_007d5700);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  RaiseInternalException(iVar3,0,s_E____titans_ai_ai_tact_cpp_007d56e0,0x62);
  return iVar3;
}

