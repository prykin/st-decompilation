
undefined4 * __cdecl FUN_0065cd10(undefined4 *param_1,uint *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  undefined4 unaff_ESI;
  undefined4 *puVar8;
  void *unaff_EDI;
  undefined4 *puVar9;
  bool bVar10;
  InternalExceptionFrame local_50;
  int local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar2 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    uVar5 = 0;
    iVar2 = *(int *)((int)param_1 + 0x462);
    if (0 < *(int *)(iVar2 + 0xc)) {
      bVar10 = *(int *)(iVar2 + 0xc) != 0;
      do {
        if (bVar10) {
          iVar2 = *(int *)(iVar2 + 8) * uVar5 + *(int *)(iVar2 + 0x1c);
        }
        else {
          iVar2 = 0;
        }
        iVar6 = *(int *)(iVar2 + 0xf);
        if (iVar6 != 0) {
          iVar6 = *(int *)(iVar6 + 0xc) * *(int *)(iVar6 + 8) + 0x1c;
          *(int *)(iVar2 + 0x17) = iVar6;
          local_c = local_c + iVar6;
        }
        iVar2 = *(int *)((int)param_1 + 0x462);
        uVar5 = uVar5 + 1;
        bVar10 = uVar5 < *(uint *)(iVar2 + 0xc);
      } while ((int)uVar5 < (int)*(uint *)(iVar2 + 0xc));
    }
    iVar2 = *(int *)(*(int *)((int)param_1 + 0x462) + 0xc) *
            *(int *)(*(int *)((int)param_1 + 0x462) + 8) + 0x1c;
    local_c = local_c + iVar2;
    *(int *)((int)param_1 + 0x46a) = iVar2;
    iVar2 = FUN_006c87f0(*(int *)((int)param_1 + 0x456));
    *(int *)((int)param_1 + 0x45e) = iVar2;
    if ((int *)((int)param_1 + 0x46e) == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)((int)param_1 + 0x46e) * 5;
    }
    local_c = local_c + iVar2 + iVar6;
    *param_2 = local_c + 0x49fU;
    puVar3 = Library::DKW::LIB::FUN_006aac10(local_c + 0x49fU);
    puVar8 = param_1;
    puVar9 = puVar3;
    for (iVar2 = 0x127; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    *(undefined2 *)puVar9 = *(undefined2 *)puVar8;
    *(undefined1 *)((int)puVar9 + 2) = *(undefined1 *)((int)puVar8 + 2);
    uVar5 = 0;
    *(uint *)((int)puVar3 + 1) = *param_2;
    *(undefined1 *)((int)puVar3 + 5) = 0;
    iVar2 = *(int *)((int)puVar3 + 0x462);
    puVar7 = (uint *)((int)puVar3 + 0x49e);
    local_8 = puVar3;
    if (0 < *(int *)(iVar2 + 0xc)) {
      bVar10 = *(int *)(iVar2 + 0xc) != 0;
      do {
        if (bVar10) {
          iVar2 = *(int *)(iVar2 + 8) * uVar5 + *(int *)(iVar2 + 0x1c);
        }
        else {
          iVar2 = 0;
        }
        if (*(uint **)(iVar2 + 0xf) != (uint *)0x0) {
          FUN_006affc0(*(uint **)(iVar2 + 0xf),puVar7,&local_c);
          iVar6 = (int)puVar7 + (-0x49e - (int)local_8);
          puVar7 = (uint *)((int)puVar7 + *(int *)(iVar2 + 0x17));
          *(int *)(iVar2 + 0x13) = iVar6;
          puVar3 = local_8;
        }
        iVar2 = *(int *)((int)puVar3 + 0x462);
        uVar5 = uVar5 + 1;
        bVar10 = uVar5 < *(uint *)(iVar2 + 0xc);
      } while ((int)uVar5 < (int)*(uint *)(iVar2 + 0xc));
    }
    FUN_006affc0(*(uint **)((int)puVar3 + 0x462),puVar7,&local_c);
    *(int *)((int)local_8 + 0x466) = (int)puVar7 + (-0x49e - (int)local_8);
    puVar7 = (uint *)((int)puVar7 + *(int *)((int)local_8 + 0x46a));
    FUN_006c8840(*(uint **)((int)local_8 + 0x456),puVar7,&local_c);
    *(int *)((int)local_8 + 0x45a) = (int)puVar7 + (-0x49e - (int)local_8);
    puVar3 = (undefined4 *)((int)puVar7 + *(int *)((int)local_8 + 0x45e));
    if ((int *)((int)param_1 + 0x46e) == (int *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(int *)((int)param_1 + 0x46e) * 5;
    }
    puVar8 = *(undefined4 **)((int)param_1 + 0x476);
    puVar9 = puVar3;
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    *(undefined1 **)((int)local_8 + 0x47a) = (undefined1 *)((int)puVar3 + (-0x49e - (int)local_8));
    *(undefined4 *)((int)local_8 + 0x476) = 0;
    g_currentExceptionFrame = local_50.previous;
    return local_8;
  }
  g_currentExceptionFrame = local_50.previous;
  if (local_8 != (undefined4 *)0x0) {
    FUN_006ab060(&local_8);
  }
  iVar6 = ReportDebugMessage(s_E____titans_ai_ai_event_d_cpp_007d2b4c,0x89,0,iVar2,&DAT_007a4ccc,
                             s_EventDataPack_007d2b70);
  if (iVar6 != 0) {
    pcVar1 = (code *)swi(3);
    puVar3 = (undefined4 *)(*pcVar1)();
    return puVar3;
  }
  RaiseInternalException(iVar2,0,s_E____titans_ai_ai_event_d_cpp_007d2b4c,0x8a);
  return (undefined4 *)0x0;
}

