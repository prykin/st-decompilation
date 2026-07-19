
undefined4 FUN_00751e70(LPCSTR param_1,uint param_2,int param_3,uint *param_4,int param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_54;
  undefined4 local_10;
  undefined4 *local_c;
  int local_8;
  
  local_8 = 0;
  local_c = FUN_006d4380((undefined4 *)0x0,param_1,0);
  if (local_c == (undefined4 *)0x0) {
    return 0;
  }
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  iVar2 = __setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  puVar1 = local_c;
  if (iVar2 == 0) {
    local_10 = FUN_00751c40(local_c[0xd],param_2,param_3,param_4,param_5);
    iVar2 = local_8;
  }
  local_8 = iVar2;
  iVar2 = local_8;
  g_currentExceptionFrame = local_54.previous;
  FUN_006d46a0(puVar1,0);
  if (iVar2 == 0) {
    return local_10;
  }
  RaiseInternalException(iVar2,DAT_007ed77c,s_E__DKW_JPG_C_jfil2dib_c_007f2b48,0x16);
  return 0;
}

