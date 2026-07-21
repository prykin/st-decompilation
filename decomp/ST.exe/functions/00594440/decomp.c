
/* Recovered from embedded debug metadata:
   E:\__titans\Start\combo.cpp
   ComboTy::GetMessage */

undefined4 __thiscall ComboTy::GetMessage(ComboTy *this,int param_1)

{
  undefined1 uVar1;
  AnonPointee_ComboTy_0104 *pAVar2;
  code *pcVar3;
  ComboTy *this_00;
  int errorCode;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_50;
  ComboTy *local_c;
  uint local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  errorCode = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_c;
  if (errorCode != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar6 = ReportDebugMessage(s_E____titans_Start_combo_cpp_007cbeec,0xb7,0,errorCode,&DAT_007a4ccc
                               ,s_ComboTy__GetMessage_007cbf58);
    if (iVar6 != 0) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
    RaiseInternalException(errorCode,0,s_E____titans_Start_combo_cpp_007cbeec,0xb7);
    return 0xffff;
  }
  uVar7 = *(uint *)(param_1 + 0x10);
  if (uVar7 < 0x10000) {
    if (uVar7 == 0xffff) {
      *(undefined4 *)(param_1 + 0x18) = local_c->field_00CC;
      goto cf_common_exit_00594615;
    }
    switch(uVar7) {
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
    uVar5 = FUN_006e5fd0();
    return uVar5;
  }
  switch(uVar7) {
  case 0x10001:
    pAVar2 = local_c->field_0104;
    local_8 = pAVar2->field_0014;
    if (local_8 == 0) {
      local_8 = ((uint)(ushort)pAVar2->field_000E * pAVar2->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
                pAVar2->field_0008;
    }
    uVar1 = local_c->field_00D8;
    puVar4 = (undefined4 *)FUN_006b4fa0((int)pAVar2);
    for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar4 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
      puVar4 = puVar4 + 1;
    }
    for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar4 = uVar1;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    this_00->field_00BC = *(undefined4 *)(param_1 + 0x14);
    FUN_006e5fe0(this_00,(undefined4 *)&this_00->field_0xa8);
    pAVar2 = this_00->field_0104;
    Library::DKW::WGR::FUN_006b55f0
              ((AnonShape_006B84D0_7C7D97C6 *)this_00->field_00FC,0,*(ushort *)(param_1 + 0x18) + 5,
               *(ushort *)(param_1 + 0x1a) + 5,(byte *)pAVar2,0,0,0,pAVar2->field_0004,
               pAVar2->field_0008);
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

