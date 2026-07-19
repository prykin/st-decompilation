
undefined4 * __cdecl FUN_00716fd0(int param_1,char *param_2,byte param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 unaff_ESI;
  int iVar5;
  void *unaff_EDI;
  InternalExceptionFrame local_5c;
  short local_18 [6];
  ushort *local_c;
  undefined4 *local_8;
  
  iVar5 = 0;
  local_8 = (undefined4 *)0x0;
  local_c = (ushort *)0x0;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  iVar2 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if (param_1 == 0) {
      RaiseInternalException(-0x34,DAT_007ed77c,s_E__Ourlib_mftspr_cpp_007f0504,0xf7);
    }
    local_c = cMf32::RecGet((cMf32 *)param_1,0x13,param_2,(int *)0x0,param_4);
    if (local_c == (ushort *)0x0) {
      RaiseInternalException(-4,DAT_007ed77c,s_E__Ourlib_mftspr_cpp_007f0504,0xf9);
    }
    cMf32::RecGetParam((cMf32 *)param_1,0x13,param_2,(undefined4 *)local_18,1);
    local_8 = Library::DKW::LIB::FUN_006aac10(local_18[0] * 4 + 0x31);
    *(short *)((int)local_8 + 0x23) = local_18[0];
    iVar2 = 0;
    *(int *)((int)local_8 + 0x25) = param_1;
    if (0 < *(short *)((int)local_8 + 0x23)) {
      do {
        uVar3 = FUN_0070aa50(param_1,(char *)(local_c + iVar2 * 0x22),param_3,param_4);
        *(undefined4 *)((int)local_8 + iVar2 * 4 + 0x2d) = uVar3;
        if (*(int *)((int)local_8 + iVar2 * 4 + 0x2d) == 0) {
          RaiseInternalException(-4,DAT_007ed77c,s_E__Ourlib_mftspr_cpp_007f0504,0x104);
        }
        if (iVar2 == 0) {
          *(undefined2 *)((int)local_8 + 0x29) = *(undefined2 *)(*(int *)((int)local_8 + 0x2d) + 4);
          *(undefined2 *)((int)local_8 + 0x2b) = *(undefined2 *)(*(int *)((int)local_8 + 0x2d) + 8);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(short *)((int)local_8 + 0x23));
    }
    g_currentExceptionFrame = local_5c.previous;
    cMf32::RecMemFree((cMf32 *)param_1,(uint *)&local_c);
    return local_8;
  }
  g_currentExceptionFrame = local_5c.previous;
  cMf32::RecMemFree((cMf32 *)param_1,(uint *)&local_c);
  if (local_8 != (undefined4 *)0x0) {
    if (0 < *(short *)((int)local_8 + 0x23)) {
      do {
        cMf32::RecMemFree((cMf32 *)param_1,(uint *)((int)local_8 + iVar5 * 4 + 0x2d));
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(short *)((int)local_8 + 0x23));
    }
    FUN_006ab060(&local_8);
  }
  if ((param_4 != 0) || (iVar2 != -4)) {
    iVar5 = ReportDebugMessage(s_E__Ourlib_mftspr_cpp_007f0504,0x114,0,iVar2,&DAT_007a4ccc,
                               s_mfTSprLoadAsSSpr_007f052c);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      puVar4 = (undefined4 *)(*pcVar1)();
      return puVar4;
    }
    RaiseInternalException(iVar2,0,s_E__Ourlib_mftspr_cpp_007f0504,0x116);
  }
  return (undefined4 *)0x0;
}

