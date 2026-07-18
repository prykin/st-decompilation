
void __thiscall AiPlrClassTy::ExecTech(AiPlrClassTy *this,void *param_1)

{
  short sVar1;
  code *pcVar2;
  AiPlrClassTy *this_00;
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
  AiTactClassTy *pAVar9;
  bool bVar10;
  int aiStack_c8 [7];
  int aiStack_ac [7];
  undefined4 uStack_90;
  undefined4 auStack_8c [16];
  uint auStack_4c [2];
  char cStack_44;
  undefined1 uStack_43;
  int iStack_42;
  undefined2 uStack_3e;
  AiPlrClassTy *pAStack_18;
  int iStack_14;
  uint uStack_10;
  uint uStack_c;
  AiTactClassTy *pAStack_8;
  
  if (((*(int *)(this + 0x695) != 0) && (DAT_007fa174 != 0)) &&
     ((*(int *)(this + 0x66e) == 0 ||
      ((uint)(*(int *)(this + 0x672) + *(int *)(this + 0x66e)) <= *(uint *)(this + 0x6fe))))) {
    *(undefined4 *)(this + 0x672) = *(undefined4 *)(this + 0x6fe);
    uStack_90 = DAT_00858df8;
    DAT_00858df8 = &uStack_90;
    pAStack_18 = this;
    iVar4 = __setjmp3(auStack_8c,0,unaff_EDI,unaff_ESI);
    this_00 = pAStack_18;
    if (iVar4 == 0) {
      uStack_10 = 0;
      iVar4 = *(int *)(pAStack_18 + 0x6a1);
      if (0 < *(int *)(iVar4 + 0xc)) {
        bVar10 = *(int *)(iVar4 + 0xc) != 0;
        uVar7 = extraout_EDX;
        do {
          uVar5 = uStack_10;
          if (bVar10) {
            iVar8 = *(int *)(iVar4 + 8) * uStack_10 + *(int *)(iVar4 + 0x1c);
          }
          else {
            iVar8 = 0;
          }
          switch(*(undefined1 *)(iVar8 + 7)) {
          case 0:
            sVar1 = *(short *)(iVar8 + 3);
            iVar4 = thunk_FUN_004e60d0(*(int *)(this_00 + 0x5d7),(int)*(short *)(iVar8 + 1));
            if (iVar4 < sVar1) {
              bVar10 = thunk_FUN_004e5f90(*(int *)(this_00 + 0x5d7),(int)*(short *)(iVar8 + 1));
              uVar7 = extraout_EDX_01;
              if (CONCAT31(extraout_var,bVar10) == 0) {
                pAVar9 = (AiTactClassTy *)(int)*(short *)(iVar8 + 1);
                iStack_14 = (int)*(short *)(iVar8 + 3);
                pAStack_8 = pAVar9;
                bVar10 = thunk_FUN_004e5910(*(int *)(this_00 + 0x5d7),(uint)pAVar9);
                uVar7 = extraout_EDX_02;
                if ((CONCAT31(extraout_var_00,bVar10) == 0) ||
                   (bVar10 = thunk_FUN_004e5c40(*(int *)(this_00 + 0x5d7),(uint)pAVar9),
                   uVar7 = extraout_EDX_03, CONCAT31(extraout_var_01,bVar10) == 0)) {
LAB_0067b6db:
                  bVar10 = false;
                }
                else {
                  uVar3 = thunk_FUN_004e6140(*(int *)(this_00 + 0x5d7),(int)pAVar9);
                  uStack_c = CONCAT31(extraout_var_02,uVar3);
                  iVar4 = thunk_FUN_004e60d0(*(int *)(this_00 + 0x5d7),(int)pAVar9);
                  uVar7 = uStack_c;
                  if (((int)uStack_c <= iVar4) ||
                     ((iVar4 = thunk_FUN_004e60d0(*(int *)(this_00 + 0x5d7),(int)pAVar9),
                      uVar7 = extraout_EDX_04, iVar4 != iStack_14 + -1 ||
                      (bVar10 = thunk_FUN_004e5f90(*(int *)(this_00 + 0x5d7),(uint)pAVar9),
                      uVar7 = extraout_EDX_05, CONCAT31(extraout_var_03,bVar10) != 0))))
                  goto LAB_0067b6db;
                  bVar10 = true;
                }
                if (bVar10) {
                  iVar4 = *(int *)(this_00 + 0x695);
                  uVar7 = 0;
                  uStack_c = 0;
                  uVar5 = *(uint *)(iVar4 + 0xc);
                  if (0 < (int)uVar5) {
                    do {
                      uVar7 = uStack_c;
                      if (((iVar4 == 0) || ((int)uStack_c < 0)) || ((int)uVar5 <= (int)uStack_c)) {
LAB_0067b724:
                        pAStack_8 = (AiTactClassTy *)0x0;
                      }
                      else {
                        if (uStack_c < uVar5) {
                          puVar6 = (uint *)(*(int *)(iVar4 + 8) * uStack_c + *(int *)(iVar4 + 0x1c))
                          ;
                        }
                        else {
                          puVar6 = (uint *)0x0;
                        }
                        if (puVar6[1] == 0) goto LAB_0067b724;
                        pAStack_8 = (AiTactClassTy *)*puVar6;
                      }
                      if (pAStack_8 != (AiTactClassTy *)0x0) {
                        puVar6 = auStack_4c;
                        for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
                          *puVar6 = 0;
                          puVar6 = puVar6 + 1;
                        }
                        auStack_4c[1] = *(uint *)(this_00 + 0x6fe);
                        auStack_4c[0] = 0x73;
                        uStack_43 = 1;
                        iStack_42 = iVar8;
                        if (&stack0x00000000 != (undefined1 *)0x4c) {
                          AiTactClassTy::GetAiMess(pAStack_8,auStack_4c);
                          uVar7 = uStack_c;
                        }
                        if ('\0' < cStack_44) {
                          *(undefined1 *)(iVar8 + 7) = 1;
                          uVar7 = CONCAT22((short)(uVar7 >> 0x10),uStack_3e);
                          *(undefined2 *)(iVar8 + 8) = uStack_3e;
                          break;
                        }
                      }
                      iVar4 = *(int *)(this_00 + 0x695);
                      uVar7 = uVar7 + 1;
                      uVar5 = *(uint *)(iVar4 + 0xc);
                      uStack_c = uVar7;
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
              pAStack_8 = (AiTactClassTy *)0x0;
            }
            else {
              pAStack_8 = (AiTactClassTy *)
                          thunk_FUN_0042b620(CONCAT31((int3)(uVar7 >> 8),this_00[0x5d7]),
                                             CONCAT22((short)((uint)iVar4 >> 0x10),
                                                      *(undefined2 *)(iVar8 + 8)),1);
              uVar7 = extraout_EDX_06;
            }
            if (pAStack_8 == (AiTactClassTy *)0x0) {
              *(undefined1 *)(iVar8 + 7) = 0;
              *(undefined2 *)(iVar8 + 8) = 0;
            }
            else {
              sVar1 = *(short *)(iVar8 + 3);
              iVar4 = thunk_FUN_004e60d0(*(int *)(this_00 + 0x5d7),(int)*(short *)(iVar8 + 1));
              if (iVar4 < sVar1) {
                iVar4 = thunk_FUN_004e3800(pAStack_8,(int)*(short *)(iVar8 + 1),
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
            FUN_006b0c70(iVar4,uStack_10);
            uStack_10 = uVar5 - 1;
            uVar7 = extraout_EDX_09;
          }
          iVar4 = *(int *)(this_00 + 0x6a1);
          uStack_10 = uStack_10 + 1;
          bVar10 = uStack_10 < *(uint *)(iVar4 + 0xc);
        } while ((int)uStack_10 < (int)*(uint *)(iVar4 + 0xc));
      }
      if (((DAT_007fa174 != 0) && (this_00[0x662] == (AiPlrClassTy)0x1)) &&
         (iVar4 = thunk_FUN_0067b1a0(this_00,(int)*(short *)(this_00 + 0x660)),
         iVar4 < (int)((-(uint)(*(short *)(this_00 + 0x5ec) != 3) & 0xfffffffc) + 5))) {
        thunk_FUN_004e7230(*(int *)(this_00 + 0x5d7),(int)*(short *)(this_00 + 0x660),aiStack_c8,
                           aiStack_ac);
        iVar4 = 0;
        do {
          if (*(int *)((int)aiStack_c8 + iVar4) == 0) {
            DAT_00858df8 = (undefined4 *)uStack_90;
            return;
          }
          SetTech(this_00,*(int *)((int)aiStack_c8 + iVar4),*(int *)((int)aiStack_ac + iVar4),
                  (int)*(short *)(this_00 + 0x663),(char)*(undefined2 *)(this_00 + 0x660));
          iVar4 = iVar4 + 4;
        } while (iVar4 < 0x1c);
      }
      DAT_00858df8 = (undefined4 *)uStack_90;
      return;
    }
    DAT_00858df8 = (undefined4 *)uStack_90;
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

