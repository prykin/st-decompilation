
/* Recovered from embedded debug metadata:
   E:\Ourlib\Sinput.cpp
   InputClassTy::AddAcc */

int __thiscall InputClassTy::AddAcc(InputClassTy *this,uint *param_1)

{
  uint uVar1;
  code *pcVar2;
  InputClassTy *this_00;
  int iVar3;
  uint *puVar4;
  int iVar5;
  undefined4 unaff_ESI;
  uint uVar6;
  void *unaff_EDI;
  uint *puVar7;
  uint uVar8;
  bool bVar9;
  byte local_1d4 [256];
  InternalExceptionFrame local_d4;
  uint local_90 [19];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c [4];
  InputClassTy *local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  uint local_c;
  int local_8;
  
  local_14 = 1;
  local_d4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_d4;
  local_1c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_d4.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_1c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_d4.previous;
    iVar5 = ReportDebugMessage(s_E__Ourlib_Sinput_cpp_007f092c,0x1fd,0,iVar3,&DAT_007a4ccc,
                               s_InputClassTy__AddAcc_Error___007f0974);
    if (iVar5 == 0) {
      RaiseInternalException(iVar3,0,s_E__Ourlib_Sinput_cpp_007f092c,0x1fe);
      return iVar3;
    }
    pcVar2 = (code *)swi(3);
    iVar3 = (*pcVar2)();
    return iVar3;
  }
  iVar3 = local_1c->field_0024;
  if (iVar3 == 0) {
    puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,100,10);
    this_00->field_0024 = puVar4;
  }
  else if ((*param_1 & 4) != 0) {
    uVar8 = 0;
    if (0 < *(int *)(iVar3 + 0xc)) {
      bVar9 = *(int *)(iVar3 + 0xc) != 0;
      do {
        if (bVar9) {
          puVar4 = (uint *)(*(int *)(iVar3 + 8) * uVar8 + *(int *)(iVar3 + 0x1c));
        }
        else {
          puVar4 = (uint *)0x0;
        }
        if ((puVar4 != (uint *)0x0) && (iVar3 = FUN_0071b970(puVar4,(byte *)param_1), iVar3 != 0)) {
          local_14 = 0;
          break;
        }
        iVar3 = this_00->field_0024;
        uVar8 = uVar8 + 1;
        bVar9 = uVar8 < *(uint *)(iVar3 + 0xc);
      } while ((int)uVar8 < (int)*(uint *)(iVar3 + 0xc));
    }
  }
  if (local_14 == 0) {
    g_currentExceptionFrame = local_d4.previous;
    return 0;
  }
  this_00->field_0070 = 1;
  puVar4 = local_90;
  for (iVar3 = 0x19; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = param_1;
  puVar7 = local_90;
  for (iVar3 = 0x13; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar7 = puVar7 + 1;
  }
  uVar8 = 0;
  local_34 = 1;
  local_40 = 0;
  if ((local_90[0] & 8) == 0) {
    if (this_00->field_0060 == 0) goto cf_common_join_0071C3C1;
    iVar3 = (**(code **)(*(int *)this_00->field_001C + 0x24))
                      ((int *)this_00->field_001C,0x100,local_1d4);
    if (iVar3 != 0) {
      RaiseInternalException(iVar3,DAT_007ed77c,s_E__Ourlib_Sinput_cpp_007f092c,0x1d4);
    }
    if (((local_1d4[local_90[1] & 0xff] & 0x80) != 0) &&
       (((char)(local_90[1] >> 8) == '\0' || ((local_1d4[local_90[1] >> 8 & 0xff] & 0x80) != 0)))) {
      local_40 = 1;
      goto cf_common_join_0071C3C1;
    }
  }
  else {
    if ((this_00->field_0060 == 0) || (this_00->field_0064 == 0)) goto cf_common_join_0071C3C1;
    iVar3 = (**(code **)(*(int *)this_00->field_001C + 0x24))
                      ((int *)this_00->field_001C,0x100,local_1d4);
    if (iVar3 != 0) {
      RaiseInternalException(iVar3,DAT_007ed77c,s_E__Ourlib_Sinput_cpp_007f092c,0x1cd);
    }
    FUN_0071b630(this_00,&local_10,&local_18,local_2c);
    FUN_0071b760(local_90[1],(byte)local_90[0],(int)local_1d4,(int)local_2c,&local_c,&local_8);
    if ((local_c != 0) && (local_8 != 0)) {
      local_40 = 1;
      goto cf_common_join_0071C3C1;
    }
  }
  local_40 = 0;
cf_common_join_0071C3C1:
  iVar3 = this_00->field_0024;
  uVar1 = *(uint *)(iVar3 + 0xc);
  while( true ) {
    if (uVar8 < uVar1) {
      iVar5 = *(int *)(iVar3 + 8) * uVar8 + *(int *)(iVar3 + 0x1c);
    }
    else {
      iVar5 = 0;
    }
    if (((iVar5 == 0) || ((int)uVar1 <= (int)uVar8)) || (local_90[2] < *(uint *)(iVar5 + 8))) break;
    uVar8 = uVar8 + 1;
  }
  uVar6 = uVar8 + 1;
  bVar9 = uVar6 < uVar1;
  if ((int)uVar6 < (int)uVar1) {
    do {
      if (bVar9) {
        puVar4 = (uint *)(*(int *)(iVar3 + 8) * uVar6 + *(int *)(iVar3 + 0x1c));
      }
      else {
        puVar4 = (uint *)0x0;
      }
      if (((*puVar4 & 2) != 0) && (iVar3 = FUN_0071b970(puVar4,(byte *)local_90), iVar3 != 0)) {
        local_34 = 0;
        local_44 = 0;
      }
      iVar3 = this_00->field_0024;
      uVar6 = uVar6 + 1;
      bVar9 = uVar6 < *(uint *)(iVar3 + 0xc);
    } while ((int)uVar6 < (int)*(uint *)(iVar3 + 0xc));
  }
  if (0 < (int)uVar8) {
    iVar3 = this_00->field_0024;
    if (uVar8 - 1 < *(uint *)(iVar3 + 0xc)) {
      iVar3 = *(int *)(iVar3 + 8) * (uVar8 - 1) + *(int *)(iVar3 + 0x1c);
    }
    else {
      iVar3 = 0;
    }
    if (*(uint *)(iVar3 + 8) == local_90[2]) {
      local_30 = *(undefined4 *)(iVar3 + 0x60);
    }
  }
  Library::DKW::TBL::FUN_006b11d0((uint *)this_00->field_0024,uVar8,local_90);
  if ((local_90[0] & 2) != 0) {
    do {
      do {
        uVar8 = uVar8 - 1;
        if ((int)uVar8 < 0) {
          g_currentExceptionFrame = local_d4.previous;
          return 0;
        }
        iVar3 = this_00->field_0024;
        if (uVar8 < *(uint *)(iVar3 + 0xc)) {
          puVar4 = (uint *)(*(int *)(iVar3 + 8) * uVar8 + *(int *)(iVar3 + 0x1c));
        }
        else {
          puVar4 = (uint *)0x0;
        }
      } while (((puVar4 == (uint *)0x0) ||
               (iVar3 = FUN_0071b970(puVar4,(byte *)param_1), iVar3 == 0)) || (puVar4[0x17] == 0));
      puVar4[0x17] = 0;
      puVar4[0x13] = 0;
    } while ((*puVar4 & 2) == 0);
  }
  g_currentExceptionFrame = local_d4.previous;
  return 0;
}

