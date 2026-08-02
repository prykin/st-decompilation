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
  code *pcVar2;
  MainMenuTy *this_00;
  DWORD DVar3;
  int iVar4;
  undefined3 uVar7;
  uint uVar5;
  int iVar6;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX;
  MMsgTy *this_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  void *unaff_EDI;
  char cVar9;
  InternalExceptionFrame local_8c;
  undefined4 local_48 [8];
  undefined4 local_28 [8];
  MainMenuTy *local_8;
  uint SVar1;
  uint temp_5f8d1d2a76;

  local_8 = this;
  DVar3 = STAppC::sub_006E51B0(this->field_0010);
  this->field_0061 = DVar3;
  local_8c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_8c;
  iVar4 = Library::MSVCRT::__setjmp3(local_8c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_8c.previous;
    iVar6 = ReportDebugMessage("E:\\__titans\\Start\\main_obj.cpp",0x241,0,iVar4,"%s"
                               ,"MainMenuTy::GetMessage");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\Start\\main_obj.cpp",0x241);
    return 0xffff;
  }
  thunk_FUN_005b6450(local_8,message);
  temp_5f8d1d2a76 = message->id;
  if ((temp_5f8d1d2a76 < 0x697f) || (0x69fe < temp_5f8d1d2a76)) goto switchD_005b4c27_default;
  uVar7 = (undefined3)(temp_5f8d1d2a76 - 0x697f >> 8);
  switch(temp_5f8d1d2a76 - 0x697f) {
  case 0:
    iVar4 = -2;
    iVar6 = 1;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    uVar5 = CONCAT31(uVar7,(char)message->id + 0x81);
    break;
  case 1:
    iVar4 = -2;
    goto LAB_005b4c5f;
  case 2:
    iVar4 = -2;
    iVar6 = 2;
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    uVar5 = CONCAT31((int3)((uint)extraout_EDX >> 8),(char)message->id + 0x81);
    break;
  case 3:
    iVar4 = -2;
    iVar6 = 0;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    uVar5 = CONCAT31(uVar7,(char)message->id + 0x81);
    break;
  case 4:
    iVar4 = -3;
LAB_005b4c5f:
    iVar6 = 0;
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    uVar5 = CONCAT31((int3)((uint)extraout_ECX >> 8),(char)message->id + 0x81);
    break;
  default:
    goto switchD_005b4c27_default;
  }
  MMObjTy::PaintSprBut((MMObjTy *)this_00,(int)message,uVar5,1,iVar6,iVar4);
switchD_005b4c27_default:
  SVar1 = message->id;
  if (SVar1 < 0x6903) {
    if (SVar1 == 0x6902) {
      if (this_00->field_1EE3 == '\0') {
        sub_005B4860(this_00);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*(int *)this_00->field_000C + 0x10))(0x309,0);
        goto cf_common_exit_005B4EEC;
      }
      if (this_00->field_1EE3 != '\x01') goto cf_common_exit_005B4EEC;
      this_00->field_1A5A = 3;
    }
    else {
      if (SVar1 < 6) {
        if (SVar1 == 5) {
          PaintMainMenu(this_00);
        }
        else if (SVar1 == 0) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          NoneMainMenu(this_00,unaff_EDI);
        }
        else if (SVar1 == 2) {
          InitMainMenu(this_00,*(char *)&message->arg0);
        }
        else if (SVar1 == 3) {
          DoneMainMenu(this_00);
        }
        goto cf_common_exit_005B4EEC;
      }
      if (SVar1 == 0x68ff) {
        if (this_00->field_1EE3 != '\0') {
          if (this_00->field_1EE3 != '\x01') goto cf_common_exit_005B4EEC;
          _DAT_0080f32e = 1;
        }
        this_00->field_1A5A = 0;
      }
      else if (SVar1 == 0x6900) {
        if ((this_00->field_1EE3 == '\0') &&
           ((g_startSystem_0081176C == nullptr ||
            (g_startSystem_0081176C->field_068A == 0)))) goto cf_common_exit_005B4EEC;
        this_00->field_1A5A = 1;
      }
      else {
        if (SVar1 != 0x6901) goto cf_common_exit_005B4EEC;
        if (this_00->field_1EE3 == '\0') {
          this_00->field_1A5A = 2;
        }
        else {
          if (this_00->field_1EE3 != '\x01') goto cf_common_exit_005B4EEC;
          this_00->field_1A5A = (char)message->id + 1;
        }
      }
    }
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
LAB_005b4de5:
    (**(code **)(this_00->field_0000 + 8))();
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    this_01 = *(MMsgTy **)(this_00->field_1A5B + 0x2e6);
LAB_005b4df8:
    if (this_01 != nullptr) {
      MMsgTy::HidePanel(this_01,1,0,1);
    }
    goto cf_common_exit_005B4EEC;
  }
  switch(SVar1) {
  case 0x6903:
    if (this_00->field_1EE3 != '\0') {
      if (this_00->field_1EE3 != '\x01') break;
      _DAT_0080f32e = 1;
      this_00->field_1A5A = 4;
      goto LAB_005b4de5;
    }
    pSVar1 = this_00->field_1A5B;
    if (*(int *)(pSVar1 + 0x2e6) == 0) break;
    memset(local_48, 0, 0x20); /* compiler bulk-zero initialization */
    iVar4 = 0;
    memset(local_28, 0, 0x20); /* compiler bulk-zero initialization */
    local_48[2] = this_00->field_0008;
    local_48[3] = 2;
    local_28[3] = 2;
    local_48[4] = 0x6941;
    local_28[4] = 0x693f;
    local_28[2] = local_48[2];
    iVar4 = MMsgTy::SetMessage(*(MMsgTy **)(pSVar1 + 0x2e6),0x251d,'\x01',local_48,local_28,
                               nullptr,0,0);
    if (iVar4 == 0) break;
  case 0x6940:
    sub_005B4860(this_00);
    break;
  case 0x693f:
    sub_005B47E0(this_00);
    break;
  case 0x6941:
    if (this_00->field_1EE3 == '\0') {
      sub_005B47E0(this_00);
      this_00->field_1A5A = 4;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(this_00->field_0000 + 8))();
    }
    break;
  case 0x6942:
    cVar9 = '\0';
    goto LAB_005b4ee5;
  case 0x6943:
    thunk_FUN_005b6350(this_00,0x6942,0,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(this_00->field_0000 + 8))();
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    this_01 = *(MMsgTy **)(this_00->field_1A5B + 0x2e6);
    goto LAB_005b4df8;
  case 0x6944:
    cVar9 = '\x01';
LAB_005b4ee5:
    SetMode(this_00,cVar9,0);
  }
cf_common_exit_005B4EEC:
  g_currentExceptionFrame = local_8c.previous;
  iVar4 = MMObjTy::GetMessage((MMObjTy *)this_00,message);
  return iVar4;
}

