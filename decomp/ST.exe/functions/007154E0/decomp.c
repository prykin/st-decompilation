
byte * __cdecl FUN_007154e0(byte *param_1,uint param_2,byte *param_3,int *param_4,uint *param_5)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_50;
  uint local_c;
  byte *local_8;
  
  local_8 = (byte *)0x0;
  local_c = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar4 = ReportDebugMessage(s_E__ourlib_connect_cpp_007f043c,0x7e,0,iVar3,&DAT_007a4ccc,
                               s_cnUnPackMess_007f042c);
    if (iVar4 == 0) {
      if ((local_8 != (byte *)0x0) && (local_c != 0)) {
        FUN_006ab060(&local_8);
      }
      RaiseInternalException(iVar3,0,s_E__ourlib_connect_cpp_007f043c,0x82);
      return (byte *)0x0;
    }
    pcVar2 = (code *)swi(3);
    pbVar5 = (byte *)(*pcVar2)();
    return pbVar5;
  }
  uVar1 = (uint)(0x80 < *param_1);
  if (uVar1 == 0) {
    local_8 = param_1;
    if (5 < param_2) {
      local_8 = param_1 + 5;
    }
    if (param_3 != (byte *)0x0) {
      *param_3 = *param_1;
    }
    if (param_4 != (int *)0x0) {
      *param_4 = param_2 - 5;
    }
    if (param_5 != (uint *)0x0) {
      *param_5 = 0;
      g_currentExceptionFrame = local_50.previous;
      return local_8;
    }
  }
  else {
    local_c = uVar1;
    local_8 = (byte *)Library::DKW::LIB::FUN_006aac10(*(uint *)(param_1 + 5));
    iVar3 = FUN_007519d0((ushort *)(param_1 + 9),local_8);
    if (iVar3 != *(int *)(param_1 + 5)) {
      RaiseInternalException(-0x33,DAT_007ed77c,s_E__ourlib_connect_cpp_007f043c,0x6a);
    }
    if (param_3 != (byte *)0x0) {
      *param_3 = *param_1 + 0x80;
    }
    if (param_4 != (int *)0x0) {
      *param_4 = iVar3;
    }
    if (param_5 != (uint *)0x0) {
      *param_5 = uVar1;
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return local_8;
}

