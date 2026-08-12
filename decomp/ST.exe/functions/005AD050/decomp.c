#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\load_obj.cpp
   ChooseMapTy::PaintChooseMap

   [STSwitchEnumApplier] Switch target field_1A5F uses
   /SubmarineTitans/Recovered/Enums/ChooseMapTy_field_1A5FState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_10=16;CASE_13=19;CASE_14=20;CASE_15=21

   [STSwitchEnumApplier] Switch target field_1A5F uses
   /SubmarineTitans/Recovered/Enums/ChooseMapTy_field_1A5FState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_10=16;CASE_13=19;CASE_14=20;CASE_15=21
    */

void __thiscall ChooseMapTy::PaintChooseMap(ChooseMapTy *this,char param_1)

{
  char cVar1;
  ChooseMapTy *pCVar3;
  int errorCode;
  UINT resourceId;
  char *resourceString;
  int iVar4;
  MMMObjTy *this_00;
  MMMObjTy *this_01;
  StartServTy *this_02;
  uint uVar5;
  uint uVar6;
  ccFntTy *pcVar7;
  uint uVar8;
  InternalExceptionFrame local_4c;
  ChooseMapTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (errorCode != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar4 = ReportDebugMessage("E:\\__titans\\Start\\load_obj.cpp",0x1bb,0,errorCode,
                               "%s","ChooseMapTy::PaintChooseMap");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\load_obj.cpp",0x1bb);
    return;
  }
  FUN_006b5f80((int *)g_ddxContext_008075A8,0,0,g_nWidth_00806730,DAT_00806734);
  PutDDX(0,0,'\x01',(BITMAPINFO *)g_startSystem_0081176C->field_002C);
  pCVar3 = local_8;
  if ((local_8->field_20B8 == nullptr) && (param_1 == '\0')) {
    MMMObjTy::OutBSlProc
              (this_00,g_dDXContext_0080759C,nullptr,nullptr,0x112,0x38,0x204,0x19d,
               (undefined4 *)(local_8->array_00BC[0xc].field_01DB + 0x140));
  }
  if (((pCVar3->field_20BC == nullptr) && (param_1 == '\0')) ||
     ((param_1 != '\0' && (pCVar3->field_20B4 == '\0')))) {
    this_01 = (MMMObjTy *)(pCVar3->array_00BC[0xc].field_01DB + 0x140);
    MMMObjTy::OutBSlProc
              (this_01,g_dDXContext_0080759C,nullptr,nullptr,10,0xb4,0xf9,0x121,
               (undefined4 *)this_01);
  }
  cVar1 = pCVar3->array_00BC[0xc].field_01DF;
  if (((((cVar1 == '\f') || (cVar1 == '\x04')) || (cVar1 == '\x05')) || (cVar1 == '\x13')) &&
     (((pCVar3->field_20C0 == nullptr && (param_1 == '\0')) ||
      ((param_1 != '\0' && (pCVar3->field_20B7 == '\0')))))) {
    ChatGlassTy::OutChGlProc
              ((ChatGlassTy *)g_dDXContext_0080759C,
               (AnonShape_GLOBAL_0080759C_9638EF10 *)g_dDXContext_0080759C,0,0,200,0x1f1,400,0x62,
               (undefined4 *)(pCVar3->array_00BC[0xc].field_01DB + 0x140));
  }
  switch(pCVar3->array_00BC[0xc].field_01DF) {
  case 1:
  case 2:
  case 4:
  case 5:
    pcVar7 = g_startSystem_0081176C->field_0030;
    resourceId = 0x26ae;
    break;
  case 3:
    pcVar7 = g_startSystem_0081176C->field_0030;
    resourceId = 0x26af;
    break;
  default:
    goto switchD_005ad1b8_caseD_6;
  case 9:
  case 10:
  case 0xb:
  case 0xc:
    pcVar7 = g_startSystem_0081176C->field_0030;
    resourceId = 0x26ad;
    break;
  case 0x13:
    pcVar7 = g_startSystem_0081176C->field_0030;
    resourceId = (DAT_00803400 != '\f') + 0x26ad;
  }
  uVar8 = 0;
  uVar6 = 0xffffffff;
  uVar5 = 0xfffffffe;
  resourceString = LoadResourceString(resourceId,g_hINSTANCE_00807618);
  StartServTy::WrTextDDX(this_02,0,0xe9,0x14,0x14c,0x18,resourceString,uVar5,uVar6,pcVar7,uVar8);
switchD_005ad1b8_caseD_6:
  g_currentExceptionFrame = local_4c.previous;
  return;
}

