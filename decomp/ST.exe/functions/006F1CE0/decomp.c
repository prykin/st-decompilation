
ushort * FUN_006f1ce0(byte param_1,char *param_2,int *param_3,int param_4)

{
  char cVar1;
  code *pcVar2;
  int errorCode;
  DWORD DVar3;
  ushort *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char *pcVar7;
  ushort *puVar8;
  CHAR local_37c [260];
  byte local_278;
  uint local_277;
  uint local_273;
  undefined1 uStack_26f;
  short local_262;
  char local_260 [516];
  InternalExceptionFrame local_5c;
  int *local_18;
  int local_14;
  int local_10;
  ushort *local_c;
  ushort *local_8;
  
  local_c = (ushort *)0x0;
  local_8 = (ushort *)0x0;
  local_10 = 0;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  errorCode = __setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  iVar5 = local_10;
  if (errorCode != 0) {
    g_currentExceptionFrame = local_5c.previous;
    if ((local_8 != (ushort *)0x0) && (local_10 != 0)) {
      FUN_006ab060(&local_8);
    }
    if ((param_3 != (int *)0x0) && (iVar5 != 0)) {
      *param_3 = 0;
    }
    if (((*(uint *)(*(int *)(*local_18 + 4) + 8) & 0x100000) != 0) && (local_c != (ushort *)0x0)) {
      FUN_006ab060(&local_c);
    }
    if ((param_4 != 0) || (errorCode != -4)) {
      wsprintfA(local_37c,s_cMf32__RecGet_File___s__Sect__s_N_007efbb4,(int)local_18 + 0x231,
                s_M_ANY_007ef0a4 + (uint)param_1 * 10,param_2);
      iVar5 = ReportDebugMessage(s_E__Ourlib_Mf32int_cpp_007efaa4,0x221,0,errorCode,&DAT_007a4ccc,
                                 local_37c);
      if (iVar5 != 0) {
        pcVar2 = (code *)swi(3);
        puVar4 = (ushort *)(*pcVar2)();
        return puVar4;
      }
      RaiseInternalException(errorCode,0,s_E__Ourlib_Mf32int_cpp_007efaa4,0x223);
    }
    return (ushort *)0x0;
  }
  local_278 = param_1;
  iVar5 = -1;
  pcVar7 = param_2;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  local_262 = ~(ushort)iVar5 - 1;
  pcVar7 = local_260;
  for (uVar6 = (uint)(int)local_262 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)param_2;
    param_2 = param_2 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar6 = (int)local_262 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar7 = *param_2;
    param_2 = param_2 + 1;
    pcVar7 = pcVar7 + 1;
  }
  DVar3 = FUN_00751980((int *)*local_18,(ushort *)&local_278,(undefined4 *)0x0,0);
  if (DVar3 == 0xfffffffc) {
    RaiseInternalException(-4,DAT_007ed77c,s_E__Ourlib_Mf32int_cpp_007efaa4,0x1db);
  }
  if ((*(uint *)(*(int *)(*local_18 + 4) + 8) & 0x100000) == 0) {
    local_c = (ushort *)FUN_006f1cb0(local_18,DVar3);
    if (((char)local_273 != '\x01') && ((char)local_273 != '\x02')) {
      if (param_3 == (int *)0x0) {
        g_currentExceptionFrame = local_5c.previous;
        return local_c;
      }
      puVar4 = (ushort *)*param_3;
      if (puVar4 == (ushort *)0x0) {
        puVar4 = (ushort *)FUN_006aac10(local_277);
        *param_3 = (int)puVar4;
      }
      puVar8 = puVar4;
      for (uVar6 = local_277 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)puVar8 = *(undefined4 *)local_c;
        local_c = local_c + 2;
        puVar8 = puVar8 + 2;
      }
      for (local_277 = local_277 & 3; local_277 != 0; local_277 = local_277 - 1) {
        *(char *)puVar8 = (char)*local_c;
        local_c = (ushort *)((int)local_c + 1);
        puVar8 = (ushort *)((int)puVar8 + 1);
      }
      g_currentExceptionFrame = local_5c.previous;
      return puVar4;
    }
    if (param_3 == (int *)0x0) {
      puVar4 = (ushort *)FUN_006aac10(CONCAT13(uStack_26f,local_273._1_3_));
      local_10 = 1;
    }
    else {
      puVar4 = (ushort *)*param_3;
      if ((ushort *)*param_3 == (ushort *)0x0) {
        puVar4 = (ushort *)FUN_006aac10(CONCAT13(uStack_26f,local_273._1_3_));
        local_10 = 1;
        *param_3 = (int)puVar4;
      }
    }
    local_8 = puVar4;
    if ((local_273 & 0xff) == 1) {
      local_14 = FUN_007519d0(local_c,(byte *)local_8);
    }
    else if ((local_273 & 0xff) == 2) {
      local_14 = FUN_007516f0((int)local_c,(byte *)local_8);
    }
    if (local_14 == CONCAT13(uStack_26f,local_273._1_3_)) {
      g_currentExceptionFrame = local_5c.previous;
      return local_8;
    }
    iVar5 = 0x1ec;
  }
  else {
    if (((char)local_273 != '\x01') && ((char)local_273 != '\x02')) {
      if (param_3 == (int *)0x0) {
        puVar4 = (ushort *)FUN_006aac10(local_277);
        local_10 = 1;
      }
      else {
        puVar4 = (ushort *)*param_3;
        if ((ushort *)*param_3 == (ushort *)0x0) {
          puVar4 = (ushort *)FUN_006aac10(local_277);
          local_10 = 1;
          *param_3 = (int)puVar4;
        }
      }
      local_8 = puVar4;
      FUN_00751980((int *)*local_18,(ushort *)&local_278,(undefined4 *)local_8,local_277);
      g_currentExceptionFrame = local_5c.previous;
      return local_8;
    }
    local_c = (ushort *)FUN_006aac10(local_277);
    FUN_00751980((int *)*local_18,(ushort *)&local_278,(undefined4 *)local_c,local_277);
    if (param_3 == (int *)0x0) {
      puVar4 = (ushort *)FUN_006aac10(CONCAT13(uStack_26f,local_273._1_3_));
      local_10 = 1;
    }
    else {
      puVar4 = (ushort *)*param_3;
      if ((ushort *)*param_3 == (ushort *)0x0) {
        puVar4 = (ushort *)FUN_006aac10(CONCAT13(uStack_26f,local_273._1_3_));
        local_10 = 1;
        *param_3 = (int)puVar4;
      }
    }
    local_8 = puVar4;
    if ((local_273 & 0xff) == 1) {
      local_14 = FUN_007519d0(local_c,(byte *)local_8);
    }
    else if ((local_273 & 0xff) == 2) {
      local_14 = FUN_007516f0((int)local_c,(byte *)local_8);
    }
    if (local_c != (ushort *)0x0) {
      FUN_006ab060(&local_c);
    }
    if (local_14 == CONCAT13(uStack_26f,local_273._1_3_)) {
      g_currentExceptionFrame = local_5c.previous;
      return local_8;
    }
    iVar5 = 0x20a;
  }
  RaiseInternalException(-0x33,DAT_007ed77c,s_E__Ourlib_Mf32int_cpp_007efaa4,iVar5);
  g_currentExceptionFrame = local_5c.previous;
  return local_8;
}

