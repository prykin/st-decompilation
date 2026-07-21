
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_006101b0(AnonReceiver_0060EF40 *param_1)

{
  short *psVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  short sVar11;
  short sVar12;
  VisibleClassTy *pVVar13;
  int iVar14;
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
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  undefined4 local_8;

  local_1c = 0;
  switch(*(undefined4 *)&param_1->field_0x20c) {
  case 1:
    cVar2 = param_1->field_0x214;
    if (cVar2 == '\x01') {
      iVar14 = thunk_FUN_00615ad0((AnonShape_00615AD0_7BE8CE57 *)param_1);
      if ((iVar14 != 0) && (iVar14 = *(int *)(*(int *)&param_1->field_0x2dd + 8), iVar14 != 0)) {
        *(int *)&param_1->field_0x27c =
             (((int)*(short *)&param_1->field_0x1ef - (int)*(short *)&param_1->field_0x1e9) * 10000)
             / iVar14;
        *(int *)&param_1->field_0x280 =
             (((int)*(short *)&param_1->field_0x1f1 - (int)*(short *)&param_1->field_0x1eb) * 10000)
             / *(int *)(*(int *)&param_1->field_0x2dd + 8);
        *(int *)&param_1->field_0x284 =
             (((int)*(short *)&param_1->field_0x1f3 - (int)*(short *)&param_1->field_0x1ed) * 10000)
             / *(int *)(*(int *)&param_1->field_0x2dd + 8);
        *(undefined4 *)&param_1->field_0x256 = 1;
        thunk_FUN_0060ece0(param_1,0,(int)*(short *)&param_1->field_0x1e9,
                           (int)*(short *)&param_1->field_0x1eb,(int)*(short *)&param_1->field_0x1ed
                           ,(int)*(short *)&param_1->field_0x1ef,
                           (int)*(short *)&param_1->field_0x1f1,(int)*(short *)&param_1->field_0x1f3
                           ,1);
        *(undefined4 *)&param_1->field_0x20c = 2;
        goto cf_common_join_00610347;
      }
    }
    else {
      if (cVar2 == '\x02') {
        iVar14 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0060EF40::thunk_FUN_0060ef40
                           (param_1,7);
        if (0 < iVar14) {
          *(undefined4 *)&param_1->field_0x256 = 1;
          thunk_FUN_0060ece0(param_1,1,(int)*(short *)&param_1->field_0x1e9,
                             (int)*(short *)&param_1->field_0x1eb,
                             (int)*(short *)&param_1->field_0x1ed,
                             (int)*(short *)&param_1->field_0x2cb,
                             (int)*(short *)&param_1->field_0x2cd,
                             (int)*(short *)&param_1->field_0x2cf,1);
          if (*(int *)&param_1->field_0x278 == 0) {
            iVar14 = (int)*(short *)(*(int *)&param_1->field_0x2dd + 6 +
                                    *(int *)&param_1->field_0x2d9 * 0x1c);
            *(int *)&param_1->field_0x27c =
                 ((&SHORT_007ed570)[iVar14 * 4] * 10000000) / *(int *)(&DAT_007cfe74 + iVar14 * 4);
            iVar14 = (int)*(short *)(*(int *)&param_1->field_0x2dd + 6 +
                                    *(int *)&param_1->field_0x2d9 * 0x1c);
            *(int *)&param_1->field_0x280 =
                 ((&SHORT_007ed572)[iVar14 * 4] * 10000000) / *(int *)(&DAT_007cfe74 + iVar14 * 4);
            iVar14 = (int)*(short *)(*(int *)&param_1->field_0x2dd + 6 +
                                    *(int *)&param_1->field_0x2d9 * 0x1c);
            iVar14 = ((&SHORT_007ed574)[iVar14 * 4] * 10000000) /
                     *(int *)(&DAT_007cfe74 + iVar14 * 4);
          }
          else {
            psVar1 = (short *)(*(int *)&param_1->field_0x2dd + *(int *)&param_1->field_0x2d9 * 0x1c)
            ;
            *(int *)&param_1->field_0x27c =
                 (((int)*(short *)&param_1->field_0x272 - (int)*psVar1) * 10000) /
                 *(int *)(psVar1 + 4);
            iVar14 = *(int *)&param_1->field_0x2dd + *(int *)&param_1->field_0x2d9 * 0x1c;
            *(int *)&param_1->field_0x280 =
                 (((int)*(short *)&param_1->field_0x274 - (int)*(short *)(iVar14 + 2)) * 10000) /
                 *(int *)(iVar14 + 8);
            iVar14 = *(int *)&param_1->field_0x2dd + *(int *)&param_1->field_0x2d9 * 0x1c;
            iVar14 = (((int)*(short *)&param_1->field_0x276 - (int)*(short *)(iVar14 + 4)) * 10000)
                     / *(int *)(iVar14 + 8);
          }
          *(int *)&param_1->field_0x284 = iVar14;
          *(undefined4 *)&param_1->field_0x20c = 2;
          goto cf_common_join_00610347;
        }
      }
      else {
        if (cVar2 != '\x03') goto cf_common_join_00610347;
        iVar14 = FUN_006acf0d((int)*(short *)&param_1->field_0x1e9,
                              (int)*(short *)&param_1->field_0x1eb,
                              (int)*(short *)&param_1->field_0x1ed,
                              (int)*(short *)&param_1->field_0x1ef,
                              (int)*(short *)&param_1->field_0x1f1,
                              (int)*(short *)&param_1->field_0x1f3);
        if (iVar14 != 0) {
          *(int *)&param_1->field_0x27c =
               (((int)*(short *)&param_1->field_0x1ef - (int)*(short *)&param_1->field_0x1e9) *
               10000) / iVar14;
          *(int *)&param_1->field_0x280 =
               (((int)*(short *)&param_1->field_0x1f1 - (int)*(short *)&param_1->field_0x1eb) *
               10000) / iVar14;
          *(int *)&param_1->field_0x284 =
               (((int)*(short *)&param_1->field_0x1f3 - (int)*(short *)&param_1->field_0x1ed) *
               10000) / iVar14;
          iVar9 = *(int *)&param_1->field_0x1f7;
          *(uint *)&param_1->field_0x294 = PTR_00802a38->field_00E4;
          *(int *)&param_1->field_0x28c = iVar14;
          if (iVar9 == 0) {
            *(undefined4 *)&param_1->field_0x288 = 10;
            *(undefined4 *)&param_1->field_0x20c = 8;
          }
          else if (iVar9 == 1) {
            *(undefined4 *)&param_1->field_0x288 = 0x35;
            *(undefined4 *)&param_1->field_0x20c = 8;
          }
          else if (iVar9 == 2) {
            *(undefined4 *)&param_1->field_0x288 = 7;
            *(undefined4 *)&param_1->field_0x20c = 8;
          }
          else {
            *(undefined4 *)&param_1->field_0x288 = 0x1e;
            *(undefined4 *)&param_1->field_0x20c = 8;
          }
          goto cf_common_join_00610347;
        }
      }
      thunk_FUN_0060ec00(param_1);
    }
    *(undefined4 *)&param_1->field_0x20c = 9;
cf_common_join_00610347:
    if (*(int *)&param_1->field_0x20c == 9) {
      return local_1c;
    }
    if ((param_1->field_0x250 == '\0') && (*(void **)&param_1->field_0x252 != (void *)0x0)) {
      thunk_FUN_004ad460(*(void **)&param_1->field_0x252,0);
      param_1->field_0x250 = 1;
    }
    if (*(int *)&param_1->field_0x1f7 != 0) {
      return local_1c;
    }
    thunk_FUN_00617560(param_1,0x477);
    return local_1c;
  case 2:
  case 4:
    iVar14 = thunk_FUN_006139a0(param_1,&local_10,&local_14,&local_18);
    if (iVar14 == 0) {
cf_common_exit_006121E1:
      thunk_FUN_0060ec00(param_1);
      *(undefined4 *)&param_1->field_0x20c = 9;
      return local_1c;
    }
    *(undefined2 *)&param_1->field_0x262 = *(undefined2 *)&param_1->field_0x25c;
    *(undefined2 *)&param_1->field_0x260 = *(undefined2 *)&param_1->field_0x25a;
    *(undefined2 *)&param_1->field_0x264 = *(undefined2 *)&param_1->field_0x25e;
    sVar8 = (short)local_10;
    *(short *)&param_1->field_0x25a = sVar8;
    local_20 = (int)sVar8;
    sVar12 = (short)local_14;
    *(short *)&param_1->field_0x25c = sVar12;
    sVar11 = (short)local_18;
    *(short *)&param_1->field_0x25e = sVar11;
    local_c = 0;
    if (sVar8 < 0) {
      iVar14 = (short)((sVar8 / 0xc9 + (sVar8 >> 0xf)) -
                      (short)((longlong)local_20 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar14 = (int)(short)((sVar8 / 0xc9 + (sVar8 >> 0xf)) -
                           (short)((longlong)local_20 * 0x28c1979 >> 0x3f));
    }
    local_24 = (uint)sVar12;
    if (sVar12 < 0) {
      iVar9 = (short)((sVar12 / 0xc9 + (sVar12 >> 0xf)) -
                     (short)((longlong)(int)local_24 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar9 = (int)(short)((sVar12 / 0xc9 + (sVar12 >> 0xf)) -
                          (short)((longlong)(int)local_24 * 0x28c1979 >> 0x3f));
    }
    iVar10 = (int)sVar11;
    if (sVar11 < 0) {
      iVar4 = (short)((sVar11 / 200 + (sVar11 >> 0xf)) -
                     (short)((longlong)iVar10 * 0x51eb851f >> 0x3f)) + -1;
    }
    else {
      iVar4 = (int)(short)((sVar11 / 200 + (sVar11 >> 0xf)) -
                          (short)((longlong)iVar10 * 0x51eb851f >> 0x3f));
    }
    if ((((*(short *)&param_1->field_0x215 == iVar14) && (*(short *)&param_1->field_0x217 == iVar9))
        && (*(short *)&param_1->field_0x219 == iVar4)) ||
       (local_8 = (uint)(*(int *)&param_1->field_0x1f7 == 2),
       iVar14 = local_20 - (short)((short)iVar14 * 0xc9 + 100),
       iVar9 = local_24 - (int)(short)((short)iVar9 * 0xc9 + 100), iVar10 = iVar10 + iVar4 * -0xc9,
       iVar10 = iVar10 * iVar10,
       0x2773 < ((int)(iVar10 + (iVar10 >> 0x1f & 3U)) >> 2) + iVar9 * iVar9 + iVar14 * iVar14)) {
      uVar6 = 0;
    }
    else {
      uVar6 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00601500::thunk_FUN_00601500
                        ((AnonReceiver_00601500 *)(param_1 + 1),local_10,local_14,local_18,
                         (int)*(short *)&param_1->field_0x260,(int)*(short *)&param_1->field_0x262,
                         (int)*(short *)&param_1->field_0x264,*(int *)&param_1->field_0x1d9,
                         *(int *)&param_1->field_0x21b,*(int *)&param_1->field_0x1fb,
                         *(undefined2 *)&param_1->field_0x1ff,0xb0,local_8,0);
      if (0 < (int)uVar6) {
        if (uVar6 == 5) {
          thunk_FUN_0060ec00(param_1);
          *(undefined4 *)&param_1->field_0x20c = 9;
        }
        else {
          uVar7 = thunk_FUN_00615fd0(param_1,uVar6,*(undefined4 *)&param_1->field_0x20c);
          *(undefined4 *)&param_1->field_0x20c = uVar7;
        }
      }
    }
    if (*(int *)&param_1->field_0x20c == 2) {
      *(int *)&param_1->field_0x22b = (int)*(short *)&param_1->field_0x25a;
      *(int *)&param_1->field_0x22f = (int)*(short *)&param_1->field_0x25c;
      *(int *)&param_1->field_0x233 = (int)*(short *)&param_1->field_0x25e;
      if ((uVar6 == 0) &&
         ((*(int *)&param_1->field_0x1f7 == 0 || (*(int *)&param_1->field_0x1f7 == 2)))) {
        if (*(int *)&param_1->field_0x248 < 0) {
          uVar6 = 0;
        }
        else {
          if (4 < *(int *)&param_1->field_0x248) goto LAB_00610911;
          uVar6 = 5;
        }
        TraksClassTy::TraksCreate
                  (g_traksClass_00802A7C,1,1,uVar6,(int)*(short *)&param_1->field_0x25a,
                   (int)*(short *)&param_1->field_0x25c,(int)*(short *)&param_1->field_0x25e,0,0,0,0
                   ,0,0,-1,0,0);
      }
LAB_00610911:
      if (param_1->field_0x2e9 == '\0') {
        return local_1c;
      }
      if (*(int *)&param_1->field_0x252 == 0) {
        return local_1c;
      }
      iVar14 = *(int *)&param_1->field_0x1f7;
      if (iVar14 == 0) {
LAB_00610969:
        local_24 = (uint)*(short *)&param_1->field_0x264;
        local_3c = (float)(int)*(short *)&param_1->field_0x260 * _DAT_007904f8 * _DAT_007904f0;
        local_38 = (float)(int)*(short *)&param_1->field_0x262 * _DAT_007904f8 * _DAT_007904f0;
        local_34 = (float)(int)local_24 * _DAT_007904f8 * _DAT_007904f0;
        FUN_006e25d0(PTR_00807598,&local_68);
        local_24 = (uint)*(short *)&param_1->field_0x25e;
        local_48 = (float)(int)*(short *)&param_1->field_0x25a * _DAT_007904f8 * _DAT_007904f0;
        local_44 = (float)(int)*(short *)&param_1->field_0x25c * _DAT_007904f8 * _DAT_007904f0;
        local_40 = (float)(int)local_24 * _DAT_007904f8 * _DAT_007904f0;
        FUN_006e25d0(PTR_00807598,&local_58);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        sVar8 = (**(code **)(*(int *)param_1 + 0x14))
                          (local_68 >> 0x10,local_64 >> 0x10,local_60 >> 0x10,local_58 >> 0x10,
                           local_54 >> 0x10,local_50 >> 0x10);
        *(undefined4 *)&param_1->field_0x237 = *(undefined4 *)(&DAT_007d2138 + sVar8 * 4);
      }
      else if (iVar14 == 1) {
        iVar14 = *(int *)&param_1->field_0x237 + 1;
        *(int *)&param_1->field_0x237 = iVar14;
        if (9 < iVar14) {
          *(undefined4 *)&param_1->field_0x237 = 0;
        }
      }
      else {
        if (iVar14 == 2) goto LAB_00610969;
        *(undefined4 *)&param_1->field_0x237 = 0;
      }
      STT3DSprC::SetCurFase
                (*(STT3DSprC **)&param_1->field_0x252,'\r',*(uint *)&param_1->field_0x237);
      STT3DSprC::ShowCurFase(*(STT3DSprC **)&param_1->field_0x252,'\r');
      thunk_FUN_004ad3c0(*(void **)&param_1->field_0x252,
                         (float)*(int *)&param_1->field_0x22b * _DAT_007904f8 * _DAT_007904f0,
                         (float)*(int *)&param_1->field_0x22f * _DAT_007904f8 * _DAT_007904f0,
                         (float)*(int *)&param_1->field_0x233 * _DAT_007904f8 * _DAT_007904f0 +
                         _DAT_007904fc);
      pVVar13 = g_visibleClass_00802A88;
      if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
        iVar14 = *(int *)&param_1->field_0x233;
        sVar8 = (short)(iVar14 >> 0x1f);
        if (iVar14 < 0) {
          local_c = (int)(short)(((short)(iVar14 / 200) + sVar8) -
                                (short)((longlong)iVar14 * 0x51eb851f >> 0x3f)) - 1;
        }
        else {
          local_c = (uint)(short)(((short)(iVar14 / 200) + sVar8) -
                                 (short)((longlong)iVar14 * 0x51eb851f >> 0x3f));
        }
        iVar14 = *(int *)&param_1->field_0x22f;
        sVar8 = (short)(iVar14 >> 0x1f);
        if (iVar14 < 0) {
          iVar14 = (short)(((short)(iVar14 / 0xc9) + sVar8) -
                          (short)((longlong)iVar14 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar14 = (int)(short)(((short)(iVar14 / 0xc9) + sVar8) -
                               (short)((longlong)iVar14 * 0x28c1979 >> 0x3f));
        }
        iVar9 = *(int *)&param_1->field_0x22b;
        sVar8 = (short)(iVar9 >> 0x1f);
        if (iVar9 < 0) {
          iVar9 = (short)(((short)(iVar9 / 0xc9) + sVar8) -
                         (short)((longlong)iVar9 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar9 = (int)(short)(((short)(iVar9 / 0xc9) + sVar8) -
                              (short)((longlong)iVar9 * 0x28c1979 >> 0x3f));
        }
        if (((DAT_0080874d != -1) && (g_visibleClass_00802A88->field_00F8 != 0)) &&
           ((thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar9,
                                iVar14,(int *)&local_24,&local_20), -1 < (int)local_c &&
            ((((int)local_c < 5 && (-1 < (int)local_24)) &&
             (iVar14 = pVVar13->field_0030, (int)local_24 < iVar14)))))) {
          iVar9 = g_centeredOffsets5[local_c];
LAB_00611039:
          iVar9 = iVar9 + local_20;
          if (((iVar9 < 0) || (pVVar13->field_0034 <= iVar9)) ||
             (pVVar13->field_004C == (byte *)0x0)) goto cf_common_exit_00611C0F;
          bVar3 = pVVar13->field_004C[iVar9 * iVar14 + local_24];
          goto joined_r0x00611c0d;
        }
        goto cf_common_exit_00611C0F;
      }
    }
    else {
      if (*(int *)&param_1->field_0x20c != 4) {
        return local_1c;
      }
      if (*(int *)&param_1->field_0x248 < 0) {
        if (*(uint *)&param_1->field_0x294 < PTR_00802a38->field_00E4) {
          *(undefined4 *)&param_1->field_0x248 = 0;
          *(uint *)&param_1->field_0x24c = PTR_00802a38->field_00E4;
        }
      }
      else {
        uVar5 = PTR_00802a38->field_00E4 - *(int *)&param_1->field_0x24c >> 2;
        *(uint *)&param_1->field_0x248 = uVar5;
        if ((int)*(short *)(DAT_00806724 + 0x23) <= (int)uVar5) {
          *(int *)&param_1->field_0x248 = *(short *)(DAT_00806724 + 0x23) + -1;
          goto cf_common_exit_006121E1;
        }
        if ((PTR_00802a38->field_00E4 & 1) == 0) {
          iVar14 = *(int *)&param_1->field_0x288 + -3;
          *(int *)&param_1->field_0x288 = iVar14;
          if (iVar14 < 5) {
            *(undefined4 *)&param_1->field_0x288 = 5;
          }
          if (0 < *(int *)&param_1->field_0x21b) {
            *(int *)&param_1->field_0x21b = *(int *)&param_1->field_0x21b + -0x12;
          }
          if (*(int *)&param_1->field_0x21b < 0) {
            *(undefined4 *)&param_1->field_0x21b = 0;
          }
        }
      }
      *(int *)&param_1->field_0x22b = (int)*(short *)&param_1->field_0x25a;
      *(int *)&param_1->field_0x22f = (int)*(short *)&param_1->field_0x25c;
      *(int *)&param_1->field_0x233 = (int)*(short *)&param_1->field_0x25e;
      if ((uVar6 == 0) &&
         ((*(int *)&param_1->field_0x1f7 == 0 || (*(int *)&param_1->field_0x1f7 == 2)))) {
        if (*(int *)&param_1->field_0x248 < 0) {
          uVar6 = 0;
        }
        else {
          if (4 < *(int *)&param_1->field_0x248) goto LAB_00610d47;
          uVar6 = 5;
        }
        TraksClassTy::TraksCreate
                  (g_traksClass_00802A7C,1,1,uVar6,(int)*(short *)&param_1->field_0x25a,
                   (int)*(short *)&param_1->field_0x25c,(int)*(short *)&param_1->field_0x25e,0,0,0,0
                   ,0,0,-1,0,0);
      }
LAB_00610d47:
      if (param_1->field_0x2e9 == '\0') {
        return local_1c;
      }
      if (*(int *)&param_1->field_0x252 == 0) {
        return local_1c;
      }
      iVar14 = *(int *)&param_1->field_0x1f7;
      if (iVar14 == 0) {
LAB_00610d9f:
        local_24 = (uint)*(short *)&param_1->field_0x264;
        local_48 = (float)(int)*(short *)&param_1->field_0x260 * _DAT_007904f8 * _DAT_007904f0;
        local_44 = (float)(int)*(short *)&param_1->field_0x262 * _DAT_007904f8 * _DAT_007904f0;
        local_40 = (float)(int)local_24 * _DAT_007904f8 * _DAT_007904f0;
        FUN_006e25d0(PTR_00807598,&local_58);
        local_24 = (uint)*(short *)&param_1->field_0x25e;
        local_3c = (float)(int)*(short *)&param_1->field_0x25a * _DAT_007904f8 * _DAT_007904f0;
        local_38 = (float)(int)*(short *)&param_1->field_0x25c * _DAT_007904f8 * _DAT_007904f0;
        local_34 = (float)(int)local_24 * _DAT_007904f8 * _DAT_007904f0;
        FUN_006e25d0(PTR_00807598,&local_68);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        sVar8 = (**(code **)(*(int *)param_1 + 0x14))
                          (local_58 >> 0x10,local_54 >> 0x10,local_50 >> 0x10,local_68 >> 0x10,
                           local_64 >> 0x10,local_60 >> 0x10);
        *(undefined4 *)&param_1->field_0x237 = *(undefined4 *)(&DAT_007d2138 + sVar8 * 4);
      }
      else if (iVar14 == 1) {
        iVar14 = *(int *)&param_1->field_0x237 + 1;
        *(int *)&param_1->field_0x237 = iVar14;
        if (9 < iVar14) {
          *(undefined4 *)&param_1->field_0x237 = 0;
        }
      }
      else {
        if (iVar14 == 2) goto LAB_00610d9f;
        *(undefined4 *)&param_1->field_0x237 = 0;
      }
      STT3DSprC::SetCurFase
                (*(STT3DSprC **)&param_1->field_0x252,'\r',*(uint *)&param_1->field_0x237);
      STT3DSprC::ShowCurFase(*(STT3DSprC **)&param_1->field_0x252,'\r');
      thunk_FUN_004ad3c0(*(void **)&param_1->field_0x252,
                         (float)*(int *)&param_1->field_0x22b * _DAT_007904f8 * _DAT_007904f0,
                         (float)*(int *)&param_1->field_0x22f * _DAT_007904f8 * _DAT_007904f0,
                         (float)*(int *)&param_1->field_0x233 * _DAT_007904f8 * _DAT_007904f0 +
                         _DAT_007904fc);
      pVVar13 = g_visibleClass_00802A88;
      if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
        iVar14 = *(int *)&param_1->field_0x233;
        sVar8 = (short)(iVar14 >> 0x1f);
        if (iVar14 < 0) {
          local_c = (int)(short)(((short)(iVar14 / 200) + sVar8) -
                                (short)((longlong)iVar14 * 0x51eb851f >> 0x3f)) - 1;
        }
        else {
          local_c = (uint)(short)(((short)(iVar14 / 200) + sVar8) -
                                 (short)((longlong)iVar14 * 0x51eb851f >> 0x3f));
        }
        iVar14 = *(int *)&param_1->field_0x22f;
        sVar8 = (short)(iVar14 >> 0x1f);
        if (iVar14 < 0) {
          iVar14 = (short)(((short)(iVar14 / 0xc9) + sVar8) -
                          (short)((longlong)iVar14 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar14 = (int)(short)(((short)(iVar14 / 0xc9) + sVar8) -
                               (short)((longlong)iVar14 * 0x28c1979 >> 0x3f));
        }
        iVar9 = *(int *)&param_1->field_0x22b;
        sVar8 = (short)(iVar9 >> 0x1f);
        if (iVar9 < 0) {
          iVar9 = (short)(((short)(iVar9 / 0xc9) + sVar8) -
                         (short)((longlong)iVar9 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar9 = (int)(short)(((short)(iVar9 / 0xc9) + sVar8) -
                              (short)((longlong)iVar9 * 0x28c1979 >> 0x3f));
        }
        if (((DAT_0080874d != -1) && (g_visibleClass_00802A88->field_00F8 != 0)) &&
           ((thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar9,
                                iVar14,(int *)&local_24,&local_20), -1 < (int)local_c &&
            ((((int)local_c < 5 && (-1 < (int)local_24)) &&
             (iVar14 = pVVar13->field_0030, (int)local_24 < iVar14)))))) {
          iVar9 = g_centeredOffsets5[local_c];
          goto LAB_00611039;
        }
        goto cf_common_exit_00611C0F;
      }
    }
    break;
  case 3:
    iVar14 = thunk_FUN_006164e0(param_1,&local_10,&local_14,&local_18);
    if (iVar14 < 1) {
      *(undefined4 *)&param_1->field_0x256 = 2;
      *(undefined4 *)&param_1->field_0x20c = 4;
      *(undefined2 *)&param_1->field_0x270 = 0xffff;
      uVar6 = *(int *)&param_1->field_0x1c * 0x41c64e6d + 0x3039;
      *(uint *)&param_1->field_0x1c = uVar6;
      *(uint *)&param_1->field_0x294 = (uVar6 >> 0x10) % 0xb + 10 + PTR_00802a38->field_00E4;
      *(uint *)&param_1->field_0x298 = PTR_00802a38->field_00E4;
      local_1c = thunk_FUN_006173a0(param_1,10,&local_10,&local_14,&local_18);
      if (0 < local_1c) {
        return local_1c;
      }
      goto cf_common_exit_006121E1;
    }
    *(undefined2 *)&param_1->field_0x260 = *(undefined2 *)&param_1->field_0x25a;
    *(undefined2 *)&param_1->field_0x262 = *(undefined2 *)&param_1->field_0x25c;
    *(undefined2 *)&param_1->field_0x264 = *(undefined2 *)&param_1->field_0x25e;
    sVar8 = (short)local_10;
    *(short *)&param_1->field_0x25a = sVar8;
    sVar12 = (short)local_14;
    *(short *)&param_1->field_0x25c = sVar12;
    sVar11 = (short)local_18;
    *(short *)&param_1->field_0x25e = sVar11;
    local_c = 0;
    if (sVar8 < 0) {
      iVar14 = (short)((sVar8 / 0xc9 + (sVar8 >> 0xf)) -
                      (short)((longlong)(int)sVar8 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar14 = (int)(short)((sVar8 / 0xc9 + (sVar8 >> 0xf)) -
                           (short)((longlong)(int)sVar8 * 0x28c1979 >> 0x3f));
    }
    if (*(short *)&param_1->field_0x215 == iVar14) {
      if (sVar12 < 0) {
        iVar14 = (short)((sVar12 / 0xc9 + (sVar12 >> 0xf)) -
                        (short)((longlong)(int)sVar12 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar14 = (int)(short)((sVar12 / 0xc9 + (sVar12 >> 0xf)) -
                             (short)((longlong)(int)sVar12 * 0x28c1979 >> 0x3f));
      }
      if (*(short *)&param_1->field_0x217 != iVar14) goto LAB_00611185;
      if (sVar11 < 0) {
        iVar14 = (short)((sVar11 / 200 + (sVar11 >> 0xf)) -
                        (short)((longlong)(int)sVar11 * 0x51eb851f >> 0x3f)) + -1;
      }
      else {
        iVar14 = (int)(short)((sVar11 / 200 + (sVar11 >> 0xf)) -
                             (short)((longlong)(int)sVar11 * 0x51eb851f >> 0x3f));
      }
      uVar6 = local_c;
      if (*(short *)&param_1->field_0x219 != iVar14) goto LAB_00611185;
    }
    else {
LAB_00611185:
      uVar6 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00601500::thunk_FUN_00601500
                        ((AnonReceiver_00601500 *)(param_1 + 1),local_10,local_14,local_18,
                         (int)*(short *)&param_1->field_0x260,(int)*(short *)&param_1->field_0x262,
                         (int)*(short *)&param_1->field_0x264,*(int *)&param_1->field_0x1d9,
                         *(int *)&param_1->field_0x21b,*(int *)&param_1->field_0x1fb,
                         *(undefined2 *)&param_1->field_0x1ff,0xb0,0,0);
      local_c = uVar6;
      if (0 < (int)uVar6) {
        if (uVar6 == 5) {
          thunk_FUN_0060ec00(param_1);
          *(undefined4 *)&param_1->field_0x20c = 9;
        }
        else {
          uVar7 = thunk_FUN_00615fd0(param_1,uVar6,*(undefined4 *)&param_1->field_0x20c);
          *(undefined4 *)&param_1->field_0x20c = uVar7;
        }
      }
    }
    if ((*(int *)&param_1->field_0x20c != 3) && (*(int *)&param_1->field_0x20c != 4)) {
      return local_1c;
    }
    *(int *)&param_1->field_0x22b = (int)*(short *)&param_1->field_0x25a;
    *(int *)&param_1->field_0x22f = (int)*(short *)&param_1->field_0x25c;
    *(int *)&param_1->field_0x233 = (int)*(short *)&param_1->field_0x25e;
    if ((uVar6 == 0) &&
       ((*(int *)&param_1->field_0x1f7 == 0 || (*(int *)&param_1->field_0x1f7 == 2)))) {
      if (*(int *)&param_1->field_0x248 < 0) {
        uVar6 = 0;
      }
      else {
        if (4 < *(int *)&param_1->field_0x248) goto LAB_006112a8;
        uVar6 = 5;
      }
      TraksClassTy::TraksCreate
                (g_traksClass_00802A7C,1,1,uVar6,(int)*(short *)&param_1->field_0x25a,
                 (int)*(short *)&param_1->field_0x25c,(int)*(short *)&param_1->field_0x25e,0,0,0,0,0
                 ,0,-1,0,0);
    }
LAB_006112a8:
    if (param_1->field_0x2e9 == '\0') {
      return local_1c;
    }
    if (*(int *)&param_1->field_0x252 == 0) {
      return local_1c;
    }
    iVar14 = *(int *)&param_1->field_0x1f7;
    if (iVar14 == 0) {
LAB_00611304:
      local_24 = (uint)*(short *)&param_1->field_0x264;
      local_48 = (float)(int)*(short *)&param_1->field_0x260 * _DAT_007904f8 * _DAT_007904f0;
      local_44 = (float)(int)*(short *)&param_1->field_0x262 * _DAT_007904f8 * _DAT_007904f0;
      local_40 = (float)(int)local_24 * _DAT_007904f8 * _DAT_007904f0;
      FUN_006e25d0(PTR_00807598,&local_58);
      local_24 = (uint)*(short *)&param_1->field_0x25e;
      local_3c = (float)(int)*(short *)&param_1->field_0x25a * _DAT_007904f8 * _DAT_007904f0;
      local_38 = (float)(int)*(short *)&param_1->field_0x25c * _DAT_007904f8 * _DAT_007904f0;
      local_34 = (float)(int)local_24 * _DAT_007904f8 * _DAT_007904f0;
      FUN_006e25d0(PTR_00807598,&local_68);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      sVar8 = (**(code **)(*(int *)param_1 + 0x14))
                        (local_58 >> 0x10,local_54 >> 0x10,local_50 >> 0x10,local_68 >> 0x10,
                         local_64 >> 0x10,local_60 >> 0x10);
      *(undefined4 *)&param_1->field_0x237 = *(undefined4 *)(&DAT_007d2138 + sVar8 * 4);
    }
    else if (iVar14 == 1) {
      iVar14 = *(int *)&param_1->field_0x237 + 1;
      *(int *)&param_1->field_0x237 = iVar14;
      if (9 < iVar14) {
        *(undefined4 *)&param_1->field_0x237 = 0;
      }
    }
    else {
      if (iVar14 == 2) goto LAB_00611304;
      *(undefined4 *)&param_1->field_0x237 = 0;
    }
    STT3DSprC::SetCurFase(*(STT3DSprC **)&param_1->field_0x252,'\r',*(uint *)&param_1->field_0x237);
    STT3DSprC::ShowCurFase(*(STT3DSprC **)&param_1->field_0x252,'\r');
    thunk_FUN_004ad3c0(*(void **)&param_1->field_0x252,
                       (float)*(int *)&param_1->field_0x22b * _DAT_007904f8 * _DAT_007904f0,
                       (float)*(int *)&param_1->field_0x22f * _DAT_007904f8 * _DAT_007904f0,
                       (float)*(int *)&param_1->field_0x233 * _DAT_007904f8 * _DAT_007904f0 +
                       _DAT_007904fc);
    pVVar13 = g_visibleClass_00802A88;
    if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
      iVar14 = *(int *)&param_1->field_0x233;
      sVar8 = (short)(iVar14 >> 0x1f);
      if (iVar14 < 0) {
        local_c = (int)(short)(((short)(iVar14 / 200) + sVar8) -
                              (short)((longlong)iVar14 * 0x51eb851f >> 0x3f)) - 1;
      }
      else {
        local_c = (uint)(short)(((short)(iVar14 / 200) + sVar8) -
                               (short)((longlong)iVar14 * 0x51eb851f >> 0x3f));
      }
      iVar14 = *(int *)&param_1->field_0x22f;
      sVar8 = (short)(iVar14 >> 0x1f);
      if (iVar14 < 0) {
        iVar14 = (short)(((short)(iVar14 / 0xc9) + sVar8) -
                        (short)((longlong)iVar14 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar14 = (int)(short)(((short)(iVar14 / 0xc9) + sVar8) -
                             (short)((longlong)iVar14 * 0x28c1979 >> 0x3f));
      }
      iVar9 = *(int *)&param_1->field_0x22b;
      sVar8 = (short)(iVar9 >> 0x1f);
      if (iVar9 < 0) {
        iVar9 = (short)(((short)(iVar9 / 0xc9) + sVar8) -
                       (short)((longlong)iVar9 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar9 = (int)(short)(((short)(iVar9 / 0xc9) + sVar8) -
                            (short)((longlong)iVar9 * 0x28c1979 >> 0x3f));
      }
      if (((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
           (thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar9,
                               iVar14,(int *)&local_24,&local_20), (int)local_c < 0)) ||
          (((4 < (int)local_c || ((int)local_24 < 0)) ||
           ((pVVar13->field_0030 <= (int)local_24 ||
            ((iVar14 = g_centeredOffsets5[local_c] + local_20, iVar14 < 0 ||
             (pVVar13->field_0034 <= iVar14)))))))) ||
         ((pVVar13->field_004C == (byte *)0x0 ||
          (pVVar13->field_004C[local_24 + iVar14 * pVVar13->field_0030] != 0))))
      goto cf_common_exit_00611C0F;
      if (param_1->field_0x250 == '\0') break;
LAB_006115da:
      thunk_FUN_004ad430(*(int *)&param_1->field_0x252);
      param_1->field_0x250 = 0;
    }
    break;
  case 5:
    iVar14 = thunk_FUN_00616f60(param_1,&local_10,&local_14,&local_18);
    if (iVar14 == 0) {
      return local_1c;
    }
    *(undefined2 *)&param_1->field_0x262 = *(undefined2 *)&param_1->field_0x25c;
    *(undefined2 *)&param_1->field_0x260 = *(undefined2 *)&param_1->field_0x25a;
    *(undefined2 *)&param_1->field_0x264 = *(undefined2 *)&param_1->field_0x25e;
    local_8 = (uint)(*(int *)&param_1->field_0x1f7 == 2);
    sVar8 = (short)local_10;
    *(short *)&param_1->field_0x25a = sVar8;
    sVar12 = (short)local_14;
    *(short *)&param_1->field_0x25c = sVar12;
    sVar11 = (short)local_18;
    *(short *)&param_1->field_0x25e = sVar11;
    local_c = 0;
    if (sVar8 < 0) {
      iVar14 = (short)((sVar8 / 0xc9 + (sVar8 >> 0xf)) -
                      (short)((longlong)(int)sVar8 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar14 = (int)(short)((sVar8 / 0xc9 + (sVar8 >> 0xf)) -
                           (short)((longlong)(int)sVar8 * 0x28c1979 >> 0x3f));
    }
    if (*(short *)&param_1->field_0x215 == iVar14) {
      if (sVar12 < 0) {
        iVar14 = (short)((sVar12 / 0xc9 + (sVar12 >> 0xf)) -
                        (short)((longlong)(int)sVar12 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar14 = (int)(short)((sVar12 / 0xc9 + (sVar12 >> 0xf)) -
                             (short)((longlong)(int)sVar12 * 0x28c1979 >> 0x3f));
      }
      if (*(short *)&param_1->field_0x217 != iVar14) goto LAB_006117e5;
      if (sVar11 < 0) {
        iVar14 = (short)((sVar11 / 200 + (sVar11 >> 0xf)) -
                        (short)((longlong)(int)sVar11 * 0x51eb851f >> 0x3f)) + -1;
      }
      else {
        iVar14 = (int)(short)((sVar11 / 200 + (sVar11 >> 0xf)) -
                             (short)((longlong)(int)sVar11 * 0x51eb851f >> 0x3f));
      }
      uVar6 = local_c;
      if (*(short *)&param_1->field_0x219 != iVar14) goto LAB_006117e5;
    }
    else {
LAB_006117e5:
      uVar6 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00601500::thunk_FUN_00601500
                        ((AnonReceiver_00601500 *)(param_1 + 1),local_10,local_14,local_18,
                         (int)*(short *)&param_1->field_0x260,(int)*(short *)&param_1->field_0x262,
                         (int)*(short *)&param_1->field_0x264,*(int *)&param_1->field_0x1d9,
                         *(int *)&param_1->field_0x21b,*(int *)&param_1->field_0x1fb,
                         *(undefined2 *)&param_1->field_0x1ff,0xb0,local_8,0);
      local_c = uVar6;
      if (0 < (int)uVar6) {
        if (uVar6 == 5) {
          thunk_FUN_0060ec00(param_1);
          *(undefined4 *)&param_1->field_0x20c = 9;
        }
        else {
          uVar7 = thunk_FUN_00615fd0(param_1,uVar6,*(undefined4 *)&param_1->field_0x20c);
          *(undefined4 *)&param_1->field_0x20c = uVar7;
        }
      }
    }
    iVar14 = *(int *)&param_1->field_0x20c;
    if (((iVar14 != 5) && (iVar14 != 3)) && (iVar14 != 4)) {
      return local_1c;
    }
    *(int *)&param_1->field_0x22b = (int)*(short *)&param_1->field_0x25a;
    *(int *)&param_1->field_0x22f = (int)*(short *)&param_1->field_0x25c;
    *(int *)&param_1->field_0x233 = (int)*(short *)&param_1->field_0x25e;
    if ((uVar6 == 0) &&
       ((*(int *)&param_1->field_0x1f7 == 0 || (*(int *)&param_1->field_0x1f7 == 2)))) {
      if (*(int *)&param_1->field_0x248 < 0) {
        uVar6 = 0;
      }
      else {
        if (4 < *(int *)&param_1->field_0x248) goto LAB_0061190f;
        uVar6 = 5;
      }
      TraksClassTy::TraksCreate
                (g_traksClass_00802A7C,1,1,uVar6,(int)*(short *)&param_1->field_0x25a,
                 (int)*(short *)&param_1->field_0x25c,(int)*(short *)&param_1->field_0x25e,0,0,0,0,0
                 ,0,-1,0,0);
    }
LAB_0061190f:
    if (param_1->field_0x2e9 == '\0') {
      return local_1c;
    }
    if (*(int *)&param_1->field_0x252 == 0) {
      return local_1c;
    }
    iVar14 = *(int *)&param_1->field_0x1f7;
    if (iVar14 == 0) {
LAB_0061196b:
      local_24 = (uint)*(short *)&param_1->field_0x264;
      local_48 = (float)(int)*(short *)&param_1->field_0x260 * _DAT_007904f8 * _DAT_007904f0;
      local_44 = (float)(int)*(short *)&param_1->field_0x262 * _DAT_007904f8 * _DAT_007904f0;
      local_40 = (float)(int)local_24 * _DAT_007904f8 * _DAT_007904f0;
      FUN_006e25d0(PTR_00807598,&local_58);
      local_24 = (uint)*(short *)&param_1->field_0x25e;
      local_3c = (float)(int)*(short *)&param_1->field_0x25a * _DAT_007904f8 * _DAT_007904f0;
      local_38 = (float)(int)*(short *)&param_1->field_0x25c * _DAT_007904f8 * _DAT_007904f0;
      local_34 = (float)(int)local_24 * _DAT_007904f8 * _DAT_007904f0;
      FUN_006e25d0(PTR_00807598,&local_68);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      sVar8 = (**(code **)(*(int *)param_1 + 0x14))
                        (local_58 >> 0x10,local_54 >> 0x10,local_50 >> 0x10,local_68 >> 0x10,
                         local_64 >> 0x10,local_60 >> 0x10);
      *(undefined4 *)&param_1->field_0x237 = *(undefined4 *)(&DAT_007d2138 + sVar8 * 4);
    }
    else if (iVar14 == 1) {
      iVar14 = *(int *)&param_1->field_0x237 + 1;
      *(int *)&param_1->field_0x237 = iVar14;
      if (9 < iVar14) {
        *(undefined4 *)&param_1->field_0x237 = 0;
      }
    }
    else {
      if (iVar14 == 2) goto LAB_0061196b;
      *(undefined4 *)&param_1->field_0x237 = 0;
    }
    STT3DSprC::SetCurFase(*(STT3DSprC **)&param_1->field_0x252,'\r',*(uint *)&param_1->field_0x237);
    STT3DSprC::ShowCurFase(*(STT3DSprC **)&param_1->field_0x252,'\r');
    thunk_FUN_004ad3c0(*(void **)&param_1->field_0x252,
                       (float)*(int *)&param_1->field_0x22b * _DAT_007904f8 * _DAT_007904f0,
                       (float)*(int *)&param_1->field_0x22f * _DAT_007904f8 * _DAT_007904f0,
                       (float)*(int *)&param_1->field_0x233 * _DAT_007904f8 * _DAT_007904f0 +
                       _DAT_007904fc);
    pVVar13 = g_visibleClass_00802A88;
    if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
      iVar14 = *(int *)&param_1->field_0x233;
      sVar8 = (short)(iVar14 >> 0x1f);
      if (iVar14 < 0) {
        local_c = (int)(short)(((short)(iVar14 / 200) + sVar8) -
                              (short)((longlong)iVar14 * 0x51eb851f >> 0x3f)) - 1;
      }
      else {
        local_c = (uint)(short)(((short)(iVar14 / 200) + sVar8) -
                               (short)((longlong)iVar14 * 0x51eb851f >> 0x3f));
      }
      iVar14 = *(int *)&param_1->field_0x22f;
      sVar8 = (short)(iVar14 >> 0x1f);
      if (iVar14 < 0) {
        iVar14 = (short)(((short)(iVar14 / 0xc9) + sVar8) -
                        (short)((longlong)iVar14 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar14 = (int)(short)(((short)(iVar14 / 0xc9) + sVar8) -
                             (short)((longlong)iVar14 * 0x28c1979 >> 0x3f));
      }
      iVar9 = *(int *)&param_1->field_0x22b;
      sVar8 = (short)(iVar9 >> 0x1f);
      if (iVar9 < 0) {
        iVar9 = (short)(((short)(iVar9 / 0xc9) + sVar8) -
                       (short)((longlong)iVar9 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar9 = (int)(short)(((short)(iVar9 / 0xc9) + sVar8) -
                            (short)((longlong)iVar9 * 0x28c1979 >> 0x3f));
      }
      if ((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
          ((thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar9,
                               iVar14,(int *)&local_24,&local_20), (int)local_c < 0 ||
           ((((4 < (int)local_c || ((int)local_24 < 0)) || (pVVar13->field_0030 <= (int)local_24))
            || ((iVar14 = g_centeredOffsets5[local_c] + local_20, iVar14 < 0 ||
                (pVVar13->field_0034 <= iVar14)))))))) || (pVVar13->field_004C == (byte *)0x0))
      goto cf_common_exit_00611C0F;
      bVar3 = pVVar13->field_004C[local_24 + iVar14 * pVVar13->field_0030];
joined_r0x00611c0d:
      if (bVar3 == 0) {
        if (param_1->field_0x250 != '\0') goto LAB_006115da;
      }
      else {
cf_common_exit_00611C0F:
        if (param_1->field_0x250 == '\0') {
          thunk_FUN_004ad460(*(void **)&param_1->field_0x252,0);
          param_1->field_0x250 = 1;
        }
      }
    }
    break;
  case 6:
    if (PTR_00802a38->field_00E4 <= *(uint *)&param_1->field_0x210) {
      return 0;
    }
    thunk_FUN_00615860((int)*(short *)&param_1->field_0x1f5,&local_30,&local_2c,&local_28);
    uVar7 = thunk_FUN_00613140(param_1,((int)(local_30 + (local_30 >> 0x1f & 0x3ffU)) >> 10) +
                                       (int)*(short *)&param_1->field_0x1e9,
                               ((int)(local_2c + (local_2c >> 0x1f & 0x3ffU)) >> 10) +
                               (int)*(short *)&param_1->field_0x1eb,
                               ((int)(local_28 + (local_28 >> 0x1f & 0x3ffU)) >> 10) +
                               (int)*(short *)&param_1->field_0x1ed,
                               (int)*(short *)&param_1->field_0x1e9,
                               (int)*(short *)&param_1->field_0x1eb,
                               (int)*(short *)&param_1->field_0x1ed);
    thunk_FUN_00613280(param_1,(int)*(short *)&param_1->field_0x1e9,
                       (int)*(short *)&param_1->field_0x1eb,(int)*(short *)&param_1->field_0x1ed,
                       uVar7);
    STGenBombC::LoadImagSpr((STGenBombC *)param_1,1,0);
    if ((param_1->field_0x250 != '\0') && (*(int *)&param_1->field_0x252 != 0)) {
      thunk_FUN_004ad430(*(int *)&param_1->field_0x252);
      param_1->field_0x250 = 0;
    }
    *(undefined4 *)&param_1->field_0x20c = 1;
    return local_1c;
  case 7:
    if ((param_1->field_0x2e9 != '\0') && (*(void **)&param_1->field_0x252 != (void *)0x0)) {
      uVar6 = thunk_FUN_004ac910(*(void **)&param_1->field_0x252,'\r');
      local_24 = thunk_FUN_004ac910(*(void **)&param_1->field_0x252,'\x0e');
      if (0xe < (int)uVar6) {
        if (uVar6 == 0xf) {
          STT3DSprC::StartShow(*(STT3DSprC **)&param_1->field_0x252,0xf,PTR_00802a38->field_00E4);
        }
        uVar5 = thunk_FUN_004ac910(*(void **)&param_1->field_0x252,'\x0f');
        STT3DSprC::ShowCurFase(*(STT3DSprC **)&param_1->field_0x252,'\x0f');
        iVar14 = thunk_FUN_004acd30(*(void **)&param_1->field_0x252,'\x0f');
        if ((int)uVar5 < iVar14) {
          uVar5 = uVar5 + 1;
        }
        STT3DSprC::SetCurFase(*(STT3DSprC **)&param_1->field_0x252,'\x0f',uVar5);
      }
      if (param_1->field_0x251 != '\0') {
        iVar14 = thunk_FUN_004acd30(*(void **)&param_1->field_0x252,'\x0e');
        iVar9 = thunk_FUN_004ac910(*(void **)&param_1->field_0x252,'\x0e');
        if (iVar14 + -1 == iVar9) {
          STT3DSprC::StopShow(*(STT3DSprC **)&param_1->field_0x252,0xe);
        }
      }
      iVar14 = thunk_FUN_004acd30(*(void **)&param_1->field_0x252,'\r');
      iVar9 = thunk_FUN_004ac910(*(void **)&param_1->field_0x252,'\r');
      if (iVar14 + -1 == iVar9) {
        STT3DSprC::StopShow(*(STT3DSprC **)&param_1->field_0x252,0xd);
      }
      iVar14 = thunk_FUN_004acd30(*(void **)&param_1->field_0x252,'\x0f');
      iVar9 = thunk_FUN_004ac910(*(void **)&param_1->field_0x252,'\x0f');
      if (iVar14 + -1 == iVar9) {
        *(undefined4 *)&param_1->field_0x20c = 9;
        return local_1c;
      }
      iVar14 = thunk_FUN_004acd30(*(void **)&param_1->field_0x252,'\r');
      if ((int)uVar6 < iVar14) {
        uVar6 = uVar6 + 1;
      }
      iVar14 = thunk_FUN_004acd30(*(void **)&param_1->field_0x252,'\x0e');
      uVar5 = local_24;
      if ((int)local_24 < iVar14) {
        uVar5 = local_24 + 1;
      }
      STT3DSprC::SetCurFase(*(STT3DSprC **)&param_1->field_0x252,'\x0e',uVar5);
      STT3DSprC::ShowCurFase(*(STT3DSprC **)&param_1->field_0x252,'\x0e');
      STT3DSprC::SetCurFase(*(STT3DSprC **)&param_1->field_0x252,'\r',uVar6);
      STT3DSprC::ShowCurFase(*(STT3DSprC **)&param_1->field_0x252,'\r');
      thunk_FUN_004ad3c0(*(void **)&param_1->field_0x252,
                         (float)*(int *)&param_1->field_0x22b * _DAT_007904f8 * _DAT_007904f0,
                         (float)*(int *)&param_1->field_0x22f * _DAT_007904f8 * _DAT_007904f0,
                         (float)*(int *)&param_1->field_0x233 * _DAT_007904f8 * _DAT_007904f0 +
                         _DAT_007904fc);
      pVVar13 = g_visibleClass_00802A88;
      if (g_visibleClass_00802A88 == (VisibleClassTy *)0x0) {
        return local_1c;
      }
      iVar14 = *(int *)&param_1->field_0x233;
      sVar8 = (short)(iVar14 >> 0x1f);
      if (iVar14 < 0) {
        local_24 = (int)(short)(((short)(iVar14 / 200) + sVar8) -
                               (short)((longlong)iVar14 * 0x51eb851f >> 0x3f)) - 1;
      }
      else {
        local_24 = (uint)(short)(((short)(iVar14 / 200) + sVar8) -
                                (short)((longlong)iVar14 * 0x51eb851f >> 0x3f));
      }
      iVar14 = *(int *)&param_1->field_0x22f;
      sVar8 = (short)(iVar14 >> 0x1f);
      if (iVar14 < 0) {
        iVar14 = (short)(((short)(iVar14 / 0xc9) + sVar8) -
                        (short)((longlong)iVar14 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar14 = (int)(short)(((short)(iVar14 / 0xc9) + sVar8) -
                             (short)((longlong)iVar14 * 0x28c1979 >> 0x3f));
      }
      iVar9 = *(int *)&param_1->field_0x22b;
      sVar8 = (short)(iVar9 >> 0x1f);
      if (iVar9 < 0) {
        iVar9 = (short)(((short)(iVar9 / 0xc9) + sVar8) -
                       (short)((longlong)iVar9 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar9 = (int)(short)(((short)(iVar9 / 0xc9) + sVar8) -
                            (short)((longlong)iVar9 * 0x28c1979 >> 0x3f));
      }
      if ((((((DAT_0080874d != -1) && (g_visibleClass_00802A88->field_00F8 != 0)) &&
            (thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar9,
                                iVar14,&local_20,(int *)&local_c), -1 < (int)local_24)) &&
           (((int)local_24 < 5 && (-1 < local_20)))) &&
          (((local_20 < pVVar13->field_0030 &&
            ((iVar14 = g_centeredOffsets5[local_24] + local_c, -1 < iVar14 &&
             (iVar14 < pVVar13->field_0034)))) && (pVVar13->field_004C != (byte *)0x0)))) &&
         (pVVar13->field_004C[local_20 + iVar14 * pVVar13->field_0030] == 0)) {
        if (param_1->field_0x250 == '\0') {
          return local_1c;
        }
        thunk_FUN_004ad430(*(int *)&param_1->field_0x252);
        param_1->field_0x250 = 0;
        return local_1c;
      }
      if (param_1->field_0x250 != '\0') {
        return local_1c;
      }
      thunk_FUN_004ad460(*(void **)&param_1->field_0x252,0);
      param_1->field_0x250 = 1;
      return local_1c;
    }
  case 9:
    thunk_FUN_0060ec00(param_1);
    goto switchD_006101d2_default;
  case 8:
    *(undefined2 *)&param_1->field_0x260 = *(undefined2 *)&param_1->field_0x25a;
    *(undefined2 *)&param_1->field_0x262 = *(undefined2 *)&param_1->field_0x25c;
    *(undefined2 *)&param_1->field_0x264 = *(undefined2 *)&param_1->field_0x25e;
    iVar14 = PTR_00802a38->field_00E4 - *(int *)&param_1->field_0x294;
    if ((iVar14 == 2) && (*(int *)&param_1->field_0x1f7 == 1)) {
      thunk_FUN_00617560(param_1,0x48b);
    }
    iVar14 = *(int *)&param_1->field_0x288 * iVar14;
    iVar9 = *(int *)&param_1->field_0x27c * iVar14;
    iVar10 = *(int *)&param_1->field_0x280 * iVar14;
    sVar12 = (((short)(iVar9 / 10000) + (short)(iVar9 >> 0x1f)) -
             (short)((longlong)iVar9 * 0x68db8bad >> 0x3f)) + *(short *)&param_1->field_0x1e9;
    iVar9 = *(int *)&param_1->field_0x284 * iVar14;
    sVar11 = (((short)(iVar10 / 10000) + (short)(iVar10 >> 0x1f)) -
             (short)((longlong)iVar10 * 0x68db8bad >> 0x3f)) + *(short *)&param_1->field_0x1eb;
    *(short *)&param_1->field_0x25a = sVar12;
    *(short *)&param_1->field_0x25c = sVar11;
    sVar8 = (((short)(iVar9 / 10000) + (short)(iVar9 >> 0x1f)) -
            (short)((longlong)iVar9 * 0x68db8bad >> 0x3f)) + *(short *)&param_1->field_0x1ed;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_8 = CONCAT22(sVar8,(undefined2)local_8);
    *(short *)&param_1->field_0x25e = sVar8;
    if (0x648 < iVar14) {
      *(undefined4 *)&param_1->field_0x256 = 2;
      *(undefined4 *)&param_1->field_0x20c = 4;
      *(undefined2 *)&param_1->field_0x270 = 0xffff;
      uVar6 = *(int *)&param_1->field_0x1c * 0x41c64e6d + 0x3039;
      *(uint *)&param_1->field_0x1c = uVar6;
      *(uint *)&param_1->field_0x294 = (uVar6 >> 0x10) % 0xb + 10 + PTR_00802a38->field_00E4;
      *(uint *)&param_1->field_0x298 = PTR_00802a38->field_00E4;
      local_1c = thunk_FUN_006173a0(param_1,iVar14,&local_10,&local_14,&local_18);
      if (0 < local_1c) {
        *(undefined2 *)&param_1->field_0x25a = (undefined2)local_10;
        *(undefined2 *)&param_1->field_0x25c = (undefined2)local_14;
        *(undefined2 *)&param_1->field_0x25e = (undefined2)local_18;
        return local_1c;
      }
      goto cf_common_exit_006121E1;
    }
    local_c = 0;
    iVar14 = (int)sVar12;
    if (sVar12 < 0) {
      iVar9 = (short)((sVar12 / 0xc9 + (sVar12 >> 0xf)) -
                     (short)((longlong)iVar14 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar9 = (int)(short)((sVar12 / 0xc9 + (sVar12 >> 0xf)) -
                          (short)((longlong)iVar14 * 0x28c1979 >> 0x3f));
    }
    if (*(short *)&param_1->field_0x215 == iVar9) {
      if (sVar11 < 0) {
        iVar9 = (short)((sVar11 / 0xc9 + (sVar11 >> 0xf)) -
                       (short)((longlong)(int)sVar11 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar9 = (int)(short)((sVar11 / 0xc9 + (sVar11 >> 0xf)) -
                            (short)((longlong)(int)sVar11 * 0x28c1979 >> 0x3f));
      }
      if (*(short *)&param_1->field_0x217 != iVar9) goto LAB_006122dd;
      if (sVar8 < 0) {
        iVar9 = (short)((sVar8 / 200 + (sVar8 >> 0xf)) -
                       (short)((longlong)(int)sVar8 * 0x51eb851f >> 0x3f)) + -1;
      }
      else {
        iVar9 = (int)(short)((sVar8 / 200 + (sVar8 >> 0xf)) -
                            (short)((longlong)(int)sVar8 * 0x51eb851f >> 0x3f));
      }
      if (*(short *)&param_1->field_0x219 != iVar9) goto LAB_006122dd;
      uVar6 = 0;
    }
    else {
LAB_006122dd:
      uVar6 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00601500::thunk_FUN_00601500
                        ((AnonReceiver_00601500 *)(param_1 + 1),iVar14,(int)sVar11,(int)sVar8,
                         (int)*(short *)&param_1->field_0x260,(int)*(short *)&param_1->field_0x262,
                         (int)*(short *)&param_1->field_0x264,*(int *)&param_1->field_0x1d9,
                         *(int *)&param_1->field_0x21b,*(int *)&param_1->field_0x1fb,
                         *(undefined2 *)&param_1->field_0x1ff,0xb0,
                         (uint)(*(int *)&param_1->field_0x1f7 == 2),0);
      if (0 < (int)uVar6) {
        if (uVar6 == 5) {
          thunk_FUN_0060ec00(param_1);
          *(undefined4 *)&param_1->field_0x20c = 9;
        }
        else {
          uVar7 = thunk_FUN_00615fd0(param_1,uVar6,*(undefined4 *)&param_1->field_0x20c);
          *(undefined4 *)&param_1->field_0x20c = uVar7;
        }
      }
    }
    *(int *)&param_1->field_0x22b = (int)*(short *)&param_1->field_0x25a;
    *(int *)&param_1->field_0x22f = (int)*(short *)&param_1->field_0x25c;
    *(int *)&param_1->field_0x233 = (int)*(short *)&param_1->field_0x25e;
    if ((uVar6 == 0) &&
       ((*(int *)&param_1->field_0x1f7 == 0 || (*(int *)&param_1->field_0x1f7 == 2)))) {
      if (*(int *)&param_1->field_0x248 < 0) {
        uVar6 = 0;
      }
      else {
        if (4 < *(int *)&param_1->field_0x248) goto LAB_006123fd;
        uVar6 = 5;
      }
      TraksClassTy::TraksCreate
                (g_traksClass_00802A7C,1,1,uVar6,(int)*(short *)&param_1->field_0x25a,
                 (int)*(short *)&param_1->field_0x25c,(int)*(short *)&param_1->field_0x25e,0,0,0,0,0
                 ,0,-1,0,0);
    }
LAB_006123fd:
    if (param_1->field_0x2e9 == '\0') {
      return local_1c;
    }
    if (*(int *)&param_1->field_0x252 == 0) {
      return local_1c;
    }
    iVar14 = *(int *)&param_1->field_0x1f7;
    if (iVar14 == 0) {
LAB_00612459:
      local_24 = (uint)*(short *)&param_1->field_0x264;
      local_48 = (float)(int)*(short *)&param_1->field_0x260 * _DAT_007904f8 * _DAT_007904f0;
      local_44 = (float)(int)*(short *)&param_1->field_0x262 * _DAT_007904f8 * _DAT_007904f0;
      local_40 = (float)(int)local_24 * _DAT_007904f8 * _DAT_007904f0;
      FUN_006e25d0(PTR_00807598,&local_58);
      local_24 = (uint)*(short *)&param_1->field_0x25e;
      local_3c = (float)(int)*(short *)&param_1->field_0x25a * _DAT_007904f8 * _DAT_007904f0;
      local_38 = (float)(int)*(short *)&param_1->field_0x25c * _DAT_007904f8 * _DAT_007904f0;
      local_34 = (float)(int)local_24 * _DAT_007904f8 * _DAT_007904f0;
      FUN_006e25d0(PTR_00807598,&local_68);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      sVar8 = (**(code **)(*(int *)param_1 + 0x14))
                        (local_58 >> 0x10,local_54 >> 0x10,local_50 >> 0x10,local_68 >> 0x10,
                         local_64 >> 0x10,local_60 >> 0x10);
      *(undefined4 *)&param_1->field_0x237 = *(undefined4 *)(&DAT_007d2138 + sVar8 * 4);
    }
    else if (iVar14 == 1) {
      iVar14 = *(int *)&param_1->field_0x237 + 1;
      *(int *)&param_1->field_0x237 = iVar14;
      if (9 < iVar14) {
        *(undefined4 *)&param_1->field_0x237 = 0;
      }
    }
    else {
      if (iVar14 == 2) goto LAB_00612459;
      *(undefined4 *)&param_1->field_0x237 = 0;
    }
    STT3DSprC::SetCurFase(*(STT3DSprC **)&param_1->field_0x252,'\r',*(uint *)&param_1->field_0x237);
    STT3DSprC::ShowCurFase(*(STT3DSprC **)&param_1->field_0x252,'\r');
    thunk_FUN_004ad3c0(*(void **)&param_1->field_0x252,
                       (float)*(int *)&param_1->field_0x22b * _DAT_007904f8 * _DAT_007904f0,
                       (float)*(int *)&param_1->field_0x22f * _DAT_007904f8 * _DAT_007904f0,
                       (float)*(int *)&param_1->field_0x233 * _DAT_007904f8 * _DAT_007904f0 +
                       _DAT_007904fc);
    pVVar13 = g_visibleClass_00802A88;
    if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
      iVar14 = *(int *)&param_1->field_0x233;
      sVar8 = (short)(iVar14 >> 0x1f);
      if (iVar14 < 0) {
        local_24 = (int)(short)(((short)(iVar14 / 200) + sVar8) -
                               (short)((longlong)iVar14 * 0x51eb851f >> 0x3f)) - 1;
      }
      else {
        local_24 = (uint)(short)(((short)(iVar14 / 200) + sVar8) -
                                (short)((longlong)iVar14 * 0x51eb851f >> 0x3f));
      }
      iVar14 = *(int *)&param_1->field_0x22f;
      sVar8 = (short)(iVar14 >> 0x1f);
      if (iVar14 < 0) {
        iVar14 = (short)(((short)(iVar14 / 0xc9) + sVar8) -
                        (short)((longlong)iVar14 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar14 = (int)(short)(((short)(iVar14 / 0xc9) + sVar8) -
                             (short)((longlong)iVar14 * 0x28c1979 >> 0x3f));
      }
      iVar9 = *(int *)&param_1->field_0x22b;
      sVar8 = (short)(iVar9 >> 0x1f);
      if (iVar9 < 0) {
        iVar9 = (short)(((short)(iVar9 / 0xc9) + sVar8) -
                       (short)((longlong)iVar9 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar9 = (int)(short)(((short)(iVar9 / 0xc9) + sVar8) -
                            (short)((longlong)iVar9 * 0x28c1979 >> 0x3f));
      }
      if ((((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
            (thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar9,
                                iVar14,&local_20,(int *)&local_c), (int)local_24 < 0)) ||
           ((4 < (int)local_24 || (local_20 < 0)))) || (pVVar13->field_0030 <= local_20)) ||
         (((iVar14 = g_centeredOffsets5[local_24] + local_c, iVar14 < 0 ||
           (pVVar13->field_0034 <= iVar14)) || (pVVar13->field_004C == (byte *)0x0))))
      goto cf_common_exit_00611C0F;
      bVar3 = pVVar13->field_004C[local_20 + iVar14 * pVVar13->field_0030];
      goto joined_r0x00611c0d;
    }
    break;
  default:
    goto switchD_006101d2_default;
  }
  if ((-1 < *(int *)&param_1->field_0x248) && (param_1->field_0x250 != '\0')) {
    iVar14 = (int)*(short *)(DAT_00806724 + 0x2c);
    uVar6 = *(uint *)(DAT_00806724 + 0x30 + *(int *)&param_1->field_0x248 * 4);
    uVar5 = thunk_FUN_004ad650(*(int *)&param_1->field_0x252);
    FUN_006e9350(PTR_00807598,uVar5,uVar6,iVar14);
    return local_1c;
  }
switchD_006101d2_default:
  return local_1c;
}

