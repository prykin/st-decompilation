
void __fastcall thunk_FUN_006618e0(int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined2 uVar3;
  undefined2 extraout_var;
  int iVar4;
  undefined2 *puVar5;
  int *this;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_68;
  undefined4 auStack_64 [16];
  uint uStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  uint uStack_14;
  uint *puStack_10;
  int iStack_c;
  uint *puStack_8;
  
  if ((*(int *)(param_1 + 0x203) == 0) ||
     ((uint)(*(int *)(param_1 + 0x207) + *(int *)(param_1 + 0x203)) <= *(uint *)(param_1 + 0x280)))
  {
    *(undefined4 *)(param_1 + 0x207) = *(undefined4 *)(param_1 + 0x280);
    iStack_1c = param_1;
    uVar3 = thunk_FUN_0065d9c0(param_1,*(undefined4 *)(param_1 + 0x280));
    iVar8 = CONCAT22(extraout_var,uVar3);
    if ((0 < iVar8) &&
       (iStack_20 = iVar8, iStack_c = thunk_FUN_00661800(param_1,extraout_EDX),
       (int)*(short *)(param_1 + 0x179) < iVar8 - iStack_c)) {
      iStack_18 = thunk_FUN_0068f8f0(*(void **)(param_1 + 0x284),*(short *)(param_1 + 0x7b));
      puStack_8 = (uint *)0x0;
      puStack_10 = (uint *)0x0;
      uStack_68 = DAT_00858df8;
      DAT_00858df8 = &uStack_68;
      iVar4 = __setjmp3(auStack_64,0,unaff_EDI,unaff_ESI);
      iVar8 = iStack_1c;
      if (iVar4 == 0) {
        puStack_8 = thunk_FUN_0065da10(iStack_1c,extraout_EDX_00);
        if (puStack_8 != (uint *)0x0) {
          uStack_14 = 0;
          puVar7 = puStack_10;
          if (0 < (int)puStack_8[3]) {
            do {
              if (uStack_14 < puStack_8[3]) {
                puVar5 = (undefined2 *)(puStack_8[2] * uStack_14 + puStack_8[7]);
              }
              else {
                puVar5 = (undefined2 *)0x0;
              }
              uStack_24 = CONCAT22((short)((uint)puVar5 >> 0x10),*puVar5);
              this = (int *)thunk_FUN_0042b620(CONCAT31((int3)(uStack_24 >> 8),
                                                        *(undefined1 *)(iVar8 + 0x24)),uStack_24,1);
              if ((this != (int *)0x0) && ((int)*(short *)(iVar8 + 0x179) < iStack_20 - iStack_c)) {
                iVar4 = (**(code **)(*this + 0x2c))();
                uVar6 = thunk_FUN_00674fb0(iVar4);
                if ((*(uint *)(iVar8 + 0x17f) & uVar6) != 0) {
                  if (*(short *)(iVar8 + 0x39) == 3) {
                    iVar4 = (**(code **)(*this + 0xc4))();
                  }
                  else {
                    iVar4 = (**(code **)(*this + 0x7c))();
                  }
                  if (iVar4 < *(short *)(iVar8 + 0x177)) {
                    iVar4 = (**(code **)(*this + 0x2c))();
                    if ((iVar4 < 0x32) || (0x73 < iVar4)) {
                      bVar2 = false;
                    }
                    else {
                      bVar2 = true;
                    }
                    if (bVar2) {
                      if (*(short *)(iVar8 + 0x39) == 3) {
LAB_00661a96:
                        bVar2 = false;
                      }
                      else if (*(int *)((int)this + 0x361) == 5) {
                        bVar2 = true;
                      }
                      else {
                        iVar4 = thunk_FUN_004c93e0(this,5);
                        if (iVar4 < 1) goto LAB_00661a96;
                        bVar2 = true;
                      }
                      if (!bVar2) {
                        if ((iStack_18 != 0) || (*(short *)(iVar8 + 0x39) != 3)) {
                          if (*(short *)(iVar8 + 0x39) == 3) {
                            thunk_FUN_004d7270(this);
                          }
                          else {
                            thunk_FUN_004c7cc0(this,5,0,1,1,0xffffffff,0,0xff,(char *)0x0);
                          }
                        }
                        iStack_c = iStack_c + 1;
                      }
                    }
                    iVar4 = (**(code **)(*this + 0x2c))();
                    if ((iVar4 < 1) || (0x28 < iVar4)) {
                      bVar2 = false;
                    }
                    else {
                      bVar2 = true;
                    }
                    if ((bVar2) && (iStack_18 != 0)) {
                      if (puVar7 == (uint *)0x0) {
                        puVar7 = FUN_006ae290((uint *)0x0,10,2,10);
                        puStack_10 = puVar7;
                      }
                      FUN_006ae1c0(puVar7,&uStack_24);
                      iStack_c = iStack_c + 1;
                    }
                  }
                }
              }
              uStack_14 = uStack_14 + 1;
            } while ((int)uStack_14 < (int)puStack_8[3]);
          }
          FUN_006ae110((byte *)puStack_8);
          puStack_8 = (uint *)0x0;
          if (puVar7 != (uint *)0x0) {
            if (puVar7[3] != 0) {
              thunk_FUN_0068fa00(*(void **)(iVar8 + 0x284),puVar7);
            }
            if (puVar7 != (uint *)0x0) {
              FUN_006ae110((byte *)puVar7);
            }
          }
        }
        DAT_00858df8 = (undefined4 *)uStack_68;
        return;
      }
      DAT_00858df8 = (undefined4 *)uStack_68;
      if (puStack_8 != (uint *)0x0) {
        FUN_006ae110((byte *)puStack_8);
        puStack_8 = (uint *)0x0;
      }
      if (puStack_10 != (uint *)0x0) {
        FUN_006ae110((byte *)puStack_10);
        puStack_10 = (uint *)0x0;
      }
      iVar8 = FUN_006ad4d0(s_E____titans_ai_ai_flt_cpp_007d2b80,0x6e9,0,iVar4,&DAT_007a4ccc);
      if (iVar8 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FUN_006a5e40(iVar4,0,0x7d2b80,0x6ea);
    }
  }
  return;
}

