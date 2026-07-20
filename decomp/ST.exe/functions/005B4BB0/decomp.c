
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\main_obj.cpp
   MainMenuTy::GetMessage */

undefined4 __thiscall MainMenuTy::GetMessage(MainMenuTy *this,int param_1)

{
  code *pcVar1;
  MainMenuTy *this_00;
  DWORD DVar2;
  int iVar3;
  undefined3 uVar7;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 extraout_ECX;
  MMsgTy *this_01;
  undefined4 extraout_EDX;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar8;
  char cVar9;
  InternalExceptionFrame local_8c;
  undefined4 local_48 [8];
  undefined4 local_28 [8];
  MainMenuTy *local_8;
  
  local_8 = this;
  DVar2 = FUN_006e51b0(this->field_0010);
  this->field_0061 = DVar2;
  local_8c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_8c;
  iVar3 = Library::MSVCRT::__setjmp3(local_8c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_8c.previous;
    iVar6 = ReportDebugMessage(s_E____titans_Start_main_obj_cpp_007cc8e8,0x241,0,iVar3,&DAT_007a4ccc
                               ,s_MainMenuTy__GetMessage_007cca1c);
    if (iVar6 != 0) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Start_main_obj_cpp_007cc8e8,0x241);
    return 0xffff;
  }
  thunk_FUN_005b6450(local_8,param_1);
  uVar4 = *(uint *)(param_1 + 0x10);
  if ((uVar4 < 0x697f) || (0x69fe < uVar4)) goto switchD_005b4c27_default;
  uVar7 = (undefined3)(uVar4 - 0x697f >> 8);
  switch(uVar4 - 0x697f) {
  case 0:
    iVar3 = -2;
    iVar6 = 1;
    uVar4 = CONCAT31(uVar7,*(char *)(param_1 + 0x10) + -0x7f);
    break;
  case 1:
    iVar3 = -2;
    goto LAB_005b4c5f;
  case 2:
    iVar3 = -2;
    iVar6 = 2;
    uVar4 = CONCAT31((int3)((uint)extraout_EDX >> 8),*(char *)(param_1 + 0x10) + -0x7f);
    break;
  case 3:
    iVar3 = -2;
    iVar6 = 0;
    uVar4 = CONCAT31(uVar7,*(char *)(param_1 + 0x10) + -0x7f);
    break;
  case 4:
    iVar3 = -3;
LAB_005b4c5f:
    iVar6 = 0;
    uVar4 = CONCAT31((int3)((uint)extraout_ECX >> 8),*(char *)(param_1 + 0x10) + -0x7f);
    break;
  default:
    goto switchD_005b4c27_default;
  }
  MMObjTy::PaintSprBut((MMObjTy *)this_00,param_1,uVar4,1,iVar6,iVar3);
switchD_005b4c27_default:
  uVar4 = *(uint *)(param_1 + 0x10);
  if (uVar4 < 0x6903) {
    if (uVar4 == 0x6902) {
      if (this_00->field_1EE3 == '\0') {
        thunk_FUN_005b4860((AnonShape_005B4860_900BE0CB *)this_00);
        (**(code **)(*(int *)this_00->field_000C + 0x10))(0x309,0);
        goto cf_common_exit_005B4EEC;
      }
      if (this_00->field_1EE3 != '\x01') goto cf_common_exit_005B4EEC;
      this_00->field_1A5A = 3;
    }
    else {
      if (uVar4 < 6) {
        if (uVar4 == 5) {
          PaintMainMenu(this_00);
        }
        else if (uVar4 == 0) {
          NoneMainMenu(this_00,unaff_EDI);
        }
        else if (uVar4 == 2) {
          InitMainMenu(this_00,*(char *)(param_1 + 0x14));
        }
        else if (uVar4 == 3) {
          DoneMainMenu(this_00);
        }
        goto cf_common_exit_005B4EEC;
      }
      if (uVar4 == 0x68ff) {
        if (this_00->field_1EE3 != '\0') {
          if (this_00->field_1EE3 != '\x01') goto cf_common_exit_005B4EEC;
          _DAT_0080f32e = 1;
        }
        this_00->field_1A5A = 0;
      }
      else if (uVar4 == 0x6900) {
        if ((this_00->field_1EE3 == '\0') &&
           ((PTR_0081176c == (StartSystemTy *)0x0 || (PTR_0081176c->field_068A == 0))))
        goto cf_common_exit_005B4EEC;
        this_00->field_1A5A = 1;
      }
      else {
        if (uVar4 != 0x6901) goto cf_common_exit_005B4EEC;
        if (this_00->field_1EE3 == '\0') {
          this_00->field_1A5A = 2;
        }
        else {
          if (this_00->field_1EE3 != '\x01') goto cf_common_exit_005B4EEC;
          this_00->field_1A5A = *(char *)(param_1 + 0x10) + '\x01';
        }
      }
    }
LAB_005b4de5:
    (**(code **)(this_00->field_0000 + 8))();
    this_01 = *(MMsgTy **)(this_00->field_1A5B + 0x2e6);
LAB_005b4df8:
    if (this_01 != (MMsgTy *)0x0) {
      MMsgTy::HidePanel(this_01,1,0,1);
    }
    goto cf_common_exit_005B4EEC;
  }
  switch(uVar4) {
  case 0x6903:
    if (this_00->field_1EE3 != '\0') {
      if (this_00->field_1EE3 != '\x01') break;
      _DAT_0080f32e = 1;
      this_00->field_1A5A = 4;
      goto LAB_005b4de5;
    }
    iVar3 = this_00->field_1A5B;
    if (*(int *)(iVar3 + 0x2e6) == 0) break;
    puVar8 = local_48;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    puVar8 = local_28;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    local_48[2] = this_00->field_0008;
    local_48[3] = 2;
    local_28[3] = 2;
    local_48[4] = 0x6941;
    local_28[4] = 0x693f;
    local_28[2] = local_48[2];
    iVar3 = MMsgTy::SetMessage(*(MMsgTy **)(iVar3 + 0x2e6),0x251d,'\x01',local_48,local_28,
                               (undefined4 *)0x0,0,0);
    if (iVar3 == 0) break;
  case 0x6940:
    thunk_FUN_005b4860((AnonShape_005B4860_900BE0CB *)this_00);
    break;
  case 0x693f:
    thunk_FUN_005b47e0((AnonShape_005B47E0_F4E5CF5A *)this_00);
    break;
  case 0x6941:
    if (this_00->field_1EE3 == '\0') {
      thunk_FUN_005b47e0((AnonShape_005B47E0_F4E5CF5A *)this_00);
      this_00->field_1A5A = 4;
      (**(code **)(this_00->field_0000 + 8))();
    }
    break;
  case 0x6942:
    cVar9 = '\0';
    goto LAB_005b4ee5;
  case 0x6943:
    thunk_FUN_005b6350(this_00,0x6942,0,0);
    (**(code **)(this_00->field_0000 + 8))();
    this_01 = *(MMsgTy **)(this_00->field_1A5B + 0x2e6);
    goto LAB_005b4df8;
  case 0x6944:
    cVar9 = '\x01';
LAB_005b4ee5:
    SetMode(this_00,cVar9,0);
  }
cf_common_exit_005B4EEC:
  g_currentExceptionFrame = local_8c.previous;
  uVar5 = MMObjTy::GetMessage((MMObjTy *)this_00,param_1);
  return uVar5;
}

