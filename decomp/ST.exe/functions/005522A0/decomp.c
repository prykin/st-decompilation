
undefined4 FUN_005522a0(int param_1)

{
  undefined2 uVar1;
  char cVar2;
  int iVar3;
  LPSTR pCVar4;
  undefined3 extraout_var;
  byte *pbVar5;
  ushort *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar9;
  char *pcVar10;
  byte bVar11;
  int iVar12;
  code *pcVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  undefined4 local_68;
  undefined4 local_64 [16];
  undefined1 local_24;
  short sStack_23;
  uint uStack_21;
  undefined1 uStack_1d;
  undefined1 uStack_1c;
  char local_18;
  short sStack_17;
  uint uStack_15;
  undefined1 uStack_11;
  undefined1 uStack_10;
  int *local_c;
  int local_8;
  
  local_68 = DAT_00858df8;
  DAT_00858df8 = &local_68;
  iVar3 = __setjmp3(local_64,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_68;
    iVar8 = FUN_006ad4d0(s_E____titans_Andrey_tradecen_cpp_007c8624,0x175,0,iVar3,&DAT_007a4ccc);
    if (iVar8 == 0) {
      FUN_006a5e40(iVar3,0,0x7c8624,0x175);
      return 0xffff;
    }
    pcVar13 = (code *)swi(3);
    uVar7 = (*pcVar13)();
    return uVar7;
  }
  thunk_FUN_0053eb70(param_1);
  uVar9 = *(uint *)(param_1 + 0x10);
  if (uVar9 < 0xb203) {
    if (uVar9 == 0xb202) {
      iVar3 = *local_c;
      iVar8 = 0x2754;
LAB_00552481:
      uVar16 = 1;
      uVar7 = 0;
      pCVar4 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
      (**(code **)(iVar3 + 0x10))(param_1,pCVar4,iVar8,uVar7,uVar16);
      DAT_00858df8 = (undefined4 *)local_68;
      return 0;
    }
    if (uVar9 < 0xb200) {
      if (uVar9 == 0xb1ff) {
        uStack_11 = 0;
        local_18 = (*(char *)((int)local_c + 0x1bb) == '\0') + '\x01';
        uStack_10 = 0;
        bVar11 = *(byte *)(local_c + 0x74);
        sStack_17 = (bVar11 != 0) + 0xdd;
        uStack_15 = (uint)*(ushort *)((int)local_c + (uint)bVar11 * 2 + 0x1bc);
        if (*(char *)((int)local_c + 0x1bb) == '\0') {
          uVar1 = *(undefined2 *)((int)local_c + (uint)bVar11 * 8 + 0x1ad);
          uStack_11 = (undefined1)uVar1;
          uStack_10 = (undefined1)((ushort)uVar1 >> 8);
        }
        thunk_FUN_0054edf0((undefined4 *)0x20,(undefined4 *)&local_18,0,0xffffffff);
        if (*(char *)((int)local_c + 0x1bb) != '\0') {
          local_c[10] = 0xbfff;
          (**(code **)*local_c)(local_c + 6);
          DAT_00858df8 = (undefined4 *)local_68;
          return 0;
        }
      }
      else {
        if (uVar9 == 2) {
          thunk_FUN_00550db0();
          DAT_00858df8 = (undefined4 *)local_68;
          return 0;
        }
        if (uVar9 == 3) {
          thunk_FUN_005512f0();
          DAT_00858df8 = (undefined4 *)local_68;
          return 0;
        }
      }
    }
    else {
      if (uVar9 == 0xb200) {
        iVar3 = *local_c;
        iVar8 = (-(uint)(*(char *)((int)local_c + 0x1bb) != '\0') & 0xfffffffe) + 0x2753;
        goto LAB_00552481;
      }
      if (uVar9 == 0xb201) {
        bVar11 = *(byte *)(local_c + 0x74);
        sStack_23 = (bVar11 != 0) + 0xdd;
        local_24 = 3;
        uStack_21 = (uint)*(ushort *)((int)local_c + (uint)bVar11 * 2 + 0x1bc);
        uVar1 = *(undefined2 *)((int)local_c + (uint)bVar11 * 8 + 0x1b1);
        uStack_1d = (undefined1)uVar1;
        uStack_1c = (undefined1)((ushort)uVar1 >> 8);
        thunk_FUN_0054edf0((undefined4 *)0x20,(undefined4 *)&local_24,0,0xffffffff);
        DAT_00858df8 = (undefined4 *)local_68;
        return 0;
      }
    }
  }
  else if (uVar9 < 0xb20d) {
    if (uVar9 == 0xb20c) {
      *(undefined2 *)((int)local_c + (uint)*(byte *)(local_c + 0x74) * 2 + 0x1bc) =
           *(undefined2 *)(param_1 + 0x14);
      thunk_FUN_00551ec0();
      thunk_FUN_00551800(local_c);
      DAT_00858df8 = (undefined4 *)local_68;
      return 0;
    }
    if (uVar9 == 0xb20a) {
      *(char *)(local_c + 0x74) = **(char **)(param_1 + 0x14) + -1;
      thunk_FUN_00551b10(local_c);
      thunk_FUN_00551ba0();
      DAT_00858df8 = (undefined4 *)local_68;
      return 0;
    }
    if (uVar9 == 0xb20b) {
      local_8 = *(int *)(*(int *)(param_1 + 0x14) + 0xc) - local_c[0xf];
      iVar3 = DAT_00806734;
      if (local_c[0x17] != 0) {
        iVar3 = local_c[0x11];
      }
      puVar15 = (undefined4 *)0x0;
      iVar14 = 0;
      iVar12 = 1;
      bVar11 = 0;
      uVar9 = 0xffffffff;
      iVar3 = *(int *)(*(int *)(param_1 + 0x14) + 0x10) - iVar3;
      cVar2 = thunk_FUN_0052a7b0(param_1);
      uVar7 = CONCAT31(extraout_var,cVar2);
      iVar8 = 2;
      pCVar4 = thunk_FUN_00571240(s_BUT_RCTTYPE_007c87a8,0);
      pbVar5 = (byte *)FUN_006f2c00(pCVar4,iVar8,uVar7);
      puVar6 = FUN_00709af0(DAT_00806794,1,pbVar5,uVar9,bVar11,iVar12,iVar14,puVar15);
      thunk_FUN_00540760((undefined4 *)local_c[0x1a],local_8,iVar3,'\x01',(byte *)puVar6);
      if (*(int *)(*(int *)(param_1 + 0x14) + 4) == 3) {
        puVar15 = (undefined4 *)0x0;
        iVar12 = 0;
        iVar8 = 1;
        bVar11 = 0;
        uVar9 = 0xffffffff;
        pbVar5 = (byte *)thunk_FUN_00571240(s_BUT_RCTFTYPE_007c8798,0);
        puVar6 = FUN_00709af0(DAT_00806794,6,pbVar5,uVar9,bVar11,iVar8,iVar12,puVar15);
        thunk_FUN_00540760((undefined4 *)local_c[0x1a],local_8,iVar3,'\x06',(byte *)puVar6);
      }
      FUN_006b3640(DAT_008075a8,local_c[0x18],0xffffffff,local_c[0xf],local_c[0x11]);
      DAT_00858df8 = (undefined4 *)local_68;
      return 0;
    }
  }
  else {
    if (uVar9 == 0xc005) {
      iVar3 = *local_c;
      pcVar10 = s_BUT_TBUP_007c22d8;
    }
    else {
      if (uVar9 != 0xc006) {
        DAT_00858df8 = (undefined4 *)local_68;
        return 0;
      }
      iVar3 = *local_c;
      pcVar10 = s_BUT_TBDN_007c22f4;
    }
    uVar16 = 1;
    uVar7 = 0;
    pcVar13 = thunk_FUN_00529fe0;
    pCVar4 = thunk_FUN_00571240(pcVar10,0);
    (**(code **)(iVar3 + 8))(param_1,1,pCVar4,pcVar13,uVar7,uVar16);
  }
  DAT_00858df8 = (undefined4 *)local_68;
  return 0;
}

