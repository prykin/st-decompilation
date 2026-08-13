#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/0061.cpp

// 006101B0 FUN_006101b0
#line 4 "decomp/ST.exe/functions/006101B0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall st::fn_006101B0(AnonReceiver_0060EF40 *param_1)

{
  short *psVar1;
  char cVar2;
  byte bVar3;
  int local_EAX_128;
  int local_EAX_493;
  int local_EAX_1240;
  int iVar4;
  uint local_EAX_1692;
  uint local_EAX_4124;
  int iVar14;
  uint uVar6;
  uint uVar5;
  uint local_EAX_8584;
  undefined4 uVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  short sVar11;
  short sVar12;
  VisibleClassTy *pVVar13;
  int iVar15;
  bool bVar16;
  uint uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined2 uVar20;
  undefined4 local_68;
  undefined4 local_64;
  undefined2 uStack_62;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined2 uStack_52;
  undefined4 local_50;
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
      iVar15 = st::fn_00405015((AnonShape_00615AD0_7BE8CE57 *)param_1);
      if ((iVar15 == 0) || (iVar15 = *(int *)(*(int *)&param_1->field_0x2dd + 8), iVar15 == 0)) {
LAB_00610341:
        *(undefined4 *)&param_1->field_0x20c = 9;
      }
      else {
        *(int *)&param_1->field_0x27c =
             (((int)*(short *)&param_1->field_0x1ef - (int)*(short *)&param_1->field_0x1e9) * 10000)
             / iVar15;
        *(int *)&param_1->field_0x280 =
             (((int)*(short *)&param_1->field_0x1f1 - (int)*(short *)&param_1->field_0x1eb) * 10000)
             / *(int *)(*(int *)&param_1->field_0x2dd + 8);
        *(int *)&param_1->field_0x284 =
             (((int)*(short *)&param_1->field_0x1f3 - (int)*(short *)&param_1->field_0x1ed) * 10000)
             / *(int *)(*(int *)&param_1->field_0x2dd + 8);
        *(undefined4 *)&param_1->field_0x256 = 1;
        st::fn_00405E20(param_1,0,(int)*(short *)&param_1->field_0x1e9,
                           (int)*(short *)&param_1->field_0x1eb,(int)*(short *)&param_1->field_0x1ed
                           ,(int)*(short *)&param_1->field_0x1ef,
                           (int)*(short *)&param_1->field_0x1f1,(int)*(short *)&param_1->field_0x1f3
                           ,1);
        *(undefined4 *)&param_1->field_0x20c = 2;
      }
    }
    else if (cVar2 == '\x02') {
      local_EAX_493 =
           st::fn_00402A54
                     (param_1,7);
      if (local_EAX_493 < 1) {
LAB_0061033a:
        st::fn_0040463D(param_1);
        goto LAB_00610341;
      }
      *(undefined4 *)&param_1->field_0x256 = 1;
      st::fn_00405E20(param_1,1,(int)*(short *)&param_1->field_0x1e9,
                         (int)*(short *)&param_1->field_0x1eb,(int)*(short *)&param_1->field_0x1ed,
                         (int)*(short *)&param_1->field_0x2cb,(int)*(short *)&param_1->field_0x2cd,
                         (int)*(short *)&param_1->field_0x2cf,1);
      if (*(int *)&param_1->field_0x278 == 0) {
        iVar15 = (int)*(short *)(*(int *)&param_1->field_0x2dd + 6 +
                                *(int *)&param_1->field_0x2d9 * 0x1c);
        *(int *)&param_1->field_0x27c =
             ((&SHORT_007ed570)[iVar15 * 4] * 10000000) / *(int *)(&DAT_007cfe74 + iVar15 * 4);
        iVar15 = (int)*(short *)(*(int *)&param_1->field_0x2dd + 6 +
                                *(int *)&param_1->field_0x2d9 * 0x1c);
        *(int *)&param_1->field_0x280 =
             ((&SHORT_007ed572)[iVar15 * 4] * 10000000) / *(int *)(&DAT_007cfe74 + iVar15 * 4);
        iVar15 = (int)*(short *)(*(int *)&param_1->field_0x2dd + 6 +
                                *(int *)&param_1->field_0x2d9 * 0x1c);
        iVar15 = ((&SHORT_007ed574)[iVar15 * 4] * 10000000) / *(int *)(&DAT_007cfe74 + iVar15 * 4);
      }
      else {
        psVar1 = (short *)(*(int *)&param_1->field_0x2dd + *(int *)&param_1->field_0x2d9 * 0x1c);
        *(int *)&param_1->field_0x27c =
             (((int)*(short *)&param_1->field_0x272 - (int)*psVar1) * 10000) / *(int *)(psVar1 + 4);
        iVar15 = *(int *)&param_1->field_0x2dd + *(int *)&param_1->field_0x2d9 * 0x1c;
        *(int *)&param_1->field_0x280 =
             (((int)*(short *)&param_1->field_0x274 - (int)*(short *)(iVar15 + 2)) * 10000) /
             *(int *)(iVar15 + 8);
        iVar15 = *(int *)&param_1->field_0x2dd + *(int *)&param_1->field_0x2d9 * 0x1c;
        iVar15 = (((int)*(short *)&param_1->field_0x276 - (int)*(short *)(iVar15 + 4)) * 10000) /
                 *(int *)(iVar15 + 8);
      }
      *(int *)&param_1->field_0x284 = iVar15;
      *(undefined4 *)&param_1->field_0x20c = 2;
    }
    else if (cVar2 == '\x03') {
      local_EAX_128 =
           st::fn_006ACF0D((int)*(short *)&param_1->field_0x1e9,(int)*(short *)&param_1->field_0x1eb,
                        (int)*(short *)&param_1->field_0x1ed,(int)*(short *)&param_1->field_0x1ef,
                        (int)*(short *)&param_1->field_0x1f1,(int)*(short *)&param_1->field_0x1f3);
      if (local_EAX_128 == 0) goto LAB_0061033a;
      *(int *)&param_1->field_0x27c =
           (((int)*(short *)&param_1->field_0x1ef - (int)*(short *)&param_1->field_0x1e9) * 10000) /
           local_EAX_128;
      *(int *)&param_1->field_0x280 =
           (((int)*(short *)&param_1->field_0x1f1 - (int)*(short *)&param_1->field_0x1eb) * 10000) /
           local_EAX_128;
      *(int *)&param_1->field_0x284 =
           (((int)*(short *)&param_1->field_0x1f3 - (int)*(short *)&param_1->field_0x1ed) * 10000) /
           local_EAX_128;
      iVar15 = *(int *)&param_1->field_0x1f7;
      *(uint *)&param_1->field_0x294 = g_playSystem_00802A38->field_00E4;
      *(int *)&param_1->field_0x28c = local_EAX_128;
      if (iVar15 == 0) {
        *(undefined4 *)&param_1->field_0x288 = 10;
        *(undefined4 *)&param_1->field_0x20c = 8;
      }
      else if (iVar15 == 1) {
        *(undefined4 *)&param_1->field_0x288 = 0x35;
        *(undefined4 *)&param_1->field_0x20c = 8;
      }
      else if (iVar15 == 2) {
        *(undefined4 *)&param_1->field_0x288 = 7;
        *(undefined4 *)&param_1->field_0x20c = 8;
      }
      else {
        *(undefined4 *)&param_1->field_0x288 = 0x1e;
        *(undefined4 *)&param_1->field_0x20c = 8;
      }
    }
    if (*(int *)&param_1->field_0x20c != 9) {
      if ((param_1->field_0x250 == '\0') && (*(void **)&param_1->field_0x252 != nullptr)) {
        st::fn_00402982(*(void **)&param_1->field_0x252,0);
        param_1->field_0x250 = 1;
      }
      if (*(int *)&param_1->field_0x1f7 == 0) {
        st::fn_00405D08(param_1,0x477);
        return local_1c;
      }
    }
    break;
  case 2:
  case 4:
    local_EAX_1240 = st::fn_00403F71(param_1,&local_10,&local_14,&local_18);
    if (local_EAX_1240 == 0) goto cf_common_exit_006121E1;
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
      iVar15 = (short)((sVar8 / 0xc9 + (sVar8 >> 0xf)) -
                      (short)((longlong)local_20 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar15 = (int)(short)((sVar8 / 0xc9 + (sVar8 >> 0xf)) -
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
    if (((*(short *)&param_1->field_0x215 == iVar15) && (*(short *)&param_1->field_0x217 == iVar9))
       && (*(short *)&param_1->field_0x219 == iVar4)) {
LAB_00610886:
      local_EAX_1692 = 0;
    }
    else {
      bVar16 = *(int *)&param_1->field_0x1f7 == 2;
      local_8 = (uint)bVar16;
      iVar15 = local_20 - (short)((short)iVar15 * 0xc9 + 100);
      iVar9 = local_24 - (int)(short)((short)iVar9 * 0xc9 + 100);
      iVar10 = iVar10 + iVar4 * -0xc9;
      iVar10 = iVar10 * iVar10;
      if (0x2773 < ((int)(iVar10 + (iVar10 >> 0x1f & 3U)) >> 2) + iVar9 * iVar9 + iVar15 * iVar15)
      goto LAB_00610886;
      local_EAX_1692 =
           st::fn_00404516
                     ((AnonReceiver_00601500 *)(param_1 + 1),local_10,local_14,local_18,
                      (int)*(short *)&param_1->field_0x260,(int)*(short *)&param_1->field_0x262,
                      (int)*(short *)&param_1->field_0x264,*(int *)&param_1->field_0x1d9,
                      *(int *)&param_1->field_0x21b,*(int *)&param_1->field_0x1fb,
                      *(ushort *)&param_1->field_0x1ff,0xb0,(uint)bVar16,0);
      if (0 < (int)local_EAX_1692) {
        if (local_EAX_1692 == 5) {
          st::fn_0040463D(param_1);
          *(undefined4 *)&param_1->field_0x20c = 9;
        }
        else {
          uVar7 = st::fn_00402EB4(param_1,local_EAX_1692,*(undefined4 *)&param_1->field_0x20c);
          *(undefined4 *)&param_1->field_0x20c = uVar7;
        }
      }
    }
    if (*(int *)&param_1->field_0x20c == 2) {
      *(int *)&param_1->field_0x22b = (int)*(short *)&param_1->field_0x25a;
      *(int *)&param_1->field_0x22f = (int)*(short *)&param_1->field_0x25c;
      *(int *)&param_1->field_0x233 = (int)*(short *)&param_1->field_0x25e;
      if ((local_EAX_1692 == 0) &&
         ((*(int *)&param_1->field_0x1f7 == 0 || (*(int *)&param_1->field_0x1f7 == 2)))) {
        if (*(int *)&param_1->field_0x248 < 0) {
          uVar17 = 0;
        }
        else {
          if (4 < *(int *)&param_1->field_0x248) goto LAB_00610911;
          uVar17 = 5;
        }
        st::fn_00401433
                  (g_traksClass_00802A7C,1,1,uVar17,(int)*(short *)&param_1->field_0x25a,
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
      iVar15 = *(int *)&param_1->field_0x1f7;
      if (iVar15 == 0) {
LAB_00610969:
        local_24 = (uint)*(short *)&param_1->field_0x264;
        local_3c = (float)(int)*(short *)&param_1->field_0x260 * _DAT_007904f8 * _DAT_007904f0;
        local_38 = (float)(int)*(short *)&param_1->field_0x262 * _DAT_007904f8 * _DAT_007904f0;
        local_34 = (float)(int)local_24 * _DAT_007904f8 * _DAT_007904f0;
        st::fn_006E25D0(g_sT3DSMAPContext_00807598,st::pointer_boundary_cast<int *>(&local_68),&local_3c,0.0,0.0,0.0,1);
        local_24 = (uint)*(short *)&param_1->field_0x25e;
        local_48 = (float)(int)*(short *)&param_1->field_0x25a * _DAT_007904f8 * _DAT_007904f0;
        local_44 = (float)(int)*(short *)&param_1->field_0x25c * _DAT_007904f8 * _DAT_007904f0;
        local_40 = (float)(int)local_24 * _DAT_007904f8 * _DAT_007904f0;
        st::fn_006E25D0(g_sT3DSMAPContext_00807598,st::pointer_boundary_cast<int *>(&local_58),&local_48,0.0,0.0,0.0,1);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        sVar8 = (**(code **)(*(int *)param_1 + 0x14))
                          (STPiece<2,2>(local_68),uStack_62,STPiece<2,2>(local_60),local_58 >> 0x10,
                           (undefined1)uStack_52,local_50 >> 0x10);
        *(undefined4 *)&param_1->field_0x237 = *(undefined4 *)(&DAT_007d2138 + sVar8 * 4);
      }
      else if (iVar15 == 1) {
        iVar15 = *(int *)&param_1->field_0x237 + 1;
        *(int *)&param_1->field_0x237 = iVar15;
        if (9 < iVar15) {
          *(undefined4 *)&param_1->field_0x237 = 0;
        }
      }
      else {
        if (iVar15 == 2) goto LAB_00610969;
        *(undefined4 *)&param_1->field_0x237 = 0;
      }
      st::fn_00401064
                (*(STT3DSprC **)&param_1->field_0x252,'\r',*(uint *)&param_1->field_0x237);
      st::fn_004030BC(*(STT3DSprC **)&param_1->field_0x252,'\r');
      st::fn_004045D9
                (*(STT3DSprC **)&param_1->field_0x252,
                 (float)*(int *)&param_1->field_0x22b * _DAT_007904f8 * _DAT_007904f0,
                 (float)*(int *)&param_1->field_0x22f * _DAT_007904f8 * _DAT_007904f0,
                 (float)*(int *)&param_1->field_0x233 * _DAT_007904f8 * _DAT_007904f0 +
                 _DAT_007904fc);
      pVVar13 = g_visibleClass_00802A88;
      if (g_visibleClass_00802A88 == nullptr) goto cf_common_exit_006115EC;
      iVar15 = *(int *)&param_1->field_0x233;
      sVar8 = (short)(iVar15 >> 0x1f);
      if (iVar15 < 0) {
        local_c = (int)(short)(((short)(iVar15 / 200) + sVar8) -
                              (short)((longlong)iVar15 * 0x51eb851f >> 0x3f)) - 1;
      }
      else {
        local_c = (uint)(short)(((short)(iVar15 / 200) + sVar8) -
                               (short)((longlong)iVar15 * 0x51eb851f >> 0x3f));
      }
      iVar15 = *(int *)&param_1->field_0x22f;
      iVar15 = STBiasedDiv16(iVar15, 0xc9); /* exact signed 16-bit grid-index division */
      iVar9 = *(int *)&param_1->field_0x22b;
      iVar9 = STBiasedDiv16(iVar9, 0xc9); /* exact signed 16-bit grid-index division */
      if (((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
         ((st::fn_00403F53
                     (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar9,iVar15,
                      (int *)&local_24,&local_20), (int)local_c < 0 ||
          (((4 < (int)local_c || ((int)local_24 < 0)) ||
           (iVar15 = pVVar13->field_0030, iVar15 <= (int)local_24))))))
      goto cf_common_exit_00611C0F;
      iVar9 = g_centeredOffsets5[local_c];
    }
    else {
      if (*(int *)&param_1->field_0x20c != 4) {
        return local_1c;
      }
      if (*(int *)&param_1->field_0x248 < 0) {
        if (*(uint *)&param_1->field_0x294 < g_playSystem_00802A38->field_00E4) {
          *(undefined4 *)&param_1->field_0x248 = 0;
          *(uint *)&param_1->field_0x24c = g_playSystem_00802A38->field_00E4;
        }
      }
      else {
        uVar17 = st::machine_word_boundary_cast<uint>(g_playSystem_00802A38->field_00E4 - *(int *)&param_1->field_0x24c >> 2);
        *(uint *)&param_1->field_0x248 = uVar17;
        if ((int)PTR_00806724->entryCount <= (int)uVar17) {
          *(int *)&param_1->field_0x248 = st::machine_word_boundary_cast<int>(PTR_00806724->entryCount + -1);
cf_common_exit_006121E1:
          st::fn_0040463D(param_1);
          *(undefined4 *)&param_1->field_0x20c = 9;
          return local_1c;
        }
        if ((g_playSystem_00802A38->field_00E4 & 1) == 0) {
          iVar15 = *(int *)&param_1->field_0x288 + -3;
          *(int *)&param_1->field_0x288 = iVar15;
          if (iVar15 < 5) {
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
      if ((local_EAX_1692 == 0) &&
         ((*(int *)&param_1->field_0x1f7 == 0 || (*(int *)&param_1->field_0x1f7 == 2)))) {
        if (*(int *)&param_1->field_0x248 < 0) {
          uVar17 = 0;
        }
        else {
          if (4 < *(int *)&param_1->field_0x248) goto LAB_00610d47;
          uVar17 = 5;
        }
        st::fn_00401433
                  (g_traksClass_00802A7C,1,1,uVar17,(int)*(short *)&param_1->field_0x25a,
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
      iVar15 = *(int *)&param_1->field_0x1f7;
      if (iVar15 == 0) {
LAB_00610d9f:
        local_24 = (uint)*(short *)&param_1->field_0x264;
        local_48 = (float)(int)*(short *)&param_1->field_0x260 * _DAT_007904f8 * _DAT_007904f0;
        local_44 = (float)(int)*(short *)&param_1->field_0x262 * _DAT_007904f8 * _DAT_007904f0;
        local_40 = (float)(int)local_24 * _DAT_007904f8 * _DAT_007904f0;
        st::fn_006E25D0(g_sT3DSMAPContext_00807598,st::pointer_boundary_cast<int *>(&local_58),&local_48,0.0,0.0,0.0,1);
        local_24 = (uint)*(short *)&param_1->field_0x25e;
        local_3c = (float)(int)*(short *)&param_1->field_0x25a * _DAT_007904f8 * _DAT_007904f0;
        local_38 = (float)(int)*(short *)&param_1->field_0x25c * _DAT_007904f8 * _DAT_007904f0;
        local_34 = (float)(int)local_24 * _DAT_007904f8 * _DAT_007904f0;
        st::fn_006E25D0(g_sT3DSMAPContext_00807598,st::pointer_boundary_cast<int *>(&local_68),&local_3c,0.0,0.0,0.0,1);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        sVar8 = (**(code **)(*(int *)param_1 + 0x14))
                          (STPiece<2,2>(local_58),uStack_52,STPiece<2,2>(local_50),local_68 >> 0x10,
                           (undefined1)uStack_62,local_60 >> 0x10);
        *(undefined4 *)&param_1->field_0x237 = *(undefined4 *)(&DAT_007d2138 + sVar8 * 4);
      }
      else if (iVar15 == 1) {
        iVar15 = *(int *)&param_1->field_0x237 + 1;
        *(int *)&param_1->field_0x237 = iVar15;
        if (9 < iVar15) {
          *(undefined4 *)&param_1->field_0x237 = 0;
        }
      }
      else {
        if (iVar15 == 2) goto LAB_00610d9f;
        *(undefined4 *)&param_1->field_0x237 = 0;
      }
      st::fn_00401064
                (*(STT3DSprC **)&param_1->field_0x252,'\r',*(uint *)&param_1->field_0x237);
      st::fn_004030BC(*(STT3DSprC **)&param_1->field_0x252,'\r');
      st::fn_004045D9
                (*(STT3DSprC **)&param_1->field_0x252,
                 (float)*(int *)&param_1->field_0x22b * _DAT_007904f8 * _DAT_007904f0,
                 (float)*(int *)&param_1->field_0x22f * _DAT_007904f8 * _DAT_007904f0,
                 (float)*(int *)&param_1->field_0x233 * _DAT_007904f8 * _DAT_007904f0 +
                 _DAT_007904fc);
      pVVar13 = g_visibleClass_00802A88;
      if (g_visibleClass_00802A88 == nullptr) goto cf_common_exit_006115EC;
      iVar15 = *(int *)&param_1->field_0x233;
      sVar8 = (short)(iVar15 >> 0x1f);
      if (iVar15 < 0) {
        local_c = (int)(short)(((short)(iVar15 / 200) + sVar8) -
                              (short)((longlong)iVar15 * 0x51eb851f >> 0x3f)) - 1;
      }
      else {
        local_c = (uint)(short)(((short)(iVar15 / 200) + sVar8) -
                               (short)((longlong)iVar15 * 0x51eb851f >> 0x3f));
      }
      iVar15 = *(int *)&param_1->field_0x22f;
      iVar15 = STBiasedDiv16(iVar15, 0xc9); /* exact signed 16-bit grid-index division */
      iVar9 = *(int *)&param_1->field_0x22b;
      iVar9 = STBiasedDiv16(iVar9, 0xc9); /* exact signed 16-bit grid-index division */
      if (((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
         ((st::fn_00403F53
                     (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar9,iVar15,
                      (int *)&local_24,&local_20), (int)local_c < 0 ||
          (((4 < (int)local_c || ((int)local_24 < 0)) ||
           (iVar15 = pVVar13->field_0030, iVar15 <= (int)local_24))))))
      goto cf_common_exit_00611C0F;
      iVar9 = g_centeredOffsets5[local_c];
    }
    iVar9 = iVar9 + local_20;
    if (((-1 < iVar9) && (iVar9 < pVVar13->field_0034)) && (pVVar13->field_004C != nullptr)) {
      bVar3 = pVVar13->field_004C[iVar9 * iVar15 + local_24];
      goto LAB_00611061;
    }
    goto cf_common_exit_00611C0F;
  case 3:
    iVar15 = st::fn_00405BD7(param_1,&local_10,&local_14,&local_18);
    if (iVar15 < 1) {
      *(undefined4 *)&param_1->field_0x256 = 2;
      *(undefined4 *)&param_1->field_0x20c = 4;
      *(undefined2 *)&param_1->field_0x270 = 0xffff;
      uVar17 = *(int *)&param_1->field_0x1c * 0x41c64e6d + 0x3039;
      *(uint *)&param_1->field_0x1c = uVar17;
      *(uint *)&param_1->field_0x294 =
           (uVar17 >> 0x10) % 0xb + 10 + g_playSystem_00802A38->field_00E4;
      *(uint *)&param_1->field_0x298 = g_playSystem_00802A38->field_00E4;
      local_1c = st::fn_004027D4(param_1,10,&local_10,&local_14,&local_18);
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
    iVar15 = STBiasedDiv16(sVar8, 0xc9); /* exact signed 16-bit grid-index division */
    if (*(short *)&param_1->field_0x215 == iVar15) {
      iVar15 = STBiasedDiv16(sVar12, 0xc9); /* exact signed 16-bit grid-index division */
      if (*(short *)&param_1->field_0x217 != iVar15) goto LAB_00611185;
      iVar15 = STBiasedDiv16(sVar11, 200); /* exact signed 16-bit grid-index division */
      local_EAX_4124 = local_c;
      if (*(short *)&param_1->field_0x219 != iVar15) goto LAB_00611185;
    }
    else {
LAB_00611185:
      local_EAX_4124 =
           st::fn_00404516
                     ((AnonReceiver_00601500 *)(param_1 + 1),local_10,local_14,local_18,
                      (int)*(short *)&param_1->field_0x260,(int)*(short *)&param_1->field_0x262,
                      (int)*(short *)&param_1->field_0x264,*(int *)&param_1->field_0x1d9,
                      *(int *)&param_1->field_0x21b,*(int *)&param_1->field_0x1fb,
                      *(ushort *)&param_1->field_0x1ff,0xb0,0,0);
      local_c = local_EAX_4124;
      if (0 < (int)local_EAX_4124) {
        if (local_EAX_4124 == 5) {
          st::fn_0040463D(param_1);
          *(undefined4 *)&param_1->field_0x20c = 9;
        }
        else {
          uVar7 = st::fn_00402EB4(param_1,local_EAX_4124,*(undefined4 *)&param_1->field_0x20c);
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
    if ((local_EAX_4124 == 0) &&
       ((*(int *)&param_1->field_0x1f7 == 0 || (*(int *)&param_1->field_0x1f7 == 2)))) {
      if (*(int *)&param_1->field_0x248 < 0) {
        uVar17 = 0;
      }
      else {
        if (4 < *(int *)&param_1->field_0x248) goto LAB_006112a8;
        uVar17 = 5;
      }
      st::fn_00401433
                (g_traksClass_00802A7C,1,1,uVar17,(int)*(short *)&param_1->field_0x25a,
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
    iVar15 = *(int *)&param_1->field_0x1f7;
    if (iVar15 == 0) {
LAB_00611304:
      local_24 = (uint)*(short *)&param_1->field_0x264;
      local_48 = (float)(int)*(short *)&param_1->field_0x260 * _DAT_007904f8 * _DAT_007904f0;
      local_44 = (float)(int)*(short *)&param_1->field_0x262 * _DAT_007904f8 * _DAT_007904f0;
      local_40 = (float)(int)local_24 * _DAT_007904f8 * _DAT_007904f0;
      st::fn_006E25D0(g_sT3DSMAPContext_00807598,st::pointer_boundary_cast<int *>(&local_58),&local_48,0.0,0.0,0.0,1);
      local_24 = (uint)*(short *)&param_1->field_0x25e;
      local_3c = (float)(int)*(short *)&param_1->field_0x25a * _DAT_007904f8 * _DAT_007904f0;
      local_38 = (float)(int)*(short *)&param_1->field_0x25c * _DAT_007904f8 * _DAT_007904f0;
      local_34 = (float)(int)local_24 * _DAT_007904f8 * _DAT_007904f0;
      st::fn_006E25D0(g_sT3DSMAPContext_00807598,st::pointer_boundary_cast<int *>(&local_68),&local_3c,0.0,0.0,0.0,1);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      sVar8 = (**(code **)(*(int *)param_1 + 0x14))
                        (STPiece<2,2>(local_58),uStack_52,STPiece<2,2>(local_50),local_68 >> 0x10,
                         (undefined1)uStack_62,local_60 >> 0x10);
      *(undefined4 *)&param_1->field_0x237 = *(undefined4 *)(&DAT_007d2138 + sVar8 * 4);
    }
    else if (iVar15 == 1) {
      iVar15 = *(int *)&param_1->field_0x237 + 1;
      *(int *)&param_1->field_0x237 = iVar15;
      if (9 < iVar15) {
        *(undefined4 *)&param_1->field_0x237 = 0;
      }
    }
    else {
      if (iVar15 == 2) goto LAB_00611304;
      *(undefined4 *)&param_1->field_0x237 = 0;
    }
    st::fn_00401064(*(STT3DSprC **)&param_1->field_0x252,'\r',*(uint *)&param_1->field_0x237);
    st::fn_004030BC(*(STT3DSprC **)&param_1->field_0x252,'\r');
    st::fn_004045D9
              (*(STT3DSprC **)&param_1->field_0x252,
               (float)*(int *)&param_1->field_0x22b * _DAT_007904f8 * _DAT_007904f0,
               (float)*(int *)&param_1->field_0x22f * _DAT_007904f8 * _DAT_007904f0,
               (float)*(int *)&param_1->field_0x233 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    pVVar13 = g_visibleClass_00802A88;
    if (g_visibleClass_00802A88 != nullptr) {
      iVar15 = *(int *)&param_1->field_0x233;
      sVar8 = (short)(iVar15 >> 0x1f);
      if (iVar15 < 0) {
        local_c = (int)(short)(((short)(iVar15 / 200) + sVar8) -
                              (short)((longlong)iVar15 * 0x51eb851f >> 0x3f)) - 1;
      }
      else {
        local_c = (uint)(short)(((short)(iVar15 / 200) + sVar8) -
                               (short)((longlong)iVar15 * 0x51eb851f >> 0x3f));
      }
      iVar15 = *(int *)&param_1->field_0x22f;
      iVar15 = STBiasedDiv16(iVar15, 0xc9); /* exact signed 16-bit grid-index division */
      iVar9 = *(int *)&param_1->field_0x22b;
      iVar9 = STBiasedDiv16(iVar9, 0xc9); /* exact signed 16-bit grid-index division */
      if (((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
           (st::fn_00403F53
                      (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar9,iVar15,
                       (int *)&local_24,&local_20), (int)local_c < 0)) ||
          (((4 < (int)local_c || ((int)local_24 < 0)) ||
           (((int)pVVar13->field_0030 <= (int)local_24 ||
            ((iVar15 = g_centeredOffsets5[local_c] + local_20, iVar15 < 0 ||
             (pVVar13->field_0034 <= iVar15)))))))) ||
         ((pVVar13->field_004C == nullptr ||
          (pVVar13->field_004C[local_24 + iVar15 * pVVar13->field_0030] != 0))))
      goto cf_common_exit_00611C0F;
      if (param_1->field_0x250 == '\0') goto cf_common_exit_006115EC;
      goto LAB_006115da;
    }
    goto cf_common_exit_006115EC;
  case 5:
    iVar14 = st::fn_004016F4(param_1,&local_10,&local_14,&local_18);
    if (iVar14 == 0) {
      return local_1c;
    }
    *(undefined2 *)&param_1->field_0x262 = *(undefined2 *)&param_1->field_0x25c;
    *(undefined2 *)&param_1->field_0x260 = *(undefined2 *)&param_1->field_0x25a;
    bVar16 = *(int *)&param_1->field_0x1f7 == 2;
    *(undefined2 *)&param_1->field_0x264 = *(undefined2 *)&param_1->field_0x25e;
    local_8 = (uint)bVar16;
    sVar8 = (short)local_10;
    *(short *)&param_1->field_0x25a = sVar8;
    sVar12 = (short)local_14;
    *(short *)&param_1->field_0x25c = sVar12;
    sVar11 = (short)local_18;
    *(short *)&param_1->field_0x25e = sVar11;
    local_c = 0;
    iVar15 = STBiasedDiv16(sVar8, 0xc9); /* exact signed 16-bit grid-index division */
    if (*(short *)&param_1->field_0x215 == iVar15) {
      iVar15 = STBiasedDiv16(sVar12, 0xc9); /* exact signed 16-bit grid-index division */
      if (*(short *)&param_1->field_0x217 != iVar15) goto LAB_006117e5;
      iVar15 = STBiasedDiv16(sVar11, 200); /* exact signed 16-bit grid-index division */
      uVar6 = local_c;
      if (*(short *)&param_1->field_0x219 != iVar15) goto LAB_006117e5;
    }
    else {
LAB_006117e5:
      uVar6 = st::fn_00404516
                        ((AnonReceiver_00601500 *)(param_1 + 1),local_10,local_14,local_18,
                         (int)*(short *)&param_1->field_0x260,(int)*(short *)&param_1->field_0x262,
                         (int)*(short *)&param_1->field_0x264,*(int *)&param_1->field_0x1d9,
                         *(int *)&param_1->field_0x21b,*(int *)&param_1->field_0x1fb,
                         *(ushort *)&param_1->field_0x1ff,0xb0,(uint)bVar16,0);
      local_c = uVar6;
      if (0 < (int)uVar6) {
        if (uVar6 == 5) {
          st::fn_0040463D(param_1);
          *(undefined4 *)&param_1->field_0x20c = 9;
        }
        else {
          uVar7 = st::fn_00402EB4(param_1,uVar6,*(undefined4 *)&param_1->field_0x20c);
          *(undefined4 *)&param_1->field_0x20c = uVar7;
        }
      }
    }
    iVar15 = *(int *)&param_1->field_0x20c;
    if (((iVar15 != 5) && (iVar15 != 3)) && (iVar15 != 4)) {
      return local_1c;
    }
    *(int *)&param_1->field_0x22b = (int)*(short *)&param_1->field_0x25a;
    *(int *)&param_1->field_0x22f = (int)*(short *)&param_1->field_0x25c;
    *(int *)&param_1->field_0x233 = (int)*(short *)&param_1->field_0x25e;
    if ((uVar6 == 0) &&
       ((*(int *)&param_1->field_0x1f7 == 0 || (*(int *)&param_1->field_0x1f7 == 2)))) {
      if (*(int *)&param_1->field_0x248 < 0) {
        uVar17 = 0;
      }
      else {
        if (4 < *(int *)&param_1->field_0x248) goto LAB_0061190f;
        uVar17 = 5;
      }
      st::fn_00401433
                (g_traksClass_00802A7C,1,1,uVar17,(int)*(short *)&param_1->field_0x25a,
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
    iVar15 = *(int *)&param_1->field_0x1f7;
    if (iVar15 == 0) {
LAB_0061196b:
      local_24 = (uint)*(short *)&param_1->field_0x264;
      local_48 = (float)(int)*(short *)&param_1->field_0x260 * _DAT_007904f8 * _DAT_007904f0;
      local_44 = (float)(int)*(short *)&param_1->field_0x262 * _DAT_007904f8 * _DAT_007904f0;
      local_40 = (float)(int)local_24 * _DAT_007904f8 * _DAT_007904f0;
      st::fn_006E25D0(g_sT3DSMAPContext_00807598,st::pointer_boundary_cast<int *>(&local_58),&local_48,0.0,0.0,0.0,1);
      local_24 = (uint)*(short *)&param_1->field_0x25e;
      local_3c = (float)(int)*(short *)&param_1->field_0x25a * _DAT_007904f8 * _DAT_007904f0;
      local_38 = (float)(int)*(short *)&param_1->field_0x25c * _DAT_007904f8 * _DAT_007904f0;
      local_34 = (float)(int)local_24 * _DAT_007904f8 * _DAT_007904f0;
      st::fn_006E25D0(g_sT3DSMAPContext_00807598,st::pointer_boundary_cast<int *>(&local_68),&local_3c,0.0,0.0,0.0,1);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      sVar8 = (**(code **)(*(int *)param_1 + 0x14))
                        (STPiece<2,2>(local_58),uStack_52,STPiece<2,2>(local_50),local_68 >> 0x10,
                         (undefined1)uStack_62,local_60 >> 0x10);
      *(undefined4 *)&param_1->field_0x237 = *(undefined4 *)(&DAT_007d2138 + sVar8 * 4);
    }
    else if (iVar15 == 1) {
      iVar15 = *(int *)&param_1->field_0x237 + 1;
      *(int *)&param_1->field_0x237 = iVar15;
      if (9 < iVar15) {
        *(undefined4 *)&param_1->field_0x237 = 0;
      }
    }
    else {
      if (iVar15 == 2) goto LAB_0061196b;
      *(undefined4 *)&param_1->field_0x237 = 0;
    }
    st::fn_00401064(*(STT3DSprC **)&param_1->field_0x252,'\r',*(uint *)&param_1->field_0x237);
    st::fn_004030BC(*(STT3DSprC **)&param_1->field_0x252,'\r');
    st::fn_004045D9
              (*(STT3DSprC **)&param_1->field_0x252,
               (float)*(int *)&param_1->field_0x22b * _DAT_007904f8 * _DAT_007904f0,
               (float)*(int *)&param_1->field_0x22f * _DAT_007904f8 * _DAT_007904f0,
               (float)*(int *)&param_1->field_0x233 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    pVVar13 = g_visibleClass_00802A88;
    if (g_visibleClass_00802A88 == nullptr) goto cf_common_exit_006115EC;
    iVar15 = *(int *)&param_1->field_0x233;
    sVar8 = (short)(iVar15 >> 0x1f);
    if (iVar15 < 0) {
      local_c = (int)(short)(((short)(iVar15 / 200) + sVar8) -
                            (short)((longlong)iVar15 * 0x51eb851f >> 0x3f)) - 1;
    }
    else {
      local_c = (uint)(short)(((short)(iVar15 / 200) + sVar8) -
                             (short)((longlong)iVar15 * 0x51eb851f >> 0x3f));
    }
    iVar15 = *(int *)&param_1->field_0x22f;
    iVar15 = STBiasedDiv16(iVar15, 0xc9); /* exact signed 16-bit grid-index division */
    iVar9 = *(int *)&param_1->field_0x22b;
    iVar9 = STBiasedDiv16(iVar9, 0xc9); /* exact signed 16-bit grid-index division */
    if (((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
         ((st::fn_00403F53
                     (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar9,iVar15,
                      (int *)&local_24,&local_20), (int)local_c < 0 ||
          ((((4 < (int)local_c || ((int)local_24 < 0)) ||
            ((int)pVVar13->field_0030 <= (int)local_24)) ||
           ((iVar15 = g_centeredOffsets5[local_c] + local_20, iVar15 < 0 ||
            (pVVar13->field_0034 <= iVar15)))))))) || (pVVar13->field_004C == nullptr)) ||
       (pVVar13->field_004C[local_24 + iVar15 * pVVar13->field_0030] != 0))
    goto cf_common_exit_00611C0F;
LAB_00611c36:
    if (param_1->field_0x250 != '\0') {
LAB_006115da:
      st::fn_00403D0F(*(STT3DSprC **)&param_1->field_0x252);
      param_1->field_0x250 = 0;
    }
    goto cf_common_exit_006115EC;
  case 6:
    if (*(uint *)&param_1->field_0x210 < g_playSystem_00802A38->field_00E4) {
      st::fn_004047AF((int)*(short *)&param_1->field_0x1f5,&local_30,&local_2c,&local_28);
      uVar7 = st::fn_00404C6E(param_1,((int)(local_30 + (local_30 >> 0x1f & 0x3ffU)) >> 10) +
                                         (int)*(short *)&param_1->field_0x1e9,
                                 ((int)(local_2c + (local_2c >> 0x1f & 0x3ffU)) >> 10) +
                                 (int)*(short *)&param_1->field_0x1eb,
                                 ((int)(local_28 + (local_28 >> 0x1f & 0x3ffU)) >> 10) +
                                 (int)*(short *)&param_1->field_0x1ed,
                                 (int)*(short *)&param_1->field_0x1e9,
                                 (int)*(short *)&param_1->field_0x1eb,
                                 (int)*(short *)&param_1->field_0x1ed);
      st::fn_004039F4(param_1,(int)*(short *)&param_1->field_0x1e9,
                         (int)*(short *)&param_1->field_0x1eb,(int)*(short *)&param_1->field_0x1ed,
                         uVar7);
      st::fn_00405993((STGenBombC *)param_1,1,0);
      if ((param_1->field_0x250 != '\0') &&
         (*(STT3DSprC **)&param_1->field_0x252 != nullptr)) {
        st::fn_00403D0F(*(STT3DSprC **)&param_1->field_0x252);
        param_1->field_0x250 = 0;
      }
      *(undefined4 *)&param_1->field_0x20c = 1;
      return local_1c;
    }
    break;
  case 7:
    if ((param_1->field_0x2e9 != '\0') && (*(void **)&param_1->field_0x252 != nullptr)) {
      uVar17 = st::fn_004042AF(*(void **)&param_1->field_0x252,'\r');
      local_24 = st::fn_004042AF(*(void **)&param_1->field_0x252,'\x0e');
      if (0xe < (int)uVar17) {
        if (uVar17 == 0xf) {
          st::fn_00405240
                    (*(STT3DSprC **)&param_1->field_0x252,0xf,g_playSystem_00802A38->field_00E4);
        }
        uVar5 = st::fn_004042AF(*(void **)&param_1->field_0x252,'\x0f');
        st::fn_004030BC(*(STT3DSprC **)&param_1->field_0x252,'\x0f');
        iVar15 = st::fn_004022AC(*(STT3DSprC **)&param_1->field_0x252,'\x0f');
        if ((int)uVar5 < iVar15) {
          uVar5 = uVar5 + 1;
        }
        st::fn_00401064(*(STT3DSprC **)&param_1->field_0x252,'\x0f',uVar5);
      }
      if (param_1->field_0x251 != '\0') {
        iVar15 = st::fn_004022AC(*(STT3DSprC **)&param_1->field_0x252,'\x0e');
        iVar9 = st::fn_004042AF(*(void **)&param_1->field_0x252,'\x0e');
        if (iVar15 + -1 == iVar9) {
          st::fn_00404264(*(STT3DSprC **)&param_1->field_0x252,0xe);
        }
      }
      iVar15 = st::fn_004022AC(*(STT3DSprC **)&param_1->field_0x252,'\r');
      iVar9 = st::fn_004042AF(*(void **)&param_1->field_0x252,'\r');
      if (iVar15 + -1 == iVar9) {
        st::fn_00404264(*(STT3DSprC **)&param_1->field_0x252,0xd);
      }
      iVar15 = st::fn_004022AC(*(STT3DSprC **)&param_1->field_0x252,'\x0f');
      iVar9 = st::fn_004042AF(*(void **)&param_1->field_0x252,'\x0f');
      if (iVar15 + -1 == iVar9) {
        *(undefined4 *)&param_1->field_0x20c = 9;
        return local_1c;
      }
      iVar15 = st::fn_004022AC(*(STT3DSprC **)&param_1->field_0x252,'\r');
      if ((int)uVar17 < iVar15) {
        uVar17 = uVar17 + 1;
      }
      iVar15 = st::fn_004022AC(*(STT3DSprC **)&param_1->field_0x252,'\x0e');
      uVar5 = local_24;
      if ((int)local_24 < iVar15) {
        uVar5 = local_24 + 1;
      }
      st::fn_00401064(*(STT3DSprC **)&param_1->field_0x252,'\x0e',uVar5);
      st::fn_004030BC(*(STT3DSprC **)&param_1->field_0x252,'\x0e');
      st::fn_00401064(*(STT3DSprC **)&param_1->field_0x252,'\r',uVar17);
      st::fn_004030BC(*(STT3DSprC **)&param_1->field_0x252,'\r');
      st::fn_004045D9
                (*(STT3DSprC **)&param_1->field_0x252,
                 (float)*(int *)&param_1->field_0x22b * _DAT_007904f8 * _DAT_007904f0,
                 (float)*(int *)&param_1->field_0x22f * _DAT_007904f8 * _DAT_007904f0,
                 (float)*(int *)&param_1->field_0x233 * _DAT_007904f8 * _DAT_007904f0 +
                 _DAT_007904fc);
      pVVar13 = g_visibleClass_00802A88;
      if (g_visibleClass_00802A88 == nullptr) {
        return local_1c;
      }
      iVar15 = *(int *)&param_1->field_0x233;
      sVar8 = (short)(iVar15 >> 0x1f);
      if (iVar15 < 0) {
        local_24 = (int)(short)(((short)(iVar15 / 200) + sVar8) -
                               (short)((longlong)iVar15 * 0x51eb851f >> 0x3f)) - 1;
      }
      else {
        local_24 = (uint)(short)(((short)(iVar15 / 200) + sVar8) -
                                (short)((longlong)iVar15 * 0x51eb851f >> 0x3f));
      }
      iVar15 = *(int *)&param_1->field_0x22f;
      iVar15 = STBiasedDiv16(iVar15, 0xc9); /* exact signed 16-bit grid-index division */
      iVar9 = *(int *)&param_1->field_0x22b;
      iVar9 = STBiasedDiv16(iVar9, 0xc9); /* exact signed 16-bit grid-index division */
      if ((((((DAT_0080874d != -1) && (g_visibleClass_00802A88->field_00F8 != 0)) &&
            (st::fn_00403F53
                       (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar9,iVar15,
                        &local_20,(int *)&local_c), -1 < (int)local_24)) &&
           (((int)local_24 < 5 && (-1 < local_20)))) &&
          (((local_20 < (int)pVVar13->field_0030 &&
            ((iVar15 = g_centeredOffsets5[local_24] + local_c, -1 < iVar15 &&
             (iVar15 < pVVar13->field_0034)))) && (pVVar13->field_004C != nullptr)))) &&
         (pVVar13->field_004C[local_20 + iVar15 * pVVar13->field_0030] == 0)) {
        if (param_1->field_0x250 == '\0') {
          return local_1c;
        }
        st::fn_00403D0F(*(STT3DSprC **)&param_1->field_0x252);
        param_1->field_0x250 = 0;
        return local_1c;
      }
      if (param_1->field_0x250 != '\0') {
        return local_1c;
      }
      st::fn_00402982(*(void **)&param_1->field_0x252,0);
      param_1->field_0x250 = 1;
      return local_1c;
    }
  case 9:
    st::fn_0040463D(param_1);
    break;
  case 8:
    *(undefined2 *)&param_1->field_0x260 = *(undefined2 *)&param_1->field_0x25a;
    *(undefined2 *)&param_1->field_0x262 = *(undefined2 *)&param_1->field_0x25c;
    *(undefined2 *)&param_1->field_0x264 = *(undefined2 *)&param_1->field_0x25e;
    iVar15 = g_playSystem_00802A38->field_00E4 - *(int *)&param_1->field_0x294;
    if ((iVar15 == 2) && (*(int *)&param_1->field_0x1f7 == 1)) {
      st::fn_00405D08(param_1,0x48b);
    }
    iVar15 = *(int *)&param_1->field_0x288 * iVar15;
    iVar9 = *(int *)&param_1->field_0x27c * iVar15;
    iVar10 = *(int *)&param_1->field_0x280 * iVar15;
    sVar12 = (((short)(iVar9 / 10000) + (short)(iVar9 >> 0x1f)) -
             (short)((longlong)iVar9 * 0x68db8bad >> 0x3f)) + *(short *)&param_1->field_0x1e9;
    iVar9 = *(int *)&param_1->field_0x284 * iVar15;
    sVar11 = (((short)(iVar10 / 10000) + (short)(iVar10 >> 0x1f)) -
             (short)((longlong)iVar10 * 0x68db8bad >> 0x3f)) + *(short *)&param_1->field_0x1eb;
    *(short *)&param_1->field_0x25a = sVar12;
    *(short *)&param_1->field_0x25c = sVar11;
    sVar8 = (((short)(iVar9 / 10000) + (short)(iVar9 >> 0x1f)) -
            (short)((longlong)iVar9 * 0x68db8bad >> 0x3f)) + *(short *)&param_1->field_0x1ed;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_8 = CONCAT22(sVar8,(undefined2)local_8);
    *(short *)&param_1->field_0x25e = sVar8;
    if (0x648 < iVar15) {
      *(undefined4 *)&param_1->field_0x256 = 2;
      *(undefined4 *)&param_1->field_0x20c = 4;
      *(undefined2 *)&param_1->field_0x270 = 0xffff;
      uVar17 = *(int *)&param_1->field_0x1c * 0x41c64e6d + 0x3039;
      *(uint *)&param_1->field_0x1c = uVar17;
      *(uint *)&param_1->field_0x294 =
           (uVar17 >> 0x10) % 0xb + 10 + g_playSystem_00802A38->field_00E4;
      *(uint *)&param_1->field_0x298 = g_playSystem_00802A38->field_00E4;
      local_1c = st::fn_004027D4(param_1,iVar15,&local_10,&local_14,&local_18);
      if (0 < local_1c) {
        *(undefined2 *)&param_1->field_0x25a = (undefined2)local_10;
        *(undefined2 *)&param_1->field_0x25c = (undefined2)local_14;
        *(undefined2 *)&param_1->field_0x25e = (undefined2)local_18;
        return local_1c;
      }
      goto cf_common_exit_006121E1;
    }
    local_c = 0;
    iVar15 = (int)sVar12;
    if (sVar12 < 0) {
      iVar9 = (short)((sVar12 / 0xc9 + (sVar12 >> 0xf)) -
                     (short)((longlong)iVar15 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar9 = (int)(short)((sVar12 / 0xc9 + (sVar12 >> 0xf)) -
                          (short)((longlong)iVar15 * 0x28c1979 >> 0x3f));
    }
    if (*(short *)&param_1->field_0x215 == iVar9) {
      iVar9 = STBiasedDiv16(sVar11, 0xc9); /* exact signed 16-bit grid-index division */
      if (*(short *)&param_1->field_0x217 != iVar9) goto LAB_006122dd;
      iVar9 = STBiasedDiv16(sVar8, 200); /* exact signed 16-bit grid-index division */
      if (*(short *)&param_1->field_0x219 != iVar9) goto LAB_006122dd;
      local_EAX_8584 = 0;
    }
    else {
LAB_006122dd:
      local_EAX_8584 =
           st::fn_00404516
                     ((AnonReceiver_00601500 *)(param_1 + 1),iVar15,(int)sVar11,(int)sVar8,
                      (int)*(short *)&param_1->field_0x260,(int)*(short *)&param_1->field_0x262,
                      (int)*(short *)&param_1->field_0x264,*(int *)&param_1->field_0x1d9,
                      *(int *)&param_1->field_0x21b,*(int *)&param_1->field_0x1fb,
                      *(ushort *)&param_1->field_0x1ff,0xb0,
                      (uint)(*(int *)&param_1->field_0x1f7 == 2),0);
      if (0 < (int)local_EAX_8584) {
        if (local_EAX_8584 == 5) {
          st::fn_0040463D(param_1);
          *(undefined4 *)&param_1->field_0x20c = 9;
        }
        else {
          uVar7 = st::fn_00402EB4(param_1,local_EAX_8584,*(undefined4 *)&param_1->field_0x20c);
          *(undefined4 *)&param_1->field_0x20c = uVar7;
        }
      }
    }
    *(int *)&param_1->field_0x22b = (int)*(short *)&param_1->field_0x25a;
    *(int *)&param_1->field_0x22f = (int)*(short *)&param_1->field_0x25c;
    *(int *)&param_1->field_0x233 = (int)*(short *)&param_1->field_0x25e;
    if ((local_EAX_8584 == 0) &&
       ((*(int *)&param_1->field_0x1f7 == 0 || (*(int *)&param_1->field_0x1f7 == 2)))) {
      if (*(int *)&param_1->field_0x248 < 0) {
        uVar17 = 0;
      }
      else {
        if (4 < *(int *)&param_1->field_0x248) goto LAB_006123fd;
        uVar17 = 5;
      }
      st::fn_00401433
                (g_traksClass_00802A7C,1,1,uVar17,(int)*(short *)&param_1->field_0x25a,
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
    iVar15 = *(int *)&param_1->field_0x1f7;
    if (iVar15 == 0) {
LAB_00612459:
      local_24 = (uint)*(short *)&param_1->field_0x264;
      local_48 = (float)(int)*(short *)&param_1->field_0x260 * _DAT_007904f8 * _DAT_007904f0;
      local_44 = (float)(int)*(short *)&param_1->field_0x262 * _DAT_007904f8 * _DAT_007904f0;
      local_40 = (float)(int)local_24 * _DAT_007904f8 * _DAT_007904f0;
      st::fn_006E25D0(g_sT3DSMAPContext_00807598,st::pointer_boundary_cast<int *>(&local_58),&local_48,0.0,0.0,0.0,1);
      local_24 = (uint)*(short *)&param_1->field_0x25e;
      local_3c = (float)(int)*(short *)&param_1->field_0x25a * _DAT_007904f8 * _DAT_007904f0;
      local_38 = (float)(int)*(short *)&param_1->field_0x25c * _DAT_007904f8 * _DAT_007904f0;
      local_34 = (float)(int)local_24 * _DAT_007904f8 * _DAT_007904f0;
      st::fn_006E25D0(g_sT3DSMAPContext_00807598,st::pointer_boundary_cast<int *>(&local_68),&local_3c,0.0,0.0,0.0,1);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      sVar8 = (**(code **)(*(int *)param_1 + 0x14))
                        (STPiece<2,2>(local_58),uStack_52,STPiece<2,2>(local_50),local_68 >> 0x10,
                         (undefined1)uStack_62,local_60 >> 0x10);
      *(undefined4 *)&param_1->field_0x237 = *(undefined4 *)(&DAT_007d2138 + sVar8 * 4);
    }
    else if (iVar15 == 1) {
      iVar15 = *(int *)&param_1->field_0x237 + 1;
      *(int *)&param_1->field_0x237 = iVar15;
      if (9 < iVar15) {
        *(undefined4 *)&param_1->field_0x237 = 0;
      }
    }
    else {
      if (iVar15 == 2) goto LAB_00612459;
      *(undefined4 *)&param_1->field_0x237 = 0;
    }
    st::fn_00401064(*(STT3DSprC **)&param_1->field_0x252,'\r',*(uint *)&param_1->field_0x237);
    st::fn_004030BC(*(STT3DSprC **)&param_1->field_0x252,'\r');
    st::fn_004045D9
              (*(STT3DSprC **)&param_1->field_0x252,
               (float)*(int *)&param_1->field_0x22b * _DAT_007904f8 * _DAT_007904f0,
               (float)*(int *)&param_1->field_0x22f * _DAT_007904f8 * _DAT_007904f0,
               (float)*(int *)&param_1->field_0x233 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    pVVar13 = g_visibleClass_00802A88;
    if (g_visibleClass_00802A88 == nullptr) goto cf_common_exit_006115EC;
    iVar15 = *(int *)&param_1->field_0x233;
    sVar8 = (short)(iVar15 >> 0x1f);
    if (iVar15 < 0) {
      local_24 = (int)(short)(((short)(iVar15 / 200) + sVar8) -
                             (short)((longlong)iVar15 * 0x51eb851f >> 0x3f)) - 1;
    }
    else {
      local_24 = (uint)(short)(((short)(iVar15 / 200) + sVar8) -
                              (short)((longlong)iVar15 * 0x51eb851f >> 0x3f));
    }
    iVar15 = *(int *)&param_1->field_0x22f;
    iVar15 = STBiasedDiv16(iVar15, 0xc9); /* exact signed 16-bit grid-index division */
    iVar9 = *(int *)&param_1->field_0x22b;
    iVar9 = STBiasedDiv16(iVar9, 0xc9); /* exact signed 16-bit grid-index division */
    if ((((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
          (st::fn_00403F53
                     (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar9,iVar15,
                      &local_20,(int *)&local_c), (int)local_24 < 0)) ||
         ((4 < (int)local_24 || (local_20 < 0)))) || ((int)pVVar13->field_0030 <= local_20)) ||
       (((iVar15 = g_centeredOffsets5[local_24] + local_c, iVar15 < 0 ||
         (pVVar13->field_0034 <= iVar15)) || (pVVar13->field_004C == nullptr))))
    goto cf_common_exit_00611C0F;
    bVar3 = pVVar13->field_004C[local_20 + iVar15 * pVVar13->field_0030];
LAB_00611061:
    if (bVar3 == 0) goto LAB_00611c36;
cf_common_exit_00611C0F:
    if (param_1->field_0x250 == '\0') {
      st::fn_00402982(*(void **)&param_1->field_0x252,0);
      param_1->field_0x250 = 1;
    }
cf_common_exit_006115EC:
    if ((-1 < *(int *)&param_1->field_0x248) && (param_1->field_0x250 != '\0')) {
      iVar15 = (int)PTR_00806724->field_002C;
      uVar17 = PTR_00806724->entries[*(int *)&param_1->field_0x248];
      uVar18 = (undefined1)uVar17;
      uVar19 = (undefined1)(uVar17 >> 8);
      uVar20 = (undefined2)(uVar17 >> 0x10);
      uVar17 = st::fn_004052CC(*(STT3DSprC **)&param_1->field_0x252);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      st::fn_006E9350
                (g_sT3DSMAPContext_00807598,uVar17,CONCAT22(uVar20,CONCAT11(uVar19,uVar18)),iVar15);
      return local_1c;
    }
  }
  return local_1c;
}

// 00613110 FUN_00613110
#line 4 "decomp/ST.exe/functions/00613110/decomp.c"
undefined4 st::fn_00613110(undefined4 param_1)

{
  st::fn_0040581C();
  return param_1;
}

// 00613140 FUN_00613140
#line 4 "decomp/ST.exe/functions/00613140/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
st::fn_00613140(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  short sVar1;
  int local_3c;
  int local_38;
  int local_34;
  int local_2c;
  int local_28;
  int local_24;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;

  local_10 = (float)param_4 * _DAT_007904f8 * _DAT_007904f0;
  local_c = (float)param_5 * _DAT_007904f8 * _DAT_007904f0;
  local_8 = (float)param_6 * _DAT_007904f8 * _DAT_007904f0;
  st::fn_006E25D0(g_sT3DSMAPContext_00807598,&local_3c,&local_10,0.0,0.0,0.0,1);
  local_1c = (float)param_1 * _DAT_007904f8 * _DAT_007904f0;
  local_18 = (float)param_2 * _DAT_007904f8 * _DAT_007904f0;
  local_14 = (float)param_3 * _DAT_007904f8 * _DAT_007904f0;
  st::fn_006E25D0(g_sT3DSMAPContext_00807598,&local_2c,&local_1c,0.0,0.0,0.0,1);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  sVar1 = (**(code **)(*(int *)this + 0x14))
                    (local_3c >> 0x10,local_38 >> 0x10,local_34 >> 0x10,local_2c >> 0x10,
                     local_28 >> 0x10,local_24 >> 0x10);
  return *(undefined4 *)(&DAT_007d2138 + sVar1 * 4);
}

// 00613280 FUN_00613280
#line 4 "decomp/ST.exe/functions/00613280/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 006101B0 -> 00613280 @ 00611CEE; MOVSX at 00611CE3 establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 006101B0 -> 00613280 @ 00611CEE; MOVSX at 00611CDA establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 006101B0 -> 00613280 @ 00611CEE; MOVSX at 00611CD3 establishes signed source width 2 */

void __thiscall st::fn_00613280(void *this,int param_1,int param_2,int param_3,undefined4 param_4)

{
  STField<int>(this,0x22b) = param_1;
  STField<int>(this,0x22f) = param_2;
  STField<undefined4>(this,0x223) = 1;
  STField<undefined4>(this,0x227) = param_4;
  STField<int>(this,0x233) = param_3;
  STField<undefined4>(this,0x237) = param_4;
  STField<undefined4>(this,0x23b) = 0x30;
  STField<undefined4>(this,0x248) = 0xffffffff;
  return;
}

// 006139A0 FUN_006139a0
#line 4 "decomp/ST.exe/functions/006139A0/decomp.c"
int __thiscall st::fn_006139A0(void *this,int *param_1,int *param_2,int *param_3)

{
  short *psVar1;
  short sVar2;
  Global_sub_006141B0_param_2Enum GVar3;
  int iVar4;
  int iVar6;
  int local_EAX_841;
  uint uVar5;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 *local_c;
  int local_8;

  local_8 = 0;
  local_18 = 0;
  local_10 = 0;
  if (STField<int>(this,0x256) != 1) {
    if (STField<int>(this,0x256) != 2) {
      return 0;
    }
    iVar7 = STField<int>(this,0x298);
    uVar5 = g_playSystem_00802A38->field_00E4;
    STField<uint>(this,0x298) = uVar5;
    iVar7 = (uVar5 - iVar7) * STField<int>(this,0x288);
    if (iVar7 == 0) {
      iVar7 = 1;
    }
    iVar9 = STField<int>(this,0x280);
    sVar2 = STField<short>(this,0x25c);
    iVar8 = (STField<int>(this,0x284) * iVar7) / 10000 + (int)STField<short>(this,0x25e);
    if ((STField<int>(this,0x20c) == 4) && (STField<short>(this,0x270) != 0)) {
      iVar8 = iVar8 + STField<short>(this,0x270);
    }
    *param_1 = (STField<int>(this,0x27c) * iVar7) / 10000 + (int)STField<short>(this,0x25a);
    *param_2 = (iVar9 * iVar7) / 10000 + (int)sVar2;
    *param_3 = iVar8;
    return 1;
  }
  iVar7 = STField<int>(this,0x298);
  uVar5 = g_playSystem_00802A38->field_00E4;
  STField<uint>(this,0x298) = uVar5;
  local_14 = (uVar5 - iVar7) * STField<int>(this,0x288);
  iVar9 = STField<int>(this,0x28c) + local_14;
  STField<int>(this,0x28c) = iVar9;
  iVar8 = iVar9 - STField<int>(this,0x290);
  iVar7 = STField<int>(this,0x2dd) + STField<int>(this,0x2d9) * 0x1c;
  if (*(int *)(iVar7 + 8) < iVar8) {
    iVar8 = iVar8 - *(int *)(iVar7 + 8);
    local_c = (undefined4 *)(STField<int>(this,0x2d9) + 1);
    STField<int>(this,0x290) = iVar9 - iVar8;
    STField<undefined4 *>(this,0x2d9) = local_c;
    if ((2 < STField<int>(this,0x2d5)) && (STField<int>(this,0x2d5) + -3 <= (int)local_c)) {
      if (STField<char>(this,0x2ea) != '\0') {
        iVar7 = st::fn_00401CEE(this,&local_24,&local_20,&local_1c);
        if ((-1 < iVar7) &&
           (local_EAX_841 =
                 st::fn_00404700(this,local_24,local_20,local_1c,param_1,param_2,param_3),
           local_EAX_841 != 0)) {
          return 1;
        }
        STField<undefined4>(this,0x256) = 2;
        STField<undefined4>(this,0x20c) = 4;
        STField<undefined2>(this,0x270) = 0xffff;
        uVar5 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
        STField<uint>(this,0x1c) = uVar5;
        STField<uint>(this,0x294) =
             (uVar5 >> 0x10) % 0xb + 10 + g_playSystem_00802A38->field_00E4;
        STField<uint>(this,0x298) = g_playSystem_00802A38->field_00E4;
        goto LAB_00613c8b;
      }
      if (STField<int>(this,0x2d1) != 0) {
        sVar2 = STField<short>(this,0x25e);
        iVar7 = STBiasedDiv16(sVar2, 200); /* exact signed 16-bit grid-index division */
        sVar2 = STField<short>(this,0x25c);
        iVar9 = STBiasedDiv16(sVar2, 0xc9); /* exact signed 16-bit grid-index division */
        sVar2 = STField<short>(this,0x25a);
        iVar4 = STBiasedDiv16(sVar2, 0xc9); /* exact signed 16-bit grid-index division */
        iVar6 = st::fn_00403AAD(this,local_c,iVar4,iVar9,iVar7);
        if ((iVar6 != 0) && (STField<char>(this,0x2ea) == '\0')) {
          return local_8;
        }
      }
    }
    iVar9 = STField<int>(this,0x2d9);
    if (STField<int>(this,0x2d5) + -1 <= iVar9) {
      STField<undefined4>(this,0x20c) = 4;
      STField<undefined2>(this,0x270) = 0xffff;
      uVar5 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar5;
      STField<uint>(this,0x294) = (uVar5 >> 0x10) % 0xb + 10 + g_playSystem_00802A38->field_00E4;
      STField<uint>(this,0x298) = g_playSystem_00802A38->field_00E4;
      STField<undefined4>(this,0x256) = 2;
LAB_00613c8b:
      iVar7 = st::fn_004027D4(this,local_14,param_1,param_2,param_3);
      if (0 < iVar7) {
        return iVar7;
      }
      st::fn_0040463D(this);
      STField<undefined4>(this,0x20c) = 9;
      return iVar7;
    }
    iVar7 = STField<int>(this,0x2dd) + iVar9 * 0x1c;
    if (*(int *)(STField<int>(this,0x2dd) + 0x18 + iVar9 * 0x1c) != 8) {
      STField<int>(this,0x27c) =
           ((&SHORT_007ed570)[*(short *)(iVar7 + 6) * 4] * 10000000) /
           *(int *)(&DAT_007cfe74 + *(short *)(iVar7 + 6) * 4);
      STField<int>(this,0x280) =
           ((&SHORT_007ed572)[*(short *)(iVar7 + 6) * 4] * 10000000) /
           *(int *)(&DAT_007cfe74 + *(short *)(iVar7 + 6) * 4);
      STField<int>(this,0x284) =
           ((&SHORT_007ed574)[*(short *)(iVar7 + 6) * 4] * 10000000) /
           *(int *)(&DAT_007cfe74 + *(short *)(iVar7 + 6) * 4);
    }
  }
  GVar3 = *(Global_sub_006141B0_param_2Enum *)(iVar7 + 0x18);
  if (GVar3 == 0) {
    local_14 = (iVar8 * 51000) / (*(int *)(&DAT_007cfe74 + *(short *)(iVar7 + 6) * 4) * 0xc9);
  }
  else {
    if (GVar3 == CASE_8) {
      local_14 = (STField<int>(this,0x2e1) * iVar8) / *(int *)(iVar7 + 8);
    }
    else {
      local_14 = (iVar8 * 51000) / (*(int *)(&DAT_007cfe74 + *(short *)(iVar7 + 6) * 4) * 0xc9);
    }
    local_18 = st::fn_00401C8F(this,local_14,GVar3,&local_28,&local_10);
  }
  psVar1 = (short *)(STField<int>(this,0x2dd) + STField<int>(this,0x2d9) * 0x1c);
  local_8 = (STField<int>(this,0x27c) * iVar8) / 10000 + (int)*psVar1;
  local_c = (undefined4 *)((STField<int>(this,0x280) * iVar8) / 10000 + (int)psVar1[1]);
  iVar7 = (STField<int>(this,0x284) * iVar8) / 10000 + (int)psVar1[2];
  if (local_18 != 0) {
    local_8 = local_8 + (*(int *)(psVar1 + 6) * local_10) / 10000;
    local_c = (undefined4 *)((int)local_c + (*(int *)(psVar1 + 8) * local_10) / 10000);
    iVar7 = iVar7 + (*(int *)(psVar1 + 10) * local_10) / 10000;
  }
  if (((STField<int>(this,0x2d9) == 0) && (STField<int>(this,0x278) != 0)) && (local_14 != 0))
  {
    local_8 = local_8 + (STField<short>(this,0x26c) * local_14) / 0x33;
    int scalar_local_c = (int)local_c + (STField<short>(this,0x26e) * local_14) / 0x33; /* split integer lifetime from pointer-typed SSA storage */
    iVar7 = iVar7 + (STField<short>(this,0x270) * local_14) / 0x33;
  }
  *param_1 = local_8;
  *param_2 = scalar_local_c;
  *param_3 = iVar7;
  return 1;
}

// 006141B0 FUN_006141b0
#line 4 "decomp/ST.exe/functions/006141B0/decomp.c"
/* [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_006141B0_param_2Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8 */

undefined4 __thiscall
st::fn_006141B0(void *this,int param_1,Global_sub_006141B0_param_2Enum param_2,int *param_3,
            int *param_4)

{
  undefined4 uVar1;
  int iVar2;

  uVar1 = 0;
  switch(param_2) {
  case CASE_1:
    *param_3 = (int)*(short *)(&DAT_007cf8e0 + param_1 * 4) / 0x1c2;
    iVar2 = (int)*(short *)(&DAT_007cf8e2 + param_1 * 4);
    break;
  case CASE_2:
    *param_3 = (int)*(short *)(&DAT_007cf9ac + param_1 * 4) / 0x1c2;
    iVar2 = (int)*(short *)(&DAT_007cf9ae + param_1 * 4);
    break;
  case CASE_3:
    *param_3 = (int)*(short *)(&DAT_007cfa78 + param_1 * 4) / 0x1c2;
    iVar2 = (int)*(short *)(&DAT_007cfa7a + param_1 * 4);
    break;
  case CASE_4:
    *param_3 = (int)*(short *)(&DAT_007cfb44 + param_1 * 4) / 0x1c2;
    iVar2 = (int)*(short *)(&DAT_007cfb46 + param_1 * 4);
    break;
  case CASE_5:
    *param_3 = (int)*(short *)(&DAT_007cfc10 + param_1 * 4) / 0x1c2;
    iVar2 = (int)*(short *)(&DAT_007cfc12 + param_1 * 4);
    break;
  case CASE_6:
    *param_3 = (int)*(short *)(&DAT_007cfcdc + param_1 * 4) / 0x1c2;
    iVar2 = (int)*(short *)(&DAT_007cfcde + param_1 * 4);
    break;
  case CASE_7:
    *param_3 = (int)*(short *)(&DAT_007cfda8 + param_1 * 4) / 0x1c2;
    iVar2 = (int)*(short *)(&DAT_007cfdaa + param_1 * 4);
    break;
  case CASE_8:
    *param_3 = (int)*(short *)(STField<int>(this,0x2e5) + param_1 * 4);
    *param_4 = (int)*(short *)(STField<int>(this,0x2e5) + 2 + param_1 * 4);
    uVar1 = 1;
  default:
    return uVar1;
  }
  *param_4 = iVar2 / 0x1c2;
  return 1;
}

// 00614400 FUN_00614400
#line 4 "decomp/ST.exe/functions/00614400/decomp.c"
void __thiscall st::fn_00614400(void *this,AnonShape_00614400_1B90EA7E *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  short sVar5;
  STWorldObject *pSVar6;
  int iVar7;
  short sVar8;
  short sVar9;
  bool bVar10;
  int local_10;
  byte local_c;
  undefined3 uStack_b;
  int local_8;

  STField<undefined4>(this,0x1fb) = param_1->field_002D;
  STField<undefined2>(this,0x1ff) = param_1->field_0031;
  STField<undefined2>(this,0x1e9) = param_1->field_001A;
  STField<undefined2>(this,0x1eb) = param_1->field_001C;
  STField<undefined2>(this,0x1ed) = param_1->field_001E;
  STField<undefined2>(this,0x1ef) = param_1->field_0020;
  STField<undefined2>(this,0x1f1) = param_1->field_0022;
  STField<undefined2>(this,499) = param_1->field_0024;
  STField<undefined4>(this,0x207) = param_1->field_0043;
  sVar8 = STField<short>(this,0x1e9);
  sVar8 = STBiasedDiv16(sVar8, 0xc9); /* exact signed 16-bit grid-index division */
  STField<short>(this,0x215) = sVar8;
  sVar8 = STField<short>(this,0x1eb);
  sVar8 = STBiasedDiv16(sVar8, 0xc9); /* exact signed 16-bit grid-index division */
  STField<short>(this,0x217) = sVar8;
  sVar8 = STField<short>(this,0x1ed);
  sVar8 = STBiasedDiv16(sVar8, 200); /* exact signed 16-bit grid-index division */
  STField<short>(this,0x219) = sVar8;
  sVar8 = param_1->field_0026;
  sVar4 = STField<short>(this,0x1ef);
  STField<short>(this,0x1f5) =
       (sVar8 / 0xf + (sVar8 >> 0xf)) - (short)((longlong)(int)sVar8 * 0x88888889 >> 0x3f);
  sVar8 = STBiasedDiv16(sVar4, 0xc9); /* exact signed 16-bit grid-index division */
  sVar4 = STField<short>(this,0x1f1);
  STField<short>(this,0x2c5) = sVar8;
  local_8 = STBiasedDiv16(sVar4, 0xc9); /* exact signed 16-bit grid-index division */
  STField<short>(this,0x2c7) = (short)local_8;
  sVar5 = STField<short>(this,499);
  sVar9 = STBiasedDiv16(sVar5, 200); /* exact signed 16-bit grid-index division */
  STField<short>(this,0x2cf) = sVar5;
  STField<short>(this,0x2c9) = sVar9;
  STField<undefined2>(this,0x2cb) = STField<undefined2>(this,0x1ef);
  STField<short>(this,0x2cd) = sVar4;
  iVar7 = param_1->field_0043;
  STField<int>(this,0x2d1) = iVar7;
  if (((((((-1 < sVar8) && (sVar8 < g_worldGrid.sizeX)) && (-1 < (short)local_8)) &&
        (((short)local_8 < g_worldGrid.sizeY && (-1 < sVar9)))) &&
       ((sVar9 < g_worldGrid.sizeZ &&
        ((pSVar6 = STGridAt3D(g_worldGrid, sVar8, local_8, sVar9).objects[0],
         pSVar6 != nullptr && (*(int *)&pSVar6->field_0x18 == iVar7)))))) &&
      (iVar7 = (*pSVar6->vtable[5].slots_00_28[0])(), iVar7 != 0)) &&
     ((pSVar6[1].vtable < (STWorldObjectVTable *)0x8 &&
      ((g_playSystem_00802A38 == nullptr ||
       (g_bulkInitializedRecords_008087C7[(int)pSVar6[1].vtable].field_0022 < 8)))))) {
    bVar1 = *(byte *)&pSVar6[1].vtable;
    bVar2 = STField<byte>(this,0x1d9);
    local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar1));
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    auto _local_c = CONCAT31(uStack_b,bVar2);
    if (DAT_00808a8f == '\0') {
      if (bVar1 == bVar2) {
LAB_0061478b:
        iVar7 = 0;
      }
      else {
        bVar3 = g_playerRelationMatrix[bVar1][bVar2];
        if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
          iVar7 = -2;
        }
        else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
          iVar7 = -1;
        }
        else if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 1)) {
          iVar7 = 1;
        }
        else {
          if ((bVar3 != 1) || (g_playerRelationMatrix[bVar2][bVar1] != 1)) goto LAB_0061478b;
          iVar7 = 2;
        }
      }
      bVar10 = iVar7 < 0;
    }
    else {
      bVar10 = g_bulkInitializedRecords_008087C7[bVar2].field_0023 !=
               g_bulkInitializedRecords_008087C7[bVar1].field_0023;
    }
    if ((bVar10) && (iVar7 = (*pSVar6->vtable[5].slots_00_28[2])(), iVar7 != 0)) {
      STField<undefined4>(this,0x2d1) = *(undefined4 *)&pSVar6->field_0x18;
      goto LAB_006147e6;
    }
  }
  iVar7 = st::fn_006E62D0
                    (g_playSystem_00802A38,STField<AnonShape_005EFAE0_B406B78B *>(this,0x2d1),
                     &local_10);
  if (iVar7 == -4) {
    STField<undefined4>(this,0x2d1) = 0;
  }
  else {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    STField<undefined4>(this,0x2d1) = *(undefined4 *)(local_10 + 0x18);
  }
LAB_006147e6:
  STField<undefined4>(this,0x1f7) = param_1->field_0028;
  iVar7 = DAT_007e6670;
  if ((param_1->field_0028 == 1) && (iVar7 = param_1->field_0033, param_1->field_0033 < 3)) {
    STField<undefined4>(this,0x21b) = 0x14;
    STField<undefined4>(this,0x20c) = 6;
    return;
  }
  STField<int>(this,0x21b) = iVar7;
  STField<undefined4>(this,0x20c) = 6;
  return;
}

// 00614950 FUN_00614950
#line 4 "decomp/ST.exe/functions/00614950/decomp.c"
undefined4 * __thiscall st::fn_00614950(void *this,int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  byte *puVar4;
  byte *puVar5;
  undefined4 *puVar6;
  uint local_8;

  local_8 = 0x116;
  if (STField<int>(this,0x2dd) != 0) {
    local_8 = STField<int>(this,0x2d5) * 0x1c + 0x116;
  }
  if (STField<int>(this,0x2e5) != 0) {
    local_8 = local_8 + STField<int>(this,0x2e1) * 4;
  }
  puVar1 = st::pointer_boundary_cast<undefined4 *>(st::fn_006AAC70(local_8));
  if (this == nullptr) {
    puVar4 = nullptr;
  }
  else {
    puVar4 = (byte *)((int)this + 0x1d5);
  }
  puVar5 = (byte *)(puVar1);
  memmove(puVar5, puVar4, 0x116); /* compiler REP MOVS byte copy */
  iVar2 = 0;
  puVar1[3] = 2;
  puVar4 = (byte *)((int)puVar1 + 0x116);
  if (STField<undefined4 *>(this,0x2dd) != nullptr) {
    puVar5 = (byte *)(STField<undefined4 *>(this,0x2dd));
    puVar6 = st::pointer_boundary_cast<undefined4 *>(puVar4);
    for (uVar3 = (uint)(STField<int>(this,0x2d5) * 0x1c) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = *puVar5;
      puVar5 = (byte *)(puVar5 + 1);
      puVar6 = puVar6 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
      puVar5 = (byte *)((int)puVar5 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    puVar4 = (byte *)(puVar4 + STField<int>(this,0x2d5) * 7);
  }
  if (STField<undefined4 *>(this,0x2e5) != nullptr) {
    puVar5 = (byte *)(STField<undefined4 *>(this,0x2e5));
    for (uVar3 = STField<uint>(this,0x2e1) & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = *puVar5;
      puVar5 = (byte *)(puVar5 + 1);
      puVar4 = (byte *)(puVar4 + 1);
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar5;
      puVar5 = (byte *)((int)puVar5 + 1);
      puVar4 = (byte *)((int)puVar4 + 1);
    }
  }
  *param_1 = local_8;
  return puVar1;
}

// 00614A90 FUN_00614a90
#line 4 "decomp/ST.exe/functions/00614A90/decomp.c"
int __thiscall st::fn_00614A90(void *this,undefined4 *param_1)

{
  byte *puVar1;
  int iVar2;
  uint uVar3;
  byte *puVar4;
  int local_8;

  if (this == nullptr) {
    puVar4 = nullptr;
  }
  else {
    puVar4 = (byte *)((int)this + 0x1d5);
  }
  puVar1 = (byte *)(param_1);
  memmove(puVar4, puVar1, 0x116); /* compiler REP MOVS byte copy */
  iVar2 = 0;
  puVar4 = (byte *)((int)param_1 + 0x116);
  local_8 = 0x116;
  if (STField<int>(this,0x2dd) != 0) {
    puVar1 = (byte *)(st::fn_006AAC70(STField<int>(this,0x2d5) * 0x1c));
    STField<undefined4 *>(this,0x2dd) = puVar1;
    for (uVar3 = (uint)(STField<int>(this,0x2d5) * 0x1c) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar1 = *puVar4;
      puVar4 = (byte *)(puVar4 + 1);
      puVar1 = (byte *)(puVar1 + 1);
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar1 = *(undefined1 *)puVar4;
      puVar4 = (byte *)((int)puVar4 + 1);
      puVar1 = (byte *)((int)puVar1 + 1);
    }
    local_8 = STField<int>(this,0x2d5) * 0x1c + 0x116;
    puVar4 = (byte *)(local_8 + (int)param_1);
  }
  if (STField<int>(this,0x2e5) != 0) {
    puVar1 = (byte *)(st::fn_006AAC70(STField<int>(this,0x2e1) << 2));
    STField<undefined4 *>(this,0x2e5) = puVar1;
    for (uVar3 = STField<uint>(this,0x2e1) & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar1 = *puVar4;
      puVar4 = (byte *)(puVar4 + 1);
      puVar1 = (byte *)(puVar1 + 1);
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar1 = *(undefined1 *)puVar4;
      puVar4 = (byte *)((int)puVar4 + 1);
      puVar1 = (byte *)((int)puVar1 + 1);
    }
    local_8 = local_8 + STField<int>(this,0x2d5) * 0x1c;
  }
  if (STField<int>(this,0x252) != 0) {
    STField<undefined4>(this,0x252) = 0;
  }
  return local_8;
}

// 00614BF0 FUN_00614bf0
#line 4 "decomp/ST.exe/functions/00614BF0/decomp.c"
void __fastcall st::fn_00614BF0(AnonShape_00614BF0_51042166 *param_1)

{
  if (param_1->field_02DD != 0) {
    st::fn_006AB060(&param_1->field_02DD);
  }
  if (param_1->field_02E5 != 0) {
    st::fn_006AB060(&param_1->field_02E5);
  }
  param_1->field_02D5 = 0;
  if ((STT3DSprC *)param_1->field_0252 != nullptr) {
    st::fn_004021D5((STT3DSprC *)param_1->field_0252);
    st::fn_0072E2B0((HoloTy *)param_1->field_0252);
    param_1->field_0252 = 0;
  }
  return;
}

// 00614C80 FUN_00614c80
#line 4 "decomp/ST.exe/functions/00614C80/decomp.c"
/* [STAbiConsistencyApplier] stack_parameter_scalar_role target=parameter:1: parameter=/int
   Evidence: generic pointer has a scalar-only incoming lifetime before its first slot overwrite:
   frame_offset=0x8, direct_reads=1, scalar_operations=2, signed_comparisons=1, unsigned_bounds=0,
   pointer_dereferences=0, slot_reused=true; sites=00614C86 incoming load: MOV EAX,dword ptr [EBP +
   0x8] | 00614C9A scalar operation: LEA ECX,[EAX*0x8 + 0x0] | 00614CA1 scalar operation: SUB
   ECX,EAX | 00614CAF first slot write: MOV dword ptr [EBP + 0x8],ESI */

uint __thiscall
st::fn_00614C80(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,uint param_8,uint param_9,int param_10)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_24;
  int local_20;
  int local_1c;
  uint local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;

  iVar5 = param_1;
  if (param_1 < 1) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = param_9;
    iVar3 = param_10;
    uVar4 = param_8;
  }
  else {
    iVar1 = STField<int>(this,0x2dd) + param_1 * 0x1c;
    iVar3 = (int)*(short *)(iVar1 + -0x18);
    uVar4 = (int)*(short *)(iVar1 + -0x1c);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (int)*(short *)(STField<int>(this,0x2dd) + -0x1a + param_1 * 0x1c);
  }
  iVar5 = iVar5 * 0x1c;
  uVar2 = st::fn_00402EFF(0,0,(AnonShape_0060F940_1CCED7C8 *)
                                 (iVar5 + STField<int>(this,0x2dd)),0,uVar4,param_1,iVar3,param_2
                             ,param_3,param_4,param_5,param_6,param_7,&param_10,(int *)&param_8);
  *(undefined4 *)(iVar5 + 0x18 + STField<int>(this,0x2dd)) = uVar2;
  if (*(int *)(iVar5 + 0x18 + STField<int>(this,0x2dd)) == 8) {
    uVar4 = param_8;
    if (STField<int>(this,0x288) != 0) {
      uVar4 = (int)param_8 / STField<int>(this,0x288);
    }
    local_24 = 0;
    local_14 = 0;
    local_c = 0;
    local_20 = (int)(param_8 * 0x1e) / 100;
    local_8 = 0;
    local_1c = (int)(param_8 * 0x46) / 100;
    local_18 = param_8;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_9 = uVar4;
    local_10 = local_20;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (int)st::fn_006AAC70(uVar4 * 4);
    iVar5 = st::fn_00405B3C(&local_24,st::machine_word_boundary_cast<undefined4>(&local_14),4,param_1,uVar4);
    if (iVar5 == 0) {
      if (STField<undefined4 *>(this,0x2e5) == nullptr) {
        STField<uint>(this,0x2e1) = uVar4;
        STField<int>(this,0x2e5) = param_1;
        return param_8;
      }
      if (STField<int>(this,0x2e1) < (int)uVar4) {
        st::fn_006AB060((int *)((int)this + 0x2e5));
        STField<uint>(this,0x2e1) = uVar4;
        STField<int>(this,0x2e5) = param_1;
        return param_8;
      }
      puVar6 = (undefined4 *)param_1;
      puVar7 = STField<undefined4 *>(this,0x2e5);
      for (uVar4 = uVar4 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      STField<uint>(this,0x2e1) = param_9;
      st::fn_006AB060(&param_1);
      return param_8;
    }
    if (param_1 != 0) {
      st::fn_006AB060(&param_1);
    }
  }
  return 0;
}

// 00614EE0 FUN_00614ee0
#line 4 "decomp/ST.exe/functions/00614EE0/decomp.c"
int __thiscall st::fn_00614EE0(void *this,int param_1,int param_2,int param_3,int param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  STFishC *this_00;
  STFishC *local_1c;
  short local_18 [2];
  int local_14;
  uint local_10;
  short local_a;
  short local_8;
  short local_6;

  local_10 = 0;
  sVar1 = STField<short>(this,0x2c5);
  sVar2 = STField<short>(this,0x2c9);
  sVar3 = STField<short>(this,0x2c7);
  local_14 = 0;
  local_18[0] = 0;
  local_18[1] = 0;
  if ((((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar3 < 0)) ||
       ((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)))) ||
      ((g_worldGrid.sizeZ <= sVar2 ||
       ((this_00 = (STFishC *)
                   STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0], this_00 == nullptr ||
        (this_00->field_0018 != STField<int>(this,0x2d1))))))) &&
     (iVar4 = st::fn_006E62D0
                        (g_playSystem_00802A38,STField<AnonShape_005EFAE0_B406B78B *>(this,0x2d1),
                         (int *)&local_1c), this_00 = local_1c, iVar4 == -4)) {
    return -1;
  }
  st::fn_004031E3(this_00,&local_10,&local_14,local_18);
  if ((((short)local_10 == STField<short>(this,0x2cb)) &&
      ((short)local_14 == STField<short>(this,0x2cd))) &&
     (local_18[0] == STField<short>(this,0x2cf))) {
    return 0;
  }
  iVar5 = (int)local_18[0] - (int)STField<short>(this,499);
  iVar6 = (int)(short)local_14 - (int)STField<short>(this,0x1f1);
  iVar4 = (int)(short)local_10 - (int)STField<short>(this,0x1ef);
  if (iVar4 * iVar4 + iVar6 * iVar6 + iVar5 * iVar5 < 0x191) {
    iVar4 = 0;
  }
  else {
    st::fn_004018C5(this_00,&local_a,&local_6,&local_8);
    if (((local_a == STField<short>(this,0x2c5)) && (local_6 == STField<short>(this,0x2c7)))
       && (local_8 == STField<short>(this,0x2c9))) {
      iVar4 = 1;
    }
    else {
      iVar4 = STField<short>(this,0x2c5) - param_2;
      iVar5 = STField<short>(this,0x2c7) - param_3;
      iVar6 = STField<short>(this,0x2c9) - param_4;
      iVar4 = ((local_8 - param_4) * (local_8 - param_4) + (local_6 - param_3) * (local_6 - param_3)
               + (local_a - param_2) * (local_a - param_2) <
              iVar6 * iVar6 + iVar5 * iVar5 + iVar4 * iVar4) + 1;
    }
    if (((param_1 == STField<int>(this,0x2d5) + -3) && (iVar4 == 2)) ||
       ((param_1 == STField<int>(this,0x2d5) + -2 && (iVar4 != 0)))) {
      STField<undefined2>(this,0x2cb) = (undefined2)local_10;
      STField<undefined2>(this,0x2cd) = (undefined2)local_14;
      STField<short>(this,0x2cf) = local_18[0];
      return iVar4;
    }
  }
  return iVar4;
}

// 006151E0 FUN_006151e0
#line 4 "decomp/ST.exe/functions/006151E0/decomp.c"
int __thiscall st::fn_006151E0(void *this,undefined4 *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;

  iVar1 = st::fn_00402900(this,(int)param_1,param_2,param_3,param_4);
  if (0 < iVar1) {
    if (((param_1 != (undefined4 *)(STField<int>(this,0x2d5) + -3)) || (iVar1 != 2)) &&
       ((param_1 != (undefined4 *)(STField<int>(this,0x2d5) + -2) || (iVar1 < 1)))) {
      return 0;
    }
    uVar2 = st::fn_00404520(this,(int)param_1,(int)STField<short>(this,0x25a),
                               (int)STField<short>(this,0x25c),(int)STField<short>(this,0x25e)
                               ,(int)STField<short>(this,0x2cb),
                               (int)STField<short>(this,0x2cd),(int)STField<short>(this,0x2cf)
                               ,0,0,0);
    if (uVar2 != 0) {
      STField<int>(this,0x27c) =
           (((int)STField<short>(this,0x2cb) - (int)STField<short>(this,0x25a)) * 10000) /
           (int)uVar2;
      STField<int>(this,0x280) =
           (((int)STField<short>(this,0x2cd) - (int)STField<short>(this,0x25c)) * 10000) /
           (int)uVar2;
      STField<int>(this,0x284) =
           (((int)STField<short>(this,0x2cf) - (int)STField<short>(this,0x25e)) * 10000) /
           (int)uVar2;
      *(uint *)(STField<int>(this,0x2dd) + 8 + (int)param_1 * 0x1c) = uVar2;
      *(undefined4 *)(STField<int>(this,0x2dd) + 0x18 + (int)param_1 * 0x1c) = 8;
      STField<undefined1>(this,0x2ea) = 1;
    }
  }
  return iVar1;
}

// 00615390 FUN_00615390
#line 4 "decomp/ST.exe/functions/00615390/decomp.c"
void __fastcall st::fn_00615390(AnonShape_00615390_8FE15FE8 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar1 = param_1->field_01F7;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      param_1->field_0214 = 3;
      return;
    }
    if (iVar1 != 2) {
      return;
    }
  }
  iVar1 = (int)param_1->field_02CF - (int)param_1->field_01ED;
  iVar2 = (int)param_1->field_02CD - (int)param_1->field_01EB;
  iVar3 = (int)param_1->field_02CB - (int)param_1->field_01E9;
  if (iVar3 * iVar3 + iVar2 * iVar2 + iVar1 * iVar1 < 0x13c06) {
    param_1->field_0214 = 1;
    return;
  }
  param_1->field_0214 = 2;
  return;
}

// 00615430 FUN_00615430
#line 4 "decomp/ST.exe/functions/00615430/decomp.c"
undefined4 __thiscall
st::fn_00615430(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8,int param_9,undefined4 *param_10)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  uint local_14;
  int local_10;
  int local_c;
  undefined4 local_8;

  puVar8 = param_10;
  local_8 = 0xffffffff;
  local_28 = st::fn_006ACF0D(param_2,param_3,param_4,param_8,param_9,(int)param_10);
  if (local_28 == 0) {
    return 0xffffffff;
  }
  local_c = param_8 - param_2;
  local_10 = (int)puVar8 - param_4;
  iVar3 = (local_10 * param_7 + (param_9 - param_3) * param_6 + local_c * param_5) / local_28;
  local_14 = st::fn_006C8334(10000 - (iVar3 * iVar3) / 10000);
  iVar7 = param_1 * 0x1c;
  *(int *)(STField<int>(this,0x2dd) + 0xc + iVar7) = (local_c * iVar3) / local_28;
  *(int *)(STField<int>(this,0x2dd) + 0x10 + iVar7) = ((param_9 - param_3) * iVar3) / local_28;
  *(int *)(STField<int>(this,0x2dd) + 0x14 + iVar7) = (local_10 * iVar3) / local_28;
  iVar5 = STField<int>(this,0x2dd) + iVar7;
  iVar4 = st::fn_006ACF0D(*(int *)(iVar5 + 0xc),*(int *)(iVar5 + 0x10),*(int *)(iVar5 + 0x14),param_5,
                       param_6,param_7);
  piVar1 = (int *)(STField<int>(this,0x2dd) + 0xc + iVar7);
  *piVar1 = ((param_5 - *piVar1) * 10000) / iVar4;
  piVar1 = (int *)(STField<int>(this,0x2dd) + 0x10 + iVar7);
  *piVar1 = ((param_6 - *piVar1) * 10000) / iVar4;
  piVar1 = (int *)(STField<int>(this,0x2dd) + 0x14 + iVar7);
  *piVar1 = ((param_7 - *piVar1) * 10000) / iVar4;
  *(undefined4 *)(STField<int>(this,0x2dd) + 0x18 + iVar7) = 8;
  *(int *)(STField<int>(this,0x2dd) + 8 + iVar7) = local_28;
  *(undefined2 *)(STField<int>(this,0x2dd) + iVar7) = (undefined2)param_2;
  *(undefined2 *)(STField<int>(this,0x2dd) + 2 + iVar7) = (undefined2)param_3;
  *(undefined2 *)(STField<int>(this,0x2dd) + 4 + iVar7) = (undefined2)param_4;
  local_34 = 0;
  local_24 = 0;
  local_30 = (iVar3 * local_28 * 0x1e) / 600000;
  local_20 = (int)(local_14 * local_28 * 0x1e) / 600000;
  local_2c = (iVar3 * local_28 * 0x46) / 600000;
  local_1c = local_20;
  if (local_20 < 0) {
    local_1c = 0;
  }
  local_18 = 0;
  uVar2 = (local_28 * 3) / 0x21;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_10 = st::pointer_boundary_cast<undefined4 *>(st::fn_006AAC70(uVar2 * 4));
  iVar5 = st::fn_00405B3C(&local_34,st::machine_word_boundary_cast<undefined4>(&local_24),4,(int)param_10,uVar2);
  if (iVar5 != 0) {
    if (param_10 != nullptr) {
      st::fn_006AB060(&param_10);
    }
    return local_8;
  }
  puVar8 = (undefined4 *)((int)this + 0x2e5);
  if (STField<undefined4 *>(this,0x2e5) == nullptr) {
    STField<uint>(this,0x2e1) = uVar2;
    *puVar8 = st::machine_word_boundary_cast<undefined4>(param_10);
    return 1;
  }
  if ((int)uVar2 <= STField<int>(this,0x2e1)) {
    puVar8 = param_10;
    puVar9 = STField<undefined4 *>(this,0x2e5);
    for (uVar6 = uVar2 & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    STField<uint>(this,0x2e1) = uVar2;
    st::fn_006AB060(&param_10);
    return 1;
  }
  st::fn_006AB060(puVar8);
  STField<uint>(this,0x2e1) = uVar2;
  *puVar8 = st::machine_word_boundary_cast<undefined4>(param_10);
  return 1;
}

// 00615860 FUN_00615860
#line 4 "decomp/ST.exe/functions/00615860/decomp.c"
undefined4 st::fn_00615860(int param_1,int *param_2,int *param_3,int *param_4)

{
  short sVar1;
  short local_94 [72];

  local_94[10] = 0xe47c;
  local_94[0xd] = 0xde4d;
  local_94[0x10] = 0xda6a;
  local_94[0x16] = 0xda6a;
  local_94[0x19] = 0xde4d;
  local_94[0x1b] = 0xe47c;
  local_94[0x1c] = 0xe47c;
  local_94[0x1e] = 0xde4d;
  local_94[0x21] = 0xda6a;
  local_94[0x27] = 0xda6a;
  local_94[0x2a] = 0xde4d;
  local_94[0x2d] = 0xe47c;
  local_94[0] = 0x26ea;
  local_94[1] = 0;
  local_94[2] = 0x364;
  local_94[3] = 0x2596;
  local_94[4] = 0xf5ee;
  local_94[5] = 0x364;
  local_94[6] = 0x21b3;
  local_94[7] = 0xec8b;
  local_94[8] = 0x364;
  local_94[9] = 0x1b84;
  local_94[0xb] = 0x364;
  local_94[0xc] = 0x1375;
  local_94[0xe] = 0x364;
  local_94[0xf] = 0xa12;
  local_94[0x11] = 0x364;
  local_94[0x12] = 0;
  local_94[0x13] = 0xd916;
  local_94[0x14] = 0x364;
  local_94[0x15] = 0xf5ee;
  local_94[0x17] = 0x364;
  local_94[0x18] = 0xec8b;
  local_94[0x1a] = 0x364;
  local_94[0x1d] = 0x364;
  local_94[0x1f] = 0xec8b;
  local_94[0x20] = 0x364;
  local_94[0x22] = 0xf5ee;
  local_94[0x23] = 0x364;
  local_94[0x24] = 0xd916;
  local_94[0x25] = 0;
  local_94[0x26] = 0x364;
  local_94[0x28] = 0xa12;
  local_94[0x29] = 0x364;
  local_94[0x2b] = 0x1375;
  local_94[0x2c] = 0x364;
  local_94[0x2e] = 0x1b84;
  local_94[0x2f] = 0x364;
  local_94[0x30] = 0xec8b;
  local_94[0x31] = 0x21b3;
  local_94[0x32] = 0x364;
  local_94[0x33] = 0xf5ee;
  local_94[0x34] = 0x2596;
  local_94[0x35] = 0x364;
  local_94[0x36] = 0;
  local_94[0x37] = 0x26ea;
  local_94[0x38] = 0x364;
  local_94[0x39] = 0xa12;
  local_94[0x3a] = 0x2596;
  local_94[0x3b] = 0x364;
  local_94[0x3c] = 0x1375;
  local_94[0x3d] = 0x21b3;
  local_94[0x3e] = 0x364;
  local_94[0x3f] = 0x1b84;
  local_94[0x40] = 0x1b84;
  local_94[0x41] = 0x364;
  local_94[0x42] = 0x21b3;
  local_94[0x43] = 0x1375;
  local_94[0x44] = 0x364;
  local_94[0x45] = 0x2596;
  local_94[0x46] = 0xa12;
  local_94[0x47] = 0x364;
  if ((-1 < param_1) && (param_1 < 0x18)) {
    *param_2 = (int)local_94[param_1 * 3];
    sVar1 = local_94[param_1 * 3 + 2];
    *param_3 = (int)local_94[param_1 * 3 + 1];
    *param_4 = (int)sVar1;
    return 1;
  }
  return 0;
}

// 00615AD0 FUN_00615ad0
#line 4 "decomp/ST.exe/functions/00615AD0/decomp.c"
undefined4 __fastcall st::fn_00615AD0(AnonShape_00615AD0_7BE8CE57 *param_1)

{
  int iVar1;
  void *pvVar2;
  int local_10;
  int local_c;
  int local_8;

  iVar1 = st::fn_004047AF((int)param_1->field_01F5,&local_10,&local_c,&local_8);
  if (iVar1 != 0) {
    if (param_1->field_02DD == 0) {
      pvVar2 = st::fn_006AAC70(0x1c);
      param_1->field_02DD = (int)pvVar2;
    }
    param_1->field_02D5 = 1;
    iVar1 = st::fn_00402A4F(param_1,0,(int)param_1->field_01E9,(int)param_1->field_01EB,
                               (int)param_1->field_01ED,local_10,local_c,local_8,
                               (int)param_1->field_01EF,(int)param_1->field_01F1,
                               (undefined4 *)(int)param_1->field_01F3);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

// 00615BB0 FUN_00615bb0
#line 4 "decomp/ST.exe/functions/00615BB0/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00615BB0_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void st::fn_00615BB0(Global_sub_00615BB0_param_1Enum param_1,undefined4 *param_2,undefined4 *param_3,
                 int param_4,undefined2 *param_5)

{
  switch(param_1) {
  case CASE_0:
  case CASE_1:
  case CASE_17:
    if (param_4 == 0) {
      *param_2 = 1;
      *param_3 = 0;
      return;
    }
    break;
  case CASE_2:
  case CASE_3:
  case CASE_4:
    if (param_4 != 0) {
      *param_5 = 0;
      param_5[1] = 0;
      param_5[2] = 1;
      param_5[3] = 0;
      param_5[4] = 0;
      param_5[5] = 0xffff;
      return;
    }
    *param_2 = 1;
    *param_3 = 0xffffffff;
    return;
  case CASE_5:
  case CASE_6:
  case CASE_7:
    if (param_4 != 0) {
      *param_5 = 0;
      param_5[1] = 0;
      param_5[2] = 1;
      param_5[3] = 0;
      param_5[4] = 0xffff;
      param_5[5] = 0;
      return;
    }
    *param_2 = 0;
    *param_3 = 0xffffffff;
    return;
  case CASE_8:
  case CASE_9:
  case CASE_A:
    if (param_4 != 0) {
      *param_5 = 0;
      param_5[1] = 0;
      param_5[2] = 0;
      param_5[3] = 0xffff;
      param_5[4] = 0xffff;
      param_5[5] = 0;
      return;
    }
    *param_2 = 0xffffffff;
    *param_3 = 0xffffffff;
    return;
  case CASE_B:
  case CASE_C:
  case CASE_D:
    if (param_4 == 0) {
      *param_2 = 0xffffffff;
      *param_3 = 0;
      return;
    }
    break;
  case CASE_E:
  case CASE_F:
  case CASE_10:
    if (param_4 != 0) {
      *param_5 = 0;
      param_5[1] = 0;
      param_5[2] = 0xffff;
      param_5[3] = 0;
      param_5[4] = 0;
      param_5[5] = 1;
      return;
    }
    *param_2 = 0xffffffff;
    *param_3 = 1;
    return;
  case CASE_11:
  case CASE_12:
  case CASE_13:
    if (param_4 != 0) {
      *param_5 = 0;
      param_5[1] = 0;
      param_5[2] = 0xffff;
      param_5[3] = 0;
      param_5[4] = 1;
      param_5[5] = 0;
      return;
    }
    *param_2 = 0;
    *param_3 = 1;
    return;
  case CASE_14:
  case CASE_15:
  case CASE_16:
    if (param_4 == 0) {
      *param_2 = 1;
      *param_3 = 1;
      return;
    }
    *param_5 = 0;
    param_5[1] = 0;
    param_5[2] = 1;
    param_5[3] = 0;
    param_5[4] = 0;
    param_5[5] = 1;
  default:
    return;
  }
  *param_5 = 0;
  param_5[1] = 0;
  param_5[2] = 0;
  param_5[3] = 0xffff;
  param_5[4] = 0;
  param_5[5] = 1;
  return;
}

// 00615E70 FUN_00615e70
#line 4 "decomp/ST.exe/functions/00615E70/decomp.c"
void __thiscall
st::fn_00615E70(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8,int param_9)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  iVar2 = st::fn_006ACF0D(param_1,param_2,param_3,param_7,param_8,param_9);
  iVar3 = (iVar2 * param_4) / 10000 + param_1;
  iVar4 = (iVar2 * param_5) / 10000 + param_2;
  iVar5 = (iVar2 * param_6) / 10000 + param_3;
  iVar2 = st::fn_006ACF0D(iVar3,iVar4,iVar5,param_7,param_8,param_9);
  if (iVar2 == 0) {
    STField<undefined2>(this,0x26c) = 0;
    STField<undefined2>(this,0x26e) = 0;
    STField<undefined2>(this,0x270) = 0;
    STField<undefined4>(this,0x278) = 0;
    return;
  }
  sVar1 = (short)iVar3;
  STField<short>(this,0x272) = sVar1;
  STField<short>(this,0x26c) = (short)param_7 - sVar1;
  sVar1 = (short)iVar4;
  STField<short>(this,0x274) = sVar1;
  STField<short>(this,0x26e) = (short)param_8 - sVar1;
  sVar1 = (short)iVar5;
  STField<short>(this,0x276) = sVar1;
  STField<short>(this,0x270) = (short)param_9 - sVar1;
  STField<int>(this,0x278) = iVar2;
  return;
}

// 00615FD0 FUN_00615fd0
#line 4 "decomp/ST.exe/functions/00615FD0/decomp.c"
undefined4 __thiscall st::fn_00615FD0(void *this,int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_c;
  short local_6;

  iVar2 = 0;
  local_c = 0;
  STField<undefined4>(this,0x248) = 0xffffffff;
  if (param_1 != 1) {
    if (param_1 < 2) {
      return param_2;
    }
    if (3 < param_1) {
      return param_2;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    if ((STField<int *>(this,0x2ff) != nullptr) &&
       (iVar1 = (**(code **)(*STField<int *>(this,0x2ff) + 0xe0))
                          (STField<undefined4>(this,0x303),(int)&param_2 + 2,(int)&param_1 + 2,
                           &local_6,&local_c), iVar1 == 0)) {
      if (STField<int>(this,0x1f7) == 2) {
        if (STField<int>(this,0x2fb) == STField<int>(this,0x207)) {
          st::fn_00403E22((int)STField<short>(this,0x201),STField<int>(this,0x21b),
                             STField<int>(this,0x2ff),(short)STField<undefined4>(this,0x1fb),
                             STField<ushort>(this,0x1ff),0xb0,0x12a);
          iVar2 = 1;
        }
        else {
          st::fn_00403E22((int)STField<short>(this,0x201),STField<int>(this,0x21b),
                             STField<int>(this,0x2ff),(short)STField<undefined4>(this,0x1fb),
                             STField<ushort>(this,0x1ff),0xb0,0x110);
        }
      }
      STField<int>(this,0x30f) = (int)STPiece<2,2>(param_1);
      STField<int>(this,0x22f) = (int)STPiece<2,2>(param_1);
      STField<int>(this,0x30b) = (int)STPiece<2,2>(param_2);
      STField<int>(this,0x313) = (int)local_6;
      STField<undefined4>(this,0x307) = local_c;
      STField<int>(this,0x22b) = (int)STPiece<2,2>(param_2);
      STField<int>(this,0x233) = (int)local_6;
      iVar2 = st::fn_00405993(st::pointer_boundary_cast<STGenBombC *>(this),0,iVar2);
      if (iVar2 != 0) {
        if (STField<int>(this,0x1f7) == 0) {
          st::fn_00405D08(this,0x478);
          return 7;
        }
        if (STField<int>(this,0x1f7) != 1) {
          return 7;
        }
        st::fn_00405D08(this,0x48c);
        return 7;
      }
    }
    goto LAB_006161d7;
  }
  STField<undefined4>(this,0x22f) = STField<undefined4>(this,0x30f);
  STField<undefined4>(this,0x22b) = STField<undefined4>(this,0x30b);
  STField<undefined4>(this,0x233) = STField<undefined4>(this,0x313);
  STField<undefined4>(this,0x2ff) = 0;
  if (STField<int>(this,0x1f7) == 0) {
    iVar2 = 0x478;
LAB_006161a8:
    st::fn_00405D08(this,iVar2);
  }
  else if (STField<int>(this,0x1f7) == 1) {
    iVar2 = 0x48c;
    goto LAB_006161a8;
  }
  iVar2 = st::fn_00405993(st::pointer_boundary_cast<STGenBombC *>(this),0,0);
  if (iVar2 != 0) {
    STField<undefined4>(this,0x307) = local_c;
    return 7;
  }
LAB_006161d7:
  st::fn_0040463D(this);
  return 9;
}

// 00616280 FUN_00616280
#line 4 "decomp/ST.exe/functions/00616280/decomp.c"
undefined4 __thiscall st::fn_00616280(void *this,int *param_1,int *param_2,int *param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  STWorldObject *this_00;
  STWorldObject *local_14;
  short local_10 [2];
  int local_c [2];

  local_c[1] = 0;
  sVar1 = STField<short>(this,0x2c5);
  sVar2 = STField<short>(this,0x2c9);
  sVar3 = STField<short>(this,0x2c7);
  local_c[0] = 0;
  local_10[0] = 0;
  local_10[1] = 0;
  if (((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar3 < 0)) ||
      (((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)) ||
       ((g_worldGrid.sizeZ <= sVar2 ||
        ((this_00 = STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0], this_00 == nullptr ||
         (*(int *)&this_00->field_0x18 != STField<int>(this,0x2d1))))))))) &&
     (iVar4 = st::fn_006E62D0
                        (g_playSystem_00802A38,STField<AnonShape_005EFAE0_B406B78B *>(this,0x2d1),
                         (int *)&local_14), this_00 = local_14, iVar4 == -4)) {
    return 0xffffffff;
  }
  st::fn_004031E3(this_00,(uint *)(local_c + 1),local_c,local_10);
  *param_1 = (int)(short)local_c[1];
  *param_2 = (int)(short)local_c[0];
  *param_3 = (int)local_10[0];
  if ((((short)local_c[1] == STField<short>(this,0x2cb)) &&
      ((short)local_c[0] == STField<short>(this,0x2cd))) &&
     (local_10[0] == STField<short>(this,0x2cf))) {
    return 0;
  }
  return 1;
}

// 00616400 FUN_00616400
#line 4 "decomp/ST.exe/functions/00616400/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall
st::fn_00616400(AnonShape_00616400_B4BF5EEF *param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;

  fVar2 = (float)param_1->field_027C * _DAT_0079cea8;
  fVar3 = (float)param_1->field_0280 * _DAT_0079cea8;
  fVar4 = (float10)param_1->field_0284 * (float10)_DAT_0079cea8;
  fVar1 = (float)fVar4;
  fVar4 = (float10)fVar2 * (float10)fVar2 + (float10)fVar3 * (float10)fVar3 + fVar4 * (float10)fVar1
  ;
  if (fVar4 != (float10)_DAT_0079034c) {
    fVar4 = (((float10)param_2 * (float10)fVar2 +
             (float10)param_3 * (float10)fVar3 + (float10)param_4 * (float10)fVar1) -
            ((float10)(int)param_1->field_025A * (float10)fVar2 +
            (float10)(int)param_1->field_025C * (float10)fVar3 +
            (float10)(int)param_1->field_025E * (float10)fVar1)) / fVar4;
  }
  return fVar4;
}

// 006164E0 FUN_006164e0
#line 4 "decomp/ST.exe/functions/006164E0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall st::fn_006164E0(void *this,int *param_1,int *param_2,int *param_3)

{
  short sVar1;
  int iVar4;
  int iVar5;
  int iVar2;
  int iVar3;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  float10 fVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  iVar4 = st::fn_00401CEE(this,&local_10,&local_14,&local_18);
  if (iVar4 < 0) {
    return 0xffffffff;
  }
  iVar7 = STField<int>(this,0x298);
  uVar9 = g_playSystem_00802A38->field_00E4;
  local_8 = (int)STField<short>(this,0x25a);
  local_c = (int)STField<short>(this,0x25c);
  STField<uint>(this,0x298) = uVar9;
  iVar4 = (int)STField<short>(this,0x25e);
  iVar5 = local_10 - STField<short>(this,0x2cb);
  iVar6 = local_14 - STField<short>(this,0x2cd);
  iVar8 = (uVar9 - iVar7) * STField<int>(this,0x288);
  iVar7 = local_18 - STField<short>(this,0x2cf);
  if (0xe1 < iVar7 * iVar7 + iVar6 * iVar6 + iVar5 * iVar5) {
    if ((local_18 - iVar4) * STField<int>(this,0x284) +
        (local_14 - local_c) * STField<int>(this,0x280) +
        (local_10 - local_8) * STField<int>(this,0x27c) < 0) {
      iVar7 = st::fn_004027D4(this,iVar8,param_1,param_2,param_3);
      if (iVar7 < 1) {
        st::fn_0040463D(this);
        STField<undefined4>(this,0x20c) = 9;
      }
      else {
        STField<undefined4>(this,0x256) = 2;
        STField<undefined4>(this,0x20c) = 4;
        STField<undefined2>(this,0x270) = 0xffff;
        uVar9 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
        STField<uint>(this,0x1c) = uVar9;
        STField<uint>(this,0x294) =
             (uVar9 >> 0x10) % 0xb + 10 + g_playSystem_00802A38->field_00E4;
        STField<uint>(this,0x298) = g_playSystem_00802A38->field_00E4;
      }
    }
    else {
      fVar10 = st::fn_00404B7E(st::pointer_boundary_cast<AnonShape_00616400_B4BF5EEF *>(this),local_10,local_14,local_18);
      if (fVar10 != (float10)_DAT_0079034c) {
        sVar1 = STField<short>(this,0x25a);
        lVar11 = st::fn_0072E288();
        local_8 = (int)STField<short>(this,0x25c);
        lVar12 = st::fn_0072E288();
        local_c = (int)STField<short>(this,0x25e);
        lVar13 = st::fn_0072E288();
        iVar2 = st::fn_006ACF0D((int)sVar1,local_8,local_c,local_10,local_14,local_18);
        iVar4 = (iVar2 << 3) / STField<int>(this,0x288);
        if (iVar4 != 0) {
          STField<short>(this,0x26c) = (short)(((local_10 - (int)lVar11) * 8) / iVar4);
          STField<short>(this,0x26e) = (short)(((local_14 - (int)lVar12) * 8) / iVar4);
          STField<short>(this,0x270) = (short)(((local_18 - (int)lVar13) * 8) / iVar4);
        }
      }
      STField<undefined1>(this,0x29c) = 0;
      local_8 = (STField<int>(this,0x27c) * iVar8) / 10000 + (int)STField<short>(this,0x25a);
      local_c = (STField<int>(this,0x280) * iVar8) / 10000 + (int)STField<short>(this,0x25c);
      sVar1 = STField<short>(this,0x26c);
      iVar4 = (STField<int>(this,0x284) * iVar8) / 10000 + (int)STField<short>(this,0x25e);
      if (((sVar1 != 0) || (STField<short>(this,0x26e) != 0)) ||
         (STField<short>(this,0x270) != 0)) {
        uVar9 = (uint)sVar1;
        if (10 < (int)((uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f))) {
          if (sVar1 < 1) {
            iVar7 = -(uint)(sVar1 != 0);
          }
          else {
            iVar7 = 1;
          }
          STField<undefined1>(this,0x29c) = 1;
          uVar9 = iVar7 * 10;
        }
        local_8 = local_8 + uVar9;
        sVar1 = STField<short>(this,0x26e);
        uVar9 = (uint)sVar1;
        if (10 < (int)((uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f))) {
          if (sVar1 < 1) {
            iVar7 = -(uint)(sVar1 != 0);
          }
          else {
            iVar7 = 1;
          }
          STField<undefined1>(this,0x29c) = 1;
          uVar9 = iVar7 * 10;
        }
        local_c = local_c + uVar9;
        iVar7 = local_c;
        sVar1 = STField<short>(this,0x270);
        uVar9 = (uint)sVar1;
        if ((int)((uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f)) < 0xb) {
          iVar4 = iVar4 + uVar9;
        }
        else if (sVar1 < 1) {
          STField<undefined1>(this,0x29c) = 1;
          iVar4 = iVar4 + (uint)(sVar1 != 0) * -10;
        }
        else {
          STField<undefined1>(this,0x29c) = 1;
          iVar4 = iVar4 + 10;
        }
        iVar3 = st::fn_006ACF0D((int)STField<short>(this,0x25a),(int)STField<short>(this,0x25c),
                             (int)STField<short>(this,0x25e),local_8,local_c,iVar4);
        if (iVar3 != 0) {
          STField<int>(this,0x27c) = ((local_8 - STField<short>(this,0x25a)) * 10000) / iVar3;
          STField<int>(this,0x280) = ((iVar7 - STField<short>(this,0x25c)) * 10000) / iVar3;
          STField<int>(this,0x284) = ((iVar4 - STField<short>(this,0x25e)) * 10000) / iVar3;
        }
      }
    }
  }
  *param_1 = local_8;
  *param_2 = local_c;
  *param_3 = iVar4;
  return 1;
}

// 00616A80 FUN_00616a80
#line 4 "decomp/ST.exe/functions/00616A80/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
st::fn_00616A80(void *this,int param_1,int param_2,int param_3,int *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  float10 fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float10 fVar8;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  float10 extraout_ST1;
  float10 fVar9;
  longlong lVar10;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  float local_1c;
  float local_18;
  int local_14;
  int local_10;
  int local_c;
  float local_8;

  fVar8 = st::fn_00404B7E(st::pointer_boundary_cast<AnonShape_00616400_B4BF5EEF *>(this),param_1,param_2,param_3);
  local_8 = (float)fVar8;
  if (fVar8 == (float10)_DAT_0079034c) {
    iVar7 = st::fn_004027D4(this,STField<int>(this,0x288),param_4,param_5,param_6);
    if (iVar7 < 1) {
      st::fn_0040463D(this);
      STField<undefined4>(this,0x20c) = 9;
      return iVar7;
    }
    STField<undefined4>(this,0x256) = 2;
    STField<undefined4>(this,0x20c) = 4;
    STField<undefined2>(this,0x270) = 0xffff;
    uVar1 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
    STField<uint>(this,0x1c) = uVar1;
    STField<uint>(this,0x294) = (uVar1 >> 0x10) % 0xb + 10 + g_playSystem_00802A38->field_00E4;
    STField<uint>(this,0x298) = g_playSystem_00802A38->field_00E4;
    return iVar7;
  }
  local_c = STField<int>(this,0x27c);
  sVar2 = STField<short>(this,0x25a);
  STField<undefined4>(this,0x2c1) = 0x172;
  local_1c = (float)(int)sVar2;
  lVar10 = st::fn_0072E288();
  local_24 = (int)lVar10;
  local_10 = STField<int>(this,0x280);
  sVar3 = STField<short>(this,0x25c);
  local_18 = (float)local_10;
  local_1c = (float)(int)sVar3;
  lVar10 = st::fn_0072E288();
  local_20 = (int)lVar10;
  local_14 = STField<int>(this,0x284);
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  local_28 = CONCAT22((short)((ulonglong)lVar10 >> 0x10),STField<short>(this,0x25e));
  local_1c = (float)local_14;
  local_8 = (float)(int)STField<short>(this,0x25e);
  lVar10 = st::fn_0072E288();
  iVar7 = param_3 - (int)lVar10;
  local_20 = param_2 - local_20;
  local_44 = SQRT((float)((param_1 - local_24) * (param_1 - local_24) + local_20 * local_20 +
                         iVar7 * iVar7));
  if (local_44 != _DAT_0079034c) {
    iVar4 = STField<int>(this,0x288);
    local_48 = (float)local_20 / local_44;
    iVar6 = (iVar4 * local_c) / 10000;
    local_44 = (float)iVar7 / local_44;
    iVar7 = (iVar4 * local_10) / 10000;
    iVar4 = (iVar4 * local_14) / 10000;
    lVar10 = st::fn_0072E288();
    iVar8 = (int)lVar10 * 0x172;
    STField<short>(this,0x272) =
         (sVar2 - (((short)(iVar8 / 10000) + (short)(iVar8 >> 0x1f)) -
                  (short)((longlong)iVar8 * 0x68db8bad >> 0x3f))) + (short)iVar6;
    lVar10 = st::fn_0072E288();
    iVar8 = (int)lVar10 * 0x172;
    STField<short>(this,0x274) =
         (sVar3 - (((short)(iVar8 / 10000) + (short)(iVar8 >> 0x1f)) -
                  (short)((longlong)iVar8 * 0x68db8bad >> 0x3f))) + (short)iVar7;
    /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
    fVar9 = extraout_ST1;
    lVar10 = st::fn_0072E288();
    iVar8 = (int)lVar10 * 0x172;
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    local_4c = (float)-extraout_ST0;
    local_48 = -local_48;
    local_44 = -local_44;
    fVar5 = (float10)_DAT_0079cea8;
    STField<short>(this,0x276) =
         ((short)local_28 -
         (((short)(iVar8 / 10000) + (short)(iVar8 >> 0x1f)) -
         (short)((longlong)iVar8 * 0x68db8bad >> 0x3f))) + (short)iVar4;
    local_40 = (float)(fVar9 * fVar5);
    local_3c = local_18 * _DAT_0079cea8;
    local_38 = local_1c * _DAT_0079cea8;
    local_34 = local_38 * local_48 - local_3c * local_44;
    local_30 = local_40 * local_44 - local_38 * local_4c;
    local_2c = local_3c * local_4c - local_40 * local_48;
    iVar8 = st::fn_004039C7(&local_4c,(float *)((int)this + 0x29d));
    if (iVar8 != 0) {
      STField<undefined4>(this,0x20c) = 5;
      STField<uint>(this,0x294) = g_playSystem_00802A38->field_00E4;
      STField<uint>(this,0x298) = g_playSystem_00802A38->field_00E4;
      STField<undefined1>(this,0x29c) = 0;
      *param_4 = STField<short>(this,0x25a) + iVar6;
      *param_5 = STField<short>(this,0x25c) + iVar7;
      *param_6 = STField<short>(this,0x25e) + iVar4;
      return 1;
    }
  }
  return 0;
}

// 00616F60 FUN_00616f60
#line 4 "decomp/ST.exe/functions/00616F60/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall st::fn_00616F60(void *this,int *param_1,int *param_2,int *param_3)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  longlong lVar8;
  int local_14;
  int local_10;
  float local_c;
  float local_8;

  local_14 = STField<int>(this,0x2c1);
  if (local_14 == 0) {
    return 0;
  }
  iVar5 = 1;
  iVar6 = (g_playSystem_00802A38->field_00E4 - STField<int>(this,0x298)) *
          STField<int>(this,0x288);
  local_8 = (float)iVar6 / (float)local_14;
  if ((local_8 <= _DAT_0079ceb8) && (STField<char>(this,0x29c) == '\0'))
  goto cf_common_exit_00617221;
  if (local_8 <= _DAT_0079ceb4) {
    iVar3 = st::fn_00401CEE(this,(int *)&local_c,&local_10,&local_14);
    if (iVar3 < 0) {
      iVar5 = st::fn_004027D4(this,iVar6,param_1,param_2,param_3);
      if (0 < iVar5) {
        STField<undefined4>(this,0x256) = 2;
        STField<undefined4>(this,0x20c) = 4;
        STField<undefined2>(this,0x270) = 0xffff;
        iVar6 = STField<int>(this,0x1c);
        goto LAB_006171d9;
      }
    }
    else {
      iVar3 = st::fn_006ACF0D((int)STField<short>(this,0x260),(int)STField<short>(this,0x262),
                           (int)STField<short>(this,0x264),(int)STField<short>(this,0x25a),
                           (int)STField<short>(this,0x25c),(int)STField<short>(this,0x25e));
      iVar4 = st::fn_006ACF0D((int)STField<short>(this,0x260),(int)STField<short>(this,0x262),
                           (int)STField<short>(this,0x264),(int)local_c,local_10,local_14);
      if ((iVar3 == 0) || (iVar4 == 0)) goto cf_common_exit_00617221;
      if ((float)(((int)STField<short>(this,0x25a) - (int)STField<short>(this,0x260)) *
                  ((int)local_c - (int)STField<short>(this,0x260)) +
                  ((int)STField<short>(this,0x25c) - (int)STField<short>(this,0x262)) *
                  (local_10 - STField<short>(this,0x262)) +
                 ((int)STField<short>(this,0x25e) - (int)STField<short>(this,0x264)) *
                 (local_14 - STField<short>(this,0x264))) / (float)(iVar4 * iVar3) <=
          _DAT_0079ceb0) {
        iVar5 = 1;
        STField<undefined1>(this,0x29c) = 1;
        goto cf_common_exit_00617221;
      }
      iVar5 = st::fn_004027D4(this,iVar6,param_1,param_2,param_3);
      if (0 < iVar5) {
        STField<undefined4>(this,0x256) = 2;
        STField<undefined4>(this,0x20c) = 3;
        STField<uint>(this,0x294) = g_playSystem_00802A38->field_00E4;
        STField<uint>(this,0x298) = g_playSystem_00802A38->field_00E4;
        goto cf_common_exit_00617221;
      }
    }
  }
  else {
    iVar5 = st::fn_004027D4(this,iVar6,param_1,param_2,param_3);
    if (0 < iVar5) {
      STField<undefined4>(this,0x256) = 2;
      STField<undefined4>(this,0x20c) = 4;
      STField<undefined2>(this,0x270) = 0xffff;
      iVar6 = STField<int>(this,0x1c);
LAB_006171d9:
      uVar2 = iVar6 * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar2;
      STField<uint>(this,0x294) = (uVar2 >> 0x10) % 0xb + 10 + g_playSystem_00802A38->field_00E4;
      STField<uint>(this,0x298) = g_playSystem_00802A38->field_00E4;
      goto cf_common_exit_00617221;
    }
  }
  st::fn_0040463D(this);
  STField<undefined4>(this,0x20c) = 9;
cf_common_exit_00617221:
  fVar7 = (float10)fcos((float10)local_8);
  local_c = (float)(fVar7 * (float10)STField<int>(this,0x2c1));
  fsin((float10)local_8);
  lVar8 = st::fn_0072E288();
  *param_1 = (int)lVar8 + (int)STField<short>(this,0x272);
  sVar1 = STField<short>(this,0x274);
  lVar8 = st::fn_0072E288();
  *param_2 = (int)sVar1 + (int)lVar8;
  sVar1 = STField<short>(this,0x276);
  lVar8 = st::fn_0072E288();
  *param_3 = (int)sVar1 + (int)lVar8;
  return iVar5;
}

// 006173A0 FUN_006173a0
#line 4 "decomp/ST.exe/functions/006173A0/decomp.c"
undefined4 __thiscall st::fn_006173A0(void *this,int param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar1 = st::fn_006ACF0D((int)STField<short>(this,0x25a),(int)STField<short>(this,0x25c),
                       (int)STField<short>(this,0x25e),(int)STField<short>(this,0x260),
                       (int)STField<short>(this,0x262),(int)STField<short>(this,0x264));
  if (0 < iVar1) {
    iVar2 = (((int)STField<short>(this,0x25a) - (int)STField<short>(this,0x260)) * 10000) /
            iVar1;
    STField<int>(this,0x27c) = iVar2;
    iVar3 = (((int)STField<short>(this,0x25c) - (int)STField<short>(this,0x262)) * 10000) /
            iVar1;
    STField<int>(this,0x280) = iVar3;
    iVar1 = (((int)STField<short>(this,0x25e) - (int)STField<short>(this,0x264)) * 10000) /
            iVar1;
    STField<int>(this,0x284) = iVar1;
    *param_2 = (iVar2 * param_1) / 10000 + (int)STField<short>(this,0x25a);
    *param_3 = (iVar3 * param_1) / 10000 + (int)STField<short>(this,0x25c);
    *param_4 = (iVar1 * param_1) / 10000 + (int)STField<short>(this,0x25e);
    return 1;
  }
  return 0;
}

// 00617560 FUN_00617560
#line 4 "decomp/ST.exe/functions/00617560/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00617560 -> 00568DD0 @ 006175F6

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_00617560(void *this,int soundId)

{
  short sVar1;
  SoundPosition local_10;

  sVar1 = STField<short>(this,0x25a);
  if (sVar1 < 0) {
    local_10.x = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                        (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_10.x = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                             (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f));
  }
  sVar1 = STField<short>(this,0x25c);
  if (sVar1 < 0) {
    local_10.y = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                        (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_10.y = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                             (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f));
  }
  local_10.unknown = STField<int>(this,0x18);
  st::fn_00404BD8((SoundClassTy *)&g_sound,SOUND_MODE_3,nullptr,soundId,&local_10,0);
  return;
}

// 00617810 FUN_00617810
#line 4 "decomp/ST.exe/functions/00617810/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA9F4>00405C09

   [STObjectFactoryApplier] Central object factory for 0x0152 (ST_OBJECT_TYPE_0152).
   Evidence: registry[90] at 007CA9F0 stores type 0x0152 and executable pointer 00405C09; allocation
   size 110 has no unique current class-layout match */

void * __cdecl st::fn_00617810(void)

{
  JumpManagC *pJVar1;

  pJVar1 = (JumpManagC *)st::fn_006B04D0(0x6e);
  if (pJVar1 != nullptr) {
    pJVar1 = st::fn_00401C12(pJVar1);
    return pJVar1;
  }
  return nullptr;
}

// 00617880 FUN_00617880
#line 4 "decomp/ST.exe/functions/00617880/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 00617880 returns return of sub_006E60A0 @ 006178A6 */

int __fastcall st::fn_00617880(void *param_1)

{
  int iVar1;
  undefined4 local_24 [3];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;

  local_10 = STField<undefined4>(param_1,8);
  local_18 = 0;
  local_14 = 10;
  iVar1 = st::fn_006E60A0(param_1,local_24);
  return iVar1;
}

// 00617A20 FUN_00617a20
#line 4 "decomp/ST.exe/functions/00617A20/decomp.c"
undefined4 __thiscall st::fn_00617A20(void *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;

  iVar2 = STField<int>(this,0x5e);
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar3 = 0;
    if (0 < *(int *)(iVar2 + 0xc)) {
      bVar4 = *(int *)(iVar2 + 0xc) != 0;
      do {
        if (bVar4) {
          iVar2 = *(int *)(iVar2 + 8) * uVar3 + *(int *)(iVar2 + 0x1c);
        }
        else {
          iVar2 = 0;
        }
        if (*(int *)(iVar2 + 0x20) == param_1) {
          *(undefined4 *)(iVar2 + 0x18) = param_3;
          *(undefined4 *)(iVar2 + 0x1c) = param_2;
          uVar1 = 1;
        }
        iVar2 = STField<int>(this,0x5e);
        uVar3 = uVar3 + 1;
        bVar4 = uVar3 < *(uint *)(iVar2 + 0xc);
      } while ((int)uVar3 < (int)*(uint *)(iVar2 + 0xc));
    }
  }
  return uVar1;
}

// 00617AA0 FUN_00617aa0
#line 4 "decomp/ST.exe/functions/00617AA0/decomp.c"
void __thiscall st::fn_00617AA0(void *this,int param_1)

{
  void *pvVar1;
  DArrayTy *array;
  uint index;
  bool bVar2;

  array = STField<DArrayTy *>(this,0x5e);
  if (array != nullptr) {
    index = 0;
    if (0 < (int)array->count) {
      bVar2 = array->count != 0;
      do {
        if (bVar2) {
          pvVar1 = DArrayAt<void>(array, index);
        }
        else {
          pvVar1 = nullptr;
        }
        if (STField<int>(pvVar1,0x1c) == param_1) {
          st::fn_006B0C70(array,index);
        }
        array = STField<DArrayTy *>(this,0x5e);
        index = index + 1;
        bVar2 = index < array->count;
      } while ((int)index < (int)array->count);
    }
  }
  return;
}

// 00617B10 FUN_00617b10
#line 4 "decomp/ST.exe/functions/00617B10/decomp.c"
uint __thiscall
st::fn_00617B10(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  DArrayTy *pDVar1;
  uint uVar2;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  undefined4 local_28;
  undefined2 local_24;
  uint local_22;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined4 local_18;
  undefined4 local_14;
  int local_8;

  if (STField<int>(this,0x5e) == 0) {
    pDVar1 = st::fn_006AE290(nullptr,7,0x24,10);
    STField<DArrayTy *>(this,0x5e) = pDVar1;
    if (pDVar1 == nullptr) {
      return 0xffffffff;
    }
  }
  local_8 = STField<int>(this,0x5a) + 1;
  STField<int>(this,0x5a) = local_8;
  memset(&local_28, 0, 0x24); /* compiler bulk-zero initialization */
  local_14 = STField<undefined4>(this,0x50);
  local_24 = (undefined2)param_3;
  local_18 = STField<undefined4>(this,0x4c);
  STPiece<0,2>(local_28) = (undefined2)param_1;
  STPiece<2,2>(local_28) = (undefined2)param_2;
  local_22 = g_playSystem_00802A38->field_00E4;
  local_1e = (undefined2)local_28;
  local_1c = STPiece<2,2>(local_28);
  local_1a = local_24;
  uVar2 = st::fn_006AE1C0(STField<DArrayTy *>(this,0x5e),&local_28);
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  st::fn_00403A7B(param_1,param_2,param_3,param_4,param_5,param_6,
                     STField<undefined4>(this,0x20),STField<undefined4>(this,0x54),
                     CONCAT22(extraout_var,STField<undefined2>(this,0x58)),
                     STField<undefined4>(this,0x18),STField<undefined4>(this,0x5a),st::machine_word_boundary_cast<undefined4>(this));
  return uVar2;
}

// 00617C30 FUN_00617c30
#line 4 "decomp/ST.exe/functions/00617C30/decomp.c"
undefined4 __thiscall st::fn_00617C30(void *this,int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;

  iVar1 = STField<int>(this,0x5e);
  if (iVar1 != 0) {
    uVar2 = *(uint *)(iVar1 + 0xc);
    uVar4 = 0;
    if (0 < (int)uVar2) {
      bVar5 = uVar2 != 0;
      do {
        if (bVar5) {
          iVar3 = *(int *)(iVar1 + 8) * uVar4 + *(int *)(iVar1 + 0x1c);
        }
        else {
          iVar3 = 0;
        }
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if ((*(short *)(iVar3 + 10) == param_1) && (*(short *)(iVar3 + 0xc) == param_2)) {
          return 1;
        }
        uVar4 = uVar4 + 1;
        bVar5 = uVar4 < uVar2;
      } while ((int)uVar4 < (int)uVar2);
    }
  }
  return 1;
}

// 00617CA0 FUN_00617ca0
#line 4 "decomp/ST.exe/functions/00617CA0/decomp.c"
int __thiscall
st::fn_00617CA0(void *this,int *param_1,int *param_2,undefined4 *param_3,int *param_4,int *param_5,
            int *param_6,uint param_7)

{
  uint uVar2;
  int iVar3;
  uint uVar2_mg1;
  uint uVar1;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int local_14;
  int local_10;

  uVar4 = STField<uint>(this,0x30);
  local_14 = 0;
  if (uVar4 == 0) {
    return 0;
  }
  uVar5 = param_7 % uVar4;
  local_10 = 0;
  if (0 < (int)uVar4) {
    do {
      uVar2 = uVar5;
      if ((int)uVar4 < (int)uVar5) {
        uVar2 = uVar5 - uVar4;
      }
      iVar3 = (int)(uVar2 * 0x168) / (int)uVar4;
      uVar2_mg1 = st::fn_006AFF50(iVar3);
      uVar1 = st::fn_006AFF5B(iVar3);
      iVar3 = (int)(uVar2_mg1 * 0x28) / 10000 + STField<int>(this,0x40);
      iVar6 = (int)(uVar1 * 0x28) / 10000 + STField<int>(this,0x44);
      if ((((-1 < iVar3) && (iVar3 <= g_worldGrid.sizeX * 0xc9)) && (-1 < iVar6)) &&
         ((iVar6 <= g_worldGrid.sizeY * 0xc9 &&
          (local_14 = st::fn_004011F9(this,iVar3,iVar6), local_14 == 1)))) break;
      local_10 = local_10 + 1;
      uVar5 = uVar5 + 1;
      uVar4 = STField<uint>(this,0x30);
    } while (local_10 < (int)uVar4);
    if (local_14 != 0) {
      *param_1 = iVar3;
      *param_2 = iVar6;
      *param_3 = STField<undefined4>(this,0x48);
      *param_4 = (int)(uVar2_mg1 * 0x96) / 10000 + param_7 % 0x28 + STField<int>(this,0x40);
      *param_5 = (int)(uVar1 * 0x96) / 10000 + STField<int>(this,0x44) + param_7 % 0x28;
      *param_6 = STField<int>(this,0x48) + -0x32;
    }
  }
  return local_14;
}

// 00617EB0 FUN_00617eb0
#line 4 "decomp/ST.exe/functions/00617EB0/decomp.c"
undefined4 __fastcall st::fn_00617EB0(int param_1)

{
  undefined4 uVar1;

  uVar1 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0x5e) != 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x5e) + 0xc);
  }
  return uVar1;
}

// 00617ED0 FUN_00617ed0
#line 4 "decomp/ST.exe/functions/00617ED0/decomp.c"
void __thiscall st::fn_00617ED0(void *this,int param_1,int *param_2)

{
  STFishC *pSVar1;
  DArrayTy *pDVar2;
  int iVar3;
  undefined4 local_18;
  uint local_14;
  STFishC *local_10;
  short local_a;
  short local_8;
  short local_6;

  if (STField<int>(this,0x66) == 0) {
    pDVar2 = st::fn_006AE290(nullptr,10,8,10);
    STField<DArrayTy *>(this,0x66) = pDVar2;
  }
  iVar3 = STField<int>(this,0x66);
  if (iVar3 != 0) {
    if (*(int *)(iVar3 + 0xc) != 0) {
      *(undefined4 *)(iVar3 + 0xc) = 0;
    }
    if (0 < param_1) {
      do {
        iVar3 = st::fn_006E62D0
                          (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)*param_2,
                           (int *)&local_10);
        pSVar1 = local_10;
        if (iVar3 != -4) {
          st::fn_004018C5(local_10,&local_a,&local_8,&local_6);
          local_18 = pSVar1->field_0018;
          local_14 = (uint)*(ushort *)&pSVar1->field_0x32;
          st::fn_006AE1C0(STField<DArrayTy *>(this,0x66),&local_18);
        }
        param_2 = param_2 + 1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
  }
  return;
}

// 00618240 FUN_00618240
#line 4 "decomp/ST.exe/functions/00618240/decomp.c"
undefined4 __thiscall
st::fn_00618240(void *this,int param_1,int param_2,int param_3,undefined4 *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar8;
  uint uVar5;
  DArrayTy *pDVar6;
  short sVar7;
  int iVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  short sVar13;
  byte *puVar14;
  int iVar15;
  STWorldObject *this_00;
  int *piVar16;
  bool bVar17;
  short local_84 [2];
  int local_80;
  int *local_6c;
  int local_64;
  undefined1 *local_60;
  int local_5c;
  int local_58 [2];
  short local_50 [2];
  undefined4 local_4c;
  undefined4 local_48;
  uint local_44;
  int local_38;
  int local_34;
  int local_2c;
  int local_24;
  short local_20 [2];
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  puStack_c = st::pointer_boundary_cast<undefined *>(&DAT_0079cec0);
  puStack_10 = st::pointer_boundary_cast<undefined1 *>(&st_image_0072D964);
  local_14 = ExceptionList;
  local_1c = st::pointer_boundary_cast<undefined1 *>(&stack0xffffff58);
  piVar16 = (int *)&stack0xffffff58;
  local_4c = 0;
  if (param_4 == nullptr) {
    local_4c = 0;
  }
  else {
    iVar15 = STBiasedDiv16(param_1, 0xc9); /* exact signed 16-bit grid-index division */
    iVar9 = STBiasedDiv16(param_2, 0xc9); /* exact signed 16-bit grid-index division */
    iVar4 = STBiasedDiv16(param_3, 200); /* exact signed 16-bit grid-index division */
    if (((((-1 < iVar15) && (-1 < iVar9)) && (-1 < iVar4)) &&
        ((iVar12 = (int)g_worldGrid.sizeX, iVar15 < iVar12 &&
         (iVar11 = (int)g_worldGrid.sizeY, iVar9 < iVar11)))) && (iVar4 < 5)) {
      local_2c = iVar9 + -5;
      if (local_2c < 0) {
        local_2c = 0;
      }
      iVar4 = local_2c;
      local_24 = iVar15 + -5;
      if (local_24 < 0) {
        local_24 = 0;
      }
      local_64 = iVar9 + 6;
      if (iVar11 < iVar9 + 6) {
        local_64 = iVar11;
      }
      local_5c = iVar15 + 6;
      if (iVar12 < iVar15 + 6) {
        local_5c = iVar12;
      }
      iVar15 = 0;
      local_8 = 0;
      ExceptionList = &local_14;
      st::fn_0072DA40();
      local_60 = st::pointer_boundary_cast<undefined1 *>(&stack0xffffff58);
      local_1c = st::pointer_boundary_cast<undefined1 *>(&stack0xffffff58);
      st::fn_0072DA40();
      local_8 = 0xffffffff;
      local_34 = 0;
      local_6c = (int *)&stack0xffffff58;
      local_1c = st::pointer_boundary_cast<undefined1 *>(&stack0xffffff58);
      do {
        iVar9 = local_34;
        iVar12 = iVar4;
        local_38 = iVar4;
        if (iVar4 < local_64) {
          do {
            local_80 = local_24;
            iVar12 = local_24;
            local_38 = iVar4;
            if (local_24 < local_5c) {
              do {
                sVar13 = (short)iVar12;
                if (((sVar13 < 0) || (g_worldGrid.sizeX <= sVar13)) ||
                   ((sVar7 = (short)iVar4, sVar7 < 0 ||
                    (((g_worldGrid.sizeY <= sVar7 || (sVar10 = (short)iVar9, sVar10 < 0)) ||
                     (g_worldGrid.sizeZ <= sVar10)))))) {
                  this_00 = nullptr;
                }
                else {
                  this_00 = STGridAt3D(g_worldGrid, sVar13, sVar7, sVar10).objects[0];
                  iVar9 = local_34;
                }
                if (((this_00 != nullptr) &&
                    (local_80 = iVar12, iVar11 = (*this_00->vtable[5].slots_00_28[0])(),
                    iVar4 = local_38, iVar9 = local_34, iVar11 != 0)) &&
                   ((this_00[1].vtable < (STWorldObjectVTable *)0x8 &&
                    ((g_playSystem_00802A38 == nullptr ||
                     (g_bulkInitializedRecords_008087C7[(int)this_00[1].vtable].field_0022 < 8))))))
                {
                  bVar1 = *(byte *)&this_00[1].vtable;
                  bVar2 = STField<byte>(this,0x20);
                  if (DAT_00808a8f == '\0') {
                    if (bVar1 == bVar2) {
LAB_0061856a:
                      iVar11 = 0;
                    }
                    else {
                      bVar3 = g_playerRelationMatrix[bVar1][bVar2];
                      if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
                        iVar11 = -2;
                      }
                      else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
                        iVar11 = -1;
                      }
                      else if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 1)) {
                        iVar11 = 1;
                      }
                      else {
                        if ((bVar3 != 1) || (g_playerRelationMatrix[bVar2][bVar1] != 1))
                        goto LAB_0061856a;
                        iVar11 = 2;
                      }
                    }
                    bVar17 = iVar11 < 0;
                  }
                  else {
                    bVar17 = g_bulkInitializedRecords_008087C7[bVar2].field_0023 !=
                             g_bulkInitializedRecords_008087C7[bVar1].field_0023;
                    iVar12 = local_80;
                  }
                  if ((bVar17) &&
                     (iVar11 = (*this_00->vtable[5].slots_00_28[2])(), iVar4 = local_38,
                     iVar9 = local_34, iVar11 != 0)) {
                    st::fn_004031E3(this_00,(uint *)local_50,(int *)local_84,local_20);
                    puVar14 = (byte *)(local_60 + iVar15 * 0x2c);
                    *puVar14 = this_00[1].vtable;
                    iVar9 = this_00->GetObjectTypeId();
                    puVar14[1] = iVar9;
                    STField<undefined4>(puVar14,0x26) = *(undefined4 *)&this_00->field_0x18;
                    STField<undefined2>(puVar14,0x2a) = *(undefined2 *)&this_00[1].field_0xe;
                    STField<STWorldObject *>(puVar14,0x1a) = this_00;
                    *(undefined2 *)(puVar14 + 5) = (undefined2)local_80;
                    STField<undefined2>(puVar14,0x16) = (undefined2)local_38;
                    *(undefined2 *)(puVar14 + 6) = (undefined2)local_34;
                    puVar14[2] = (int)local_50[0];
                    puVar14[3] = (int)local_84[0];
                    puVar14[4] = (int)local_20[0];
                    iVar8 = st::fn_006ACED8(param_1,param_2,(int)local_50[0],(int)local_84[0]);
                    STField<int>(puVar14,0x1e) = iVar8;
                    iVar15 = iVar15 + 1;
                    iVar4 = local_38;
                    iVar9 = local_34;
                    iVar12 = local_80;
                  }
                }
                iVar12 = iVar12 + 1;
                local_80 = iVar12;
              } while (iVar12 < local_5c);
            }
            iVar4 = iVar4 + 1;
            iVar12 = local_2c;
            piVar16 = local_6c;
            local_38 = iVar4;
          } while (iVar4 < local_64);
        }
        local_34 = iVar9 + 1;
        iVar4 = iVar12;
      } while (local_34 < 5);
      if (0 < iVar15) {
        iVar9 = 0;
        if (0 < iVar15) {
          do {
            piVar16[iVar9] = iVar9;
            iVar9 = iVar9 + 1;
          } while (iVar9 < iVar15);
        }
        st::fn_00403698((int)local_60,piVar16,iVar15);
        local_58[0] = 1000;
        iVar9 = 0;
        if (0 < iVar15) {
          do {
            piVar16 = local_6c;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            uVar5 = st::fn_004056F0(this,*(int *)(local_60 + local_6c[iVar9] * 0x2c + 0x26),
                                       local_58);
            if ((int)uVar5 < 0) {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              local_48 = *(undefined4 *)(local_60 + piVar16[iVar9] * 0x2c + 0x26);
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              local_44 = (uint)*(ushort *)(local_60 + piVar16[iVar9] * 0x2c + 0x2a);
              if (STField<int>(this,0x62) == 0) {
                pDVar6 = st::fn_006AE290(nullptr,7,8,10);
                STField<DArrayTy *>(this,0x62) = pDVar6;
              }
              iVar4 = st::fn_006AE1C0(STField<DArrayTy *>(this,0x62),&local_48);
              local_58[0] = 0;
              if (-1 < iVar4) goto LAB_0061871c;
            }
            else {
LAB_0061871c:
              if (local_58[0] < 3) {
                puVar14 = (byte *)(local_60 + piVar16[iVar9] * 0x2c);
                memmove(param_4, puVar14, 0x2c); /* compiler REP MOVS byte copy */
                ExceptionList = local_14;
                return 1;
              }
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < iVar15);
        }
      }
    }
  }
  ExceptionList = local_14;
  return local_4c;
}

// 00618900 FUN_00618900
#line 4 "decomp/ST.exe/functions/00618900/decomp.c"
undefined4 __thiscall st::fn_00618900(void *this,int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint index;
  bool bVar4;

  iVar1 = STField<int>(this,0x62);
  if (((iVar1 != 0) && (uVar2 = *(uint *)(iVar1 + 0xc), 0 < (int)uVar2)) &&
     (index = 0, 0 < (int)uVar2)) {
    bVar4 = uVar2 != 0;
    while (((!bVar4 ||
            (piVar3 = (int *)(*(int *)(iVar1 + 8) * index + *(int *)(iVar1 + 0x1c)),
            piVar3 == nullptr)) || (*piVar3 != param_1))) {
      index = index + 1;
      bVar4 = index < uVar2;
      if ((int)uVar2 <= (int)index) {
        return 0;
      }
    }
    if (param_2 != 0) {
      STField<short>(piVar3,6) = STField<short>(piVar3,6) + 1;
      return 1;
    }
    STField<short>(piVar3,6) = STField<short>(piVar3,6) + -1;
    if (STField<short>(piVar3,6) < 1) {
      st::fn_006B0C70(STField<DArrayTy *>(this,0x62),index);
    }
    return 1;
  }
  return 0;
}

// 006189C0 FUN_006189c0
#line 1 "decomp/ST.exe/functions/006189C0/decomp.c"

void st::fn_006189C0(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int local_8;

  iVar3 = param_1;
  local_8 = 0;
  piVar5 = param_2;
  if (0 < param_3) {
    do {
      iVar1 = *(int *)(iVar3 + 0x1e + *piVar5 * 0x2c);
      piVar4 = param_2;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = local_8;
      if (0 < local_8) {
        do {
          iVar2 = *piVar4;
          if (iVar1 < *(int *)(iVar3 + 0x1e + iVar2 * 0x2c)) {
            *piVar4 = *piVar5;
            *piVar5 = iVar2;
          }
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = param_1 + -1;
          piVar4 = piVar4 + 1;
        } while (param_1 != 0);
      }
      local_8 = local_8 + 1;
      piVar5 = piVar5 + 1;
    } while (local_8 < param_3);
  }
  return;
}

// 00618A50 FUN_00618a50
#line 4 "decomp/ST.exe/functions/00618A50/decomp.c"
uint __thiscall st::fn_00618A50(void *this,int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  bool bVar6;

  iVar1 = STField<int>(this,0x62);
  uVar3 = 0xffffffff;
  uVar5 = uVar3;
  if (((iVar1 != 0) && (uVar2 = *(uint *)(iVar1 + 0xc), 0 < (int)uVar2)) && (0 < (int)uVar2)) {
    bVar6 = uVar2 != 0;
    uVar5 = 0;
    while (((!bVar6 ||
            (piVar4 = (int *)(*(int *)(iVar1 + 8) * uVar5 + *(int *)(iVar1 + 0x1c)),
            piVar4 == nullptr)) || (*piVar4 != param_1))) {
      uVar5 = uVar5 + 1;
      bVar6 = uVar5 < uVar2;
      if ((int)uVar2 <= (int)uVar5) {
        return uVar3;
      }
    }
    *param_2 = (int)STField<short>(piVar4,6);
  }
  return uVar5;
}

// 00618B40 FUN_00618b40
#line 4 "decomp/ST.exe/functions/00618B40/decomp.c"
void __thiscall st::fn_00618B40(void *this,undefined4 param_1,ushort param_2)

{
  void *this_00;
  int iVar1;
  uint uVar2;
  bool bVar3;

  iVar1 = STField<int>(this,0x5e);
  if (iVar1 == 0) {
    STField<ushort>(this,0x58) = param_2;
    STField<undefined4>(this,0x20) = param_1;
    return;
  }
  uVar2 = 0;
  if (0 < *(int *)(iVar1 + 0xc)) {
    bVar3 = *(int *)(iVar1 + 0xc) != 0;
    do {
      if (((bVar3) && (iVar1 = *(int *)(iVar1 + 8) * uVar2 + *(int *)(iVar1 + 0x1c), iVar1 != 0)) &&
         (this_00 = *(void **)(iVar1 + 0x18), this_00 != nullptr)) {
        st::fn_00402D51(this_00,param_1,param_2);
      }
      iVar1 = STField<int>(this,0x5e);
      uVar2 = uVar2 + 1;
      bVar3 = uVar2 < *(uint *)(iVar1 + 0xc);
    } while ((int)uVar2 < (int)*(uint *)(iVar1 + 0xc));
    STField<ushort>(this,0x58) = param_2;
    STField<undefined4>(this,0x20) = param_1;
    return;
  }
  STField<ushort>(this,0x58) = param_2;
  STField<undefined4>(this,0x20) = param_1;
  return;
}

// 00619140 CreateSTJumpMine
#line 4 "decomp/ST.exe/functions/00619140/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA94C>004023E2

   [STObjectFactoryApplier] Central object factory for 0x0136 (ST_OBJECT_ST_JUMP_MINE).
   Evidence: registry[69] at 007CA948 stores type 0x0136 and executable pointer 004023E2; allocation
   size 337 uniquely matches /STJumpMineC */

STJumpMineC * __cdecl st::fn_00619140(void)

{
  STJumpMineC *pSVar1;

  pSVar1 = (STJumpMineC *)st::fn_006B04D0(0x151);
  if (pSVar1 != nullptr) {
    pSVar1 = st::fn_00401CAD(pSVar1);
    return pSVar1;
  }
  return nullptr;
}

// 00619320 FUN_00619320
#line 4 "decomp/ST.exe/functions/00619320/decomp.c"
void __fastcall st::fn_00619320(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (-1 < (int)*(uint *)(param_1 + 0x97)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_006E8BA0(g_sT3DSMAPContext_00807598,*(uint *)(param_1 + 0x97));
  }
  return;
}

// 006193A0 FUN_006193a0
#line 4 "decomp/ST.exe/functions/006193A0/decomp.c"
undefined4 __thiscall st::fn_006193A0(void *this,undefined4 *param_1)

{
  byte *puVar2;

  puVar2 = (byte *)((int)this + 0x4d);
  memmove(puVar2, param_1, 0x104); /* compiler REP MOVS byte copy */
  STField<undefined4>(this,0x97) = 0xffffffff;
  return 0x104;
}

// 00619540 FUN_00619540
#line 4 "decomp/ST.exe/functions/00619540/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 00619540 parameter used as this of
   SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00424E10::FUN_00424e10 @ 006195AB */

int st::fn_00619540(AnonReceiver_004248D0 *param_1,undefined4 param_2,int *param_3,
                AnonShape_00619540_3F564CD2 *param_4)

{
  int iVar2;
  int iVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar2 = *(int *)(param_4->field_004E + 0x29);
  if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + param_4->field_005E * 4), iVar2 != 0)) {
    iVar1 = st::fn_00403E1D
                      (param_1,iVar2,
                       (float)param_4->field_0052 * _DAT_007904f8 * _DAT_007904f0 - _DAT_007907a8,
                       (float)param_4->field_0056 * _DAT_007904f8 * _DAT_007904f0 - _DAT_007907a8,
                       (float)param_4->field_005A * _DAT_007904f8 * _DAT_007904f0,0x20,0x20,param_3);
    return iVar1;
  }
  return -4;
}

// 0061BDB0 FUN_0061bdb0
#line 4 "decomp/ST.exe/functions/0061BDB0/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_0061BDB0_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3 */

undefined4 __thiscall
st::fn_0061BDB0(void *this,Global_sub_0061BDB0_param_1Enum param_1,int param_2,int param_3,uint param_4
            )

{
  short sVar1;
  int local_EAX_66;
  int iVar5;
  int iVar2;
  uint uVar4;
  uint uVar3;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined4 local_8;

  uVar4 = param_4;
  iVar6 = param_3;
  iVar7 = param_2;
  local_8 = 0;
  switch(param_1) {
  case CASE_0:
    local_EAX_66 = st::fn_006ACF0D(STField<int>(this,0x9f),STField<int>(this,0xa3),
                                STField<int>(this,0xa7),param_2,param_3,param_4);
    STField<undefined4>(this,0x10f) = 3;
    if (local_EAX_66 < 1) {
      return 2;
    }
    STField<int>(this,0xf7) = local_EAX_66;
    STField<int>(this,0x103) = ((param_2 - STField<int>(this,0x9f)) * 10000) / local_EAX_66;
    STField<int>(this,0xd7) = STField<int>(this,0xa7);
    STField<int>(this,0x107) = ((iVar6 - STField<int>(this,0xa3)) * 10000) / local_EAX_66;
    STField<int>(this,0x10b) = (int)((uVar4 - STField<int>(this,0xa7)) * 10000) / local_EAX_66
    ;
    STField<undefined4>(this,0xcf) = STField<undefined4>(this,0x9f);
    STField<undefined4>(this,0xd3) = STField<undefined4>(this,0xa3);
    STField<uint>(this,0x11b) = g_playSystem_00802A38->field_00E4;
    return 1;
  case CASE_1:
    if ((STField<char>(this,0x14b) != '\0') && (STField<void *>(this,0x7d) != nullptr)) {
      st::fn_00405C59(STField<void *>(this,0x7d),STField<int>(this,0x145),0);
      STField<undefined1>(this,0x14b) = 0;
    }
    iVar7 = STField<int>(this,0xa7);
    STField<undefined4>(this,0x10b) = 10000;
    STField<undefined4>(this,0x107) = 0;
    STField<undefined4>(this,0x103) = 0;
    STField<undefined4>(this,0x113) = 0;
    STField<undefined4>(this,0x117) = 0xfffff18c;
    STField<int>(this,0xcf) = STField<int>(this,0x9f);
    STField<int>(this,0xd3) = STField<int>(this,0xa3);
    iVar7 = STBiasedDiv16(iVar7, 200); /* exact signed 16-bit grid-index division */
    st::fn_006E3310
              (g_sT3DSMAPContext_00807598,
               (STField<int>(this,0x9f) * g_sT3DSMAPContext_00807598->field_0380) / 0xc9,
               (int *)((STField<int>(this,0xa3) * g_sT3DSMAPContext_00807598->field_0380) / 0xc9)
               ,iVar7,(int *)&param_1);
    lVar8 = st::fn_0072E288();
    if (STField<int>(this,0xd7) < (int)(short)lVar8) {
      STField<int>(this,0xd7) = (int)(short)lVar8;
    }
    if ((((-1 < STField<int>(this,0x9f)) && (-1 < STField<int>(this,0xa3))) &&
        (STField<int>(this,0x9f) < g_worldGrid.sizeX * 0xc9)) &&
       (STField<int>(this,0xa3) < g_worldGrid.sizeY * 0xc9)) {
      STField<undefined4>(this,0xd7) = STField<undefined4>(this,0xa7);
      goto LAB_0061c0e4;
    }
    break;
  case CASE_2:
    iVar5 = st::fn_006ACF0D(STField<int>(this,0x9f),STField<int>(this,0xa3),
                         STField<int>(this,0xa7),param_2,param_3,param_4);
    STField<undefined4>(this,0x10f) = 0;
    STField<undefined4>(this,0x117) = 0xffffea52;
    STField<undefined4>(this,0x113) = 0;
    STField<undefined4>(this,0xf3) = 0;
    if (iVar5 < 1) {
      return 2;
    }
    STField<int>(this,0xf7) = iVar5;
    STField<int>(this,0x103) = ((param_2 - STField<int>(this,0x9f)) * 10000) / iVar5;
    STField<int>(this,0xd7) = STField<int>(this,0xa7);
    STField<int>(this,0x107) = ((iVar6 - STField<int>(this,0xa3)) * 10000) / iVar5;
    STField<int>(this,0x10b) = (int)((uVar4 - STField<int>(this,0xa7)) * 10000) / iVar5;
    STField<undefined4>(this,0xcf) = STField<undefined4>(this,0x9f);
    STField<undefined4>(this,0xd3) = STField<undefined4>(this,0xa3);
LAB_0061c0e4:
    STField<uint>(this,0x11b) = g_playSystem_00802A38->field_00E4;
    return 1;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  case CASE_3:
    param_3 = st::fn_006ACF0D(STField<int>(this,0x9f),STField<int>(this,0xa3),
                           STField<int>(this,0xa7),param_2,param_3,param_4);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = st::fn_006ACED8(STField<int>(this,0x9f),STField<int>(this,0xa3),iVar7,iVar6);
    STField<int>(this,0x103) = ((iVar7 - STField<int>(this,0x9f)) * 10000) / param_3;
    iVar7 = param_4 - STField<int>(this,0xa7);
    STField<int>(this,0x107) = ((iVar6 - STField<int>(this,0xa3)) * 10000) / param_3;
    STField<int>(this,0x10b) = (iVar7 * 10000) / param_3;
    if (param_3 != 0) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      if (param_2 == 0) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_2 = 1;
      }
      iVar6 = param_2;
      if (iVar7 < 1) {
        uVar4 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
        STField<uint>(this,0x1c) = uVar4;
        iVar6 = (uVar4 >> 0x10 & 7) + 0x11;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_3 = STField<int>(this,0x117) / 100;
        STField<int>(this,0x113) = iVar6;
        uVar4 = (param_3 * iVar7 + iVar6 * iVar6 * 0x32) * 2;
        if ((int)uVar4 < 1) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_4 = 0;
        }
        else {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_4 = st::fn_006C8334(uVar4);
        }
        iVar7 = STField<int>(this,0x113);
        iVar6 = (int)(param_4 + iVar7 * -1000) / param_3;
        if (0 < iVar6) {
          STField<int>(this,0x113) = iVar7 * 10000;
          STField<int>(this,0x10f) = (param_2 * 1000) / iVar6;
          return 1;
        }
        iVar2 = -((int)(iVar7 * 1000 + param_4) / param_3);
        if (0 < iVar2) {
          STField<int>(this,0x113) = iVar7 * 10000;
          goto LAB_0061c3e9;
        }
      }
      else {
        if (iVar7 < 0x321) {
          if (iVar7 < 0x191) {
            if (iVar7 < 0xc9) {
              uVar4 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
              STField<uint>(this,0x1c) = uVar4;
              iVar2 = (uVar4 >> 0x10 & 7) + 7;
            }
            else {
              uVar4 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
              STField<uint>(this,0x1c) = uVar4;
              iVar2 = (uVar4 >> 0x10 & 7) + 0x19;
            }
          }
          else {
            uVar4 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
            STField<uint>(this,0x1c) = uVar4;
            iVar2 = (uVar4 >> 0x10 & 7) + 0x23;
          }
        }
        else {
          uVar4 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
          STField<uint>(this,0x1c) = uVar4;
          iVar2 = (uVar4 >> 0x10 & 7) + 0x2d;
        }
        STField<int>(this,0x113) = iVar2;
        iVar2 = STField<int>(this,0x117) / 100;
        uVar4 = (iVar2 * iVar7 + STField<int>(this,0x113) * STField<int>(this,0x113) * 0x32) *
                2;
        if ((int)uVar4 < 1) {
          uVar3 = 0;
        }
        else {
          uVar3 = st::fn_006C8334(uVar4);
        }
        iVar2 = (int)(uVar3 + STField<int>(this,0x113) * -1000) / iVar2;
        if (0 < iVar2) {
          STField<int>(this,0x113) = STField<int>(this,0x113) * 10000;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_2 = iVar6;
LAB_0061c3e9:
          STField<int>(this,0x10f) = (param_2 * 1000) / iVar2;
          return 1;
        }
      }
      STField<undefined4>(this,0x10f) = 100;
    }
    local_8 = 1;
  }
  return local_8;
}

// 0061C5F0 FUN_0061c5f0
#line 4 "decomp/ST.exe/functions/0061C5F0/decomp.c"
undefined4 __thiscall st::fn_0061C5F0(void *this,undefined4 *param_1)

{
  short sVar1;
  STAllPlayersC_GetObjPtr_param_3Enum SVar2;
  STGameObjC *this_00;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  short local_18;
  short local_10;
  short local_e;
  short local_c;
  short local_a;
  short local_8;
  short local_6;

  *param_1 = 0;
  if ((STField<char>(this,0x14b) != '\0') && (STField<short>(this,0x149) != -1)) {
    SVar2 = st::fn_00404052(STField<Global_sub_00601DB0_param_1Enum>(this,0x123));
    this_00 = st::fn_004028BA
                        (g_allPlayers_007FA174,STField<char>(this,0x11f),
                         STField<ushort>(this,0x149),SVar2);
    if (this_00 != nullptr) {
      STField<STGameObjC *>(this,0x139) = this_00;
      st::fn_004018C5((STFishC *)this_00,&local_a,&local_e,&local_10);
      iVar5 = STField<int>(this,0x127);
      iVar5 = STBiasedDiv16(iVar5, 0xc9); /* exact signed 16-bit grid-index division */
      iVar6 = STField<int>(this,299);
      iVar6 = STBiasedDiv16(iVar6, 0xc9); /* exact signed 16-bit grid-index division */
      iVar3 = STField<int>(this,0x12f);
      local_18 = STBiasedDiv16(iVar3, 200); /* exact signed 16-bit grid-index division */
      iVar3 = (-(uint)(STField<int>(this,0x7d) != 0) & 4) + 1;
      if ((((local_a - iVar3 <= iVar5) && (iVar5 < local_a + iVar3)) && (local_e - iVar3 <= iVar6))
         && (iVar6 < local_e + iVar3)) {
        st::fn_004031E3(this_00,(uint *)&local_8,(int *)&local_6,&local_c);
        st::fn_006ACED8(STField<int>(this,0x9f),STField<int>(this,0xa3),(int)local_8,(int)local_6
                    );
        STField<int>(this,0x127) = (int)local_8;
        STField<int>(this,0x12f) = (int)local_c;
        STField<int>(this,299) = (int)local_6;
        if ((iVar5 != STField<short>(this,0x133)) || (iVar6 != STField<short>(this,0x135))) {
          *param_1 = 1;
        }
        STField<short>(this,0x133) = (short)iVar5;
        STField<short>(this,0x135) = (short)iVar6;
        STField<short>(this,0x137) = local_18;
        STField<undefined4>(this,0x145) = this_00->field_0018;
        STField<undefined2>(this,0x149) = this_00->field_0032;
        uVar4 = (*this_00->vtable->vfunc_2C)();
        STField<undefined4>(this,0x123) = uVar4;
        iVar5 = st::fn_006ACF0D(STField<int>(this,0x9f),STField<int>(this,0xa3),
                             STField<int>(this,0xa7),(int)local_8,(int)local_6,(int)local_c);
        STField<int>(this,0x13d) = iVar5;
        iVar5 = st::fn_006ACED8(STField<int>(this,0x9f),STField<int>(this,0xa3),(int)local_8,
                             (int)local_6);
        STField<int>(this,0x141) = iVar5;
        return 1;
      }
      return 0;
    }
  }
  return 0;
}

// 0061C910 FUN_0061c910
#line 4 "decomp/ST.exe/functions/0061C910/decomp.c"
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00619C70 -> 0061C910 @ 0061A76B; /STJumpMineC+0x93

   [STPrototypeApplier] Propagated return.
   Evidence: 0061C910 returns stored into /STJumpMineC+0x93 @ 0061A773

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: 0061C910 -> 0061B340 @ 0061C9DA

   [STPrototypeApplier] Propagated parameter 7.
   Evidence: 0061C910 -> 0061B340 @ 0061C9DA

   [STPrototypeApplier] Propagated parameter 8.
   Evidence: 0061C910 -> 0061B340 @ 0061C9DA */

STJumpMineC_field_0093State __thiscall
st::fn_0061C910(void *this,int param_1,STJumpMineC_field_0093State param_2,undefined4 param_3,
            undefined4 param_4,int param_5,int param_6,int param_7,int param_8)

{
  STJumpMineC_field_0093State SVar1;
  int iVar2;
  int iVar3;
  undefined4 local_8;

  iVar2 = param_7;
  SVar1 = param_2;
  local_8 = 0;
  if (param_1 == 1) {
    iVar3 = st::fn_004046AB
                      (st::pointer_boundary_cast<STJumpMineC *>(this),(short)param_3,(short)param_4,param_5,param_6,param_7,param_8,&param_7);
    if (iVar3 != 0) {
      STField<undefined4>(this,0x9f) = STField<undefined4>(this,0x40);
      STField<undefined4>(this,0xa3) = STField<undefined4>(this,0x44);
      STField<int>(this,0xa7) = param_7;
      STField<undefined4>(this,0x34) = 0;
      return CASE_1;
    }
    STField<int>(this,0x9f) = param_6;
    STField<int>(this,0xa3) = iVar2;
    STField<int>(this,0xa7) = param_7;
    STField<undefined4>(this,0x34) = 0;
  }
  else if ((1 < param_1) && (param_1 < 4)) {
    if (STField<int *>(this,0x34) != nullptr) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar2 = (**(code **)(*STField<int *>(this,0x34) + 0xe0))
                        (STField<undefined4>(this,0x38),(byte *)((int)&param_2 + 2),
                         (int)&param_1 + 2,(int)&param_8 + 2,&local_8);
      if (iVar2 == 0) {
        STField<int>(this,0x44) = (int)STPiece<2,2>(param_1);
        STField<int>(this,0xa3) = (int)STPiece<2,2>(param_1);
        STField<int>(this,0x40) = (int)(short)STPiece<2,2>(param_2);
        STField<int>(this,0x48) = STPiece<2,2>(param_8) + 0x28;
        STField<undefined4>(this,0x3c) = local_8;
        STField<int>(this,0x9f) = (int)(short)STPiece<2,2>(param_2);
        STField<int>(this,0xa7) = STPiece<2,2>(param_8) + 0x28;
        iVar2 = st::fn_004056EB(st::pointer_boundary_cast<STJumpMineC *>(this),2);
        return CASE_6 - (iVar2 != 0);
      }
    }
    return CASE_6;
  }
  return SVar1;
}

