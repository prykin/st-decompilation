
void FUN_00504210(uint param_1)

{
  code *pcVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  ushort *puVar6;
  byte bVar7;
  undefined4 unaff_ESI;
  int *piVar8;
  int *piVar9;
  void *unaff_EDI;
  int *piVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  undefined4 *puVar14;
  int local_ac [17];
  undefined4 local_68;
  undefined4 local_64 [16];
  void *local_24;
  int *local_20;
  uint local_1c;
  int *local_18;
  undefined4 *local_14;
  undefined1 *local_10;
  int *local_c;
  byte local_5;
  
  if (0x3ff < DAT_00806730) {
    local_68 = DAT_00858df8;
    DAT_00858df8 = &local_68;
    iVar4 = __setjmp3(local_64,0,unaff_EDI,unaff_ESI);
    if (iVar4 == 0) {
      local_c = (int *)(param_1 & 0xff);
      piVar9 = (int *)((int)local_24 + (int)local_c * 0x42 + 0xc87);
      piVar8 = piVar9;
      piVar10 = local_ac;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar10 = *piVar8;
        piVar8 = piVar8 + 1;
        piVar10 = piVar10 + 1;
      }
      local_18 = piVar9;
      *(short *)piVar10 = (short)*piVar8;
      thunk_FUN_0043beb0(DAT_007fa174,CONCAT31((int3)(param_1 >> 8),(char)param_1 + '\x0e'),piVar9);
      piVar9 = local_c;
      local_1c = local_1c & 0xffffff00;
      bVar3 = ((DAT_00806730 != 0x400) - 1U & 0xfc) + 6;
      local_5 = bVar3;
      if (bVar3 != 0) {
        local_20 = local_ac;
        local_c = local_18;
        local_10 = (undefined1 *)((int)local_24 + (int)piVar9 * 6 + 0xd3b);
        local_14 = (undefined4 *)((int)local_24 + (int)piVar9 * 0x18 + 0xd53);
        do {
          iVar4 = 0xb;
          bVar11 = true;
          piVar9 = local_20;
          piVar8 = local_c;
          do {
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            bVar11 = (char)*piVar9 == (char)*piVar8;
            piVar9 = (int *)((int)piVar9 + 1);
            piVar8 = (int *)((int)piVar8 + 1);
          } while (bVar11);
          if ((!bVar11) && (local_10[0xc] == '\x01')) {
            puVar14 = (undefined4 *)0x0;
            iVar13 = 0;
            iVar4 = 1;
            bVar3 = 0;
            uVar12 = 6;
            pbVar5 = (byte *)thunk_FUN_004f1d20((undefined1 *)local_c);
            puVar6 = FUN_00709af0(DAT_00806794,0x1f,pbVar5,uVar12,bVar3,iVar4,iVar13,puVar14);
            local_14[-0x12] = puVar6;
            *local_10 = 0;
            *local_14 = *(undefined4 *)((int)local_24 + 0x38);
            thunk_FUN_004f1c80(local_24,param_1,local_1c);
            bVar7 = ((char)param_1 == '\0') + 9;
            local_18 = (int *)CONCAT31(local_18._1_3_,bVar7);
            bVar3 = local_5;
            if (bVar7 < 0xb) {
              uVar2 = (uint)bVar7;
              uVar12 = *(uint *)((int)local_24 + uVar2 * 4 + 0x148);
              if (-1 < (int)uVar12) {
                FUN_006b3640(DAT_008075a8,uVar12,0xffffffff,
                             *(uint *)((int)local_24 + uVar2 * 4 + 0x3c),
                             *(uint *)((int)local_24 + uVar2 * 4 + 0x94));
                bVar3 = local_5;
              }
            }
          }
          bVar7 = (char)local_1c + 1;
          local_14 = local_14 + 1;
          local_20 = (int *)((int)local_20 + 0xb);
          local_c = (int *)((int)local_c + 0xb);
          local_1c = CONCAT31(local_1c._1_3_,bVar7);
          local_10 = local_10 + 1;
        } while (bVar7 < bVar3);
      }
      DAT_00858df8 = (undefined4 *)local_68;
      return;
    }
    DAT_00858df8 = (undefined4 *)local_68;
    iVar13 = FUN_006ad4d0(s_E____titans_Andrey_cpanel3_cpp_007c26a0,0x2a,0,iVar4,&DAT_007a4ccc);
    if (iVar13 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar4,0,0x7c26a0,0x2a);
  }
  return;
}

