
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 thunk_FUN_00627eb0(int param_1)

{
  char cVar1;
  code *pcVar2;
  short sVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 unaff_ESI;
  undefined4 *puVar9;
  void *unaff_EDI;
  undefined4 *puVar10;
  void *pvVar11;
  bool bVar12;
  undefined4 uStack_7c;
  undefined4 auStack_78 [16];
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 *puStack_10;
  float fStack_c;
  float fStack_8;
  
  uStack_7c = DAT_00858df8;
  DAT_00858df8 = &uStack_7c;
  iVar5 = __setjmp3(auStack_78,0,unaff_EDI,unaff_ESI);
  if (iVar5 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_7c;
    iVar7 = FUN_006ad4d0(s_E____titans_nick_to_Part_Cpp_007d1354,0x218,0,iVar5,&DAT_007a4ccc);
    if (iVar7 != 0) {
      pcVar2 = (code *)swi(3);
      uVar8 = (*pcVar2)();
      return uVar8;
    }
    FUN_006a5e40(iVar5,0,0x7d1354,0x21a);
    return 0xffff;
  }
  uVar6 = *(uint *)(param_1 + 0x10);
  if (0x10f < uVar6) {
    DAT_00858df8 = (undefined4 *)uStack_7c;
    return 0;
  }
  if (uVar6 == 0x10f) {
    uStack_14 = thunk_FUN_0062af40(puStack_10,&uStack_18);
    FUN_006ab060(&uStack_14);
    DAT_00858df8 = (undefined4 *)uStack_7c;
    return 0;
  }
  if (uVar6 != 0) {
    if (uVar6 != 2) {
      if (uVar6 != 3) {
        DAT_00858df8 = (undefined4 *)uStack_7c;
        return 0;
      }
      if ((int)*(uint *)((int)puStack_10 + 0xc6) < 0) {
        DAT_00858df8 = (undefined4 *)uStack_7c;
        return 0;
      }
      FUN_006e8ba0(DAT_00807598,*(uint *)((int)puStack_10 + 0xc6));
      *(undefined4 *)((int)puStack_10 + 0xc6) = 0xffffffff;
      DAT_00858df8 = (undefined4 *)uStack_7c;
      return 0;
    }
    puVar9 = *(undefined4 **)(param_1 + 0x14);
    if (puVar9[3] != 2) {
      puVar10 = puStack_10;
      for (iVar5 = 0x11; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      *(undefined2 *)puVar10 = *(undefined2 *)puVar9;
      thunk_FUN_00629f90(puStack_10,(int)puStack_10,*(undefined4 *)(DAT_00802a38 + 0xe4));
      thunk_FUN_00629070(puStack_10,(uint)*(byte *)((int)puStack_10 + 0xd6));
      if (puStack_10[0xf] != 0) {
        *(undefined4 *)((int)puStack_10 + 0xc2) = 1;
        puStack_10[0x41] = puStack_10[0xf];
        if ((int)*(uint *)((int)puStack_10 + 0xc6) < 0) {
          DAT_00858df8 = (undefined4 *)uStack_7c;
          return 0;
        }
        FUN_006eab60(DAT_00807598,*(uint *)((int)puStack_10 + 0xc6));
        DAT_00858df8 = (undefined4 *)uStack_7c;
        return 0;
      }
      *(undefined4 *)((int)puStack_10 + 0xc2) = 2;
      if ((int)*(uint *)((int)puStack_10 + 0xc6) < 0) {
        DAT_00858df8 = (undefined4 *)uStack_7c;
        return 0;
      }
      FUN_006eaaa0(DAT_00807598,*(uint *)((int)puStack_10 + 0xc6),0);
      *(undefined1 *)((int)puStack_10 + 0xc1) = 1;
      DAT_00858df8 = (undefined4 *)uStack_7c;
      return 0;
    }
    thunk_FUN_0062aef0(puStack_10,puVar9);
    puVar9 = (undefined4 *)((int)puStack_10 + 0xd7);
    for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    *(undefined1 *)puVar9 = 0;
    if (*(int *)((int)puStack_10 + 0xc2) == 3) {
      thunk_FUN_0062a860((int)puStack_10);
      *(undefined4 *)((int)puStack_10 + 0xc2) = 0;
      DAT_00858df8 = (undefined4 *)uStack_7c;
      return 0;
    }
    if (*(char *)((int)puStack_10 + 0xd6) == '\0') {
      DAT_00858df8 = (undefined4 *)uStack_7c;
      return 0;
    }
    if (*(int *)((int)puStack_10 + 0xc2) != 2) {
      DAT_00858df8 = (undefined4 *)uStack_7c;
      return 0;
    }
    thunk_FUN_00629070(puStack_10,1);
    DAT_00858df8 = (undefined4 *)uStack_7c;
    return 0;
  }
  if ((*(char *)((int)puStack_10 + 0xd6) == '\0') && (*(char *)(puStack_10 + 0x10) != '\0')) {
    uVar6 = thunk_FUN_0062b4a0((int)puStack_10);
    *(char *)((int)puStack_10 + 0xd6) = (char)uVar6;
    if ((char)uVar6 != '\0') {
      thunk_FUN_00629e60(puStack_10,0);
    }
  }
  switch(*(undefined4 *)((int)puStack_10 + 0xc2)) {
  case 1:
    iVar5 = puStack_10[0xf];
    puStack_10[0xf] = iVar5 + -1;
    if (0 < iVar5 + -1) {
      DAT_00858df8 = (undefined4 *)uStack_7c;
      return 0;
    }
    *(undefined4 *)((int)puStack_10 + 0xc2) = 2;
    if (*(int *)((int)puStack_10 + 0xb6) <= *(int *)((int)puStack_10 + 0xb2)) {
      *(undefined4 *)((int)puStack_10 + 0xb2) = 0;
    }
    if (*(char *)((int)puStack_10 + 0xd6) == '\0') {
      DAT_00858df8 = (undefined4 *)uStack_7c;
      return 0;
    }
    if ((int)*(uint *)((int)puStack_10 + 0xc6) < 0) {
      DAT_00858df8 = (undefined4 *)uStack_7c;
      return 0;
    }
    FUN_006eaaa0(DAT_00807598,*(uint *)((int)puStack_10 + 0xc6),0);
    *(undefined1 *)((int)puStack_10 + 0xc1) = 1;
    FUN_006ea270(DAT_00807598,*(uint *)((int)puStack_10 + 0xc6),0,*(uint *)((int)puStack_10 + 0xb2))
    ;
    fStack_c = (float)*(int *)((int)puStack_10 + 0x46) * _DAT_007904f8 * _DAT_007904f0;
    *(float *)((int)puStack_10 + 0x6a) = fStack_c;
    fStack_8 = (float)*(int *)((int)puStack_10 + 0x4a) * _DAT_007904f8 * _DAT_007904f0;
    *(float *)((int)puStack_10 + 0x6e) = fStack_8;
    fVar4 = (float)*(int *)((int)puStack_10 + 0x4e) * _DAT_007904f8 * _DAT_007904f0;
    *(float *)((int)puStack_10 + 0x72) = fVar4;
    FUN_006ea960(DAT_00807598,*(uint *)((int)puStack_10 + 0xc6),fStack_c,fStack_8,
                 fVar4 + _DAT_007904fc);
    pvVar11 = DAT_00802a88;
    if (DAT_00802a88 == (void *)0x0) {
      DAT_00858df8 = (undefined4 *)uStack_7c;
      return 0;
    }
    iVar5 = *(int *)((int)puStack_10 + 0x4e);
    sVar3 = (short)(iVar5 >> 0x1f);
    if (iVar5 < 0) {
      fStack_c = (float)((short)(((short)(iVar5 / 200) + sVar3) -
                                (short)((longlong)iVar5 * 0x51eb851f >> 0x3f)) + -1);
    }
    else {
      fStack_c = (float)(int)(short)(((short)(iVar5 / 200) + sVar3) -
                                    (short)((longlong)iVar5 * 0x51eb851f >> 0x3f));
    }
    iVar5 = *(int *)((int)puStack_10 + 0x4a);
    sVar3 = (short)(iVar5 >> 0x1f);
    if (iVar5 < 0) {
      iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar3) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar3) -
                          (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
    }
    iVar7 = *(int *)((int)puStack_10 + 0x46);
    sVar3 = (short)(iVar7 >> 0x1f);
    if (iVar7 < 0) {
      iVar7 = (short)(((short)(iVar7 / 0xc9) + sVar3) - (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar7 = (int)(short)(((short)(iVar7 / 0xc9) + sVar3) -
                          (short)((longlong)iVar7 * 0x28c1979 >> 0x3f));
    }
    if (((DAT_0080874d == -1) || (*(int *)((int)DAT_00802a88 + 0xf8) == 0)) ||
       ((thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),iVar7,iVar5,
                            &iStack_1c,&iStack_20), (int)fStack_c < 0 ||
        (iStack_24 = iStack_1c, iStack_28 = iStack_20, 4 < (int)fStack_c)))) goto LAB_006282e0;
LAB_00628286:
    if (((iStack_24 < 0) || (*(int *)((int)pvVar11 + 0x30) <= iStack_24)) ||
       (((&DAT_0079aed0)[(int)fStack_c] + iStack_28 < 0 ||
        (*(int *)((int)pvVar11 + 0x34) <= (&DAT_0079aed0)[(int)fStack_c] + iStack_28)))) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if ((bVar12) && (*(int *)((int)pvVar11 + 0x4c) != 0)) {
      bVar12 = *(char *)(((&DAT_0079aed0)[(int)fStack_c] + iStack_28) *
                         *(int *)((int)pvVar11 + 0x30) + *(int *)((int)pvVar11 + 0x4c) + iStack_24)
               != '\0';
    }
    else {
      bVar12 = true;
    }
    break;
  case 2:
    iVar5 = thunk_FUN_0062a370(puStack_10,*(int *)(DAT_00802a38 + 0xe4));
    if (iVar5 < 1) {
      thunk_FUN_00629830((int)puStack_10);
      uVar6 = thunk_FUN_0062b4a0((int)puStack_10);
      *(char *)((int)puStack_10 + 0xd6) = (char)uVar6;
      if ((char)uVar6 == '\0') {
        thunk_FUN_006298a0(0);
        if (-1 < (int)*(uint *)((int)puStack_10 + 0xc6)) {
          FUN_006e8ba0(DAT_00807598,*(uint *)((int)puStack_10 + 0xc6));
          *(undefined4 *)((int)puStack_10 + 0xc6) = 0xffffffff;
        }
      }
      else {
        thunk_FUN_006298a0(1);
      }
      *(undefined4 *)((int)puStack_10 + 0xc2) = 3;
      if (iVar5 != -1) {
        DAT_00858df8 = (undefined4 *)uStack_7c;
        return 0;
      }
      *(undefined4 *)((int)puStack_10 + 0x76) = 2;
      DAT_00858df8 = (undefined4 *)uStack_7c;
      return 0;
    }
    uVar6 = *(uint *)(DAT_00802a38 + 0xe4) - *(int *)((int)puStack_10 + 0xaa);
    if ((*(char *)((int)puStack_10 + 0xd6) != '\0') && ((*(uint *)(DAT_00802a38 + 0xe4) & 1) == 0))
    {
      if ((puStack_10[5] & 0xff00) == 0x400) {
        iVar5 = *(int *)((int)puStack_10 + 0x4e);
        if (*(int *)((int)puStack_10 + 0x5a) + 5 <= iVar5) goto LAB_0062838a;
      }
      else {
        iVar5 = *(int *)((int)puStack_10 + 0x4e);
      }
      thunk_FUN_00556760(DAT_00802a7c,1,0,0,*(int *)((int)puStack_10 + 0x46),
                         *(int *)((int)puStack_10 + 0x4a),iVar5,0,0,0,0,0,0,-1,0,0);
    }
LAB_0062838a:
    if (uVar6 < 0x19) {
LAB_006283bd:
      *(int *)((int)puStack_10 + 0xb2) = *(int *)((int)puStack_10 + 0xb2) + 1;
    }
    else if (uVar6 < 0x2d) {
      if ((*(byte *)(DAT_00802a38 + 0xe4) & 1) == 0) goto LAB_006283bd;
    }
    else if (*(uint *)(DAT_00802a38 + 0xe4) % 3 == 0) goto LAB_006283bd;
    if (*(int *)((int)puStack_10 + 0xb6) <= *(int *)((int)puStack_10 + 0xb2)) {
      *(undefined4 *)((int)puStack_10 + 0xb2) = 0;
    }
    if (*(char *)((int)puStack_10 + 0xd6) == '\0') {
      DAT_00858df8 = (undefined4 *)uStack_7c;
      return 0;
    }
    FUN_006ea270(DAT_00807598,*(uint *)((int)puStack_10 + 0xc6),0,*(uint *)((int)puStack_10 + 0xb2))
    ;
    fStack_c = (float)*(int *)((int)puStack_10 + 0x46) * _DAT_007904f8 * _DAT_007904f0;
    *(float *)((int)puStack_10 + 0x6a) = fStack_c;
    fStack_8 = (float)*(int *)((int)puStack_10 + 0x4a) * _DAT_007904f8 * _DAT_007904f0;
    *(float *)((int)puStack_10 + 0x6e) = fStack_8;
    fVar4 = (float)*(int *)((int)puStack_10 + 0x4e) * _DAT_007904f8 * _DAT_007904f0;
    *(float *)((int)puStack_10 + 0x72) = fVar4;
    FUN_006ea960(DAT_00807598,*(uint *)((int)puStack_10 + 0xc6),fStack_c,fStack_8,
                 fVar4 + _DAT_007904fc);
    pvVar11 = DAT_00802a88;
    if (DAT_00802a88 == (void *)0x0) {
      DAT_00858df8 = (undefined4 *)uStack_7c;
      return 0;
    }
    iVar5 = *(int *)((int)puStack_10 + 0x4e);
    sVar3 = (short)(iVar5 >> 0x1f);
    if (iVar5 < 0) {
      fStack_c = (float)((short)(((short)(iVar5 / 200) + sVar3) -
                                (short)((longlong)iVar5 * 0x51eb851f >> 0x3f)) + -1);
    }
    else {
      fStack_c = (float)(int)(short)(((short)(iVar5 / 200) + sVar3) -
                                    (short)((longlong)iVar5 * 0x51eb851f >> 0x3f));
    }
    iVar5 = *(int *)((int)puStack_10 + 0x4a);
    sVar3 = (short)(iVar5 >> 0x1f);
    if (iVar5 < 0) {
      iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar3) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar3) -
                          (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
    }
    iVar7 = *(int *)((int)puStack_10 + 0x46);
    sVar3 = (short)(iVar7 >> 0x1f);
    if (iVar7 < 0) {
      iVar7 = (short)(((short)(iVar7 / 0xc9) + sVar3) - (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar7 = (int)(short)(((short)(iVar7 / 0xc9) + sVar3) -
                          (short)((longlong)iVar7 * 0x28c1979 >> 0x3f));
    }
    if ((((DAT_0080874d != -1) && (*(int *)((int)DAT_00802a88 + 0xf8) != 0)) &&
        (thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),iVar7,iVar5,
                            &iStack_24,&iStack_28), -1 < (int)fStack_c)) && ((int)fStack_c < 5))
    goto LAB_00628286;
LAB_006282e0:
    bVar12 = true;
    break;
  case 3:
    iVar5 = *(int *)((int)puStack_10 + 0xb2) + 1;
    *(int *)((int)puStack_10 + 0xb2) = iVar5;
    if ((((*(char *)((int)puStack_10 + 0xbf) != '\0') && (iVar5 == 0xf)) &&
        (*(char *)((int)puStack_10 + 0xd6) != '\0')) &&
       (-1 < (int)*(uint **)((int)puStack_10 + 0xc6))) {
      FUN_006e9cb0(DAT_00807598,*(uint **)((int)puStack_10 + 0xc6),1);
    }
    if (((*(int *)((int)puStack_10 + 0xb2) == *(int *)((int)puStack_10 + 0xb6)) &&
        (*(char *)((int)puStack_10 + 0xd6) != '\0')) &&
       (-1 < (int)*(uint **)((int)puStack_10 + 0xc6))) {
      FUN_006e9d40(DAT_00807598,*(uint **)((int)puStack_10 + 0xc6),0);
    }
    if (((*(int *)((int)puStack_10 + 0xb2) == 5) &&
        (iVar5 = thunk_FUN_0062b300((int)puStack_10), iVar5 != 0)) &&
       (*(int *)((int)puStack_10 + 0x76) != 2)) {
      thunk_FUN_0062af90(puStack_10,*(int *)((int)puStack_10 + 0x46),
                         *(int *)((int)puStack_10 + 0x4a),*(int *)((int)puStack_10 + 0x4e));
    }
    uVar6 = *(uint *)((int)puStack_10 + 0xb2);
    if (*(int *)((int)puStack_10 + 0xba) <= (int)uVar6) {
      thunk_FUN_0062a860((int)puStack_10);
      *(undefined4 *)((int)puStack_10 + 0xc2) = 0;
      DAT_00858df8 = (undefined4 *)uStack_7c;
      return 0;
    }
    if (*(char *)((int)puStack_10 + 0xd6) == '\0') {
      DAT_00858df8 = (undefined4 *)uStack_7c;
      return 0;
    }
    if ((int)uVar6 < *(int *)((int)puStack_10 + 0xb6)) {
      FUN_006ea270(DAT_00807598,*(uint *)((int)puStack_10 + 0xc6),0,uVar6);
      fStack_c = (float)*(int *)((int)puStack_10 + 0x46) * _DAT_007904f8 * _DAT_007904f0;
      *(float *)((int)puStack_10 + 0x6a) = fStack_c;
      fStack_8 = (float)*(int *)((int)puStack_10 + 0x4a) * _DAT_007904f8 * _DAT_007904f0;
      *(float *)((int)puStack_10 + 0x6e) = fStack_8;
      fVar4 = (float)*(int *)((int)puStack_10 + 0x4e) * _DAT_007904f8 * _DAT_007904f0;
      *(float *)((int)puStack_10 + 0x72) = fVar4;
      FUN_006ea960(DAT_00807598,*(uint *)((int)puStack_10 + 0xc6),fStack_c,fStack_8,
                   fVar4 + _DAT_007904fc);
      pvVar11 = DAT_00802a88;
      if (DAT_00802a88 != (void *)0x0) {
        iVar5 = *(int *)((int)puStack_10 + 0x4e);
        sVar3 = (short)(iVar5 >> 0x1f);
        if (iVar5 < 0) {
          fStack_c = (float)((short)(((short)(iVar5 / 200) + sVar3) -
                                    (short)((longlong)iVar5 * 0x51eb851f >> 0x3f)) + -1);
        }
        else {
          fStack_c = (float)(int)(short)(((short)(iVar5 / 200) + sVar3) -
                                        (short)((longlong)iVar5 * 0x51eb851f >> 0x3f));
        }
        iVar5 = *(int *)((int)puStack_10 + 0x4a);
        sVar3 = (short)(iVar5 >> 0x1f);
        if (iVar5 < 0) {
          iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar3) -
                         (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar3) -
                              (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
        }
        iVar7 = *(int *)((int)puStack_10 + 0x46);
        if (iVar7 < 0) {
          iVar7 = (short)(iVar7 / 0xc9) + -1;
        }
        else {
          iVar7 = (int)(short)(iVar7 / 0xc9);
        }
        if ((((DAT_0080874d == -1) || (*(int *)((int)DAT_00802a88 + 0xf8) == 0)) ||
            (thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),iVar7,iVar5,
                                &iStack_2c,&iStack_30), (int)fStack_c < 0)) || (4 < (int)fStack_c))
        {
          bVar12 = true;
        }
        else {
          if (((iStack_2c < 0) || (*(int *)((int)pvVar11 + 0x30) <= iStack_2c)) ||
             (((&DAT_0079aed0)[(int)fStack_c] + iStack_30 < 0 ||
              (*(int *)((int)pvVar11 + 0x34) <= (&DAT_0079aed0)[(int)fStack_c] + iStack_30)))) {
            bVar12 = false;
          }
          else {
            bVar12 = true;
          }
          if ((bVar12) && (*(int *)((int)pvVar11 + 0x4c) != 0)) {
            bVar12 = *(char *)(((&DAT_0079aed0)[(int)fStack_c] + iStack_30) *
                               *(int *)((int)pvVar11 + 0x30) + *(int *)((int)pvVar11 + 0x4c) +
                              iStack_2c) != '\0';
          }
          else {
            bVar12 = true;
          }
        }
        if (bVar12) {
          if (*(char *)((int)puStack_10 + 0xc1) == '\0') {
            FUN_006eaaa0(DAT_00807598,*(uint *)((int)puStack_10 + 0xc6),0);
            *(undefined1 *)((int)puStack_10 + 0xc1) = 1;
          }
        }
        else if (*(char *)((int)puStack_10 + 0xc1) == '\x01') {
          FUN_006eab60(DAT_00807598,*(uint *)((int)puStack_10 + 0xc6));
          *(undefined1 *)((int)puStack_10 + 0xc1) = 0;
        }
      }
    }
    if (*(char *)((int)puStack_10 + 0xbf) == '\0') {
      DAT_00858df8 = (undefined4 *)uStack_7c;
      return 0;
    }
    iVar5 = *(int *)((int)puStack_10 + 0xb2);
    if (iVar5 < 0xf) {
      DAT_00858df8 = (undefined4 *)uStack_7c;
      return 0;
    }
    switch((uint)puStack_10[5] >> 8 & 0xff) {
    case 0:
    case 1:
    case 2:
    case 4:
    case 8:
    case 0x10:
    case 0x20:
    case 0x40:
    case 0x80:
      goto switchD_006288e6_caseD_0;
    default:
      DAT_00858df8 = (undefined4 *)uStack_7c;
      return 0;
    }
  case 4:
    fStack_c = (float)*(int *)((int)puStack_10 + 0x46) * _DAT_007904f8 * _DAT_007904f0;
    *(float *)((int)puStack_10 + 0x6a) = fStack_c;
    fStack_8 = (float)*(int *)((int)puStack_10 + 0x4a) * _DAT_007904f8 * _DAT_007904f0;
    *(float *)((int)puStack_10 + 0x6e) = fStack_8;
    fVar4 = (float)*(int *)((int)puStack_10 + 0x4e) * _DAT_007904f8 * _DAT_007904f0;
    *(float *)((int)puStack_10 + 0x72) = fVar4;
    FUN_006ea960(DAT_00807598,*(uint *)((int)puStack_10 + 0xc6),fStack_c,fStack_8,
                 fVar4 + _DAT_007904fc);
    pvVar11 = DAT_00802a88;
    if (DAT_00802a88 == (void *)0x0) {
      DAT_00858df8 = (undefined4 *)uStack_7c;
      return 0;
    }
    iVar5 = *(int *)((int)puStack_10 + 0x4e);
    sVar3 = (short)(iVar5 >> 0x1f);
    if (iVar5 < 0) {
      fStack_c = (float)((short)(((short)(iVar5 / 200) + sVar3) -
                                (short)((longlong)iVar5 * 0x51eb851f >> 0x3f)) + -1);
    }
    else {
      fStack_c = (float)(int)(short)(((short)(iVar5 / 200) + sVar3) -
                                    (short)((longlong)iVar5 * 0x51eb851f >> 0x3f));
    }
    iVar5 = *(int *)((int)puStack_10 + 0x4a);
    sVar3 = (short)(iVar5 >> 0x1f);
    if (iVar5 < 0) {
      iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar3) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar3) -
                          (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
    }
    iVar7 = *(int *)((int)puStack_10 + 0x46);
    sVar3 = (short)(iVar7 >> 0x1f);
    if (iVar7 < 0) {
      iVar7 = (short)(((short)(iVar7 / 0xc9) + sVar3) - (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar7 = (int)(short)(((short)(iVar7 / 0xc9) + sVar3) -
                          (short)((longlong)iVar7 * 0x28c1979 >> 0x3f));
    }
    if ((((DAT_0080874d == -1) || (*(int *)((int)DAT_00802a88 + 0xf8) == 0)) ||
        (thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),iVar7,iVar5,
                            &iStack_34,&iStack_38), (int)fStack_c < 0)) || (4 < (int)fStack_c)) {
      bVar12 = true;
    }
    else {
      if (((iStack_34 < 0) || (*(int *)((int)pvVar11 + 0x30) <= iStack_34)) ||
         (((&DAT_0079aed0)[(int)fStack_c] + iStack_38 < 0 ||
          (*(int *)((int)pvVar11 + 0x34) <= (&DAT_0079aed0)[(int)fStack_c] + iStack_38)))) {
        bVar12 = false;
      }
      else {
        bVar12 = true;
      }
      if ((bVar12) && (*(int *)((int)pvVar11 + 0x4c) != 0)) {
        bVar12 = *(char *)(((&DAT_0079aed0)[(int)fStack_c] + iStack_38) *
                           *(int *)((int)pvVar11 + 0x30) + iStack_34 + *(int *)((int)pvVar11 + 0x4c)
                          ) != '\0';
      }
      else {
        bVar12 = true;
      }
    }
    cVar1 = *(char *)((int)puStack_10 + 0xc1);
    goto joined_r0x00628af1;
  default:
    goto switchD_006280c4_default;
  }
  cVar1 = *(char *)((int)puStack_10 + 0xc1);
