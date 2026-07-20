
/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmenuobj.cpp
   MMMObjTy::PaintSlBut */

void __thiscall
MMMObjTy::PaintSlBut(MMMObjTy *this,AnonShape_005B6560_61F462DF *param_1,int param_2,uint param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  uint uVar4;
  InternalExceptionFrame *pIVar5;
  undefined4 local_48 [16];
  MMMObjTy *local_8;
  
  pIVar5 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar5);
  if (iVar2 != 0) {
    g_currentExceptionFrame = pIVar5;
    iVar3 = ReportDebugMessage(s_E____titans_Start_mmenuobj_cpp_007cca38,0x121,0,iVar2,&DAT_007a4ccc
                               ,s_MMMObjTy__PaintSlBut_007ccb00);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar2,0,s_E____titans_Start_mmenuobj_cpp_007cca38,0x121);
    return;
  }
  switch(*(undefined2 *)(param_2 + 0x14)) {
  case 0:
    param_1->field_0008 = (param_3 & 0xff) * 3 + 2;
    goto switchD_005b65a4_default;
  case 1:
  case 3:
    iVar2 = (param_3 & 0xff) * 3;
    break;
  case 2:
    iVar2 = (param_3 & 0xff) * 3 + 1;
    break;
  default:
    goto switchD_005b65a4_default;
  }
  param_1->field_0008 = iVar2;
switchD_005b65a4_default:
  if (param_1->field_0004 != 0xffffffff) {
    Library::DKW::DDX::FUN_006b3730
              (param_1->field_0048,param_1->field_0004,param_1->field_0008,param_1->field_001C,
               param_1->field_0020);
  }
  if (*(short *)(param_2 + 0x14) == 2) {
    uVar4 = 10;
  }
  else {
    if (*(short *)(param_2 + 0x14) != 3) {
      g_currentExceptionFrame = pIVar5;
      return;
    }
    uVar4 = 9;
  }
  thunk_FUN_005b6730(local_8,uVar4,'\x01',-1);
  g_currentExceptionFrame = pIVar5;
  return;
}

