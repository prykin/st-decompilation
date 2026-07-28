
uint __cdecl FUN_0067f5e0(byte *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  AnonNested_AnonShape_GLOBAL_00848A2C_50EB5CD1_0014_282260F2 *pAVar7;
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
  iVar2 = PTR_00848a2c->field_0008;
  if (0 < iVar2) {
    if (iVar2 < 1) {
      pAVar7 = (AnonNested_AnonShape_GLOBAL_00848A2C_50EB5CD1_0014_282260F2 *)0x0;
      pbVar4 = param_1;
      goto LAB_0067f63c;
    }
    do {
      pAVar7 = PTR_00848a2c->entries_0014[uVar3];
      pbVar4 = param_1;
LAB_0067f63c:
      do {
        bVar1 = *pbVar4;
        bVar8 = bVar1 < pAVar7->field_0000;
        if (bVar1 != pAVar7->field_0000) {
LAB_0067f660:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_0067f665;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pAVar7->field_0001;
        if (bVar1 != pAVar7->field_0001) goto LAB_0067f660;
        pAVar7 = pAVar7 + 1;
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
    uVar3 = Library::DKW::TBL::FUN_006b5aa0((uint *)PTR_00848a2c,(char *)param_1);
    local_8 = 0;
    uVar6 = Library::DKW::TBL::FUN_006ae1c0(&PTR_00848a28->flags,&local_8);
    if (uVar6 != uVar3) {
      RaiseInternalException(-5,g_overwriteContext_007ED77C,".\\ai\\ai_script_v.inl",0x126);
    }
  }
  g_currentExceptionFrame = local_4c.previous;
  return uVar3;
}

