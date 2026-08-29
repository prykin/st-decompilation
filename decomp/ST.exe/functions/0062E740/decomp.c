#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_Rubb.cpp
   STRubbishC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=0040231F|0062E740; family_names=STRubbishC::GetMessage; ret4=8;
   direct_offsets={10:1,14:3,18:4,1c:2}

   [STSwitchEnumApplier] Switch target field_01FA uses
   /SubmarineTitans/Recovered/Enums/STRubbishC_field_01FAState. Cases: CASE_0=0;CASE_1=1;CASE_2=2 */

int __thiscall STRubbishC::GetMessage(STRubbishC *this,STMessage *message)

{
  short sVar1;
  short sVar2;
  STMessageId SVar3;
  short sVar5;
  STRubbishC *this_00;
  int local_EAX_35;
  int iVar6;
  int iVar7;
  int local_EAX_339;
  STWorldObject *pSVar8;
  int iVar10;
  int local_EAX_686;
  int local_EAX_709;
  int local_EAX_880;
  int local_EAX_1038;
  int iVar9;
  int iVar11;
  RecoveredRecordView_0062FA80_9D6D3E8C *pRVar12;
  InternalExceptionFrame local_58;
  STRubbishC *local_14;
  byte *local_10;
  uint local_c;
  AnonShape_0062E740_213F21A8 *local_8;

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;

  local_EAX_35 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  this_00 = local_14;
  if (local_EAX_35 != 0) {
    g_currentExceptionFrame = local_58.previous;

    iVar9 = ReportDebugMessage("E:\\__titans\\nick\\to_Rubb.cpp",0xa6,0,local_EAX_35,
                               "%s","STRubbishC::GetMessage");
    if (iVar9 == 0) {
      RaiseInternalException(local_EAX_35,0,"E:\\__titans\\nick\\to_Rubb.cpp",0xa8);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  /* ST_CALLSITE[0062E77E]: CALL 0x00403ebd; direct=00403EBD STGameObjC::GetMessage */
  iVar6 = STGameObjC::GetMessage((STGameObjC *)local_14,message);
  if (iVar6 == 0xffff) {
    return 0xffff;
  }
  SVar3 = message->id;
  if (MESS_SHARED_0003 < SVar3) {
    if (SVar3 == MESS_SHARED_0108) {

      local_EAX_1038 = thunk_FUN_004ab050();
      thunk_FUN_00630000(this_00,local_EAX_1038);
    }
    else if (SVar3 == MESS_SHARED_010F) {
      /* ST_CALLSITE[0062EB0F]: CALL 0x00404719; direct=00404719 thunk_FUN_0062f940; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/int; source view only; no Ghidra override */
      local_10 = thunk_FUN_0062f940(this_00,&local_c);
      /* ST_CALLSITE[0062EB26]: CALL 0x004025f9; direct=004025F9 STPlaySystemC::SaveObjData */
      STPlaySystemC::SaveObjData(g_playSystem_00802A38,(int *)this_00->field_0018,local_10,local_c);
      FreeAndNull(&local_10);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  if (SVar3 == MESS_SHARED_0003) {
    thunk_FUN_0062f7a0((RecoveredRecordView_0062F7A0_F6CC2FA1 *)this_00);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  if (SVar3 == MESS_ID_NONE) {
    if (this_00->field_01FA == CASE_1) {
      if ((this_00->field_01F9 == '\0') &&
         /* ST_CALLSITE[0062EAB0]: CALL 0x00401d39; direct=00401D39 STRubbishC::sub_0062FEA0 */
         (local_EAX_880 = sub_0062FEA0(this_00,this_00->field_01D5,this_00->field_01D9),
         local_EAX_880 != 0)) {
        thunk_FUN_0062fe00((STJellyGunC *)this_00);
        this_00->field_01F9 = 1;
      }
      thunk_FUN_0062f150((RecoveredRecord_STRubbishC_0062F150 *)this_00);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    if (this_00->field_01FA != CASE_2) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    /* ST_CALLSITE[0062EA76]: CALL 0x00405885; direct=00405885 STRubbishC::sub_0062F900 */
    sub_0062F900(this_00);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  if (SVar3 != MESS_ID_CREATE) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  pRVar12 = (message->arg0).ptr;
  local_8 = (AnonShape_0062E740_213F21A8 *)pRVar12;
  if (*(int *)&pRVar12->field_0xc == 2) {

    thunk_FUN_0062fa80(this_00,pRVar12);
    if (this_00->field_01F9 == '\0') {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    thunk_FUN_0062fe00((STJellyGunC *)this_00);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  if (((this_00->field_01D5 < 0) || (this_00->field_01D9 < 0)) || (this_00->field_01DD < 0)) {
    iVar7 = pRVar12->field_0014;
    iVar7 = STBiasedDiv16(iVar7, 0xc9); /* exact signed 16-bit grid-index division */
    this_00->field_01D5 = iVar7;
    iVar7 = pRVar12->field_0018;
    iVar7 = STBiasedDiv16(iVar7, 0xc9); /* exact signed 16-bit grid-index division */
    this_00->field_01D9 = iVar7;
    iVar7 = pRVar12->field_001C;
    iVar7 = STBiasedDiv16(iVar7, 200); /* exact signed 16-bit grid-index division */
    this_00->field_01DD = iVar7;

    local_EAX_339 =
         thunk_FUN_004961b0((short)this_00->field_01D5,(short)this_00->field_01D9,(short)iVar7);
    if (local_EAX_339 != 0) {
      sVar5 = (short)this_00->field_01D5;
      sVar1 = (short)this_00->field_01DD;
      sVar2 = (short)this_00->field_01D9;
      if ((((sVar5 < 0) || (g_worldGrid.sizeX <= sVar5)) ||
          ((sVar2 < 0 || ((g_worldGrid.sizeY <= sVar2 || (sVar1 < 0)))))) ||
         (g_worldGrid.sizeZ <= sVar1)) {
        pSVar8 = nullptr;
      }
      else {
        pSVar8 = STGridAt3D(g_worldGrid, sVar5, sVar2, sVar1).objects[1];
        pRVar12 = (RecoveredRecordView_0062FA80_9D6D3E8C *)local_8;
      }
      if ((pSVar8 == nullptr) &&
         /* ST_CALLSITE[0062E93E]: CALL 0x00401325; direct=00401325 DumpClassC::WritePtr */
         (iVar7 = DumpClassC::WritePtr
                            ((short)this_00->field_01D5,(short)this_00->field_01D9,
                             (short)this_00->field_01DD,1,
                             (RecoveredRecord_DumpClassC_00495EC0 *)this_00),
         pRVar12 = (RecoveredRecordView_0062FA80_9D6D3E8C *)local_8, iVar7 == 0)) {
        iVar7 = local_8->field_0014;
        iVar7 = STBiasedDiv16(iVar7, 0xc9); /* exact signed 16-bit grid-index division */
        this_00->field_01D5 = iVar7;
        iVar11 = local_8->field_0018;
        iVar11 = STBiasedDiv16(iVar11, 0xc9); /* exact signed 16-bit grid-index division */
        this_00->field_01D9 = iVar11;
        iVar10 = local_8->field_001C;
        iVar10 = STBiasedDiv16(iVar10, 200); /* exact signed 16-bit grid-index division */
        this_00->field_01DD = iVar10;
        /* ST_CALLSITE[0062E9EE]: CALL 0x00401d39; direct=00401D39 STRubbishC::sub_0062FEA0 */
        local_EAX_686 = sub_0062FEA0(this_00,iVar7,iVar11);
        this_00->field_01F9 = (char)local_EAX_686;
        goto LAB_0062ea02;
      }
    }
    /* ST_CALLSITE[0062E9FD]: CALL 0x00405885; direct=00405885 STRubbishC::sub_0062F900 */
    sub_0062F900(this_00);
  }
LAB_0062ea02:
  /* ST_CALLSITE[0062EA05]: CALL 0x00403edb; direct=00403EDB STRubbishC::sub_0062FCA0 */
  local_EAX_709 = sub_0062FCA0(this_00,(RecoveredRecordView_0062FCA0_4CB838FB *)pRVar12);
  if (local_EAX_709 == 0xffff) {
    return 0xffff;
  }
  this_00->field_01FA = CASE_1;
  g_currentExceptionFrame = local_58.previous;
  return 0;
}

