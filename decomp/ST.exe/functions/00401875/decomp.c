
void __thiscall
STAllPlayersC::SetActivePanel(STAllPlayersC *this,uint param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  undefined3 uVar8;
  undefined3 uVar11;
  uint uVar9;
  int iVar10;
  undefined4 uVar12;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  iVar5 = param_2;
  iStack_10 = 0;
  iStack_c = 0;
  iStack_8 = 0;
  if (param_1 == 0) {
    iVar6 = (uint)DAT_0080874d * 0xa62;
    if (*(int *)((int)&DAT_007f5023 + iVar6) == 0) {
      if (param_2 == 0) {
        return;
      }
      piVar1 = (int *)((int)&DAT_007f4f83 + iVar6 + param_2 * 0x10);
      iVar6 = *piVar1;
      if (iVar6 == 0) {
        return;
      }
      uVar11 = (undefined3)((uint)piVar1 >> 8);
      if (iVar6 != 0x3c) {
        if (iVar6 == 0x1ae) {
          if (param_3 == 1) {
            pvVar7 = (void *)thunk_FUN_0042b620(CONCAT31(uVar11,(char)piVar1[1]),
                                                (uint)*(ushort *)(piVar1 + 2),3);
            thunk_FUN_004162b0(pvVar7,(undefined2 *)&iStack_10,(undefined2 *)&iStack_c,
                               (undefined2 *)&iStack_8);
            iVar5 = FUN_006eb230(DAT_00807598,*(uint *)((int)pvVar7 + 0x1ed),DAT_00807410,
                                 DAT_00807414,DAT_00807418,DAT_0080741c);
            if (iVar5 != 1) {
              thunk_FUN_004a8e00(iStack_10,iStack_c,iStack_8);
              thunk_FUN_004a8f20(1);
              thunk_FUN_00567510(&DAT_00807658,DAT_008073d8,DAT_008073dc,DAT_008073fc,
                                 DAT_0080743c & 0xff);
              thunk_FUN_0054b540(DAT_00802a30);
              DAT_0080674c = 2;
              DAT_0080745d = 0;
            }
          }
          thunk_FUN_0044b030(DAT_0080874d,0,param_2);
          return;
        }
        iVar5 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1a3b,0,0,&DAT_007a4ccc);
        if (iVar5 == 0) {
          return;
        }
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (((param_3 == 1) &&
          (iVar6 = thunk_FUN_0043aaf0(0x3c,CONCAT31(uVar11,(char)piVar1[1]),
                                      *(int *)((int)piVar1 + 10),
                                      CONCAT22((short)((uint)&iStack_c >> 0x10),(short)piVar1[2]),
                                      &iStack_10,&iStack_c,&iStack_8,&param_1), iVar6 == 0)) &&
         (iVar6 = FUN_006eb230(DAT_00807598,param_1,DAT_00807410,DAT_00807414,DAT_00807418,
                               DAT_0080741c), iVar6 != 1)) {
        thunk_FUN_004a8e00(iStack_10,iStack_c,iStack_8);
        thunk_FUN_004a8f20(1);
        thunk_FUN_00567510(&DAT_00807658,DAT_008073d8,DAT_008073dc,DAT_008073fc,DAT_0080743c & 0xff)
        ;
        thunk_FUN_0054b540(DAT_00802a30);
        DAT_0080674c = 2;
        DAT_0080745d = 0;
      }
    }
    else {
      if (*(int *)((int)&DAT_007f5023 + iVar6) != 1) {
        iVar5 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1a6b,0,0,&DAT_007a4ccc);
        if (iVar5 != 0) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        goto LAB_0043aee4;
      }
      iVar10 = param_2 * 0x10;
      iVar2 = *(int *)((int)&DAT_007f4f83 + iVar6 + iVar10);
      iVar6 = iVar6 + iVar10;
      if (iVar2 == 0) {
        return;
      }
      if (iVar2 == 0x3c) {
        if (((param_3 == 1) &&
            (uVar9 = CONCAT22((short)((uint)&iStack_c >> 0x10),
                              *(undefined2 *)((int)&DAT_007f4f83 + iVar6 + 8)),
            iVar6 = thunk_FUN_0043aaf0(0x3c,CONCAT31((int3)(uVar9 >> 8),
                                                     *(undefined1 *)((int)&DAT_007f4f83 + iVar6 + 4)
                                                    ),*(int *)((int)&DAT_007f4f83 + iVar6 + 10),
                                       uVar9,&iStack_10,&iStack_c,&iStack_8,&param_1), iVar6 == 0))
           && (iVar6 = FUN_006eb230(DAT_00807598,param_1,DAT_00807410,DAT_00807414,DAT_00807418,
                                    DAT_0080741c), iVar6 != 1)) {
          thunk_FUN_004a8e00(iStack_10,iStack_c,iStack_8);
          thunk_FUN_004a8f20(1);
          thunk_FUN_00567510(&DAT_00807658,DAT_008073d8,DAT_008073dc,DAT_008073fc,
                             DAT_0080743c & 0xff);
          thunk_FUN_0054b540(DAT_00802a30);
          DAT_0080674c = 2;
          DAT_0080745d = 0;
        }
        bVar4 = DAT_0080874d;
        *(undefined4 *)((int)&DAT_007f5023 + (uint)DAT_0080874d * 0xa62) = 0;
        thunk_FUN_0042d4f0(bVar4,1,0,0);
        thunk_FUN_0044b030(DAT_0080874d,0,iVar5);
        return;
      }
      if (iVar2 != 0x1ae) {
        iVar5 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1a67,0,0,&DAT_007a4ccc);
        if (iVar5 == 0) {
          return;
        }
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (param_3 == 1) {
        pvVar7 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)iVar10 >> 8),
                                                     *(undefined1 *)((int)&DAT_007f4f83 + iVar6 + 4)
                                                    ),
                                            (uint)*(ushort *)((int)&DAT_007f4f83 + iVar6 + 8),3);
        thunk_FUN_004162b0(pvVar7,(undefined2 *)&iStack_10,(undefined2 *)&iStack_c,
                           (undefined2 *)&iStack_8);
        iVar5 = FUN_006eb230(DAT_00807598,*(uint *)((int)pvVar7 + 0x1ed),DAT_00807410,DAT_00807414,
                             DAT_00807418,DAT_0080741c);
        if (iVar5 != 1) {
          thunk_FUN_004a8e00(iStack_10,iStack_c,iStack_8);
          thunk_FUN_004a8f20(1);
          thunk_FUN_00567510(&DAT_00807658,DAT_008073d8,DAT_008073dc,DAT_008073fc,
                             DAT_0080743c & 0xff);
          thunk_FUN_0054b540(DAT_00802a30);
          DAT_0080674c = 2;
          DAT_0080745d = 0;
        }
      }
      bVar4 = DAT_0080874d;
      *(undefined4 *)((int)&DAT_007f5023 + (uint)DAT_0080874d * 0xa62) = 0;
      thunk_FUN_0042d4f0(bVar4,1,0,0);
      iVar5 = param_2;
    }
    iVar6 = 0;
    goto LAB_0043bb49;
  }
  if (param_1 != 1) {
    iVar5 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1b2b,0,0,&DAT_007a4ccc);
    if (iVar5 == 0) {
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_0043aee4:
  iVar5 = param_2;
  iVar6 = (uint)DAT_0080874d * 0xa62;
  uVar11 = (undefined3)((uint)DAT_0080874d * 0x29 >> 8);
  if (*(int *)((int)&DAT_007f5023 + iVar6) != 0) {
    if (*(int *)((int)&DAT_007f5023 + iVar6) != 1) {
      iVar5 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1b27,0,0,&DAT_007a4ccc);
      if (iVar5 == 0) {
        return;
      }
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (param_2 == 0) {
      return;
    }
    piVar1 = (int *)((int)&DAT_007f4fd3 + iVar6 + param_2 * 0x10);
    iVar6 = *piVar1;
    if (iVar6 < 0x19b) {
      if (iVar6 == 0x19a) {
        if (((param_3 == 1) &&
            (uVar9 = CONCAT22((short)((uint)&iStack_c >> 0x10),(short)piVar1[2]),
            iVar6 = thunk_FUN_0043aaf0(0x19a,CONCAT31((int3)(uVar9 >> 8),(char)piVar1[1]),
                                       *(int *)((int)piVar1 + 10),uVar9,&iStack_10,&iStack_c,
                                       &iStack_8,&param_1), iVar6 == 0)) &&
           (iVar6 = FUN_006eb230(DAT_00807598,param_1,DAT_00807410,DAT_00807414,DAT_00807418,
                                 DAT_0080741c), iVar6 != 1)) {
          thunk_FUN_004a8e00(iStack_10,iStack_c,iStack_8);
          thunk_FUN_004a8f20(1);
          thunk_FUN_00567510(&DAT_00807658,DAT_008073d8,DAT_008073dc,DAT_008073fc,
                             DAT_0080743c & 0xff);
          thunk_FUN_0054b540(DAT_00802a30);
          DAT_0080674c = 2;
          DAT_0080745d = 0;
        }
        thunk_FUN_0044b030(DAT_0080874d,1,iVar5);
        return;
      }
      if (iVar6 == 0) {
        return;
      }
      if (iVar6 == 0x5a) {
        if (param_3 == 1) {
          uVar12 = 4;
LAB_0043b0f1:
          pvVar7 = (void *)thunk_FUN_0042b620(CONCAT31(uVar11,(char)piVar1[1]),
                                              CONCAT22((short)((uint)param_3 >> 0x10),
                                                       (short)piVar1[2]),uVar12);
          thunk_FUN_004162b0(pvVar7,(undefined2 *)&iStack_10,(undefined2 *)&iStack_c,
                             (undefined2 *)&iStack_8);
          iVar5 = FUN_006eb230(DAT_00807598,*(uint *)((int)pvVar7 + 0x1ed),DAT_00807410,DAT_00807414
                               ,DAT_00807418,DAT_0080741c);
          if (iVar5 != 1) {
            thunk_FUN_004a8e00(iStack_10,iStack_c,iStack_8);
            thunk_FUN_004a8f20(1);
            thunk_FUN_00567510(&DAT_00807658,DAT_008073d8,DAT_008073dc,DAT_008073fc,
                               DAT_0080743c & 0xff);
            thunk_FUN_0054b540(DAT_00802a30);
            DAT_0080674c = 2;
            DAT_0080745d = 0;
            iVar6 = 1;
            iVar5 = param_2;
            goto LAB_0043bb49;
          }
        }
        goto LAB_0043b686;
      }
      if (iVar6 != 0x172) {
LAB_0043b0af:
        iVar5 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1ac4,0,0,&DAT_007a4ccc);
        if (iVar5 == 0) {
          return;
        }
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (param_3 != 1) goto LAB_0043b294;
      uVar12 = 2;
    }
    else {
      if (iVar6 != 0x1a4) {
        if (iVar6 != 0x1b8) goto LAB_0043b0af;
        if (param_3 == 1) {
          uVar12 = 6;
          goto LAB_0043b0f1;
        }
        goto LAB_0043b686;
      }
      if (param_3 != 1) goto LAB_0043b294;
      uVar12 = 5;
    }
    pvVar7 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)piVar1 >> 8),(char)piVar1[1]),
                                        (uint)*(ushort *)(piVar1 + 2),uVar12);
    thunk_FUN_004162b0(pvVar7,(undefined2 *)&iStack_10,(undefined2 *)&iStack_c,
                       (undefined2 *)&iStack_8);
    iVar5 = FUN_006eb230(DAT_00807598,*(uint *)((int)pvVar7 + 0x1ed),DAT_00807410,DAT_00807414,
                         DAT_00807418,DAT_0080741c);
    if (iVar5 != 1) {
      thunk_FUN_004a8e00(iStack_10,iStack_c,iStack_8);
      thunk_FUN_004a8f20(1);
      thunk_FUN_00567510(&DAT_00807658,DAT_008073d8,DAT_008073dc,DAT_008073fc,DAT_0080743c & 0xff);
      thunk_FUN_0054b540(DAT_00802a30);
      DAT_0080674c = 2;
      DAT_0080745d = 0;
    }
