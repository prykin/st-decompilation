
int FUN_006f13f0(byte param_1,char *param_2,byte *param_3,uint param_4,undefined4 *param_5,
                char param_6,uint *param_7)

{
  char cVar1;
  ushort uVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char *pcVar8;
  ushort *puVar9;
  CHAR local_1a4 [260];
  InternalExceptionFrame local_a0;
  InternalExceptionFrame local_5c;
  int *local_18;
  uint local_14;
  int local_10;
  byte *local_c;
  ushort *local_8;
  
  local_c = (byte *)0x0;
  local_8 = (ushort *)0x0;
  local_10 = 0;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  iVar5 = __setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    if (local_8 != (ushort *)0x0) {
      FUN_006ab060(&local_8);
    }
    if ((local_c != (byte *)0x0) && (local_10 != 0)) {
      FUN_006ab060(&local_c);
    }
    wsprintfA(local_1a4,s_cMf32__RecPut_File___s__Sect__s_N_007efafc,(int)local_18 + 0x231,
              s_M_ANY_007ef0a4 + (uint)param_1 * 10,param_2);
    iVar6 = ReportDebugMessage(s_E__Ourlib_Mf32int_cpp_007efaa4,0x106,0,iVar5,&DAT_007a4ccc,
                               local_1a4);
    if (iVar6 == 0) {
      RaiseInternalException(iVar5,0,s_E__Ourlib_Mf32int_cpp_007efaa4,0x108);
      return 0;
    }
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  if (((param_3 == (byte *)0x0) || (param_4 == 0)) || (param_2 == (char *)0x0)) {
    RaiseInternalException(-0x34,DAT_007ed77c,s_E__Ourlib_Mf32int_cpp_007efaa4,0xd2);
  }
  if (*param_2 == '\0') {
    RaiseInternalException(-0x34,DAT_007ed77c,s_E__Ourlib_Mf32int_cpp_007efaa4,0xd3);
  }
  if ((int)param_4 < 0x20) {
    param_6 = '\0';
  }
  if ((param_6 == '\x01') || (param_6 == '\x02')) {
    local_c = (byte *)FUN_006aac10(param_4);
    local_10 = 1;
    local_a0.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_a0;
    iVar5 = __setjmp3(local_a0.jumpBuffer,0,unaff_EDI,unaff_ESI);
    if (iVar5 == 0) {
      if (param_6 == '\x01') {
        local_14 = FUN_00751140(param_3,param_4,local_c,param_4);
        g_currentExceptionFrame = local_a0.previous;
      }
      else if (param_6 == '\x02') {
        local_14 = FUN_00751170(param_3,param_4,local_c,param_4);
        g_currentExceptionFrame = local_a0.previous;
      }
      else {
        g_currentExceptionFrame = local_a0.previous;
      }
    }
    else {
      g_currentExceptionFrame = local_a0.previous;
      if (local_c != (byte *)0x0) {
        FUN_006ab060(&local_c);
      }
      local_c = param_3;
      local_10 = 0;
      local_14 = param_4;
      param_6 = '\0';
    }
  }
  else {
    local_c = param_3;
    local_14 = param_4;
  }
  uVar4 = local_14;
  uVar7 = 0xffffffff;
  pcVar8 = param_2;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  local_8 = (ushort *)FUN_006aac10(~uVar7 + 0x17);
  *(byte *)local_8 = param_1;
  iVar5 = -1;
  pcVar8 = param_2;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  local_8[0xb] = ~(ushort)iVar5 - 1;
  uVar2 = local_8[0xb];
  puVar9 = local_8 + 0xc;
  for (uVar7 = (uint)(int)(short)uVar2 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)puVar9 = *(undefined4 *)param_2;
    param_2 = param_2 + 4;
    puVar9 = puVar9 + 2;
  }
  for (uVar7 = (int)(short)uVar2 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(char *)puVar9 = *param_2;
    param_2 = param_2 + 1;
    puVar9 = (ushort *)((int)puVar9 + 1);
  }
  FUN_00751100((uint *)*local_18,local_8);
  *(uint *)((int)local_8 + 1) = uVar4;
  *(char *)((int)local_8 + 5) = param_6;
  *(uint *)(local_8 + 3) = param_4;
  if (param_5 != (undefined4 *)0x0) {
    *(undefined4 *)(local_8 + 5) = *param_5;
    *(undefined4 *)(local_8 + 7) = param_5[1];
    *(undefined4 *)(local_8 + 9) = param_5[2];
  }
  uVar7 = FUN_00751050((uint *)*local_18,local_8,(undefined4 *)local_c,uVar4);
  if (param_7 != (uint *)0x0) {
    *param_7 = uVar4;
  }
  if (local_8 != (ushort *)0x0) {
    FUN_006ab060(&local_8);
  }
  if ((local_c != (byte *)0x0) && (local_10 != 0)) {
    FUN_006ab060(&local_c);
  }
  g_currentExceptionFrame = local_5c.previous;
  return *(int *)(*(int *)(*local_18 + 4) + 0x34) + uVar7;
}

