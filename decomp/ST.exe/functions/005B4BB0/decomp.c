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
  STMessageId SVar1;
  StartServTy *pSVar2;
  code *pcVar3;
  MainMenuTy *this_00;
  DWORD DVar4;
  int iVar5;
  undefined3 uVar8;
  uint uVar6;
  int iVar7;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX;
  MMsgTy *this_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  void *unaff_EDI;
  undefined4 *puVar9;
  char cVar10;
  InternalExceptionFrame local_8c;
  undefined4 local_48 [8];
  undefined4 local_28 [8];
  MainMenuTy *local_8;

  local_8 = this;
  DVar4 = FUN_006e51b0(this->field_0010);
  this->field_0061 = DVar4;
  local_8c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_8c;
  iVar5 = Library::MSVCRT::__setjmp3(local_8c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_8c.previous;
    iVar7 = ReportDebugMessage("E:\\__titans\\Start\\main_obj.cpp",0x241,0,iVar5,"%s"
                               ,"MainMenuTy::GetMessage");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar5,0,"E:\\__titans\\Start\\main_obj.cpp",0x241);
    return 0xffff;
  }
  thunk_FUN_005b6450(local_8,(int)message);
  SVar1 = message->id;
  if ((SVar1 < MESS_SHARED_697F) || (0x69fe < SVar1)) goto switchD_005b4c27_default;
  uVar8 = (undefined3)(SVar1 - MESS_SHARED_697F >> 8);
  switch(SVar1 - MESS_SHARED_697F) {
  case MESS_ID_NONE:
    iVar5 = -2;
    iVar7 = 1;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    uVar6 = CONCAT31(uVar8,(char)message->id + 0x81);
    break;
  case 1:
    iVar5 = -2;
    goto LAB_005b4c5f;
  case MESS_ID_CREATE:
    iVar5 = -2;
    iVar7 = 2;
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    uVar6 = CONCAT31((int3)((uint)extraout_EDX >> 8),(char)message->id + 0x81);
    break;
  case MESS_SHARED_0003:
    iVar5 = -2;
    iVar7 = 0;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    uVar6 = CONCAT31(uVar8,(char)message->id + 0x81);
    break;
  case 4:
    iVar5 = -3;
LAB_005b4c5f:
    iVar7 = 0;
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    uVar6 = CONCAT31((int3)((uint)extraout_ECX >> 8),(char)message->id + 0x81);
    break;
  default:
    goto switchD_005b4c27_default;
  }
  MMObjTy::PaintSprBut((MMObjTy *)this_00,(int)message,uVar6,1,iVar7,iVar5);
switchD_005b4c27_default:
  SVar1 = message->id;
  if (SVar1 < MESS_FSGSTY_6903) {
    if (SVar1 == MESS_MAINMENUTY_6902) {
      if (this_00->field_1EE3 == '\0') {
        thunk_FUN_005b4860((AnonShape_005B47E0_F4E5CF5A *)this_00);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*(int *)this_00->field_000C + 0x10))(0x309,0);
        goto cf_common_exit_005B4EEC;
      }
      if (this_00->field_1EE3 != '\x01') goto cf_common_exit_005B4EEC;
      this_00->field_1A5A = 3;
    }
    else {
      if (SVar1 < 6) {
        if (SVar1 == MESS_SHARED_0005) {
          PaintMainMenu(this_00);
        }
        else if (SVar1 == MESS_ID_NONE) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          NoneMainMenu(this_00,unaff_EDI);
        }
        else if (SVar1 == MESS_ID_CREATE) {
          InitMainMenu(this_00,*(char *)&message->arg0);
        }
        else if (SVar1 == MESS_SHARED_0003) {
          DoneMainMenu(this_00);
        }
        goto cf_common_exit_005B4EEC;
      }
      if (SVar1 == MESS_MMSGTY_68FF) {
        if (this_00->field_1EE3 != '\0') {
          if (this_00->field_1EE3 != '\x01') goto cf_common_exit_005B4EEC;
          _DAT_0080f32e = 1;
        }
        this_00->field_1A5A = 0;
      }
      else if (SVar1 == MESS_SHARED_6900) {
        if ((this_00->field_1EE3 == '\0') &&
           ((PTR_0081176c == (StartSystemTy *)0x0 || (PTR_0081176c->field_068A == 0))))
        goto cf_common_exit_005B4EEC;
        this_00->field_1A5A = 1;
      }
      else {
        if (SVar1 != MESS_FSGSTY_6901) goto cf_common_exit_005B4EEC;
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
    if (this_01 != (MMsgTy *)0x0) {
      MMsgTy::HidePanel(this_01,1,0,1);
    }
    goto cf_common_exit_005B4EEC;
  }
  switch(SVar1) {
  case MESS_FSGSTY_6903:
    if (this_00->field_1EE3 != '\0') {
      if (this_00->field_1EE3 != '\x01') break;
      _DAT_0080f32e = 1;
      this_00->field_1A5A = 4;
      goto LAB_005b4de5;
    }
    pSVar2 = this_00->field_1A5B;
    if (*(int *)(pSVar2 + 0x2e6) == 0) break;
    puVar9 = local_48;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    puVar9 = local_28;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    local_48[2] = this_00->field_0008;
    local_48[3] = 2;
    local_28[3] = 2;
    local_48[4] = 0x6941;
    local_28[4] = 0x693f;
    local_28[2] = local_48[2];
    iVar5 = MMsgTy::SetMessage(*(MMsgTy **)(pSVar2 + 0x2e6),0x251d,'\x01',local_48,local_28,
                               (undefined4 *)0x0,0,0);
    if (iVar5 == 0) break;
  case MESS_SHARED_6940:
    thunk_FUN_005b4860((AnonShape_005B47E0_F4E5CF5A *)this_00);
    break;
  case MESS_PRIVIDERTY_693F:
    thunk_FUN_005b47e0((AnonShape_005B47E0_F4E5CF5A *)this_00);
    break;
  case MESS_FSGSTY_6941:
    if (this_00->field_1EE3 == '\0') {
      thunk_FUN_005b47e0((AnonShape_005B47E0_F4E5CF5A *)this_00);
      this_00->field_1A5A = 4;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(this_00->field_0000 + 8))();
    }
    break;
  case MESS_CHOOSEMAPTY_6942:
    cVar10 = '\0';
    goto LAB_005b4ee5;
  case MESS_WAITTY_6943:
    thunk_FUN_005b6350(this_00,0x6942,0,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(this_00->field_0000 + 8))();
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    this_01 = *(MMsgTy **)(this_00->field_1A5B + 0x2e6);
    goto LAB_005b4df8;
  case MESS_MAINMENUTY_6944:
    cVar10 = '\x01';
LAB_005b4ee5:
    SetMode(this_00,cVar10,0);
  }
cf_common_exit_005B4EEC:
  g_currentExceptionFrame = local_8c.previous;
  iVar5 = MMObjTy::GetMessage((MMObjTy *)this_00,message);
  return iVar5;
}

