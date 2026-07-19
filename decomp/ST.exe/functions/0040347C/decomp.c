
void __thiscall
FSGSTy::AddMessage(FSGSTy *this,uint param_1,byte *param_2,char *param_3,uint param_4)

{
  byte bVar1;
  char cVar2;
  code *pcVar3;
  FSGSTy *this_00;
  short sVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  int iVar12;
  undefined4 unaff_ESI;
  byte *pbVar13;
  void *unaff_EDI;
  bool bVar14;
  InternalExceptionFrame IStack_5c;
  uint *puStack_18;
  FSGSTy *pFStack_14;
  uint uStack_10;
  uint *puStack_c;
  char cStack_5;
  
  puStack_c = (uint *)0x0;
  if ((param_3 == (char *)0x0) || (param_2 == (byte *)0x0)) {
    return;
  }
  IStack_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_5c;
  pFStack_14 = this;
  iVar5 = __setjmp3(IStack_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar5 != 0) {
    g_currentExceptionFrame = IStack_5c.previous;
    iVar12 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x9ec,0,iVar5,
                                &DAT_007a4ccc,s_FSGSTy__AddMessage_007cc474);
    if (iVar12 == 0) {
      RaiseInternalException(iVar5,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x9ec);
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = -1;
  pbVar11 = param_2;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar1 = *pbVar11;
    pbVar11 = pbVar11 + 1;
  } while (bVar1 != 0);
  if (iVar5 == -2) {
    uVar9 = 0xffffffff;
    pcVar8 = param_3;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    puStack_c = FUN_006aac10(~uVar9 + 4);
    if (puStack_c == (uint *)0x0) {
      g_currentExceptionFrame = IStack_5c.previous;
      return;
    }
    wsprintfA((LPSTR)puStack_c,s__s_1d_s_007c6fe4,&DAT_007c6ff0,param_1 & 0xff,param_3);
  }
  else {
    uVar9 = 0xffffffff;
    pbVar11 = param_2;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      bVar1 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar1 != 0);
    uVar10 = 0xffffffff;
    pcVar8 = param_3;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    puStack_c = FUN_006aac10(~uVar9 + ~uVar10 + 0xc);
    if (puStack_c == (uint *)0x0) {
      g_currentExceptionFrame = IStack_5c.previous;
      return;
    }
    pbVar13 = &DAT_00807e1d;
    pbVar11 = param_2;
    do {
      bVar1 = *pbVar11;
      bVar14 = bVar1 < *pbVar13;
      if (bVar1 != *pbVar13) {
LAB_005a1fbe:
        iVar5 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
        goto LAB_005a1fc3;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar11[1];
      bVar14 = bVar1 < pbVar13[1];
      if (bVar1 != pbVar13[1]) goto LAB_005a1fbe;
      pbVar11 = pbVar11 + 2;
      pbVar13 = pbVar13 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_005a1fc3:
    if (iVar5 == 0) {
      wsprintfA((LPSTR)puStack_c,s__s2_s>__s_1d_s_007cc4a0,&DAT_007c6ff0,param_2,&DAT_007c6ff0,
                param_1 & 0xff,param_3);
    }
    else {
      wsprintfA((LPSTR)puStack_c,s__s_1d_s>__s_1d_s_007cc48c,&DAT_007c6ff0,param_4 & 0xff,param_2,
                &DAT_007c6ff0,param_1 & 0xff,param_3);
    }
  }
  if (puStack_c != (uint *)0x0) {
    for (puVar6 = FUN_0072e560(puStack_c,'\n'); puVar6 != (uint *)0x0;
        puVar6 = FUN_0072e560(puVar6,'\n')) {
      *(undefined1 *)puVar6 = 0x20;
    }
    puVar6 = FUN_006b54f0((uint *)0x0,1,10);
    puStack_18 = puVar6;
    if (puVar6 != (uint *)0x0) {
      uStack_10 = 0;
      cStack_5 = '\0';
      FUN_006b5aa0((int)puVar6,(char *)puStack_c);
      this_00 = pFStack_14;
      puVar7 = ccFntTy::FormSarr(*(ccFntTy **)(pFStack_14 + 0x1a77),(int)puVar6,
                                 (uint *)s________________007c21d8,
                                 0x1a6 - *(int *)(pFStack_14 + 0x1b4c),0,0xffffffff,1);
      if (this_00[0x1a5f] == (FSGSTy)0x6) {
        *(undefined4 *)(this_00 + 0x2d) = 0x26;
        FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x1b14),(undefined4 *)(this_00 + 0x1d));
        uStack_10 = (uint)*(ushort *)(this_00 + 0x33);
        if (*(int *)(*(int *)(this_00 + 0x1e9e) + 8) + -0x19 <= (int)uStack_10) {
          cStack_5 = '\x01';
        }
      }
      if (puVar7 != (uint *)0x0) {
        ccFntTy::SepColorStrInSarr(*(ccFntTy **)(this_00 + 0x1a77),puVar7,puVar7);
        iVar5 = *(int *)(this_00 + 0x1e9e);
        iVar12 = *(int *)(iVar5 + 8) + puVar7[2];
        while (499 < iVar12) {
          FUN_006b7830(iVar5,0);
          iVar5 = *(int *)(this_00 + 0x1e9e);
          iVar12 = *(int *)(iVar5 + 8) + puVar7[2];
        }
        iVar5 = 0;
        if (0 < (int)puVar7[2]) {
          if ((int)puVar7[2] < 1) {
            pcVar8 = (char *)0x0;
            goto LAB_005a2188;
          }
          do {
            pcVar8 = *(char **)(puVar7[5] + iVar5 * 4);
LAB_005a2188:
            FUN_006b5aa0(*(int *)(this_00 + 0x1e9e),pcVar8);
            iVar5 = iVar5 + 1;
          } while (iVar5 < (int)puVar7[2]);
        }
        FUN_006b5570((byte *)puVar7);
        puVar6 = puStack_18;
      }
      FUN_006b5570((byte *)puVar6);
      if (this_00[0x1a5f] == (FSGSTy)0x6) {
        *(undefined4 *)(this_00 + 0x2d) = 0x28;
        *(undefined2 *)(this_00 + 0x31) = 1;
        *(undefined2 *)(this_00 + 0x33) = *(undefined2 *)(*(int *)(this_00 + 0x1e9e) + 8);
        FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x1b14),(undefined4 *)(this_00 + 0x1d));
        *(undefined4 *)(this_00 + 0x2d) = 0x22;
        *(undefined2 *)(this_00 + 0x31) = 0;
        if (cStack_5 == '\0') {
          sVar4 = (short)uStack_10;
        }
        else if (*(int *)(*(int *)(this_00 + 0x1e9e) + 8) < 0x19) {
          sVar4 = 0;
        }
        else {
          sVar4 = (short)*(int *)(*(int *)(this_00 + 0x1e9e) + 8) + -0x19;
        }
        *(short *)(this_00 + 0x33) = sVar4;
        FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x1b14),(undefined4 *)(this_00 + 0x1d));
      }
    }
    FUN_006ab060(&puStack_c);
  }
  g_currentExceptionFrame = IStack_5c.previous;
  return;
}

