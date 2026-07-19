
int FUN_00755a80(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  int iVar8;
  void *unaff_EDI;
  InternalExceptionFrame local_60;
  int local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  uVar7 = 0;
  local_10 = param_1;
  local_c = 0;
  local_8 = -1;
  if (param_2 == 0) goto LAB_00755b92;
  param_2 = param_2 + 7 & 0xfffffffc;
  if (param_2 < 8) {
    param_2 = 8;
  }
  iVar5 = *(int *)(param_1 + 0x34);
  uVar2 = *(uint *)(iVar5 + 0xc);
  puVar3 = (uint *)(iVar5 + 8);
  while ((puVar6 = (uint *)(uVar2 + iVar5), puVar6 != (uint *)0x0 &&
         (uVar7 = *puVar6, uVar7 < param_2))) {
    puVar3 = puVar6;
    uVar2 = puVar6[1];
  }
  if (puVar6 == (uint *)0x0) {
    iVar5 = -2;
LAB_00755b8f:
    local_8 = -1;
    local_c = iVar5;
  }
  else {
    iVar8 = (int)puVar6 - iVar5;
    if (param_2 < uVar7 - 8) {
      local_14 = (int)puVar3 - iVar5;
      local_1c = uVar7 - param_2;
      local_18 = puVar6[1];
      local_60.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_60;
      local_8 = iVar8;
      iVar5 = __setjmp3(local_60.jumpBuffer,0,unaff_EDI,unaff_ESI);
      iVar8 = local_8;
      iVar4 = local_10;
      if (iVar5 != 0) {
        g_currentExceptionFrame = local_60.previous;
        goto LAB_00755b8f;
      }
      FUN_006d4860(local_10,local_8 + param_2,&local_1c,8);
      g_currentExceptionFrame = local_60.previous;
      puVar6 = (uint *)(*(int *)(iVar4 + 0x34) + iVar8);
      piVar1 = (int *)(*(int *)(iVar4 + 0x34) + 4 + local_14);
      *piVar1 = *piVar1 + param_2;
      *puVar6 = param_2;
    }
    else {
      puVar3[1] = puVar6[1];
    }
    local_8 = iVar8 + 4;
    *puVar6 = *puVar6 | 1;
  }
LAB_00755b92:
  iVar5 = local_8;
  if (local_c != 0) {
    RaiseInternalException(local_c,DAT_007ed77c,s_E__DKW_FMM_C_fmemallo_c_007f2d20,0x60);
  }
  return iVar5;
}

