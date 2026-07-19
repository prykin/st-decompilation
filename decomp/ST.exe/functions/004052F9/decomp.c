
void thunk_FUN_0054c740(void)

{
  code *pcVar1;
  int errorCode;
  void *this;
  int iVar2;
  byte bVar3;
  undefined4 unaff_EBX;
  void *unaff_ESI;
  InternalExceptionFrame IStack_50;
  uint *puStack_c;
  uint uStack_8;
  
  IStack_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_50;
  errorCode = __setjmp3(IStack_50.jumpBuffer,0,unaff_ESI,unaff_EBX);
  if (errorCode == 0) {
    this = (void *)FUN_0072e530(0xf8);
    if (this == (void *)0x0) {
      DAT_00802a38 = (int *)0x0;
    }
    else {
      DAT_00802a38 = thunk_FUN_0054cb40(this,DAT_00806728);
    }
    if (DAT_00802a38 == (int *)0x0) {
      RaiseInternalException(-1,DAT_007ed77c,s_E____titans_Andrey_tplaysys_cpp_007c8430,0x7d);
    }
    DAT_00802a38[0x38] = 0;
    (**(code **)*DAT_00802a38)();
    (**(code **)(*DAT_00802a38 + 8))(0x1100,0,&DAT_007fa174,0,0);
    (**(code **)(*DAT_00802a38 + 8))(0x109,0,0,0,0);
    (**(code **)(*DAT_00802a38 + 8))(0x121,0,0,0,0);
    (**(code **)(*DAT_00802a38 + 8))(0x143,&DAT_00811794,0,0,0);
    (**(code **)(*DAT_00802a38 + 8))(0x145,&DAT_008117a0,0,0,0);
    (**(code **)(*DAT_00802a38 + 8))(0x146,&DAT_008117ac,0,0,0);
    (**(code **)(*DAT_00802a38 + 8))(0x15b,&DAT_00811780,0,0,0);
    thunk_FUN_0058d6f0();
    if (DAT_0080879c == 0) {
      bVar3 = 0;
      uStack_8 = uStack_8 & 0xffffff00;
      do {
        thunk_FUN_00435850(uStack_8,1,(int *)0x0);
        bVar3 = bVar3 + 1;
        uStack_8 = CONCAT31(uStack_8._1_3_,bVar3);
      } while (bVar3 < 8);
    }
    thunk_FUN_00648fe0();
    if (DAT_00806754 != 0) {
      puStack_c = &uStack_8;
      uStack_8 = 0x32;
      FUN_006f1ce0(0xc,PTR_s_LAST_NAME_0079ae2c,(int *)&puStack_c,0);
      if ((uint)DAT_00802a38[8] < uStack_8) {
        DAT_00802a38[8] = uStack_8;
      }
    }
    FUN_006e4960(DAT_0081163c,DAT_00802a38,0);
    DAT_00802a38[0x38] = 1;
    if (DAT_008067a0 != '\0') {
      DAT_00802a99 = 1;
    }
    g_currentExceptionFrame = IStack_50.previous;
    return;
  }
  g_currentExceptionFrame = IStack_50.previous;
  iVar2 = ReportDebugMessage(s_E____titans_Andrey_tplaysys_cpp_007c8430,0xb0,0,errorCode,
                             &DAT_007a4ccc,s_CreatePlaySystem_007c841c);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Andrey_tplaysys_cpp_007c8430,0xb1);
  return;
}

