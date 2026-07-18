
void __fastcall FUN_006618e0(int param_1)

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
  undefined4 local_68;
  undefined4 local_64 [16];
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  uint *local_10;
  int local_c;
  uint *local_8;
  
  if ((*(int *)(param_1 + 0x203) == 0) ||
     ((uint)(*(int *)(param_1 + 0x207) + *(int *)(param_1 + 0x203)) <= *(uint *)(param_1 + 0x280)))
  {
    *(undefined4 *)(param_1 + 0x207) = *(undefined4 *)(param_1 + 0x280);
    local_1c = param_1;
    uVar3 = thunk_FUN_0065d9c0(param_1,*(undefined4 *)(param_1 + 0x280));
    iVar8 = CONCAT22(extraout_var,uVar3);
    if ((0 < iVar8) &&
       (local_20 = iVar8, local_c = thunk_FUN_00661800(param_1,extraout_EDX),
       (int)*(short *)(param_1 + 0x179) < iVar8 - local_c)) {
      local_18 = thunk_FUN_0068f8f0(*(void **)(param_1 + 0x284),*(short *)(param_1 + 0x7b));
      local_8 = (uint *)0x0;
      local_10 = (uint *)0x0;
      local_68 = DAT_00858df8;
      DAT_00858df8 = &local_68;
      iVar4 = __setjmp3(local_64,0,unaff_EDI,unaff_ESI);
      iVar8 = local_1c;
      if (iVar4 == 0) {
        local_8 = thunk_FUN_0065da10(local_1c,extraout_EDX_00);
        if (local_8 != (uint *)0x0) {
          local_14 = 0;
          puVar7 = local_10;
          if (0 < (int)local_8[3]) {
            do {
              if (local_14 < local_8[3]) {
                puVar5 = (undefined2 *)(local_8[2] * local_14 + local_8[7]);
              }
              else {
                puVar5 = (undefined2 *)0x0;
              }
              local_24 = CONCAT22((short)((uint)puVar5 >> 0x10),*puVar5);
              this = (int *)thunk_FUN_0042b620(CONCAT31((int3)(local_24 >> 8),
                                                        *(undefined1 *)(iVar8 + 0x24)),local_24,1);
              if ((this != (int *)0x0) && ((int)*(short *)(iVar8 + 0x179) < local_20 - local_c)) {
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
                        if ((local_18 != 0) || (*(short *)(iVar8 + 0x39) != 3)) {
                          if (*(short *)(iVar8 + 0x39) == 3) {
                            thunk_FUN_004d7270(this);
                          }
                          else {
                            thunk_FUN_004c7cc0(this,5,0,1,1,0xffffffff,0,0xff,(char *)0x0);
                          }
                        }
                        local_c = local_c + 1;
                      }
                    }
                    iVar4 = (**(code **)(*this + 0x2c))();
                    if ((iVar4 < 1) || (0x28 < iVar4)) {
                      bVar2 = false;
                    }
                    else {
                      bVar2 = true;
                    }
                    if ((bVar2) && (local_18 != 0)) {
                      if (puVar7 == (uint *)0x0) {
                        puVar7 = FUN_006ae290((uint *)0x0,10,2,10);
                        local_10 = puVar7;
                      }
                      FUN_006ae1c0(puVar7,&local_24);
                      local_c = local_c + 1;
                    }
                  }
                }
              }
              local_14 = local_14 + 1;
            } while ((int)local_14 < (int)local_8[3]);
          }
          FUN_006ae110((byte *)local_8);
          local_8 = (uint *)0x0;
          if (puVar7 != (uint *)0x0) {
            if (puVar7[3] != 0) {
              thunk_FUN_0068fa00(*(void **)(iVar8 + 0x284),puVar7);
            }
            if (puVar7 != (uint *)0x0) {
              FUN_006ae110((byte *)puVar7);
            }
          }
        }
        DAT_00858df8 = (undefined4 *)local_68;
        return;
      }
      DAT_00858df8 = (undefined4 *)local_68;
      if (local_8 != (uint *)0x0) {
        FUN_006ae110((byte *)local_8);
        local_8 = (uint *)0x0;
      }
      if (local_10 != (uint *)0x0) {
        FUN_006ae110((byte *)local_10);
        local_10 = (uint *)0x0;
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

