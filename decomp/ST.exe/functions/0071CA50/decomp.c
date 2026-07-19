
/* Recovered from embedded debug metadata:
   E:\Ourlib\Sinput.cpp
   InputClassTy::GetMessage */

undefined4 __thiscall InputClassTy::GetMessage(InputClassTy *this,int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  code *pcVar3;
  InputClassTy *pIVar4;
  int iVar5;
  byte *pbVar6;
  BOOL BVar7;
  DWORD exceptionCode;
  int iVar8;
  undefined4 uVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char *sourceFile;
  InternalExceptionFrame local_5c;
  tagRECT local_18;
  InputClassTy *local_8;
  
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_8 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pIVar4 = local_8;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar8 = ReportDebugMessage(s_E__Ourlib_Sinput_cpp_007f092c,0x2f1,0,iVar5,
                               s_InputClassTy__GetMessage_error__M_007f09d8,
                               *(undefined4 *)(param_1 + 0x10));
    if (iVar8 != 0) {
      pcVar3 = (code *)swi(3);
      uVar9 = (*pcVar3)();
      return uVar9;
    }
    RaiseInternalException(iVar5,0,s_E__Ourlib_Sinput_cpp_007f092c,0x2f2);
    return 0xffff;
  }
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 0:
    if (DAT_00856d74 != 0) {
      None(local_8);
      g_currentExceptionFrame = local_5c.previous;
      return 0;
    }
    break;
  default:
    FUN_006e5fd0();
    break;
  case 2:
    Create(local_8);
    g_currentExceptionFrame = local_5c.previous;
    return 0;
  case 3:
    Done(local_8);
    g_currentExceptionFrame = local_5c.previous;
    return 0;
  case 4:
    iVar5 = **(int **)(local_8 + 0x1c);
    if ((*(byte *)(param_1 + 0x14) & 3) == 0) {
      (**(code **)(iVar5 + 0x20))();
      *(undefined4 *)(pIVar4 + 0x60) = 0;
      (**(code **)(**(int **)(pIVar4 + 0x20) + 0x20))(*(int **)(pIVar4 + 0x20));
      *(undefined4 *)(pIVar4 + 100) = 0;
      g_currentExceptionFrame = local_5c.previous;
      return 0;
    }
    iVar5 = (**(code **)(iVar5 + 0x1c))(*(int **)(local_8 + 0x1c));
    *(uint *)(pIVar4 + 0x60) = (uint)(-1 < iVar5);
    iVar5 = (**(code **)(**(int **)(pIVar4 + 0x20) + 0x1c))(*(int **)(pIVar4 + 0x20));
    *(uint *)(pIVar4 + 100) = (uint)(-1 < iVar5);
    g_currentExceptionFrame = local_5c.previous;
    return 0;
  case 0x10:
    AddAcc(local_8,*(uint **)(param_1 + 0x14));
    g_currentExceptionFrame = local_5c.previous;
    return 0;
  case 0x11:
    DelAcc(local_8,*(byte **)(param_1 + 0x14));
    g_currentExceptionFrame = local_5c.previous;
    return 0;
  case 0x12:
    uVar9 = FUN_0071c7c0(local_8,*(int **)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x18) = uVar9;
    g_currentExceptionFrame = local_5c.previous;
    return 0;
  case 0x13:
    AddToMouse(local_8,*(int *)(param_1 + 0x14),*(uint *)(param_1 + 0x18));
    g_currentExceptionFrame = local_5c.previous;
    return 0;
  case 0x14:
    FUN_0071c9f0(local_8,*(int *)(param_1 + 0x14));
    g_currentExceptionFrame = local_5c.previous;
    return 0;
  case 0x15:
    *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(local_8 + 0x2c);
    *(undefined2 *)(param_1 + 0x1a) = *(undefined2 *)(local_8 + 0x30);
    g_currentExceptionFrame = local_5c.previous;
    return 0;
  case 0x16:
    *(uint *)(local_8 + 0x2c) = (uint)*(ushort *)(param_1 + 0x18);
    *(uint *)(local_8 + 0x30) = (uint)*(ushort *)(param_1 + 0x1a);
    *(undefined4 *)(local_8 + 0x54) = 1;
    g_currentExceptionFrame = local_5c.previous;
    return 0;
  case 0x17:
    puVar1 = *(undefined4 **)(param_1 + 0x14);
    *(undefined4 *)(local_8 + 0x34) = *puVar1;
    *(undefined4 *)(local_8 + 0x38) = puVar1[1];
    *(undefined4 *)(local_8 + 0x3c) = puVar1[2];
    *(undefined4 *)(local_8 + 0x40) = puVar1[3];
    g_currentExceptionFrame = local_5c.previous;
    return 0;
  case 0x18:
    FUN_0071c830((int)local_8);
    g_currentExceptionFrame = local_5c.previous;
    return 0;
  case 0x19:
    FUN_0071c870((int)local_8);
    g_currentExceptionFrame = local_5c.previous;
    return 0;
  case 0x1a:
    pbVar6 = *(byte **)(local_8 + 0x28);
    uVar9 = *(undefined4 *)(pbVar6 + 4);
    do {
      pbVar6[4] = 0;
      pbVar6[5] = 0;
      pbVar6[6] = 0;
      pbVar6[7] = 0;
      do {
        iVar5 = *(int *)(local_8 + 0x28);
        uVar2 = *(uint *)(iVar5 + 4);
        if (uVar2 < *(uint *)(iVar5 + 0xc)) {
          pbVar6 = (byte *)(*(int *)(iVar5 + 8) * uVar2 + *(int *)(iVar5 + 0x1c));
          *(uint *)(iVar5 + 4) = uVar2 + 1;
        }
        else {
          pbVar6 = (byte *)0x0;
        }
        if (pbVar6 == (byte *)0x0) {
          *(undefined4 *)(*(int *)(local_8 + 0x28) + 4) = uVar9;
          g_currentExceptionFrame = local_5c.previous;
          return 0;
        }
      } while ((*pbVar6 & 1) != 0);
    } while( true );
  case 0x1b:
    uVar9 = *(undefined4 *)(*(int *)(local_8 + 0x28) + 4);
    *(undefined4 *)(*(int *)(local_8 + 0x28) + 4) = 0;
    while( true ) {
      iVar5 = *(int *)(local_8 + 0x28);
      uVar2 = *(uint *)(iVar5 + 4);
      if (uVar2 < *(uint *)(iVar5 + 0xc)) {
        iVar8 = *(int *)(iVar5 + 8) * uVar2 + *(int *)(iVar5 + 0x1c);
        *(uint *)(iVar5 + 4) = uVar2 + 1;
      }
      else {
        iVar8 = 0;
      }
      if (iVar8 == 0) break;
      *(undefined4 *)(iVar8 + 4) = 1;
    }
    *(undefined4 *)(*(int *)(local_8 + 0x28) + 4) = uVar9;
    g_currentExceptionFrame = local_5c.previous;
    return 0;
  case 0x65:
    *(undefined4 *)(param_1 + 0x14) = 0;
    iVar5 = *(int *)(local_8 + 0x24);
    if (iVar5 != 0) {
      uVar2 = *(uint *)(iVar5 + 0xc);
      if (uVar2 - 1 < uVar2) {
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((uVar2 - 1) * *(int *)(iVar5 + 8) + *(int *)(iVar5 + 0x1c) + 8);
        g_currentExceptionFrame = local_5c.previous;
        return 0;
      }
      *(undefined4 *)(param_1 + 0x14) = uRam00000008;
      g_currentExceptionFrame = local_5c.previous;
      return 0;
    }
    break;
  case 0x66:
    BVar7 = GetClientRect(DAT_00856d78,&local_18);
    if (BVar7 == 0) {
      iVar8 = 0x2ca;
      sourceFile = s_E__Ourlib_Sinput_cpp_007f092c;
      iVar5 = DAT_007ed77c;
      exceptionCode = GetLastError();
      RaiseInternalException(exceptionCode,iVar5,sourceFile,iVar8);
    }
    *(LONG *)(local_8 + 0x3c) = local_18.right - local_18.left;
    *(LONG *)(local_8 + 0x34) = local_18.left;
    *(LONG *)(local_8 + 0x38) = local_18.top;
    *(int *)(local_8 + 0x2c) = (local_18.right - local_18.left) / 2 + local_18.left;
    *(LONG *)(local_8 + 0x40) = local_18.bottom - local_18.top;
    *(undefined4 *)(local_8 + 0x54) = 1;
    *(int *)(local_8 + 0x30) = (local_18.bottom - local_18.top) / 2 + local_18.top;
    g_currentExceptionFrame = local_5c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_5c.previous;
  return 0;
}

