#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\main_obj.cpp
   MainMenuTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=005B4BB0; family_names=MainMenuTy::GetMessage; ret4=2;
   direct_offsets={10:9,14:1,18:0,1c:0} */

int __thiscall MainMenuTy::GetMessage(MainMenuTy *this,STMessage *message)

{
  StartServTy *pSVar1;
  MainMenuTyVTable *pMVar2;
  MainMenuTy *this_00;
  DWORD DVar4;
  int local_EAX_60;
  undefined3 uVar8;
  uint uVar5;
  int iVar4;
  int iVar6;
  int iVar7;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_ECX;
  MMsgTy *this_01;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX;
  char cVar10;
  int iVar11;
  InternalExceptionFrame local_8c;
  undefined4 local_48 [8];
  undefined4 local_28 [8];
  MainMenuTy *local_8;
  uint SVar1;
  uint temp_5f8d1d2a76;

  local_8 = this;
  DVar4 = STAppC::sub_006E51B0(this->field_0010);
  this->field_0061 = DVar4;
  local_8c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_8c;
  local_EAX_60 = Library::MSVCRT::__setjmp3(local_8c.jumpBuffer,0);
  this_00 = local_8;
  if (local_EAX_60 != 0) {
    g_currentExceptionFrame = local_8c.previous;
    iVar6 = ReportDebugMessage("E:\\__titans\\Start\\main_obj.cpp",0x241,0,local_EAX_60,
                               "%s","MainMenuTy::GetMessage");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(local_EAX_60,0,"E:\\__titans\\Start\\main_obj.cpp",0x241);
    return 0xffff;
  }
  thunk_FUN_005b6450(local_8,message);
  temp_5f8d1d2a76 = message->id;
  if ((temp_5f8d1d2a76 < 0x697f) || (0x69fe < temp_5f8d1d2a76)) goto switchD_005b4c27_default;
  uVar8 = (undefined3)(temp_5f8d1d2a76 - 0x697f >> 8);
  switch(temp_5f8d1d2a76 - 0x697f) {
  case 0:
    iVar7 = -2;
    iVar11 = 1;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    uVar5 = CONCAT31(uVar8,(char)message->id + 0x81);
    break;
  case 1:
    iVar7 = -2;
    goto LAB_005b4c5f;
  case 2:
    iVar7 = -2;
    iVar11 = 2;
    /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
    uVar5 = STReplaceLowByte((uint32_t)(extraout_EDX), (uint8_t)((char)message->id + 0x81));
    break;
  case 3:
    iVar7 = -2;
    iVar11 = 0;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    uVar5 = CONCAT31(uVar8,(char)message->id + 0x81);
    break;
  case 4:
    iVar7 = -3;
LAB_005b4c5f:
    iVar11 = 0;
    /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
    uVar5 = STReplaceLowByte((uint32_t)(extraout_ECX), (uint8_t)((char)message->id + 0x81));
    break;
  default:
    goto switchD_005b4c27_default;
  }
  /* ST_CALLSITE[005B4C6D]: CALL 0x0040499e; direct=0040499E MMObjTy::PaintSprBut */
  MMObjTy::PaintSprBut((MMObjTy *)this_00,(int)message,uVar5,1,iVar11,iVar7);
switchD_005b4c27_default:
  SVar1 = message->id;
  if (SVar1 < 0x6903) {
    if (SVar1 == 0x6902) {
      if (this_00->field_1EE3 == '\0') {
        /* ST_CALLSITE[005B4D8A]: CALL 0x0040560f; direct=0040560F MainMenuTy::sub_005B4860 */
        sub_005B4860(this_00);
        /* ST_CALLSITE[005B4D9B]: CALL dword ptr [EDX + 0x10] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(*STField<int *>(this_00,0xC) + 0x10))(0x309,0);
        goto cf_common_exit_005B4EEC;
      }
      if (this_00->field_1EE3 != '\x01') goto cf_common_exit_005B4EEC;
      this_00->field_00BB[0xc].field_01DB = 3;
    }
    else {
      if (SVar1 < 6) {
        if (SVar1 == 5) {
          /* ST_CALLSITE[005B4CC8]: CALL 0x004059b1; direct=004059B1 MainMenuTy::PaintMainMenu */
          PaintMainMenu(this_00);
        }
        else if (SVar1 == 0) {
          /* ST_CALLSITE[005B4CBC]: CALL 0x00405317; direct=00405317 MainMenuTy::NoneMainMenu */
          NoneMainMenu(this_00);
        }
        else if (SVar1 == 2) {
          /* ST_CALLSITE[005B4CB0]: CALL 0x0040254f; direct=0040254F MainMenuTy::InitMainMenu */
          InitMainMenu(this_00,*(char *)&message->arg0);
        }
        else if (SVar1 == 3) {
          /* ST_CALLSITE[005B4CA0]: CALL 0x0040189d; direct=0040189D MainMenuTy::DoneMainMenu */
          DoneMainMenu(this_00);
        }
        goto cf_common_exit_005B4EEC;
      }
      if (SVar1 == 0x68ff) {
        if (this_00->field_1EE3 != '\0') {
          if (this_00->field_1EE3 != '\x01') goto cf_common_exit_005B4EEC;
          _DAT_0080f32e = 1;
        }
        this_00->field_00BB[0xc].field_01DB = 0;
      }
      else if (SVar1 == 0x6900) {
        if ((this_00->field_1EE3 == '\0') &&
           ((g_startSystem_0081176C == nullptr ||
            (g_startSystem_0081176C->field_068A == 0)))) goto cf_common_exit_005B4EEC;
        this_00->field_00BB[0xc].field_01DB = 1;
      }
      else {
        if (SVar1 != 0x6901) goto cf_common_exit_005B4EEC;
        if (this_00->field_1EE3 == '\0') {
          this_00->field_00BB[0xc].field_01DB = 2;
        }
        else {
          if (this_00->field_1EE3 != '\x01') goto cf_common_exit_005B4EEC;
          this_00->field_00BB[0xc].field_01DB = (char)message->id + 1;
        }
      }
    }
LAB_005b4de5:
    /* ST_CALLSITE[005B4DE9]: CALL dword ptr [EDX + 0x8] */
    this_00->CloseButtons();
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    this_01 = *(MMsgTy **)(this_00->field_00BB[0xc].field_01DC + 0x2e6);
LAB_005b4df8:
    if (this_01 != nullptr) {
      /* ST_CALLSITE[005B4E06]: CALL 0x00401fa5; direct=00401FA5 MMsgTy::HidePanel */
      MMsgTy::HidePanel(this_01,1,0,1);
    }
    goto cf_common_exit_005B4EEC;
  }
  switch(SVar1) {
  case 0x6903:
    if (this_00->field_1EE3 != '\0') {
      if (this_00->field_1EE3 != '\x01') break;
      _DAT_0080f32e = 1;
      this_00->field_00BB[0xc].field_01DB = 4;
      goto LAB_005b4de5;
    }
    pSVar1 = this_00->field_00BB[0xc].field_01DC;
    if (*(int *)(pSVar1 + 0x2e6) == 0) break;
    memset(local_48, 0, 0x20); /* compiler bulk-zero initialization */
    iVar7 = 0;
    memset(local_28, 0, 0x20); /* compiler bulk-zero initialization */
    local_48[2] = this_00->field_0008;
    local_48[3] = 2;
    local_28[3] = 2;
    local_48[4] = 0x6941;
    local_28[4] = 0x693f;
    local_28[2] = local_48[2];
    /* ST_CALLSITE[005B4E77]: CALL 0x00403fa8; direct=00403FA8 MMsgTy::SetMessage */
    iVar7 = MMsgTy::SetMessage(*(MMsgTy **)(pSVar1 + 0x2e6),0x251d,'\x01',local_48,local_28,
                               nullptr,0,0);
    if (iVar7 == 0) break;
  case 0x6940:
    /* ST_CALLSITE[005B4E82]: CALL 0x0040560f; direct=0040560F MainMenuTy::sub_005B4860 */
    sub_005B4860(this_00);
    break;
  case 0x693f:
    /* ST_CALLSITE[005B4E8B]: CALL 0x004040de; direct=004040DE MainMenuTy::sub_005B47E0 */
    sub_005B47E0(this_00);
    break;
  case 0x6941:
    if (this_00->field_1EE3 == '\0') {
      /* ST_CALLSITE[005B4E9E]: CALL 0x004040de; direct=004040DE MainMenuTy::sub_005B47E0 */
      sub_005B47E0(this_00);
      pMVar2 = this_00->vtable;
      this_00->field_00BB[0xc].field_01DB = 4;
      /* ST_CALLSITE[005B4EAE]: CALL dword ptr [EDX + 0x8] */
      (*pMVar2->CloseButtons)(this_00);
    }
    break;
  case 0x6942:
    cVar10 = '\0';
    goto LAB_005b4ee5;
  case 0x6943:
    thunk_FUN_005b6350(this_00,0x6942,0,0);
    /* ST_CALLSITE[005B4EC7]: CALL dword ptr [EAX + 0x8] */
    this_00->CloseButtons();
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    this_01 = *(MMsgTy **)(this_00->field_00BB[0xc].field_01DC + 0x2e6);
    goto LAB_005b4df8;
  case 0x6944:
    cVar10 = '\x01';
LAB_005b4ee5:
    /* ST_CALLSITE[005B4EE7]: CALL 0x00401f00; direct=00401F00 MainMenuTy::SetMode */
    SetMode(this_00,cVar10,0);
  }
cf_common_exit_005B4EEC:
  g_currentExceptionFrame = local_8c.previous;
  /* ST_CALLSITE[005B4EFB]: CALL 0x00401280; direct=00401280 MMObjTy::GetMessage */
  iVar4 = MMObjTy::GetMessage((MMObjTy *)this_00,message);
  return iVar4;
}

