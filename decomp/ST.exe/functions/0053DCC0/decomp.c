#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   UPanelTy::PaintLBut */

void __thiscall
UPanelTy::PaintLBut(UPanelTy *this,AnonShape_0053DCC0_5B8C160B *param_1,byte param_2,char *param_3,
                   char *param_4,undefined *param_5)

{
  AnonNested_0053DCC0_0018_16DF3813 *pAVar1;
  code *pcVar2;
  UPanelTy *pUVar3;
  int iVar4;
  undefined4 uVar5;
  LPSTR text;
  int iVar6;
  InternalExceptionFrame local_58;
  UPanelTy *local_14;
  int local_10;
  int local_c;
  ushort *local_8;

  pAVar1 = param_1->field_0018;
  local_8 = (ushort *)0x0;
  local_10 = pAVar1->field_0000 - this->field_003C;
  if (this->field_005C == 0) {
    local_c = pAVar1->field_0004 + this->field_0048;
  }
  else {
    local_c = pAVar1->field_0004 - this->field_0044;
  }
  if (param_5 != (undefined *)0x0) {
    local_58.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_58;
    local_14 = this;
    iVar4 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
    if (iVar4 == 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      uVar5 = (*(code *)param_5)(param_1);
      text = FUN_006f2c00(param_3,1,uVar5);
      local_8 = cMf32::RecGet(DAT_00806790,param_2,text,(int *)0x0,1);
      iVar4 = local_c;
      pUVar3 = local_14;
      DibPut((AnonShape_006B5B10_E0D06CF1 *)local_14->field_0068,local_10,local_c,param_2,
             (byte *)local_8);
      cMf32::RecMemFree(DAT_00806790,(uint *)&local_8);
      if (param_1->field_0014 == 3) {
        local_8 = cMf32::RecGet(DAT_00806790,6,param_4,(int *)0x0,1);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)pUVar3->field_0068,local_10,iVar4,'\x06',
               (byte *)local_8);
        cMf32::RecMemFree(DAT_00806790,(uint *)&local_8);
      }
      Library::DKW::DDX::FUN_006b3640
                (DAT_008075a8,pUVar3->field_0060,0xffffffff,pUVar3->field_003C,pUVar3->field_0044);
      g_currentExceptionFrame = local_58.previous;
      return;
    }
    g_currentExceptionFrame = local_58.previous;
    iVar6 = ReportDebugMessage(s_E____titans_Andrey_specpan_cpp_007c7870,0x74,0,iVar4,&DAT_007a4ccc,
                               s_UPanelTy__PaintLBut_007c78e4);
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,s_E____titans_Andrey_specpan_cpp_007c7870,0x74);
  }
  return;
}

