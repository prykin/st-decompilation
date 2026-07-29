
uint __cdecl FUN_0067f5e0(byte *param_1)

{
  byte bVar1;
  int iVar2;
  int local_EAX_39;
  byte *pbVar3;
  int iVar4;
  int uVar3;
  uint uVar5;
  AnonNested_AnonShape_GLOBAL_00848A2C_50EB5CD1_0014_282260F2 *pAVar6;
  bool bVar7;
  InternalExceptionFrame local_4c;
  undefined4 local_8;

  local_8 = 0;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_EAX_39 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (local_EAX_39 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    if (-1 < local_EAX_39) {
      local_EAX_39 = 0xffffffff;
    }
    return local_EAX_39;
  }
  uVar3 = 0;
  iVar2 = PTR_00848a2c->field_0008;
  if (0 < iVar2) {
    if (iVar2 < 1) {
      pAVar6 = (AnonNested_AnonShape_GLOBAL_00848A2C_50EB5CD1_0014_282260F2 *)0x0;
      pbVar3 = param_1;
      goto LAB_0067f63c;
    }
    do {
      pAVar6 = PTR_00848a2c->entries_0014[uVar3];
      pbVar3 = param_1;
LAB_0067f63c:
      do {
        bVar1 = *pbVar3;
        bVar7 = bVar1 < pAVar6->field_0000;
        if (bVar1 != pAVar6->field_0000) {
LAB_0067f660:
          iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_0067f665;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar7 = bVar1 < pAVar6->field_0001;
        if (bVar1 != pAVar6->field_0001) goto LAB_0067f660;
        pAVar6 = pAVar6 + 1;
        pbVar3 = pbVar3 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_0067f665:
      if (iVar4 == 0) goto LAB_0067f671;
      uVar3 = uVar3 + 1;
    } while (uVar3 < iVar2);
  }
  uVar3 = 0xffffffff;
LAB_0067f671:
  if (uVar3 < 0) {
    uVar3 = Library::DKW::TBL::FUN_006b5aa0((uint *)PTR_00848a2c,(char *)param_1);
    local_8 = 0;
    uVar5 = Library::DKW::TBL::FUN_006ae1c0(&PTR_00848a28->flags,&local_8);
    if (uVar5 != uVar3) {
      RaiseInternalException(-5,g_overwriteContext_007ED77C,".\\ai\\ai_script_v.inl",0x126);
    }
  }
  g_currentExceptionFrame = local_4c.previous;
  return uVar3;
}

