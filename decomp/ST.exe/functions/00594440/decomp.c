
/* Recovered from embedded debug metadata:
   E:\__titans\Start\combo.cpp
   ComboTy::GetMessage */

undefined4 __thiscall ComboTy::GetMessage(ComboTy *this,int param_1)

{
  undefined1 uVar1;
  byte *pbVar2;
  code *pcVar3;
  ComboTy *this_00;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_50;
  ComboTy *local_c;
  uint local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_c;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar7 = ReportDebugMessage(s_E____titans_Start_combo_cpp_007cbeec,0xb7,0,iVar4,&DAT_007a4ccc,
                               s_ComboTy__GetMessage_007cbf58);
    if (iVar7 != 0) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return uVar6;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Start_combo_cpp_007cbeec,0xb7);
    return 0xffff;
  }
  uVar8 = *(uint *)(param_1 + 0x10);
  if (uVar8 < 0x10000) {
    if (uVar8 == 0xffff) {
      *(undefined4 *)(param_1 + 0x18) = local_c->field_00CC;
      goto cf_common_exit_00594615;
    }
    switch(uVar8) {
    case 2:
      InitCombo(local_c,*(undefined4 **)(param_1 + 0x14));
      break;
    case 3:
      DoneCombo(local_c);
      break;
    case 5:
      FUN_006b35d0(DAT_008075a8,local_c->field_0108);
      break;
    case 0x62:
      if ((((int)local_c->field_00EC <= (int)(uint)*(ushort *)(param_1 + 0x18)) &&
          ((int)(uint)*(ushort *)(param_1 + 0x18) < (int)(local_c->field_00F4 + local_c->field_00EC)
          )) && ((int)local_c->field_00F0 <= (int)(uint)*(ushort *)(param_1 + 0x1a))) {
        if ((int)(local_c->field_00F8 + local_c->field_00F0) <=
            (int)(uint)*(ushort *)(param_1 + 0x1a)) {
          thunk_FUN_005943f0((STJellyGunC *)local_c);
        }
        break;
      }
    case 100:
switchD_005944a8_caseD_64:
      thunk_FUN_005943f0((STJellyGunC *)local_c);
    }
cf_common_exit_00594615:
    g_currentExceptionFrame = local_50.previous;
    uVar6 = FUN_006e5fd0();
    return uVar6;
  }
  switch(uVar8) {
  case 0x10001:
    iVar4 = local_c->field_0104;
    local_8 = *(uint *)(iVar4 + 0x14);
    if (local_8 == 0) {
      local_8 = ((uint)*(ushort *)(iVar4 + 0xe) * *(int *)(iVar4 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)(iVar4 + 8);
    }
    uVar1 = local_c->field_00D8;
    puVar5 = (undefined4 *)FUN_006b4fa0(iVar4);
    for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar5 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
      puVar5 = puVar5 + 1;
    }
    for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar5 = uVar1;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    this_00->field_00BC = *(undefined4 *)(param_1 + 0x14);
    FUN_006e5fe0(this_00,(undefined4 *)&this_00->field_0xa8);
    pbVar2 = (byte *)this_00->field_0104;
    Library::DKW::WGR::FUN_006b55f0
              ((undefined4 *)this_00->field_00FC,0,*(ushort *)(param_1 + 0x18) + 5,
               *(ushort *)(param_1 + 0x1a) + 5,pbVar2,0,0,0,*(int *)(pbVar2 + 4),
               *(int *)(pbVar2 + 8));
    goto cf_common_exit_00594615;
  case 0x10002:
    if (local_c->field_0110 == 0) goto cf_common_exit_00594615;
  case 0x10000:
    local_c->field_009C = *(undefined4 *)(param_1 + 0x14);
    break;
  case 0x10003:
    break;
  default:
    goto cf_common_exit_00594615;
  }
  goto switchD_005944a8_caseD_64;
}

