
void FUN_00435060(void)

{
  int iVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  undefined2 uVar9;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int extraout_EDX_05;
  int iVar8;
  int extraout_EDX_06;
  int extraout_EDX_07;
  int extraout_EDX_08;
  int extraout_EDX_09;
  int extraout_EDX_10;
  int extraout_EDX_11;
  uint uVar10;
  int iVar11;
  uint local_c;
  int local_8;
  
  bVar3 = DAT_0080874d;
  if (DAT_0080874d != 0xff) {
    local_8 = 4;
    do {
      iVar4 = *(int *)((int)&DAT_007f4f83 + local_8 * 0x10 + (uint)bVar3 * 0xa62);
      iVar8 = local_8 * 0x10 + (uint)bVar3 * 0xa62;
      if (iVar4 != 0) {
        if (iVar4 == 0x3c) {
          iVar4 = *(int *)((int)&DAT_007f4f83 + iVar8 + 10);
          if (iVar4 != 0) {
            iVar4 = *(int *)(iVar4 + 0xc);
            uVar10 = 0;
            if (0 < iVar4) {
              do {
                uVar6 = FUN_006acc70(*(int *)((int)&DAT_007f4f83 + iVar8 + 10),uVar10,&local_c);
                piVar5 = (int *)thunk_FUN_0042b620(CONCAT31((int3)(uVar6 >> 8),
                                                            *(undefined1 *)
                                                             ((int)&DAT_007f4f83 + iVar8 + 4)),
                                                   local_c,1);
                if (piVar5 != (int *)0x0) {
                  if (local_8 == 0) {
                    thunk_FUN_00419df0(piVar5);
                  }
                  else {
                    thunk_FUN_0041a680((int)piVar5);
                  }
                }
                uVar10 = uVar10 + 1;
              } while ((int)uVar10 < iVar4);
            }
          }
        }
        else if (iVar4 == 0x1ae) {
          piVar5 = (int *)thunk_FUN_0042b620(0xffffffff,
                                             (uint)*(ushort *)((int)&DAT_007f4f83 + iVar8 + 8),3);
          if (piVar5 != (int *)0x0) {
            if (local_8 == 0) {
              thunk_FUN_00419df0(piVar5);
            }
            else {
              thunk_FUN_0041a680((int)piVar5);
            }
          }
        }
        else {
          iVar4 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x10bb,0,0,
                                     &DAT_007a4ccc,s_STAllPlayersC__SelfCheckObjContr_007a7334);
          if (iVar4 != 0) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
      }
      local_8 = local_8 + -1;
    } while (-1 < local_8);
    local_8 = 4;
    iVar4 = (int)&DAT_007f4fd3 + (uint)DAT_0080874d * 0xa62;
    iVar8 = iVar4;
    do {
      iVar11 = local_8;
      iVar7 = local_8 * 0x10 + iVar4;
      iVar1 = *(int *)(local_8 * 0x10 + iVar4);
      uVar9 = (undefined2)((uint)iVar8 >> 0x10);
      if (iVar1 < 0x19b) {
        if (iVar1 == 0x19a) {
          if (*(int *)(iVar7 + 10) != 0) {
            iVar1 = *(int *)(*(int *)(iVar7 + 10) + 0xc);
            uVar10 = 0;
            if (0 < iVar1) {
              do {
                uVar6 = FUN_006acc70(*(int *)(iVar7 + 10),uVar10,&local_c);
                piVar5 = (int *)thunk_FUN_0042b620(CONCAT31((int3)(uVar6 >> 8),
                                                            *(undefined1 *)(iVar7 + 4)),local_c,1);
                iVar8 = extraout_EDX_03;
                if (piVar5 != (int *)0x0) {
                  if (local_8 == 0) {
                    thunk_FUN_00419df0(piVar5);
                    iVar8 = extraout_EDX_04;
                  }
                  else {
                    thunk_FUN_0041a680((int)piVar5);
                    iVar8 = extraout_EDX_05;
                  }
                }
                uVar10 = uVar10 + 1;
                iVar11 = local_8;
              } while ((int)uVar10 < iVar1);
            }
          }
        }
        else if (iVar1 != 0) {
          if (iVar1 == 0x5a) {
            piVar5 = (int *)thunk_FUN_0042b620(0xffffffff,(uint)*(ushort *)(iVar7 + 8),4);
            iVar8 = extraout_EDX_01;
            if (piVar5 != (int *)0x0) {
              if (iVar11 != 0) goto LAB_004352f5;
              thunk_FUN_00419df0(piVar5);
              iVar8 = extraout_EDX_02;
            }
          }
          else {
            if (iVar1 != 0x172) goto LAB_00435287;
            piVar5 = (int *)thunk_FUN_0042b620(0xffffffff,CONCAT22(uVar9,*(undefined2 *)(iVar7 + 8))
                                               ,2);
            iVar8 = extraout_EDX;
            if (piVar5 != (int *)0x0) {
              if (iVar11 != 0) goto LAB_004352f5;
              thunk_FUN_00419df0(piVar5);
              iVar8 = extraout_EDX_00;
            }
          }
        }
      }
      else if (iVar1 == 0x1a4) {
        piVar5 = (int *)thunk_FUN_0042b620(0xffffffff,CONCAT22(uVar9,*(undefined2 *)(iVar7 + 8)),5);
        iVar8 = extraout_EDX_09;
        if (piVar5 != (int *)0x0) {
          if (iVar11 == 0) {
            thunk_FUN_00419df0(piVar5);
            iVar8 = extraout_EDX_10;
          }
          else {
LAB_004352f5:
            thunk_FUN_0041a680((int)piVar5);
            iVar8 = extraout_EDX_11;
          }
        }
      }
      else if (iVar1 == 0x1b8) {
        piVar5 = (int *)thunk_FUN_0042b620(0xffffffff,
                                           CONCAT22((short)((uint)iVar4 >> 0x10),
                                                    *(undefined2 *)(iVar7 + 8)),6);
        iVar8 = extraout_EDX_07;
        if (piVar5 != (int *)0x0) {
          if (iVar11 != 0) goto LAB_004352f5;
          thunk_FUN_00419df0(piVar5);
          iVar8 = extraout_EDX_08;
        }
      }
      else {
LAB_00435287:
        iVar7 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x10ec,0,0,&DAT_007a4ccc
                                   ,s_STAllPlayersC__SelfCheckObjContr_007a72e8);
        iVar8 = extraout_EDX_06;
        if (iVar7 != 0) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_8 = iVar11 + -1;
    } while (-1 < local_8);
  }
  return;
}

