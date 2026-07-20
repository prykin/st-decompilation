
uint __cdecl FUN_0067f5e0(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 unaff_ESI;
  byte *pbVar5;
  void *unaff_EDI;
  uint uVar6;
  bool bVar7;
  InternalExceptionFrame local_4c;
  undefined4 local_8;
  
  local_8 = 0;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  uVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (uVar2 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    if (-1 < (int)uVar2) {
      uVar2 = 0xffffffff;
    }
    return uVar2;
  }
  uVar6 = 0;
  uVar2 = DAT_00848a2c[2];
  if (0 < (int)uVar2) {
    if ((int)uVar2 < 1) {
      pbVar5 = (byte *)0x0;
      pbVar3 = param_1;
      goto LAB_0067f63c;
    }
    do {
      pbVar5 = *(byte **)(DAT_00848a2c[5] + uVar6 * 4);
      pbVar3 = param_1;
LAB_0067f63c:
      do {
        bVar1 = *pbVar3;
        bVar7 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_0067f660:
          iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_0067f665;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar7 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_0067f660;
        pbVar5 = pbVar5 + 2;
        pbVar3 = pbVar3 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_0067f665:
      if (iVar4 == 0) goto LAB_0067f671;
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (int)uVar2);
  }
  uVar6 = 0xffffffff;
LAB_0067f671:
  if ((int)uVar6 < 0) {
    uVar6 = Library::DKW::TBL::FUN_006b5aa0(DAT_00848a2c,(char *)param_1);
    local_8 = 0;
    uVar2 = Library::DKW::TBL::FUN_006ae1c0(DAT_00848a28,&local_8);
    if (uVar2 != uVar6) {
      RaiseInternalException(-5,g_overwriteContext_007ED77C,s___ai_ai_script_v_inl_007d55d8,0x126);
    }
  }
  g_currentExceptionFrame = local_4c.previous;
  return uVar6;
}

