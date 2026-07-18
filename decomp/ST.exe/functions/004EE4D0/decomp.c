
undefined4 FUN_004ee4d0(int param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  LPSTR pCVar5;
  uint uVar6;
  undefined4 extraout_EDX;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_70;
  undefined4 local_6c [16];
  char local_2c [29];
  uint local_f;
  int *local_8;
  
  local_70 = DAT_00858df8;
  DAT_00858df8 = &local_70;
  iVar3 = __setjmp3(local_6c,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_70;
    iVar7 = FUN_006ad4d0(s_E____titans_Andrey_behpanel_cpp_007c1694,0xf3,0,iVar3,&DAT_007a4ccc);
    if (iVar7 != 0) {
      pcVar1 = (code *)swi(3);
      uVar9 = (*pcVar1)();
      return uVar9;
    }
    FUN_006a5e40(iVar3,0,0x7c1694,0xf3);
    return 0xffff;
  }
  thunk_FUN_0053eb70(param_1);
  uVar6 = *(uint *)(param_1 + 0x10);
  if (uVar6 < 0xb20f) {
    if (uVar6 == 0xb20e) {
      iVar3 = *local_8;
      uVar10 = 1;
      uVar9 = 0;
      puVar8 = &LAB_0040420f;
      iVar7 = 0;
      pcVar4 = thunk_FUN_00529590(*(undefined1 *)
                                   (*(ushort *)(param_1 + 0x16) + 0x1af + (int)local_8),
                                  *(int *)((int)local_8 + 0x1ab));
      pCVar5 = thunk_FUN_00571240(pcVar4,iVar7);
      (**(code **)(iVar3 + 8))(param_1,6,pCVar5,puVar8,uVar9,uVar10);
      DAT_00858df8 = (undefined4 *)local_70;
      return 0;
    }
    if (0xb1ff < uVar6) {
      if (uVar6 != 0xb200) {
        DAT_00858df8 = (undefined4 *)local_70;
        return 0;
      }
      iVar3 = *local_8;
      uVar10 = 1;
      uVar9 = 0;
      puVar8 = &LAB_0040420f;
      iVar7 = 0;
      pcVar4 = thunk_FUN_00529590(*(undefined1 *)
                                   (*(ushort *)(param_1 + 0x16) + 0x1af + (int)local_8),
                                  *(int *)((int)local_8 + 0x1ab));
      pCVar5 = thunk_FUN_00571240(pcVar4,iVar7);
      (**(code **)(iVar3 + 8))(param_1,1,pCVar5,puVar8,uVar9,uVar10);
      DAT_00858df8 = (undefined4 *)local_70;
      return 0;
    }
    if (uVar6 == 0xb1ff) {
      if (*(short *)((int)local_8 + 0x172) != 1) {
        DAT_00858df8 = (undefined4 *)local_70;
        return 0;
      }
      thunk_FUN_005252c0(0xae);
      thunk_FUN_0054b630(DAT_00802a30,
                         (uint)*(byte *)(*(int *)(param_1 + 0x14) + 0x1af + (int)local_8),0);
      local_8[10] = 0xbfff;
      (**(code **)*local_8)(local_8 + 6);
      DAT_00858df8 = (undefined4 *)local_70;
      return 0;
    }
    if (uVar6 != 2) {
      if (uVar6 != 3) {
        DAT_00858df8 = (undefined4 *)local_70;
        return 0;
      }
      thunk_FUN_004eddf0();
      DAT_00858df8 = (undefined4 *)local_70;
      return 0;
    }
    thunk_FUN_004ed630();
    DAT_00858df8 = (undefined4 *)local_70;
    return 0;
  }
  switch(uVar6) {
  case 0xc09f:
  case 0xc0a0:
  case 0xc0a1:
    if (*(short *)((int)local_8 + 0x172) != 1) {
      DAT_00858df8 = (undefined4 *)local_70;
      return 0;
    }
    thunk_FUN_005252c0(0xae);
    iVar3 = *(int *)(param_1 + 0x10);
    pcVar4 = local_2c;
    for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
      pcVar4[0] = '\0';
      pcVar4[1] = '\0';
      pcVar4[2] = '\0';
      pcVar4[3] = '\0';
      pcVar4 = pcVar4 + 4;
    }
    *pcVar4 = '\0';
    if (iVar3 == 0xc09f) {
      local_2c[0] = '\x15';
      cVar2 = *(char *)((int)local_8 + 0x1bb);
    }
    else {
      local_2c[0] = (iVar3 != 0xc0a0) + '\x16';
      if (iVar3 == 0xc0a0) {
        cVar2 = (char)local_8[0x6f];
      }
      else {
        cVar2 = *(char *)((int)local_8 + 0x1bd);
      }
    }
    local_f = (uint)(cVar2 == '\x03');
    thunk_FUN_0054edf0((undefined4 *)0x17,(undefined4 *)local_2c,0,0xffffffff);
    DAT_00858df8 = (undefined4 *)local_70;
    return 0;
  default:
    goto switchD_004ee68c_caseD_c0a2;
  case 0xc0af:
    uVar6 = CONCAT31((int3)(uVar6 - 0xc09f >> 8),*(char *)((int)local_8 + 0x1bb) == '\x03');
    pcVar4 = s_BUT_BLOCK_007c17a8;
    break;
  case 0xc0b0:
    uVar6 = (uint)((char)local_8[0x6f] == '\x03');
    pcVar4 = s_BUT_BHOLD_007c16e8;
    break;
  case 0xc0b1:
    uVar6 = CONCAT31((int3)((uint)extraout_EDX >> 8),*(char *)((int)local_8 + 0x1bd) == '\x03');
    pcVar4 = s_BUT_BAGR_007c16dc;
  }
  pCVar5 = thunk_FUN_00571240(pcVar4,0);
  thunk_FUN_004ee350(local_8,param_1,pCVar5,uVar6);
switchD_004ee68c_caseD_c0a2:
  DAT_00858df8 = (undefined4 *)local_70;
  return 0;
}

