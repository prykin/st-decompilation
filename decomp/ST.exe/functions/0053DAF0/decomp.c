#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   UPanelTy::PaintIBut

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall
UPanelTy::PaintIBut(UPanelTy *this,AnonShape_0053DAF0_3BDC2979 *param_1,char *param_2,UINT param_3)

{
  UPanelTy *pUVar2;
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
  AnonNested_0053DAF0_0018_BAFC63C8 *local_14;
  UPanelTy *local_10;
  int local_c;
  uint local_8;

  local_14 = param_1->field_0018;
  local_c = local_14->field_0000 - this->field_003C;
  if (this->field_005C == 0) {
    local_8 = this->field_0048 + local_14->field_0004;
  }
  else {
    local_8 = local_14->field_0004 - this->field_0044;
  }
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_10 = this;

  errorCode = STPointerBoundaryCast<undefined4 *>(Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0));
  pUVar2 = local_10;
  if (errorCode == nullptr) {
    iVar7 = 1;
    uVar5 = 0xffffffff;
    puVar8 = errorCode;
    puVar9 = errorCode;

    iVar3 = thunk_FUN_00529fe0((RecoveredRecord_00529FE0_85E582CB *)param_1);
    bVar6 = (byte)errorCode;
    /* ST_CALLSITE[0053DB71]: CALL 0x006f2c00; direct=006F2C00 FUN_006f2c00; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/char; signature=__cdecl;pointer:/char;pointer:/char;/int;/undefined4 */
    text = FUN_006f2c00(param_2,1,iVar3);
    /* ST_CALLSITE[0053DB83]: CALL 0x00709af0; direct=00709AF0 Library::Ourlib::MFRLOAD::mfRLoad; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; signature=__cdecl;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B;pointer:/int;/SubmarineTitans/Recovered/Enums/Global_mfRLoad_param_2Enum;pointer:/char;/uint;/byte;/int;/int;pointer:/undefined4 */
    pRVar4 = Library::Ourlib::MFRLOAD::mfRLoad
                       (PTR_00806794,CASE_1,text,uVar5,bVar6,iVar7,(int)puVar8,puVar9);
    uVar5 = local_8;
    /* ST_CALLSITE[0053DB97]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)pUVar2->field_0068,local_c,local_8,'\x01',pRVar4);

    ccFntTy::SetSurf((ccFntTy *)g_interSystem_00802A28->field_0024,pUVar2->field_0068,0,local_c,
                     uVar5,local_14->field_0008,local_14->field_000C);

    uVar5 = thunk_FUN_00529fe0((RecoveredRecord_00529FE0_85E582CB *)param_1);
    iVar7 = -1;
    iVar3 = -2;
    /* ST_CALLSITE[0053DBDB]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/ccFntTy; signature=__stdcall;pointer:/ccFntTy;/WinDef.h/UINT;/WinDef.h/HINSTANCE */
    resourceString = LoadResourceString(param_3,g_hINSTANCE_00807618);

    ccFntTy::WrStr((ccFntTy *)g_interSystem_00802A28->field_0024,(char *)resourceString,iVar3,iVar7,
                   uVar5);

    Library::DKW::DDX::FUN_006b3640
              ((int *)g_ddxContext_008075A8,pUVar2->field_0060,0xffffffff,pUVar2->field_003C,
               pUVar2->field_0044);
    g_currentExceptionFrame = local_58.previous;
    return;
  }
  g_currentExceptionFrame = local_58.previous;

  iVar3 = ReportDebugMessage("E:\\__titans\\Andrey\\specpan.cpp",0x51,0,(int)errorCode,
                             "%s","UPanelTy::PaintIBut");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException((int)errorCode,0,"E:\\__titans\\Andrey\\specpan.cpp",0x51);
  return;
}

