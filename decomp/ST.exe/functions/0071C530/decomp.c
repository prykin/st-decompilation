
/* Recovered from embedded debug metadata:
   E:\Ourlib\Sinput.cpp
   InputClassTy::DelAcc */

void __thiscall InputClassTy::DelAcc(InputClassTy *this,byte *param_1)

{
  code *pcVar1;
  InputClassTy *this_00;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 unaff_ESI;
  int *piVar5;
  uint *puVar6;
  void *unaff_EDI;
  byte *pbVar7;
  bool bVar8;
  byte local_1d8 [256];
  int local_d8 [25];
  InternalExceptionFrame local_74;
  int local_30 [4];
  InputClassTy *local_20;
  undefined4 local_1c;
  uint local_18;
  undefined4 local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  local_74.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_74;
  local_20 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_74.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_20;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_74.previous;
    iVar4 = ReportDebugMessage(s_E__Ourlib_Sinput_cpp_007f092c,0x232,0,iVar2,&DAT_007a4ccc,
                               s_InputClassTy__DelAcc_Error___007f0994);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar2,0,s_E__Ourlib_Sinput_cpp_007f092c,0x233);
    return;
  }
  if (*(int *)(local_20 + 0x24) == 0) {
    g_currentExceptionFrame = local_74.previous;
    return;
  }
  *(undefined4 *)(*(int *)(local_20 + 0x24) + 4) = 0;
  local_c = FUN_006b1190(*(int *)(local_20 + 0x24),local_d8);
  while (-1 < (int)local_c) {
    iVar2 = 0x13;
    bVar8 = true;
    piVar5 = local_d8;
    pbVar7 = param_1;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar8 = *piVar5 == *(int *)pbVar7;
      piVar5 = piVar5 + 1;
      pbVar7 = pbVar7 + 4;
    } while (bVar8);
    if (bVar8) {
      *(undefined4 *)(this_00 + 0x70) = 1;
      uVar3 = local_c;
      if ((*param_1 & 2) != 0) goto joined_r0x0071c5de;
      goto cf_common_exit_0071C735;
    }
    local_c = FUN_006b1190(*(int *)(this_00 + 0x24),local_d8);
  }
  goto LAB_0071c742;
joined_r0x0071c5de:
  do {
    do {
      local_18 = uVar3 - 1;
      if ((int)local_18 < 0) goto cf_common_exit_0071C735;
      iVar2 = *(int *)(this_00 + 0x24);
      if (local_18 < *(uint *)(iVar2 + 0xc)) {
        puVar6 = (uint *)(*(int *)(iVar2 + 8) * local_18 + *(int *)(iVar2 + 0x1c));
      }
      else {
        puVar6 = (uint *)0x0;
      }
      uVar3 = local_18;
    } while (((puVar6 == (uint *)0x0) ||
             (iVar2 = FUN_0071b970(puVar6,param_1), uVar3 = local_18, iVar2 == 0)) ||
            (puVar6[0x17] != 0));
    puVar6[0x17] = 1;
    puVar6[0x13] = 0;
    puVar6[0x14] = 0;
    if ((*puVar6 & 8) == 0) {
      if (*(int *)(this_00 + 0x60) != 0) {
        iVar2 = (**(code **)(**(int **)(this_00 + 0x1c) + 0x24))
                          (*(int **)(this_00 + 0x1c),0x100,local_1d8);
        if (iVar2 != 0) {
          RaiseInternalException(iVar2,DAT_007ed77c,s_E__Ourlib_Sinput_cpp_007f092c,0x222);
        }
        if (((local_1d8[(byte)puVar6[1]] & 0x80) == 0) ||
           ((*(byte *)((int)puVar6 + 5) != 0 &&
            ((local_1d8[*(byte *)((int)puVar6 + 5)] & 0x80) == 0)))) goto LAB_0071c71b;
        uVar3 = 1;
        goto LAB_0071c71d;
      }
    }
    else if ((*(int *)(this_00 + 0x60) != 0) && (*(int *)(this_00 + 100) != 0)) {
      iVar2 = (**(code **)(**(int **)(this_00 + 0x1c) + 0x24))
                        (*(int **)(this_00 + 0x1c),0x100,local_1d8);
      if (iVar2 != 0) {
        RaiseInternalException(iVar2,DAT_007ed77c,s_E__Ourlib_Sinput_cpp_007f092c,0x21b);
      }
      FUN_0071b630(this_00,&local_14,&local_1c,local_30);
      FUN_0071b760(puVar6[1],(byte)*puVar6,(int)local_1d8,(int)local_30,&local_10,&local_8);
      if ((local_10 == 0) || (local_8 == 0)) {
LAB_0071c71b:
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
LAB_0071c71d:
      puVar6[0x14] = uVar3;
    }
    uVar3 = local_18;
  } while ((*puVar6 & 2) == 0);
cf_common_exit_0071C735:
  FUN_006b0c70(*(int *)(this_00 + 0x24),local_c);
LAB_0071c742:
  if (*(int *)(*(byte **)(this_00 + 0x24) + 0xc) == 0) {
    FUN_006ae110(*(byte **)(this_00 + 0x24));
    *(undefined4 *)(this_00 + 0x24) = 0;
  }
  g_currentExceptionFrame = local_74.previous;
  return;
}