// 0061CA90 FUN_0061ca90
#line 4 "decomp/ST.exe/functions/0061CA90/decomp.c"
undefined4 __thiscall st::fn_0061CA90(void *this,int param_1,int param_2,int param_3,int *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined2 uVar4;
  STWorldObject *this_00;
  undefined4 uVar5;
  STWorldObjectVTable *pSVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  short sVar9;
  int iVar10;
  int iVar12;
  short sVar11;
  int iVar13;
  short sVar14;
  int iVar15;
  short sVar15;
  int iVar16;
  int *piVar17;
  int iVar18;
  bool bVar20;
  int local_800 [495];
  void *local_44;
  byte local_40;
  undefined3 uStack_3f;
  int local_3c;
  undefined4 local_38;
  int local_34;
  byte local_30;
  undefined3 uStack_2f;
  int local_2c;
  int local_28;
  short local_22;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  short local_6;

  local_44 = this;
  local_38 = 0;
  if (param_4 == nullptr) {
    return 0;
  }
  iVar16 = STBiasedDiv16(param_1, 0xc9); /* exact signed 16-bit grid-index division */
  iVar13 = STBiasedDiv16(param_2, 0xc9); /* exact signed 16-bit grid-index division */
  iVar10 = STBiasedDiv16(param_3, 200); /* exact signed 16-bit grid-index division */
  if (((((-1 < iVar16) && (-1 < iVar13)) && (-1 < iVar10)) &&
      ((iVar18 = (int)g_worldGrid.sizeX, iVar16 < iVar18 &&
       (iVar15 = (int)g_worldGrid.sizeY, iVar13 < iVar15)))) && (iVar10 < 5)) {
    local_20 = iVar13 + -1;
    if (iVar13 + -1 < 0) {
      local_20 = 0;
    }
    local_18 = iVar16 + -1;
    if (iVar16 + -1 < 0) {
      local_18 = 0;
    }
    local_2c = iVar13 + 2;
    if (iVar15 < iVar13 + 2) {
      local_2c = iVar15;
    }
    local_1c = iVar16 + 2;
    if (iVar18 < iVar16 + 2) {
      local_1c = iVar18;
    }
    iVar13 = 0;
    local_c = 0;
    local_34 = 0;
    local_3c = 0x18894;
    local_14 = 0;
    iVar16 = local_18;
    iVar10 = local_2c;
    sVar15 = g_worldGrid.sizeX;
    do {
      local_10 = local_20;
      local_28 = iVar16;
      iVar18 = local_14;
      if (local_20 < iVar10) {
        do {
          iVar16 = local_28;
          if (local_28 < local_1c) {
            piVar17 = local_800 + iVar13 * 0xb;
            do {
              sVar9 = (short)local_28;
              if ((((-1 < sVar9) && (sVar9 < sVar15)) &&
                  ((sVar11 = (short)local_10, -1 < sVar11 &&
                   (((sVar11 < g_worldGrid.sizeY && (sVar14 = (short)iVar18, -1 < sVar14)) &&
                    (sVar14 < g_worldGrid.sizeZ)))))) &&
                 (((this_00 = g_worldGrid.cells
                              [(int)sVar11 * (int)sVar15 +
                               (int)sVar14 * (int)g_worldGrid.planeStride + (int)sVar9].objects[0],
                   this_00 != nullptr &&
                   (iVar16 = (*this_00->vtable[5].slots_00_28[0])(), iVar16 != 0)) &&
                  ((this_00[1].vtable < (STWorldObjectVTable *)0x8 &&
                   ((g_playSystem_00802A38 == nullptr ||
                    (g_bulkInitializedRecords_008087C7[(int)this_00[1].vtable].field_0022 < 8)))))))
                 ) {
                bVar1 = *(byte *)&this_00[1].vtable;
                bVar2 = STField<byte>(local_44,0x51);
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                auto _local_30 = CONCAT31(uStack_2f,bVar1);
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                auto _local_40 = CONCAT31(uStack_3f,bVar2);
                if (DAT_00808a8f == '\0') {
                  if (bVar1 == bVar2) {
LAB_0061cd61:
                    iVar16 = 0;
                  }
                  else {
                    bVar3 = g_playerRelationMatrix[bVar1][bVar2];
                    if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
                      iVar16 = -2;
                    }
                    else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
                      iVar16 = -1;
                    }
                    else if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 1)) {
                      iVar16 = 1;
                    }
                    else {
                      if ((bVar3 != 1) || (g_playerRelationMatrix[bVar2][bVar1] != 1))
                      goto LAB_0061cd61;
                      iVar16 = 2;
                    }
                  }
                  bVar20 = iVar16 < 0;
                }
                else {
                  bVar20 = g_bulkInitializedRecords_008087C7[bVar2].field_0023 !=
                           g_bulkInitializedRecords_008087C7[bVar1].field_0023;
                }
                if ((bVar20) && (iVar16 = (*this_00->vtable[5].slots_00_28[2])(), iVar16 != 0)) {
                  st::fn_004031E3(this_00,(uint *)&local_6,(int *)((int)&param_3 + 2),&local_22);
                  uVar4 = *(undefined2 *)&this_00[1].field_0xe;
                  memset(piVar17, 0, 0x2c); /* compiler bulk-zero initialization */
                  uVar5 = *(undefined4 *)&this_00->field_0x18;
                  *piVar17 = (int)this_00[1].vtable;
                  uVar7 = (undefined2)local_28;
                  STField<undefined4>(piVar17,0x26) = uVar5;
                  uVar8 = (undefined2)local_10;
                  STField<undefined2>(piVar17,0x2a) = uVar4;
                  uVar4 = (undefined2)local_14;
                  STField<STWorldObject *>(piVar17,0x1a) = this_00;
                  *(undefined2 *)(piVar17 + 5) = uVar7;
                  iVar16 = (int)local_6;
                  STField<undefined2>(piVar17,0x16) = uVar8;
                  *(undefined2 *)(piVar17 + 6) = uVar4;
                  iVar13 = (int)local_22;
                  piVar17[2] = iVar16;
                  pSVar6 = this_00->vtable;
                  piVar17[3] = (int)STPiece<2,2>(param_3);
                  piVar17[4] = iVar13;
                  iVar16 = (*pSVar6->GetObjectTypeId)(this_00);
                  iVar13 = (int)local_6;
                  piVar17[1] = iVar16;
                  iVar12 = st::fn_006ACED8(param_1,param_2,iVar13,(int)STPiece<2,2>(param_3));
                  iVar16 = local_3c;
                  STField<int>(piVar17,0x1e) = iVar12;
                  STField<int>(piVar17,0x22) = iVar12;
                  if (STField<int>(piVar17,0x1e) < iVar16) {
                    local_3c = STField<int>(piVar17,0x1e);
                    local_34 = local_c;
                  }
                  piVar17 = piVar17 + 0xb;
                  local_c = local_c + 1;
                }
              }
              local_28 = local_28 + 1;
              iVar16 = local_18;
              iVar18 = local_14;
              iVar13 = local_c;
              iVar10 = local_2c;
              sVar15 = g_worldGrid.sizeX;
            } while (local_28 < local_1c);
          }
          local_10 = local_10 + 1;
          local_28 = iVar16;
        } while (local_10 < iVar10);
      }
      local_14 = iVar18 + 1;
    } while (iVar18 + 1 < 5);
    if (0 < iVar13) {
      local_38 = 1;
      piVar17 = local_800 + local_34 * 0xb;
      memmove(param_4, piVar17, 0x2c); /* compiler REP MOVS byte copy */
    }
  }
  return local_38;
}

