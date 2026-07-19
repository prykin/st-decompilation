
/* Recovered from embedded debug metadata:
   E:\Ourlib\Mf32int.cpp
   cMf32::RecPutNoname */

uint __thiscall cMf32::RecPutNoname(cMf32 *this,undefined4 *param_1,uint param_2)

{
  code *pcVar1;
  int errorCode;
  uint uVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  cMf32 *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = __setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (errorCode == 0) {
    if ((param_1 == (undefined4 *)0x0) || (param_2 == 0)) {
      RaiseInternalException(-0x34,DAT_007ed77c,s_E__Ourlib_Mf32int_cpp_007efaa4,0x11b);
    }
    uVar2 = FUN_00751050(*(uint **)local_8,(ushort *)0x0,param_1,param_2);
    g_currentExceptionFrame = local_4c.previous;
    return uVar2;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage(s_E__Ourlib_Mf32int_cpp_007efaa4,0x120,0,errorCode,&DAT_007a4ccc,
                             s_cMf32__RecPutNoname_007efb2c);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    uVar2 = (*pcVar1)();
    return uVar2;
  }
  RaiseInternalException(errorCode,0,s_E__Ourlib_Mf32int_cpp_007efaa4,0x122);
  return 0xffffffff;
}

