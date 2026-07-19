
/* Recovered from embedded debug metadata:
   E:\Ourlib\Sinput.cpp
   InputClassTy::Create */

int __thiscall InputClassTy::Create(InputClassTy *this)

{
  InputClassTy *pIVar1;
  InputClassTy *pIVar2;
  code *pcVar3;
  InputClassTy *pIVar4;
  int iVar5;
  BOOL BVar6;
  DWORD DVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char *pcVar8;
  int iVar9;
  InternalExceptionFrame local_88;
  undefined4 local_44;
  byte local_40;
  uint local_38;
  int local_34;
  tagRECT local_18;
  InputClassTy *local_8;
  
  local_88.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_88;
  local_8 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_88.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar5 == 0) {
    BVar6 = GetClientRect(DAT_00856d78,&local_18);
    if (BVar6 == 0) {
      iVar9 = 0x30;
      pcVar8 = s_E__Ourlib_Sinput_cpp_007f092c;
      iVar5 = DAT_007ed77c;
      DVar7 = GetLastError();
      RaiseInternalException(DVar7,iVar5,pcVar8,iVar9);
    }
    pIVar4 = local_8;
    *(LONG *)(local_8 + 0x34) = local_18.left;
    pIVar1 = local_8 + 0x18;
    *(LONG *)(local_8 + 0x38) = local_18.top;
    *(LONG *)(local_8 + 0x3c) = local_18.right - local_18.left;
    *(LONG *)(local_8 + 0x40) = local_18.bottom - local_18.top;
    iVar5 = DirectInputCreateA(DAT_00856d70,0x700,pIVar1,0);
    if (iVar5 != 0) {
      RaiseInternalException(iVar5,DAT_007ed77c,s_E__Ourlib_Sinput_cpp_007f092c,0x32);
    }
    *(int *)(pIVar4 + 0x2c) = *(int *)(pIVar4 + 0x3c) / 2 + *(int *)(pIVar4 + 0x34);
    pIVar2 = pIVar4 + 0x20;
    *(int *)(pIVar4 + 0x30) = *(int *)(pIVar4 + 0x40) / 2 + *(int *)(pIVar4 + 0x38);
    iVar5 = (**(code **)(**(int **)pIVar1 + 0xc))(*(int **)pIVar1,&DAT_0079eeb8,pIVar2,0);
    if (iVar5 != 0) {
      RaiseInternalException(iVar5,DAT_007ed77c,s_E__Ourlib_Sinput_cpp_007f092c,0x36);
    }
    iVar5 = (**(code **)(**(int **)pIVar2 + 0x34))(*(int **)pIVar2,DAT_00856d78,5);
    if (iVar5 != 0) {
      RaiseInternalException(iVar5,DAT_007ed77c,s_E__Ourlib_Sinput_cpp_007f092c,0x3c);
    }
    iVar5 = (**(code **)(**(int **)pIVar2 + 0x2c))(*(int **)pIVar2,&DAT_0079e390);
    if (iVar5 != 0) {
      RaiseInternalException(iVar5,DAT_007ed77c,s_E__Ourlib_Sinput_cpp_007f092c,0x3e);
    }
    local_44 = 0x2c;
    iVar5 = (**(code **)(**(int **)pIVar2 + 0xc))(*(int **)pIVar2,&local_44);
    if (iVar5 != 0) {
      RaiseInternalException(iVar5,DAT_007ed77c,s_E__Ourlib_Sinput_cpp_007f092c,0x42);
    }
    iVar5 = 1;
    if (((local_40 & 1) == 0) || (local_38 < 3)) {
      iVar5 = 0;
    }
    *(int *)(pIVar4 + 0x5c) = iVar5;
    if (iVar5 != 0) {
      *(int *)(pIVar4 + 0x44) = local_34 + -1;
    }
    pIVar2 = pIVar4 + 0x1c;
    iVar5 = (**(code **)(**(int **)pIVar1 + 0xc))(*(int **)pIVar1,&DAT_0079eea8,pIVar2,0);
    if (iVar5 != 0) {
      RaiseInternalException(iVar5,DAT_007ed77c,s_E__Ourlib_Sinput_cpp_007f092c,0x48);
    }
    iVar5 = (**(code **)(**(int **)pIVar2 + 0x2c))(*(int **)pIVar2,&DAT_0079e378);
    if (iVar5 != 0) {
      RaiseInternalException(iVar5,DAT_007ed77c,s_E__Ourlib_Sinput_cpp_007f092c,0x49);
    }
    iVar5 = (**(code **)(**(int **)pIVar2 + 0x34))(*(int **)pIVar2,DAT_00856d78,6);
    if (iVar5 != 0) {
      RaiseInternalException(iVar5,DAT_007ed77c,s_E__Ourlib_Sinput_cpp_007f092c,0x4a);
    }
    pIVar1 = pIVar4 + 0x68;
    BVar6 = SystemParametersInfoA(0x16,0,pIVar1,0);
    if (BVar6 == 0) {
      iVar9 = 0x4d;
      pcVar8 = s_E__Ourlib_Sinput_cpp_007f092c;
      iVar5 = DAT_007ed77c;
      DVar7 = GetLastError();
      RaiseInternalException(DVar7,iVar5,pcVar8,iVar9);
    }
    pIVar2 = pIVar4 + 0x6c;
    BVar6 = SystemParametersInfoA(10,0,pIVar2,0);
    if (BVar6 == 0) {
      iVar9 = 0x4e;
      pcVar8 = s_E__Ourlib_Sinput_cpp_007f092c;
      iVar5 = DAT_007ed77c;
      DVar7 = GetLastError();
      RaiseInternalException(DVar7,iVar5,pcVar8,iVar9);
    }
    *(int *)pIVar1 = (*(int *)pIVar1 + 1) * 0xfa;
    *(int *)pIVar2 = (int)(1000 / (ulonglong)(*(int *)pIVar2 + 1));
    FUN_006e4290(6,4,2,*(undefined4 *)(pIVar4 + 8));
    g_currentExceptionFrame = local_88.previous;
    return 0;
  }
  g_currentExceptionFrame = local_88.previous;
  iVar9 = ReportDebugMessage(s_E__Ourlib_Sinput_cpp_007f092c,0x57,0,iVar5,&DAT_007a4ccc,
                             s_InputClassTy__Create_error_007f0910);
  if (iVar9 != 0) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  RaiseInternalException(iVar5,0,s_E__Ourlib_Sinput_cpp_007f092c,0x58);
  return iVar5;
}

