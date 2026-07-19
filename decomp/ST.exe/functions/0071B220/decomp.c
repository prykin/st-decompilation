
int FUN_0071b220(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *pvParam;
  int *pvParam_00;
  code *pcVar3;
  int iVar4;
  BOOL BVar5;
  DWORD DVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char *pcVar7;
  int iVar8;
  InternalExceptionFrame local_88;
  undefined4 local_44;
  byte local_40;
  uint local_38;
  int local_34;
  tagRECT local_18;
  int local_8;
  
  local_88.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_88;
  iVar4 = __setjmp3(local_88.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar4 == 0) {
    BVar5 = GetClientRect(DAT_00856d78,&local_18);
    if (BVar5 == 0) {
      iVar8 = 0x30;
      pcVar7 = s_E__Ourlib_Sinput_cpp_007f092c;
      iVar4 = DAT_007ed77c;
      DVar6 = GetLastError();
      RaiseInternalException(DVar6,iVar4,pcVar7,iVar8);
    }
    *(LONG *)(local_8 + 0x34) = local_18.left;
    puVar1 = (undefined4 *)(local_8 + 0x18);
    *(LONG *)(local_8 + 0x38) = local_18.top;
    *(LONG *)(local_8 + 0x3c) = local_18.right - local_18.left;
    *(LONG *)(local_8 + 0x40) = local_18.bottom - local_18.top;
    iVar4 = DirectInputCreateA(DAT_00856d70,0x700,puVar1,0);
    if (iVar4 != 0) {
      RaiseInternalException(iVar4,DAT_007ed77c,s_E__Ourlib_Sinput_cpp_007f092c,0x32);
    }
    *(int *)(local_8 + 0x2c) = *(int *)(local_8 + 0x3c) / 2 + *(int *)(local_8 + 0x34);
    puVar2 = (undefined4 *)(local_8 + 0x20);
    *(int *)(local_8 + 0x30) = *(int *)(local_8 + 0x40) / 2 + *(int *)(local_8 + 0x38);
    iVar4 = (**(code **)(*(int *)*puVar1 + 0xc))((int *)*puVar1,&DAT_0079eeb8,puVar2,0);
    if (iVar4 != 0) {
      RaiseInternalException(iVar4,DAT_007ed77c,s_E__Ourlib_Sinput_cpp_007f092c,0x36);
    }
    iVar4 = (**(code **)(*(int *)*puVar2 + 0x34))((int *)*puVar2,DAT_00856d78,5);
    if (iVar4 != 0) {
      RaiseInternalException(iVar4,DAT_007ed77c,s_E__Ourlib_Sinput_cpp_007f092c,0x3c);
    }
    iVar4 = (**(code **)(*(int *)*puVar2 + 0x2c))((int *)*puVar2,&DAT_0079e390);
    if (iVar4 != 0) {
      RaiseInternalException(iVar4,DAT_007ed77c,s_E__Ourlib_Sinput_cpp_007f092c,0x3e);
    }
    local_44 = 0x2c;
    iVar4 = (**(code **)(*(int *)*puVar2 + 0xc))((int *)*puVar2,&local_44);
    if (iVar4 != 0) {
      RaiseInternalException(iVar4,DAT_007ed77c,s_E__Ourlib_Sinput_cpp_007f092c,0x42);
    }
    iVar4 = 1;
    if (((local_40 & 1) == 0) || (local_38 < 3)) {
      iVar4 = 0;
    }
    *(int *)(local_8 + 0x5c) = iVar4;
    if (iVar4 != 0) {
      *(int *)(local_8 + 0x44) = local_34 + -1;
    }
    puVar2 = (undefined4 *)(local_8 + 0x1c);
    iVar4 = (**(code **)(*(int *)*puVar1 + 0xc))((int *)*puVar1,&DAT_0079eea8,puVar2,0);
    if (iVar4 != 0) {
      RaiseInternalException(iVar4,DAT_007ed77c,s_E__Ourlib_Sinput_cpp_007f092c,0x48);
    }
    iVar4 = (**(code **)(*(int *)*puVar2 + 0x2c))((int *)*puVar2,&DAT_0079e378);
    if (iVar4 != 0) {
      RaiseInternalException(iVar4,DAT_007ed77c,s_E__Ourlib_Sinput_cpp_007f092c,0x49);
    }
    iVar4 = (**(code **)(*(int *)*puVar2 + 0x34))((int *)*puVar2,DAT_00856d78,6);
    if (iVar4 != 0) {
      RaiseInternalException(iVar4,DAT_007ed77c,s_E__Ourlib_Sinput_cpp_007f092c,0x4a);
    }
    pvParam = (int *)(local_8 + 0x68);
    BVar5 = SystemParametersInfoA(0x16,0,pvParam,0);
    if (BVar5 == 0) {
      iVar8 = 0x4d;
      pcVar7 = s_E__Ourlib_Sinput_cpp_007f092c;
      iVar4 = DAT_007ed77c;
      DVar6 = GetLastError();
      RaiseInternalException(DVar6,iVar4,pcVar7,iVar8);
    }
    pvParam_00 = (int *)(local_8 + 0x6c);
    BVar5 = SystemParametersInfoA(10,0,pvParam_00,0);
    if (BVar5 == 0) {
      iVar8 = 0x4e;
      pcVar7 = s_E__Ourlib_Sinput_cpp_007f092c;
      iVar4 = DAT_007ed77c;
      DVar6 = GetLastError();
      RaiseInternalException(DVar6,iVar4,pcVar7,iVar8);
    }
    *pvParam = (*pvParam + 1) * 0xfa;
    *pvParam_00 = (int)(1000 / (ulonglong)(*pvParam_00 + 1));
    FUN_006e4290(6,4,2,*(undefined4 *)(local_8 + 8));
    g_currentExceptionFrame = local_88.previous;
    return 0;
  }
  g_currentExceptionFrame = local_88.previous;
  iVar8 = ReportDebugMessage(s_E__Ourlib_Sinput_cpp_007f092c,0x57,0,iVar4,&DAT_007a4ccc,
                             s_InputClassTy__Create_error_007f0910);
  if (iVar8 != 0) {
    pcVar3 = (code *)swi(3);
    iVar4 = (*pcVar3)();
    return iVar4;
  }
  RaiseInternalException(iVar4,0,s_E__Ourlib_Sinput_cpp_007f092c,0x58);
  return iVar4;
}

