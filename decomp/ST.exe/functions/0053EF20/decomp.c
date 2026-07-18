
void FUN_0053ef20(UINT param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,
                 int param_12,int param_13,undefined4 param_14)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  ushort *puVar5;
  uint *puVar6;
  LPSTR pCVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar9;
  byte bVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined4 local_58;
  undefined4 local_54 [16];
  int local_14;
  int local_10;
  undefined4 *local_c;
  int local_8;
  
  local_58 = DAT_00858df8;
  DAT_00858df8 = &local_58;
  iVar2 = __setjmp3(local_54,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    puVar3 = FUN_0070df00(0x19d,*(int *)(DAT_00802a28 + 0x28));
    puVar12 = (undefined4 *)0x0;
    iVar11 = 0;
    iVar2 = 1;
    bVar10 = 0;
    uVar9 = 0xffffffff;
    *(undefined4 **)(local_14 + 0x17c) = puVar3;
    puVar3[0x16] = 0;
    puVar3[0x17] = 0;
    pbVar4 = (byte *)thunk_FUN_00571240(s_FRAMES_007c205c,0);
    puVar5 = FUN_00709af0(DAT_00806794,0xb,pbVar4,uVar9,bVar10,iVar2,iVar11,puVar12);
    *(ushort **)(local_14 + 400) = puVar5;
    iVar2 = *(int *)(local_14 + 0x68);
    uVar9 = *(uint *)(iVar2 + 0x14);
    if (uVar9 == 0) {
      uVar9 = ((uint)*(ushort *)(iVar2 + 0xe) * *(int *)(iVar2 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar2 + 8);
    }
    puVar3 = (undefined4 *)FUN_006b4fa0(iVar2);
    for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar3 = 0xffffffff;
      puVar3 = puVar3 + 1;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar3 = 0xff;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    thunk_FUN_00540760(*(undefined4 **)(local_14 + 0x68),0,0,'\x01',*(byte **)(local_14 + 0x184));
    FUN_00710a90(*(int *)(local_14 + 0x68),0,param_2,param_3,param_4,param_5);
    uVar13 = 0;
    iVar11 = -1;
    iVar2 = -2;
    puVar6 = (uint *)FUN_006b0140(param_1,DAT_00807618);
    FUN_007119c0(puVar6,iVar2,iVar11,uVar13);
    pCVar7 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
    uVar13 = thunk_FUN_00538690(0,1,param_6,param_7,0,1,1,pCVar7,0xbfff,0xc000,0,0,0,(char *)0x0,0);
    *(undefined4 *)(local_14 + 0x180) = uVar13;
    iVar2 = thunk_FUN_0053f940(param_8,param_10,param_9,param_10,0xc0a4,0,0,0);
    local_c = (undefined4 *)(local_14 + 0x1a1);
    *(int *)(local_14 + 0x19d) = iVar2;
    iVar2 = 0xc09f;
    local_8 = param_11;
    local_14 = local_14 + 0x1b5;
    local_10 = 5;
    do {
      uVar13 = thunk_FUN_00538690(1,0,local_8,param_12,0,1,1,param_14,iVar2,iVar2 + 0x10,1,0,
                                  local_14,(char *)0x0,0);
      local_14 = local_14 + 0x27;
      iVar2 = iVar2 + 1;
      *local_c = uVar13;
      local_8 = local_8 + param_13;
      local_c = local_c + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
    DAT_00858df8 = (undefined4 *)local_58;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_58;
  iVar11 = FUN_006ad4d0(s_E____titans_Andrey_specpan_cpp_007c7870,0x193,0,iVar2,&DAT_007a4ccc);
  if (iVar11 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7c7870,0x193);
  return;
}

