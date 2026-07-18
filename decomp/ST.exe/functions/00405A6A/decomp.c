
undefined4 __fastcall thunk_FUN_004c84c0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined3 extraout_var;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  if (*(int *)((int)param_1 + 0x361) == 0) {
    if (param_1[0xf5] == 0) {
      return 0;
    }
    piVar3 = *(int **)((int)param_1 + 0x607);
    if (piVar3 == (int *)0x0) {
      return 0;
    }
    iVar6 = thunk_FUN_004c7860(param_1,*piVar3,piVar3[1],piVar3[2],1,0);
    if (iVar6 == 0) {
      return 0;
    }
    bVar5 = thunk_FUN_004c7c20((int)param_1);
    if (CONCAT31(extraout_var,bVar5) == 0) {
      return 0;
    }
    piVar3 = *(int **)((int)param_1 + 0x607);
    thunk_FUN_004c7cc0(param_1,*piVar3,piVar3[1],piVar3[2],0,piVar3[3],piVar3[4],piVar3[5],
                       (char *)(piVar3 + 6));
    if (1 < param_1[0xf5]) {
      uVar9 = param_1[0xf5] * 0x27 - 0x27;
      puVar11 = (undefined4 *)((int)*(undefined4 **)((int)param_1 + 0x607) + 0x27);
      puVar12 = *(undefined4 **)((int)param_1 + 0x607);
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *puVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar12 = puVar12 + 1;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar12 = *(undefined1 *)puVar11;
        puVar11 = (undefined4 *)((int)puVar11 + 1);
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
    }
    param_1[0xf5] = param_1[0xf5] + -1;
    return 0;
  }
  if (((*(int *)((int)param_1 + 0x361) == 5) &&
      (iVar6 = (**(code **)(*param_1 + 0x7c))(), iVar6 == 100)) || (99 < param_1[0xe5])) {
    iVar6 = thunk_FUN_004c94b0();
    if (iVar6 == 0) {
      return 0;
    }
    iVar6 = *(int *)((int)param_1 + 0x36d) + -1;
    *(int *)((int)param_1 + 0x36d) = iVar6;
    if (iVar6 < 1) {
      *(undefined4 *)((int)param_1 + 0x365) = *(undefined4 *)((int)param_1 + 0x361);
      iVar6 = thunk_FUN_004c90c0((int)param_1);
      if ((iVar6 == 0) &&
         (iVar6 = FUN_006ad4d0(s_E____titans_Artem_TLO_bproc_cpp_007ad3b4,0x19f,0,0,&DAT_007a4ccc),
         iVar6 != 0)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return uVar7;
      }
      *(undefined4 *)((int)param_1 + 0x36d) = 0;
      thunk_FUN_004c7460(param_1);
      return 0;
    }
    param_1[0xe3] = *(int *)(DAT_00802a38 + 0xe4);
    param_1[0xe5] = 0;
    thunk_FUN_004c7260(param_1,*(undefined4 *)((int)param_1 + 0x361),*(int *)((int)param_1 + 0x369),
                       param_1 + 0xe6,param_1 + 0xe7,param_1 + 0xe8,param_1 + 0xe9);
    param_1[0xea] = 0;
    param_1[0xeb] = 0;
    param_1[0xec] = 0;
    param_1[0xed] = 0;
    switch(param_1[0x16b]) {
    case 0x32:
    case 0x40:
    case 0x49:
    case 0x5c:
      thunk_FUN_004ce7a0((int)param_1);
      thunk_FUN_004ce860((int)param_1);
    }
    thunk_FUN_004c7460(param_1);
    return 0;
  }
  if (*(int *)((int)param_1 + 0x361) == 5) {
    uVar10 = (uint)param_1[0xe4] / 100;
    if (uVar10 == 0) {
      uVar10 = 1;
    }
    if (*(uint *)(DAT_00802a38 + 0xe4) < param_1[0xe3] + uVar10) {
      return 0;
    }
    param_1[0xe3] = *(uint *)(DAT_00802a38 + 0xe4);
    param_1[0xf0] = 0;
    param_1[0xf2] = 0;
    param_1[0xf1] = 0;
    param_1[0xef] = 0;
    param_1[0xee] = 0;
    iVar6 = *(int *)(&DAT_007e29f0 +
                    (*(int *)((int)param_1 + 0x235) * 3 + *(int *)((int)param_1 + 0x239)) * 4) / 100
    ;
    if (*(int *)(&DAT_007e29f0 +
                (*(int *)((int)param_1 + 0x235) * 3 + *(int *)((int)param_1 + 0x239)) * 4) != 0) {
      if (iVar6 == 0) {
        iVar6 = 1;
      }
      iVar8 = thunk_FUN_004d7b90((char)param_1[9],DAT_00794d84);
      if (iVar8 < iVar6) {
        param_1[0xef] = 1;
        goto LAB_004c8806;
      }
      thunk_FUN_004d7e50((char)param_1[9],
                         *(int *)(&DAT_00794d70 + *(int *)((int)param_1 + 0x361) * 4),param_1[6],
                         iVar6);
    }
    if (param_1[9] == (uint)*(byte *)(param_1[4] + 0x112d)) {
      thunk_FUN_004d8b70((char)param_1[9]);
    }
    uVar10 = thunk_FUN_004406c0(*(char *)((int)param_1 + 0x23d));
    *(int *)((int)param_1 + 0x241) =
         *(int *)((int)param_1 + 0x241) +
         *(int *)(&DAT_007e4178 + ((uVar10 & 0xff) + *(int *)((int)param_1 + 0x235) * 3) * 4) / 100;
    uVar10 = thunk_FUN_004406c0(*(char *)((int)param_1 + 0x23d));
    *(int *)((int)param_1 + 0x5d7) =
         (*(int *)((int)param_1 + 0x241) * 100) /
         *(int *)(&DAT_007e4178 + ((uVar10 & 0xff) + *(int *)((int)param_1 + 0x235) * 3) * 4);
    uVar10 = thunk_FUN_004406c0(*(char *)((int)param_1 + 0x23d));
    if (*(int *)(&DAT_007e4178 + ((uVar10 & 0xff) + *(int *)((int)param_1 + 0x235) * 3) * 4) <=
        *(int *)((int)param_1 + 0x241)) {
      uVar10 = thunk_FUN_004406c0(*(char *)((int)param_1 + 0x23d));
      *(undefined4 *)((int)param_1 + 0x241) =
           *(undefined4 *)
            (&DAT_007e4178 + ((uVar10 & 0xff) + *(int *)((int)param_1 + 0x235) * 3) * 4);
    }
LAB_004c8806:
    thunk_FUN_004c7260(param_1,*(undefined4 *)((int)param_1 + 0x361),*(int *)((int)param_1 + 0x369),
                       param_1 + 0xe6,param_1 + 0xe7,param_1 + 0xe8,param_1 + 0xe9);
    thunk_FUN_004c7460(param_1);
    return 0;
  }
  uVar10 = (uint)param_1[0xe4] / 100;
  if (uVar10 == 0) {
    uVar10 = 1;
  }
  iVar6 = (**(code **)(*param_1 + 0x2c))();
  iVar6 = thunk_FUN_004b72e0((char)param_1[9],iVar6);
  if ((iVar6 == 0) || (iVar6 = thunk_FUN_004b79c0((char)param_1[9],param_1[6]), iVar6 != 0)) {
    iVar6 = 0;
  }
  else {
    iVar6 = 1;
  }
  param_1[0xee] = iVar6;
  if ((iVar6 != 0) && (uVar10 = uVar10 << 2, DAT_00811798 != (void *)0x0)) {
    thunk_FUN_00621580(DAT_00811798,param_1[9],5);
  }
  if (*(uint *)(DAT_00802a38 + 0xe4) < param_1[0xe3] + uVar10) {
    return 0;
  }
  param_1[0xe3] = *(uint *)(DAT_00802a38 + 0xe4);
  bVar5 = true;
  param_1[0xf0] = 0;
  param_1[0xf2] = 0;
  param_1[0xf1] = 0;
  param_1[0xef] = 0;
  iStack_c = 0;
  iStack_8 = 0;
  iStack_10 = 0;
  iStack_14 = 0;
  iVar6 = 0;
  if (*(int *)(&DAT_00794d70 + *(int *)((int)param_1 + 0x361) * 4) == -1) {
LAB_004c8bf2:
    param_1[0xe5] = param_1[0xe5] + 1;
    if (*(int *)(&DAT_00794d70 + *(int *)((int)param_1 + 0x361) * 4) != -1) {
      param_1[0xea] = param_1[0xea] + iVar6;
      param_1[0xec] = param_1[0xec] + iStack_8;
      param_1[0xeb] = param_1[0xeb] + iStack_10;
      param_1[0xed] = param_1[0xed] + iStack_c;
      iVar8 = thunk_FUN_004406c0((char)param_1[9]);
      if ((char)iVar8 == '\x03') {
        if (iVar6 != 0) {
          thunk_FUN_004e4330(param_1[9],iVar6);
        }
      }
      else if (iVar6 != 0) {
        thunk_FUN_004d7c10((char)param_1[9],
                           *(int *)(&DAT_00794d70 + *(int *)((int)param_1 + 0x361) * 4),param_1[6],
                           iVar6);
      }
      if (iStack_10 != 0) {
        thunk_FUN_004d7d30((char)param_1[9],
                           *(int *)(&DAT_00794d70 + *(int *)((int)param_1 + 0x361) * 4),param_1[6],
                           iStack_10);
      }
      if (iStack_8 != 0) {
        thunk_FUN_004d7e50((char)param_1[9],
                           *(int *)(&DAT_00794d70 + *(int *)((int)param_1 + 0x361) * 4),param_1[6],
                           iStack_8);
      }
      if (iStack_c != 0) {
        thunk_FUN_004d7f70((char)param_1[9],
                           *(int *)(&DAT_00794d70 + *(int *)((int)param_1 + 0x361) * 4),param_1[6],
                           iStack_c);
      }
    }
    if (100 < param_1[0xe5]) {
      param_1[0xe5] = 100;
    }
    if (param_1[9] == (uint)*(byte *)(param_1[4] + 0x112d)) {
      thunk_FUN_004d8b70((char)param_1[9]);
      return 0;
    }
  }
  else {
    iVar6 = param_1[0xe6];
    if (99 < iVar6) {
      iStack_14 = iVar6 / 100;
    }
    iVar8 = param_1[0xe7];
    if (99 < iVar8) {
      iStack_10 = iVar8 / 100;
    }
    iVar1 = param_1[0xe8];
    if (99 < iVar1) {
      iStack_8 = iVar1 / 100;
    }
    iVar2 = param_1[0xe9];
    if (99 < iVar2) {
      iStack_c = iVar2 / 100;
    }
    if (iVar6 % 100 != 0) {
      iStack_14 = iStack_14 + 1;
    }
    if (iVar8 % 100 != 0) {
      iStack_10 = iStack_10 + 1;
    }
    if (iVar1 % 100 != 0) {
      iStack_8 = iStack_8 + 1;
    }
    if (iVar2 % 100 != 0) {
      iStack_c = iStack_c + 1;
    }
    if (iVar6 < param_1[0xea] + iStack_14) {
      iStack_14 = iVar6 - param_1[0xea];
    }
    if (iVar8 < param_1[0xeb] + iStack_10) {
      iStack_10 = iVar8 - param_1[0xeb];
    }
    if (iVar1 < iStack_8 + param_1[0xec]) {
      iStack_8 = iVar1 - param_1[0xec];
    }
    if (iVar2 < iStack_c + param_1[0xed]) {
      iStack_c = iVar2 - param_1[0xed];
    }
    iVar6 = thunk_FUN_004406c0((char)param_1[9]);
    if ((char)iVar6 == '\x03') {
      if ((iStack_14 != 0) && (iVar6 = thunk_FUN_004e41c0(param_1[9]), iVar6 < iStack_14)) {
        bVar5 = false;
        param_1[0xf2] = 1;
      }
    }
    else if ((iStack_14 != 0) &&
            (iVar6 = thunk_FUN_004d7b10((char)param_1[9],
                                        *(int *)(&DAT_00794d70 + *(int *)((int)param_1 + 0x361) * 4)
                                       ), iVar6 < iStack_14)) {
      bVar5 = false;
      param_1[0xf2] = 1;
    }
    if ((iStack_10 != 0) &&
       (iVar6 = thunk_FUN_004d7b50((char)param_1[9],
                                   *(int *)(&DAT_00794d70 + *(int *)((int)param_1 + 0x361) * 4)),
       iVar6 < iStack_10)) {
      bVar5 = false;
      param_1[0xf1] = 1;
    }
    if ((iStack_8 != 0) &&
       (iVar6 = thunk_FUN_004d7b90((char)param_1[9],
                                   *(int *)(&DAT_00794d70 + *(int *)((int)param_1 + 0x361) * 4)),
       iVar6 < iStack_8)) {
      bVar5 = false;
      param_1[0xef] = 1;
    }
    if ((iStack_c == 0) ||
       (iVar6 = thunk_FUN_004d7bd0((char)param_1[9],
                                   *(int *)(&DAT_00794d70 + *(int *)((int)param_1 + 0x361) * 4)),
       iStack_c <= iVar6)) {
      iVar6 = iStack_14;
      if (bVar5) goto LAB_004c8bf2;
    }
    else {
      param_1[0xf0] = 1;
    }
    if (DAT_00811798 != (void *)0x0) {
      if (param_1[0xef] != 0) {
        thunk_FUN_00621580(DAT_00811798,param_1[9],4);
      }
      if (param_1[0xf1] != 0) {
        thunk_FUN_00621580(DAT_00811798,param_1[9],2);
      }
      if (param_1[0xf2] != 0) {
        iVar6 = thunk_FUN_004406c0((char)param_1[9]);
        thunk_FUN_00621580(DAT_00811798,param_1[9],(-(uint)((char)iVar6 != '\x03') & 0xfffffffd) + 6
                          );
      }
      if (param_1[0xf0] != 0) {
        thunk_FUN_00621580(DAT_00811798,param_1[9],7);
        return 0;
      }
    }
  }
  return 0;
}

