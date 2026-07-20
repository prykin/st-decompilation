
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   UPanelTy::PaintBut */

void __thiscall
UPanelTy::PaintBut(UPanelTy *this,int param_1,byte param_2,char *param_3,undefined *param_4)

{
  code *pcVar1;
  UPanelTy *pUVar2;
  int *piVar3;
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
  piVar3 = *(int **)(param_1 + 0x18);
  local_10 = *piVar3 - this->field_003C;
  if (this->field_005C == 0) {
    local_c = piVar3[1] + this->field_0048;
  }
  else {
    local_c = piVar3[1] - this->field_0044;
  }
  if (param_4 != (undefined *)0x0) {
    g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffa8;
    local_14 = this;
    piVar3 = (int *)Library::MSVCRT::__setjmp3(local_54,0,unaff_ESI,pIVar6);
    if (piVar3 == (int *)0x0) {
      iVar5 = 1;
      uVar4 = (*(code *)param_4)(param_1);
      text = FUN_006f2c00(param_3,1,uVar4);
      local_8 = cMf32::RecGet(DAT_00806790,param_2,text,piVar3,iVar5);
      pUVar2 = local_14;
      DibPut((undefined4 *)local_14->field_0068,local_10,local_c,param_2,(byte *)local_8);
      cMf32::RecMemFree(DAT_00806790,(uint *)&local_8);
      Library::DKW::DDX::FUN_006b3640
                (DAT_008075a8,pUVar2->field_0060,0xffffffff,pUVar2->field_003C,pUVar2->field_0044);
      g_currentExceptionFrame = pIVar6;
      return;
    }
    g_currentExceptionFrame = pIVar6;
    iVar5 = ReportDebugMessage(s_E____titans_Andrey_specpan_cpp_007c7870,0x24,0,(int)piVar3,
                               &DAT_007a4ccc,s_UPanelTy__PaintBut_007c7898);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException((int)piVar3,0,s_E____titans_Andrey_specpan_cpp_007c7870,0x24);
  }
  return;
}

