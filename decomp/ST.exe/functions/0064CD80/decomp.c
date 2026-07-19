
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_event.cpp
   AiEventClassTy::InitData */

int __thiscall AiEventClassTy::InitData(AiEventClassTy *this,int *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  AiEventClassTy *pAVar3;
  int iVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined4 unaff_ESI;
  int *piVar10;
  uint uVar11;
  undefined4 *puVar12;
  void *unaff_EDI;
  int *piVar13;
  bool bVar14;
  InternalExceptionFrame local_4c;
  AiEventClassTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pAVar3 = local_8;
  if (iVar4 == 0) {
    if (local_8 == (AiEventClassTy *)0x0) {
      piVar13 = (int *)0x0;
    }
    else {
      piVar13 = (int *)&local_8->field_0x8c;
    }
    piVar10 = param_1;
    for (iVar4 = 0x127; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar13 = *piVar10;
      piVar10 = piVar10 + 1;
      piVar13 = piVar13 + 1;
    }
    *(short *)piVar13 = (short)*piVar10;
    *(undefined1 *)((int)piVar13 + 2) = *(undefined1 *)((int)piVar10 + 2);
    local_8->field_0x91 = 1;
    puVar5 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,5,5);
    *(uint **)&pAVar3[1].field_0x84 = puVar5;
    uVar11 = 0;
    do {
      Library::DKW::TBL::FUN_006b6020(*(int *)&pAVar3[1].field_0x84,uVar11,&DAT_008016a0);
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < 4);
    if (pAVar3->field_0x8c == '\0') {
      *(undefined4 *)&pAVar3->field_0x88 = DAT_00808754;
      iVar4 = (**(code **)(pAVar3->field_0000 + 0x18))();
      uVar11 = iVar4 * 2 + 2;
      pAVar3->field_00D2 = uVar11;
      if (0x18 < uVar11) {
        pAVar3->field_00D2 = 3;
      }
    }
    else {
      *(undefined4 *)&pAVar3->field_0x88 = *(undefined4 *)&pAVar3->field_0xda;
    }
    iVar4 = *(int *)&pAVar3->field_0x506;
    puVar1 = &pAVar3->field_0x4fa;
    if (puVar1 == (undefined1 *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(int *)puVar1 * 5;
    }
    puVar6 = Library::DKW::LIB::FUN_006aac10(uVar11);
    *(undefined4 **)&pAVar3->field_0x502 = puVar6;
    if (puVar1 == (undefined1 *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(int *)puVar1 * 5;
    }
    puVar12 = (undefined4 *)(iVar4 + 0x49e + (int)param_1);
    for (uVar9 = uVar11 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar6 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar12;
      puVar12 = (undefined4 *)((int)puVar12 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    uVar7 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)&pAVar3->field_0x4f2 + 0x49e + (int)param_1));
    *(undefined4 *)&pAVar3->field_0x4ee = uVar7;
    puVar5 = Library::DKW::TBL::FUN_006c8680
                       ((uint *)0x0,(uint *)(*(int *)&pAVar3->field_0x4e6 + 0x49e + (int)param_1));
    pAVar3->field_04E2 = puVar5;
    iVar4 = *(int *)&pAVar3->field_0x4ee;
    uVar11 = 0;
    if (0 < *(int *)(iVar4 + 0xc)) {
      bVar14 = *(int *)(iVar4 + 0xc) != 0;
      do {
        if (bVar14) {
          iVar4 = *(int *)(iVar4 + 8) * uVar11 + *(int *)(iVar4 + 0x1c);
        }
        else {
          iVar4 = 0;
        }
        if (*(int *)(iVar4 + 0xf) != 0) {
          uVar7 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)(iVar4 + 0x13) + 0x49e + (int)param_1));
          *(undefined4 *)(iVar4 + 0xf) = uVar7;
        }
        iVar4 = *(int *)&pAVar3->field_0x4ee;
        uVar11 = uVar11 + 1;
        bVar14 = uVar11 < *(uint *)(iVar4 + 0xc);
      } while ((int)uVar11 < (int)*(uint *)(iVar4 + 0xc));
    }
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  FUN_00402e14((int)local_8);
  iVar8 = ReportDebugMessage(s_E____titans_ai_ai_event_cpp_007d2a34,0x50,0,iVar4,&DAT_007a4ccc,
                             s_AiEventClassTy__InitData_007d2a58);
  if (iVar8 != 0) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  RaiseInternalException(iVar4,0,s_E____titans_ai_ai_event_cpp_007d2a34,0x51);
  return iVar4;
}

