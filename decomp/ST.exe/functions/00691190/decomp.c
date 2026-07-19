
undefined4 * __cdecl FUN_00691190(undefined4 *param_1,uint *param_2)

{
  uint *puVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  undefined4 *puVar8;
  int iVar9;
  void *unaff_EDI;
  undefined4 *puVar10;
  uint *puVar11;
  bool bVar12;
  InternalExceptionFrame local_68;
  int *local_24;
  uint local_20;
  undefined4 *local_1c;
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  local_14 = 0;
  local_18 = 0;
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  iVar4 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar4 == 0) {
    iVar4 = 8;
    local_24 = (int *)((int)param_1 + 0x85);
    piVar6 = local_24;
    do {
      iVar9 = *piVar6;
      if (iVar9 != 0) {
        iVar9 = *(int *)(iVar9 + 0xc) * *(int *)(iVar9 + 8) + 0x1c;
        local_c = local_c + iVar9;
        piVar6[2] = iVar9;
      }
      piVar6 = piVar6 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    *param_2 = local_c + 0x10cU;
    puVar5 = Library::DKW::LIB::FUN_006aac10(local_c + 0x10cU);
    puVar8 = param_1;
    puVar10 = puVar5;
    for (iVar4 = 0x43; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    iVar9 = 0;
    puVar5[5] = *param_2;
    *(undefined1 *)(puVar5 + 6) = 0;
    puVar11 = (uint *)((int)puVar5 + 0x10b);
    iVar4 = local_18;
    local_8 = puVar5;
    do {
      puVar1 = *(uint **)(iVar9 + 0x85 + (int)puVar5);
      if (puVar1 != (uint *)0x0) {
        FUN_006affc0(puVar1,puVar11,&local_c);
        *(int *)(iVar9 + 0x89 + (int)local_8) = (int)puVar11 + (-0x10b - (int)local_8);
        iVar2 = *(int *)(iVar9 + 0x8d + (int)local_8);
        puVar11 = (uint *)((int)puVar11 + iVar2);
        iVar4 = iVar4 + iVar2;
        puVar5 = local_8;
        local_18 = iVar4;
      }
      iVar9 = iVar9 + 0xc;
    } while (iVar9 < 0x60);
    if (*(char *)(param_1 + 6) == '\x02') {
      *(int *)((int)puVar5 + 0x107) = iVar4;
      local_20 = 0;
      *(undefined2 *)((int)local_8 + 0x105) = 0;
      iVar9 = *local_24;
      puVar5 = local_8;
      if (0 < *(int *)(iVar9 + 0xc)) {
        bVar12 = *(int *)(iVar9 + 0xc) != 0;
        do {
          if (bVar12) {
            iVar9 = *(int *)(iVar9 + 8) * local_20 + *(int *)(iVar9 + 0x1c);
          }
          else {
            iVar9 = 0;
          }
          if (*(int *)(iVar9 + 4) == 0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            puVar5 = (undefined4 *)(*(int *)(iVar9 + 4) + 0x20);
          }
          if (puVar5 != (undefined4 *)0x0) {
            local_1c = thunk_FUN_006684e0(puVar5,&local_10);
            local_8 = (undefined4 *)Library::DKW::LIB::FUN_006acf50(local_8,local_8[5] + local_10);
            puVar5 = local_1c;
            puVar8 = (undefined4 *)(iVar4 + 0x10b + (int)local_8);
            for (uVar7 = local_10 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *puVar8 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar8 = puVar8 + 1;
            }
            for (uVar7 = local_10 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined1 *)puVar8 = *(undefined1 *)puVar5;
              puVar5 = (undefined4 *)((int)puVar5 + 1);
              puVar8 = (undefined4 *)((int)puVar8 + 1);
            }
            iVar4 = iVar4 + local_10;
            local_8[5] = local_8[5] + local_10;
            *(short *)((int)local_8 + 0x105) = *(short *)((int)local_8 + 0x105) + 1;
            local_18 = iVar4;
            if (local_1c != (undefined4 *)0x0) {
              FUN_006ab060(&local_1c);
            }
          }
          local_20 = local_20 + 1;
          iVar9 = *local_24;
          bVar12 = local_20 < *(uint *)(iVar9 + 0xc);
          puVar5 = local_8;
        } while ((int)local_20 < (int)*(uint *)(iVar9 + 0xc));
      }
    }
    g_currentExceptionFrame = local_68.previous;
    *param_2 = puVar5[5];
    return puVar5;
  }
  g_currentExceptionFrame = local_68.previous;
  if (local_8 != (undefined4 *)0x0) {
    FUN_006ab060(&local_8);
  }
  if (local_14 != 0) {
    FUN_006ab060(&local_14);
  }
  iVar9 = ReportDebugMessage(s_E____titans_ai_ai_tact_d_cpp_007d58fc,0x8c,0,iVar4,&DAT_007a4ccc,
                             s_TactDataPack_007d5920);
  if (iVar9 == 0) {
    RaiseInternalException(iVar4,0,s_E____titans_ai_ai_tact_d_cpp_007d58fc,0x8d);
    return (undefined4 *)0x0;
  }
  pcVar3 = (code *)swi(3);
  puVar5 = (undefined4 *)(*pcVar3)();
  return puVar5;
}

