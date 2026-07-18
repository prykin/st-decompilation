
void __fastcall FUN_0067b520(void *param_1)

{
  short sVar1;
  code *pcVar2;
  void *this;
  undefined1 uVar3;
  int iVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  uint uVar5;
  uint *puVar6;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  uint extraout_EDX_02;
  uint extraout_EDX_03;
  uint extraout_EDX_04;
  uint extraout_EDX_05;
  uint uVar7;
  uint extraout_EDX_06;
  uint extraout_EDX_07;
  uint extraout_EDX_08;
  uint extraout_EDX_09;
  undefined4 unaff_ESI;
  int iVar8;
  void *unaff_EDI;
  void *pvVar9;
  bool bVar10;
  int local_c8 [7];
  int local_ac [7];
  undefined4 local_90;
  undefined4 local_8c [16];
  uint local_4c [2];
  char local_44;
  undefined1 local_43;
  int local_42;
  undefined2 local_3e;
  void *local_18;
  int local_14;
  uint local_10;
  uint local_c;
  void *local_8;
  
  if (((*(int *)((int)param_1 + 0x695) != 0) && (DAT_007fa174 != 0)) &&
     ((*(int *)((int)param_1 + 0x66e) == 0 ||
      ((uint)(*(int *)((int)param_1 + 0x672) + *(int *)((int)param_1 + 0x66e)) <=
       *(uint *)((int)param_1 + 0x6fe))))) {
    *(undefined4 *)((int)param_1 + 0x672) = *(undefined4 *)((int)param_1 + 0x6fe);
    local_90 = DAT_00858df8;
    DAT_00858df8 = &local_90;
    local_18 = param_1;
    iVar4 = __setjmp3(local_8c,0,unaff_EDI,unaff_ESI);
    this = local_18;
    if (iVar4 == 0) {
      local_10 = 0;
      iVar4 = *(int *)((int)local_18 + 0x6a1);
      if (0 < *(int *)(iVar4 + 0xc)) {
        bVar10 = *(int *)(iVar4 + 0xc) != 0;
        uVar7 = extraout_EDX;
        do {
          uVar5 = local_10;
          if (bVar10) {
            iVar8 = *(int *)(iVar4 + 8) * local_10 + *(int *)(iVar4 + 0x1c);
          }
          else {
            iVar8 = 0;
          }
          switch(*(undefined1 *)(iVar8 + 7)) {
          case 0:
            sVar1 = *(short *)(iVar8 + 3);
            iVar4 = thunk_FUN_004e60d0(*(int *)((int)this + 0x5d7),(int)*(short *)(iVar8 + 1));
            if (iVar4 < sVar1) {
              bVar10 = thunk_FUN_004e5f90(*(int *)((int)this + 0x5d7),(int)*(short *)(iVar8 + 1));
              uVar7 = extraout_EDX_01;
              if (CONCAT31(extraout_var,bVar10) == 0) {
                pvVar9 = (void *)(int)*(short *)(iVar8 + 1);
                local_14 = (int)*(short *)(iVar8 + 3);
                local_8 = pvVar9;
                bVar10 = thunk_FUN_004e5910(*(int *)((int)this + 0x5d7),(uint)pvVar9);
                uVar7 = extraout_EDX_02;
                if ((CONCAT31(extraout_var_00,bVar10) == 0) ||
                   (bVar10 = thunk_FUN_004e5c40(*(int *)((int)this + 0x5d7),(uint)pvVar9),
                   uVar7 = extraout_EDX_03, CONCAT31(extraout_var_01,bVar10) == 0)) {
LAB_0067b6db:
                  bVar10 = false;
                }
                else {
                  uVar3 = thunk_FUN_004e6140(*(int *)((int)this + 0x5d7),(int)pvVar9);
                  local_c = CONCAT31(extraout_var_02,uVar3);
                  iVar4 = thunk_FUN_004e60d0(*(int *)((int)this + 0x5d7),(int)pvVar9);
                  uVar7 = local_c;
                  if (((int)local_c <= iVar4) ||
                     ((iVar4 = thunk_FUN_004e60d0(*(int *)((int)this + 0x5d7),(int)pvVar9),
                      uVar7 = extraout_EDX_04, iVar4 != local_14 + -1 ||
                      (bVar10 = thunk_FUN_004e5f90(*(int *)((int)this + 0x5d7),(uint)pvVar9),
                      uVar7 = extraout_EDX_05, CONCAT31(extraout_var_03,bVar10) != 0))))
                  goto LAB_0067b6db;
                  bVar10 = true;
                }
                if (bVar10) {
                  iVar4 = *(int *)((int)this + 0x695);
                  uVar7 = 0;
                  local_c = 0;
                  uVar5 = *(uint *)(iVar4 + 0xc);
                  if (0 < (int)uVar5) {
                    do {
                      uVar7 = local_c;
                      if (((iVar4 == 0) || ((int)local_c < 0)) || ((int)uVar5 <= (int)local_c)) {
LAB_0067b724:
                        local_8 = (void *)0x0;
                      }
                      else {
                        if (local_c < uVar5) {
                          puVar6 = (uint *)(*(int *)(iVar4 + 8) * local_c + *(int *)(iVar4 + 0x1c));
                        }
                        else {
                          puVar6 = (uint *)0x0;
                        }
                        if (puVar6[1] == 0) goto LAB_0067b724;
                        local_8 = (void *)*puVar6;
                      }
                      if (local_8 != (void *)0x0) {
                        puVar6 = local_4c;
                        for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
                          *puVar6 = 0;
                          puVar6 = puVar6 + 1;
                        }
                        local_4c[1] = *(undefined4 *)((int)this + 0x6fe);
                        local_4c[0] = 0x73;
                        local_43 = 1;
                        local_42 = iVar8;
                        if (&stack0x00000000 != (undefined1 *)0x4c) {
                          thunk_FUN_0068fd00(local_4c);
                          uVar7 = local_c;
                        }
                        if ('\0' < local_44) {
                          *(undefined1 *)(iVar8 + 7) = 1;
                          uVar7 = CONCAT22((short)(uVar7 >> 0x10),local_3e);
                          *(undefined2 *)(iVar8 + 8) = local_3e;
                          break;
                        }
                      }
                      iVar4 = *(int *)((int)this + 0x695);
                      uVar7 = uVar7 + 1;
                      uVar5 = *(uint *)(iVar4 + 0xc);
                      local_c = uVar7;
                    } while ((int)uVar7 < (int)uVar5);
                  }
                }
              }
            }
            else {
              *(undefined1 *)(iVar8 + 7) = 2;
              uVar7 = extraout_EDX_00;
            }
            break;
          case 1:
            if (DAT_007fa174 == 0) {
              local_8 = (void *)0x0;
            }
            else {
              local_8 = (void *)thunk_FUN_0042b620(CONCAT31((int3)(uVar7 >> 8),
                                                            *(undefined1 *)((int)this + 0x5d7)),
                                                   CONCAT22((short)((uint)iVar4 >> 0x10),
                                                            *(undefined2 *)(iVar8 + 8)),1);
              uVar7 = extraout_EDX_06;
            }
            if (local_8 == (void *)0x0) {
              *(undefined1 *)(iVar8 + 7) = 0;
              *(undefined2 *)(iVar8 + 8) = 0;
            }
            else {
              sVar1 = *(short *)(iVar8 + 3);
              iVar4 = thunk_FUN_004e60d0(*(int *)((int)this + 0x5d7),(int)*(short *)(iVar8 + 1));
              if (iVar4 < sVar1) {
                iVar4 = thunk_FUN_004e3800(local_8,(int)*(short *)(iVar8 + 1),
                                           (int)*(short *)(iVar8 + 3));
                uVar7 = extraout_EDX_08;
                if (iVar4 == 0) {
                  *(undefined1 *)(iVar8 + 7) = 0;
                  *(undefined2 *)(iVar8 + 8) = 0;
                }
              }
              else {
                *(undefined1 *)(iVar8 + 7) = 2;
                uVar7 = extraout_EDX_07;
              }
            }
            break;
          case 2:
          case 3:
            FUN_006b0c70(iVar4,local_10);
            local_10 = uVar5 - 1;
            uVar7 = extraout_EDX_09;
          }
          iVar4 = *(int *)((int)this + 0x6a1);
          local_10 = local_10 + 1;
          bVar10 = local_10 < *(uint *)(iVar4 + 0xc);
        } while ((int)local_10 < (int)*(uint *)(iVar4 + 0xc));
      }
      if (((DAT_007fa174 != 0) && (*(char *)((int)this + 0x662) == '\x01')) &&
         (iVar4 = thunk_FUN_0067b1a0(this,(int)*(short *)((int)this + 0x660)),
         iVar4 < (int)((-(uint)(*(short *)((int)this + 0x5ec) != 3) & 0xfffffffc) + 5))) {
        thunk_FUN_004e7230(*(int *)((int)this + 0x5d7),(int)*(short *)((int)this + 0x660),local_c8,
                           local_ac);
        iVar4 = 0;
        do {
          if (*(int *)((int)local_c8 + iVar4) == 0) {
            DAT_00858df8 = (undefined4 *)local_90;
            return;
          }
          thunk_FUN_0067b3c0(this,*(int *)((int)local_c8 + iVar4),*(int *)((int)local_ac + iVar4),
                             (int)*(short *)((int)this + 0x663),
                             (char)*(undefined2 *)((int)this + 0x660));
          iVar4 = iVar4 + 4;
        } while (iVar4 < 0x1c);
      }
      DAT_00858df8 = (undefined4 *)local_90;
      return;
    }
    DAT_00858df8 = (undefined4 *)local_90;
    iVar8 = FUN_006ad4d0(s_E____titans_ai_ai_plr_cpp_007d2e4c,0x40d,0,iVar4,&DAT_007a4ccc);
    if (iVar8 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar4,0,0x7d2e4c,0x40e);
  }
  return;
}

