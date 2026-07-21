#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\load_obj.cpp
   ChooseMapTy::PaintChooseMap

   [STSwitchEnumApplier] Switch target field_1A5F uses
   /SubmarineTitans/Recovered/Enums/ChooseMapTy_field_1A5FState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_10=16;CASE_13=19;CASE_14=20;CASE_15=21
    */

void __thiscall ChooseMapTy::PaintChooseMap(ChooseMapTy *this,char param_1)

{
  ChooseMapTy_field_1A5FState CVar1;
  code *pcVar2;
  ChooseMapTy *pCVar3;
  int errorCode;
  UINT resourceId;
  uint *puVar4;
  int iVar5;
  MMMObjTy *this_00;
  undefined4 *this_01;
  StartServTy *this_02;
  uint uVar6;
  uint uVar7;
  ccFntTy *pcVar8;
  undefined4 uVar9;
  InternalExceptionFrame local_4c;
  ChooseMapTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (errorCode != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\Start\\load_obj.cpp",0x1bb,0,errorCode,
                               "%s","ChooseMapTy::PaintChooseMap");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\load_obj.cpp",0x1bb);
    return;
  }
  FUN_006b5f80(DAT_008075a8,0,0,g_nWidth_00806730,DAT_00806734);
  PutDDX(0,0,'\x01',(BITMAPINFO *)PTR_0081176c->field_002C);
  pCVar3 = local_8;
  if ((local_8->field_20B8 == (HoloTy *)0x0) && (param_1 == '\0')) {
    MMMObjTy::OutBSlProc
              (this_00,(int)DAT_0080759c,(MMMObjTy *)0x0,0,0x112,0x38,0x204,0x19d,
               &local_8->field_1A5B->field_0140);
  }
  if (((pCVar3->field_20BC == (HoloTy *)0x0) && (param_1 == '\0')) ||
     ((param_1 != '\0' && (pCVar3->field_0x20b4 == '\0')))) {
    this_01 = &pCVar3->field_1A5B->field_0140;
    MMMObjTy::OutBSlProc
              ((MMMObjTy *)this_01,(int)DAT_0080759c,(MMMObjTy *)0x0,0,10,0xb4,0xf9,0x121,this_01);
  }
  CVar1 = pCVar3->field_1A5F;
  if (((((CVar1 == CASE_C) || (CVar1 == CASE_4)) || (CVar1 == CASE_5)) || (CVar1 == CASE_13)) &&
     (((pCVar3->field_20C0 == (HoloTy *)0x0 && (param_1 == '\0')) ||
      ((param_1 != '\0' && (pCVar3->field_20B7 == '\0')))))) {
    ChatGlassTy::OutChGlProc
              (DAT_0080759c,(int)DAT_0080759c,0,0,200,0x1f1,400,0x62,&pCVar3->field_1A5B->field_0140
              );
  }
  switch(pCVar3->field_1A5F) {
  case CASE_1:
  case CASE_2:
  case CASE_4:
  case CASE_5:
    pcVar8 = PTR_0081176c->field_0030;
    resourceId = 0x26ae;
    break;
  case CASE_3:
    pcVar8 = PTR_0081176c->field_0030;
    resourceId = 0x26af;
    break;
  default:
    goto switchD_005ad1b8_caseD_6;
  case CASE_9:
  case CASE_A:
  case CASE_B:
  case CASE_C:
    pcVar8 = PTR_0081176c->field_0030;
    resourceId = 0x26ad;
    break;
  case CASE_13:
    pcVar8 = PTR_0081176c->field_0030;
    resourceId = (DAT_00803400 != '\f') + 0x26ad;
  }
  uVar9 = 0;
  uVar7 = 0xffffffff;
  uVar6 = 0xfffffffe;
  puVar4 = (uint *)LoadResourceString(resourceId,HINSTANCE_00807618);
  StartServTy::WrTextDDX(this_02,0,0xe9,0x14,0x14c,0x18,puVar4,uVar6,uVar7,pcVar8,uVar9);
switchD_005ad1b8_caseD_6:
  g_currentExceptionFrame = local_4c.previous;
  return;
}

