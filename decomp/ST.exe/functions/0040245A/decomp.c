
void thunk_FUN_005e7c00(uint *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  char *pcVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_54;
  undefined4 auStack_50 [16];
  uint *puStack_10;
  int iStack_c;
  uint *puStack_8;
  
  if (param_1 != (uint *)0x0) {
    uStack_54 = DAT_00858df8;
    DAT_00858df8 = &uStack_54;
    iVar2 = __setjmp3(auStack_50,0,unaff_EDI,unaff_ESI);
    if (iVar2 == 0) {
      if (param_2 != 0) {
        iVar2 = *(int *)(iStack_c + 0x1af0);
        uVar7 = *(uint *)(iStack_c + 0x1af4);
        if ((int)uVar7 < *(int *)(iVar2 + 8)) {
          do {
            FUN_006b7830(iVar2,uVar7);
            iVar2 = *(int *)(iStack_c + 0x1af0);
            uVar7 = *(uint *)(iStack_c + 0x1af4);
          } while ((int)uVar7 < *(int *)(iVar2 + 8));
        }
        FUN_006b4170(*(int *)(iStack_c + 0x1aec),0,0,*(int *)(iStack_c + 0x1af4) * 0x13,
                     *(int *)(*(int *)(iStack_c + 0x1aec) + 4),
                     (0x16 - *(int *)(iStack_c + 0x1af4)) * 0x13,0);
      }
      puVar3 = FUN_00712f80(param_1);
      puVar4 = puStack_10;
      if (puVar3 != (uint *)0x0) {
        puVar4 = FUN_007121f0((int)puVar3,(uint *)s________________007c21d8,0x1e4,0,0xffffffff,1);
        puStack_10 = puVar4;
        FUN_006b5570((byte *)puVar3);
      }
      *(undefined4 *)(iStack_c + 0x1af4) = *(undefined4 *)(*(int *)(iStack_c + 0x1af0) + 8);
      if (puVar4 != (uint *)0x0) {
        iVar2 = 0;
        if (0 < (int)puVar4[2]) {
          if ((int)puVar4[2] < 1) {
            pcVar5 = (char *)0x0;
            goto LAB_005e7d14;
          }
          do {
            pcVar5 = *(char **)(puVar4[5] + iVar2 * 4);
LAB_005e7d14:
            FUN_006b5aa0(*(int *)(iStack_c + 0x1af0),pcVar5);
            iVar2 = iVar2 + 1;
          } while (iVar2 < (int)puVar4[2]);
        }
        FUN_006b5570((byte *)puVar4);
      }
      iVar2 = *(int *)(*(int *)(iStack_c + 0x1af0) + 8);
      if (iVar2 < 0x16) {
        iVar8 = iVar2 + -1;
      }
      else if (iVar2 < 0x2c) {
        puVar6 = *(undefined4 **)(iStack_c + 0x1aec);
        iVar8 = 0x2c - iVar2;
        FUN_006b55f0(puVar6,0,0,0,(int)puVar6,0,0,iVar2 * 0x13 + -0x1a2,puVar6[1],iVar8 * 0x13);
      }
      else {
        iVar2 = *(int *)(iStack_c + 0x1aec);
        iVar8 = 0;
        puStack_8 = *(uint **)(iVar2 + 0x14);
        if (puStack_8 == (uint *)0x0) {
          puStack_8 = (uint *)(((uint)*(ushort *)(iVar2 + 0xe) * *(int *)(iVar2 + 4) + 0x1f >> 3 &
                               0x1ffffffc) * *(int *)(iVar2 + 8));
        }
        puVar6 = (undefined4 *)FUN_006b4fa0(iVar2);
        for (uVar7 = (uint)puStack_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        for (uVar7 = (uint)puStack_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined1 *)puVar6 = 0;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
      }
      for (iVar2 = *(int *)(*(int *)(iStack_c + 0x1af0) + 8); 0x15 < iVar2;
          iVar2 = *(int *)(iVar2 + -0x10)) {
        FUN_006b7830(*(int *)(iStack_c + 0x1af0),0);
        iVar2 = *(int *)(iStack_c + 0x1af0);
        *(int *)(iStack_c + 0x1af0) = iVar2 + -0x18;
      }
      if (iVar8 <= *(int *)(*(int *)(iStack_c + 0x1af0) + 8) + -1) {
        puStack_8 = (uint *)(iStack_c + 0x1a94 + iVar8 * 4);
        iVar2 = iVar8 * 0x13;
        do {
          FUN_006b4170(*(int *)(iStack_c + 0x1aec),0,0,iVar2,
                       *(int *)(*(int *)(iStack_c + 0x1aec) + 4),0x13,0);
          FUN_00710a90(*(int *)(iStack_c + 0x1aec),0,2,iVar2,
                       *(int *)(*(int *)(iStack_c + 0x1aec) + 4) + -4,0x13);
          if (iVar8 < *(int *)(*(int *)(iStack_c + 0x1af0) + 8)) {
            puVar4 = *(uint **)(*(int *)(*(int *)(iStack_c + 0x1af0) + 0x14) + iVar8 * 4);
          }
          else {
            puVar4 = (uint *)0x0;
          }
          FUN_007119c0(puVar4,0,-1,1);
          FUN_006b35d0(DAT_008075a8,*puStack_8);
          iVar8 = iVar8 + 1;
          puStack_8 = puStack_8 + 1;
          iVar2 = iVar2 + 0x13;
        } while (iVar8 <= *(int *)(*(int *)(iStack_c + 0x1af0) + 8) + -1);
      }
      DAT_00858df8 = (undefined4 *)uStack_54;
      return;
    }
    DAT_00858df8 = (undefined4 *)uStack_54;
    iVar8 = FUN_006ad4d0(s_E____titans_Start_wait_obj_cpp_007cdd5c,0x120,0,iVar2,&DAT_007a4ccc);
    if (iVar8 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar2,0,0x7cdd5c,0x120);
  }
  return;
}

