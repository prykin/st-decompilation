
undefined4 * __thiscall thunk_FUN_00604a90(void *this,uint *param_1)

{
  code *pcVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  uint *puVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  int *piStack_b4;
  InternalExceptionFrame IStack_8c;
  undefined4 *puStack_48;
  uint *puStack_44;
  uint *apuStack_3c [3];
  int iStack_30;
  int aiStack_2c [2];
  undefined1 *puStack_24;
  uint uStack_20;
  undefined1 *puStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_0079cc18;
  puStack_10 = &LAB_0072d964;
  pvStack_14 = ExceptionList;
  puStack_1c = &stack0xffffff40;
  puStack_48 = (undefined4 *)0x0;
  IStack_8c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_8c;
  ExceptionList = &pvStack_14;
  iVar3 = __setjmp3(IStack_8c.jumpBuffer,2,FUN_0072da21,0xffffffff);
  puStack_1c = &stack0xffffff40;
  if (iVar3 == 0) {
    *param_1 = 0;
    puStack_1c = &stack0xffffff40;
    puStack_48 = (undefined4 *)FUN_006aac70(0xe2);
    *param_1 = 0xe2;
    *(undefined4 *)((int)this + 0x1e1) = 1;
    puVar7 = (undefined4 *)((int)this + 0x1d5);
    puVar4 = puStack_48;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar4 = puVar4 + 1;
    }
    puStack_48[0x10] = *(undefined4 *)((int)this + 0x215);
    puVar7 = (undefined4 *)((int)this + 0x219);
    puVar4 = puStack_48 + 0x11;
    for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar4 = puVar4 + 1;
    }
    puStack_48[0x25] = *(undefined4 *)((int)this + 0x269);
    *(undefined1 *)(puStack_48 + 0x26) = *(undefined1 *)((int)this + 0x26d);
    *(undefined4 *)((int)puStack_48 + 0x99) = *(undefined4 *)((int)this + 0x26e);
    *(undefined4 *)((int)puStack_48 + 0xde) = *(undefined4 *)((int)this + 0x2b7);
    *(undefined4 *)((int)puStack_48 + 0x9d) = *(undefined4 *)((int)this + 0x272);
    *(undefined4 *)((int)puStack_48 + 0xa1) = *(undefined4 *)((int)this + 0x276);
    *(undefined4 *)((int)puStack_48 + 0xa5) = *(undefined4 *)((int)this + 0x27a);
    *(undefined4 *)((int)puStack_48 + 0xa9) = *(undefined4 *)((int)this + 0x27e);
    if (*(uint **)((int)this + 0x215) != (uint *)0x0) {
      apuStack_3c[0] = (uint *)0x0;
      apuStack_3c[0] = (uint *)FUN_006b0020(*(uint **)((int)this + 0x215),(int *)&uStack_20);
      uVar9 = *param_1 + uStack_20 + 4;
      *param_1 = uVar9;
      puStack_48 = (undefined4 *)FUN_006acf50(puStack_48,uVar9);
      *(uint *)((*param_1 - uStack_20) + -4 + (int)puStack_48) = uStack_20;
      puVar5 = apuStack_3c[0];
      puVar11 = (uint *)((*param_1 - uStack_20) + (int)puStack_48);
      for (uVar9 = uStack_20 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar11 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar11 = puVar11 + 1;
      }
      for (uStack_20 = uStack_20 & 3; uStack_20 != 0; uStack_20 = uStack_20 - 1) {
        *(char *)puVar11 = (char)*puVar5;
        puVar5 = (uint *)((int)puVar5 + 1);
        puVar11 = (uint *)((int)puVar11 + 1);
      }
      FUN_006ab060(apuStack_3c);
    }
    puVar7 = (undefined4 *)&stack0xffffff40;
    iVar3 = 0;
    iVar6 = *(int *)((int)this + 0x269);
    if (iVar6 != 0) {
      uStack_8 = 0;
      FUN_0072da40();
      uStack_8 = 0xffffffff;
      iStack_30 = 0;
      puStack_24 = &stack0xffffff40;
      puStack_1c = &stack0xffffff40;
      if (0 < iVar6) {
        puVar4 = (undefined4 *)((int)this + 0x219);
        puStack_24 = &stack0xffffff40;
        puStack_1c = &stack0xffffff40;
        do {
          if ((void *)*puVar4 != (void *)0x0) {
            apuStack_3c[0] = (uint *)thunk_FUN_0062af40((void *)*puVar4,aiStack_2c);
            iVar3 = iVar3 + 4 + aiStack_2c[0];
            puVar7[1] = aiStack_2c[0];
            *puVar7 = apuStack_3c[0];
          }
          iStack_30 = iStack_30 + 1;
          puVar4 = puVar4 + 1;
          puVar7 = puVar7 + 2;
        } while (iStack_30 < *(int *)((int)this + 0x269));
      }
      uVar9 = *param_1;
      *param_1 = uVar9 + iVar3;
      puStack_48 = (undefined4 *)FUN_006acf50(puStack_48,uVar9 + iVar3);
      puStack_44 = (uint *)((*param_1 - iVar3) + (int)puStack_48);
      iStack_30 = 0;
      if (0 < *(int *)((int)this + 0x269)) {
        puVar5 = (uint *)(puStack_24 + 4);
        piStack_b4 = (int *)((int)this + 0x219);
        do {
          if (*piStack_b4 != 0) {
            *puStack_44 = *puVar5;
            puVar10 = puStack_44 + 1;
            apuStack_3c[0] = (uint *)puVar5[-1];
            uVar9 = *puVar5;
            puVar11 = apuStack_3c[0];
            puVar12 = puVar10;
            for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *puVar12 = *puVar11;
              puVar11 = puVar11 + 1;
              puVar12 = puVar12 + 1;
            }
            for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(char *)puVar12 = (char)*puVar11;
              puVar11 = (uint *)((int)puVar11 + 1);
              puVar12 = (uint *)((int)puVar12 + 1);
            }
            FUN_006ab060(apuStack_3c);
            puStack_44 = (uint *)((int)puVar10 + *puStack_44);
          }
          iStack_30 = iStack_30 + 1;
          piStack_b4 = piStack_b4 + 1;
          puVar5 = puVar5 + 2;
        } while (iStack_30 < *(int *)((int)this + 0x269));
      }
    }
    g_currentExceptionFrame = IStack_8c.previous;
  }
  else {
    g_currentExceptionFrame = IStack_8c.previous;
    puVar2 = &stack0xffffff40;
    if (puStack_48 != (undefined4 *)0x0) {
      FUN_006ab060(&puStack_48);
      puVar2 = puStack_1c;
    }
    puStack_1c = puVar2;
    iVar6 = ReportDebugMessage(s_E____titans_nick_to_Expl_cpp_007cf630,0x2df,0,iVar3,&DAT_007a4ccc,
                               s_STExplosionC__SaveObj__007cf694);
    if (iVar6 != 0) {
      pcVar1 = (code *)swi(3);
      puVar7 = (undefined4 *)(*pcVar1)();
      return puVar7;
    }
    RaiseInternalException(iVar3,0,s_E____titans_nick_to_Expl_cpp_007cf630,0x2e1);
  }
  ExceptionList = pvStack_14;
  return puStack_48;
}

