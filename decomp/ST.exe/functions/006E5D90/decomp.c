
int FUN_006e5d90(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar6;
  bool bVar7;
  InternalExceptionFrame local_70;
  undefined4 local_2c [4];
  undefined4 local_1c;
  int *local_c;
  int local_8;
  
  local_8 = 0;
  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  iVar3 = __setjmp3(local_70.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_70.previous;
    iVar4 = ReportDebugMessage(s_E__Ourlib_Sapp_cpp_007ee78c,0x495,0,iVar3,&DAT_007a4ccc,
                               s_SystemClassTy__Life_Error___007eebb8);
    if (iVar4 == 0) {
      RaiseInternalException(iVar3,0,s_E__Ourlib_Sapp_cpp_007ee78c,0x496);
      return iVar3;
    }
    pcVar2 = (code *)swi(3);
    iVar3 = (*pcVar2)();
    return iVar3;
  }
  iVar3 = local_c[2];
  bVar7 = false;
  iVar4 = local_8;
  if (*(int *)(iVar3 + 0xc) != 0) {
    do {
      if (bVar7) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(iVar3 + 0x1c);
      }
      iVar4 = (**(code **)(*local_c + 0x18))(uVar5);
      local_8 = iVar4;
      if (iVar4 == 0xffff) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E__Ourlib_Sapp_cpp_007ee78c,0x484);
      }
      FUN_006b0c70(local_c[2],0);
      iVar3 = local_c[2];
      bVar7 = *(int *)(iVar3 + 0xc) == 0;
    } while (!bVar7);
  }
  puVar6 = local_2c;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_1c = 0;
  iVar3 = FUN_006e5c70(local_2c);
  if (iVar3 == 0xffff) {
    RaiseInternalException(0xffff,DAT_007ed77c,s_E__Ourlib_Sapp_cpp_007ee78c,0x48a);
  }
  if (iVar4 == 0) {
    iVar3 = local_c[1];
    iVar1 = *(int *)(iVar3 + 0xc);
    while (iVar1 != 0) {
      if (iVar1 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(iVar3 + 0x1c);
      }
      iVar4 = (**(code **)(*local_c + 0x18))(uVar5);
      if (iVar4 == 0xffff) {
        g_currentExceptionFrame = local_70.previous;
        return 0xffff;
      }
      local_8 = iVar4;
      FUN_006b0c70(local_c[1],0);
      iVar3 = local_c[1];
      iVar1 = *(int *)(iVar3 + 0xc);
    }
  }
  g_currentExceptionFrame = local_70.previous;
  return iVar4;
}

