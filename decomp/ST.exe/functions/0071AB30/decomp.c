
undefined4 __cdecl FUN_0071ab30(uint *param_1,int param_2,char *param_3,char param_4)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_5c;
  uint local_18 [3];
  uint local_c;
  byte *local_8;
  
  local_c = 0;
  local_8 = (byte *)0x0;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  errorCode = __setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (errorCode == 0) {
    if ((((param_1 == (uint *)0x0) || (param_2 == 0)) || (param_3 == (char *)0x0)) ||
       (param_1[5] == 0)) {
      RaiseInternalException(-0x34,DAT_007ed77c,s_E__Ourlib_mfsarr_cpp_007f0898,0x39);
    }
    local_18[0] = param_1[2];
    local_8 = (byte *)FUN_006c8910(param_1,(int *)&local_c);
    FUN_006f13f0(0x17,param_3,local_8,local_c,local_18,param_4,(uint *)0x0);
    if (local_8 != (byte *)0x0) {
      FUN_006ab060(&local_8);
    }
    g_currentExceptionFrame = local_5c.previous;
    return 1;
  }
  g_currentExceptionFrame = local_5c.previous;
  iVar2 = ReportDebugMessage(s_E__Ourlib_mfsarr_cpp_007f0898,0x44,0,errorCode,&DAT_007a4ccc,
                             s_mfSarSave_007f08b0);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if (local_8 != (byte *)0x0) {
    FUN_006ab060(&local_8);
  }
  RaiseInternalException(errorCode,0,s_E__Ourlib_mfsarr_cpp_007f0898,0x48);
  return 0;
}

