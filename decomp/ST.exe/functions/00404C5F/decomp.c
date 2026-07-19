
void __thiscall
MMObjTy::PaintButDib(MMObjTy *this,int param_1,int *param_2,int param_3,byte param_4,uint param_5)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_94;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  iStack_40 = param_2[2];
  if (iStack_40 / 2 <= param_3) {
    param_3 = iStack_40 / 2;
  }
  iStack_10 = param_2[3];
  if (iStack_10 / 2 <= param_3) {
    param_3 = iStack_10 / 2;
  }
  iStack_20 = *param_2;
  iStack_4c = param_2[1];
  iStack_50 = iStack_20 + param_3;
  iStack_48 = (iStack_20 - param_3) + -1 + iStack_40;
  iStack_40 = iStack_20 + -1 + iStack_40;
  iStack_3c = iStack_4c + param_3;
  iStack_2c = iStack_4c + iStack_10 + -1;
  iStack_34 = ((iStack_4c + iStack_10) - param_3) + -1;
  IStack_94.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_94;
  iStack_44 = iStack_4c;
  iStack_38 = iStack_40;
  iStack_30 = iStack_48;
  iStack_28 = iStack_50;
  iStack_24 = iStack_2c;
  iStack_1c = iStack_34;
  iStack_18 = iStack_20;
  iStack_14 = iStack_3c;
  iStack_c = iStack_40;
  iStack_8 = iStack_3c;
  errorCode = __setjmp3(IStack_94.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (errorCode == 0) {
    if (-1 < (int)param_5) {
      FUN_006c7ea0(param_1,0,&iStack_50,8,param_5);
    }
    FUN_006c7f10(param_1,0,&iStack_50,8,param_4);
    g_currentExceptionFrame = IStack_94.previous;
    return;
  }
  g_currentExceptionFrame = IStack_94.previous;
  iVar2 = ReportDebugMessage(s_E____titans_Start_mmenuobj_cpp_007cca38,0xa0,0,errorCode,
                             &DAT_007a4ccc,s_MMObjTy__PaintButDib_007ccab0);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Start_mmenuobj_cpp_007cca38,0xa0);
  return;
}

