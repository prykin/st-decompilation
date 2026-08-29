#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel1.cpp
   CPanelTy::PaintInfoBoat */

void __thiscall CPanelTy::PaintInfoBoat(CPanelTy *this)

{
  byte bVar1;
  CPanelTy *this_00;
  int iVar3;
  char *pcVar3;
  uint uVar5;
  BITMAPINFO *pBVar4;
  uint uVar6;
  int iVar8;
  char cVar7;
  int iVar9;
  RecoveredSourceFamily_dibcopy *pRVar10;
  dword dVar11;
  InternalExceptionFrame local_50;
  CPanelTy *local_c;
  uint local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;

  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  this_00 = local_c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;

    iVar8 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel1.cpp",0x8a,0,iVar3,"%s",
                               "CPanelTy::PaintInfoBoat");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\cpanel1.cpp",0x8a);
    return;
  }
  /* ST_CALLSITE[004FE9AC]: CALL 0x00403229; direct=00403229 DibPut */
  DibPut(local_c->field_0180,0,0,'\x01',(RecoveredRecordView_006B84D0_87AF9D9B *)local_c->field_0954
        );
  /* ST_CALLSITE[004FE9C5]: CALL 0x00403229; direct=00403229 DibPut */
  DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0184,0,0,'\x01',
         (RecoveredRecordView_006B84D0_87AF9D9B *)this_00->field_0958);
  if (this_00->field_02E2 != nullptr) {
    /* ST_CALLSITE[004FE9DB]: CALL 0x00402ccf; direct=00402CCF CPanelTy::sub_004F1890 */
    sub_004F1890(this_00,0);
  }
  if (this_00->field_0B63 == '\0') {
    if (DAT_0080874e == '\x03') {
      /* ST_CALLSITE[004FEA09]: CALL 0x00403229; direct=00403229 DibPut */
      DibPut(this_00->field_018C,0,0,'\x06',
             (RecoveredRecordView_006B84D0_87AF9D9B *)this_00->field_0974[1]);
      goto LAB_004fea77;
    }
    pBVar4 = FUN_0070b3a0((RecoveredGlobalRecordView_0081175C *)this_00->field_029E,1);
    pRVar10 = (RecoveredSourceFamily_dibcopy *)this_00->field_0188;
  }
  else {
    if (DAT_0080874e == '\x03') {
      /* ST_CALLSITE[004FEA49]: CALL 0x00403229; direct=00403229 DibPut */
      DibPut(this_00->field_018C,0,0,'\x06',
             (RecoveredRecordView_006B84D0_87AF9D9B *)this_00->field_0974[3]);
      goto LAB_004fea77;
    }
    /* ST_CALLSITE[004FEA5C]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
    pBVar4 = FUN_0070b3a0((RecoveredGlobalRecordView_0081175C *)this_00->field_029E,0);
    pRVar10 = (RecoveredSourceFamily_dibcopy *)this_00->field_0188;
  }
  /* ST_CALLSITE[004FEA6F]: CALL 0x00403229; direct=00403229 DibPut */
  DibPut(pRVar10,0,0,'\x01',(RecoveredRecordView_006B84D0_87AF9D9B *)pBVar4);
LAB_004fea77:
  /* ST_CALLSITE[004FEA7B]: CALL 0x00403977; direct=00403977 CPanelTy::PaintDeep */
  PaintDeep(this_00,1);
  if (this_00->field_0B63 == '\x02') {
    dVar11 = this_00->field_0B95->count;
    pcVar3 = LoadResourceString(0x36b9,g_hINSTANCE_00807618);
    /* ST_CALLSITE[004FEAAF]: CALL dword ptr [0x0085bde8] */
    wsprintfA((LPSTR)&DAT_0080f33a,"&1%s&0%d",pcVar3,dVar11);

    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0184,0,2,0xf,
                     *(int *)(this_00->field_0958 + 2) + -4,0x2d);

    ccFntTy::WrTxt(this_00->field_01B8,(char *)&DAT_0080f33a,-2,-1,0,-1,-1);
  }
  cVar7 = this_00->field_0B63;
  if (((cVar7 == '\x01') || (cVar7 == '\x04')) || (cVar7 == '\x03')) {
    /* ST_CALLSITE[004FEB13]: CALL 0x004048c7; direct=004048C7 CPanelTy::PaintName */
    PaintName(this_00,1);
    /* ST_CALLSITE[004FEB1C]: CALL 0x004019c4; direct=004019C4 CPanelTy::PaintLife */
    PaintLife(this_00,1);
    iVar9 = this_00->field_0B66;
    if (((iVar9 == 7) || (iVar9 == 0x13)) || (iVar9 == 0x1b)) {
      if (*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xb81 != 0) {

        uVar5 = thunk_FUN_00526ba0(*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xb81,
                                   this_00->field_0xb85);
        /* ST_CALLSITE[004FEB67]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
        pBVar4 = FUN_0070b3a0((RecoveredGlobalRecordView_0081175C *)this_00->field_02BE,uVar5);
        /* ST_CALLSITE[004FEB7A]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0184,0xb,0x31,'\x01',
               (RecoveredRecordView_006B84D0_87AF9D9B *)pBVar4);
        FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_00->field_0184,0,0x3b,0x31,7,0x21,0);
        bVar1 = this_00->field_0xb86;
        cVar7 = (char)(((uint)bVar1 * 0x21) / 100);
        local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(cVar7));
        if ((bVar1 != 0) && (cVar7 == '\0')) {
          local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(1));
        }
        if (bVar1 < 0x46) {
          iVar9 = (-(uint)(bVar1 < 0x14) & 5) + 5;
        }
        else {
          iVar9 = 0;
        }
        uVar6 = local_8 & 0xff;

        Library::DKW::WGR::FUN_006b55f0
                  ((RecoveredSourceFamily_dibcopy *)this_00->field_0184,0,0x3c,0x52 - uVar6,
                   (RecoveredRecordView_006B84D0_87AF9D9B *)this_00->field_028A,0,iVar9,
                   *(int *)&((RecoveredRecordView_006B84D0_87AF9D9B *)this_00->field_028A)->
                            field_0x8 - uVar6,5,uVar6);
        /* ST_CALLSITE[004FEC1B]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
        pBVar4 = FUN_0070b3a0((RecoveredGlobalRecordView_0081175C *)this_00->field_02CA,1);
        /* ST_CALLSITE[004FEC2E]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0184,10,0x30,'\x06',
               (RecoveredRecordView_006B84D0_87AF9D9B *)pBVar4);
      }
    }
    else {
      /* ST_CALLSITE[004FEB3A]: CALL 0x00402694; direct=00402694 CPanelTy::PaintWeap */
      PaintWeap(this_00,1);
    }
    if ((DAT_0080874e == '\x03') && (this_00->field_0B6A == '\x03')) {
      /* ST_CALLSITE[004FEC4A]: CALL 0x00402667; direct=00402667 CPanelTy::PaintEnergy */
      PaintEnergy(this_00,1);
    }
  }
  if (-1 < (int)this_00->field_0148[0]) {

    Library::DKW::DDX::FUN_006b3640
              ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[0],0xffffffff,
               this_00->field_003C,this_00->field_0094);
  }
  if (-1 < (int)this_00->field_0148[1]) {

    Library::DKW::DDX::FUN_006b3640
              ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[1],0xffffffff,
               this_00->field_0040,this_00->field_0098);
  }
  if ((DAT_0080874e != '\x03') && (-1 < (int)this_00->field_0148[2])) {

    Library::DKW::DDX::FUN_006b3640
              ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[2],0xffffffff,
               this_00->field_0044,this_00->field_009C);
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

