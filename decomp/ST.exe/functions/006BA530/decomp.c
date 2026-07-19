
int FUN_006ba530(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,int param_5,
                int param_6,int param_7,int param_8,int param_9,byte param_10,int param_11)

{
  int iVar1;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_48;
  
  iVar1 = FUN_006b9b20(param_1,param_2,(int *)0x0);
  if (iVar1 != 0) {
    return 0;
  }
  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  iVar1 = __setjmp3(local_48.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar1 == 0) {
    FUN_006b9b40((undefined4 *)*param_1,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                 param_10,param_11);
    g_currentExceptionFrame = local_48.previous;
    return 0;
  }
  g_currentExceptionFrame = local_48.previous;
  FUN_006ba600((undefined4 *)*param_1);
  *param_1 = 0;
  RaiseInternalException(iVar1,0,s_E__DKW_DDX_C_ddx_c_007edc48,0x231);
  return iVar1;
}

