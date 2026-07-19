
void __thiscall STT3DSprC::RestoreSpr(STT3DSprC *this,int *param_1,undefined4 *param_2)

{
  byte *pbVar1;
  ushort *puVar2;
  code *pcVar3;
  uint uVar4;
  STT3DSprC *this_00;
  int iVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  uint *puVar7;
  void *unaff_EDI;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  InternalExceptionFrame IStack_68;
  STT3DSprC *pSStack_24;
  int iStack_20;
  uint *puStack_1c;
  int iStack_18;
  uint *puStack_14;
  uint *puStack_10;
  char cStack_c;
  undefined3 uStack_b;
  int iStack_8;
  
  IStack_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_68;
  pSStack_24 = this;
  iVar5 = Library::MSVCRT::__setjmp3(IStack_68.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = pSStack_24;
  if (iVar5 != 0) {
    g_currentExceptionFrame = IStack_68.previous;
    iVar5 = ReportDebugMessage(s_E____titans_wlad_Tspr3d_cpp_007ac638,0x43d,0,iVar5,&DAT_007a4ccc,
                               s_STT3DSprC__RestoreSpr_007ac73c);
    if (iVar5 == 0) {
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(undefined4 *)(pSStack_24 + 4) = *param_2;
  *(undefined4 *)(pSStack_24 + 8) = param_2[1];
  pSStack_24[0x10] = *(STT3DSprC *)(param_2 + 2);
  pSStack_24[0x11] = *(STT3DSprC *)((int)param_2 + 9);
  pSStack_24[0x12] = *(STT3DSprC *)((int)param_2 + 10);
  *(undefined4 *)(pSStack_24 + 0xc) = *(undefined4 *)((int)param_2 + 0xb);
  *(undefined4 *)(pSStack_24 + 0x14) = *(undefined4 *)((int)param_2 + 0xf);
  *(undefined4 *)(pSStack_24 + 0x24) = *(undefined4 *)((int)param_2 + 0x13);
  *(undefined4 *)(pSStack_24 + 0x28) = *(undefined4 *)((int)param_2 + 0x17);
  *(undefined4 *)(pSStack_24 + 0x2c) = *(undefined4 *)((int)param_2 + 0x1b);
  pSStack_24[0x13] = *(STT3DSprC *)((int)param_2 + 0x1f);
  *(undefined4 *)(pSStack_24 + 0x30) = param_2[8];
  *(int *)(pSStack_24 + 0x38) = param_1[6];
  thunk_FUN_004ad3c0(pSStack_24,*(float *)(pSStack_24 + 0x24),*(float *)(pSStack_24 + 0x28),
                     *(float *)(pSStack_24 + 0x2c));
  FUN_006e9830(*(void **)(this_00 + 0x3c),*(uint *)(this_00 + 0x18),*(uint *)(this_00 + 4),
               *(uint *)(this_00 + 8));
  if (param_1[1] != 0) {
    thunk_FUN_004ace30(this_00,param_1[1],param_1[2]);
  }
  if (param_1[3] != 0) {
    thunk_FUN_004acef0(this_00,param_1[3]);
  }
  if (param_1[4] != 0) {
    thunk_FUN_004acf20(this_00,param_1[4],param_1[5]);
  }
  puStack_10 = param_2 + 9;
  iVar5 = *(int *)(this_00 + 0x14);
  puStack_1c = puStack_10 + iVar5 * 9;
  iVar10 = iVar5;
  puStack_14 = puStack_1c;
  if (0 < iVar5) {
    do {
      iStack_18 = iVar10;
      uVar6 = 0xffffffff;
      puVar9 = puStack_14;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        uVar4 = *puVar9;
        puVar9 = (uint *)((int)puVar9 + 1);
      } while ((char)uVar4 != '\0');
      puStack_14 = (uint *)((int)puStack_14 + ~uVar6);
      iStack_18 = iStack_18 + -1;
      iVar10 = iStack_18;
    } while (iStack_18 != 0);
  }
  iStack_8 = 0;
  if (0 < iVar5) {
    iStack_18 = 0;
    do {
      iVar5 = -1;
      iStack_20 = 0;
      puVar9 = puStack_1c;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        uVar6 = *puVar9;
        puVar9 = (uint *)((int)puVar9 + 1);
      } while ((char)uVar6 != '\0');
      if (iVar5 != -2) {
        *(char *)(iStack_18 + 0xc + *(int *)(this_00 + 0x20)) = (char)puStack_10[1];
        LoadSequence(this_00,(byte)iStack_8,*(int **)(*param_1 + iStack_8 * 4),(byte *)puStack_1c,
                     *(byte *)(iStack_18 + 0xc + *(int *)(this_00 + 0x20)));
        puVar9 = puStack_10;
        iStack_20 = *puStack_10 << 2;
        puVar7 = puStack_14;
        puVar8 = *(uint **)(iStack_18 + 4 + *(int *)(this_00 + 0x20));
        for (uVar6 = *puStack_10 & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(char *)puVar8 = (char)*puVar7;
          puVar7 = (uint *)((int)puVar7 + 1);
          puVar8 = (uint *)((int)puVar8 + 1);
        }
        *(undefined4 *)(iStack_18 + 0x10 + *(int *)(this_00 + 0x20)) =
             *(undefined4 *)((int)puStack_10 + 0xb);
        *(undefined4 *)(iStack_18 + 0x14 + *(int *)(this_00 + 0x20)) =
             *(undefined4 *)((int)puStack_10 + 0xf);
        *(undefined4 *)(iStack_18 + 0x18 + *(int *)(this_00 + 0x20)) =
             *(undefined4 *)((int)puStack_10 + 0x13);
        *(undefined4 *)(iStack_18 + 0x20 + *(int *)(this_00 + 0x20)) =
             *(undefined4 *)((int)puStack_10 + 0x1b);
        StartShow(this_00,(byte)iStack_8,*(undefined4 *)((int)puStack_10 + 0x17));
        if (*(char *)((int)puVar9 + 5) == '\0') {
          StopShow(this_00,(byte)iStack_8);
        }
      }
      iVar5 = iStack_18;
      if (*(char *)((int)puStack_10 + 6) == '\0') {
        puVar2 = (ushort *)(iStack_18 + 0xe + *(int *)(this_00 + 0x20));
        *puVar2 = *puVar2 & 0xfffe;
      }
      else {
        pbVar1 = (byte *)(iStack_18 + 0xe + *(int *)(this_00 + 0x20));
        *pbVar1 = *pbVar1 | 1;
      }
      *(undefined1 *)(iStack_18 + 0xd + *(int *)(this_00 + 0x20)) =
           *(undefined1 *)((int)puStack_10 + 7);
      if ((char)puStack_10[2] == '\0') {
        puVar2 = (ushort *)(iStack_18 + 0xe + *(int *)(this_00 + 0x20));
        *puVar2 = *puVar2 & 0xfffd;
      }
      else {
        pbVar1 = (byte *)(iStack_18 + 0xe + *(int *)(this_00 + 0x20));
        *pbVar1 = *pbVar1 | 2;
      }
      if (*(char *)((int)puStack_10 + 9) == '\0') {
        puVar2 = (ushort *)(iStack_18 + 0xe + *(int *)(this_00 + 0x20));
        *puVar2 = *puVar2 & 0xfdff;
      }
      else {
        pbVar1 = (byte *)(iStack_18 + 0xf + *(int *)(this_00 + 0x20));
        *pbVar1 = *pbVar1 | 2;
      }
      if (*(char *)((int)puStack_10 + 10) == '\0') {
        puVar2 = (ushort *)(iStack_18 + 0xe + *(int *)(this_00 + 0x20));
        *puVar2 = *puVar2 & 0xfffb;
      }
      else {
        pbVar1 = (byte *)(iStack_18 + 0xe + *(int *)(this_00 + 0x20));
        *pbVar1 = *pbVar1 | 4;
      }
      _cStack_c = CONCAT31(uStack_b,(char)iStack_8);
      if (*(char *)((int)puStack_10 + 0x1f) == '\0') {
        thunk_FUN_004ace60(this_00,(char)iStack_8);
      }
      else {
        thunk_FUN_004aceb0(this_00,(char)iStack_8);
      }
      puVar9 = puStack_10;
      if ((char)puStack_10[8] == '\x01') {
        thunk_FUN_004acf50(this_00,(char)_cStack_c);
      }
      else {
        thunk_FUN_004acf90(this_00,(char)_cStack_c);
      }
      if (*(char *)((int)puVar9 + 0x21) == '\x01') {
        thunk_FUN_004acfe0(this_00,(char)_cStack_c);
      }
      else {
        thunk_FUN_004ad020(this_00,(char)_cStack_c);
      }
      if (*(char *)((int)puVar9 + 0x22) == '\x01') {
        thunk_FUN_004ad070(this_00,(byte)_cStack_c);
      }
      if (*(char *)((int)puVar9 + 0x23) == '\0') {
        puVar2 = (ushort *)(iVar5 + 0xe + *(int *)(this_00 + 0x20));
        *puVar2 = *puVar2 & 0xfeff;
      }
      else {
        pbVar1 = (byte *)(iVar5 + 0xf + *(int *)(this_00 + 0x20));
        *pbVar1 = *pbVar1 | 1;
      }
      puStack_10 = puVar9 + 9;
      uVar6 = 0xffffffff;
      puVar9 = puStack_1c;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        uVar4 = *puVar9;
        puVar9 = (uint *)((int)puVar9 + 1);
      } while ((char)uVar4 != '\0');
      iStack_18 = iVar5 + 0x24;
      puStack_1c = (uint *)((int)puStack_1c + ~uVar6);
      puStack_14 = (uint *)((int)puStack_14 + iStack_20);
      iStack_8 = iStack_8 + 1;
    } while (iStack_8 < *(int *)(this_00 + 0x14));
  }
  if ((-1 < *(int *)(this_00 + 0xc)) && (iVar5 = 0, 0 < *(int *)(this_00 + 0x14))) {
    iVar10 = 0;
    do {
      if ((*(byte *)(*(int *)(this_00 + 0x20) + 0xf + iVar10) & 1) != 0) {
        FUN_006e93c0(*(void **)(this_00 + 0x3c),*(uint *)(this_00 + 0x18),iVar5,
                     *(uint *)(this_00 + 0xc));
      }
      iVar5 = iVar5 + 1;
      iVar10 = iVar10 + 0x24;
    } while (iVar5 < *(int *)(this_00 + 0x14));
  }
  g_currentExceptionFrame = IStack_68.previous;
  return;
}

