
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_0061e7f0(int param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *this;
  uint uVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int *piVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  undefined2 uVar19;
  int iVar20;
  uint uVar21;
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
  float local_44;
  int local_40;
  int local_3c;
  int local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_3c = *(int *)(param_1 + 0x93);
  local_40 = local_3c * 2;
  uVar14 = *(int *)(param_1 + 0xac) * 0x41c64e6d + 0x3039;
  *(uint *)(param_1 + 0xac) = uVar14;
  local_1c = 0;
  local_28 = 0;
  local_2c = (uVar14 >> 0x10) % 3 + 3;
  local_30 = *(int *)(param_1 + 0x93) * 3;
  if (*(int *)(param_1 + 0xa3) != 0) {
    local_1c = *(int *)(*(int *)(param_1 + 0xa3) + 0xc);
  }
  local_c = 0;
  if (*(int *)(param_1 + 0x93) < 1) {
    return 0;
  }
LAB_0061e865:
  iVar15 = *(int *)(param_1 + 0x57);
  uVar14 = *(uint *)(iVar15 + local_c * 4);
  if ((int)uVar14 < 0) {
    if ((uVar14 == 0xfffffffe) && (-1 < *(int *)(iVar15 + (local_c + local_30) * 4))) {
      uVar14 = *(uint *)(iVar15 + (local_c + local_30) * 4);
      goto LAB_0061e89d;
    }
  }
  else {
LAB_0061e89d:
    local_8 = 0;
    local_24 = 0;
    local_4c = (local_3c + uVar14) * 4;
    local_10 = *(int *)(local_4c + iVar15);
    local_50 = (local_40 + uVar14) * 4;
    local_14 = *(int *)(local_50 + iVar15);
    if (local_14 < *(int *)(*(int *)(param_1 + 0x9b) + uVar14 * 4) + -1) {
      local_18 = local_14 * 0x14;
      do {
        if (((local_1c == 0) || (local_1c <= local_28)) || (local_24 != 0)) {
LAB_0061eb1a:
          pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x9f) + uVar14 * 4) + local_18);
          fVar2 = pfVar6[2] * *(float *)(param_1 + 0x47);
          fVar4 = pfVar6[1] * *(float *)(param_1 + 0x47);
          fVar3 = *(float *)(param_1 + 0x47) * *pfVar6;
          local_10 = local_10 + (int)pfVar6[8];
          local_7c = fVar3 * *(float *)(param_1 + 0x6f) +
                     fVar2 * *(float *)(param_1 + 0x87) + fVar4 * *(float *)(param_1 + 0x7b) +
                     *(float *)(param_1 + 99);
          local_78 = fVar3 * *(float *)(param_1 + 0x73) +
                     fVar2 * *(float *)(param_1 + 0x8b) + fVar4 * *(float *)(param_1 + 0x7f) +
                     *(float *)(param_1 + 0x67);
          local_74 = fVar3 * *(float *)(param_1 + 0x77) +
                     fVar2 * *(float *)(param_1 + 0x8f) + fVar4 * *(float *)(param_1 + 0x83) +
                     *(float *)(param_1 + 0x6b);
          iVar15 = *(int *)(*(int *)(param_1 + 0x9f) + uVar14 * 4);
          fVar2 = *(float *)(local_18 + 0x1c + iVar15) * *(float *)(param_1 + 0x47);
          fVar4 = *(float *)(local_18 + 0x18 + iVar15) * *(float *)(param_1 + 0x47);
          fVar3 = *(float *)(local_18 + 0x14 + iVar15) * *(float *)(param_1 + 0x47);
          local_70 = fVar3 * *(float *)(param_1 + 0x6f) +
                     fVar2 * *(float *)(param_1 + 0x87) + fVar4 * *(float *)(param_1 + 0x7b) +
                     *(float *)(param_1 + 99);
          local_6c = fVar2 * *(float *)(param_1 + 0x8b) +
                     fVar4 * *(float *)(param_1 + 0x7f) + fVar3 * *(float *)(param_1 + 0x73) +
                     *(float *)(param_1 + 0x67);
          local_68 = fVar2 * *(float *)(param_1 + 0x8f) +
                     fVar4 * *(float *)(param_1 + 0x83) + fVar3 * *(float *)(param_1 + 0x77) +
                     *(float *)(param_1 + 0x6b);
          if (((local_70 < _DAT_0079034c) || (local_6c < _DAT_0079034c)) ||
             ((local_68 < _DAT_0079034c ||
              (((lVar16 = __ftol(), DAT_007fb240 <= (short)lVar16 ||
                (lVar16 = __ftol(), DAT_007fb242 <= (short)lVar16)) ||
               (lVar16 = __ftol(), DAT_007fb244 <= (short)lVar16)))))) {
            *(undefined4 *)(*(int *)(param_1 + 0x57) + local_c * 4) = 0xfffffffe;
            iVar15 = 0;
            if (*(int *)(param_1 + 0x53) < 1) goto LAB_0061f035;
            piVar13 = *(int **)(param_1 + 0x57);
            goto LAB_0061f028;
          }
          if ((uVar14 == 0) && (local_14 == **(int **)(param_1 + 0x9b) + -2)) {
            uVar19 = *(undefined2 *)(param_1 + 0x44);
            iVar15 = *(int *)(param_1 + 0x40);
            iVar17 = *(int *)(param_1 + 0x20);
            iVar20 = 0xb1;
            iVar18 = 0x32;
            uVar5 = uVar14;
            uVar21 = uVar14;
            lVar16 = __ftol();
            iVar7 = (int)lVar16;
            lVar16 = __ftol();
            iVar8 = (int)lVar16;
            lVar16 = __ftol();
            iVar9 = (int)lVar16;
            lVar16 = __ftol();
            iVar10 = (int)lVar16;
            lVar16 = __ftol();
            iVar11 = (int)lVar16;
            lVar16 = __ftol();
            thunk_FUN_00601500((void *)(param_1 + 0xb0),(int)lVar16,iVar11,iVar10,iVar9,iVar8,iVar7,
                               iVar17,iVar18,iVar15,uVar19,iVar20,uVar5,uVar21);
          }
          if (*(int *)(*(int *)(param_1 + 0x57) + uVar14 * 4) == 0) {
            uVar12 = 2;
            local_5f = 2;
            local_64 = 2;
          }
          else {
            uVar12 = 1;
            local_5f = 1;
            local_64 = 1;
          }
          local_60 = 0xac;
          local_5b = 0;
          if (*(char *)(param_1 + 0x46) == '\0') {
            local_56 = *(int *)(DAT_00802a38 + 0xe4) + 0x32;
          }
          else {
            local_56 = 0;
          }
          local_5a = 0xffffffff;
          local_52 = (undefined1)uVar14;
          local_80 = 1;
          FUN_006e88c0(DAT_00807598,(int *)&local_5a,local_7c,local_78,local_74,local_70,local_6c,
                       local_68,local_64,0xac,uVar12,local_2c * 0x200 + DAT_008032d0,0xffffffff);
          FUN_006eaaa0(DAT_00807598,local_5a,0);
          this = DAT_00802a88;
          if (*(char *)(param_1 + 0xa7) == '\0') {
LAB_0061eefe:
            FUN_006eab60(DAT_00807598,local_5a);
            local_51 = 0;
          }
          else {
            local_51 = 1;
            if (DAT_00802a88 != (void *)0x0) {
              if (local_74 < _DAT_0079034c) {
                lVar16 = __ftol();
                local_20 = (short)lVar16 + -1;
              }
              else {
                lVar16 = __ftol();
                local_20 = (int)(short)lVar16;
              }
              if (local_78 < _DAT_0079034c) {
                lVar16 = __ftol();
                local_34 = (int)(short)lVar16 - 1;
              }
              else {
                lVar16 = __ftol();
                local_34 = (uint)(short)lVar16;
              }
              if (local_7c < _DAT_0079034c) {
                lVar16 = __ftol();
                iVar15 = (short)lVar16 + -1;
              }
              else {
                lVar16 = __ftol();
                iVar15 = (int)(short)lVar16;
              }
              if (((((DAT_0080874d != -1) && (*(int *)((int)this + 0xf8) != 0)) &&
                   ((thunk_FUN_00558c00(this,*(undefined4 *)((int)this + 0x10c),iVar15,local_34,
                                        &local_38,&local_48), -1 < local_20 &&
                    ((((local_20 < 5 && (-1 < local_38)) && (local_38 < *(int *)((int)this + 0x30)))
                     && ((iVar15 = local_48 + (&DAT_0079aed0)[local_20], -1 < iVar15 &&
                         (iVar15 < *(int *)((int)this + 0x34))))))))) &&
                  (*(int *)((int)this + 0x4c) != 0)) &&
                 (*(char *)(iVar15 * *(int *)((int)this + 0x30) + *(int *)((int)this + 0x4c) +
                           local_38) == '\0')) goto LAB_0061eefe;
            }
          }
          FUN_006ae1c0(*(uint **)(param_1 + 0xa3),&local_80);
          if (local_14 == *(int *)(*(int *)(param_1 + 0x9b) + uVar14 * 4) + -2) {
            *(undefined4 *)(*(int *)(param_1 + 0x57) + local_c * 4) = 0xfffffffe;
            iVar15 = 0;
            if (*(int *)(param_1 + 0x53) < 1) goto LAB_0061efea;
            piVar13 = *(int **)(param_1 + 0x57);
            goto LAB_0061efdd;
          }
          iVar15 = *(int *)(*(int *)(*(int *)(param_1 + 0x9f) + uVar14 * 4) + 0x24 + local_18);
          if (0 < iVar15) {
            *(int *)(*(int *)(param_1 + 0x57) + *(int *)(param_1 + 0x53) * 4) = iVar15;
            *(undefined4 *)(*(int *)(param_1 + 0x57) + (local_30 + *(int *)(param_1 + 0x53)) * 4) =
                 *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x9f) + uVar14 * 4) + 0x24 + local_18);
            *(int *)(*(int *)(param_1 + 0x57) + (local_3c + *(int *)(param_1 + 0x53)) * 4) =
                 local_10;
            *(undefined4 *)(*(int *)(param_1 + 0x57) + (local_40 + *(int *)(param_1 + 0x53)) * 4) =
                 0;
            *(int *)(param_1 + 0x53) = *(int *)(param_1 + 0x53) + 1;
          }
          if (*(int *)(param_1 + 0x5b) < local_10) {
            *(undefined4 *)(*(int *)(param_1 + 0x57) + local_4c) = 0;
            *(undefined4 *)(*(int *)(param_1 + 0x57) + local_50) = 0;
            break;
          }
        }
        else {
          iVar15 = *(int *)(param_1 + 0xa3);
          local_34 = *(uint *)(iVar15 + 0xc);
          if (local_8 < local_34) {
            iVar17 = *(int *)(iVar15 + 8);
            local_44 = *(float *)(iVar15 + 0x1c);
            local_20 = iVar17 * local_8 + (int)local_44;
            if (local_20 != 0) {
              if (*(byte *)(local_20 + 0x2e) != uVar14) {
                local_24 = 1;
                iVar15 = local_20;
                for (uVar5 = local_8; (int)uVar5 < local_1c; uVar5 = uVar5 + 1) {
                  if (uVar5 < local_34) {
                    local_20 = iVar15;
                    if ((iVar15 != 0) && (*(byte *)(iVar15 + 0x2e) == uVar14)) {
                      local_24 = 0;
                      local_8 = uVar5;
                      break;
                    }
                  }
                  else {
                    local_20 = 0;
                  }
                  iVar15 = iVar15 + iVar17;
                }
              }
              if (*(byte *)(local_20 + 0x2e) != uVar14) goto LAB_0061eb1a;
              if (local_8 < local_34) {
                iVar15 = iVar17 * local_8 + (int)local_44;
              }
              else {
                iVar15 = 0;
              }
              iVar17 = *(int *)(*(int *)(param_1 + 0x9f) + uVar14 * 4);
              fVar2 = *(float *)(iVar17 + 8 + local_18) * *(float *)(param_1 + 0x47);
              fVar4 = *(float *)(iVar17 + 4 + local_18) * *(float *)(param_1 + 0x47);
              fVar3 = *(float *)(param_1 + 0x47) * *(float *)(iVar17 + local_18);
              local_10 = local_10 + (int)((float *)(iVar17 + local_18))[8];
              local_7c = fVar3 * *(float *)(param_1 + 0x6f) +
                         fVar2 * *(float *)(param_1 + 0x87) + fVar4 * *(float *)(param_1 + 0x7b);
              local_78 = fVar2 * *(float *)(param_1 + 0x8b) +
                         fVar4 * *(float *)(param_1 + 0x7f) + fVar3 * *(float *)(param_1 + 0x73);
              local_74 = fVar2 * *(float *)(param_1 + 0x8f) +
                         fVar4 * *(float *)(param_1 + 0x83) + fVar3 * *(float *)(param_1 + 0x77);
              *(float *)(iVar15 + 4) = local_7c + *(float *)(param_1 + 99);
              *(float *)(iVar15 + 8) = local_78 + *(float *)(param_1 + 0x67);
              *(float *)(iVar15 + 0xc) = local_74 + *(float *)(param_1 + 0x6b);
              iVar17 = *(int *)(*(int *)(param_1 + 0x9f) + uVar14 * 4);
              fVar2 = *(float *)(local_18 + 0x1c + iVar17) * *(float *)(param_1 + 0x47);
              fVar4 = *(float *)(local_18 + 0x18 + iVar17) * *(float *)(param_1 + 0x47);
              fVar3 = *(float *)(local_18 + 0x14 + iVar17) * *(float *)(param_1 + 0x47);
              local_70 = fVar3 * *(float *)(param_1 + 0x6f) +
                         fVar2 * *(float *)(param_1 + 0x87) + fVar4 * *(float *)(param_1 + 0x7b);
              local_6c = fVar2 * *(float *)(param_1 + 0x8b) +
                         fVar4 * *(float *)(param_1 + 0x7f) + fVar3 * *(float *)(param_1 + 0x73);
              local_68 = fVar2 * *(float *)(param_1 + 0x8f) +
                         fVar4 * *(float *)(param_1 + 0x83) + fVar3 * *(float *)(param_1 + 0x77);
              *(float *)(iVar15 + 0x10) = local_70 + *(float *)(param_1 + 99);
              *(float *)(iVar15 + 0x14) = local_6c + *(float *)(param_1 + 0x67);
              local_44 = local_68 + *(float *)(param_1 + 0x6b);
              *(float *)(iVar15 + 0x18) = local_44;
              FUN_006e8c80(DAT_00807598,*(uint *)(iVar15 + 0x26),*(undefined4 *)(iVar15 + 4),
                           *(undefined4 *)(iVar15 + 8),*(undefined4 *)(iVar15 + 0xc),
                           *(undefined4 *)(iVar15 + 0x10),*(undefined4 *)(iVar15 + 0x14),local_44);
              FUN_006e8d20(DAT_00807598,*(uint *)(iVar15 + 0x26),*(undefined4 *)(iVar15 + 0x21),
                           local_2c * 0x200 + DAT_008032d0);
              local_28 = local_28 + 1;
              local_8 = local_8 + 1;
            }
          }
        }
        local_18 = local_18 + 0x14;
        local_14 = local_14 + 1;
      } while (local_14 < *(int *)(*(int *)(param_1 + 0x9b) + uVar14 * 4) + -1);
    }
  }
  goto LAB_0061f043;
  while( true ) {
    iVar15 = iVar15 + 1;
    piVar13 = piVar13 + 1;
    if (*(int *)(param_1 + 0x53) <= iVar15) break;
LAB_0061f028:
    if (-1 < *piVar13) goto LAB_0061f043;
  }
LAB_0061f035:
  cVar1 = *(char *)(param_1 + 0x46);
  goto joined_r0x0061f03a;
  while( true ) {
    iVar15 = iVar15 + 1;
    piVar13 = piVar13 + 1;
    if (*(int *)(param_1 + 0x53) <= iVar15) break;
LAB_0061efdd:
    if (-1 < *piVar13) goto LAB_0061f043;
  }
LAB_0061efea:
  cVar1 = *(char *)(param_1 + 0x46);
joined_r0x0061f03a:
  if (cVar1 == '\0') {
    thunk_FUN_0061e770(param_1);
  }
LAB_0061f043:
  local_c = local_c + 1;
  if (*(int *)(param_1 + 0x93) <= local_c) {
    return 0;
  }
  goto LAB_0061e865;
}

