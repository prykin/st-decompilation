
/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmenuobj.cpp
   MMObjTy::PaintButDib */

void __thiscall
MMObjTy::PaintButDib(MMObjTy *this,int param_1,int *param_2,int param_3,byte param_4,uint param_5)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_94;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_40 = param_2[2];
  if (local_40 / 2 <= param_3) {
    param_3 = local_40 / 2;
  }
  local_10 = param_2[3];
  if (local_10 / 2 <= param_3) {
    param_3 = local_10 / 2;
  }
  local_20 = *param_2;
  local_4c = param_2[1];
  local_50 = local_20 + param_3;
  local_48 = (local_20 - param_3) + -1 + local_40;
  local_40 = local_20 + -1 + local_40;
  local_3c = local_4c + param_3;
  local_2c = local_4c + local_10 + -1;
  local_34 = ((local_4c + local_10) - param_3) + -1;
  local_94.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_94;
  local_44 = local_4c;
  local_38 = local_40;
  local_30 = local_48;
  local_28 = local_50;
  local_24 = local_2c;
  local_1c = local_34;
  local_18 = local_20;
  local_14 = local_3c;
  local_c = local_40;
  local_8 = local_3c;
  errorCode = Library::MSVCRT::__setjmp3(local_94.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (errorCode == 0) {
    if (-1 < (int)param_5) {
      FUN_006c7ea0(param_1,0,&local_50,8,param_5);
    }
    FUN_006c7f10(param_1,0,&local_50,8,param_4);
    g_currentExceptionFrame = local_94.previous;
    return;
  }
  g_currentExceptionFrame = local_94.previous;
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

