
uint __cdecl FUN_0067f5e0(byte *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  byte *pbVar7;
  void *unaff_EDI;
  bool bVar8;
  InternalExceptionFrame local_4c;
  undefined4 local_8;
  
  local_8 = 0;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  uVar3 = __setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (uVar3 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    if (-1 < (int)uVar3) {
      uVar3 = 0xffffffff;
    }
    return uVar3;
  }
  uVar3 = 0;
  iVar2 = *(int *)(DAT_00848a2c + 8);
  if (0 < iVar2) {
    if (iVar2 < 1) {
      pbVar7 = (byte *)0x0;
      pbVar4 = param_1;
      goto LAB_0067f63c;
    }
    do {
      pbVar7 = *(byte **)(*(int *)(DAT_00848a2c + 0x14) + uVar3 * 4);
      pbVar4 = param_1;
LAB_0067f63c:
      do {
        bVar1 = *pbVar4;
        bVar8 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_0067f660:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_0067f665;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_0067f660;
        pbVar7 = pbVar7 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_0067f665:
      if (iVar5 == 0) goto LAB_0067f671;
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < iVar2);
  }
  uVar3 = 0xffffffff;
LAB_0067f671:
  if ((int)uVar3 < 0) {
    uVar3 = FUN_006b5aa0(DAT_00848a2c,(char *)param_1);
    local_8 = 0;
    uVar6 = FUN_006ae1c0(DAT_00848a28,&local_8);
    if (uVar6 != uVar3) {
      RaiseInternalException(-5,DAT_007ed77c,s___ai_ai_script_v_inl_007d55d8,0x126);
    }
  }
  g_currentExceptionFrame = local_4c.previous;
  return uVar3;
}

