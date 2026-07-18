
uint * FUN_007129d0(uint *param_1,uint *param_2)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  uint *puVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char *pcVar10;
  char *pcVar11;
  undefined4 local_68;
  undefined4 local_64 [16];
  char local_24 [12];
  void *local_18;
  char *local_14;
  int local_10;
  uint *local_c;
  char *local_8;
  
  uVar9 = 0;
  local_c = (uint *)0x0;
  local_8 = (char *)0x0;
  local_10 = -1;
  local_68 = DAT_00858df8;
  DAT_00858df8 = &local_68;
  iVar3 = __setjmp3(local_64,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_68;
    iVar6 = FUN_006ad4d0(s_E__Ourlib_mfcfnt_cpp_007f0190,0x857,0,iVar3,&DAT_007a4ccc);
    if (iVar6 != 0) {
      pcVar2 = (code *)swi(3);
      puVar4 = (uint *)(*pcVar2)();
      return puVar4;
    }
    if (local_8 != (char *)0x0) {
      FUN_006ab060(&local_8);
    }
    if ((local_c != (uint *)0x0) && (local_c != param_1)) {
      FUN_006b5570((byte *)local_c);
    }
    FUN_006a5e40(iVar3,0,0x7f0190,0x85c);
    return (uint *)0x0;
  }
  if ((param_2 == (uint *)0x0) || (param_2[2] == 0)) {
    FUN_006a5e40(-0x34,DAT_007ed77c,0x7f0190,0x83b);
  }
  puVar4 = param_1;
  if (param_1 == (uint *)0x0) {
    puVar4 = FUN_006b54f0((uint *)0x0,0x14,0x14);
  }
  uVar7 = param_2[2];
  local_c = puVar4;
  if (0 < (int)uVar7) {
    if ((int)uVar7 < 1) {
      local_14 = (char *)0x0;
      goto LAB_00712a6e;
    }
    do {
      local_14 = *(char **)(param_2[5] + uVar9 * 4);
LAB_00712a6e:
      pcVar5 = local_14;
      if (local_14 != (char *)0x0) {
        if (0 < (int)uVar9) {
          if ((int)(uVar9 - 1) < (int)uVar7) {
            iVar3 = *(int *)((param_2[5] - 4) + uVar9 * 4);
          }
          else {
            iVar3 = 0;
          }
          if (iVar3 != 0) {
            if ((int)(uVar9 - 1) < (int)uVar7) {
              puVar4 = *(uint **)((param_2[5] - 4) + uVar9 * 4);
            }
            else {
              puVar4 = (uint *)0x0;
            }
            local_10 = FUN_007112e0(local_18,puVar4);
          }
        }
        if (local_10 < 1) {
          if (param_2 != param_1) {
            FUN_006b6020((int)local_c,uVar9,pcVar5);
          }
        }
        else {
          uVar7 = 0xffffffff;
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          local_8 = (char *)FUN_006aac10(~uVar7 + 3);
          uVar7 = 0xffffffff;
          pcVar5 = (char *)((int)local_18 + 0x9e);
          do {
            pcVar11 = pcVar5;
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            pcVar11 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar11;
          } while (cVar1 != '\0');
          uVar7 = ~uVar7;
          pcVar5 = pcVar11 + -uVar7;
          pcVar11 = local_8;
          for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            pcVar11 = pcVar11 + 4;
          }
          for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *pcVar11 = *pcVar5;
            pcVar5 = pcVar5 + 1;
            pcVar11 = pcVar11 + 1;
          }
          pcVar5 = __itoa(local_10,local_24,0x10);
          uVar7 = 0xffffffff;
          do {
            pcVar11 = pcVar5;
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            pcVar11 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar11;
          } while (cVar1 != '\0');
          uVar7 = ~uVar7;
          iVar3 = -1;
          pcVar5 = local_8;
          do {
            pcVar10 = pcVar5;
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            pcVar10 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar10;
          } while (cVar1 != '\0');
          pcVar5 = pcVar11 + -uVar7;
          pcVar11 = pcVar10 + -1;
          for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            pcVar11 = pcVar11 + 4;
          }
          for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *pcVar11 = *pcVar5;
            pcVar5 = pcVar5 + 1;
            pcVar11 = pcVar11 + 1;
          }
          uVar7 = 0xffffffff;
          pcVar5 = local_14;
          do {
            pcVar11 = pcVar5;
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            pcVar11 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar11;
          } while (cVar1 != '\0');
          uVar7 = ~uVar7;
          iVar3 = -1;
          pcVar5 = local_8;
          do {
            pcVar10 = pcVar5;
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            pcVar10 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar10;
          } while (cVar1 != '\0');
          pcVar5 = pcVar11 + -uVar7;
          pcVar11 = pcVar10 + -1;
          for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            pcVar11 = pcVar11 + 4;
          }
          for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *pcVar11 = *pcVar5;
            pcVar5 = pcVar5 + 1;
            pcVar11 = pcVar11 + 1;
          }
          FUN_006b6020((int)local_c,uVar9,local_8);
          FUN_006ab060(&local_8);
        }
      }
      uVar7 = param_2[2];
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)uVar7);
  }
  DAT_00858df8 = (undefined4 *)local_68;
  return local_c;
}

