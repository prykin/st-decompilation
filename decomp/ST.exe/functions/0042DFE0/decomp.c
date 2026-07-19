
uint FUN_0042dfe0(undefined4 *param_1,uint *param_2)

{
  int iVar1;
  code *pcVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 extraout_ECX;
  undefined4 unaff_EBX;
  undefined4 *puVar8;
  uint *local_10;
  int local_c;
  byte *local_8;
  
  puVar3 = param_2;
  local_c = 0xffff;
  local_10 = (uint *)0xffff;
  local_8 = (byte *)0x0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  if (param_2 != (uint *)0x0) {
    *param_2 = 0;
  }
  uVar5 = (uint)DAT_0080874d;
  iVar4 = uVar5 * 0xa62;
  if (*(int *)((int)&DAT_007f5023 + iVar4) == 0) {
    if (*(uint *)((int)&DAT_007f4f87 + iVar4) == uVar5) {
      if (*(int *)((int)&DAT_007f4f83 + iVar4) == 0x3c) {
        local_10 = (uint *)thunk_FUN_0042d770(CONCAT31((int3)((uint)unaff_EBX >> 8),DAT_0080874d),
                                              (int *)&local_8);
        local_c = 0;
        if ((short)local_10 == 0x7fff) {
          uVar5 = *(int *)(local_8 + 0xc) * *(int *)(local_8 + 8);
          if (puVar3 != (uint *)0x0) {
            *puVar3 = uVar5;
          }
          if (param_1 != (undefined4 *)0x0) {
            puVar7 = (undefined4 *)FUN_006aac70(uVar5);
            *param_1 = puVar7;
            puVar8 = *(undefined4 **)(local_8 + 0x1c);
            for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
              *puVar7 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar7 = puVar7 + 1;
            }
            for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(undefined1 *)puVar7 = *(undefined1 *)puVar8;
              puVar8 = (undefined4 *)((int)puVar8 + 1);
              puVar7 = (undefined4 *)((int)puVar7 + 1);
            }
          }
        }
        FUN_006ae110(local_8);
      }
      else if (*(int *)((int)&DAT_007f4f83 + iVar4) == 0x1ae) {
        local_c = 2;
        local_10 = (uint *)(uint)(ushort)(&DAT_007f4f8b)[uVar5 * 0x531];
      }
    }
  }
  else if (*(int *)((int)&DAT_007f5023 + iVar4) == 1) {
    if ((*(uint *)((int)&DAT_007f4fd7 + iVar4) == uVar5) &&
       (*(int *)((int)&DAT_007f4fd3 + iVar4) == 0x19a)) {
      iVar4 = *(int *)((int)&DAT_007f4fdd + iVar4);
      uVar5 = 0;
      iVar1 = *(int *)(iVar4 + 0xc);
      if (0 < iVar1) {
        do {
          FUN_006acc70(iVar4,uVar5,&param_2);
          if (((short)param_2 != -1) &&
             (uVar6 = thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX >> 8),DAT_0080874d),
                                         (uint)param_2,1), (*(byte *)(uVar6 + 0x1d1) & 4) == 0)) {
            local_c = 1;
            local_10 = param_2;
            break;
          }
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < iVar1);
      }
    }
  }
  else {
    iVar4 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x58f,0,0,&DAT_007a4ccc,
                               s_STAllPlayersC__PrepareToCmd_inva_007a6550);
    if (iVar4 != 0) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
  }
  return local_c << 0x10 | (uint)local_10 & 0xffff;
}