// 0061CFB0 FUN_0061cfb0
#line 4 "decomp/ST.exe/functions/0061CFB0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 3.
   Evidence: 0061CFB0 -> 00568DD0 @ 0061D036 */

void __thiscall st::fn_0061CFB0(void *this,int param_1,int param_2,int soundId)

{
  short sVar1;
  SoundPosition local_10;

  sVar1 = (short)(param_1 >> 0x1f);
  if (param_1 < 0) {
    local_10.x = (short)(((short)(param_1 / 0xc9) + sVar1) -
                        (short)((longlong)param_1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_10.x = (int)(short)(((short)(param_1 / 0xc9) + sVar1) -
                             (short)((longlong)param_1 * 0x28c1979 >> 0x3f));
  }
  sVar1 = (short)(param_2 >> 0x1f);
  if (param_2 < 0) {
    local_10.y = (short)(((short)(param_2 / 0xc9) + sVar1) -
                        (short)((longlong)param_2 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_10.y = (int)(short)(((short)(param_2 / 0xc9) + sVar1) -
                             (short)((longlong)param_2 * 0x28c1979 >> 0x3f));
  }
  local_10.unknown = STField<int>(this,0x18);
  st::fn_00404BD8((SoundClassTy *)&g_sound,SOUND_MODE_2,nullptr,soundId,&local_10,0);
  return;
}

// 0061D080 FUN_0061d080
#line 4 "decomp/ST.exe/functions/0061D080/decomp.c"
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=0061D093 MOV AX,word ptr
   [EBP + 0xc] */

void __thiscall st::fn_0061D080(void *this,undefined4 param_1,ushort param_2)

{
  if ((STField<int>(this,0x93) != 5) && (STField<int>(this,0x93) != 6)) {
    STField<ushort>(this,0x89) = param_2;
    STField<undefined4>(this,0x51) = param_1;
  }
  return;
}

// 0061D0C0 FUN_0061d0c0
#line 4 "decomp/ST.exe/functions/0061D0C0/decomp.c"
undefined4 __cdecl
st::fn_0061D0C0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  undefined4 local_48 [5];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_10;
  undefined2 local_c;
  undefined4 local_a;

  memset(local_48, 0, 0x42); /* compiler bulk-zero initialization */
  local_30 = param_2;
  local_34 = param_1;
  local_24 = param_5;
  local_48[1] = param_7;
  local_28 = param_4;
  local_a = param_11;
  local_2c = param_3;
  local_1c = param_10;
  local_18 = param_12;
  local_20 = param_6;
  local_c = (undefined2)param_9;
  local_48[0] = 0xf0;
  local_48[2] = 0;
  local_48[3] = 1;
  local_10 = param_8;
  g_playSystem_00802A38->vfunc_08(0x136,0,(short)&param_9,(short)local_48,0);
  return param_9;
}

// 0061D5F0 FUN_0061d5f0
#line 4 "decomp/ST.exe/functions/0061D5F0/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA9DC>00405772

   [STObjectFactoryApplier] Central object factory for 0x014C (ST_OBJECT_TYPE_014C).
   Evidence: registry[87] at 007CA9D8 stores type 0x014C and executable pointer 00405772; allocation
   size 221 has no unique current class-layout match */

void * __cdecl st::fn_0061D5F0(void)

{
  STLightC *pSVar1;

  pSVar1 = (STLightC *)st::fn_006B04D0(0xdd);
  if (pSVar1 != nullptr) {
    pSVar1 = st::fn_004032CE(pSVar1);
    return pSVar1;
  }
  return nullptr;
}

// 0061DD40 FUN_0061dd40
#line 4 "decomp/ST.exe/functions/0061DD40/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall st::fn_0061DD40(RecoveredRecord_STLightC_0061DD40 *param_1)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  longlong lVar7;
  undefined4 local_10;
  int local_c;
  int local_8;

  local_10 = 0xffffffff;
  fVar3 = (float)(int)param_1->field_0030 * _DAT_007904f8 * _DAT_007904f0;
  fVar4 = (float)(int)param_1->field_0032 * _DAT_007904f8 * _DAT_007904f0;
  fVar5 = (float)(int)param_1->field_0034 * _DAT_007904f8 * _DAT_007904f0;
  param_1->field_0063 = fVar3;
  param_1->field_0067 = fVar4;
  param_1->field_006B = fVar5;
  fVar5 = fVar5 - (float)(int)param_1->field_003A * _DAT_007904f8 * _DAT_007904f0;
  fVar4 = fVar4 - (float)(int)param_1->field_0038 * _DAT_007904f8 * _DAT_007904f0;
  fVar3 = fVar3 - (float)(int)param_1->field_0036 * _DAT_007904f8 * _DAT_007904f0;
  fVar3 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
  if ((fVar3 != _DAT_0079034c) && (param_1->field_0097 != 0)) {
    local_c = 0;
    param_1->field_0047 = fVar3 / (float)param_1->field_0097;
    if (0 < param_1->field_0093) {
      do {
        iVar6 = 0;
        if (0 < *(int *)param_1->field_009B) {
          local_8 = 0;
          do {
            iVar2 = *(int *)(param_1->field_009F + local_c * 4);
            lVar7 = st::fn_0072E288();
            *(int *)(iVar2 + 0xc + local_8) = (int)(short)lVar7;
            iVar6 = iVar6 + 1;
            local_8 = local_8 + 0x14;
          } while (iVar6 < *(int *)(param_1->field_009B + iVar6 * 4));
        }
        local_c = local_c + 1;
      } while (local_c < param_1->field_0093);
    }
    uVar1 = st::machine_word_boundary_cast<uint>(param_1->field_00AC * 0x41c64e6d + 0x3039);
    param_1->field_00AC = uVar1;
    fVar3 = (float)((uVar1 >> 0x10) % 0xb5) * _DAT_0079c70c;
    param_1->field_004B = fVar3;
    iVar6 = st::fn_00401FC3((int)param_1->field_0030,(int)param_1->field_0032,
                               (int)param_1->field_0034,(int)param_1->field_0036,
                               (int)param_1->field_0038,(int)param_1->field_003A,
                               (float *)&param_1->field_0x6f,fVar3);
    if (iVar6 != 0) {
      param_1->field_005B = 0x8fc;
      param_1->field_005F = 6;
      param_1->field_004F = 0;
      param_1->field_0053 = 1;
      param_1->field_0046 = 0;
      local_10 = 1;
    }
    return local_10;
  }
  return 0xffffffff;
}

// 0061DFE0 FUN_0061dfe0
#line 4 "decomp/ST.exe/functions/0061DFE0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0061D190 -> 0061DFE0 @ 0061D28F */

void __fastcall st::fn_0061DFE0(STLightC *param_1)

{
  uint *puVar1;
  uint uVar2;
  STLightC_field_00A3DArray *pSVar3;
  ushort *puVar4;
  int *piVar5;
  bool bVar6;
  uint local_8;

  uVar2 = st::machine_word_boundary_cast<uint>(param_1->field_00AC * 0x41c64e6d + 0x3039);
  param_1->field_00AC = uVar2;
  pSVar3 = param_1->field_00A3;
  puVar4 = PTR_008032d0 + ((uVar2 >> 0x10) % 3 + 3) * 0x100;
  if (pSVar3 != nullptr) {
    local_8 = 0;
    if (0 < (int)pSVar3->count) {
      bVar6 = pSVar3->count != 0;
      do {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        if ((bVar6) &&
           (piVar5 = (int *)((int)&pSVar3->data->field_0000 + pSVar3->elementSize * local_8),
           piVar5 != nullptr)) {
          puVar1 = (uint *)((int)piVar5 + 0x26);
          st::fn_006E88C0
                    (g_sT3DSMAPContext_00807598,(int *)puVar1,piVar5[1],piVar5[2],piVar5[3],
                     piVar5[4],piVar5[5],piVar5[6],piVar5[7],*(byte *)(piVar5 + 8),
                     STField<undefined4>(piVar5,0x21),st::machine_word_boundary_cast<undefined4>(puVar4),0xffffffff);
          if (STField<byte>(piVar5,0x2f) == 0) {
            st::fn_006EAB60(g_sT3DSMAPContext_00807598,*puVar1);
          }
          else {
            st::fn_006EAAA0(g_sT3DSMAPContext_00807598,*puVar1,0);
          }
        }
        pSVar3 = param_1->field_00A3;
        local_8 = local_8 + 1;
        bVar6 = local_8 < pSVar3->count;
      } while ((int)local_8 < (int)pSVar3->count);
    }
  }
  return;
}

// 0061E110 FUN_0061e110
#line 4 "decomp/ST.exe/functions/0061E110/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0061D190 -> 0061E110 @ 0061D22D */

undefined4 __fastcall st::fn_0061E110(STLightC *param_1)

{
  short sVar1;
  VisibleClassTy *pVVar2;
  VisibleClassTy *pVVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  int local_8;

  sVar1 = param_1->field_0030;
  local_c = 0;
  local_8 = STBiasedDiv16(sVar1, 0xc9); /* exact signed 16-bit grid-index division */
  sVar1 = param_1->field_0032;
  iVar5 = STBiasedDiv16(sVar1, 0xc9); /* exact signed 16-bit grid-index division */
  sVar1 = param_1->field_0034;
  local_10 = STBiasedDiv16(sVar1, 200); /* exact signed 16-bit grid-index division */
  sVar1 = param_1->field_0036;
  iVar6 = STBiasedDiv16(sVar1, 0xc9); /* exact signed 16-bit grid-index division */
  sVar1 = param_1->field_0038;
  iVar7 = STBiasedDiv16(sVar1, 0xc9); /* exact signed 16-bit grid-index division */
  sVar1 = param_1->field_003A;
  local_18 = STBiasedDiv16(sVar1, 200); /* exact signed 16-bit grid-index division */
  local_14 = iVar6;
  if (((((((g_sT3DSMAPContext_00807598->field_0048 <= local_8 + 1) &&
          (local_8 + -1 <= g_sT3DSMAPContext_00807598->field_0058)) &&
         (g_sT3DSMAPContext_00807598->field_0044 <= iVar5 + 1)) &&
        ((iVar5 + -1 <= g_sT3DSMAPContext_00807598->field_0054 &&
         (iVar4 = st::fn_006DDBD0(), iVar4 != 0)))) ||
       (((g_sT3DSMAPContext_00807598->field_0048 <= iVar6 + 1 &&
         ((iVar6 + -1 <= g_sT3DSMAPContext_00807598->field_0058 &&
          (g_sT3DSMAPContext_00807598->field_0044 <= iVar7 + 1)))) &&
        ((iVar7 + -1 <= g_sT3DSMAPContext_00807598->field_0054 &&
         (iVar6 = st::fn_006DDBD0(), iVar6 != 0)))))) &&
      (((((pVVar2 = g_visibleClass_00802A88, local_c = 1,
          g_visibleClass_00802A88 != nullptr && (DAT_0080874d != -1)) &&
         (g_visibleClass_00802A88->field_00F8 != 0)) &&
        (((st::fn_00403F53
                     (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,local_8,iVar5,
                      &local_8,&local_1c), pVVar3 = g_visibleClass_00802A88, -1 < local_10 &&
          (local_10 < 5)) &&
         ((-1 < local_8 &&
          ((local_8 < (int)pVVar2->field_0030 &&
           (iVar5 = g_centeredOffsets5[local_10] + local_1c, -1 < iVar5)))))))) &&
       (iVar5 < pVVar2->field_0034)))) &&
     (((((((pVVar2->field_004C != nullptr &&
           (pVVar2->field_004C[local_8 + iVar5 * pVVar2->field_0030] == 0)) && (DAT_0080874d != -1))
         && ((g_visibleClass_00802A88->field_00F8 != 0 &&
             (st::fn_00403F53
                        (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,local_14,iVar7,
                         &local_1c,&local_14), -1 < local_18)))) &&
        ((local_18 < 5 && ((-1 < local_1c && (local_1c < (int)pVVar3->field_0030)))))) &&
       (local_14 = g_centeredOffsets5[local_18] + local_14, -1 < local_14)) &&
      (((local_14 < pVVar3->field_0034 && (pVVar3->field_004C != nullptr)) &&
       (pVVar3->field_004C[local_1c + local_14 * pVVar3->field_0030] == 0)))))) {
    local_c = 0;
  }
  return local_c;
}

// 0061E770 FUN_0061e770
#line 4 "decomp/ST.exe/functions/0061E770/decomp.c"
void __fastcall st::fn_0061E770(AnonShape_0061E770_099C0C21 *param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;

  iVar1 = param_1->field_00A3;
  if (iVar1 != 0) {
    uVar2 = 0;
    if (0 < *(int *)(iVar1 + 0xc)) {
      bVar3 = *(int *)(iVar1 + 0xc) != 0;
      do {
        if (bVar3) {
          iVar1 = *(int *)(iVar1 + 8) * uVar2 + *(int *)(iVar1 + 0x1c);
        }
        else {
          iVar1 = 0;
        }
        uVar2 = uVar2 + 1;
        *(uint *)(iVar1 + 0x2a) = g_playSystem_00802A38->field_00E4;
        iVar1 = param_1->field_00A3;
        bVar3 = uVar2 < *(uint *)(iVar1 + 0xc);
      } while ((int)uVar2 < (int)*(uint *)(iVar1 + 0xc));
    }
    param_1->field_0046 = 1;
  }
  return;
}

// 0061E7F0 FUN_0061e7f0
#line 4 "decomp/ST.exe/functions/0061E7F0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0061D190 -> 0061E7F0 @ 0061D2AD */

undefined4 __fastcall st::fn_0061E7F0(STLightC *param_1)

{
  char cVar1;
  void *pvVar2;
  STLightC_field_00A3DArray *pSVar3;
  dword dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  VisibleClassTy *this;
  uint uVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  uint uVar17;
  int *piVar18;
  longlong lVar19;
  int iVar20;
  int iVar21;
  ushort uVar22;
  int iVar23;
  uint uVar24;
  undefined4 local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  undefined1 local_60;
  undefined4 local_5f;
  undefined1 local_5b;
  uint local_5a;
  int local_56;
  undefined1 local_52;
  undefined1 local_51;
  int local_50;
  int local_4c;
  int local_48;
  STLightC_field_00A3Element *local_44;
  int local_40;
  int local_3c;
  int local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int *local_20;
  dword local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;

  local_3c = param_1->field_0093;
  local_40 = local_3c * 2;
  uVar17 = st::machine_word_boundary_cast<uint>(param_1->field_00AC * 0x41c64e6d + 0x3039);
  param_1->field_00AC = uVar17;
  local_1c = 0;
  local_28 = 0;
  local_2c = (uVar17 >> 0x10) % 3 + 3;
  local_30 = st::machine_word_boundary_cast<int>(param_1->field_0093 * 3);
  if (param_1->field_00A3 != nullptr) {
    local_1c = param_1->field_00A3->count;
  }
  local_c = 0;
  if (param_1->field_0093 < 1) {
    return 0;
  }
LAB_0061e865:
  pvVar2 = param_1->field_0057;
  uVar17 = *(uint *)((int)pvVar2 + local_c * 4);
  if ((int)uVar17 < 0) {
    if ((uVar17 == 0xfffffffe) && (-1 < *(int *)((int)pvVar2 + (local_c + local_30) * 4))) {
      uVar17 = *(uint *)((int)pvVar2 + (local_c + local_30) * 4);
      goto LAB_0061e89d;
    }
  }
  else {
LAB_0061e89d:
    local_8 = 0;
    local_24 = 0;
    local_4c = (local_3c + uVar17) * 4;
    local_10 = *(int *)(local_4c + (int)pvVar2);
    local_50 = (local_40 + uVar17) * 4;
    local_14 = *(int *)(local_50 + (int)pvVar2);
    if (local_14 < *(int *)((int)param_1->field_009B + uVar17 * 4) + -1) {
      local_18 = local_14 * 0x14;
      do {
        if (((local_1c == 0) || ((int)local_1c <= local_28)) || (local_24 != 0)) {
LAB_0061eb1a:
          pfVar9 = (float *)(*(int *)((int)param_1->field_009F + uVar17 * 4) + local_18);
          fVar5 = pfVar9[2] * param_1->field_0047;
          fVar7 = pfVar9[1] * param_1->field_0047;
          fVar6 = param_1->field_0047 * *pfVar9;
          local_10 = local_10 + (int)pfVar9[8];
          local_7c = fVar6 * param_1->field_006F +
                     fVar5 * param_1->field_0087 + fVar7 * param_1->field_007B + param_1->field_0063
          ;
          local_78 = fVar6 * param_1->field_0073 +
                     fVar5 * param_1->field_008B + fVar7 * param_1->field_007F + param_1->field_0067
          ;
          local_74 = fVar6 * param_1->field_0077 +
                     fVar5 * param_1->field_008F + fVar7 * param_1->field_0083 + param_1->field_006B
          ;
          iVar15 = *(int *)((int)param_1->field_009F + uVar17 * 4);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          fVar5 = *(float *)(local_18 + 0x1c + iVar15) * param_1->field_0047;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          fVar7 = *(float *)(local_18 + 0x18 + iVar15) * param_1->field_0047;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          fVar6 = *(float *)(local_18 + 0x14 + iVar15) * param_1->field_0047;
          local_70 = fVar6 * param_1->field_006F +
                     fVar5 * param_1->field_0087 + fVar7 * param_1->field_007B + param_1->field_0063
          ;
          local_6c = fVar5 * param_1->field_008B +
                     fVar7 * param_1->field_007F + fVar6 * param_1->field_0073 + param_1->field_0067
          ;
          local_68 = fVar5 * param_1->field_008F +
                     fVar7 * param_1->field_0083 + fVar6 * param_1->field_0077 + param_1->field_006B
          ;
          if (((local_70 < _DAT_0079034c) || (local_6c < _DAT_0079034c)) ||
             ((local_68 < _DAT_0079034c ||
              (((lVar19 = st::fn_0072E288(), g_worldGrid.sizeX <= (short)lVar19 ||
                (lVar19 = st::fn_0072E288(), g_worldGrid.sizeY <= (short)lVar19)) ||
               (lVar19 = st::fn_0072E288(), g_worldGrid.sizeZ <= (short)lVar19)))))) {
            *(undefined4 *)((int)param_1->field_0057 + local_c * 4) = 0xfffffffe;
            iVar15 = 0;
            if (param_1->field_0053 < 1) goto LAB_0061f035;
            piVar18 = st::pointer_boundary_cast<int *>(param_1->field_0057);
            goto LAB_0061f028;
          }
          if ((uVar17 == 0) && (local_14 == *(int *)param_1->field_009B + -2)) {
            uVar22 = param_1->field_0044;
            iVar15 = param_1->field_0040;
            iVar20 = param_1->field_0020;
            iVar23 = 0xb1;
            iVar21 = 0x32;
            uVar8 = uVar17;
            uVar24 = uVar17;
            lVar19 = st::fn_0072E288();
            iVar10 = (int)lVar19;
            lVar19 = st::fn_0072E288();
            iVar11 = (int)lVar19;
            lVar19 = st::fn_0072E288();
            iVar12 = (int)lVar19;
            lVar19 = st::fn_0072E288();
            iVar13 = (int)lVar19;
            lVar19 = st::fn_0072E288();
            iVar14 = (int)lVar19;
            lVar19 = st::fn_0072E288();
            st::fn_00404516
                      ((AnonReceiver_00601500 *)(param_1 + 1),(int)lVar19,iVar14,iVar13,iVar12,
                       iVar11,iVar10,iVar20,iVar21,iVar15,uVar22,iVar23,uVar8,uVar24);
          }
          if (*(int *)((int)param_1->field_0057 + uVar17 * 4) == 0) {
            uVar16 = 2;
            local_5f = 2;
            local_64 = 2;
          }
          else {
            uVar16 = 1;
            local_5f = 1;
            local_64 = 1;
          }
          local_60 = 0xac;
          local_5b = 0;
          if (param_1->field_0046 == '\0') {
            local_56 = st::machine_word_boundary_cast<int>(g_playSystem_00802A38->field_00E4 + 0x32);
          }
          else {
            local_56 = 0;
          }
          local_5a = 0xffffffff;
          local_52 = (undefined1)uVar17;
          local_80 = 1;
          st::fn_006E88C0
                    (g_sT3DSMAPContext_00807598,(int *)&local_5a,local_7c,local_78,local_74,local_70
                     ,local_6c,local_68,local_64,0xac,uVar16,st::machine_word_boundary_cast<undefined4>(PTR_008032d0 + local_2c * 0x100),
                     0xffffffff);
          st::fn_006EAAA0(g_sT3DSMAPContext_00807598,local_5a,0);
          this = g_visibleClass_00802A88;
          if (param_1->field_00A7 == '\0') {
LAB_0061eefe:
            st::fn_006EAB60(g_sT3DSMAPContext_00807598,local_5a);
            local_51 = 0;
          }
          else {
            local_51 = 1;
            if (g_visibleClass_00802A88 != nullptr) {
              if (local_74 < _DAT_0079034c) {
                lVar19 = st::fn_0072E288();
                local_20 = (int *)((short)lVar19 + -1);
              }
              else {
                lVar19 = st::fn_0072E288();
                local_20 = (int *)(int)(short)lVar19;
              }
              if (local_78 < _DAT_0079034c) {
                lVar19 = st::fn_0072E288();
                local_34 = (int)(short)lVar19 - 1;
              }
              else {
                lVar19 = st::fn_0072E288();
                local_34 = (uint)(short)lVar19;
              }
              if (local_7c < _DAT_0079034c) {
                lVar19 = st::fn_0072E288();
                iVar15 = (short)lVar19 + -1;
              }
              else {
                lVar19 = st::fn_0072E288();
                iVar15 = (int)(short)lVar19;
              }
              if (((((DAT_0080874d != -1) && (this->field_00F8 != 0)) &&
                   ((st::fn_00403F53
                               (this,this->field_010C,iVar15,local_34,&local_38,&local_48),
                    -1 < (int)local_20 &&
                    (((((int)local_20 < 5 && (-1 < local_38)) && (local_38 < (int)this->field_0030))
                     && ((iVar15 = local_48 + g_centeredOffsets5[(int)local_20], -1 < iVar15 &&
                         (iVar15 < this->field_0034)))))))) && (this->field_004C != nullptr)) &&
                 (this->field_004C[local_38 + iVar15 * this->field_0030] == 0)) goto LAB_0061eefe;
            }
          }
          st::fn_006AE1C0((DArrayTy *)param_1->field_00A3,&local_80);
          if (local_14 == *(int *)((int)param_1->field_009B + uVar17 * 4) + -2) {
            *(undefined4 *)((int)param_1->field_0057 + local_c * 4) = 0xfffffffe;
            iVar15 = 0;
            if (param_1->field_0053 < 1) goto LAB_0061efea;
            piVar18 = st::pointer_boundary_cast<int *>(param_1->field_0057);
            goto LAB_0061efdd;
          }
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          iVar15 = *(int *)(*(int *)((int)param_1->field_009F + uVar17 * 4) + 0x24 + local_18);
          if (0 < iVar15) {
            *(int *)((int)param_1->field_0057 + param_1->field_0053 * 4) = iVar15;
            *(undefined4 *)((int)param_1->field_0057 + (local_30 + param_1->field_0053) * 4) =
                 *(undefined4 *)(*(int *)((int)param_1->field_009F + uVar17 * 4) + 0x24 + local_18);
            *(int *)((int)param_1->field_0057 + (local_3c + param_1->field_0053) * 4) = local_10;
            *(undefined4 *)((int)param_1->field_0057 + (local_40 + param_1->field_0053) * 4) = 0;
            param_1->field_0053 = st::machine_word_boundary_cast<int>(param_1->field_0053 + 1);
          }
          if (param_1->field_005B < local_10) {
            *(undefined4 *)((int)param_1->field_0057 + local_4c) = 0;
            *(undefined4 *)((int)param_1->field_0057 + local_50) = 0;
            break;
          }
        }
        else {
          pSVar3 = param_1->field_00A3;
          local_34 = pSVar3->count;
          if (local_8 < local_34) {
            dVar4 = pSVar3->elementSize;
            local_44 = pSVar3->data;
            local_20 = (int *)((int)&local_44->field_0000 + dVar4 * local_8);
            if (local_20 != nullptr) {
              if ((byte)STField<undefined1>(local_20,0x2e) != uVar17) {
                local_24 = 1;
                piVar18 = local_20;
                for (uVar8 = local_8; (int)uVar8 < (int)local_1c; uVar8 = uVar8 + 1) {
                  if (uVar8 < local_34) {
                    local_20 = piVar18;
                    if ((piVar18 != nullptr) &&
                       ((byte)STField<undefined1>(piVar18,0x2e) == uVar17)) {
                      local_24 = 0;
                      local_8 = uVar8;
                      break;
                    }
                  }
                  else {
                    local_20 = nullptr;
                  }
                  piVar18 = (int *)((int)piVar18 + dVar4);
                }
              }
              if ((byte)STField<undefined1>(local_20,0x2e) != uVar17) goto LAB_0061eb1a;
              if (local_8 < local_34) {
                piVar18 = (int *)((int)&local_44->field_0000 + dVar4 * local_8);
              }
              else {
                piVar18 = nullptr;
              }
              iVar15 = *(int *)((int)param_1->field_009F + uVar17 * 4);
              fVar5 = *(float *)(iVar15 + 8 + local_18) * param_1->field_0047;
              fVar7 = *(float *)(iVar15 + 4 + local_18) * param_1->field_0047;
              fVar6 = param_1->field_0047 * *(float *)(iVar15 + local_18);
              local_10 = local_10 + (int)((float *)(iVar15 + local_18))[8];
              local_7c = fVar6 * param_1->field_006F +
                         fVar5 * param_1->field_0087 + fVar7 * param_1->field_007B;
              local_78 = fVar5 * param_1->field_008B +
                         fVar7 * param_1->field_007F + fVar6 * param_1->field_0073;
              local_74 = fVar5 * param_1->field_008F +
                         fVar7 * param_1->field_0083 + fVar6 * param_1->field_0077;
              piVar18[1] = (int)(local_7c + param_1->field_0063);
              piVar18[2] = (int)(local_78 + param_1->field_0067);
              piVar18[3] = (int)(local_74 + param_1->field_006B);
              iVar15 = *(int *)((int)param_1->field_009F + uVar17 * 4);
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              fVar5 = *(float *)(local_18 + 0x1c + iVar15) * param_1->field_0047;
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              fVar7 = *(float *)(local_18 + 0x18 + iVar15) * param_1->field_0047;
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              fVar6 = *(float *)(local_18 + 0x14 + iVar15) * param_1->field_0047;
              local_70 = fVar6 * param_1->field_006F +
                         fVar5 * param_1->field_0087 + fVar7 * param_1->field_007B;
              local_6c = fVar5 * param_1->field_008B +
                         fVar7 * param_1->field_007F + fVar6 * param_1->field_0073;
              local_68 = fVar5 * param_1->field_008F +
                         fVar7 * param_1->field_0083 + fVar6 * param_1->field_0077;
              piVar18[4] = (int)(local_70 + param_1->field_0063);
              piVar18[5] = (int)(local_6c + param_1->field_0067);
              local_44 = (STLightC_field_00A3Element *)(local_68 + param_1->field_006B);
              piVar18[6] = (int)local_44;
              st::fn_006E8C80
                        (g_sT3DSMAPContext_00807598,STField<uint>(piVar18,0x26),piVar18[1],
                         piVar18[2],piVar18[3],piVar18[4],piVar18[5],st::machine_word_boundary_cast<undefined4>(local_44));
              st::fn_006E8D20
                        (g_sT3DSMAPContext_00807598,STField<uint>(piVar18,0x26),
                         STField<undefined4>(piVar18,0x21),st::machine_word_boundary_cast<undefined4>(PTR_008032d0 + local_2c * 0x100));
              local_28 = local_28 + 1;
              local_8 = local_8 + 1;
            }
          }
        }
        local_18 = local_18 + 0x14;
        local_14 = local_14 + 1;
      } while (local_14 < *(int *)((int)param_1->field_009B + uVar17 * 4) + -1);
    }
  }
  goto LAB_0061f043;
  while( true ) {
    iVar15 = iVar15 + 1;
    piVar18 = piVar18 + 1;
    if (param_1->field_0053 <= iVar15) break;
LAB_0061f028:
    if (-1 < *piVar18) goto LAB_0061f043;
  }
LAB_0061f035:
  cVar1 = param_1->field_0046;
  goto joined_r0x0061f03a;
  while( true ) {
    iVar15 = iVar15 + 1;
    piVar18 = piVar18 + 1;
    if (param_1->field_0053 <= iVar15) break;
LAB_0061efdd:
    if (-1 < *piVar18) goto LAB_0061f043;
  }
LAB_0061efea:
  cVar1 = param_1->field_0046;
joined_r0x0061f03a:
  if (cVar1 == '\0') {
    st::fn_0040401B((AnonShape_0061E770_099C0C21 *)param_1);
  }
LAB_0061f043:
  local_c = local_c + 1;
  if (param_1->field_0093 <= local_c) {
    return 0;
  }
  goto LAB_0061e865;
}

// 0061F5C0 FUN_0061f5c0
#line 4 "decomp/ST.exe/functions/0061F5C0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=0061F5F2 MOV AX,word ptr
   [EBP + 0xc]

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=0061F5D9 MOV CX,word ptr
   [EBP + 0x10]

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=0061F5D1 MOV DX,word ptr
   [EBP + 0x14]

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 0060C320 -> 0061F5C0 @ 0060C7F1; MOVSX at 0060C7BE establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 5.
   Evidence: 0060C320 -> 0061F5C0 @ 0060C7F1; MOVSX at 0060C7B9 establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: 0060C320 -> 0061F5C0 @ 0060C7F1; MOVSX at 0060C7B4 establishes signed source width 2 */

void __cdecl
st::fn_0061F5C0(undefined4 param_1,ushort param_2,ushort param_3,ushort param_4,short param_5,
            short param_6,short param_7)

{
  undefined4 local_30 [5];
  ushort local_1c;
  ushort local_1a;
  ushort local_18;
  short local_16;
  short local_14;
  short local_12;

  memset(local_30, 0, 0x2a); /* compiler bulk-zero initialization */
  local_18 = param_4;
  local_30[2] = 1;
  local_30[3] = 1;
  local_1a = param_3;
  local_12 = param_7;
  local_1c = param_2;
  local_14 = param_6;
  local_30[0] = 0x168;
  local_30[1] = 0xff;
  local_16 = param_5;
  g_playSystem_00802A38->vfunc_08(0x14c,0,0,(short)local_30,0);
  return;
}

// 0061F8B0 FUN_0061f8b0
#line 4 "decomp/ST.exe/functions/0061F8B0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STReturnSemanticsApplier] repair_unsafe_eax_rollback.
   Evidence: restore the earlier evidence-backed void type after an unsafe automated rollback;
   post-CALL EAX reads alone do not prove a source-level return value; machine CFG audit: used=1,
   ignored=2, unknown=0 */

void __thiscall st::fn_0061F8B0(void *this,int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  SoundPosition local_14;
  uint local_8;

  local_8 = g_playSystem_00802A38->field_00E4;
  if ((((DAT_0080874d == param_3) && (STField<uint>(this,0xb5) <= local_8)) &&
      (((param_1 + 1 < g_sT3DSMAPContext_00807598->field_0048 ||
        (((g_sT3DSMAPContext_00807598->field_0058 < param_1 + -1 ||
          (param_2 + 1 < g_sT3DSMAPContext_00807598->field_0044)) ||
         (g_sT3DSMAPContext_00807598->field_0054 < param_2 + -1)))) ||
       (iVar1 = st::fn_006DDBD0(), iVar1 == 0)))) &&
     (((uVar2 = st::fn_00402B8F(this,local_8,param_1,param_2), (int)uVar2 < 0 &&
       (uVar2 = st::fn_00405CFE(this,local_8,param_1,param_2,param_3), -1 < (int)uVar2)) ||
      (uVar2 == 2)))) {
    if (DAT_0080874e == '\x01') {
      iVar1 = 0x3b;
    }
    else if (DAT_0080874e == '\x02') {
      iVar1 = 0x3c;
    }
    else {
      if (DAT_0080874e != '\x03') {
        return;
      }
      iVar1 = 0x3d;
    }
    local_14.unknown = 0;
    local_14.x = -1;
    local_14.y = -1;
    st::fn_00404BD8((SoundClassTy *)&g_sound,SOUND_MODE_6,nullptr,iVar1,&local_14,0);
    st::fn_00402D5B(1,(float)param_1 * _DAT_007904f8 + _DAT_007904f4,
                       (float)param_2 * _DAT_007904f8 + _DAT_007904f4);
    STField<uint>(this,0xb5) = local_8 + 0xfa;
  }
  return;
}

// 0061FA40 FUN_0061fa40
#line 4 "decomp/ST.exe/functions/0061FA40/decomp.c"
undefined4 __thiscall st::fn_0061FA40(void *this,int param_1,int param_2,int param_3)

{
  DArrayTy *array;
  uint index;
  int *piVar1;
  undefined4 uVar2;
  undefined4 local_8;

  uVar2 = 0xffffffff;
  local_8 = 0xffffffff;
  if ((STField<int>(this,0xb9) != 0) &&
     (index = *(int *)(STField<int>(this,0xb9) + 0xc) - 1, -1 < (int)index)) {
    do {
      array = STField<DArrayTy *>(this,0xb9);
      if ((index < array->count) &&
         (piVar1 = DArrayAt<int>(array, index), piVar1 != nullptr)) {
        if ((param_2 < piVar1[2] + -3) ||
           (((piVar1[2] + 3 < param_2 || (uVar2 = local_8, param_3 < piVar1[3] + -3)) ||
            (piVar1[3] + 3 < param_3)))) {
          if (0x1194 < (uint)(param_1 - *piVar1)) {
            st::fn_006B0C70(array,index);
          }
        }
        else {
          piVar1[2] = param_2;
          uVar2 = 1;
          local_8 = 1;
          piVar1[3] = param_3;
          piVar1[1] = param_1;
          if (0x1194 < (uint)(param_1 - *piVar1)) {
            uVar2 = 2;
            *piVar1 = param_1;
            local_8 = 2;
          }
        }
      }
      index = index - 1;
    } while (-1 < (int)index);
    return uVar2;
  }
  return 0xffffffff;
}

// 0061FB70 FUN_0061fb70
#line 4 "decomp/ST.exe/functions/0061FB70/decomp.c"
uint __thiscall
st::fn_0061FB70(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  DArrayTy *pDVar1;
  uint uVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_14 = param_1;
  local_18 = param_1;
  local_10 = param_2;
  local_c = param_3;
  local_8 = param_4;
  if (STField<int>(this,0xb9) == 0) {
    pDVar1 = st::fn_006AE290(nullptr,10,0x14,10);
    STField<DArrayTy *>(this,0xb9) = pDVar1;
  }
  if (STField<DArrayTy *>(this,0xb9) != nullptr) {
    uVar2 = st::fn_006AE1C0(STField<DArrayTy *>(this,0xb9),&local_18);
    return uVar2;
  }
  return 0xffffffff;
}

// 0061FC00 FUN_0061fc00
#line 4 "decomp/ST.exe/functions/0061FC00/decomp.c"
undefined4 __thiscall st::fn_0061FC00(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;

  *param_1 = 0xffffffff;
  uVar3 = 0;
  uVar7 = 0;
  *param_2 = 0xffffffff;
  iVar5 = STField<int>(this,0xb9);
  uVar8 = 0xffffffff;
  if (((iVar5 != 0) && (iVar1 = *(int *)(iVar5 + 0xc), -1 < iVar1)) && (uVar6 = 0, 0 < iVar1)) {
    bVar9 = iVar1 != 0;
    do {
      if (bVar9) {
        puVar4 = (uint *)(*(int *)(iVar5 + 8) * uVar6 + *(int *)(iVar5 + 0x1c));
      }
      else {
        puVar4 = nullptr;
      }
      uVar2 = *puVar4;
      if ((uVar2 != 0) && (uVar7 < uVar2)) {
        uVar3 = 1;
        uVar7 = uVar2;
        uVar8 = uVar6;
      }
      uVar2 = *(uint *)(iVar5 + 0xc);
      uVar6 = uVar6 + 1;
      bVar9 = uVar6 < uVar2;
    } while ((int)uVar6 < (int)uVar2);
    if (-1 < (int)uVar8) {
      if (uVar8 < uVar2) {
        iVar5 = *(int *)(iVar5 + 8) * uVar8 + *(int *)(iVar5 + 0x1c);
      }
      else {
        iVar5 = 0;
      }
      *param_1 = *(undefined4 *)(iVar5 + 8);
      *param_2 = *(undefined4 *)(iVar5 + 0xc);
    }
  }
  return uVar3;
}

// 0061FDB0 FUN_0061fdb0
#line 4 "decomp/ST.exe/functions/0061FDB0/decomp.c"
void __fastcall st::fn_0061FDB0(int param_1)

{
  *(undefined4 *)(param_1 + 0xb1) = 0;
  *(undefined4 *)(param_1 + 0xb5) = 0;
  *(undefined4 *)(param_1 + 0xb9) = 0;
  *(undefined4 *)(param_1 + 0xbd) = 0;
  *(undefined4 *)(param_1 + 0xc1) = 0;
  *(undefined4 *)(param_1 + 0xc5) = 0;
  *(undefined4 *)(param_1 + 0xc9) = 0;
  *(undefined4 *)(param_1 + 0xcd) = 0;
  *(undefined4 *)(param_1 + 0xd1) = 0;
  *(undefined4 *)(param_1 + 0xd5) = 0;
  *(undefined4 *)(param_1 + 0xd9) = 0;
  *(undefined4 *)(param_1 + 0xdd) = 0;
  *(undefined4 *)(param_1 + 0xe1) = 0;
  *(undefined4 *)(param_1 + 0xe5) = 0;
  *(undefined4 *)(param_1 + 0xe9) = 0;
  return;
}

// 0061FE30 CreateSndUnderAttMeneg
#line 4 "decomp/ST.exe/functions/0061FE30/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA984>0040442B

   [STObjectFactoryApplier] Central object factory for 0x0143 (ST_OBJECT_SND_UNDER_ATT_MENEG).
   Evidence: registry[76] at 007CA980 stores type 0x0143 and executable pointer 0040442B; allocation
   size 270 uniquely matches /SndUnderAttMenegC */

SndUnderAttMenegC * __cdecl st::fn_0061FE30(void)

{
  SndUnderAttMenegC *this;

  this = (SndUnderAttMenegC *)st::fn_006B04D0(0x10e);
  if (this != nullptr) {
    st::fn_006E60E0(this);
    this->field_0000 = st::machine_word_boundary_cast<undefined4>(&st_global_0079CED8);
    DAT_00811798 = st::machine_word_boundary_cast<undefined4>(this);
    st::fn_00402ACC();
    return st::pointer_boundary_cast<SndUnderAttMenegC *>(DAT_00811798);
  }
  DAT_00811798 = 0;
  return nullptr;
}

// 0061FE80 FUN_0061fe80
#line 4 "decomp/ST.exe/functions/0061FE80/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall
st::fn_0061FE80(void *this,int param_1,int param_2,uint param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  int soundId;
  SoundPosition local_10;

  uVar1 = g_playSystem_00802A38->field_00E4;
  if (DAT_0080874d == param_3) {
    return;
  }
  if (STField<uint>(this,0xc1) <= uVar1) {
    uVar2 = st::fn_0040119F(this,uVar1,param_1,param_2);
    if (((-1 < (int)uVar2) ||
        (uVar2 = st::fn_0040599D(this,uVar1,param_1,param_2,param_3), (int)uVar2 < 0)) &&
       (uVar2 != 2)) {
      return;
    }
    if (DAT_0080874e == '\x01') {
      if (param_5 == 0xa6) {
        soundId = 0x86;
      }
      else if (param_5 == 0xa7) {
        soundId = 0x89;
      }
      else {
        if (param_5 != 0xbd) {
          return;
        }
        soundId = 0x8c;
      }
    }
    else if (DAT_0080874e == '\x02') {
      if (param_5 == 0xa6) {
        soundId = 0x87;
      }
      else if (param_5 == 0xa7) {
        soundId = 0x8a;
      }
      else {
        if (param_5 != 0xbd) {
          return;
        }
        soundId = 0x8d;
      }
    }
    else {
      if (DAT_0080874e != '\x03') {
        return;
      }
      if (param_5 == 0xa6) {
        soundId = 0x88;
      }
      else if (param_5 == 0xa7) {
        soundId = 0x8b;
      }
      else {
        if (param_5 != 0xbd) {
          return;
        }
        soundId = 0x8e;
      }
    }
    local_10.unknown = 0;
    local_10.x = -1;
    local_10.y = -1;
    st::fn_00404BD8((SoundClassTy *)&g_sound,SOUND_MODE_6,nullptr,soundId,&local_10,0);
    st::fn_00405D62(this,param_1,param_2,0x8e);
    STField<uint>(this,0xc1) = uVar1 + 0xfa;
    return;
  }
  return;
}

