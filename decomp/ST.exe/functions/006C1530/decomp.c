
undefined4 FUN_006c1530(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint *puVar2;
  undefined4 *puVar3;
  int sourceLine;
  uint local_e4 [24];
  InternalExceptionFrame local_84;
  undefined4 local_40 [5];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined2 local_18;
  ushort uStack_16;
  undefined2 local_14;
  undefined2 uStack_12;
  int local_10;
  undefined2 local_c;
  ushort uStack_a;
  undefined2 local_8;
  
  local_1c = 0;
  DAT_00854ff0 = 0;
  if (DAT_008568b4 != (int *)0x0) {
    return 0;
  }
  local_84.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_84;
  iVar1 = __setjmp3(local_84.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar1 != 0) {
    g_currentExceptionFrame = local_84.previous;
    if (local_1c != 0) {
      FUN_006c14f0(&local_1c);
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_00856880);
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
    if (DAT_008568b8 != (int *)0x0) {
      (**(code **)(*DAT_008568b8 + 0x48))(DAT_008568b8);
      (**(code **)(*DAT_008568b8 + 8))(DAT_008568b8);
      DAT_008568b8 = (int *)0x0;
    }
    if (DAT_008568b4 != (int *)0x0) {
      (**(code **)(*DAT_008568b4 + 8))(DAT_008568b4);
      DAT_008568b4 = (int *)0x0;
    }
    RaiseInternalException(iVar1,0,s_E__DKW_SND_C_dxsnd2_cpp_007ede14,0x464);
    return 0xffffffff;
  }
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00856880);
  puVar3 = (undefined4 *)&DAT_00854ff8;
  for (iVar1 = 0x620; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  iVar1 = Ordinal_1(0,&DAT_008568b4,0);
  if (iVar1 != 0) {
    RaiseInternalException(iVar1,DAT_007ed77c,s_E__DKW_SND_C_dxsnd2_cpp_007ede14,0x435);
  }
  iVar1 = (**(code **)(*DAT_008568b4 + 0x18))(DAT_008568b4,param_1,3);
  if (iVar1 != 0) {
    RaiseInternalException(iVar1,DAT_007ed77c,s_E__DKW_SND_C_dxsnd2_cpp_007ede14,0x436);
  }
  puVar2 = local_e4;
  for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_e4[0] = 0x60;
  iVar1 = (**(code **)(*DAT_008568b4 + 0x10))(DAT_008568b4,local_e4);
  if (iVar1 != 0) {
    RaiseInternalException(iVar1,DAT_007ed77c,s_E__DKW_SND_C_dxsnd2_cpp_007ede14,0x439);
  }
  puVar3 = local_40;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_40[0] = 0x24;
  local_40[1] = 1;
  if (param_2 == 0) {
    DAT_007ede10 = 0;
  }
  else {
    local_40[1] = 0x11;
  }
  DAT_008568b8 = (int *)0x0;
  iVar1 = (**(code **)(*DAT_008568b4 + 0xc))(DAT_008568b4,local_40,&DAT_008568b8,0);
  if (iVar1 == 0) goto LAB_006c1700;
  if (param_2 == 0) {
    sourceLine = 0x44a;
  }
  else {
    if (DAT_008568b8 != (int *)0x0) goto LAB_006c1700;
    local_2c = DAT_0079e368;
    local_28 = DAT_0079e36c;
    local_20 = DAT_0079e374;
    local_24 = DAT_0079e370;
    iVar1 = (**(code **)(*DAT_008568b4 + 0xc))(DAT_008568b4,local_40,&DAT_008568b8,0);
    if (iVar1 == 0) goto LAB_006c1700;
    sourceLine = 0x447;
  }
  RaiseInternalException(iVar1,DAT_007ed77c,s_E__DKW_SND_C_dxsnd2_cpp_007ede14,sourceLine);
LAB_006c1700:
  local_18 = 1;
  local_14 = 0x5622;
  uStack_12 = 0;
  local_8 = 0;
  uStack_a = (-(ushort)((local_e4[1] & 8) != 0) & 8) + 8;
  uStack_16 = ((local_e4[1] & 2) != 0) + 1;
  local_10 = (int)((uint)uStack_16 * (uint)uStack_a) >> 3;
  local_c = (undefined2)local_10;
  local_10 = local_10 * 0x5622;
  iVar1 = (**(code **)(*DAT_008568b8 + 0x38))(DAT_008568b8,&local_18);
  if (iVar1 != 0) {
    RaiseInternalException(iVar1,DAT_007ed77c,s_E__DKW_SND_C_dxsnd2_cpp_007ede14,0x454);
  }
  iVar1 = (**(code **)(*DAT_008568b8 + 0x30))(DAT_008568b8,0,0,1);
  if (iVar1 != 0) {
    RaiseInternalException(iVar1,DAT_007ed77c,s_E__DKW_SND_C_dxsnd2_cpp_007ede14,0x455);
  }
  if (param_2 != 0) {
    iVar1 = (**(code **)*DAT_008568b8)(DAT_008568b8,&DAT_0079eab8,&DAT_008568bc);
    if (iVar1 != 0) {
      RaiseInternalException(iVar1,DAT_007ed77c,s_E__DKW_SND_C_dxsnd2_cpp_007ede14,0x457);
    }
  }
  DAT_00854ff0 = param_1;
  g_currentExceptionFrame = local_84.previous;
  return 0;
}