LAB_0043b294:
    thunk_FUN_0044b030(DAT_0080874d,1,param_2);
    return;
  }
  piVar1 = (int *)((int)&DAT_007f4fd3 + iVar6 + param_2 * 0x10);
  iVar6 = *piVar1;
  uVar8 = (undefined3)((uint)piVar1 >> 8);
  if (iVar6 < 0x19b) {
    if (iVar6 == 0x19a) {
      if (((param_3 == 1) &&
          (uVar9 = CONCAT22((short)((uint)&iStack_c >> 0x10),(short)piVar1[2]),
          iVar6 = thunk_FUN_0043aaf0(0x19a,CONCAT31((int3)(uVar9 >> 8),(char)piVar1[1]),
                                     *(int *)((int)piVar1 + 10),uVar9,&iStack_10,&iStack_c,&iStack_8
                                     ,&param_1), iVar6 == 0)) &&
         (iVar6 = FUN_006eb230(DAT_00807598,param_1,DAT_00807410,DAT_00807414,DAT_00807418,
                               DAT_0080741c), iVar6 != 1)) {
        thunk_FUN_004a8e00(iStack_10,iStack_c,iStack_8);
        thunk_FUN_004a8f20(1);
        thunk_FUN_00567510(&DAT_00807658,DAT_008073d8,DAT_008073dc,DAT_008073fc,DAT_0080743c & 0xff)
        ;
        thunk_FUN_0054b540(DAT_00802a30);
        DAT_0080674c = 2;
        DAT_0080745d = 0;
      }
      bVar4 = DAT_0080874d;
      *(undefined4 *)((int)&DAT_007f5023 + (uint)DAT_0080874d * 0xa62) = 1;
      thunk_FUN_0042d4f0(bVar4,0,0,0);
      thunk_FUN_0044b030(DAT_0080874d,1,iVar5);
      return;
    }
    if (iVar6 == 0) {
      return;
    }
    if (iVar6 == 0x5a) {
      if (param_3 == 1) {
        uVar12 = 4;
LAB_0043b2fe:
        pvVar7 = (void *)thunk_FUN_0042b620(CONCAT31(uVar8,(char)piVar1[1]),
                                            (uint)*(ushort *)(piVar1 + 2),uVar12);
        thunk_FUN_004162b0(pvVar7,(undefined2 *)&iStack_10,(undefined2 *)&iStack_c,
                           (undefined2 *)&iStack_8);
        iVar5 = FUN_006eb230(DAT_00807598,*(uint *)((int)pvVar7 + 0x1ed),DAT_00807410,DAT_00807414,
                             DAT_00807418,DAT_0080741c);
joined_r0x0043b5ec:
        if (iVar5 != 1) {
          thunk_FUN_004a8e00(iStack_10,iStack_c,iStack_8);
          thunk_FUN_004a8f20(1);
LAB_0043b630:
          thunk_FUN_00567510(&DAT_00807658,DAT_008073d8,DAT_008073dc,DAT_008073fc,
                             DAT_0080743c & 0xff);
          thunk_FUN_0054b540(DAT_00802a30);
          DAT_0080674c = 2;
          DAT_0080745d = 0;
        }
      }
    }
    else {
      if (iVar6 != 0x172) {
LAB_0043b4a2:
        iVar5 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1b23,0,0,&DAT_007a4ccc);
        if (iVar5 == 0) {
          return;
        }
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (param_3 == 1) {
        uVar12 = 2;
        goto LAB_0043b2fe;
      }
    }
  }
  else if (iVar6 == 0x1a4) {
    if (param_3 == 1) {
      pvVar7 = (void *)thunk_FUN_0042b620(CONCAT31(uVar8,(char)piVar1[1]),
                                          (uint)*(ushort *)(piVar1 + 2),5);
      thunk_FUN_004162b0(pvVar7,(undefined2 *)&iStack_10,(undefined2 *)&iStack_c,
                         (undefined2 *)&iStack_8);
      iVar5 = FUN_006eb230(DAT_00807598,*(uint *)((int)pvVar7 + 0x1ed),DAT_00807410,DAT_00807414,
                           DAT_00807418,DAT_0080741c);
      goto joined_r0x0043b5ec;
    }
  }
  else {
    if (iVar6 != 0x1b8) goto LAB_0043b4a2;
    if (param_3 == 1) {
      pvVar7 = (void *)thunk_FUN_0042b620(CONCAT31(uVar11,(char)piVar1[1]),
                                          (uint)*(ushort *)(piVar1 + 2),6);
      thunk_FUN_004162b0(pvVar7,(undefined2 *)&iStack_10,(undefined2 *)&iStack_c,
                         (undefined2 *)&iStack_8);
      iVar5 = FUN_006eb230(DAT_00807598,*(uint *)((int)pvVar7 + 0x1ed),DAT_00807410,DAT_00807414,
                           DAT_00807418,DAT_0080741c);
      if (iVar5 != 1) {
        thunk_FUN_004a8e00(iStack_10,iStack_c,iStack_8);
        thunk_FUN_004a8f20(1);
        goto LAB_0043b630;
      }
    }
  }
  bVar4 = DAT_0080874d;
  *(undefined4 *)((int)&DAT_007f5023 + (uint)DAT_0080874d * 0xa62) = 1;
  thunk_FUN_0042d4f0(bVar4,0,0,0);
LAB_0043b686:
  iVar6 = 1;
  iVar5 = param_2;
LAB_0043bb49:
  thunk_FUN_0044b030(DAT_0080874d,iVar6,iVar5);
  return;
}

