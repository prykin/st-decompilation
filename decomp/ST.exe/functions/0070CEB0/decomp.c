
undefined4 * __cdecl FUN_0070ceb0(uint param_1,void *param_2,char *param_3,byte param_4)

{
  uint *puVar1;
  code *pcVar2;
  uint *puVar3;
  int iVar4;
  undefined4 *puVar5;
  ushort *puVar6;
  short *psVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  undefined4 unaff_ESI;
  int iVar13;
  int *piVar14;
  void *unaff_EDI;
  undefined4 *puVar15;
  int iVar16;
  InternalExceptionFrame local_5c;
  int local_18;
  undefined4 *local_14;
  int local_10;
  uint *local_c;
  byte local_5;
  
  iVar13 = 0;
  local_c = (uint *)0x0;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  iVar4 = __setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  local_18 = iVar4;
  if (iVar4 == 0) {
    puVar5 = FUN_006aac10(param_1);
    piVar14 = (int *)((int)puVar5 + 0x9a);
    *puVar5 = param_2;
    *piVar14 = 0;
    puVar8 = puVar5;
    for (iVar4 = 0x10; puVar8 = puVar8 + 1, iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = 0;
    }
    puVar5[0x11] = 0;
    puVar5[0x12] = 0;
    puVar5[0x13] = 1;
    puVar5[0x15] = 0;
    puVar5[0x14] = 0;
    puVar5[0x17] = 0;
    puVar5[0x16] = 0;
    puVar5[0x19] = 0;
    puVar5[0x18] = 0;
    puVar5[0x1b] = 100;
    puVar5[0x1a] = 100;
    *(undefined2 *)(puVar5 + 0x1c) = 0;
    *(undefined4 *)((int)puVar5 + 0x72) = 0;
    *(undefined4 *)((int)puVar5 + 0x76) = 0;
    *(undefined4 *)((int)puVar5 + 0x7a) = 0;
    *(undefined4 *)((int)puVar5 + 0x7e) = 1;
    *(undefined2 *)((int)puVar5 + 0x9e) = 0;
    *(undefined1 *)((int)puVar5 + 0x9e) = DAT_007cc854;
    *(undefined4 *)((int)puVar5 + 0x82) = 0xffffffff;
    *(undefined4 *)((int)puVar5 + 0x96) = 0;
    puVar5[0x2b] = 1;
    local_c = puVar5;
    if ((param_4 & 1) == 0) {
      puVar6 = FUN_006f1ce0(3,param_3,(int *)0x0,1);
      *piVar14 = (int)puVar6;
    }
    else {
      FUN_006f1ce0(3,param_3,piVar14,1);
    }
    if (*(short *)*piVar14 < 1) {
      RaiseInternalException(-6,DAT_007ed77c,s_E__Ourlib_mfcfnt_cpp_007f0190,0xbf);
    }
    psVar7 = (short *)*piVar14;
    local_10 = 0;
    if (0 < *psVar7) {
      local_5 = param_4 & 2;
      local_18 = -4 - (int)puVar5;
      local_14 = puVar5;
      do {
        puVar15 = local_14 + 1;
        local_14 = puVar15;
        puVar8 = (undefined4 *)
                 FUN_006f1cb0(param_2,*(int *)((int)puVar15 + local_18 + 2 + (int)psVar7));
        if (local_5 == 0) {
          *puVar15 = puVar8;
          local_14 = puVar15;
        }
        else {
          uVar9 = FUN_006b5050((int)puVar8);
          puVar10 = FUN_006aac10(uVar9);
          *puVar15 = puVar10;
          uVar9 = FUN_006b5050((int)puVar8);
          puVar15 = (undefined4 *)*puVar15;
          for (uVar11 = uVar9 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *puVar15 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar15 = puVar15 + 1;
          }
          for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined1 *)puVar15 = *(undefined1 *)puVar8;
            puVar8 = (undefined4 *)((int)puVar8 + 1);
            puVar15 = (undefined4 *)((int)puVar15 + 1);
          }
        }
        psVar7 = *(short **)((int)puVar5 + 0x9a);
        local_10 = local_10 + 1;
      } while (local_10 < *psVar7);
    }
    piVar14 = (int *)((int)puVar5 + 0x9a);
    iVar16 = 0;
    *(undefined4 *)((int)puVar5 + 0x86) = 0;
    iVar4 = *piVar14;
    iVar13 = 0;
    if (*(short *)(iVar4 + 100) != 0) {
      iVar12 = 0;
      do {
        iVar4 = (int)*(short *)(iVar12 + 0x6a + iVar4);
        if (*(int *)((int)puVar5 + 0x86) < iVar4) {
          *(int *)((int)puVar5 + 0x86) = iVar4;
        }
        iVar4 = *piVar14;
        iVar12 = iVar12 + 10;
        iVar13 = iVar13 + 1;
      } while (iVar13 < (int)(uint)*(ushort *)(iVar4 + 100));
    }
    *(undefined4 *)((int)puVar5 + 0x8a) = 0;
    iVar4 = *piVar14;
    iVar13 = 0;
    if (*(short *)(iVar4 + 100) != 0) {
      iVar12 = 0;
      do {
        iVar4 = (int)*(short *)(iVar12 + 0x6c + iVar4);
        if (*(int *)((int)puVar5 + 0x8a) < iVar4) {
          *(int *)((int)puVar5 + 0x8a) = iVar4;
        }
        iVar4 = *piVar14;
        iVar12 = iVar12 + 10;
        iVar13 = iVar13 + 1;
      } while (iVar13 < (int)(uint)*(ushort *)(iVar4 + 100));
    }
    *(undefined4 *)((int)puVar5 + 0x8e) = 0x7ff0;
    iVar4 = *piVar14;
    iVar13 = 0;
    if (*(short *)(iVar4 + 100) != 0) {
      iVar12 = 0;
      do {
        iVar4 = (int)*(short *)(iVar12 + 0x6a + iVar4);
        if (iVar4 < *(int *)((int)puVar5 + 0x8e)) {
          *(int *)((int)puVar5 + 0x8e) = iVar4;
        }
        iVar4 = *piVar14;
        iVar12 = iVar12 + 10;
        iVar13 = iVar13 + 1;
      } while (iVar13 < (int)(uint)*(ushort *)(iVar4 + 100));
    }
    *(undefined4 *)((int)puVar5 + 0x92) = 0x7ff0;
    iVar4 = *piVar14;
    iVar13 = 0;
    if (*(short *)(iVar4 + 100) != 0) {
      do {
        iVar4 = (int)*(short *)(iVar16 + 0x6c + iVar4);
        if (iVar4 < *(int *)((int)puVar5 + 0x92)) {
          *(int *)((int)puVar5 + 0x92) = iVar4;
        }
        iVar4 = *piVar14;
        iVar13 = iVar13 + 1;
        iVar16 = iVar16 + 10;
      } while (iVar13 < (int)(uint)*(ushort *)(iVar4 + 100));
    }
    g_currentExceptionFrame = local_5c.previous;
    return puVar5;
  }
  g_currentExceptionFrame = local_5c.previous;
  iVar16 = ReportDebugMessage(s_E__Ourlib_mfcfnt_cpp_007f0190,0xdc,0,iVar4,&DAT_007a4ccc,
                              s_ccFntTy__operator_new_007f0178);
  if (iVar16 == 0) {
    if (local_c != (uint *)0x0) {
      puVar1 = (uint *)((int)local_c + 0x9a);
      puVar3 = local_c;
      if (0 < **(short **)((int)local_c + 0x9a)) {
        do {
          cMf32::RecMemFree(param_2,puVar3 + 1);
          iVar13 = iVar13 + 1;
          iVar4 = local_18;
          puVar3 = puVar3 + 1;
        } while (iVar13 < *(short *)*puVar1);
      }
      cMf32::RecMemFree(param_2,puVar1);
      FUN_006a5e90(local_c);
    }
    RaiseInternalException(iVar4,0,s_E__Ourlib_mfcfnt_cpp_007f0190,0xe4);
    return (undefined4 *)0x0;
  }
  pcVar2 = (code *)swi(3);
  puVar8 = (undefined4 *)(*pcVar2)();
  return puVar8;
}

