#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\panel.cpp
   PanelTy::PaintIBut

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall
PanelTy::PaintIBut(PanelTy *this,AnonShape_00538DB0_574DDCD0 *param_1,char *param_2,UINT param_3,
                  int param_4,int param_5)

{
  PanelTy *pPVar2;
  undefined4 *errorCode;
  int iVar3;
  char *text;
  RecoveredRecordView_006B84D0_87AF9D9B *pRVar4;
  ccFntTy *resourceString;
  uint uVar5;
  byte bVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  InternalExceptionFrame local_58;
  AnonNested_00538DB0_0018_D0DE3542 *local_14;
  PanelTy *local_10;
  uint local_c;
  int local_8;

  local_14 = param_1->field_0018;
  if (param_4 == 0) {
    local_8 = local_14->field_0000;
  }
  else {
    local_8 = local_14->field_0000;
    iVar3 = g_nWidth_00806730;
    if (this->field_005C == 0) goto LAB_00538de2;
  }
  iVar3 = this->field_003C;
LAB_00538de2:
  local_8 = local_8 - iVar3;
  if (param_5 == 0) {
    local_c = local_14->field_0004 - this->field_0044;
  }
  else if (this->field_005C == 0) {
    local_c = local_14->field_0004 - DAT_00806734;
  }
  else {
    local_c = local_14->field_0004 - this->field_0044;
  }
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_10 = this;

  errorCode = STPointerBoundaryCast<undefined4 *>(Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0));
  pPVar2 = local_10;
  if (errorCode != nullptr) {
    g_currentExceptionFrame = local_58.previous;

    iVar3 = ReportDebugMessage("E:\\__titans\\Andrey\\panel.cpp",0xdf,0,(int)errorCode,
                               "%s","PanelTy::PaintIBut");
    if (iVar3 == 0) {
      RaiseInternalException((int)errorCode,0,"E:\\__titans\\Andrey\\panel.cpp",0xdf);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  iVar7 = 1;
  uVar5 = 0xffffffff;
  puVar8 = errorCode;
  puVar9 = errorCode;

  iVar3 = thunk_FUN_00529fe0((RecoveredRecord_00529FE0_85E582CB *)param_1);
  bVar6 = (byte)errorCode;
  /* ST_CALLSITE[00538E5E]: CALL 0x006f2c00; direct=006F2C00 FUN_006f2c00; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/char; signature=__cdecl;pointer:/char;pointer:/char;/int;/undefined4 */
  text = FUN_006f2c00(param_2,1,iVar3);
  /* ST_CALLSITE[00538E70]: CALL 0x00709af0; direct=00709AF0 Library::Ourlib::MFRLOAD::mfRLoad; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; signature=__cdecl;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B;pointer:/int;/SubmarineTitans/Recovered/Enums/Global_mfRLoad_param_2Enum;pointer:/char;/uint;/byte;/int;/int;pointer:/undefined4 */
  pRVar4 = Library::Ourlib::MFRLOAD::mfRLoad
                     (PTR_00806794,CASE_1,text,uVar5,bVar6,iVar7,(int)puVar8,puVar9);
  uVar5 = local_c;
  /* ST_CALLSITE[00538E84]: CALL 0x00403229; direct=00403229 DibPut */
  DibPut((RecoveredSourceFamily_dibcopy *)pPVar2->field_0068,local_8,local_c,'\x01',pRVar4);

  ccFntTy::SetSurf((ccFntTy *)g_interSystem_00802A28->field_0024,pPVar2->field_0068,0,local_8,uVar5,
                   local_14->field_0008,local_14->field_000C);

  uVar5 = thunk_FUN_00529fe0((RecoveredRecord_00529FE0_85E582CB *)param_1);
  iVar7 = -1;
  iVar3 = -2;
  /* ST_CALLSITE[00538EC8]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/ccFntTy; signature=__stdcall;pointer:/ccFntTy;/WinDef.h/UINT;/WinDef.h/HINSTANCE */
  resourceString = LoadResourceString(param_3,g_hINSTANCE_00807618);

  ccFntTy::WrStr((ccFntTy *)g_interSystem_00802A28->field_0024,(char *)resourceString,iVar3,iVar7,
                 uVar5);

  Library::DKW::DDX::FUN_006b3640
            ((int *)g_ddxContext_008075A8,pPVar2->field_0060,0xffffffff,pPVar2->field_003C,
             pPVar2->field_0044);
  g_currentExceptionFrame = local_58.previous;
  return;
}

