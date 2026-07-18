
void __thiscall AiFltClassTy::GoToRepair(AiFltClassTy *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  AiFltClassTy *pAVar3;
  undefined2 uVar4;
  undefined2 extraout_var;
  int iVar5;
  undefined2 *puVar6;
  int *this_00;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_68;
  undefined4 auStack_64 [16];
  uint uStack_24;
  int iStack_20;
  AiFltClassTy *pAStack_1c;
  int iStack_18;
  uint uStack_14;
  uint *puStack_10;
  int iStack_c;
  uint *puStack_8;
  
  if ((*(int *)(this + 0x203) == 0) ||
     ((uint)(*(int *)(this + 0x207) + *(int *)(this + 0x203)) <= *(uint *)(this + 0x280))) {
    *(undefined4 *)(this + 0x207) = *(undefined4 *)(this + 0x280);
    pAStack_1c = this;
    uVar4 = thunk_FUN_0065d9c0((int)this,*(undefined4 *)(this + 0x280));
    iVar5 = CONCAT22(extraout_var,uVar4);
    if ((0 < iVar5) &&
       (iStack_20 = iVar5, iStack_c = thunk_FUN_00661800((int)this,extraout_EDX),
       (int)*(short *)(this + 0x179) < iVar5 - iStack_c)) {
      iStack_18 = thunk_FUN_0068f8f0(*(void **)(this + 0x284),*(short *)(this + 0x7b));
      puStack_8 = (uint *)0x0;
      puStack_10 = (uint *)0x0;
      uStack_68 = DAT_00858df8;
      DAT_00858df8 = &uStack_68;
      iVar5 = __setjmp3(auStack_64,0,unaff_EDI,unaff_ESI);
      pAVar3 = pAStack_1c;
      if (iVar5 == 0) {
        puStack_8 = thunk_FUN_0065da10((int)pAStack_1c,extraout_EDX_00);
        if (puStack_8 != (uint *)0x0) {
          uStack_14 = 0;
          puVar8 = puStack_10;
          if (0 < (int)puStack_8[3]) {
            do {
              if (uStack_14 < puStack_8[3]) {
                puVar6 = (undefined2 *)(puStack_8[2] * uStack_14 + puStack_8[7]);
              }
              else {
                puVar6 = (undefined2 *)0x0;
              }
              uStack_24 = CONCAT22((short)((uint)puVar6 >> 0x10),*puVar6);
              this_00 = (int *)thunk_FUN_0042b620(CONCAT31((int3)(uStack_24 >> 8),pAVar3[0x24]),
                                                  uStack_24,1);
              if ((this_00 != (int *)0x0) &&
                 ((int)*(short *)(pAVar3 + 0x179) < iStack_20 - iStack_c)) {
                iVar5 = (**(code **)(*this_00 + 0x2c))();
                uVar7 = thunk_FUN_00674fb0(iVar5);
                if ((*(uint *)(pAVar3 + 0x17f) & uVar7) != 0) {
                  if (*(short *)(pAVar3 + 0x39) == 3) {
                    iVar5 = (**(code **)(*this_00 + 0xc4))();
                  }
                  else {
                    iVar5 = (**(code **)(*this_00 + 0x7c))();
                  }
                  if (iVar5 < *(short *)(pAVar3 + 0x177)) {
                    iVar5 = (**(code **)(*this_00 + 0x2c))();
                    if ((iVar5 < 0x32) || (0x73 < iVar5)) {
                      bVar2 = false;
                    }
                    else {
                      bVar2 = true;
                    }
                    if (bVar2) {
                      if (*(short *)(pAVar3 + 0x39) == 3) {
LAB_00661a96:
                        bVar2 = false;
                      }
                      else if (*(int *)((int)this_00 + 0x361) == 5) {
                        bVar2 = true;
                      }
                      else {
                        iVar5 = thunk_FUN_004c93e0(this_00,5);
                        if (iVar5 < 1) goto LAB_00661a96;
                        bVar2 = true;
                      }
                      if (!bVar2) {
                        if ((iStack_18 != 0) || (*(short *)(pAVar3 + 0x39) != 3)) {
                          if (*(short *)(pAVar3 + 0x39) == 3) {
                            thunk_FUN_004d7270(this_00);
                          }
                          else {
                            thunk_FUN_004c7cc0(this_00,5,0,1,1,0xffffffff,0,0xff,(char *)0x0);
                          }
                        }
                        iStack_c = iStack_c + 1;
                      }
                    }
                    iVar5 = (**(code **)(*this_00 + 0x2c))();
                    if ((iVar5 < 1) || (0x28 < iVar5)) {
                      bVar2 = false;
                    }
                    else {
                      bVar2 = true;
                    }
                    if ((bVar2) && (iStack_18 != 0)) {
                      if (puVar8 == (uint *)0x0) {
                        puVar8 = FUN_006ae290((uint *)0x0,10,2,10);
                        puStack_10 = puVar8;
                      }
                      FUN_006ae1c0(puVar8,&uStack_24);
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
          if (puVar8 != (uint *)0x0) {
            if (puVar8[3] != 0) {
              thunk_FUN_0068fa00(*(void **)(pAVar3 + 0x284),puVar8);
            }
            if (puVar8 != (uint *)0x0) {
              FUN_006ae110((byte *)puVar8);
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
      iVar9 = FUN_006ad4d0(s_E____titans_ai_ai_flt_cpp_007d2b80,0x6e9,0,iVar5,&DAT_007a4ccc);
      if (iVar9 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FUN_006a5e40(iVar5,0,0x7d2b80,0x6ea);
    }
  }
  return;
}

