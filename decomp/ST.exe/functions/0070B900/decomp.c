
int * __cdecl
FUN_0070b900(byte *param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,int param_7,
            uint *param_8,int param_9)

{
  code *pcVar1;
  int iVar2;
  HFILE HVar3;
  int *piVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  _OFSTRUCT local_f8;
  InternalExceptionFrame local_70;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  int *local_1c;
  int *local_18;
  int local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  local_2c = param_6 >> 0x18;
  local_28 = param_6 >> 0x10 & 0xff;
  local_20 = param_6 >> 8 & 0xff;
  local_24 = param_6 & 0xff;
  local_10 = (int *)0x0;
  local_1c = (undefined4 *)0x0;
  local_18 = (undefined4 *)0x0;
  local_14 = -1;
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  iVar2 = Library::MSVCRT::__setjmp3(local_70.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_70.previous;
    iVar5 = ReportDebugMessage(s_E__Ourlib_Mfimg_cpp_007effe0,0x387,0,iVar2,&DAT_007a4ccc,
                               s_imgGetDibFromFile_007f00d8);
    if (iVar5 == 0) {
      if (((local_10 != (int *)0x0) && (local_10 != local_8)) && (local_10 != local_c)) {
        FUN_006ab060(&local_10);
      }
      if (local_14 != -1) {
        _lclose(local_14);
      }
      if (local_1c != (undefined4 *)0x0) {
        FUN_006c6fc0(local_1c);
      }
      if (local_18 != (undefined4 *)0x0) {
        FUN_006c7980(local_18);
      }
      if ((local_8 != (int *)0x0) && (local_8 != local_c)) {
        FUN_006ab060(&local_8);
      }
      if (local_c != (int *)0x0) {
        FUN_006ab060(&local_c);
      }
      RaiseInternalException(iVar2,0,s_E__Ourlib_Mfimg_cpp_007effe0,0x390);
      return (int *)0x0;
    }
    pcVar1 = (code *)swi(3);
    piVar4 = (int *)(*pcVar1)();
    return piVar4;
  }
  iVar2 = FUN_0070b6d0(param_1);
  piVar4 = local_10;
  switch(iVar2) {
  case 0:
    if ((param_4 < 1) || (param_5 < 1)) {
      local_8 = Library::DKW::WGR::FUN_006bc260((LPCSTR)param_1);
    }
    else {
      local_8 = Library::DKW::WGR::FUN_007520a0((LPCSTR)param_1,param_2,param_3,param_4,param_5);
    }
    local_10 = (int *)FUN_0070b770((int)local_8,param_7);
    piVar4 = local_10;
    if ((local_8 != (int *)0x0) && (local_10 != local_8)) {
      FUN_006ab060(&local_8);
      piVar4 = local_10;
    }
    break;
  case 1:
    HVar3 = OpenFile((LPCSTR)param_1,&local_f8,0);
    local_14 = HVar3;
    if (HVar3 == -1) {
      RaiseInternalException(-10,DAT_007ed77c,s_E__Ourlib_Mfimg_cpp_007effe0,0x35f);
    }
    piVar4 = Library::DKW::GPC::FUN_00751f30(HVar3,0);
    local_18 = piVar4;
    local_8 = Library::DKW::GPC::FUN_006c79a0(piVar4,(undefined4 *)0x0,0);
    FUN_006c7980(piVar4);
    local_18 = (undefined4 *)0x0;
    _lclose(HVar3);
    local_14 = -1;
    if ((param_4 < 1) || (param_5 < 1)) {
      local_c = local_8;
    }
    else {
      iVar2 = FUN_006b4fa0((int)local_8);
      local_c = Library::DKW::WGR::FUN_006b55f0
                          ((undefined4 *)0x0,0,0,0,(int)local_8,iVar2,param_2,param_3,param_4,
                           param_5);
      FUN_006ab060(&local_8);
      if (local_c == (int *)0x0) {
        RaiseInternalException(-0x34,DAT_007ed77c,s_E__Ourlib_Mfimg_cpp_007effe0,0x36a);
      }
    }
    local_10 = (int *)FUN_0070b770((int)local_c,param_7);
    piVar4 = local_10;
    if ((local_c == (int *)0x0) || (local_10 == local_c)) break;
    goto LAB_0070baee;
  case 2:
    HVar3 = OpenFile((LPCSTR)param_1,&local_f8,0);
    local_14 = HVar3;
    if (HVar3 == -1) {
      RaiseInternalException(-10,DAT_007ed77c,s_E__Ourlib_Mfimg_cpp_007effe0,0x34d);
    }
    piVar4 = Library::DKW::GPC::FUN_00751fc0(HVar3);
    local_1c = piVar4;
    local_8 = Library::DKW::GPC::FUN_006c7070(piVar4,(undefined4 *)0x0,0);
    FUN_006c6fc0(piVar4);
    local_1c = (undefined4 *)0x0;
    _lclose(HVar3);
    local_14 = -1;
    if ((param_4 < 1) || (param_5 < 1)) {
      local_c = local_8;
    }
    else {
      iVar2 = FUN_006b4fa0((int)local_8);
      local_c = Library::DKW::WGR::FUN_006b55f0
                          ((undefined4 *)0x0,0,0,0,(int)local_8,iVar2,param_2,param_3,param_4,
                           param_5);
      FUN_006ab060(&local_8);
      if (local_c == (int *)0x0) {
        RaiseInternalException(-0x34,DAT_007ed77c,s_E__Ourlib_Mfimg_cpp_007effe0,0x358);
      }
    }
    local_10 = (int *)FUN_0070b770((int)local_c,param_7);
    piVar4 = local_10;
    if ((local_c == (int *)0x0) || (local_10 == local_c)) break;
LAB_0070baee:
    FUN_006ab060(&local_c);
    piVar4 = local_10;
    break;
  case 3:
    local_8 = (int *)Library::DKW::JPG::FUN_00751e70((LPCSTR)param_1,0,param_7,param_8,param_9);
    piVar4 = local_8;
    if ((0 < param_4) && (0 < param_5)) {
      iVar2 = FUN_006b4fa0((int)local_8);
      local_10 = Library::DKW::WGR::FUN_006b55f0
                           ((undefined4 *)0x0,0,0,0,(int)local_8,iVar2,param_2,param_3,param_4,
                            param_5);
      if (local_8 != (int *)0x0) {
        FUN_006ab060(&local_8);
      }
      piVar4 = local_10;
      if (local_10 == (int *)0x0) {
        RaiseInternalException(-0x34,DAT_007ed77c,s_E__Ourlib_Mfimg_cpp_007effe0,0x378);
        piVar4 = local_10;
      }
    }
  }
  local_10 = piVar4;
  if (local_2c == 0) {
    local_2c = 1;
  }
  if (local_28 == 0) {
    local_28 = 1;
  }
  if (local_20 == 0) {
    local_20 = 1;
  }
  if (local_24 == 0) {
    local_24 = 1;
  }
  if ((((local_2c == 1) && (local_28 == 1)) && (local_20 == 1)) && (local_24 == 1)) {
    g_currentExceptionFrame = local_70.previous;
    return local_10;
  }
  piVar4 = Library::DKW::WGR::FUN_00751cb0
                     ((undefined4 *)0x0,(ushort *)0x0,local_10,(ushort *)0x0,
                      (local_10[1] * local_2c) / local_28,(local_10[2] * local_20) / local_24);
  if (local_10 != (int *)0x0) {
    FUN_006ab060(&local_10);
  }
  g_currentExceptionFrame = local_70.previous;
  return piVar4;
}

