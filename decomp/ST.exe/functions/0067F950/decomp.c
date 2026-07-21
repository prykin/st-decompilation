
uint __cdecl FUN_0067f950(byte *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  bool bVar8;
  InternalExceptionFrame local_4c;
  undefined4 local_8;

  local_8 = 0;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  uVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (uVar3 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    if (-1 < (int)uVar3) {
      uVar3 = 0xffffffff;
    }
    return uVar3;
  }
  uVar3 = 0;
  iVar2 = PTR_00848a34->field_0008;
  if (0 < iVar2) {
    if (iVar2 < 1) {
      pbVar7 = (byte *)0x0;
      pbVar4 = param_1;
      goto LAB_0067f9ac;
    }
    do {
      pbVar7 = *(byte **)(PTR_00848a34->field_0014 + uVar3 * 4);
      pbVar4 = param_1;
LAB_0067f9ac:
      do {
        bVar1 = *pbVar4;
        bVar8 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_0067f9d0:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_0067f9d5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_0067f9d0;
        pbVar7 = pbVar7 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_0067f9d5:
      if (iVar5 == 0) goto LAB_0067f9e1;
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < iVar2);
  }
  uVar3 = 0xffffffff;
LAB_0067f9e1:
  if ((int)uVar3 < 0) {
    uVar3 = Library::DKW::TBL::FUN_006b5aa0((uint *)PTR_00848a34,(char *)param_1);
    local_8 = 0;
    uVar6 = Library::DKW::TBL::FUN_006ae1c0((uint *)PTR_00848a30,&local_8);
    if (uVar6 != uVar3) {
      RaiseInternalException(-5,g_overwriteContext_007ED77C,s___ai_ai_script_v_inl_007d55d8,0x195);
    }
  }
  g_currentExceptionFrame = local_4c.previous;
  return uVar3;
}

