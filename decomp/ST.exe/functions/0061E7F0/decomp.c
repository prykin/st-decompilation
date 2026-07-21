
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_0061e7f0(AnonShape_0061E7F0_1BC555A1 *param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  VisibleClassTy *this;
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

  local_3c = param_1->field_0093;
  local_40 = local_3c * 2;
  uVar14 = param_1->field_00AC * 0x41c64e6d + 0x3039;
  param_1->field_00AC = uVar14;
  local_1c = 0;
  local_28 = 0;
  local_2c = (uVar14 >> 0x10) % 3 + 3;
  local_30 = param_1->field_0093 * 3;
  if (param_1->field_00A3 != 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_1c = *(int *)(param_1->field_00A3 + 0xc);
  }
  local_c = 0;
  if (param_1->field_0093 < 1) {
    return 0;
  }
LAB_0061e865:
  iVar15 = param_1->field_0057;
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
    if (local_14 < *(int *)(param_1->field_009B + uVar14 * 4) + -1) {
      local_18 = local_14 * 0x14;
      do {
        if (((local_1c == 0) || (local_1c <= local_28)) || (local_24 != 0)) {
LAB_0061eb1a:
          pfVar6 = (float *)(*(int *)(param_1->field_009F + uVar14 * 4) + local_18);
          fVar2 = pfVar6[2] * param_1->field_0047;
          fVar4 = pfVar6[1] * param_1->field_0047;
          fVar3 = param_1->field_0047 * *pfVar6;
          local_10 = local_10 + (int)pfVar6[8];
          local_7c = fVar3 * param_1->field_006F +
                     fVar2 * param_1->field_0087 + fVar4 * param_1->field_007B + param_1->field_0063
          ;
          local_78 = fVar3 * param_1->field_0073 +
                     fVar2 * param_1->field_008B + fVar4 * param_1->field_007F + param_1->field_0067
          ;
          local_74 = fVar3 * param_1->field_0077 +
                     fVar2 * param_1->field_008F + fVar4 * param_1->field_0083 + param_1->field_006B
          ;
          iVar15 = *(int *)(param_1->field_009F + uVar14 * 4);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          fVar2 = *(float *)(local_18 + 0x1c + iVar15) * param_1->field_0047;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          fVar4 = *(float *)(local_18 + 0x18 + iVar15) * param_1->field_0047;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          fVar3 = *(float *)(local_18 + 0x14 + iVar15) * param_1->field_0047;
          local_70 = fVar3 * param_1->field_006F +
                     fVar2 * param_1->field_0087 + fVar4 * param_1->field_007B + param_1->field_0063
          ;
          local_6c = fVar2 * param_1->field_008B +
                     fVar4 * param_1->field_007F + fVar3 * param_1->field_0073 + param_1->field_0067
          ;
          local_68 = fVar2 * param_1->field_008F +
                     fVar4 * param_1->field_0083 + fVar3 * param_1->field_0077 + param_1->field_006B
          ;
          if (((local_70 < _DAT_0079034c) || (local_6c < _DAT_0079034c)) ||
             ((local_68 < _DAT_0079034c ||
              (((lVar16 = Library::MSVCRT::__ftol(), g_worldGrid.sizeX <= (short)lVar16 ||
                (lVar16 = Library::MSVCRT::__ftol(), g_worldGrid.sizeY <= (short)lVar16)) ||
               (lVar16 = Library::MSVCRT::__ftol(), g_worldGrid.sizeZ <= (short)lVar16)))))) {
            *(undefined4 *)(param_1->field_0057 + local_c * 4) = 0xfffffffe;
            iVar15 = 0;
            if (param_1->field_0053 < 1) goto LAB_0061f035;
            piVar13 = (int *)param_1->field_0057;
            goto LAB_0061f028;
          }
          if ((uVar14 == 0) && (local_14 == *(int *)param_1->field_009B + -2)) {
            uVar19 = param_1->field_0044;
            iVar15 = param_1->field_0040;
            iVar17 = param_1->field_0020;
            iVar20 = 0xb1;
            iVar18 = 0x32;
            uVar5 = uVar14;
            uVar21 = uVar14;
            lVar16 = Library::MSVCRT::__ftol();
            iVar7 = (int)lVar16;
            lVar16 = Library::MSVCRT::__ftol();
            iVar8 = (int)lVar16;
            lVar16 = Library::MSVCRT::__ftol();
            iVar9 = (int)lVar16;
            lVar16 = Library::MSVCRT::__ftol();
            iVar10 = (int)lVar16;
            lVar16 = Library::MSVCRT::__ftol();
            iVar11 = (int)lVar16;
            lVar16 = Library::MSVCRT::__ftol();
            SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00601500::thunk_FUN_00601500
                      ((AnonReceiver_00601500 *)(param_1 + 1),(int)lVar16,iVar11,iVar10,iVar9,iVar8,
                       iVar7,iVar17,iVar18,iVar15,uVar19,iVar20,uVar5,uVar21);
          }
          if (*(int *)(param_1->field_0057 + uVar14 * 4) == 0) {
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
          if (param_1->field_0046 == '\0') {
            local_56 = PTR_00802a38->field_00E4 + 0x32;
          }
          else {
            local_56 = 0;
          }
          local_5a = 0xffffffff;
          local_52 = (undefined1)uVar14;
          local_80 = 1;
          FUN_006e88c0(PTR_00807598,(int *)&local_5a,local_7c,local_78,local_74,local_70,local_6c,
                       local_68,local_64,0xac,uVar12,local_2c * 0x200 + DAT_008032d0,0xffffffff);
          FUN_006eaaa0(PTR_00807598,local_5a,0);
          this = g_visibleClass_00802A88;
          if (param_1->field_00A7 == '\0') {
LAB_0061eefe:
            FUN_006eab60(PTR_00807598,local_5a);
            local_51 = 0;
          }
          else {
            local_51 = 1;
            if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
              if (local_74 < _DAT_0079034c) {
                lVar16 = Library::MSVCRT::__ftol();
                local_20 = (short)lVar16 + -1;
              }
              else {
                lVar16 = Library::MSVCRT::__ftol();
                local_20 = (int)(short)lVar16;
              }
              if (local_78 < _DAT_0079034c) {
                lVar16 = Library::MSVCRT::__ftol();
                local_34 = (int)(short)lVar16 - 1;
              }
              else {
                lVar16 = Library::MSVCRT::__ftol();
                local_34 = (uint)(short)lVar16;
              }
              if (local_7c < _DAT_0079034c) {
                lVar16 = Library::MSVCRT::__ftol();
                iVar15 = (short)lVar16 + -1;
              }
              else {
                lVar16 = Library::MSVCRT::__ftol();
                iVar15 = (int)(short)lVar16;
              }
              if (((((DAT_0080874d != -1) && (this->field_00F8 != 0)) &&
                   ((thunk_FUN_00558c00(this,this->field_010C,iVar15,local_34,&local_38,&local_48),
                    -1 < local_20 &&
                    ((((local_20 < 5 && (-1 < local_38)) && (local_38 < this->field_0030)) &&
                     ((iVar15 = local_48 + g_centeredOffsets5[local_20], -1 < iVar15 &&
                      (iVar15 < this->field_0034)))))))) && (this->field_004C != (byte *)0x0)) &&
                 (this->field_004C[local_38 + iVar15 * this->field_0030] == 0)) goto LAB_0061eefe;
            }
          }
          Library::DKW::TBL::FUN_006ae1c0((uint *)param_1->field_00A3,&local_80);
          if (local_14 == *(int *)(param_1->field_009B + uVar14 * 4) + -2) {
            *(undefined4 *)(param_1->field_0057 + local_c * 4) = 0xfffffffe;
            iVar15 = 0;
            if (param_1->field_0053 < 1) goto LAB_0061efea;
            piVar13 = (int *)param_1->field_0057;
            goto LAB_0061efdd;
          }
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          iVar15 = *(int *)(*(int *)(param_1->field_009F + uVar14 * 4) + 0x24 + local_18);
          if (0 < iVar15) {
            *(int *)(param_1->field_0057 + param_1->field_0053 * 4) = iVar15;
            *(undefined4 *)(param_1->field_0057 + (local_30 + param_1->field_0053) * 4) =
                 *(undefined4 *)(*(int *)(param_1->field_009F + uVar14 * 4) + 0x24 + local_18);
            *(int *)(param_1->field_0057 + (local_3c + param_1->field_0053) * 4) = local_10;
            *(undefined4 *)(param_1->field_0057 + (local_40 + param_1->field_0053) * 4) = 0;
            param_1->field_0053 = param_1->field_0053 + 1;
          }
          if (param_1->field_005B < local_10) {
            *(undefined4 *)(param_1->field_0057 + local_4c) = 0;
            *(undefined4 *)(param_1->field_0057 + local_50) = 0;
            break;
          }
        }
        else {
          iVar15 = param_1->field_00A3;
          local_34 = *(uint *)(iVar15 + 0xc);
          if (local_8 < local_34) {
            iVar17 = *(int *)(iVar15 + 8);
            local_44 = *(float *)(iVar15 + 0x1c);
            local_20 = iVar17 * local_8 + (int)local_44;
            if (local_20 != 0) {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
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
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              if (*(byte *)(local_20 + 0x2e) != uVar14) goto LAB_0061eb1a;
              if (local_8 < local_34) {
                iVar15 = iVar17 * local_8 + (int)local_44;
              }
              else {
                iVar15 = 0;
              }
              iVar17 = *(int *)(param_1->field_009F + uVar14 * 4);
              fVar2 = *(float *)(iVar17 + 8 + local_18) * param_1->field_0047;
              fVar4 = *(float *)(iVar17 + 4 + local_18) * param_1->field_0047;
              fVar3 = param_1->field_0047 * *(float *)(iVar17 + local_18);
              local_10 = local_10 + (int)((float *)(iVar17 + local_18))[8];
              local_7c = fVar3 * param_1->field_006F +
                         fVar2 * param_1->field_0087 + fVar4 * param_1->field_007B;
              local_78 = fVar2 * param_1->field_008B +
                         fVar4 * param_1->field_007F + fVar3 * param_1->field_0073;
              local_74 = fVar2 * param_1->field_008F +
                         fVar4 * param_1->field_0083 + fVar3 * param_1->field_0077;
              *(float *)(iVar15 + 4) = local_7c + param_1->field_0063;
              *(float *)(iVar15 + 8) = local_78 + param_1->field_0067;
              *(float *)(iVar15 + 0xc) = local_74 + param_1->field_006B;
              iVar17 = *(int *)(param_1->field_009F + uVar14 * 4);
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              fVar2 = *(float *)(local_18 + 0x1c + iVar17) * param_1->field_0047;
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              fVar4 = *(float *)(local_18 + 0x18 + iVar17) * param_1->field_0047;
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              fVar3 = *(float *)(local_18 + 0x14 + iVar17) * param_1->field_0047;
              local_70 = fVar3 * param_1->field_006F +
                         fVar2 * param_1->field_0087 + fVar4 * param_1->field_007B;
              local_6c = fVar2 * param_1->field_008B +
                         fVar4 * param_1->field_007F + fVar3 * param_1->field_0073;
              local_68 = fVar2 * param_1->field_008F +
                         fVar4 * param_1->field_0083 + fVar3 * param_1->field_0077;
              *(float *)(iVar15 + 0x10) = local_70 + param_1->field_0063;
              *(float *)(iVar15 + 0x14) = local_6c + param_1->field_0067;
              local_44 = local_68 + param_1->field_006B;
              *(float *)(iVar15 + 0x18) = local_44;
              FUN_006e8c80(PTR_00807598,*(uint *)(iVar15 + 0x26),*(undefined4 *)(iVar15 + 4),
                           *(undefined4 *)(iVar15 + 8),*(undefined4 *)(iVar15 + 0xc),
                           *(undefined4 *)(iVar15 + 0x10),*(undefined4 *)(iVar15 + 0x14),local_44);
              FUN_006e8d20(PTR_00807598,*(uint *)(iVar15 + 0x26),*(undefined4 *)(iVar15 + 0x21),
                           local_2c * 0x200 + DAT_008032d0);
              local_28 = local_28 + 1;
              local_8 = local_8 + 1;
            }
          }
        }
        local_18 = local_18 + 0x14;
        local_14 = local_14 + 1;
      } while (local_14 < *(int *)(param_1->field_009B + uVar14 * 4) + -1);
    }
  }
  goto LAB_0061f043;
  while( true ) {
    iVar15 = iVar15 + 1;
    piVar13 = piVar13 + 1;
    if (param_1->field_0053 <= iVar15) break;
LAB_0061f028:
    if (-1 < *piVar13) goto LAB_0061f043;
  }
LAB_0061f035:
  cVar1 = param_1->field_0046;
  goto joined_r0x0061f03a;
  while( true ) {
    iVar15 = iVar15 + 1;
    piVar13 = piVar13 + 1;
    if (param_1->field_0053 <= iVar15) break;
LAB_0061efdd:
    if (-1 < *piVar13) goto LAB_0061f043;
  }
LAB_0061efea:
  cVar1 = param_1->field_0046;
joined_r0x0061f03a:
  if (cVar1 == '\0') {
    thunk_FUN_0061e770((AnonShape_0061E770_099C0C21 *)param_1);
  }
LAB_0061f043:
  local_c = local_c + 1;
  if (param_1->field_0093 <= local_c) {
    return 0;
  }
  goto LAB_0061e865;
}

