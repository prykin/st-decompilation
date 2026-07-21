
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   UPanelTy::PaintBut */

void __thiscall
UPanelTy::PaintBut(UPanelTy *this,AnonShape_0053D7A0_044B6141 *param_1,byte param_2,char *param_3,
                  undefined *param_4)

{
  AnonNested_0053D7A0_0018_F6872402 *pAVar1;
  code *pcVar2;
  UPanelTy *pUVar3;
  int *errorCode;
  undefined4 uVar4;
  LPSTR text;
  void *unaff_ESI;
  int iVar5;
  InternalExceptionFrame *pIVar6;
  undefined4 local_54 [16];
  UPanelTy *local_14;
  int local_10;
  int local_c;
  ushort *local_8;
  
  pIVar6 = g_currentExceptionFrame;
  local_8 = (ushort *)0x0;
  pAVar1 = param_1->field_0018;
  local_10 = pAVar1->field_0000 - this->field_003C;
  if (this->field_005C == 0) {
    local_c = pAVar1->field_0004 + this->field_0048;
  }
  else {
    local_c = pAVar1->field_0004 - this->field_0044;
  }
  if (param_4 != (undefined *)0x0) {
    g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffa8;
    local_14 = this;
    errorCode = (int *)Library::MSVCRT::__setjmp3(local_54,0,unaff_ESI,pIVar6);
    if (errorCode == (int *)0x0) {
      iVar5 = 1;
      uVar4 = (*(code *)param_4)(param_1);
      text = FUN_006f2c00(param_3,1,uVar4);
      local_8 = cMf32::RecGet(DAT_00806790,param_2,text,errorCode,iVar5);
      pUVar3 = local_14;
      DibPut((AnonShape_006B5B10_E0D06CF1 *)local_14->field_0068,local_10,local_c,param_2,
             (byte *)local_8);
      cMf32::RecMemFree(DAT_00806790,(uint *)&local_8);
      Library::DKW::DDX::FUN_006b3640
                (DAT_008075a8,pUVar3->field_0060,0xffffffff,pUVar3->field_003C,pUVar3->field_0044);
      g_currentExceptionFrame = pIVar6;
      return;
    }
    g_currentExceptionFrame = pIVar6;
    iVar5 = ReportDebugMessage(s_E____titans_Andrey_specpan_cpp_007c7870,0x24,0,(int)errorCode,
                               &DAT_007a4ccc,s_UPanelTy__PaintBut_007c7898);
    if (iVar5 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException((int)errorCode,0,s_E____titans_Andrey_specpan_cpp_007c7870,0x24);
  }
  return;
}

