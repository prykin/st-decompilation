#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel1.cpp
   CPanelTy::PaintInfoObj */

void __thiscall CPanelTy::PaintInfoObj(CPanelTy *this)

{
  char cVar1;
  int iVar2;
  CPanelTy *this_00;
  int iVar3;
  BITMAPINFO *pBVar4;
  int iVar4;
  RecoveredSourceFamily_dibcopy *pRVar5;
  InternalExceptionFrame local_4c;
  CPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar4 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel1.cpp",0xb5,0,iVar3,"%s",
                               "CPanelTy::PaintInfoObj");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\cpanel1.cpp",0xb5);
    return;
  }
  /* ST_CALLSITE[004FEE5B]: CALL 0x00403229; direct=00403229 DibPut */
  DibPut((RecoveredSourceFamily_dibcopy *)local_8->field_01A0,0,0,'\x01',(byte *)local_8->field_0B43
        );
  /* ST_CALLSITE[004FEE74]: CALL 0x00403229; direct=00403229 DibPut */
  DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_019C,0,0,'\x01',(byte *)this_00->field_0B47
        );
  if (this_00->field_02E6 != nullptr) {
    thunk_FUN_004f1890(this_00,1);
  }
  if (this_00->field_0C51 == '\0') {
    if (DAT_0080874e == '\x03') {
      /* ST_CALLSITE[004FEEB8]: CALL 0x00403229; direct=00403229 DibPut */
      DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x73,0,'\x06',
             (byte *)this_00->field_09D9[8]);
      goto LAB_004fef26;
    }
    pBVar4 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_029E,1);
    pRVar5 = (RecoveredSourceFamily_dibcopy *)this_00->field_0198;
  }
  else {
    if (DAT_0080874e == '\x03') {
      /* ST_CALLSITE[004FEEF8]: CALL 0x00403229; direct=00403229 DibPut */
      DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x73,0,'\x06',
             (byte *)this_00->field_09D9[10]);
      goto LAB_004fef26;
    }
    pBVar4 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_029E,0);
    pRVar5 = (RecoveredSourceFamily_dibcopy *)this_00->field_0198;
  }
  /* ST_CALLSITE[004FEF1E]: CALL 0x00403229; direct=00403229 DibPut */
  DibPut(pRVar5,0,0,'\x01',(byte *)pBVar4);
LAB_004fef26:
  /* ST_CALLSITE[004FEF2A]: CALL 0x00403977; direct=00403977 CPanelTy::PaintDeep */
  PaintDeep(this_00,0);
  cVar1 = this_00->field_0C51;
  if (((cVar1 == '\x01') || (cVar1 == '\x04')) || (cVar1 == '\x03')) {
    /* ST_CALLSITE[004FEF45]: CALL 0x004048c7; direct=004048C7 CPanelTy::PaintName */
    PaintName(this_00,0);
    iVar2 = this_00->field_0C54;
    if (((iVar2 != 0xdd) && (iVar2 != 0xde)) && (iVar2 != 0xe0)) {
      /* ST_CALLSITE[004FEF69]: CALL 0x004019c4; direct=004019C4 CPanelTy::PaintLife */
      PaintLife(this_00,0);
    }
    iVar2 = this_00->field_0C54;
    if (((iVar2 != 0xdd) && (iVar2 != 0xde)) && (iVar2 != 0xe0)) {
      /* ST_CALLSITE[004FEF8D]: CALL 0x00402694; direct=00402694 CPanelTy::PaintWeap */
      PaintWeap(this_00,0);
    }
    if ((DAT_0080874e == '\x03') && (this_00->field_0C58 == '\x03')) {
      /* ST_CALLSITE[004FEFA6]: CALL 0x00402667; direct=00402667 CPanelTy::PaintEnergy */
      PaintEnergy(this_00,0);
    }
  }
  if (-1 < (int)this_00->field_0148[8]) {
    Library::DKW::DDX::FUN_006b3640
              ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[8],0xffffffff,
               this_00->field_005C,this_00->field_00B4);
  }
  if (-1 < (int)this_00->field_0148[7]) {
    Library::DKW::DDX::FUN_006b3640
              ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[7],0xffffffff,
               this_00->field_0058,this_00->field_00B0);
  }
  if ((DAT_0080874e != '\x03') && (-1 < (int)this_00->field_0148[6])) {
    Library::DKW::DDX::FUN_006b3640
              ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[6],0xffffffff,
               this_00->field_0054,this_00->field_00AC);
  }
  g_currentExceptionFrame = local_4c.previous;
  return;
}

