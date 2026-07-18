
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052d370(char *param_1,uint param_2)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *local_58;
  undefined4 local_54 [16];
  int local_14;
  uint *local_10;
  uint *local_c;
  uint *local_8;
  
  local_c = (uint *)0x0;
  local_10 = (uint *)0x0;
  local_8 = (uint *)0x0;
  if (param_1 != (char *)0x0) {
    local_58 = DAT_00858df8;
    DAT_00858df8 = &local_58;
    iVar3 = __setjmp3(local_54,0,unaff_EDI,unaff_ESI);
    if (iVar3 == 0) {
      uVar9 = 0xffffffff;
      pcVar6 = param_1;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      local_8 = FUN_006aac10(~uVar9 + 4);
      puVar4 = local_c;
      if (local_8 != (uint *)0x0) {
        wsprintfA((LPSTR)local_8,s__s_1d_s_007c6fe4,&DAT_007c6ff0,param_2 & 0xff,param_1);
        puVar4 = FUN_00712f80(local_8);
        local_c = puVar4;
        FUN_006ab060(&local_8);
      }
      puVar5 = local_10;
      if (puVar4 != (uint *)0x0) {
        puVar5 = FUN_007121f0((int)puVar4,(uint *)s________________007c21d8,
                              (&DAT_00807570)[(_DAT_00807348 & 0xff) * 4],0,0xffffffff,1);
        local_10 = puVar5;
        FUN_007129d0(puVar5,puVar5);
        FUN_006b5570((byte *)puVar4);
      }
      if (puVar5 != (uint *)0x0) {
        iVar3 = 0;
        if (0 < (int)puVar5[2]) {
          if ((int)puVar5[2] < 1) {
            pcVar6 = (char *)0x0;
            goto LAB_0052d48d;
          }
          do {
            pcVar6 = *(char **)(puVar5[5] + iVar3 * 4);
LAB_0052d48d:
            iVar7 = FUN_006b5aa0(*(int *)(local_14 + 0x98),pcVar6);
            if (*(byte *)(local_14 + 0x9c) < DAT_00807346) {
              *(byte *)(local_14 + 0x9c) = *(byte *)(local_14 + 0x9c) + 1;
            }
            if ((*(byte *)(local_14 + 0x9c) <= DAT_00807346) &&
               (thunk_FUN_0052d200(CONCAT31((int3)((uint)iVar7 >> 8),*(byte *)(local_14 + 0x9c) - 1)
                                  ), DAT_00807342 != 0)) {
              if ((int)(*(byte *)(local_14 + 0x9c) - 1) < *(int *)(*(int *)(local_14 + 0x98) + 8)) {
                puVar4 = *(uint **)(*(int *)(*(int *)(local_14 + 0x98) + 0x14) + -4 +
                                   (uint)*(byte *)(local_14 + 0x9c) * 4);
              }
              else {
                puVar4 = (uint *)0x0;
              }
              uVar8 = FUN_00711110(*(void **)(local_14 + 0x94),puVar4);
              uVar9 = *(uint *)(*(int *)(local_14 + 0x90) + 4);
              if ((int)uVar9 <= (int)uVar8) {
                uVar8 = uVar9;
              }
              *(uint *)(local_14 + 0x50 + (uint)*(byte *)(local_14 + 0x9c) * 4) = uVar8;
              FUN_006b2800((int)DAT_008075a8,
                           *(uint *)(local_14 + 0x14 + (uint)*(byte *)(local_14 + 0x9c) * 4),uVar8,
                           0x13);
              FUN_006b3640(DAT_008075a8,
                           *(uint *)(local_14 + 0x14 + (uint)*(byte *)(local_14 + 0x9c) * 4),
                           0xffffffff,0xd,(uint)*(byte *)(local_14 + 0x9c) * 0x13 + 0xb);
              FUN_006b3430(DAT_008075a8,
                           *(uint *)(local_14 + 0x14 + (uint)*(byte *)(local_14 + 0x9c) * 4));
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < (int)puVar5[2]);
        }
        FUN_006b5570((byte *)puVar5);
      }
      DAT_00858df8 = local_58;
      return;
    }
    DAT_00858df8 = local_58;
    iVar7 = FUN_006ad4d0(s_E____titans_Andrey_mpopup_cpp_007c6f84,0x61,0,iVar3,&DAT_007a4ccc);
    if (iVar7 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar3,0,0x7c6f84,0x61);
  }
  return;
}

