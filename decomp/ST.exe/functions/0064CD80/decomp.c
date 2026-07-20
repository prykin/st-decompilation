
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_event.cpp
   AiEventClassTy::InitData */

int __thiscall AiEventClassTy::InitData(AiEventClassTy *this,int *param_1)

{
  code *pcVar1;
  AiEventClassTy *pAVar2;
  int iVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  int *piVar9;
  uint uVar10;
  undefined4 *puVar11;
  void *unaff_EDI;
  int *piVar12;
  bool bVar13;
  InternalExceptionFrame local_4c;
  AiEventClassTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pAVar2 = local_8;
  if (iVar3 == 0) {
    if (local_8 == (AiEventClassTy *)0x0) {
      piVar12 = (int *)0x0;
    }
    else {
      piVar12 = (int *)&local_8->field_008C;
    }
    piVar9 = param_1;
    for (iVar3 = 0x127; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar12 = *piVar9;
      piVar9 = piVar9 + 1;
      piVar12 = piVar12 + 1;
    }
    *(short *)piVar12 = (short)*piVar9;
    *(undefined1 *)((int)piVar12 + 2) = *(undefined1 *)((int)piVar9 + 2);
    local_8->field_0091 = 1;
    puVar4 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,5,5);
    pAVar2->field_05B3 = puVar4;
    uVar10 = 0;
    do {
      Library::DKW::TBL::FUN_006b6020((uint *)pAVar2->field_05B3,uVar10,&DAT_008016a0);
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < 4);
    if (pAVar2->field_008C == '\0') {
      pAVar2->field_0088 = DAT_00808754;
      iVar3 = (**(code **)(pAVar2->field_0000 + 0x18))();
      uVar10 = iVar3 * 2 + 2;
      pAVar2->field_00D2 = uVar10;
      if (0x18 < uVar10) {
        pAVar2->field_00D2 = 3;
      }
    }
    else {
      pAVar2->field_0088 = pAVar2->field_00DA;
    }
    iVar3 = pAVar2->field_0506;
    puVar11 = &pAVar2->field_04FA;
    if (puVar11 == (undefined4 *)0x0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *puVar11 * 5;
    }
    puVar5 = Library::DKW::LIB::FUN_006aac10(uVar10);
    pAVar2->field_0502 = puVar5;
    if (puVar11 == (undefined4 *)0x0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *puVar11 * 5;
    }
    puVar11 = (undefined4 *)(iVar3 + 0x49e + (int)param_1);
    for (uVar8 = uVar10 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar5 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar11;
      puVar11 = (undefined4 *)((int)puVar11 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    uVar6 = FUN_006b0060((uint *)0x0,(uint *)(pAVar2->field_04F2 + 0x49e + (int)param_1));
    pAVar2->field_04EE = uVar6;
    puVar4 = Library::DKW::TBL::FUN_006c8680
                       ((uint *)0x0,(uint *)(pAVar2->field_04E6 + 0x49e + (int)param_1));
    pAVar2->field_04E2 = puVar4;
    iVar3 = pAVar2->field_04EE;
    uVar10 = 0;
    if (0 < *(int *)(iVar3 + 0xc)) {
      bVar13 = *(int *)(iVar3 + 0xc) != 0;
      do {
        if (bVar13) {
          iVar3 = *(int *)(iVar3 + 8) * uVar10 + *(int *)(iVar3 + 0x1c);
        }
        else {
          iVar3 = 0;
        }
        if (*(int *)(iVar3 + 0xf) != 0) {
          uVar6 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)(iVar3 + 0x13) + 0x49e + (int)param_1));
          *(undefined4 *)(iVar3 + 0xf) = uVar6;
        }
        iVar3 = pAVar2->field_04EE;
        uVar10 = uVar10 + 1;
        bVar13 = uVar10 < *(uint *)(iVar3 + 0xc);
      } while ((int)uVar10 < (int)*(uint *)(iVar3 + 0xc));
    }
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  FUN_00402e14((int)local_8);
  iVar7 = ReportDebugMessage(s_E____titans_ai_ai_event_cpp_007d2a34,0x50,0,iVar3,&DAT_007a4ccc,
                             s_AiEventClassTy__InitData_007d2a58);
  if (iVar7 != 0) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  RaiseInternalException(iVar3,0,s_E____titans_ai_ai_event_cpp_007d2a34,0x51);
  return iVar3;
}

