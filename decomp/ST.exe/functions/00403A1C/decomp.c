
void __fastcall thunk_FUN_00661ca0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 in_EAX;
  int *this;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  bool bVar11;
  uint auStack_64 [2];
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  short *psStack_5a;
  undefined1 uStack_56;
  short sStack_30;
  short asStack_2e [5];
  uint uStack_24;
  int iStack_20;
  short asStack_1c [2];
  short asStack_18 [2];
  int iStack_14;
  int *piStack_10;
  uint uStack_c;
  undefined2 uStack_6;
  
  if ((DAT_007fa174 != 0) &&
     (iStack_14 = param_1,
     this = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)param_2 >> 8),
                                               *(undefined1 *)(param_1 + 0x24)),
                                      CONCAT22((short)((uint)in_EAX >> 0x10),
                                               *(undefined2 *)(param_3 + 0x16)),1),
     this != (int *)0x0)) {
    piStack_10 = this;
    iStack_20 = thunk_FUN_004357f0(*(char *)(param_1 + 0x24));
    uVar3 = (**(code **)(*this + 0x2c))();
    piVar2 = piStack_10;
    uStack_c = uVar3;
    if (*(short *)(param_3 + 0x14) == 0) {
      thunk_FUN_004162b0(this,asStack_18,asStack_1c,&uStack_6);
      if ((0x31 < (int)uStack_c) && ((int)uStack_c < 0x74)) {
        uVar3 = 0;
        uStack_24 = *(uint *)(*(int *)(param_1 + 0x20b) + 0xc);
        if (0 < (int)uStack_24) {
          bVar11 = uStack_24 != 0;
          do {
            if (bVar11) {
              puVar4 = (uint *)(*(int *)(*(int *)(param_1 + 0x20b) + 8) * uVar3 +
                               *(int *)(*(int *)(param_1 + 0x20b) + 0x1c));
            }
            else {
              puVar4 = (uint *)0x0;
            }
            if (puVar4[10] == 0) {
              iVar7 = 0;
              puVar10 = puVar4;
              do {
                if (*puVar10 == uStack_c) {
                  puVar4[10] = *(uint *)(param_3 + 0x18);
                  *(short *)((int)puVar4 + 0xe) = asStack_18[0];
                  *(short *)(puVar4 + 4) = asStack_1c[0];
                  *(undefined2 *)((int)puVar4 + 0x12) = uStack_6;
                  puVar4[9] = 0;
                  goto LAB_00661e5f;
                }
                iVar7 = iVar7 + 1;
                puVar10 = puVar10 + 1;
              } while (iVar7 < 3);
            }
            uVar3 = uVar3 + 1;
            bVar11 = uVar3 < uStack_24;
          } while ((int)uVar3 < (int)uStack_24);
        }
      }
      if ((0 < (int)uStack_c) && ((int)uStack_c < 0x29)) {
        if (*(int *)((int)piStack_10 + 0x81e) != 0) {
          iVar7 = *(int *)(param_1 + 0x20b);
          uVar8 = 0;
          uVar3 = *(uint *)(iVar7 + 0xc);
          if (0 < (int)uVar3) {
            bVar11 = uVar3 != 0;
            do {
              if (bVar11) {
                iVar5 = *(int *)(iVar7 + 8) * uVar8 + *(int *)(iVar7 + 0x1c);
              }
              else {
                iVar5 = 0;
              }
              if ((*(int *)(iVar5 + 0x28) == 0) &&
                 (*(int *)(iVar5 + 0x24) == *(int *)((int)piStack_10 + 0x81e))) {
                uVar1 = *(undefined4 *)(param_3 + 0x18);
                *(undefined4 *)(iVar5 + 0x24) = 0;
                *(undefined4 *)(iVar5 + 0x28) = uVar1;
                goto LAB_00661e5f;
              }
              uVar8 = uVar8 + 1;
              bVar11 = uVar8 < uVar3;
            } while ((int)uVar8 < (int)uVar3);
          }
        }
        iVar7 = *(int *)(param_1 + 0x20b);
        uVar3 = 0;
        if (0 < *(int *)(iVar7 + 0xc)) {
          bVar11 = *(int *)(iVar7 + 0xc) != 0;
          do {
            if (bVar11) {
              puVar4 = (uint *)(*(int *)(iVar7 + 8) * uVar3 + *(int *)(iVar7 + 0x1c));
            }
            else {
              puVar4 = (uint *)0x0;
            }
            if (puVar4[10] == 0) {
              iVar5 = 0;
              puVar10 = puVar4;
              do {
                param_1 = iStack_14;
                if (*puVar10 == uStack_c) {
                  uVar3 = *(uint *)(param_3 + 0x18);
                  puVar4[9] = 0;
                  puVar4[10] = uVar3;
                  goto LAB_00661e5f;
                }
                iVar5 = iVar5 + 1;
                puVar10 = puVar10 + 1;
              } while (iVar5 < 3);
            }
            uVar3 = uVar3 + 1;
            bVar11 = uVar3 < *(uint *)(iVar7 + 0xc);
          } while ((int)uVar3 < (int)*(uint *)(iVar7 + 0xc));
        }
      }
LAB_00661e5f:
      if (((0x31 < (int)uStack_c) && ((int)uStack_c < 0x74)) && (*(int *)(param_1 + 0x284) != 0)) {
        sStack_30 = asStack_18[0] + -4;
        asStack_2e[0] = asStack_1c[0] + -4;
        asStack_2e[2] = 9;
        asStack_2e[3] = 9;
        asStack_2e[1] = 0;
        asStack_2e[4] = 5;
        thunk_FUN_006756d0(&sStack_30,asStack_2e,asStack_2e + 2,asStack_2e + 3);
        puVar4 = auStack_64;
        for (iVar7 = 0xd; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        auStack_64[1] = *(undefined4 *)(param_1 + 0x280);
        auStack_64[0] = 0x6c;
        uStack_5c = 0;
        iVar7 = (**(code **)(*piStack_10 + 0x2c))();
        iVar7 = thunk_FUN_006753a0(iVar7);
        uStack_5b = (undefined1)iVar7;
        psStack_5a = &sStack_30;
        thunk_FUN_0068fd00(auStack_64);
      }
      if (((0 < (int)uStack_c) && ((int)uStack_c < 0x29)) && (*(short *)(param_1 + 0x7b) == -0x8000)
         ) {
        if (*(int *)(param_1 + 0x9b) == 0x78) {
          *(undefined4 *)(param_1 + 0x9b) = 0x33;
          *(undefined4 *)(param_1 + 0x9f) = 0;
          *(undefined4 *)(param_1 + 0xa3) = 0;
          *(undefined4 *)(param_1 + 0xa7) = 0;
        }
        uVar3 = 0;
        if (*(void **)(param_1 + 0x284) != (void *)0x0) {
          pvVar6 = (void *)thunk_FUN_0068e290(*(void **)(param_1 + 0x284),(short)piStack_10[0x207]);
          if (iStack_20 != 0) {
            uVar3 = *(uint *)(iStack_20 + 0x65c);
            *(uint *)(iStack_20 + 0x65c) = uVar3 + 1;
          }
          if (pvVar6 != (void *)0x0) {
            thunk_FUN_006616b0(pvVar6,uStack_c,uVar3);
          }
          *(uint *)((int)piStack_10 + 0x81e) = uVar3;
        }
      }
    }
    else {
      iVar7 = *(int *)(param_1 + 0x20b);
      uVar9 = 0;
      uVar8 = *(uint *)(iVar7 + 0xc);
      if (0 < (int)uVar8) {
        bVar11 = uVar8 != 0;
        do {
          if (bVar11) {
            iVar5 = *(int *)(iVar7 + 8) * uVar9 + *(int *)(iVar7 + 0x1c);
          }
          else {
            iVar5 = 0;
          }
          if (*(int *)(iVar5 + 0x28) == *(int *)(param_3 + 0x18)) {
            *(undefined4 *)(iVar5 + 0x28) = 0;
            break;
          }
          uVar9 = uVar9 + 1;
          bVar11 = uVar9 < uVar8;
        } while ((int)uVar9 < (int)uVar8);
      }
      if ((((0 < (int)uVar3) && ((int)uVar3 < 0x29)) && (*(short *)(param_1 + 0x7b) == -0x8000)) &&
         ((*(void **)(param_1 + 0x284) != (void *)0x0 &&
          (pvVar6 = (void *)thunk_FUN_0068e290(*(void **)(param_1 + 0x284),(short)piStack_10[0x207])
          , pvVar6 != (void *)0x0)))) {
        thunk_FUN_00661790(pvVar6,uVar3,*(int *)((int)piVar2 + 0x81e));
      }
    }
    uVar3 = thunk_FUN_00674fb0(uStack_c);
    if (((uVar3 & 0x60) != 0) && (*(int *)(param_1 + 0x284) != 0)) {
      puVar4 = auStack_64;
      for (iVar7 = 0xd; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      auStack_64[1] = *(undefined4 *)(param_1 + 0x280);
      uStack_5c = *(undefined1 *)(param_3 + 0x14);
      uStack_5b = (undefined1)*(undefined2 *)(param_3 + 0x16);
      psStack_5a._0_1_ = (undefined1)((ushort)*(undefined2 *)(param_3 + 0x16) >> 8);
      psStack_5a._1_3_ = (undefined3)uStack_c;
      uStack_56 = (undefined1)(uStack_c >> 0x18);
      auStack_64[0] = 0x6e;
      thunk_FUN_0068fd00(auStack_64);
    }
    uVar3 = thunk_FUN_00674fb0(uStack_c);
    if (((uVar3 & 0x10) != 0) && (*(int *)(param_1 + 0x284) != 0)) {
      puVar4 = auStack_64;
      for (iVar7 = 0xd; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      auStack_64[1] = *(undefined4 *)(param_1 + 0x280);
      uStack_5c = *(undefined1 *)(param_3 + 0x14);
      uStack_5b = (undefined1)*(undefined2 *)(param_3 + 0x16);
      psStack_5a._0_1_ = (undefined1)((ushort)*(undefined2 *)(param_3 + 0x16) >> 8);
      psStack_5a._1_3_ = (undefined3)uStack_c;
      uStack_56 = (undefined1)(uStack_c >> 0x18);
      auStack_64[0] = 0x74;
      thunk_FUN_0068fd00(auStack_64);
    }
    if ((((0 < (int)uStack_c) && ((int)uStack_c < 0x29)) && (*(short *)(param_1 + 0x7b) != 1)) &&
       (*(int *)(param_1 + 0x9b) == 0x41)) {
      *(undefined4 *)(param_1 + 0x9b) = 0x3c;
      *(undefined4 *)(param_1 + 0x9f) = 0;
      *(undefined4 *)(param_1 + 0xa3) = 0;
      *(undefined4 *)(param_1 + 0xa7) = 0;
    }
  }
  return;
}