joined_r0x00628af1:
  if (bVar12) {
    if (cVar1 == '\0') {
      FUN_006eaaa0(DAT_00807598,*(uint *)((int)puStack_10 + 0xc6),0);
      *(undefined1 *)((int)puStack_10 + 0xc1) = 1;
      DAT_00858df8 = (undefined4 *)uStack_7c;
      return 0;
    }
  }
  else if (cVar1 == '\x01') {
    FUN_006eab60(DAT_00807598,*(uint *)((int)puStack_10 + 0xc6));
    *(undefined1 *)((int)puStack_10 + 0xc1) = 0;
    DAT_00858df8 = (undefined4 *)uStack_7c;
    return 0;
  }
switchD_006280c4_default:
  DAT_00858df8 = (undefined4 *)uStack_7c;
  return 0;
switchD_006288e6_caseD_0:
  if (*(byte *)(puStack_10 + 5) < 4) {
    FUN_006ea270(DAT_00807598,*(uint *)((int)puStack_10 + 0xc6),1,iVar5 + 3);
    DAT_00858df8 = (undefined4 *)uStack_7c;
    return 0;
  }
  FUN_006ea270(DAT_00807598,*(uint *)((int)puStack_10 + 0xc6),1,iVar5 - 0xf);
  DAT_00858df8 = (undefined4 *)uStack_7c;
  return 0;
}

