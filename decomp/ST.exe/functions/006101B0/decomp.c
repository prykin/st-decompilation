
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_006101b0(int *param_1)

{
  short *psVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  short sVar10;
  short sVar11;
  void *pvVar12;
  int iVar13;
  int local_68;
  int local_64;
  int local_60;
  int local_58;
  int local_54;
  int local_50;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  undefined4 local_8;
  
  local_1c = 0;
  switch(param_1[0x83]) {
  case 1:
    cVar2 = (char)param_1[0x85];
    if (cVar2 == '\x01') {
      iVar13 = thunk_FUN_00615ad0(param_1);
      if ((iVar13 != 0) && (iVar13 = *(int *)(*(int *)((int)param_1 + 0x2dd) + 8), iVar13 != 0)) {
        param_1[0x9f] =
             (((int)*(short *)((int)param_1 + 0x1ef) - (int)*(short *)((int)param_1 + 0x1e9)) *
             10000) / iVar13;
        param_1[0xa0] =
             (((int)*(short *)((int)param_1 + 0x1f1) - (int)*(short *)((int)param_1 + 0x1eb)) *
             10000) / *(int *)(*(int *)((int)param_1 + 0x2dd) + 8);
        param_1[0xa1] =
             (((int)*(short *)((int)param_1 + 499) - (int)*(short *)((int)param_1 + 0x1ed)) * 10000)
             / *(int *)(*(int *)((int)param_1 + 0x2dd) + 8);
        *(undefined4 *)((int)param_1 + 0x256) = 1;
        thunk_FUN_0060ece0(param_1,0,(int)*(short *)((int)param_1 + 0x1e9),
                           (int)*(short *)((int)param_1 + 0x1eb),
                           (int)*(short *)((int)param_1 + 0x1ed),
                           (int)*(short *)((int)param_1 + 0x1ef),
                           (int)*(short *)((int)param_1 + 0x1f1),(int)*(short *)((int)param_1 + 499)
                           ,1);
        param_1[0x83] = 2;
        goto LAB_00610347;
      }
    }
    else {
      if (cVar2 == '\x02') {
        iVar13 = thunk_FUN_0060ef40(param_1,7);
        if (0 < iVar13) {
          *(undefined4 *)((int)param_1 + 0x256) = 1;
          thunk_FUN_0060ece0(param_1,1,(int)*(short *)((int)param_1 + 0x1e9),
                             (int)*(short *)((int)param_1 + 0x1eb),
                             (int)*(short *)((int)param_1 + 0x1ed),
                             (int)*(short *)((int)param_1 + 0x2cb),
                             (int)*(short *)((int)param_1 + 0x2cd),
                             (int)*(short *)((int)param_1 + 0x2cf),1);
          if (param_1[0x9e] == 0) {
            iVar13 = (int)*(short *)(*(int *)((int)param_1 + 0x2dd) + 6 +
                                    *(int *)((int)param_1 + 0x2d9) * 0x1c);
            param_1[0x9f] =
                 ((short)(&DAT_007ed570)[iVar13 * 4] * 10000000) /
                 *(int *)(&DAT_007cfe74 + iVar13 * 4);
            iVar13 = (int)*(short *)(*(int *)((int)param_1 + 0x2dd) + 6 +
                                    *(int *)((int)param_1 + 0x2d9) * 0x1c);
            param_1[0xa0] =
                 ((short)(&DAT_007ed572)[iVar13 * 4] * 10000000) /
                 *(int *)(&DAT_007cfe74 + iVar13 * 4);
            iVar13 = (int)*(short *)(*(int *)((int)param_1 + 0x2dd) + 6 +
                                    *(int *)((int)param_1 + 0x2d9) * 0x1c);
            iVar13 = ((short)(&DAT_007ed574)[iVar13 * 4] * 10000000) /
                     *(int *)(&DAT_007cfe74 + iVar13 * 4);
          }
          else {
            psVar1 = (short *)(*(int *)((int)param_1 + 0x2dd) +
                              *(int *)((int)param_1 + 0x2d9) * 0x1c);
            param_1[0x9f] =
                 (((int)*(short *)((int)param_1 + 0x272) - (int)*psVar1) * 10000) /
                 *(int *)(psVar1 + 4);
            iVar13 = *(int *)((int)param_1 + 0x2dd) + *(int *)((int)param_1 + 0x2d9) * 0x1c;
            param_1[0xa0] =
                 (((int)(short)param_1[0x9d] - (int)*(short *)(iVar13 + 2)) * 10000) /
                 *(int *)(iVar13 + 8);
            iVar13 = *(int *)((int)param_1 + 0x2dd) + *(int *)((int)param_1 + 0x2d9) * 0x1c;
            iVar13 = (((int)*(short *)((int)param_1 + 0x276) - (int)*(short *)(iVar13 + 4)) * 10000)
                     / *(int *)(iVar13 + 8);
          }
          param_1[0xa1] = iVar13;
          param_1[0x83] = 2;
          goto LAB_00610347;
        }
      }
      else {
        if (cVar2 != '\x03') goto LAB_00610347;
        iVar13 = FUN_006acf0d((int)*(short *)((int)param_1 + 0x1e9),
                              (int)*(short *)((int)param_1 + 0x1eb),
                              (int)*(short *)((int)param_1 + 0x1ed),
                              (int)*(short *)((int)param_1 + 0x1ef),
                              (int)*(short *)((int)param_1 + 0x1f1),
                              (int)*(short *)((int)param_1 + 499));
        if (iVar13 != 0) {
          param_1[0x9f] =
               (((int)*(short *)((int)param_1 + 0x1ef) - (int)*(short *)((int)param_1 + 0x1e9)) *
               10000) / iVar13;
          param_1[0xa0] =
               (((int)*(short *)((int)param_1 + 0x1f1) - (int)*(short *)((int)param_1 + 0x1eb)) *
               10000) / iVar13;
          param_1[0xa1] =
               (((int)*(short *)((int)param_1 + 499) - (int)*(short *)((int)param_1 + 0x1ed)) *
               10000) / iVar13;
          iVar8 = *(int *)((int)param_1 + 0x1f7);
          param_1[0xa5] = *(int *)(DAT_00802a38 + 0xe4);
          param_1[0xa3] = iVar13;
          if (iVar8 == 0) {
            param_1[0xa2] = 10;
            param_1[0x83] = 8;
          }
          else if (iVar8 == 1) {
            param_1[0xa2] = 0x35;
            param_1[0x83] = 8;
          }
          else if (iVar8 == 2) {
            param_1[0xa2] = 7;
            param_1[0x83] = 8;
          }
          else {
            param_1[0xa2] = 0x1e;
            param_1[0x83] = 8;
          }
          goto LAB_00610347;
        }
      }
      thunk_FUN_0060ec00(param_1);
    }
    param_1[0x83] = 9;
LAB_00610347:
    if (param_1[0x83] == 9) {
      return local_1c;
    }
    if (((char)param_1[0x94] == '\0') && (*(void **)((int)param_1 + 0x252) != (void *)0x0)) {
      thunk_FUN_004ad460(*(void **)((int)param_1 + 0x252),0);
      *(undefined1 *)(param_1 + 0x94) = 1;
    }
    if (*(int *)((int)param_1 + 0x1f7) != 0) {
      return local_1c;
    }
    thunk_FUN_00617560(param_1,0x477);
    return local_1c;
  case 2:
  case 4:
    iVar13 = thunk_FUN_006139a0(param_1,&local_10,&local_14,&local_18);
    if (iVar13 == 0) {
LAB_006121e1:
      thunk_FUN_0060ec00(param_1);
      param_1[0x83] = 9;
      return local_1c;
    }
    *(short *)((int)param_1 + 0x262) = (short)param_1[0x97];
    *(undefined2 *)(param_1 + 0x98) = *(undefined2 *)((int)param_1 + 0x25a);
    *(undefined2 *)(param_1 + 0x99) = *(undefined2 *)((int)param_1 + 0x25e);
    sVar7 = (short)local_10;
    *(short *)((int)param_1 + 0x25a) = sVar7;
    local_20 = (int)sVar7;
    sVar11 = (short)local_14;
    *(short *)(param_1 + 0x97) = sVar11;
    sVar10 = (short)local_18;
    *(short *)((int)param_1 + 0x25e) = sVar10;
    local_c = 0;
    if (sVar7 < 0) {
      iVar13 = (short)((sVar7 / 0xc9 + (sVar7 >> 0xf)) -
                      (short)((longlong)local_20 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar13 = (int)(short)((sVar7 / 0xc9 + (sVar7 >> 0xf)) -
                           (short)((longlong)local_20 * 0x28c1979 >> 0x3f));
    }
    local_24 = (int)sVar11;
    if (sVar11 < 0) {
      iVar8 = (short)((sVar11 / 0xc9 + (sVar11 >> 0xf)) -
                     (short)((longlong)local_24 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar8 = (int)(short)((sVar11 / 0xc9 + (sVar11 >> 0xf)) -
                          (short)((longlong)local_24 * 0x28c1979 >> 0x3f));
    }
    iVar9 = (int)sVar10;
    if (sVar10 < 0) {
      iVar3 = (short)((sVar10 / 200 + (sVar10 >> 0xf)) -
                     (short)((longlong)iVar9 * 0x51eb851f >> 0x3f)) + -1;
    }
    else {
      iVar3 = (int)(short)((sVar10 / 200 + (sVar10 >> 0xf)) -
                          (short)((longlong)iVar9 * 0x51eb851f >> 0x3f));
    }
    if ((((*(short *)((int)param_1 + 0x215) == iVar13) &&
         (*(short *)((int)param_1 + 0x217) == iVar8)) && (*(short *)((int)param_1 + 0x219) == iVar3)
        ) || (local_8 = (uint)(*(int *)((int)param_1 + 0x1f7) == 2),
             iVar13 = local_20 - (short)((short)iVar13 * 0xc9 + 100),
             iVar8 = local_24 - (short)((short)iVar8 * 0xc9 + 100), iVar9 = iVar9 + iVar3 * -0xc9,
             iVar9 = iVar9 * iVar9,
             0x2773 < ((int)(iVar9 + (iVar9 >> 0x1f & 3U)) >> 2) + iVar8 * iVar8 + iVar13 * iVar13))
    {
      uVar6 = 0;
    }
    else {
      uVar6 = thunk_FUN_00601500((void *)((int)param_1 + 0x2eb),local_10,local_14,local_18,
                                 (int)(short)param_1[0x98],(int)*(short *)((int)param_1 + 0x262),
                                 (int)(short)param_1[0x99],*(int *)((int)param_1 + 0x1d9),
                                 *(int *)((int)param_1 + 0x21b),*(int *)((int)param_1 + 0x1fb),
                                 *(undefined2 *)((int)param_1 + 0x1ff),0xb0,local_8,0);
      if (0 < (int)uVar6) {
        if (uVar6 == 5) {
          thunk_FUN_0060ec00(param_1);
          param_1[0x83] = 9;
        }
        else {
          iVar13 = thunk_FUN_00615fd0(param_1,uVar6,param_1[0x83]);
          param_1[0x83] = iVar13;
        }
      }
    }
    if (param_1[0x83] == 2) {
      *(int *)((int)param_1 + 0x22b) = (int)*(short *)((int)param_1 + 0x25a);
      *(int *)((int)param_1 + 0x22f) = (int)(short)param_1[0x97];
      *(int *)((int)param_1 + 0x233) = (int)*(short *)((int)param_1 + 0x25e);
      if ((uVar6 == 0) &&
         ((*(int *)((int)param_1 + 0x1f7) == 0 || (*(int *)((int)param_1 + 0x1f7) == 2)))) {
        if (param_1[0x92] < 0) {
          uVar6 = 0;
        }
        else {
          if (4 < param_1[0x92]) goto LAB_00610911;
          uVar6 = 5;
        }
        TraksClassTy::TraksCreate
                  (DAT_00802a7c,1,1,uVar6,(int)*(short *)((int)param_1 + 0x25a),
                   (int)(short)param_1[0x97],(int)*(short *)((int)param_1 + 0x25e),0,0,0,0,0,0,-1,0,
                   0);
      }
LAB_00610911:
      if (*(char *)((int)param_1 + 0x2e9) == '\0') {
        return local_1c;
      }
      if (*(int *)((int)param_1 + 0x252) == 0) {
        return local_1c;
      }
      iVar13 = *(int *)((int)param_1 + 0x1f7);
      if (iVar13 == 0) {
LAB_00610969:
        local_24 = (int)(short)param_1[0x99];
        local_3c = (float)(int)(short)param_1[0x98] * _DAT_007904f8 * _DAT_007904f0;
        local_38 = (float)(int)*(short *)((int)param_1 + 0x262) * _DAT_007904f8 * _DAT_007904f0;
        local_34 = (float)local_24 * _DAT_007904f8 * _DAT_007904f0;
        FUN_006e25d0(DAT_00807598,&local_68);
        local_24 = (int)*(short *)((int)param_1 + 0x25e);
        local_48 = (float)(int)*(short *)((int)param_1 + 0x25a) * _DAT_007904f8 * _DAT_007904f0;
        local_44 = (float)(int)(short)param_1[0x97] * _DAT_007904f8 * _DAT_007904f0;
        local_40 = (float)local_24 * _DAT_007904f8 * _DAT_007904f0;
        FUN_006e25d0(DAT_00807598,&local_58);
        sVar7 = (**(code **)(*param_1 + 0x14))
                          (local_68 >> 0x10,local_64 >> 0x10,local_60 >> 0x10,local_58 >> 0x10,
                           local_54 >> 0x10,local_50 >> 0x10);
        *(undefined4 *)((int)param_1 + 0x237) = *(undefined4 *)(&DAT_007d2138 + sVar7 * 4);
      }
      else if (iVar13 == 1) {
        iVar13 = *(int *)((int)param_1 + 0x237) + 1;
        *(int *)((int)param_1 + 0x237) = iVar13;
        if (9 < iVar13) {
          *(undefined4 *)((int)param_1 + 0x237) = 0;
        }
      }
      else {
        if (iVar13 == 2) goto LAB_00610969;
        *(undefined4 *)((int)param_1 + 0x237) = 0;
      }
      STT3DSprC::SetCurFase
                (*(STT3DSprC **)((int)param_1 + 0x252),'\r',*(undefined4 *)((int)param_1 + 0x237));
      STT3DSprC::ShowCurFase(*(STT3DSprC **)((int)param_1 + 0x252),'\r');
      thunk_FUN_004ad3c0(*(void **)((int)param_1 + 0x252),
                         (float)*(int *)((int)param_1 + 0x22b) * _DAT_007904f8 * _DAT_007904f0,
                         (float)*(int *)((int)param_1 + 0x22f) * _DAT_007904f8 * _DAT_007904f0,
                         (float)*(int *)((int)param_1 + 0x233) * _DAT_007904f8 * _DAT_007904f0 +
                         _DAT_007904fc);
      pvVar12 = DAT_00802a88;
      if (DAT_00802a88 != (void *)0x0) {
        iVar13 = *(int *)((int)param_1 + 0x233);
        sVar7 = (short)(iVar13 >> 0x1f);
        if (iVar13 < 0) {
          local_c = (int)(short)(((short)(iVar13 / 200) + sVar7) -
                                (short)((longlong)iVar13 * 0x51eb851f >> 0x3f)) - 1;
        }
        else {
          local_c = (uint)(short)(((short)(iVar13 / 200) + sVar7) -
                                 (short)((longlong)iVar13 * 0x51eb851f >> 0x3f));
        }
        iVar13 = *(int *)((int)param_1 + 0x22f);
        sVar7 = (short)(iVar13 >> 0x1f);
        if (iVar13 < 0) {
          iVar13 = (short)(((short)(iVar13 / 0xc9) + sVar7) -
                          (short)((longlong)iVar13 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar13 = (int)(short)(((short)(iVar13 / 0xc9) + sVar7) -
                               (short)((longlong)iVar13 * 0x28c1979 >> 0x3f));
        }
        iVar8 = *(int *)((int)param_1 + 0x22b);
        sVar7 = (short)(iVar8 >> 0x1f);
        if (iVar8 < 0) {
          iVar8 = (short)(((short)(iVar8 / 0xc9) + sVar7) -
                         (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar8 = (int)(short)(((short)(iVar8 / 0xc9) + sVar7) -
                              (short)((longlong)iVar8 * 0x28c1979 >> 0x3f));
        }
        if (((DAT_0080874d != -1) && (*(int *)((int)DAT_00802a88 + 0xf8) != 0)) &&
           ((thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),iVar8,iVar13
                                ,&local_24,&local_20), -1 < (int)local_c &&
            ((((int)local_c < 5 && (-1 < local_24)) &&
             (iVar13 = *(int *)((int)pvVar12 + 0x30), local_24 < iVar13)))))) {
          iVar8 = (&DAT_0079aed0)[local_c];
LAB_00611039:
          iVar8 = iVar8 + local_20;
          if (((iVar8 < 0) || (*(int *)((int)pvVar12 + 0x34) <= iVar8)) ||
             (*(int *)((int)pvVar12 + 0x4c) == 0)) goto LAB_00611c0f;
          cVar2 = *(char *)(iVar8 * iVar13 + local_24 + *(int *)((int)pvVar12 + 0x4c));
          goto joined_r0x00611c0d;
        }
        goto LAB_00611c0f;
      }
    }
    else {
      if (param_1[0x83] != 4) {
        return local_1c;
      }
      if (param_1[0x92] < 0) {
        if ((uint)param_1[0xa5] < *(uint *)(DAT_00802a38 + 0xe4)) {
          param_1[0x92] = 0;
          param_1[0x93] = *(int *)(DAT_00802a38 + 0xe4);
        }
      }
      else {
        uVar4 = (uint)(*(int *)(DAT_00802a38 + 0xe4) - param_1[0x93]) >> 2;
        param_1[0x92] = uVar4;
        if ((int)*(short *)(DAT_00806724 + 0x23) <= (int)uVar4) {
          param_1[0x92] = *(short *)(DAT_00806724 + 0x23) + -1;
          goto LAB_006121e1;
        }
        if ((*(byte *)(DAT_00802a38 + 0xe4) & 1) == 0) {
          iVar13 = param_1[0xa2];
          param_1[0xa2] = iVar13 + -3;
          if (iVar13 + -3 < 5) {
            param_1[0xa2] = 5;
          }
          if (0 < *(int *)((int)param_1 + 0x21b)) {
            *(int *)((int)param_1 + 0x21b) = *(int *)((int)param_1 + 0x21b) + -0x12;
          }
          if (*(int *)((int)param_1 + 0x21b) < 0) {
            *(undefined4 *)((int)param_1 + 0x21b) = 0;
          }
        }
      }
      *(int *)((int)param_1 + 0x22b) = (int)*(short *)((int)param_1 + 0x25a);
      *(int *)((int)param_1 + 0x22f) = (int)(short)param_1[0x97];
      *(int *)((int)param_1 + 0x233) = (int)*(short *)((int)param_1 + 0x25e);
      if ((uVar6 == 0) &&
         ((*(int *)((int)param_1 + 0x1f7) == 0 || (*(int *)((int)param_1 + 0x1f7) == 2)))) {
        if (param_1[0x92] < 0) {
          uVar6 = 0;
        }
        else {
          if (4 < param_1[0x92]) goto LAB_00610d47;
          uVar6 = 5;
        }
        TraksClassTy::TraksCreate
                  (DAT_00802a7c,1,1,uVar6,(int)*(short *)((int)param_1 + 0x25a),
                   (int)(short)param_1[0x97],(int)*(short *)((int)param_1 + 0x25e),0,0,0,0,0,0,-1,0,
                   0);
      }
LAB_00610d47:
      if (*(char *)((int)param_1 + 0x2e9) == '\0') {
        return local_1c;
      }
      if (*(int *)((int)param_1 + 0x252) == 0) {
        return local_1c;
      }
      iVar13 = *(int *)((int)param_1 + 0x1f7);
      if (iVar13 == 0) {
LAB_00610d9f:
        local_24 = (int)(short)param_1[0x99];
        local_48 = (float)(int)(short)param_1[0x98] * _DAT_007904f8 * _DAT_007904f0;
        local_44 = (float)(int)*(short *)((int)param_1 + 0x262) * _DAT_007904f8 * _DAT_007904f0;
        local_40 = (float)local_24 * _DAT_007904f8 * _DAT_007904f0;
        FUN_006e25d0(DAT_00807598,&local_58);
        local_24 = (int)*(short *)((int)param_1 + 0x25e);
        local_3c = (float)(int)*(short *)((int)param_1 + 0x25a) * _DAT_007904f8 * _DAT_007904f0;
        local_38 = (float)(int)(short)param_1[0x97] * _DAT_007904f8 * _DAT_007904f0;
        local_34 = (float)local_24 * _DAT_007904f8 * _DAT_007904f0;
        FUN_006e25d0(DAT_00807598,&local_68);
        sVar7 = (**(code **)(*param_1 + 0x14))
                          (local_58 >> 0x10,local_54 >> 0x10,local_50 >> 0x10,local_68 >> 0x10,
                           local_64 >> 0x10,local_60 >> 0x10);
        *(undefined4 *)((int)param_1 + 0x237) = *(undefined4 *)(&DAT_007d2138 + sVar7 * 4);
      }
      else if (iVar13 == 1) {
        iVar13 = *(int *)((int)param_1 + 0x237) + 1;
        *(int *)((int)param_1 + 0x237) = iVar13;
        if (9 < iVar13) {
          *(undefined4 *)((int)param_1 + 0x237) = 0;
        }
      }
      else {
        if (iVar13 == 2) goto LAB_00610d9f;
        *(undefined4 *)((int)param_1 + 0x237) = 0;
      }
      STT3DSprC::SetCurFase
                (*(STT3DSprC **)((int)param_1 + 0x252),'\r',*(undefined4 *)((int)param_1 + 0x237));
      STT3DSprC::ShowCurFase(*(STT3DSprC **)((int)param_1 + 0x252),'\r');
      thunk_FUN_004ad3c0(*(void **)((int)param_1 + 0x252),
                         (float)*(int *)((int)param_1 + 0x22b) * _DAT_007904f8 * _DAT_007904f0,
                         (float)*(int *)((int)param_1 + 0x22f) * _DAT_007904f8 * _DAT_007904f0,
                         (float)*(int *)((int)param_1 + 0x233) * _DAT_007904f8 * _DAT_007904f0 +
                         _DAT_007904fc);
      pvVar12 = DAT_00802a88;
      if (DAT_00802a88 != (void *)0x0) {
        iVar13 = *(int *)((int)param_1 + 0x233);
        sVar7 = (short)(iVar13 >> 0x1f);
        if (iVar13 < 0) {
          local_c = (int)(short)(((short)(iVar13 / 200) + sVar7) -
                                (short)((longlong)iVar13 * 0x51eb851f >> 0x3f)) - 1;
        }
        else {
          local_c = (uint)(short)(((short)(iVar13 / 200) + sVar7) -
                                 (short)((longlong)iVar13 * 0x51eb851f >> 0x3f));
        }
        iVar13 = *(int *)((int)param_1 + 0x22f);
        sVar7 = (short)(iVar13 >> 0x1f);
        if (iVar13 < 0) {
          iVar13 = (short)(((short)(iVar13 / 0xc9) + sVar7) -
                          (short)((longlong)iVar13 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar13 = (int)(short)(((short)(iVar13 / 0xc9) + sVar7) -
                               (short)((longlong)iVar13 * 0x28c1979 >> 0x3f));
        }
        iVar8 = *(int *)((int)param_1 + 0x22b);
        sVar7 = (short)(iVar8 >> 0x1f);
        if (iVar8 < 0) {
          iVar8 = (short)(((short)(iVar8 / 0xc9) + sVar7) -
                         (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar8 = (int)(short)(((short)(iVar8 / 0xc9) + sVar7) -
                              (short)((longlong)iVar8 * 0x28c1979 >> 0x3f));
        }
        if (((DAT_0080874d != -1) && (*(int *)((int)DAT_00802a88 + 0xf8) != 0)) &&
           ((thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),iVar8,iVar13
                                ,&local_24,&local_20), -1 < (int)local_c &&
            ((((int)local_c < 5 && (-1 < local_24)) &&
             (iVar13 = *(int *)((int)pvVar12 + 0x30), local_24 < iVar13)))))) {
          iVar8 = (&DAT_0079aed0)[local_c];
          goto LAB_00611039;
        }
        goto LAB_00611c0f;
      }
    }
    break;
  case 3:
    iVar13 = thunk_FUN_006164e0(param_1,&local_10,&local_14,&local_18);
    if (iVar13 < 1) {
      *(undefined4 *)((int)param_1 + 0x256) = 2;
      param_1[0x83] = 4;
      *(undefined2 *)(param_1 + 0x9c) = 0xffff;
      uVar6 = param_1[7] * 0x41c64e6d + 0x3039;
      param_1[7] = uVar6;
      param_1[0xa5] = (uVar6 >> 0x10) % 0xb + 10 + *(int *)(DAT_00802a38 + 0xe4);
      param_1[0xa6] = *(int *)(DAT_00802a38 + 0xe4);
      local_1c = thunk_FUN_006173a0(param_1,10,&local_10,&local_14,&local_18);
      if (0 < local_1c) {
        return local_1c;
      }
      goto LAB_006121e1;
    }
    *(undefined2 *)(param_1 + 0x98) = *(undefined2 *)((int)param_1 + 0x25a);
    *(short *)((int)param_1 + 0x262) = (short)param_1[0x97];
    *(undefined2 *)(param_1 + 0x99) = *(undefined2 *)((int)param_1 + 0x25e);
    sVar7 = (short)local_10;
    *(short *)((int)param_1 + 0x25a) = sVar7;
    sVar11 = (short)local_14;
    *(short *)(param_1 + 0x97) = sVar11;
    sVar10 = (short)local_18;
    *(short *)((int)param_1 + 0x25e) = sVar10;
    local_c = 0;
    if (sVar7 < 0) {
      iVar13 = (short)((sVar7 / 0xc9 + (sVar7 >> 0xf)) -
                      (short)((longlong)(int)sVar7 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar13 = (int)(short)((sVar7 / 0xc9 + (sVar7 >> 0xf)) -
                           (short)((longlong)(int)sVar7 * 0x28c1979 >> 0x3f));
    }
    if (*(short *)((int)param_1 + 0x215) == iVar13) {
      if (sVar11 < 0) {
        iVar13 = (short)((sVar11 / 0xc9 + (sVar11 >> 0xf)) -
                        (short)((longlong)(int)sVar11 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar13 = (int)(short)((sVar11 / 0xc9 + (sVar11 >> 0xf)) -
                             (short)((longlong)(int)sVar11 * 0x28c1979 >> 0x3f));
      }
      if (*(short *)((int)param_1 + 0x217) != iVar13) goto LAB_00611185;
      if (sVar10 < 0) {
        iVar13 = (short)((sVar10 / 200 + (sVar10 >> 0xf)) -
                        (short)((longlong)(int)sVar10 * 0x51eb851f >> 0x3f)) + -1;
      }
      else {
        iVar13 = (int)(short)((sVar10 / 200 + (sVar10 >> 0xf)) -
                             (short)((longlong)(int)sVar10 * 0x51eb851f >> 0x3f));
      }
      uVar6 = local_c;
      if (*(short *)((int)param_1 + 0x219) != iVar13) goto LAB_00611185;
    }
    else {
LAB_00611185:
      uVar6 = thunk_FUN_00601500((void *)((int)param_1 + 0x2eb),local_10,local_14,local_18,
                                 (int)(short)param_1[0x98],(int)*(short *)((int)param_1 + 0x262),
                                 (int)(short)param_1[0x99],*(int *)((int)param_1 + 0x1d9),
                                 *(int *)((int)param_1 + 0x21b),*(int *)((int)param_1 + 0x1fb),
                                 *(undefined2 *)((int)param_1 + 0x1ff),0xb0,0,0);
      local_c = uVar6;
      if (0 < (int)uVar6) {
        if (uVar6 == 5) {
          thunk_FUN_0060ec00(param_1);
          param_1[0x83] = 9;
        }
        else {
          iVar13 = thunk_FUN_00615fd0(param_1,uVar6,param_1[0x83]);
          param_1[0x83] = iVar13;
        }
      }
    }
    if ((param_1[0x83] != 3) && (param_1[0x83] != 4)) {
      return local_1c;
    }
    *(int *)((int)param_1 + 0x22b) = (int)*(short *)((int)param_1 + 0x25a);
    *(int *)((int)param_1 + 0x22f) = (int)(short)param_1[0x97];
    *(int *)((int)param_1 + 0x233) = (int)*(short *)((int)param_1 + 0x25e);
    if ((uVar6 == 0) &&
       ((*(int *)((int)param_1 + 0x1f7) == 0 || (*(int *)((int)param_1 + 0x1f7) == 2)))) {
      if (param_1[0x92] < 0) {
        uVar6 = 0;
      }
      else {
        if (4 < param_1[0x92]) goto LAB_006112a8;
        uVar6 = 5;
      }
      TraksClassTy::TraksCreate
                (DAT_00802a7c,1,1,uVar6,(int)*(short *)((int)param_1 + 0x25a),
                 (int)(short)param_1[0x97],(int)*(short *)((int)param_1 + 0x25e),0,0,0,0,0,0,-1,0,0)
      ;
    }
LAB_006112a8:
    if (*(char *)((int)param_1 + 0x2e9) == '\0') {
      return local_1c;
    }
    if (*(int *)((int)param_1 + 0x252) == 0) {
      return local_1c;
    }
    iVar13 = *(int *)((int)param_1 + 0x1f7);
    if (iVar13 == 0) {
LAB_00611304:
      local_24 = (int)(short)param_1[0x99];
      local_48 = (float)(int)(short)param_1[0x98] * _DAT_007904f8 * _DAT_007904f0;
      local_44 = (float)(int)*(short *)((int)param_1 + 0x262) * _DAT_007904f8 * _DAT_007904f0;
      local_40 = (float)local_24 * _DAT_007904f8 * _DAT_007904f0;
      FUN_006e25d0(DAT_00807598,&local_58);
      local_24 = (int)*(short *)((int)param_1 + 0x25e);
      local_3c = (float)(int)*(short *)((int)param_1 + 0x25a) * _DAT_007904f8 * _DAT_007904f0;
      local_38 = (float)(int)(short)param_1[0x97] * _DAT_007904f8 * _DAT_007904f0;
      local_34 = (float)local_24 * _DAT_007904f8 * _DAT_007904f0;
      FUN_006e25d0(DAT_00807598,&local_68);
      sVar7 = (**(code **)(*param_1 + 0x14))
                        (local_58 >> 0x10,local_54 >> 0x10,local_50 >> 0x10,local_68 >> 0x10,
                         local_64 >> 0x10,local_60 >> 0x10);
      *(undefined4 *)((int)param_1 + 0x237) = *(undefined4 *)(&DAT_007d2138 + sVar7 * 4);
    }
    else if (iVar13 == 1) {
      iVar13 = *(int *)((int)param_1 + 0x237) + 1;
      *(int *)((int)param_1 + 0x237) = iVar13;
      if (9 < iVar13) {
        *(undefined4 *)((int)param_1 + 0x237) = 0;
      }
    }
    else {
      if (iVar13 == 2) goto LAB_00611304;
      *(undefined4 *)((int)param_1 + 0x237) = 0;
    }
    STT3DSprC::SetCurFase
              (*(STT3DSprC **)((int)param_1 + 0x252),'\r',*(undefined4 *)((int)param_1 + 0x237));
    STT3DSprC::ShowCurFase(*(STT3DSprC **)((int)param_1 + 0x252),'\r');
    thunk_FUN_004ad3c0(*(void **)((int)param_1 + 0x252),
                       (float)*(int *)((int)param_1 + 0x22b) * _DAT_007904f8 * _DAT_007904f0,
                       (float)*(int *)((int)param_1 + 0x22f) * _DAT_007904f8 * _DAT_007904f0,
                       (float)*(int *)((int)param_1 + 0x233) * _DAT_007904f8 * _DAT_007904f0 +
                       _DAT_007904fc);
    pvVar12 = DAT_00802a88;
    if (DAT_00802a88 != (void *)0x0) {
      iVar13 = *(int *)((int)param_1 + 0x233);
      sVar7 = (short)(iVar13 >> 0x1f);
      if (iVar13 < 0) {
        local_c = (int)(short)(((short)(iVar13 / 200) + sVar7) -
                              (short)((longlong)iVar13 * 0x51eb851f >> 0x3f)) - 1;
      }
      else {
        local_c = (uint)(short)(((short)(iVar13 / 200) + sVar7) -
                               (short)((longlong)iVar13 * 0x51eb851f >> 0x3f));
      }
      iVar13 = *(int *)((int)param_1 + 0x22f);
      sVar7 = (short)(iVar13 >> 0x1f);
      if (iVar13 < 0) {
        iVar13 = (short)(((short)(iVar13 / 0xc9) + sVar7) -
                        (short)((longlong)iVar13 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar13 = (int)(short)(((short)(iVar13 / 0xc9) + sVar7) -
                             (short)((longlong)iVar13 * 0x28c1979 >> 0x3f));
      }
      iVar8 = *(int *)((int)param_1 + 0x22b);
      sVar7 = (short)(iVar8 >> 0x1f);
      if (iVar8 < 0) {
        iVar8 = (short)(((short)(iVar8 / 0xc9) + sVar7) -
                       (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar8 = (int)(short)(((short)(iVar8 / 0xc9) + sVar7) -
                            (short)((longlong)iVar8 * 0x28c1979 >> 0x3f));
      }
      if (((((DAT_0080874d == -1) || (*(int *)((int)DAT_00802a88 + 0xf8) == 0)) ||
           (thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),iVar8,iVar13,
                               &local_24,&local_20), (int)local_c < 0)) ||
          (((4 < (int)local_c || (local_24 < 0)) ||
           ((*(int *)((int)pvVar12 + 0x30) <= local_24 ||
            ((iVar13 = (&DAT_0079aed0)[local_c] + local_20, iVar13 < 0 ||
             (*(int *)((int)pvVar12 + 0x34) <= iVar13)))))))) ||
         ((*(int *)((int)pvVar12 + 0x4c) == 0 ||
          (*(char *)(iVar13 * *(int *)((int)pvVar12 + 0x30) + *(int *)((int)pvVar12 + 0x4c) +
                    local_24) != '\0')))) goto LAB_00611c0f;
      if ((char)param_1[0x94] == '\0') break;
LAB_006115da:
      thunk_FUN_004ad430(*(int *)((int)param_1 + 0x252));
      *(undefined1 *)(param_1 + 0x94) = 0;
    }
    break;
  case 5:
    iVar13 = thunk_FUN_00616f60(param_1,&local_10,&local_14,&local_18);
    if (iVar13 == 0) {
      return local_1c;
    }
    *(short *)((int)param_1 + 0x262) = (short)param_1[0x97];
    *(undefined2 *)(param_1 + 0x98) = *(undefined2 *)((int)param_1 + 0x25a);
    *(undefined2 *)(param_1 + 0x99) = *(undefined2 *)((int)param_1 + 0x25e);
    local_8 = (uint)(*(int *)((int)param_1 + 0x1f7) == 2);
    sVar7 = (short)local_10;
    *(short *)((int)param_1 + 0x25a) = sVar7;
    sVar11 = (short)local_14;
    *(short *)(param_1 + 0x97) = sVar11;
    sVar10 = (short)local_18;
    *(short *)((int)param_1 + 0x25e) = sVar10;
    local_c = 0;
    if (sVar7 < 0) {
      iVar13 = (short)((sVar7 / 0xc9 + (sVar7 >> 0xf)) -
                      (short)((longlong)(int)sVar7 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar13 = (int)(short)((sVar7 / 0xc9 + (sVar7 >> 0xf)) -
                           (short)((longlong)(int)sVar7 * 0x28c1979 >> 0x3f));
    }
    if (*(short *)((int)param_1 + 0x215) == iVar13) {
      if (sVar11 < 0) {
        iVar13 = (short)((sVar11 / 0xc9 + (sVar11 >> 0xf)) -
                        (short)((longlong)(int)sVar11 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar13 = (int)(short)((sVar11 / 0xc9 + (sVar11 >> 0xf)) -
                             (short)((longlong)(int)sVar11 * 0x28c1979 >> 0x3f));
      }
      if (*(short *)((int)param_1 + 0x217) != iVar13) goto LAB_006117e5;
      if (sVar10 < 0) {
        iVar13 = (short)((sVar10 / 200 + (sVar10 >> 0xf)) -
                        (short)((longlong)(int)sVar10 * 0x51eb851f >> 0x3f)) + -1;
      }
      else {
        iVar13 = (int)(short)((sVar10 / 200 + (sVar10 >> 0xf)) -
                             (short)((longlong)(int)sVar10 * 0x51eb851f >> 0x3f));
      }
      uVar6 = local_c;
      if (*(short *)((int)param_1 + 0x219) != iVar13) goto LAB_006117e5;
    }
    else {
LAB_006117e5:
      uVar6 = thunk_FUN_00601500((void *)((int)param_1 + 0x2eb),local_10,local_14,local_18,
                                 (int)(short)param_1[0x98],(int)*(short *)((int)param_1 + 0x262),
                                 (int)(short)param_1[0x99],*(int *)((int)param_1 + 0x1d9),
                                 *(int *)((int)param_1 + 0x21b),*(int *)((int)param_1 + 0x1fb),
                                 *(undefined2 *)((int)param_1 + 0x1ff),0xb0,local_8,0);
      local_c = uVar6;
      if (0 < (int)uVar6) {
        if (uVar6 == 5) {
          thunk_FUN_0060ec00(param_1);
          param_1[0x83] = 9;
        }
        else {
          iVar13 = thunk_FUN_00615fd0(param_1,uVar6,param_1[0x83]);
          param_1[0x83] = iVar13;
        }
      }
    }
    iVar13 = param_1[0x83];
    if (((iVar13 != 5) && (iVar13 != 3)) && (iVar13 != 4)) {
      return local_1c;
    }
    *(int *)((int)param_1 + 0x22b) = (int)*(short *)((int)param_1 + 0x25a);
    *(int *)((int)param_1 + 0x22f) = (int)(short)param_1[0x97];
    *(int *)((int)param_1 + 0x233) = (int)*(short *)((int)param_1 + 0x25e);
    if ((uVar6 == 0) &&
       ((*(int *)((int)param_1 + 0x1f7) == 0 || (*(int *)((int)param_1 + 0x1f7) == 2)))) {
      if (param_1[0x92] < 0) {
        uVar6 = 0;
      }
      else {
        if (4 < param_1[0x92]) goto LAB_0061190f;
        uVar6 = 5;
      }
      TraksClassTy::TraksCreate
                (DAT_00802a7c,1,1,uVar6,(int)*(short *)((int)param_1 + 0x25a),
                 (int)(short)param_1[0x97],(int)*(short *)((int)param_1 + 0x25e),0,0,0,0,0,0,-1,0,0)
      ;
    }
LAB_0061190f:
    if (*(char *)((int)param_1 + 0x2e9) == '\0') {
      return local_1c;
    }
    if (*(int *)((int)param_1 + 0x252) == 0) {
      return local_1c;
    }
    iVar13 = *(int *)((int)param_1 + 0x1f7);
    if (iVar13 == 0) {
LAB_0061196b:
      local_24 = (int)(short)param_1[0x99];
      local_48 = (float)(int)(short)param_1[0x98] * _DAT_007904f8 * _DAT_007904f0;
      local_44 = (float)(int)*(short *)((int)param_1 + 0x262) * _DAT_007904f8 * _DAT_007904f0;
      local_40 = (float)local_24 * _DAT_007904f8 * _DAT_007904f0;
      FUN_006e25d0(DAT_00807598,&local_58);
      local_24 = (int)*(short *)((int)param_1 + 0x25e);
      local_3c = (float)(int)*(short *)((int)param_1 + 0x25a) * _DAT_007904f8 * _DAT_007904f0;
      local_38 = (float)(int)(short)param_1[0x97] * _DAT_007904f8 * _DAT_007904f0;
      local_34 = (float)local_24 * _DAT_007904f8 * _DAT_007904f0;
      FUN_006e25d0(DAT_00807598,&local_68);
      sVar7 = (**(code **)(*param_1 + 0x14))
                        (local_58 >> 0x10,local_54 >> 0x10,local_50 >> 0x10,local_68 >> 0x10,
                         local_64 >> 0x10,local_60 >> 0x10);
      *(undefined4 *)((int)param_1 + 0x237) = *(undefined4 *)(&DAT_007d2138 + sVar7 * 4);
    }
    else if (iVar13 == 1) {
      iVar13 = *(int *)((int)param_1 + 0x237) + 1;
      *(int *)((int)param_1 + 0x237) = iVar13;
      if (9 < iVar13) {
        *(undefined4 *)((int)param_1 + 0x237) = 0;
      }
    }
    else {
      if (iVar13 == 2) goto LAB_0061196b;
      *(undefined4 *)((int)param_1 + 0x237) = 0;
    }
    STT3DSprC::SetCurFase
              (*(STT3DSprC **)((int)param_1 + 0x252),'\r',*(undefined4 *)((int)param_1 + 0x237));
    STT3DSprC::ShowCurFase(*(STT3DSprC **)((int)param_1 + 0x252),'\r');
    thunk_FUN_004ad3c0(*(void **)((int)param_1 + 0x252),
                       (float)*(int *)((int)param_1 + 0x22b) * _DAT_007904f8 * _DAT_007904f0,
                       (float)*(int *)((int)param_1 + 0x22f) * _DAT_007904f8 * _DAT_007904f0,
                       (float)*(int *)((int)param_1 + 0x233) * _DAT_007904f8 * _DAT_007904f0 +
                       _DAT_007904fc);
    pvVar12 = DAT_00802a88;
    if (DAT_00802a88 != (void *)0x0) {
      iVar13 = *(int *)((int)param_1 + 0x233);
      sVar7 = (short)(iVar13 >> 0x1f);
      if (iVar13 < 0) {
        local_c = (int)(short)(((short)(iVar13 / 200) + sVar7) -
                              (short)((longlong)iVar13 * 0x51eb851f >> 0x3f)) - 1;
      }
      else {
        local_c = (uint)(short)(((short)(iVar13 / 200) + sVar7) -
                               (short)((longlong)iVar13 * 0x51eb851f >> 0x3f));
      }
      iVar13 = *(int *)((int)param_1 + 0x22f);
      sVar7 = (short)(iVar13 >> 0x1f);
      if (iVar13 < 0) {
        iVar13 = (short)(((short)(iVar13 / 0xc9) + sVar7) -
                        (short)((longlong)iVar13 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar13 = (int)(short)(((short)(iVar13 / 0xc9) + sVar7) -
                             (short)((longlong)iVar13 * 0x28c1979 >> 0x3f));
      }
      iVar8 = *(int *)((int)param_1 + 0x22b);
      sVar7 = (short)(iVar8 >> 0x1f);
      if (iVar8 < 0) {
        iVar8 = (short)(((short)(iVar8 / 0xc9) + sVar7) -
                       (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar8 = (int)(short)(((short)(iVar8 / 0xc9) + sVar7) -
                            (short)((longlong)iVar8 * 0x28c1979 >> 0x3f));
      }
      if ((((DAT_0080874d == -1) || (*(int *)((int)DAT_00802a88 + 0xf8) == 0)) ||
          ((thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),iVar8,iVar13,
                               &local_24,&local_20), (int)local_c < 0 ||
           ((((4 < (int)local_c || (local_24 < 0)) || (*(int *)((int)pvVar12 + 0x30) <= local_24))
            || ((iVar13 = (&DAT_0079aed0)[local_c] + local_20, iVar13 < 0 ||
                (*(int *)((int)pvVar12 + 0x34) <= iVar13)))))))) ||
         (*(int *)((int)pvVar12 + 0x4c) == 0)) goto LAB_00611c0f;
      cVar2 = *(char *)(iVar13 * *(int *)((int)pvVar12 + 0x30) + *(int *)((int)pvVar12 + 0x4c) +
                       local_24);
joined_r0x00611c0d:
      if (cVar2 == '\0') {
        if ((char)param_1[0x94] != '\0') goto LAB_006115da;
      }
      else {
LAB_00611c0f:
        if ((char)param_1[0x94] == '\0') {
          thunk_FUN_004ad460(*(void **)((int)param_1 + 0x252),0);
          *(undefined1 *)(param_1 + 0x94) = 1;
        }
      }
    }
    break;
  case 6:
    if (*(uint *)(DAT_00802a38 + 0xe4) <= (uint)param_1[0x84]) {
      return 0;
    }
    thunk_FUN_00615860((int)*(short *)((int)param_1 + 0x1f5),&local_30,&local_2c,&local_28);
    uVar5 = thunk_FUN_00613140(param_1,((int)(local_30 + (local_30 >> 0x1f & 0x3ffU)) >> 10) +
                                       (int)*(short *)((int)param_1 + 0x1e9),
                               ((int)(local_2c + (local_2c >> 0x1f & 0x3ffU)) >> 10) +
                               (int)*(short *)((int)param_1 + 0x1eb),
                               ((int)(local_28 + (local_28 >> 0x1f & 0x3ffU)) >> 10) +
                               (int)*(short *)((int)param_1 + 0x1ed),
                               (int)*(short *)((int)param_1 + 0x1e9),
                               (int)*(short *)((int)param_1 + 0x1eb),
                               (int)*(short *)((int)param_1 + 0x1ed));
    thunk_FUN_00613280(param_1,(int)*(short *)((int)param_1 + 0x1e9),
                       (int)*(short *)((int)param_1 + 0x1eb),(int)*(short *)((int)param_1 + 0x1ed),
                       uVar5);
    STGenBombC::LoadImagSpr((STGenBombC *)param_1,1,0);
    if (((char)param_1[0x94] != '\0') && (*(int *)((int)param_1 + 0x252) != 0)) {
      thunk_FUN_004ad430(*(int *)((int)param_1 + 0x252));
      *(undefined1 *)(param_1 + 0x94) = 0;
    }
    param_1[0x83] = 1;
    return local_1c;
  case 7:
    if ((*(char *)((int)param_1 + 0x2e9) != '\0') &&
       (*(void **)((int)param_1 + 0x252) != (void *)0x0)) {
      iVar13 = thunk_FUN_004ac910(*(void **)((int)param_1 + 0x252),'\r');
      local_24 = thunk_FUN_004ac910(*(void **)((int)param_1 + 0x252),'\x0e');
      if (0xe < iVar13) {
        if (iVar13 == 0xf) {
          STT3DSprC::StartShow
                    (*(STT3DSprC **)((int)param_1 + 0x252),0xf,*(undefined4 *)(DAT_00802a38 + 0xe4))
          ;
        }
        iVar8 = thunk_FUN_004ac910(*(void **)((int)param_1 + 0x252),'\x0f');
        STT3DSprC::ShowCurFase(*(STT3DSprC **)((int)param_1 + 0x252),'\x0f');
        iVar9 = thunk_FUN_004acd30(*(void **)((int)param_1 + 0x252),'\x0f');
        if (iVar8 < iVar9) {
          iVar8 = iVar8 + 1;
        }
        STT3DSprC::SetCurFase(*(STT3DSprC **)((int)param_1 + 0x252),'\x0f',iVar8);
      }
      if (*(char *)((int)param_1 + 0x251) != '\0') {
        iVar8 = thunk_FUN_004acd30(*(void **)((int)param_1 + 0x252),'\x0e');
        iVar9 = thunk_FUN_004ac910(*(void **)((int)param_1 + 0x252),'\x0e');
        if (iVar8 + -1 == iVar9) {
          STT3DSprC::StopShow(*(STT3DSprC **)((int)param_1 + 0x252),0xe);
        }
      }
      iVar8 = thunk_FUN_004acd30(*(void **)((int)param_1 + 0x252),'\r');
      iVar9 = thunk_FUN_004ac910(*(void **)((int)param_1 + 0x252),'\r');
      if (iVar8 + -1 == iVar9) {
        STT3DSprC::StopShow(*(STT3DSprC **)((int)param_1 + 0x252),0xd);
      }
      iVar8 = thunk_FUN_004acd30(*(void **)((int)param_1 + 0x252),'\x0f');
      iVar9 = thunk_FUN_004ac910(*(void **)((int)param_1 + 0x252),'\x0f');
      if (iVar8 + -1 == iVar9) {
        param_1[0x83] = 9;
        return local_1c;
      }
      iVar8 = thunk_FUN_004acd30(*(void **)((int)param_1 + 0x252),'\r');
      if (iVar13 < iVar8) {
        iVar13 = iVar13 + 1;
      }
      iVar9 = thunk_FUN_004acd30(*(void **)((int)param_1 + 0x252),'\x0e');
      iVar8 = local_24;
      if (local_24 < iVar9) {
        iVar8 = local_24 + 1;
      }
      STT3DSprC::SetCurFase(*(STT3DSprC **)((int)param_1 + 0x252),'\x0e',iVar8);
      STT3DSprC::ShowCurFase(*(STT3DSprC **)((int)param_1 + 0x252),'\x0e');
      STT3DSprC::SetCurFase(*(STT3DSprC **)((int)param_1 + 0x252),'\r',iVar13);
      STT3DSprC::ShowCurFase(*(STT3DSprC **)((int)param_1 + 0x252),'\r');
      thunk_FUN_004ad3c0(*(void **)((int)param_1 + 0x252),
                         (float)*(int *)((int)param_1 + 0x22b) * _DAT_007904f8 * _DAT_007904f0,
                         (float)*(int *)((int)param_1 + 0x22f) * _DAT_007904f8 * _DAT_007904f0,
                         (float)*(int *)((int)param_1 + 0x233) * _DAT_007904f8 * _DAT_007904f0 +
                         _DAT_007904fc);
      pvVar12 = DAT_00802a88;
      if (DAT_00802a88 == (void *)0x0) {
        return local_1c;
      }
      iVar13 = *(int *)((int)param_1 + 0x233);
      sVar7 = (short)(iVar13 >> 0x1f);
      if (iVar13 < 0) {
        local_24 = (short)(((short)(iVar13 / 200) + sVar7) -
                          (short)((longlong)iVar13 * 0x51eb851f >> 0x3f)) + -1;
      }
      else {
        local_24 = (int)(short)(((short)(iVar13 / 200) + sVar7) -
                               (short)((longlong)iVar13 * 0x51eb851f >> 0x3f));
      }
      iVar13 = *(int *)((int)param_1 + 0x22f);
      sVar7 = (short)(iVar13 >> 0x1f);
      if (iVar13 < 0) {
        iVar13 = (short)(((short)(iVar13 / 0xc9) + sVar7) -
                        (short)((longlong)iVar13 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar13 = (int)(short)(((short)(iVar13 / 0xc9) + sVar7) -
                             (short)((longlong)iVar13 * 0x28c1979 >> 0x3f));
      }
      iVar8 = *(int *)((int)param_1 + 0x22b);
      sVar7 = (short)(iVar8 >> 0x1f);
      if (iVar8 < 0) {
        iVar8 = (short)(((short)(iVar8 / 0xc9) + sVar7) -
                       (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar8 = (int)(short)(((short)(iVar8 / 0xc9) + sVar7) -
                            (short)((longlong)iVar8 * 0x28c1979 >> 0x3f));
      }
      if ((((((DAT_0080874d != -1) && (*(int *)((int)DAT_00802a88 + 0xf8) != 0)) &&
            (thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),iVar8,iVar13
                                ,&local_20,(int *)&local_c), -1 < local_24)) &&
           ((local_24 < 5 && (-1 < local_20)))) &&
          (((local_20 < *(int *)((int)pvVar12 + 0x30) &&
            ((iVar13 = (&DAT_0079aed0)[local_24] + local_c, -1 < iVar13 &&
             (iVar13 < *(int *)((int)pvVar12 + 0x34))))) && (*(int *)((int)pvVar12 + 0x4c) != 0))))
         && (*(char *)(iVar13 * *(int *)((int)pvVar12 + 0x30) + *(int *)((int)pvVar12 + 0x4c) +
                      local_20) == '\0')) {
        if ((char)param_1[0x94] == '\0') {
          return local_1c;
        }
        thunk_FUN_004ad430(*(int *)((int)param_1 + 0x252));
        *(undefined1 *)(param_1 + 0x94) = 0;
        return local_1c;
      }
      if ((char)param_1[0x94] != '\0') {
        return local_1c;
      }
      thunk_FUN_004ad460(*(void **)((int)param_1 + 0x252),0);
      *(undefined1 *)(param_1 + 0x94) = 1;
      return local_1c;
    }
  case 9:
    thunk_FUN_0060ec00(param_1);
    goto switchD_006101d2_default;
  case 8:
    *(undefined2 *)(param_1 + 0x98) = *(undefined2 *)((int)param_1 + 0x25a);
    *(short *)((int)param_1 + 0x262) = (short)param_1[0x97];
    *(undefined2 *)(param_1 + 0x99) = *(undefined2 *)((int)param_1 + 0x25e);
    iVar13 = *(int *)(DAT_00802a38 + 0xe4) - param_1[0xa5];
    if ((iVar13 == 2) && (*(int *)((int)param_1 + 0x1f7) == 1)) {
      thunk_FUN_00617560(param_1,0x48b);
    }
    iVar13 = param_1[0xa2] * iVar13;
    iVar8 = param_1[0x9f] * iVar13;
    iVar9 = param_1[0xa0] * iVar13;
    sVar11 = (((short)(iVar8 / 10000) + (short)(iVar8 >> 0x1f)) -
             (short)((longlong)iVar8 * 0x68db8bad >> 0x3f)) + *(short *)((int)param_1 + 0x1e9);
    iVar8 = param_1[0xa1] * iVar13;
    sVar10 = (((short)(iVar9 / 10000) + (short)(iVar9 >> 0x1f)) -
             (short)((longlong)iVar9 * 0x68db8bad >> 0x3f)) + *(short *)((int)param_1 + 0x1eb);
    *(short *)((int)param_1 + 0x25a) = sVar11;
    *(short *)(param_1 + 0x97) = sVar10;
    sVar7 = (((short)(iVar8 / 10000) + (short)(iVar8 >> 0x1f)) -
            (short)((longlong)iVar8 * 0x68db8bad >> 0x3f)) + *(short *)((int)param_1 + 0x1ed);
    local_8 = CONCAT22(sVar7,(undefined2)local_8);
    *(short *)((int)param_1 + 0x25e) = sVar7;
    if (0x648 < iVar13) {
      *(undefined4 *)((int)param_1 + 0x256) = 2;
      param_1[0x83] = 4;
      *(undefined2 *)(param_1 + 0x9c) = 0xffff;
      uVar6 = param_1[7] * 0x41c64e6d + 0x3039;
      param_1[7] = uVar6;
      param_1[0xa5] = (uVar6 >> 0x10) % 0xb + 10 + *(int *)(DAT_00802a38 + 0xe4);
      param_1[0xa6] = *(int *)(DAT_00802a38 + 0xe4);
      local_1c = thunk_FUN_006173a0(param_1,iVar13,&local_10,&local_14,&local_18);
      if (0 < local_1c) {
        *(undefined2 *)((int)param_1 + 0x25a) = (undefined2)local_10;
        *(undefined2 *)(param_1 + 0x97) = (undefined2)local_14;
        *(undefined2 *)((int)param_1 + 0x25e) = (undefined2)local_18;
        return local_1c;
      }
      goto LAB_006121e1;
    }
    local_c = 0;
    iVar13 = (int)sVar11;
    if (sVar11 < 0) {
      iVar8 = (short)((sVar11 / 0xc9 + (sVar11 >> 0xf)) -
                     (short)((longlong)iVar13 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar8 = (int)(short)((sVar11 / 0xc9 + (sVar11 >> 0xf)) -
                          (short)((longlong)iVar13 * 0x28c1979 >> 0x3f));
    }
    if (*(short *)((int)param_1 + 0x215) == iVar8) {
      if (sVar10 < 0) {
        iVar8 = (short)((sVar10 / 0xc9 + (sVar10 >> 0xf)) -
                       (short)((longlong)(int)sVar10 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar8 = (int)(short)((sVar10 / 0xc9 + (sVar10 >> 0xf)) -
                            (short)((longlong)(int)sVar10 * 0x28c1979 >> 0x3f));
      }
      if (*(short *)((int)param_1 + 0x217) != iVar8) goto LAB_006122dd;
      if (sVar7 < 0) {
        iVar8 = (short)((sVar7 / 200 + (sVar7 >> 0xf)) -
                       (short)((longlong)(int)sVar7 * 0x51eb851f >> 0x3f)) + -1;
      }
      else {
        iVar8 = (int)(short)((sVar7 / 200 + (sVar7 >> 0xf)) -
                            (short)((longlong)(int)sVar7 * 0x51eb851f >> 0x3f));
      }
      if (*(short *)((int)param_1 + 0x219) != iVar8) goto LAB_006122dd;
      uVar6 = 0;
    }
    else {
LAB_006122dd:
      uVar6 = thunk_FUN_00601500((void *)((int)param_1 + 0x2eb),iVar13,(int)sVar10,(int)sVar7,
                                 (int)(short)param_1[0x98],(int)*(short *)((int)param_1 + 0x262),
                                 (int)(short)param_1[0x99],*(int *)((int)param_1 + 0x1d9),
                                 *(int *)((int)param_1 + 0x21b),*(int *)((int)param_1 + 0x1fb),
                                 *(undefined2 *)((int)param_1 + 0x1ff),0xb0,
                                 (uint)(*(int *)((int)param_1 + 0x1f7) == 2),0);
      if (0 < (int)uVar6) {
        if (uVar6 == 5) {
          thunk_FUN_0060ec00(param_1);
          param_1[0x83] = 9;
        }
        else {
          iVar13 = thunk_FUN_00615fd0(param_1,uVar6,param_1[0x83]);
          param_1[0x83] = iVar13;
        }
      }
    }
    *(int *)((int)param_1 + 0x22b) = (int)*(short *)((int)param_1 + 0x25a);
    *(int *)((int)param_1 + 0x22f) = (int)(short)param_1[0x97];
    *(int *)((int)param_1 + 0x233) = (int)*(short *)((int)param_1 + 0x25e);
    if ((uVar6 == 0) &&
       ((*(int *)((int)param_1 + 0x1f7) == 0 || (*(int *)((int)param_1 + 0x1f7) == 2)))) {
      if (param_1[0x92] < 0) {
        uVar6 = 0;
      }
      else {
        if (4 < param_1[0x92]) goto LAB_006123fd;
        uVar6 = 5;
      }
      TraksClassTy::TraksCreate
                (DAT_00802a7c,1,1,uVar6,(int)*(short *)((int)param_1 + 0x25a),
                 (int)(short)param_1[0x97],(int)*(short *)((int)param_1 + 0x25e),0,0,0,0,0,0,-1,0,0)
      ;
    }
LAB_006123fd:
    if (*(char *)((int)param_1 + 0x2e9) == '\0') {
      return local_1c;
    }
    if (*(int *)((int)param_1 + 0x252) == 0) {
      return local_1c;
    }
    iVar13 = *(int *)((int)param_1 + 0x1f7);
    if (iVar13 == 0) {
LAB_00612459:
      local_24 = (int)(short)param_1[0x99];
      local_48 = (float)(int)(short)param_1[0x98] * _DAT_007904f8 * _DAT_007904f0;
      local_44 = (float)(int)*(short *)((int)param_1 + 0x262) * _DAT_007904f8 * _DAT_007904f0;
      local_40 = (float)local_24 * _DAT_007904f8 * _DAT_007904f0;
      FUN_006e25d0(DAT_00807598,&local_58);
      local_24 = (int)*(short *)((int)param_1 + 0x25e);
      local_3c = (float)(int)*(short *)((int)param_1 + 0x25a) * _DAT_007904f8 * _DAT_007904f0;
      local_38 = (float)(int)(short)param_1[0x97] * _DAT_007904f8 * _DAT_007904f0;
      local_34 = (float)local_24 * _DAT_007904f8 * _DAT_007904f0;
      FUN_006e25d0(DAT_00807598,&local_68);
      sVar7 = (**(code **)(*param_1 + 0x14))
                        (local_58 >> 0x10,local_54 >> 0x10,local_50 >> 0x10,local_68 >> 0x10,
                         local_64 >> 0x10,local_60 >> 0x10);
      *(undefined4 *)((int)param_1 + 0x237) = *(undefined4 *)(&DAT_007d2138 + sVar7 * 4);
    }
    else if (iVar13 == 1) {
      iVar13 = *(int *)((int)param_1 + 0x237) + 1;
      *(int *)((int)param_1 + 0x237) = iVar13;
      if (9 < iVar13) {
        *(undefined4 *)((int)param_1 + 0x237) = 0;
      }
    }
    else {
      if (iVar13 == 2) goto LAB_00612459;
      *(undefined4 *)((int)param_1 + 0x237) = 0;
    }
    STT3DSprC::SetCurFase
              (*(STT3DSprC **)((int)param_1 + 0x252),'\r',*(undefined4 *)((int)param_1 + 0x237));
    STT3DSprC::ShowCurFase(*(STT3DSprC **)((int)param_1 + 0x252),'\r');
    thunk_FUN_004ad3c0(*(void **)((int)param_1 + 0x252),
                       (float)*(int *)((int)param_1 + 0x22b) * _DAT_007904f8 * _DAT_007904f0,
                       (float)*(int *)((int)param_1 + 0x22f) * _DAT_007904f8 * _DAT_007904f0,
                       (float)*(int *)((int)param_1 + 0x233) * _DAT_007904f8 * _DAT_007904f0 +
                       _DAT_007904fc);
    pvVar12 = DAT_00802a88;
    if (DAT_00802a88 != (void *)0x0) {
      iVar13 = *(int *)((int)param_1 + 0x233);
      sVar7 = (short)(iVar13 >> 0x1f);
      if (iVar13 < 0) {
        local_24 = (short)(((short)(iVar13 / 200) + sVar7) -
                          (short)((longlong)iVar13 * 0x51eb851f >> 0x3f)) + -1;
      }
      else {
        local_24 = (int)(short)(((short)(iVar13 / 200) + sVar7) -
                               (short)((longlong)iVar13 * 0x51eb851f >> 0x3f));
      }
      iVar13 = *(int *)((int)param_1 + 0x22f);
      sVar7 = (short)(iVar13 >> 0x1f);
      if (iVar13 < 0) {
        iVar13 = (short)(((short)(iVar13 / 0xc9) + sVar7) -
                        (short)((longlong)iVar13 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar13 = (int)(short)(((short)(iVar13 / 0xc9) + sVar7) -
                             (short)((longlong)iVar13 * 0x28c1979 >> 0x3f));
      }
      iVar8 = *(int *)((int)param_1 + 0x22b);
      sVar7 = (short)(iVar8 >> 0x1f);
      if (iVar8 < 0) {
        iVar8 = (short)(((short)(iVar8 / 0xc9) + sVar7) -
                       (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar8 = (int)(short)(((short)(iVar8 / 0xc9) + sVar7) -
                            (short)((longlong)iVar8 * 0x28c1979 >> 0x3f));
      }
      if ((((((DAT_0080874d == -1) || (*(int *)((int)DAT_00802a88 + 0xf8) == 0)) ||
            (thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),iVar8,iVar13
                                ,&local_20,(int *)&local_c), local_24 < 0)) ||
           ((4 < local_24 || (local_20 < 0)))) || (*(int *)((int)pvVar12 + 0x30) <= local_20)) ||
         (((iVar13 = (&DAT_0079aed0)[local_24] + local_c, iVar13 < 0 ||
           (*(int *)((int)pvVar12 + 0x34) <= iVar13)) || (*(int *)((int)pvVar12 + 0x4c) == 0))))
      goto LAB_00611c0f;
      cVar2 = *(char *)(iVar13 * *(int *)((int)pvVar12 + 0x30) + *(int *)((int)pvVar12 + 0x4c) +
                       local_20);
      goto joined_r0x00611c0d;
    }
    break;
  default:
    goto switchD_006101d2_default;
  }
  if ((-1 < param_1[0x92]) && ((char)param_1[0x94] != '\0')) {
    iVar13 = (int)*(short *)(DAT_00806724 + 0x2c);
    uVar6 = *(uint *)(DAT_00806724 + 0x30 + param_1[0x92] * 4);
    uVar4 = thunk_FUN_004ad650(*(int *)((int)param_1 + 0x252));
    FUN_006e9350(DAT_00807598,uVar4,uVar6,iVar13);
    return local_1c;
  }
switchD_006101d2_default:
  return local_1c;
}

