
ushort * FUN_006f1ce0(byte param_1,char *param_2,int *param_3,int param_4)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  DWORD DVar4;
  ushort *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char *pcVar8;
  ushort *puVar9;
  undefined4 uVar10;
  CHAR local_37c [260];
  byte local_278;
  uint local_277;
  uint local_273;
  undefined1 uStack_26f;
  short local_262;
  char local_260 [516];
  undefined4 *local_5c;
  undefined4 local_58 [16];
  int *local_18;
  int local_14;
  int local_10;
  ushort *local_c;
  ushort *local_8;
  
  local_c = (ushort *)0x0;
  local_8 = (ushort *)0x0;
  local_10 = 0;
  local_5c = DAT_00858df8;
  DAT_00858df8 = &local_5c;
  iVar3 = __setjmp3(local_58,0,unaff_EDI,unaff_ESI);
  iVar6 = local_10;
  if (iVar3 != 0) {
    DAT_00858df8 = local_5c;
    if ((local_8 != (ushort *)0x0) && (local_10 != 0)) {
      FUN_006ab060(&local_8);
    }
    if ((param_3 != (int *)0x0) && (iVar6 != 0)) {
      *param_3 = 0;
    }
    if (((*(uint *)(*(int *)(*local_18 + 4) + 8) & 0x100000) != 0) && (local_c != (ushort *)0x0)) {
      FUN_006ab060(&local_c);
    }
    if ((param_4 != 0) || (iVar3 != -4)) {
      wsprintfA(local_37c,s_cMf32__RecGet_File___s__Sect__s_N_007efbb4,(int)local_18 + 0x231,
                s_M_ANY_007ef0a4 + (uint)param_1 * 10,param_2);
      iVar6 = FUN_006ad4d0(s_E__Ourlib_Mf32int_cpp_007efaa4,0x221,0,iVar3,&DAT_007a4ccc);
      if (iVar6 != 0) {
        pcVar2 = (code *)swi(3);
        puVar5 = (ushort *)(*pcVar2)();
        return puVar5;
      }
      FUN_006a5e40(iVar3,0,0x7efaa4,0x223);
    }
    return (ushort *)0x0;
  }
  local_278 = param_1;
  iVar6 = -1;
  pcVar8 = param_2;
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  local_262 = ~(ushort)iVar6 - 1;
  pcVar8 = local_260;
  for (uVar7 = (uint)(int)local_262 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)param_2;
    param_2 = param_2 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar7 = (int)local_262 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar8 = *param_2;
    param_2 = param_2 + 1;
    pcVar8 = pcVar8 + 1;
  }
  DVar4 = FUN_00751980((int *)*local_18,(ushort *)&local_278,(undefined4 *)0x0,0);
  if (DVar4 == 0xfffffffc) {
    FUN_006a5e40(-4,DAT_007ed77c,0x7efaa4,0x1db);
  }
  if ((*(uint *)(*(int *)(*local_18 + 4) + 8) & 0x100000) == 0) {
    local_c = (ushort *)FUN_006f1cb0(local_18,DVar4);
    if (((char)local_273 != '\x01') && ((char)local_273 != '\x02')) {
      if (param_3 == (int *)0x0) {
        DAT_00858df8 = local_5c;
        return local_c;
      }
      puVar5 = (ushort *)*param_3;
      if (puVar5 == (ushort *)0x0) {
        puVar5 = (ushort *)FUN_006aac10(local_277);
        *param_3 = (int)puVar5;
      }
      puVar9 = puVar5;
      for (uVar7 = local_277 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)puVar9 = *(undefined4 *)local_c;
        local_c = local_c + 2;
        puVar9 = puVar9 + 2;
      }
      for (local_277 = local_277 & 3; local_277 != 0; local_277 = local_277 - 1) {
        *(char *)puVar9 = (char)*local_c;
        local_c = (ushort *)((int)local_c + 1);
        puVar9 = (ushort *)((int)puVar9 + 1);
      }
      DAT_00858df8 = local_5c;
      return puVar5;
    }
    if (param_3 == (int *)0x0) {
      puVar5 = (ushort *)FUN_006aac10(CONCAT13(uStack_26f,local_273._1_3_));
      local_10 = 1;
    }
    else {
      puVar5 = (ushort *)*param_3;
      if ((ushort *)*param_3 == (ushort *)0x0) {
        puVar5 = (ushort *)FUN_006aac10(CONCAT13(uStack_26f,local_273._1_3_));
        local_10 = 1;
        *param_3 = (int)puVar5;
      }
    }
    local_8 = puVar5;
    if ((local_273 & 0xff) == 1) {
      local_14 = FUN_007519d0(local_c,(byte *)local_8);
    }
    else if ((local_273 & 0xff) == 2) {
      local_14 = FUN_007516f0((int)local_c,(byte *)local_8);
    }
    if (local_14 == CONCAT13(uStack_26f,local_273._1_3_)) {
      DAT_00858df8 = local_5c;
      return local_8;
    }
    uVar10 = 0x1ec;
  }
  else {
    if (((char)local_273 != '\x01') && ((char)local_273 != '\x02')) {
      if (param_3 == (int *)0x0) {
        puVar5 = (ushort *)FUN_006aac10(local_277);
        local_10 = 1;
      }
      else {
        puVar5 = (ushort *)*param_3;
        if ((ushort *)*param_3 == (ushort *)0x0) {
          puVar5 = (ushort *)FUN_006aac10(local_277);
          local_10 = 1;
          *param_3 = (int)puVar5;
        }
      }
      local_8 = puVar5;
      FUN_00751980((int *)*local_18,(ushort *)&local_278,(undefined4 *)local_8,local_277);
      DAT_00858df8 = local_5c;
      return local_8;
    }
    local_c = (ushort *)FUN_006aac10(local_277);
    FUN_00751980((int *)*local_18,(ushort *)&local_278,(undefined4 *)local_c,local_277);
    if (param_3 == (int *)0x0) {
      puVar5 = (ushort *)FUN_006aac10(CONCAT13(uStack_26f,local_273._1_3_));
      local_10 = 1;
    }
    else {
      puVar5 = (ushort *)*param_3;
      if ((ushort *)*param_3 == (ushort *)0x0) {
        puVar5 = (ushort *)FUN_006aac10(CONCAT13(uStack_26f,local_273._1_3_));
        local_10 = 1;
        *param_3 = (int)puVar5;
      }
    }
    local_8 = puVar5;
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
      DAT_00858df8 = local_5c;
      return local_8;
    }
    uVar10 = 0x20a;
  }
  FUN_006a5e40(-0x33,DAT_007ed77c,0x7efaa4,uVar10);
  DAT_00858df8 = local_5c;
  return local_8;
}

