
undefined4 * __cdecl
FUN_0070c4d0(int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar5;
  int iVar6;
  int iVar7;
  CHAR local_45c [1024];
  InternalExceptionFrame local_5c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  undefined4 *local_8;
  
  local_18 = param_6 >> 0x18;
  local_14 = param_6 >> 0x10 & 0xff;
  local_c = param_6 >> 8 & 0xff;
  local_10 = param_6 & 0xff;
  local_8 = (undefined4 *)0x0;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  iVar2 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    if (local_8 != (undefined4 *)0x0) {
      FUN_006ab060(&local_8);
    }
    return (undefined4 *)0x0;
  }
  iVar2 = param_2;
  iVar5 = param_3;
  iVar6 = param_4;
  iVar7 = param_5;
  iVar3 = FUN_006b4fa0(param_1);
  local_8 = Library::DKW::WGR::FUN_006b55f0
                      ((undefined4 *)0x0,0,0,0,param_1,iVar3,iVar2,iVar5,iVar6,iVar7);
  if (local_8 == (undefined4 *)0x0) {
    wsprintfA(local_45c,s_img___d__d__d__d___lx__d__ly__d__007f0118,param_2,param_3,param_4,param_5,
              *(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),param_6);
    iVar2 = ReportDebugMessage(s_E__Ourlib_Mfimg_cpp_007effe0,0x4a7,0,-1,&DAT_007a4ccc,local_45c);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      puVar4 = (undefined4 *)(*pcVar1)();
      return puVar4;
    }
  }
  if (local_18 == 0) {
    local_18 = 1;
  }
  if (local_14 == 0) {
    local_14 = 1;
  }
  if (local_c == 0) {
    local_c = 1;
  }
  if (local_10 == 0) {
    local_10 = 1;
  }
  puVar4 = local_8;
  if (((local_8 != (undefined4 *)0x0) &&
      ((((local_18 != 1 || (local_14 != 1)) || (local_c != 1)) || (local_10 != 1)))) &&
     (puVar4 = Library::DKW::WGR::FUN_00751cb0
                         ((undefined4 *)0x0,(ushort *)0x0,local_8,(ushort *)0x0,
                          (local_8[1] * local_18) / local_14,(local_8[2] * local_c) / local_10),
     local_8 != (undefined4 *)0x0)) {
    FUN_006ab060(&local_8);
    g_currentExceptionFrame = local_5c.previous;
    return puVar4;
  }
  g_currentExceptionFrame = local_5c.previous;
  return puVar4;
}

