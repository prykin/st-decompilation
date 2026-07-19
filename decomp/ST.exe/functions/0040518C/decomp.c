
undefined4 * __cdecl thunk_FUN_00691190(undefined4 *param_1,uint *param_2)

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
  InternalExceptionFrame IStack_68;
  int *piStack_24;
  uint uStack_20;
  undefined4 *puStack_1c;
  int iStack_18;
  int iStack_14;
  uint uStack_10;
  int iStack_c;
  undefined4 *puStack_8;
  
  puStack_8 = (undefined4 *)0x0;
  iStack_c = 0;
  iStack_14 = 0;
  iStack_18 = 0;
  IStack_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_68;
  iVar4 = Library::MSVCRT::__setjmp3(IStack_68.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar4 == 0) {
    iVar4 = 8;
    piStack_24 = (int *)((int)param_1 + 0x85);
    piVar6 = piStack_24;
    do {
      iVar9 = *piVar6;
      if (iVar9 != 0) {
        iVar9 = *(int *)(iVar9 + 0xc) * *(int *)(iVar9 + 8) + 0x1c;
        iStack_c = iStack_c + iVar9;
        piVar6[2] = iVar9;
      }
      piVar6 = piVar6 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    *param_2 = iStack_c + 0x10cU;
    puVar5 = Library::DKW::LIB::FUN_006aac10(iStack_c + 0x10cU);
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
    iVar4 = iStack_18;
    puStack_8 = puVar5;
    do {
      puVar1 = *(uint **)(iVar9 + 0x85 + (int)puVar5);
      if (puVar1 != (uint *)0x0) {
        FUN_006affc0(puVar1,puVar11,&iStack_c);
        *(int *)(iVar9 + 0x89 + (int)puStack_8) = (int)puVar11 + (-0x10b - (int)puStack_8);
        iVar2 = *(int *)(iVar9 + 0x8d + (int)puStack_8);
        puVar11 = (uint *)((int)puVar11 + iVar2);
        iVar4 = iVar4 + iVar2;
        puVar5 = puStack_8;
        iStack_18 = iVar4;
      }
      iVar9 = iVar9 + 0xc;
    } while (iVar9 < 0x60);
    if (*(char *)(param_1 + 6) == '\x02') {
      *(int *)((int)puVar5 + 0x107) = iVar4;
      uStack_20 = 0;
      *(undefined2 *)((int)puStack_8 + 0x105) = 0;
      iVar9 = *piStack_24;
      puVar5 = puStack_8;
      if (0 < *(int *)(iVar9 + 0xc)) {
        bVar12 = *(int *)(iVar9 + 0xc) != 0;
        do {
          if (bVar12) {
            iVar9 = *(int *)(iVar9 + 8) * uStack_20 + *(int *)(iVar9 + 0x1c);
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
            puStack_1c = thunk_FUN_006684e0(puVar5,&uStack_10);
            puStack_8 = (undefined4 *)
                        Library::DKW::LIB::FUN_006acf50(puStack_8,puStack_8[5] + uStack_10);
            puVar5 = puStack_1c;
            puVar8 = (undefined4 *)(iVar4 + 0x10b + (int)puStack_8);
            for (uVar7 = uStack_10 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *puVar8 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar8 = puVar8 + 1;
            }
            for (uVar7 = uStack_10 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined1 *)puVar8 = *(undefined1 *)puVar5;
              puVar5 = (undefined4 *)((int)puVar5 + 1);
              puVar8 = (undefined4 *)((int)puVar8 + 1);
            }
            iVar4 = iVar4 + uStack_10;
            puStack_8[5] = puStack_8[5] + uStack_10;
            *(short *)((int)puStack_8 + 0x105) = *(short *)((int)puStack_8 + 0x105) + 1;
            iStack_18 = iVar4;
            if (puStack_1c != (undefined4 *)0x0) {
              FUN_006ab060(&puStack_1c);
            }
          }
          uStack_20 = uStack_20 + 1;
          iVar9 = *piStack_24;
          bVar12 = uStack_20 < *(uint *)(iVar9 + 0xc);
          puVar5 = puStack_8;
        } while ((int)uStack_20 < (int)*(uint *)(iVar9 + 0xc));
      }
    }
    g_currentExceptionFrame = IStack_68.previous;
    *param_2 = puVar5[5];
    return puVar5;
  }
  g_currentExceptionFrame = IStack_68.previous;
  if (puStack_8 != (undefined4 *)0x0) {
    FUN_006ab060(&puStack_8);
  }
  if (iStack_14 != 0) {
    FUN_006ab060(&iStack_14);
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

