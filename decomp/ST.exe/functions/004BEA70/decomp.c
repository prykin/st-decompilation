
/* [STPrototypeApplier] Propagated return.
   Evidence: 004BEA70 returns return of FUN_0044e1b0 @ 004C10A3 | 004BEA70 returns return of
   FUN_0044e1b0 @ 004C10BE | 004BEA70 returns return of FUN_0044e1b0 @ 004C10DA | 004BEA70 returns
   return of FUN_0044e1b0 @ 004C10EA | 004BEA70 returns return of FUN_0044e1b0 @ 004C10FA | 004BEA70
   returns return of FUN_0044e1b0 @ 004C110A | 004BEA70 returns return of FUN_0044e1b0 @ 004C111A |
   004BEA70 returns return of FUN_0044e1b0 @ 004C112A | 004BEA70 returns return of FUN_0044e1b0 @
   004C113A | 004BEA70 returns return of FUN_0044e1b0 @ 004C114A | 004BEA70 returns return of
   FUN_0044e1b0 @ 004C1162 */

bool __thiscall FUN_004bea70(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  undefined1 uVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  STGroupBoatC *pSVar8;
  uint uVar9;
  uint uVar10;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined1 *puVar11;
  undefined4 uVar12;
  short *psVar13;
  undefined3 extraout_var_07;
  short sVar14;
  undefined2 extraout_var_08;
  undefined2 *puVar15;
  int *piVar16;
  undefined4 extraout_EDX;
  undefined2 uVar17;
  bool bVar18;
  int *local_c;
  int *local_8;
  
  piVar2 = param_1;
  *param_1 = *(int *)((int)this + 0x5ac);
  *(byte *)((int)param_1 + 5) =
       ((*(uint *)((int)this + 0x24) != (uint)*(byte *)(*(int *)((int)this + 0x10) + 0x112d)) - 1U &
       0xfe) + 3;
  iVar6 = thunk_FUN_004406c0(*(char *)((int)this + 0x23d));
  *(char *)(param_1 + 1) = (char)iVar6;
  if (((*(byte *)((int)this + 0x1d1) & 4) == 0) && (*(int *)((int)this + 0x420) == 0)) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  *(undefined1 *)((int)param_1 + 7) = uVar4;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)((int)this + 0x21d);
  switch(*(undefined4 *)((int)this + 0x245)) {
  case 0:
  case 1:
  case 2:
  case 5:
  case 6:
    *(undefined1 *)((int)param_1 + 6) = 0;
    break;
  case 3:
  case 4:
    *(undefined1 *)((int)param_1 + 6) = 1;
  }
  *(undefined4 *)((int)param_1 + 9) = 0;
  *(undefined2 *)((int)param_1 + 0xd) = 0;
  *(undefined4 *)((int)param_1 + 0xf) = 0;
  *(undefined2 *)((int)param_1 + 0x13) = 0;
  piVar16 = param_1 + 7;
  for (iVar6 = 0xf; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar16 = 0;
    piVar16 = piVar16 + 1;
  }
  iVar6 = thunk_FUN_004e8030(*(int *)((int)this + 0x5ac));
  if (iVar6 == 3) {
    iVar7 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
    if ((char)iVar7 != '\x03') {
LAB_004beb5f:
      *(undefined1 *)((int)param_1 + 5) = 3;
      goto LAB_004beb63;
    }
LAB_004beb6d:
    *(undefined1 *)((int)param_1 + 9) = 0x33;
    if (((*(int *)((int)this + 0x245) == 0) && (iVar6 = thunk_FUN_004d6df0(this), iVar6 != 0)) &&
       (iVar6 = thunk_FUN_004e4140(*(int *)((int)this + 0x24)), iVar6 != 0)) {
      uVar4 = 1;
    }
    else {
LAB_004bebed:
      uVar4 = 0;
    }
LAB_004bebef:
    *(undefined1 *)((int)param_1 + 0xf) = uVar4;
  }
  else {
    iVar7 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
    if ((char)iVar7 == '\x03') goto LAB_004beb5f;
LAB_004beb63:
    if ((iVar6 != 1) && (iVar6 != 2)) goto LAB_004beb6d;
    if (*(int *)((int)this + 0x361) != 5) {
      *(undefined1 *)((int)param_1 + 9) = 0x20;
      iVar6 = (**(code **)(*(int *)this + 0x7c))();
      if ((iVar6 == 100) ||
         (((*(int *)((int)this + 0x245) != 0 && (*(int *)((int)this + 0x245) != 5)) ||
          (*(int *)((int)this + 0x361) != 0)))) goto LAB_004bebed;
      uVar4 = 1;
      goto LAB_004bebef;
    }
    *(undefined1 *)((int)param_1 + 9) = 0x32;
    *(bool *)((int)param_1 + 0xf) = *(int *)((int)this + 0x245) == 0;
  }
  iVar6 = thunk_FUN_004357f0(*(char *)((int)this + 0x24));
  if (iVar6 == 0) {
    *(undefined1 *)((int)param_1 + 0x15) = 0;
  }
  else {
    pSVar8 = thunk_FUN_0042b760(CONCAT31((int3)((uint)extraout_EDX >> 8),
                                         *(undefined1 *)((int)this + 0x24)),
                                CONCAT22(extraout_var_08,*(undefined2 *)((int)this + 0x30)));
    if ((pSVar8 == (STGroupBoatC *)0x0) || (pSVar8->field_001C == 0)) {
      *(undefined1 *)((int)param_1 + 0x15) = 1;
    }
    else {
      *(undefined1 *)((int)param_1 + 0x15) = 3;
    }
  }
  switch(*(undefined4 *)((int)this + 0x5ac)) {
  case 0x32:
    *(undefined1 *)((int)param_1 + 10) = 0x1d;
    if (*(int *)((int)this + 0x24) == *(int *)((int)this + 0x23d)) {
LAB_004bf427:
      if (*(int *)((int)this + 0x245) != 0) goto LAB_004bf438;
      uVar4 = 1;
    }
    else {
      uVar9 = thunk_FUN_004406c0((char)*(int *)((int)this + 0x23d));
      iVar6 = *(int *)((int)this + 0x235);
      uVar10 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
      if ((&DAT_007e1984)[(uVar10 & 0xff) + ((uVar9 & 0xff) + iVar6 * 3) * 3] != '\0')
      goto LAB_004bf427;
LAB_004bf438:
      uVar4 = 0;
    }
    *(undefined1 *)(param_1 + 4) = uVar4;
    *(undefined1 *)((int)param_1 + 0xb) = 0x26;
    if (*(int *)((int)this + 0x24) != *(int *)((int)this + 0x23d)) {
      uVar9 = thunk_FUN_004406c0((char)*(int *)((int)this + 0x23d));
      iVar6 = *(int *)((int)this + 0x235);
      uVar10 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
      if ((&DAT_007e1984)[(uVar10 & 0xff) + ((uVar9 & 0xff) + iVar6 * 3) * 3] == '\0')
      goto cf_common_join_004C01F3;
    }
    if (*(int *)((int)this + 0x245) != 0) goto cf_common_join_004C01F3;
    *(undefined1 *)((int)param_1 + 0x11) = 1;
    break;
  case 0x33:
    *(undefined1 *)((int)param_1 + 10) = 0x26;
    if (*(int *)((int)this + 0x24) != *(int *)((int)this + 0x23d)) {
      uVar9 = thunk_FUN_004406c0((char)*(int *)((int)this + 0x23d));
      iVar6 = *(int *)((int)this + 0x235);
      uVar10 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
      if ((&DAT_007e1984)[(uVar10 & 0xff) + ((uVar9 & 0xff) + iVar6 * 3) * 3] == '\0')
      goto cf_common_join_004C0278;
    }
    iVar6 = *(int *)((int)this + 0x245);
    goto joined_r0x004bfcb7;
  case 0x35:
    *(undefined1 *)((int)param_1 + 10) = 0x21;
    if (*(int *)((int)this + 0x24) != *(int *)((int)this + 0x23d)) {
      uVar9 = thunk_FUN_004406c0((char)*(int *)((int)this + 0x23d));
      iVar6 = *(int *)((int)this + 0x235);
      uVar10 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
      if ((&DAT_007e1984)[(uVar10 & 0xff) + ((uVar9 & 0xff) + iVar6 * 3) * 3] == '\0')
      goto cf_common_join_004C0278;
    }
    if (*(int *)((int)this + 0x245) == 0) {
      bVar18 = *(int *)((int)this + 0x361) == 0;
LAB_004bef54:
      if (bVar18) goto cf_common_join_004BEF5A;
    }
    goto cf_common_join_004C0278;
  case 0x36:
    goto switchD_004bec4d_caseD_36;
  case 0x37:
    *(undefined1 *)((int)param_1 + 10) = 0x26;
    if (*(int *)((int)this + 0x24) != *(int *)((int)this + 0x23d)) {
      uVar9 = thunk_FUN_004406c0((char)*(int *)((int)this + 0x23d));
      iVar6 = *(int *)((int)this + 0x235);
      uVar10 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
      if ((&DAT_007e1984)[(uVar10 & 0xff) + ((uVar9 & 0xff) + iVar6 * 3) * 3] == '\0')
      goto cf_common_join_004C0278;
    }
    if (*(int *)((int)this + 0x4d8) != 0xffff) goto cf_common_join_004C0278;
    goto cf_common_join_004BEF5A;
  case 0x3a:
    *(undefined1 *)((int)param_1 + 10) = 0x22;
    if (*(int *)((int)this + 0x24) != *(int *)((int)this + 0x23d)) {
      uVar9 = thunk_FUN_004406c0((char)*(int *)((int)this + 0x23d));
      iVar6 = *(int *)((int)this + 0x235);
      uVar10 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
      if ((&DAT_007e1984)[(uVar10 & 0xff) + ((uVar9 & 0xff) + iVar6 * 3) * 3] == '\0')
      goto cf_common_join_004C0278;
    }
    iVar6 = *(int *)((int)this + 0x245);
    goto joined_r0x004bfcb7;
  case 0x3c:
    *(undefined1 *)((int)param_1 + 10) = 0x28;
    if (*(int *)((int)this + 0x245) == 0) {
      if (*(int *)((int)this + 0x24) != *(int *)((int)this + 0x23d)) {
        uVar9 = thunk_FUN_004406c0((char)*(int *)((int)this + 0x23d));
        iVar6 = *(int *)((int)this + 0x235);
        uVar10 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
        if ((&DAT_007e1984)[(uVar10 & 0xff) + ((uVar9 & 0xff) + iVar6 * 3) * 3] == '\0')
        goto LAB_004bf7a5;
      }
      if (g_playerRuntime[*(int *)((int)this + 0x24)].field2298_0xa0e != 0) goto LAB_004bf7a5;
      uVar4 = 1;
    }
    else {
LAB_004bf7a5:
      uVar4 = 0;
    }
    *(undefined1 *)(param_1 + 4) = uVar4;
    *(undefined1 *)((int)param_1 + 0xb) = 0x29;
    if (*(int *)((int)this + 0x245) != 0) goto cf_common_join_004C01F3;
    if (*(int *)((int)this + 0x24) != *(int *)((int)this + 0x23d)) {
      uVar9 = thunk_FUN_004406c0((char)*(int *)((int)this + 0x23d));
      iVar6 = *(int *)((int)this + 0x235);
      uVar10 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
      if ((&DAT_007e1984)[(uVar10 & 0xff) + ((uVar9 & 0xff) + iVar6 * 3) * 3] == '\0')
      goto cf_common_join_004C01F3;
    }
    *(undefined1 *)((int)param_1 + 0x11) = 1;
    break;
  case 0x3e:
  case 0x3f:
  case 0x42:
  case 0x46:
  case 0x47:
  case 0x4a:
  case 0x4b:
  case 0x51:
    if ((((byte)*(undefined4 *)((int)this + 0x265) & 2) == 2) && (*(int *)((int)this + 0x26d) != 0))
    {
      *(undefined1 *)((int)param_1 + 10) = 0x52;
      if ((*(int *)((int)this + 0x245) == 0) || (*(int *)((int)this + 0x245) == 5)) {
LAB_004becbd:
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
    }
    else {
      *(undefined1 *)((int)param_1 + 10) = 3;
      if (*(int *)((int)this + 0x245) == 0) {
        if (*(int *)((int)this + 0x261) != 0) {
          if ((*(byte *)((int)this + 0x265) & 2) != 0) {
            *(undefined1 *)(param_1 + 4) = 3;
            goto switchD_004bec4d_caseD_36;
          }
          goto LAB_004becaa;
        }
      }
      else {
LAB_004becaa:
        if (*(int *)((int)this + 0x261) != 0) goto LAB_004becbd;
      }
      if (*(int *)((int)this + 0x245) == 5) goto LAB_004becbd;
      uVar4 = 0;
    }
    *(undefined1 *)(param_1 + 4) = uVar4;
switchD_004bec4d_caseD_36:
    uVar9 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
    uVar9 = uVar9 & 0xff;
    if (uVar9 == 1) {
      iVar6 = 0x1d;
    }
    else if (uVar9 == 2) {
      iVar6 = 0x89;
    }
    else if (uVar9 == 3) {
      iVar6 = 0x46;
    }
    else {
      iVar6 = 0;
    }
    if (*(int *)((int)this + 0x5ac) == 0x36) {
      *(undefined1 *)((int)param_1 + 10) = 0x2a;
      if (((*(int *)((int)this + 0x4d4) < 0x28) || (*(int *)((int)this + 0x245) != 0)) ||
         (iVar6 = thunk_FUN_004e60d0(*(int *)((int)this + 0x24),iVar6), iVar6 == 0)) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
      *(undefined1 *)(param_1 + 4) = uVar4;
    }
    uVar9 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
    if ((uVar9 & 0xff) == 1) {
      iVar6 = 0x10;
    }
    else if ((uVar9 & 0xff) == 2) {
      iVar6 = 0x85;
    }
    else {
      iVar6 = 0;
    }
    uVar9 = thunk_FUN_004406c0(*(char *)((int)this + 0x23d));
    if (*(int *)(&DAT_00791b14 + ((uVar9 & 0xff) + *(int *)((int)this + 0x235) * 3) * 4) != 0) {
      if (((iVar6 == 0) ||
          (iVar7 = thunk_FUN_004e60d0(*(int *)((int)this + 0x24),iVar6), iVar7 == 0)) ||
         (*(int *)((int)this + 0x245) != 4)) {
        bVar18 = false;
      }
      else {
        bVar18 = true;
      }
      *(undefined1 *)((int)param_1 + 0xb) = 0x17;
      if (*(int *)((int)this + 0x245) == 4) {
        cVar3 = (-(*(int *)((int)this + 0x46c) != 0) & 2U) + 1;
      }
      else {
        cVar3 = '\0';
      }
      *(char *)((int)param_1 + 0x11) = cVar3;
      if ((*(int *)((int)this + 0x245) == 4) || (*(int *)((int)this + 0x245) == 3)) {
        *(undefined1 *)(param_1 + 3) = 0x16;
        if ((*(int *)((int)this + 0x245) != 4) || (iVar6 = thunk_FUN_004c7070(this,0), iVar6 == 0))
        goto LAB_004bee65;
        uVar4 = 1;
      }
      else {
        *(undefined1 *)(param_1 + 3) = 0x15;
        if (((iVar6 == 0) ||
            (iVar6 = thunk_FUN_004e60d0(*(int *)((int)this + 0x24),iVar6), iVar6 == 0)) ||
           (((*(int *)((int)this + 0x245) != 0 && (*(int *)((int)this + 0x245) != 5)) ||
            (*(int *)((int)this + 0x361) != 0)))) {
LAB_004bee65:
          uVar4 = 0;
        }
        else {
          uVar4 = 1;
        }
      }
      *(undefined1 *)((int)param_1 + 0x12) = uVar4;
      *(undefined1 *)((int)param_1 + 0xe) = 2;
      if (bVar18) {
        if ((*(int *)((int)this + 0x3dc) == 0) || (*(int *)((int)this + 0x46c) != 0)) {
          uVar4 = 1;
        }
        else {
          uVar4 = 3;
        }
      }
      else {
        uVar4 = 0;
      }
      *(undefined1 *)(param_1 + 5) = uVar4;
      *(undefined1 *)((int)param_1 + 0xd) = 1;
      if ((bVar18) &&
         (((iVar6 = *(int *)((int)this + 0x46c), iVar6 == 0 || (iVar6 == 1)) || (iVar6 == 2)))) {
        if ((*(int *)((int)this + 0x3dc) == 0) && (iVar6 == 0)) {
          *(undefined1 *)((int)param_1 + 0x13) = 3;
        }
        else {
          *(undefined1 *)((int)param_1 + 0x13) = 1;
        }
      }
      else {
        *(undefined1 *)((int)param_1 + 0x13) = 0;
      }
    }
    break;
  case 0x40:
    *(undefined1 *)((int)param_1 + 10) = 0x1e;
    if (*(int *)((int)this + 0x24) == *(int *)((int)this + 0x23d)) {
LAB_004bf5fe:
      if ((*(int *)((int)this + 0x245) != 0) ||
         (iVar6 = thunk_FUN_004c7860(this,1,9,1,0,1), iVar6 == 0)) goto LAB_004bf624;
      uVar4 = 1;
    }
    else {
      uVar9 = thunk_FUN_004406c0((char)*(int *)((int)this + 0x23d));
      iVar6 = *(int *)((int)this + 0x235);
      uVar10 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
      if ((&DAT_007e1984)[(uVar10 & 0xff) + ((uVar9 & 0xff) + iVar6 * 3) * 3] != '\0')
      goto LAB_004bf5fe;
LAB_004bf624:
      uVar4 = 0;
    }
    *(undefined1 *)(param_1 + 4) = uVar4;
    *(undefined1 *)((int)param_1 + 0xb) = 0x26;
    if (*(int *)((int)this + 0x24) != *(int *)((int)this + 0x23d)) {
      uVar9 = thunk_FUN_004406c0((char)*(int *)((int)this + 0x23d));
      iVar6 = *(int *)((int)this + 0x235);
      uVar10 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
      if ((&DAT_007e1984)[(uVar10 & 0xff) + ((uVar9 & 0xff) + iVar6 * 3) * 3] == '\0')
      goto cf_common_join_004C01F3;
    }
    if (*(int *)((int)this + 0x245) != 0) goto cf_common_join_004C01F3;
    *(undefined1 *)((int)param_1 + 0x11) = 1;
    break;
  case 0x43:
    *(undefined1 *)((int)param_1 + 10) = 0x23;
    if (*(int *)((int)this + 0x24) != *(int *)((int)this + 0x23d)) {
      uVar9 = thunk_FUN_004406c0((char)*(int *)((int)this + 0x23d));
      iVar6 = *(int *)((int)this + 0x235);
      uVar10 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
      if ((&DAT_007e1984)[(uVar10 & 0xff) + ((uVar9 & 0xff) + iVar6 * 3) * 3] == '\0')
      goto cf_common_join_004C0278;
    }
    if (*(int *)((int)this + 0x245) == 0) {
      iVar6 = *(int *)((int)this + 0x4d8);
joined_r0x004bf200:
      if (4999 < iVar6) goto cf_common_join_004BEF5A;
    }
    goto cf_common_join_004C0278;
  case 0x44:
    *(undefined1 *)((int)param_1 + 10) = 0x1b;
    if (*(int *)((int)this + 0x24) != *(int *)((int)this + 0x23d)) {
      uVar9 = thunk_FUN_004406c0((char)*(int *)((int)this + 0x23d));
      iVar6 = *(int *)((int)this + 0x235);
      uVar10 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
      if ((&DAT_007e1984)[(uVar10 & 0xff) + ((uVar9 & 0xff) + iVar6 * 3) * 3] == '\0')
      goto cf_common_join_004C0278;
    }
    if (*(int *)((int)this + 0x245) == 0) {
      iVar6 = 0x19;
LAB_004bf708:
      iVar6 = thunk_FUN_004e60d0(*(int *)((int)this + 0x24),iVar6);
      if (iVar6 != 0) goto cf_common_join_004BEF5A;
    }
    goto cf_common_join_004C0278;
  case 0x45:
    *(undefined1 *)((int)param_1 + 10) = 0x1a;
    if (*(int *)((int)this + 0x24) != *(int *)((int)this + 0x23d)) {
      uVar9 = thunk_FUN_004406c0((char)*(int *)((int)this + 0x23d));
      iVar6 = *(int *)((int)this + 0x235);
      uVar10 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
      if ((&DAT_007e1984)[(uVar10 & 0xff) + ((uVar9 & 0xff) + iVar6 * 3) * 3] == '\0')
      goto cf_common_join_004C0278;
    }
    if (*(int *)((int)this + 0x245) == 0) {
      bVar18 = *(int *)((int)this + 0x4d0) == 1;
      goto LAB_004bef54;
    }
    goto cf_common_join_004C0278;
  case 0x49:
    *(undefined1 *)((int)param_1 + 10) = 0x1f;
    if (*(int *)((int)this + 0x24) == *(int *)((int)this + 0x23d)) {
LAB_004bf508:
      if ((*(int *)((int)this + 0x245) != 0) ||
         (iVar6 = thunk_FUN_004c7860(this,1,0x15,1,0,1), iVar6 == 0)) goto LAB_004bf52e;
      uVar4 = 1;
    }
    else {
      uVar9 = thunk_FUN_004406c0((char)*(int *)((int)this + 0x23d));
      iVar6 = *(int *)((int)this + 0x235);
      uVar10 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
      if ((&DAT_007e1984)[(uVar10 & 0xff) + ((uVar9 & 0xff) + iVar6 * 3) * 3] != '\0')
      goto LAB_004bf508;
LAB_004bf52e:
      uVar4 = 0;
    }
    *(undefined1 *)(param_1 + 4) = uVar4;
    *(undefined1 *)((int)param_1 + 0xb) = 0x26;
    if (*(int *)((int)this + 0x24) != *(int *)((int)this + 0x23d)) {
      uVar9 = thunk_FUN_004406c0((char)*(int *)((int)this + 0x23d));
      iVar6 = *(int *)((int)this + 0x235);
      uVar10 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
      if ((&DAT_007e1984)[(uVar10 & 0xff) + ((uVar9 & 0xff) + iVar6 * 3) * 3] == '\0')
      goto cf_common_join_004C01F3;
    }
    if (*(int *)((int)this + 0x245) != 0) goto cf_common_join_004C01F3;
    *(undefined1 *)((int)param_1 + 0x11) = 1;
    break;
  case 0x4c:
    if (*(int *)((int)this + 0x4d0) != 1) {
      *(undefined1 *)((int)param_1 + 10) = 0x24;
      if (*(int *)((int)this + 0x24) != *(int *)((int)this + 0x23d)) {
        uVar9 = thunk_FUN_004406c0((char)*(int *)((int)this + 0x23d));
        iVar6 = *(int *)((int)this + 0x235);
        uVar10 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
        if ((&DAT_007e1984)[(uVar10 & 0xff) + ((uVar9 & 0xff) + iVar6 * 3) * 3] == '\0')
        goto cf_common_join_004C0278;
      }
      if (*(int *)((int)this + 0x245) != 0) goto cf_common_join_004C0278;
      iVar6 = *(int *)((int)this + 0x4d8);
      goto joined_r0x004bf200;
    }
    *(undefined1 *)((int)param_1 + 10) = 0x25;
    if (*(int *)((int)this + 0x24) != *(int *)((int)this + 0x23d)) {
      uVar9 = thunk_FUN_004406c0((char)*(int *)((int)this + 0x23d));
      iVar6 = *(int *)((int)this + 0x235);
      uVar10 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
      if ((&DAT_007e1984)[(uVar10 & 0xff) + ((uVar9 & 0xff) + iVar6 * 3) * 3] == '\0')
      goto cf_common_join_004C0278;
    }
LAB_004bf17b:
    iVar6 = *(int *)((int)this + 0x245);
    goto joined_r0x004bfcb7;
  case 0x4e:
    *(undefined1 *)((int)param_1 + 10) = 0x1c;
    if (*(int *)((int)this + 0x24) == *(int *)((int)this + 0x23d)) {
LAB_004beff1:
      if (((*(int *)((int)this + 0x245) != 0) ||
          (iVar6 = thunk_FUN_004e60d0(*(int *)((int)this + 0x24),0x31), iVar6 == 0)) ||
         ((*(int *)((int)this + 0x4d0) != 0 || (*(int *)((int)this + 0x361) != 0))))
      goto LAB_004bf02b;
      uVar4 = 1;
    }
    else {
      uVar9 = thunk_FUN_004406c0((char)*(int *)((int)this + 0x23d));
      iVar6 = *(int *)((int)this + 0x235);
      uVar10 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
      if ((&DAT_007e1984)[(uVar10 & 0xff) + ((uVar9 & 0xff) + iVar6 * 3) * 3] != '\0')
      goto LAB_004beff1;
LAB_004bf02b:
      uVar4 = 0;
    }
    *(undefined1 *)(param_1 + 4) = uVar4;
    *(undefined1 *)((int)param_1 + 0xb) = 0x19;
    if (*(int *)((int)this + 0x24) != *(int *)((int)this + 0x23d)) {
      uVar9 = thunk_FUN_004406c0((char)*(int *)((int)this + 0x23d));
      iVar6 = *(int *)((int)this + 0x235);
      uVar10 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
      if ((&DAT_007e1984)[(uVar10 & 0xff) + ((uVar9 & 0xff) + iVar6 * 3) * 3] == '\0')
      goto cf_common_join_004C01F3;
    }
    if (*(int *)((int)this + 0x261) == 0) goto cf_common_join_004C01F3;
    *(undefined1 *)((int)param_1 + 0x11) = 1;
    break;
  case 0x52:
    *(undefined1 *)((int)param_1 + 10) = 0x30;
    if (*(int *)((int)this + 0x24) == *(int *)((int)this + 0x23d)) {
LAB_004bf873:
      if (*(int *)((int)this + 0x245) != 0) goto LAB_004bf884;
      uVar4 = 1;
    }
    else {
      uVar9 = thunk_FUN_004406c0((char)*(int *)((int)this + 0x23d));
      iVar6 = *(int *)((int)this + 0x235);
      uVar10 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
      if ((&DAT_007e1984)[(uVar10 & 0xff) + ((uVar9 & 0xff) + iVar6 * 3) * 3] != '\0')
      goto LAB_004bf873;
LAB_004bf884:
      uVar4 = 0;
    }
    *(undefined1 *)(param_1 + 4) = uVar4;
    *(undefined1 *)((int)param_1 + 0xb) = 0x31;
    if (*(int *)((int)this + 0x24) != *(int *)((int)this + 0x23d)) {
      uVar9 = thunk_FUN_004406c0((char)*(int *)((int)this + 0x23d));
      iVar6 = *(int *)((int)this + 0x235);
      uVar10 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
      if ((&DAT_007e1984)[(uVar10 & 0xff) + ((uVar9 & 0xff) + iVar6 * 3) * 3] == '\0')
      goto cf_common_join_004C01F3;
    }
    if (*(int *)((int)this + 0x245) != 0) goto cf_common_join_004C01F3;
    *(undefined1 *)((int)param_1 + 0x11) = 1;
    break;
  case 0x53:
    *(undefined1 *)((int)param_1 + 10) = 0x44;
    if (*(int *)((int)this + 0x24) == *(int *)((int)this + 0x23d)) {
LAB_004bf954:
      if (*(int *)((int)this + 0x245) != 0) goto LAB_004bf965;
      uVar4 = 1;
    }
    else {
      uVar9 = thunk_FUN_004406c0((char)*(int *)((int)this + 0x23d));
      iVar6 = *(int *)((int)this + 0x235);
      uVar10 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
      if ((&DAT_007e1984)[(uVar10 & 0xff) + ((uVar9 & 0xff) + iVar6 * 3) * 3] != '\0')
      goto LAB_004bf954;
LAB_004bf965:
      uVar4 = 0;
    }
    *(undefined1 *)(param_1 + 4) = uVar4;
    *(undefined1 *)((int)param_1 + 0xb) = 0x39;
    if (*(int *)((int)this + 0x24) == *(int *)((int)this + 0x23d)) {
LAB_004bf9c0:
      if (((*(int *)((int)this + 0x245) != 0) || (*(int *)((int)this + 0x361) != 0)) ||
         (g_playerRuntime[*(int *)((int)this + 0x24)].field2298_0xa0e != 0)) goto LAB_004bf9f7;
      uVar4 = 1;
    }
    else {
      uVar9 = thunk_FUN_004406c0((char)*(int *)((int)this + 0x23d));
      iVar6 = *(int *)((int)this + 0x235);
      uVar10 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
      if ((&DAT_007e1984)[(uVar10 & 0xff) + ((uVar9 & 0xff) + iVar6 * 3) * 3] != '\0')
      goto LAB_004bf9c0;
LAB_004bf9f7:
      uVar4 = 0;
    }
    *(undefined1 *)((int)param_1 + 0x11) = uVar4;
    *(undefined1 *)(param_1 + 3) = 0x46;
    if (*(int *)((int)this + 0x24) != *(int *)((int)this + 0x23d)) {
      uVar9 = thunk_FUN_004406c0((char)*(int *)((int)this + 0x23d));
      iVar6 = *(int *)((int)this + 0x235);
      uVar10 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
      if ((&DAT_007e1984)[(uVar10 & 0xff) + ((uVar9 & 0xff) + iVar6 * 3) * 3] == '\0')
      goto LAB_004bfffc;
    }
    if ((*(int *)((int)this + 0x245) != 0) || (*(int *)((int)this + 0x361) != 0)) goto LAB_004bfffc;
    *(undefined1 *)((int)param_1 + 0x12) = 1;
    break;
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
    *(undefined1 *)((int)param_1 + 10) = 0x41;
    if (*(int *)((int)this + 0x24) != *(int *)((int)this + 0x23d)) {
      uVar9 = thunk_FUN_004406c0((char)*(int *)((int)this + 0x23d));
      iVar6 = *(int *)((int)this + 0x235);
      uVar10 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
      if ((&DAT_007e1984)[(uVar10 & 0xff) + ((uVar9 & 0xff) + iVar6 * 3) * 3] == '\0')
      goto cf_common_join_004C0278;
    }
    if (*(int *)((int)this + 0x245) == 0) {
      iVar6 = *(int *)((int)this + 0x361);
      goto joined_r0x004bfcb7;
    }
    goto cf_common_join_004C0278;
  case 0x5c:
    *(undefined1 *)((int)param_1 + 10) = 0x3d;
    if (*(int *)((int)this + 0x24) == *(int *)((int)this + 0x23d)) {
LAB_004bfbca:
      if (*(int *)((int)this + 0x245) != 0) goto LAB_004bfbdb;
      uVar4 = 1;
    }
    else {
      uVar9 = thunk_FUN_004406c0((char)*(int *)((int)this + 0x23d));
      iVar6 = *(int *)((int)this + 0x235);
      uVar10 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
      if ((&DAT_007e1984)[(uVar10 & 0xff) + ((uVar9 & 0xff) + iVar6 * 3) * 3] != '\0')
      goto LAB_004bfbca;
LAB_004bfbdb:
      uVar4 = 0;
    }
    *(undefined1 *)(param_1 + 4) = uVar4;
    *(undefined1 *)((int)param_1 + 0xb) = 0x37;
    if (*(int *)((int)this + 0x24) != *(int *)((int)this + 0x23d)) {
      uVar9 = thunk_FUN_004406c0((char)*(int *)((int)this + 0x23d));
      iVar6 = *(int *)((int)this + 0x235);
      uVar10 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
      if ((&DAT_007e1984)[(uVar10 & 0xff) + ((uVar9 & 0xff) + iVar6 * 3) * 3] == '\0')
      goto cf_common_join_004C01F3;
    }
    if (*(int *)((int)this + 0x245) != 0) goto cf_common_join_004C01F3;
    *(undefined1 *)((int)param_1 + 0x11) = 1;
    break;
  case 0x5d:
    *(undefined1 *)((int)param_1 + 10) = 0x43;
    if (*(int *)((int)this + 0x24) != *(int *)((int)this + 0x23d)) {
      uVar9 = thunk_FUN_004406c0((char)*(int *)((int)this + 0x23d));
      iVar6 = *(int *)((int)this + 0x235);
      uVar10 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
      if ((&DAT_007e1984)[(uVar10 & 0xff) + ((uVar9 & 0xff) + iVar6 * 3) * 3] == '\0')
      goto cf_common_join_004C0278;
    }
    if ((0x27 < *(int *)((int)this + 0x4d4)) && (*(int *)((int)this + 0x245) == 0)) {
      iVar6 = 0x46;
      goto LAB_004bf708;
    }
    goto cf_common_join_004C0278;
  case 0x5f:
    *(undefined1 *)((int)param_1 + 10) = 0x3f;
    if (*(int *)((int)this + 0x24) == *(int *)((int)this + 0x23d)) {
LAB_004c0170:
      if (*(int *)((int)this + 0x245) != 0) goto LAB_004c0181;
      uVar4 = 1;
    }
    else {
      uVar9 = thunk_FUN_004406c0((char)*(int *)((int)this + 0x23d));
      iVar6 = *(int *)((int)this + 0x235);
      uVar10 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
      if ((&DAT_007e1984)[(uVar10 & 0xff) + ((uVar9 & 0xff) + iVar6 * 3) * 3] != '\0')
      goto LAB_004c0170;
LAB_004c0181:
      uVar4 = 0;
    }
    *(undefined1 *)(param_1 + 4) = uVar4;
    *(undefined1 *)((int)param_1 + 0xb) = 0x31;
    if (*(int *)((int)this + 0x24) != *(int *)((int)this + 0x23d)) {
      uVar9 = thunk_FUN_004406c0((char)*(int *)((int)this + 0x23d));
      iVar6 = *(int *)((int)this + 0x235);
      uVar10 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
      if ((&DAT_007e1984)[(uVar10 & 0xff) + ((uVar9 & 0xff) + iVar6 * 3) * 3] == '\0')
      goto cf_common_join_004C01F3;
    }
    if (*(int *)((int)this + 0x245) != 0) goto cf_common_join_004C01F3;
    *(undefined1 *)((int)param_1 + 0x11) = 1;
    break;
  case 0x61:
    *(undefined1 *)((int)param_1 + 10) = 0x3b;
    if (*(int *)((int)this + 0x24) != *(int *)((int)this + 0x23d)) {
      uVar9 = thunk_FUN_004406c0((char)*(int *)((int)this + 0x23d));
      iVar6 = *(int *)((int)this + 0x235);
      uVar10 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
      if ((&DAT_007e1984)[(uVar10 & 0xff) + ((uVar9 & 0xff) + iVar6 * 3) * 3] == '\0')
      goto cf_common_join_004C0278;
    }
    if (0 < *(int *)((int)this + 0x518)) goto LAB_004bf17b;
    goto cf_common_join_004C0278;
  case 100:
    *(undefined1 *)((int)param_1 + 10) = 0x40;
    if (*(int *)((int)this + 0x24) != *(int *)((int)this + 0x23d)) {
      uVar9 = thunk_FUN_004406c0((char)*(int *)((int)this + 0x23d));
      iVar6 = *(int *)((int)this + 0x235);
      uVar10 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
      if ((&DAT_007e1984)[(uVar10 & 0xff) + ((uVar9 & 0xff) + iVar6 * 3) * 3] == '\0')
      goto cf_common_join_004C0278;
    }
    iVar6 = *(int *)((int)this + 0x245);
joined_r0x004bfcb7:
    if (iVar6 != 0) goto cf_common_join_004C0278;
cf_common_join_004BEF5A:
    uVar4 = 1;
    goto LAB_004bef5f;
  case 0x66:
  case 0x67:
  case 0x6b:
  case 0x71:
    if ((((byte)*(undefined4 *)((int)this + 0x265) & 2) != 2) || (*(int *)((int)this + 0x26d) == 0))
    {
      *(undefined1 *)((int)param_1 + 10) = 0x34;
      if (*(int *)((int)this + 0x245) == 0) {
        if (*(int *)((int)this + 0x261) != 0) {
          if ((*(byte *)((int)this + 0x265) & 2) != 0) {
            *(undefined1 *)(param_1 + 4) = 3;
            break;
          }
          goto LAB_004c0261;
        }
      }
      else {
LAB_004c0261:
        if (*(int *)((int)this + 0x261) != 0) goto cf_common_join_004BEF5A;
      }
      if (*(int *)((int)this + 0x245) == 5) goto cf_common_join_004BEF5A;
      goto cf_common_join_004C0278;
    }
    *(undefined1 *)((int)param_1 + 10) = 0x52;
    if ((*(int *)((int)this + 0x245) == 0) || (*(int *)((int)this + 0x245) == 5))
    goto cf_common_join_004BEF5A;
    uVar4 = 0;
    goto LAB_004bef5f;
  case 0x6c:
    *(undefined1 *)((int)param_1 + 10) = 0x3e;
    if (*(int *)((int)this + 0x24) != *(int *)((int)this + 0x23d)) {
      uVar9 = thunk_FUN_004406c0((char)*(int *)((int)this + 0x23d));
      iVar6 = *(int *)((int)this + 0x235);
      uVar10 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
      if ((&DAT_007e1984)[(uVar10 & 0xff) + ((uVar9 & 0xff) + iVar6 * 3) * 3] == '\0')
      goto cf_common_join_004C0278;
    }
    if (*(int *)((int)this + 0x245) == 0) {
      iVar6 = *(int *)((int)this + 0x61b);
      goto joined_r0x004bfcb7;
    }
    goto cf_common_join_004C0278;
  case 0x6d:
    *(undefined1 *)((int)param_1 + 10) = 0x42;
    if (*(int *)((int)this + 0x24) == *(int *)((int)this + 0x23d)) {
LAB_004bfee5:
      if ((*(int *)((int)this + 0x245) != 0) ||
         ((*(int *)((int)this + 0x4d0) != 0 && (*(int *)((int)this + 0x4d4) != 0))))
      goto LAB_004bff0a;
      uVar4 = 1;
    }
    else {
      uVar9 = thunk_FUN_004406c0((char)*(int *)((int)this + 0x23d));
      iVar6 = *(int *)((int)this + 0x235);
      uVar10 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
      if ((&DAT_007e1984)[(uVar10 & 0xff) + ((uVar9 & 0xff) + iVar6 * 3) * 3] != '\0')
      goto LAB_004bfee5;
LAB_004bff0a:
      uVar4 = 0;
    }
    *(undefined1 *)(param_1 + 4) = uVar4;
    *(undefined1 *)((int)param_1 + 0xb) = 0x38;
    if (*(int *)((int)this + 0x24) == *(int *)((int)this + 0x23d)) {
LAB_004bff65:
      if ((*(int *)((int)this + 0x245) != 0) || (*(int *)((int)this + 0x4d0) == 0))
      goto LAB_004bff80;
      uVar4 = 1;
    }
    else {
      uVar9 = thunk_FUN_004406c0((char)*(int *)((int)this + 0x23d));
      iVar6 = *(int *)((int)this + 0x235);
      uVar10 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
      if ((&DAT_007e1984)[(uVar10 & 0xff) + ((uVar9 & 0xff) + iVar6 * 3) * 3] != '\0')
      goto LAB_004bff65;
LAB_004bff80:
      uVar4 = 0;
    }
    *(undefined1 *)((int)param_1 + 0x11) = uVar4;
    *(undefined1 *)(param_1 + 3) = 0x45;
    if (*(int *)((int)this + 0x24) == *(int *)((int)this + 0x23d)) {
LAB_004bffdb:
      if ((*(int *)((int)this + 0x245) == 0) && (*(int *)((int)this + 0x4d4) != 0)) {
        *(undefined1 *)((int)param_1 + 0x12) = 1;
        break;
      }
    }
    else {
      uVar9 = thunk_FUN_004406c0((char)*(int *)((int)this + 0x23d));
      iVar6 = *(int *)((int)this + 0x235);
      uVar10 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
      if ((&DAT_007e1984)[(uVar10 & 0xff) + ((uVar9 & 0xff) + iVar6 * 3) * 3] != '\0')
      goto LAB_004bffdb;
    }
LAB_004bfffc:
    *(undefined1 *)((int)param_1 + 0x12) = 0;
    break;
  case 0x70:
    if (*(int *)((int)this + 0x4f0) == 0) {
      *(undefined1 *)((int)param_1 + 10) = 0x36;
      if (*(int *)((int)this + 0x24) != *(int *)((int)this + 0x23d)) {
        uVar9 = thunk_FUN_004406c0((char)*(int *)((int)this + 0x23d));
        iVar6 = *(int *)((int)this + 0x235);
        uVar10 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
        if ((&DAT_007e1984)[(uVar10 & 0xff) + ((uVar9 & 0xff) + iVar6 * 3) * 3] == '\0')
        goto cf_common_join_004C0278;
      }
      if (*(int *)((int)this + 0x245) != 0) goto cf_common_join_004C0278;
      iVar6 = *(int *)((int)this + 0x4d0);
    }
    else {
      *(undefined1 *)((int)param_1 + 10) = 0x34;
      if (*(int *)((int)this + 0x24) != *(int *)((int)this + 0x23d)) {
        uVar9 = thunk_FUN_004406c0((char)*(int *)((int)this + 0x23d));
        iVar6 = *(int *)((int)this + 0x235);
        uVar10 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
        if ((&DAT_007e1984)[(uVar10 & 0xff) + ((uVar9 & 0xff) + iVar6 * 3) * 3] == '\0')
        goto cf_common_join_004C0278;
      }
      iVar6 = *(int *)((int)this + 0x245);
    }
    if ((iVar6 == 0) && (99 < *(int *)((int)this + 0x4ec))) goto cf_common_join_004BEF5A;
cf_common_join_004C0278:
    uVar4 = 0;
LAB_004bef5f:
    *(undefined1 *)(param_1 + 4) = uVar4;
    break;
  case 0x72:
    *(undefined1 *)((int)param_1 + 10) = 0x34;
    if (*(int *)((int)this + 0x24) == *(int *)((int)this + 0x23d)) {
LAB_004c005c:
      if (*(int *)((int)this + 0x261) == 0) goto LAB_004c006d;
      uVar4 = 1;
    }
    else {
      uVar9 = thunk_FUN_004406c0((char)*(int *)((int)this + 0x23d));
      iVar6 = *(int *)((int)this + 0x235);
      uVar10 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
      if ((&DAT_007e1984)[(uVar10 & 0xff) + ((uVar9 & 0xff) + iVar6 * 3) * 3] != '\0')
      goto LAB_004c005c;
LAB_004c006d:
      uVar4 = 0;
    }
    *(undefined1 *)(param_1 + 4) = uVar4;
    *(undefined1 *)((int)param_1 + 0xb) = 0x4f;
    if (*(int *)((int)this + 0x24) == *(int *)((int)this + 0x23d)) {
LAB_004c00cc:
      if ((((*(int *)((int)this + 0x245) == 0) &&
           (iVar6 = thunk_FUN_004e60d0(*(int *)((int)this + 0x24),0x75), iVar6 != 0)) &&
          (*(int *)((int)this + 0x4d0) == 0)) && (*(int *)((int)this + 0x361) == 0)) {
        *(undefined1 *)((int)param_1 + 0x11) = 1;
        break;
      }
    }
    else {
      uVar9 = thunk_FUN_004406c0((char)*(int *)((int)this + 0x23d));
      iVar6 = *(int *)((int)this + 0x235);
      uVar10 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
      if ((&DAT_007e1984)[(uVar10 & 0xff) + ((uVar9 & 0xff) + iVar6 * 3) * 3] != '\0')
      goto LAB_004c00cc;
    }
cf_common_join_004C01F3:
    *(undefined1 *)((int)param_1 + 0x11) = 0;
  }
  switch(*(undefined4 *)((int)this + 0x5ac)) {
  case 0x32:
  case 0x40:
  case 0x49:
  case 0x5c:
    if (*(int *)((int)this + 0x361) == 1) {
      *(undefined4 *)((int)param_1 + 0x1d) = *(undefined4 *)((int)this + 0x369);
      iVar6 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
      if ((char)iVar6 == '\x03') {
        sVar5 = (short)*(undefined4 *)((int)this + 0x3a4);
        sVar14 = (short)*(undefined4 *)((int)this + 0x3b4);
      }
      else {
        sVar5 = (short)*(undefined4 *)((int)this + 0x3a0);
        sVar14 = (short)*(undefined4 *)((int)this + 0x3b0);
      }
      *(short *)((int)param_1 + 0x27) = sVar5 - sVar14;
      *(short *)((int)param_1 + 0x2b) =
           (short)((*(int *)((int)this + 0x39c) * (100 - *(int *)((int)this + 0x394))) / 100);
      *(undefined1 *)((int)param_1 + 0x2f) = *(undefined1 *)((int)this + 0x394);
      iVar6 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
      *(char *)((int)param_1 + 0x25) = (char)iVar6;
      if (*(int *)((int)this + 0x5ac) == 0x40) {
        iVar6 = thunk_FUN_004c9370(this,1,9,-1);
        *(char *)((int)param_1 + 0x31) = (char)iVar6;
        if ((*(int *)((int)this + 0x361) == 1) && (*(int *)((int)this + 0x369) == 9)) {
          *(char *)((int)param_1 + 0x31) = *(char *)((int)this + 0x36d) + (char)iVar6;
        }
      }
      else if (*(int *)((int)this + 0x5ac) == 0x49) {
        iVar6 = thunk_FUN_004c9370(this,1,0x15,-1);
        *(char *)((int)param_1 + 0x31) = (char)iVar6;
        if ((*(int *)((int)this + 0x361) == 1) && (*(int *)((int)this + 0x369) == 0x15)) {
          *(char *)((int)param_1 + 0x31) = *(char *)((int)this + 0x36d) + (char)iVar6;
        }
      }
      else {
        *(undefined1 *)((int)param_1 + 0x31) = 0;
      }
    }
    else {
      *(undefined4 *)((int)param_1 + 0x1d) = 0;
      *(undefined2 *)((int)param_1 + 0x27) = 0xffff;
      *(undefined2 *)((int)param_1 + 0x2b) = 0xffff;
      *(undefined1 *)((int)param_1 + 0x2f) = 0xff;
      *(undefined1 *)((int)param_1 + 0x31) = 0;
    }
    break;
  case 0x33:
    puVar15 = (undefined2 *)((int)param_1 + 0x2b);
    local_8 = (int *)((int)param_1 + 0x1d);
    param_1 = (int *)0x0;
    piVar16 = (int *)((int)this + 0x4d8);
    do {
      if ((piVar16[-2] == 0) || (piVar16[-1] == 0)) {
        *local_8 = 0;
        puVar15[-2] = 0xffff;
        *puVar15 = 0xffff;
        *(undefined1 *)((int)param_1 + 0x2f + (int)piVar2) = 0xff;
      }
      else {
        *local_8 = *piVar16;
        puVar15[-2] = (short)((*(int *)(&DAT_007e085c + *piVar16 * 4) * (piVar16[3] - piVar16[2])) /
                             piVar16[3]);
        *puVar15 = 0xffff;
        *(char *)((int)param_1 + 0x2f + (int)piVar2) = (char)((piVar16[2] * 100) / piVar16[3]);
        iVar6 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
        *(char *)((int)param_1 + 0x25 + (int)piVar2) = (char)iVar6;
      }
      param_1 = (int *)((int)param_1 + 1);
      piVar16 = piVar16 + 10;
      local_8 = local_8 + 1;
      puVar15 = puVar15 + 1;
    } while ((int)param_1 < 2);
    break;
  case 0x34:
    piVar16 = (int *)((int)this + 0x4d0);
    if (0 < *(int *)((int)this + 0x4d0)) {
      puVar11 = (undefined1 *)((int)this + 0x4dc);
      do {
        if ((&DAT_007bf678)[(*piVar16 + -0x96) * 3] == 1) {
          if (*(int *)(&DAT_007e6028 + (*(int *)(puVar11 + -0xc) + -0x96) * 0x14) != 0) {
            uVar17 = (undefined2)*(int *)(&DAT_007e6028 + (*(int *)(puVar11 + -0xc) + -0x96) * 0x14)
            ;
            switch(*(int *)(puVar11 + -0xc)) {
            case 0x96:
              *(undefined1 *)(param_1 + 7) = 1;
              *(undefined2 *)(param_1 + 8) = uVar17;
              *(undefined2 *)((int)param_1 + 0x1e) = *(undefined2 *)(puVar11 + -8);
              *(undefined1 *)((int)param_1 + 0x1d) = *puVar11;
              break;
            case 0x97:
              *(undefined1 *)((int)param_1 + 0x22) = 1;
              *(undefined2 *)((int)param_1 + 0x26) = uVar17;
              *(undefined2 *)(param_1 + 9) = *(undefined2 *)(puVar11 + -8);
              *(undefined1 *)((int)param_1 + 0x23) = *puVar11;
              break;
            case 0x98:
              *(undefined1 *)(param_1 + 10) = 1;
              *(undefined2 *)(param_1 + 0xb) = uVar17;
              *(undefined2 *)((int)param_1 + 0x2a) = *(undefined2 *)(puVar11 + -8);
              *(undefined1 *)((int)param_1 + 0x29) = *puVar11;
              break;
            case 0x99:
              *(undefined1 *)((int)param_1 + 0x2e) = 1;
              *(undefined2 *)((int)param_1 + 0x32) = uVar17;
              *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(puVar11 + -8);
              *(undefined1 *)((int)param_1 + 0x2f) = *puVar11;
              break;
            case 0x9a:
              *(undefined1 *)(param_1 + 0xd) = 1;
              *(undefined2 *)(param_1 + 0xe) = uVar17;
              *(undefined2 *)((int)param_1 + 0x36) = *(undefined2 *)(puVar11 + -8);
              *(undefined1 *)((int)param_1 + 0x35) = *puVar11;
              break;
            case 0xa6:
              *(undefined1 *)((int)param_1 + 0x3a) = 1;
              *(undefined2 *)((int)param_1 + 0x3e) = uVar17;
              *(undefined2 *)(param_1 + 0xf) = *(undefined2 *)(puVar11 + -8);
              *(undefined1 *)((int)param_1 + 0x3b) = *puVar11;
              break;
            case 0xa7:
              *(undefined1 *)((int)param_1 + 0x46) = 1;
              *(undefined2 *)((int)param_1 + 0x4a) = uVar17;
              *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(puVar11 + -8);
              *(undefined1 *)((int)param_1 + 0x47) = *puVar11;
              break;
            case 0xa9:
              *(undefined1 *)(param_1 + 0x10) = 1;
              *(undefined2 *)(param_1 + 0x11) = uVar17;
              *(undefined2 *)((int)param_1 + 0x42) = *(undefined2 *)(puVar11 + -8);
              *(undefined1 *)((int)param_1 + 0x41) = *puVar11;
              break;
            case 0xab:
              *(undefined1 *)(param_1 + 0x13) = 1;
              *(undefined2 *)(param_1 + 0x14) = uVar17;
              *(undefined2 *)((int)param_1 + 0x4e) = *(undefined2 *)(puVar11 + -8);
              *(undefined1 *)((int)param_1 + 0x4d) = *puVar11;
              break;
            case 0xac:
              *(undefined1 *)((int)param_1 + 0x52) = 1;
              *(undefined2 *)((int)param_1 + 0x56) = uVar17;
              *(undefined2 *)(param_1 + 0x15) = *(undefined2 *)(puVar11 + -8);
              *(undefined1 *)((int)param_1 + 0x53) = *puVar11;
            }
          }
        }
        piVar1 = (int *)(puVar11 + 8);
        piVar16 = (int *)(puVar11 + 8);
        puVar11 = puVar11 + 0x14;
      } while (0 < *piVar1);
    }
    break;
  case 0x35:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
    if (*(int *)((int)this + 0x361) == 2) {
      *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)((int)this + 0x369);
      if (*(byte *)((int)&DAT_00798fd8 + *(int *)((int)this + 0x369)) < 2) {
        cVar3 = '\0';
      }
      else {
        uVar12 = thunk_FUN_004e60d0(*(int *)((int)this + 0x24),*(int *)((int)this + 0x369));
        cVar3 = (char)uVar12 + '\x01';
      }
      *(char *)((int)param_1 + 0x3d) = cVar3;
      *(undefined1 *)((int)param_1 + 0x3e) = *(undefined1 *)((int)this + 0x394);
      *(short *)((int)param_1 + 0x27) =
           *(short *)((int)this + 0x398) - *(short *)((int)this + 0x3a8);
      *(undefined2 *)((int)param_1 + 0x2b) = 0xffff;
    }
    else {
      *(undefined1 *)(param_1 + 0xf) = 0;
      *(undefined1 *)((int)param_1 + 0x3d) = 0;
      *(undefined1 *)((int)param_1 + 0x3e) = 0;
      *(undefined2 *)((int)param_1 + 0x27) = 0xffff;
      *(undefined2 *)((int)param_1 + 0x2b) = 0xffff;
      *(undefined2 *)((int)param_1 + 0x3a) = 0;
      iVar6 = *(int *)((int)this + 0x5ac);
      param_1 = (int *)0x0;
      if (iVar6 == 0x35) {
        do {
          if ((&PTR_DAT_007bfc04)[*(int *)((int)this + 0x239)][(int)param_1] == '\0') {
            iVar6 = thunk_FUN_004e60d0(*(int *)((int)this + 0x24),(int)param_1);
            iVar6 = thunk_FUN_004e7f20(*(int *)((int)this + 0x24),(int)param_1,iVar6 + 1);
          }
          else {
            bVar18 = thunk_FUN_004e5910(*(int *)((int)this + 0x24),(uint)param_1);
            iVar6 = CONCAT31(extraout_var_03,bVar18);
          }
          if (iVar6 != 0) {
            uVar4 = thunk_FUN_004e6140(*(int *)((int)this + 0x24),(int)param_1);
            iVar6 = thunk_FUN_004e60d0(*(int *)((int)this + 0x24),(int)param_1);
            if (((iVar6 < CONCAT31(extraout_var_04,uVar4)) &&
                (bVar18 = thunk_FUN_004e5f90(*(int *)((int)this + 0x24),(uint)param_1),
                CONCAT31(extraout_var_05,bVar18) == 0)) &&
               (((&PTR_DAT_007bfc04)[*(int *)((int)this + 0x239)][(int)param_1] == '\0' ||
                (bVar18 = thunk_FUN_004e5c40(*(int *)((int)this + 0x24),(uint)param_1),
                CONCAT31(extraout_var_06,bVar18) != 0)))) {
              *(short *)((int)piVar2 + 0x3a) = *(short *)((int)piVar2 + 0x3a) + 1;
            }
          }
          param_1 = (int *)((int)param_1 + 1);
        } while ((int)param_1 < 0x9b);
      }
      else if ((&DAT_0079a3fc)[(iVar6 * 3 + -0xfc) * 5] != 0) {
        local_c = &DAT_0079a3fc + (iVar6 * 3 + -0xfc) * 5;
        do {
          if (0xe < (int)param_1) break;
          if ((&PTR_DAT_007bfc04)[*(int *)((int)this + 0x239)][(int)param_1] == '\0') {
            iVar6 = thunk_FUN_004e60d0(*(int *)((int)this + 0x24),(int)param_1);
            iVar6 = thunk_FUN_004e7f20(*(int *)((int)this + 0x24),(int)param_1,iVar6 + 1);
          }
          else {
            bVar18 = thunk_FUN_004e5910(*(int *)((int)this + 0x24),(uint)param_1);
            iVar6 = CONCAT31(extraout_var,bVar18);
          }
          if (iVar6 != 0) {
            uVar4 = thunk_FUN_004e6140(*(int *)((int)this + 0x24),(int)param_1);
            iVar6 = thunk_FUN_004e60d0(*(int *)((int)this + 0x24),(int)param_1);
            if (((iVar6 < CONCAT31(extraout_var_00,uVar4)) &&
                (bVar18 = thunk_FUN_004e5f90(*(int *)((int)this + 0x24),(uint)param_1),
                CONCAT31(extraout_var_01,bVar18) == 0)) &&
               (((&PTR_DAT_007bfc04)[*(int *)((int)this + 0x239)][(int)param_1] == '\0' ||
                (bVar18 = thunk_FUN_004e5c40(*(int *)((int)this + 0x24),(uint)param_1),
                CONCAT31(extraout_var_02,bVar18) != 0)))) {
              *(short *)((int)piVar2 + 0x3a) = *(short *)((int)piVar2 + 0x3a) + 1;
            }
          }
          param_1 = (int *)((int)param_1 + 1);
          local_c = local_c + 1;
        } while (*local_c != 0);
      }
    }
    break;
  case 0x36:
    iVar6 = *(int *)((int)this + 0x4d4) * 0x28;
    iVar6 = iVar6 / 0x28 + (iVar6 >> 0x1f);
    goto cf_common_join_004C0FC5;
  case 0x37:
    goto switchD_004bef7c_caseD_37;
  case 0x38:
  case 0x39:
  case 0x4f:
  case 0x5e:
    if (*(int *)((int)this + 0x4d4) == 0) {
      *(undefined2 *)((int)param_1 + 0x3f) = 0;
    }
    else {
      *(short *)((int)param_1 + 0x3f) = (short)*(undefined4 *)((int)this + 0x4e0);
    }
    break;
  case 0x3a:
    iVar6 = *(int *)((int)this + 0x4d0) * 400;
    *(short *)((int)param_1 + 0x3f) =
         ((short)(iVar6 / 100) + (short)(iVar6 >> 0x1f)) -
         (short)((longlong)iVar6 * 0x51eb851f >> 0x3f);
    iVar6 = thunk_FUN_004d8250();
    *(char *)((int)param_1 + 0x45) = (char)iVar6;
    if (*(int *)((int)this + 0x4e4) == 0) {
      iVar6 = thunk_FUN_004d8280();
      *(char *)((int)param_1 + 0x46) = (char)iVar6;
    }
    else {
      iVar6 = thunk_FUN_004d8280();
      iVar7 = thunk_FUN_004d8230();
      *(char *)((int)param_1 + 0x46) = (char)((uint)(iVar7 * iVar6) / *(uint *)((int)this + 0x4e4));
    }
    break;
  case 0x3c:
  case 0x53:
    switch(g_playerRuntime[*(int *)((int)this + 0x24)].field2298_0xa0e) {
    case 0:
      if (g_playerRuntime[*(int *)((int)this + 0x24)].field2300_0xa16 == 0)
      goto switchD_004bef7c_caseD_52;
      *(undefined1 *)((int)param_1 + 0x47) = 3;
      break;
    case 1:
      uVar9 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
      uVar9 = uVar9 & 0xff;
      if (uVar9 == 1) {
        iVar6 = 0x3d;
      }
      else if (uVar9 == 2) {
        iVar6 = 0x8d;
      }
      else if (uVar9 == 3) {
        iVar6 = 0x49;
      }
      else {
        iVar6 = 0;
      }
      *(undefined1 *)((int)param_1 + 0x47) = 1;
      iVar6 = thunk_FUN_004e60d0(*(int *)((int)this + 0x24),iVar6);
      uVar9 = (uint)(PTR_00802a38->field_00E4 * 100 +
                    g_playerRuntime[*(int *)((int)this + 0x24)].field2301_0xa1a * -100) /
              *(uint *)(&DAT_00798f6c + iVar6 * 4);
      param_1[0x12] = uVar9;
      if (100 < uVar9) {
        param_1[0x12] = 100;
      }
      break;
    case 2:
    case 3:
      *(undefined1 *)((int)param_1 + 0x47) = 2;
      param_1[0x12] = (uint)g_playerRuntime[*(int *)((int)this + 0x24)].field2302_0xa1e / 0x19;
    }
    break;
  case 0x41:
    *(undefined1 *)(param_1 + 7) = 0xff;
    goto switchD_004bef7c_caseD_37;
  case 0x43:
  case 0x4c:
    *(undefined1 *)(param_1 + 7) = *(undefined1 *)((int)this + 0x4e0);
    iVar6 = *(int *)((int)this + 0x4d8) * 0x28;
    iVar6 = iVar6 / 10000 + (iVar6 >> 0x1f);
    goto cf_common_join_004C0FC5;
  case 0x44:
    if (*(int *)((int)this + 0x361) == 6) {
      *(undefined4 *)((int)param_1 + 0x1d) = 1;
      *(undefined1 *)((int)param_1 + 0x2f) = *(undefined1 *)((int)this + 0x394);
      *(short *)((int)param_1 + 0x27) =
           *(short *)((int)this + 0x3a0) - *(short *)((int)this + 0x3b0);
      *(short *)((int)param_1 + 0x2b) =
           *(short *)((int)this + 0x39c) - *(short *)((int)this + 0x3ac);
      iVar6 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
      *(char *)((int)param_1 + 0x25) = (char)iVar6;
      *(undefined2 *)((int)param_1 + 0x3f) = *(undefined2 *)((int)this + 0x4d0);
    }
    else {
      *(undefined4 *)((int)param_1 + 0x1d) = 0;
      *(undefined1 *)((int)param_1 + 0x2f) = 0xff;
      *(undefined2 *)((int)param_1 + 0x27) = 0xffff;
      *(undefined2 *)((int)param_1 + 0x2b) = 0xffff;
      *(undefined2 *)((int)param_1 + 0x3f) = *(undefined2 *)((int)this + 0x4d0);
    }
    break;
  case 0x45:
    if (*(int *)((int)this + 0x361) != 3) {
      iVar6 = *(int *)((int)this + 0x4d0);
LAB_004c0285:
      if (iVar6 == 1) {
        *(undefined1 *)(param_1 + 0xd) = 0x28;
      }
      else {
        *(undefined1 *)(param_1 + 0xd) = 0xff;
      }
      break;
    }
    iVar6 = *(int *)((int)this + 0x394);
    goto LAB_004c0ae0;
  case 0x48:
    iVar6 = *(int *)((int)this + 0x4d0) * 0x28;
    iVar6 = iVar6 / 500 + (iVar6 >> 0x1f);
    goto cf_common_join_004C0FC5;
  case 0x4d:
    iVar6 = *(int *)((int)this + 0x4d4) * 0x28;
    cVar3 = ((char)(iVar6 / 5000) + (char)(iVar6 >> 0x1f)) -
            (char)((longlong)iVar6 * 0x68db8bad >> 0x3f);
    goto LAB_004c0fcc;
  case 0x4e:
    iVar6 = *(int *)((int)this + 0x4d0);
    if ((iVar6 != 0) || (*(int *)((int)this + 0x361) != 4)) goto LAB_004c0285;
    iVar6 = *(int *)((int)this + 0x394) * 0x28;
LAB_004c0f8e:
    cVar3 = ((char)(iVar6 / 100) + (char)(iVar6 >> 0x1f)) -
            (char)((longlong)iVar6 * 0x51eb851f >> 0x3f);
    goto LAB_004c0fcc;
  case 0x50:
    *(undefined1 *)(param_1 + 7) =
         *(undefined1 *)&g_playerRuntime[*(int *)((int)this + 0x24)].field2228_0x97a;
    *(undefined1 *)((int)param_1 + 0x1d) =
         *(undefined1 *)&g_playerRuntime[*(int *)((int)this + 0x24)].field2229_0x97e;
    *(undefined1 *)((int)param_1 + 0x1e) = g_playerRuntime[*(int *)((int)this + 0x24)].field_0x982;
    *(undefined1 *)((int)param_1 + 0x1f) = g_playerRuntime[*(int *)((int)this + 0x24)].field_0x986;
    *(undefined1 *)(param_1 + 8) = g_playerRuntime[*(int *)((int)this + 0x24)].field_0x98a;
    *(undefined1 *)((int)param_1 + 0x21) = g_playerRuntime[*(int *)((int)this + 0x24)].field_0x98e;
    break;
  case 0x52:
switchD_004bef7c_caseD_52:
    *(undefined1 *)((int)param_1 + 0x47) = 0;
    break;
  case 0x5b:
    piVar16 = (int *)((int)this + 0x4d0);
    if (0 < *(int *)((int)this + 0x4d0)) {
      puVar11 = (undefined1 *)((int)this + 0x4dc);
      do {
        if ((&DAT_007bf678)[(*piVar16 + -0x96) * 3] == 2) {
          if (*(int *)(&DAT_007e6028 + (*(int *)(puVar11 + -0xc) * 5 + -0x2ee) * 4) != 0) {
            uVar17 = (undefined2)
                     *(int *)(&DAT_007e6028 + (*(int *)(puVar11 + -0xc) * 5 + -0x2ee) * 4);
            switch(*(int *)(puVar11 + -0xc)) {
            case 0xad:
              *(undefined1 *)(param_1 + 0xd) = 1;
              *(undefined2 *)(param_1 + 0xe) = uVar17;
              *(undefined2 *)((int)param_1 + 0x36) = *(undefined2 *)(puVar11 + -8);
              *(undefined1 *)((int)param_1 + 0x35) = *puVar11;
              break;
            case 0xae:
              *(undefined1 *)(param_1 + 0x10) = 1;
              *(undefined2 *)(param_1 + 0x11) = uVar17;
              *(undefined2 *)((int)param_1 + 0x42) = *(undefined2 *)(puVar11 + -8);
              *(undefined1 *)((int)param_1 + 0x41) = *puVar11;
              break;
            case 0xb3:
              *(undefined1 *)((int)param_1 + 0x22) = 1;
              *(undefined2 *)((int)param_1 + 0x26) = uVar17;
              *(undefined2 *)(param_1 + 9) = *(undefined2 *)(puVar11 + -8);
              *(undefined1 *)((int)param_1 + 0x23) = *puVar11;
              break;
            case 0xb5:
              *(undefined1 *)(param_1 + 10) = 1;
              *(undefined2 *)(param_1 + 0xb) = uVar17;
              *(undefined2 *)((int)param_1 + 0x2a) = *(undefined2 *)(puVar11 + -8);
              *(undefined1 *)((int)param_1 + 0x29) = *puVar11;
              break;
            case 0xb8:
              *(undefined1 *)((int)param_1 + 0x3a) = 1;
              *(undefined2 *)((int)param_1 + 0x3e) = uVar17;
              *(undefined2 *)(param_1 + 0xf) = *(undefined2 *)(puVar11 + -8);
              *(undefined1 *)((int)param_1 + 0x3b) = *puVar11;
              break;
            case 0xbc:
              *(undefined1 *)(param_1 + 7) = 1;
              *(undefined2 *)(param_1 + 8) = uVar17;
              *(undefined2 *)((int)param_1 + 0x1e) = *(undefined2 *)(puVar11 + -8);
              *(undefined1 *)((int)param_1 + 0x1d) = *puVar11;
              break;
            case 0xbd:
              *(undefined1 *)((int)param_1 + 0x2e) = 1;
              *(undefined2 *)((int)param_1 + 0x32) = uVar17;
              *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(puVar11 + -8);
              *(undefined1 *)((int)param_1 + 0x2f) = *puVar11;
              break;
            case 0xbe:
              *(undefined1 *)((int)param_1 + 0x46) = 1;
              *(undefined2 *)((int)param_1 + 0x4a) = uVar17;
              *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(puVar11 + -8);
              *(undefined1 *)((int)param_1 + 0x47) = *puVar11;
            }
          }
        }
        piVar1 = (int *)(puVar11 + 8);
        piVar16 = (int *)(puVar11 + 8);
        puVar11 = puVar11 + 0x14;
      } while (0 < *piVar1);
    }
    break;
  case 0x5d:
    iVar6 = *(int *)((int)this + 0x4d4) * 0x21;
    iVar6 = iVar6 / 0x28 + (iVar6 >> 0x1f);
    goto cf_common_join_004C0FC5;
  case 0x61:
    *(char *)(param_1 + 0xd) = (char)((*(int *)((int)this + 0x518) * 0x21) / DAT_007be8c4);
    if (*(int *)((int)this + 0x520) == 0) {
      *(undefined1 *)((int)param_1 + 0x35) = 0;
    }
    else {
      *(char *)((int)param_1 + 0x35) =
           (char)((*(int *)((int)this + 0x4e0) * 100) / *(int *)((int)this + 0x520));
    }
    break;
  case 0x62:
    uVar12 = thunk_FUN_004e41c0(*(int *)((int)this + 0x24));
    *(undefined4 *)((int)param_1 + 0x1d) = uVar12;
    iVar6 = thunk_FUN_004e4180(*(int *)((int)this + 0x24));
    *(int *)((int)param_1 + 0x21) = iVar6;
    break;
  case 100:
    uVar12 = *(undefined4 *)((int)this + 0x4d0);
    *(undefined4 *)((int)param_1 + 0x21) = 100;
    *(undefined4 *)((int)param_1 + 0x1d) = uVar12;
    break;
  case 0x68:
    *(undefined1 *)(param_1 + 7) = 0x21;
    *(int *)((int)param_1 + 0x1d) = (*(int *)((int)this + 0x4d4) * 0x21) / 200;
    break;
  case 0x6d:
    local_c = (int *)((int)param_1 + 0x1d);
    iVar6 = 0;
    param_1 = (int *)((int)this + 0x4d8);
    do {
      if (param_1[-2] != 0) {
        *local_c = *param_1;
        iVar7 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
        *(char *)(iVar6 + 0x25 + (int)piVar2) = (char)iVar7;
        *(char *)(iVar6 + 0x2f + (int)piVar2) = (char)param_1[2];
      }
      iVar6 = iVar6 + 1;
      param_1 = param_1 + 1;
      local_c = local_c + 1;
    } while (iVar6 < 2);
    if ((((*(int *)((int)this + 0x4d0) == 0) || (*(int *)((int)this + 0x4e8) == 0)) ||
        (*(int *)((int)this + 0x4d4) == 0)) || (*(int *)((int)this + 0x4ec) == 0)) {
      *(undefined1 *)((int)piVar2 + 0x17) = 0;
      *(undefined1 *)((int)piVar2 + 0x16) = 0;
      *(undefined1 *)((int)piVar2 + 0x19) = 0;
      *(undefined1 *)(piVar2 + 6) = 0;
    }
    else {
      *(bool *)((int)piVar2 + 0x17) = *(int *)((int)this + 0x4e0) < 100;
      *(bool *)((int)piVar2 + 0x16) = 0 < *(int *)((int)this + 0x4e0);
      *(bool *)((int)piVar2 + 0x19) = *(int *)((int)this + 0x4e4) < 100;
      *(bool *)(piVar2 + 6) = 0 < *(int *)((int)this + 0x4e4);
    }
    if ((*(int *)((int)this + 0x4d0) == 0) || (uVar4 = 3, *(int *)((int)this + 0x4e8) == 0)) {
      uVar4 = 1;
    }
    *(undefined1 *)((int)piVar2 + 0x1a) = uVar4;
    if ((*(int *)((int)this + 0x4d4) == 0) || (uVar4 = 3, *(int *)((int)this + 0x4ec) == 0)) {
      uVar4 = 1;
    }
    *(undefined1 *)((int)piVar2 + 0x1b) = uVar4;
    break;
  case 0x6e:
    *(undefined2 *)((int)param_1 + 0x3a) = 0;
    psVar13 = (short *)((int)this + 0x4e0);
    iVar6 = 0x28;
    do {
      sVar5 = *psVar13;
      psVar13 = psVar13 + 2;
      *(short *)((int)param_1 + 0x3a) = *(short *)((int)param_1 + 0x3a) + sVar5;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    break;
  case 0x6f:
    iVar6 = *(int *)((int)this + 0x4d0) * 0x28;
    goto LAB_004c0fbb;
  case 0x70:
    iVar6 = *(int *)((int)this + 0x4ec) * 0x21;
    cVar3 = ((char)(iVar6 / 100) + (char)(iVar6 >> 0x1f)) -
            (char)((longlong)iVar6 * 0x51eb851f >> 0x3f);
    goto LAB_004c0fcc;
  case 0x72:
    if ((*(int *)((int)this + 0x4d0) == 0) && (*(int *)((int)this + 0x361) == 8)) {
      iVar6 = *(int *)((int)this + 0x394) * 0x21;
      goto LAB_004c0f8e;
    }
    if (*(int *)((int)this + 0x4d0) == 1) {
      *(undefined1 *)(param_1 + 0xd) = 0x21;
    }
    else {
      *(undefined1 *)(param_1 + 0xd) = 0;
    }
    break;
  case 0x73:
    iVar6 = *(int *)((int)this + 0x4d0) * 0x21;
LAB_004c0fbb:
    iVar6 = iVar6 / 5000 + (iVar6 >> 0x1f);
cf_common_join_004C0FC5:
    cVar3 = (char)iVar6 - (char)(iVar6 >> 0x1f);
LAB_004c0fcc:
    *(char *)(param_1 + 0xd) = cVar3;
  }
  piVar2[0x16] = 0;
  iVar6 = *(int *)((int)this + 0x361);
  bVar18 = SUB41(iVar6,0);
  if (iVar6 != 0) {
    if (*(int *)((int)this + 0x3b8) != 0) {
      piVar2[0x16] = 0xbb9;
      return bVar18;
    }
    if (*(int *)((int)this + 0x3bc) != 0) {
      piVar2[0x16] = 0xbba;
      return bVar18;
    }
    if (*(int *)((int)this + 0x3c4) != 0) {
      piVar2[0x16] = 0xbbb;
      return bVar18;
    }
    if (*(int *)((int)this + 0x3c8) != 0) {
      iVar6 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
      iVar6 = (-(uint)((char)iVar6 != '\x03') & 0xffffffe1) + 0xbdb;
      piVar2[0x16] = iVar6;
      return SUB41(iVar6,0);
    }
    if (*(int *)((int)this + 0x3c0) != 0) {
      piVar2[0x16] = 0xbd3;
      return bVar18;
    }
    iVar6 = iVar6 + -1;
    bVar18 = SUB41(iVar6,0);
    switch(iVar6) {
    case 0:
      bVar18 = thunk_FUN_0044e1b0(*(int *)((int)this + 0x24));
      if (CONCAT31(extraout_var_07,bVar18) == 0) {
        piVar2[0x16] = 0xbdf;
        return bVar18;
      }
      if (*(int *)((int)this + 0x369) == 9) {
        piVar2[0x16] = 0xbc4;
        return bVar18;
      }
      piVar2[0x16] = (-(uint)(*(int *)((int)this + 0x369) != 0x15) & 0xfffffffa) + 0xbc3;
      return bVar18;
    case 1:
      piVar2[0x16] = 0xbbe;
      return bVar18;
    case 2:
      piVar2[0x16] = 0xbbf;
      return bVar18;
    case 3:
      piVar2[0x16] = 0xbc0;
      return bVar18;
    case 4:
      piVar2[0x16] = 0xbc1;
      return bVar18;
    case 5:
      piVar2[0x16] = 0xbc2;
      return bVar18;
    case 6:
      piVar2[0x16] = 0xbd2;
      return bVar18;
    case 7:
      piVar2[0x16] = 0xbdc;
      return bVar18;
    }
    goto switchD_004c107c_default;
  }
  if (*(int *)((int)this + 0x4a0) != 0) {
    piVar2[0x16] = 0xbd4;
    return false;
  }
  iVar6 = *(int *)((int)this + 0x245);
  if (iVar6 != 0) {
    if (iVar6 == 4) {
      piVar2[0x16] = 0xbcc;
    }
    goto switchD_004c107c_default;
  }
  iVar6 = *(int *)((int)this + 0x5ac) + -0x33;
  bVar18 = SUB41(iVar6,0);
  switch(*(int *)((int)this + 0x5ac)) {
  case 0x33:
    iVar7 = thunk_FUN_004e22f0(this,0);
    if (iVar7 == 0) {
      iVar7 = thunk_FUN_004e22f0(this,1);
      iVar6 = 0;
      if (iVar7 == 0) break;
    }
    piVar2[0x16] = 0xbc5;
    return SUB41(iVar7,0);
  case 0x34:
    piVar2[0x16] = 0xbc6;
    return bVar18;
  case 0x36:
    if (*(int *)((int)this + 0x4d4) < 0x28) {
      piVar2[0x16] = 0xbc7;
      return bVar18;
    }
    break;
  case 0x37:
    if (*(int *)((int)this + 0x4d8) == 0xffff) {
      if (*(int *)((int)this + 0x4d0) < 100) {
        piVar2[0x16] = 0xbd5;
        return bVar18;
      }
      piVar2[0x16] = (-(uint)(*(int *)((int)this + 0x42c) != 0) & 0xfffffffe) + 0xbd8;
      return bVar18;
    }
    goto LAB_004c12d3;
  case 0x3a:
    piVar2[0x16] = 0xbc9;
    return bVar18;
  case 0x3c:
    piVar2[0x16] = 0;
    return bVar18;
  case 0x43:
    if (*(int *)((int)this + 0x4d0) == 1) {
      piVar2[0x16] = 0xbca;
      return bVar18;
    }
    if (*(int *)((int)this + 0x4d0) == 2) {
      piVar2[0x16] = 0xbcb;
      return bVar18;
    }
    break;
  case 0x45:
  case 0x4e:
    if (*(int *)((int)this + 0x4d0) == 1) {
      piVar2[0x16] = 0xbc8;
      return bVar18;
    }
    break;
  case 0x4c:
    if (*(int *)((int)this + 0x4d0) == 1) {
      piVar2[0x16] = 0xbcd;
      return bVar18;
    }
    if (*(int *)((int)this + 0x4d0) == 2) {
      piVar2[0x16] = 0xbce;
      return bVar18;
    }
    break;
  case 0x4d:
    if (*(int *)((int)this + 0x4d0) == 1) {
      piVar2[0x16] = 0xbcf;
      return bVar18;
    }
    if (*(int *)((int)this + 0x4d0) == 2) {
      piVar2[0x16] = 0xbd0;
      return bVar18;
    }
    break;
  case 0x50:
    piVar2[0x16] = 0xbd1;
    return bVar18;
  case 100:
    if (*(int *)((int)this + 0x4dc) != 0) {
      piVar2[0x16] = 0xbdd;
      return bVar18;
    }
    break;
  case 0x6c:
    iVar6 = *(int *)((int)this + 0x4d8);
    if ((iVar6 == 0xffff) &&
       (((iVar6 = *(int *)((int)this + 0x61b), iVar6 == 0 || (*(int *)(iVar6 + 0x20) != 1000)) ||
        (*(int *)(iVar6 + 0x4d8) == 0xffff)))) {
      iVar7 = thunk_FUN_004e9930((int)this);
      iVar6 = 0;
      if ((((iVar7 != 0) && (iVar6 = *(int *)((int)this + 0x61b), iVar6 != 0)) &&
          (*(int *)(iVar6 + 0x20) == 1000)) &&
         ((*(int *)(iVar6 + 0x4d8) == 0xffff && (*(int *)(iVar6 + 0x5b8) < SHORT_007fb244 + -1)))) {
        piVar2[0x16] = 0xbe0;
        return SUB41(iVar6,0);
      }
      piVar2[0x16] = (*(int *)((int)this + 0x61b) != 0) + 0xbd9;
      return SUB41(iVar6,0);
    }
LAB_004c12d3:
    piVar2[0x16] = 0xbd7;
    return SUB41(iVar6,0);
  }
switchD_004c107c_default:
  return SUB41(iVar6,0);
switchD_004bef7c_caseD_37:
  iVar6 = *(int *)((int)this + 0x4d0);
LAB_004c0ae0:
  iVar6 = (iVar6 * 0x28) / 100 + (iVar6 * 0x28 >> 0x1f);
  goto cf_common_join_004C0FC5;
}

