
int __cdecl FUN_0070a050(int param_1,char param_2,byte *param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_54;
  int local_10;
  uint local_c;
  undefined1 *local_8;
  
  local_10 = -4;
  local_8 = (undefined1 *)0x0;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  iVar2 = __setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar3 = ReportDebugMessage(s_E__Ourlib_mfrload_cpp_007eff5c,0x133,0,iVar2,&DAT_007a4ccc,
                               s_mfRLoadRelease_007eff9c);
    if (iVar3 == 0) {
      RaiseInternalException(iVar2,0,s_E__Ourlib_mfrload_cpp_007eff5c,0x135);
      return iVar2;
    }
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  if (param_1 != 0) {
    if (*(int *)(param_1 + 4) == 0) {
      RaiseInternalException(-0x34,DAT_007ed77c,s_E__Ourlib_mfrload_cpp_007eff5c,0x127);
      return -0x34;
    }
    iVar2 = FUN_007098a0(param_1,param_2,param_3,param_4,(int *)&local_8,&local_c);
    if (iVar2 != 0) {
      *(int *)(local_8 + 0x25) = *(int *)(local_8 + 0x25) + -1;
      local_10 = *(int *)(local_8 + 0x25);
      if (local_10 == 0) {
        FUN_00709a10(param_1,*local_8,(uint *)(local_8 + 0x29));
        FUN_006b0c70(*(int *)(param_1 + 4),local_c);
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
    }
    g_currentExceptionFrame = local_54.previous;
    return local_10;
  }
  RaiseInternalException(-0x34,DAT_007ed77c,s_E__Ourlib_mfrload_cpp_007eff5c,0x126);
  return -0x34;
}

