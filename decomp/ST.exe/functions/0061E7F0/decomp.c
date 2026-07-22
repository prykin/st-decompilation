
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0061D190 -> 0061E7F0 @ 0061D2AD */

undefined4 __fastcall FUN_0061e7f0(STLightC *param_1)

{
  char cVar1;
  DArrayTy *pDVar2;
  dword dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  VisibleClassTy *this;
  uint uVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  int *piVar16;
  uint uVar17;
  void *pvVar18;
  longlong lVar19;
  int iVar20;
  int iVar21;
  undefined2 uVar22;
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
  void *local_44;
  int local_40;
  int local_3c;
  int local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  void *local_20;
  dword local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;

  local_3c = param_1->field_0093;
  local_40 = local_3c * 2;
  uVar17 = param_1->field_00AC * 0x41c64e6d + 0x3039;
  param_1->field_00AC = uVar17;
  local_1c = 0;
  local_28 = 0;
  local_2c = (uVar17 >> 0x10) % 3 + 3;
  local_30 = param_1->field_0093 * 3;
  if (param_1->field_00A3 != (DArrayTy *)0x0) {
    local_1c = param_1->field_00A3->count;
  }
  local_c = 0;
  if (param_1->field_0093 < 1) {
    return 0;
  }
LAB_0061e865:
  iVar14 = param_1->field_0057;
  uVar17 = *(uint *)(iVar14 + local_c * 4);
  if ((int)uVar17 < 0) {
    if ((uVar17 == 0xfffffffe) && (-1 < *(int *)(iVar14 + (local_c + local_30) * 4))) {
      uVar17 = *(uint *)(iVar14 + (local_c + local_30) * 4);
      goto LAB_0061e89d;
    }
  }
  else {
LAB_0061e89d:
    local_8 = 0;
    local_24 = 0;
    local_4c = (local_3c + uVar17) * 4;
    local_10 = *(int *)(local_4c + iVar14);
    local_50 = (local_40 + uVar17) * 4;
    local_14 = *(int *)(local_50 + iVar14);
    if (local_14 < *(int *)(param_1->field_009B + uVar17 * 4) + -1) {
      local_18 = local_14 * 0x14;
      do {
        if (((local_1c == 0) || ((int)local_1c <= local_28)) || (local_24 != 0)) {
LAB_0061eb1a:
          pfVar8 = (float *)(*(int *)(param_1->field_009F + uVar17 * 4) + local_18);
          fVar4 = pfVar8[2] * param_1->field_0047;
          fVar6 = pfVar8[1] * param_1->field_0047;
          fVar5 = param_1->field_0047 * *pfVar8;
          local_10 = local_10 + (int)pfVar8[8];
          local_7c = fVar5 * param_1->field_006F +
                     fVar4 * param_1->field_0087 + fVar6 * param_1->field_007B + param_1->field_0063
          ;
          local_78 = fVar5 * param_1->field_0073 +
                     fVar4 * param_1->field_008B + fVar6 * param_1->field_007F + param_1->field_0067
          ;
          local_74 = fVar5 * param_1->field_0077 +
                     fVar4 * param_1->field_008F + fVar6 * param_1->field_0083 + param_1->field_006B
          ;
          iVar14 = *(int *)(param_1->field_009F + uVar17 * 4);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          fVar4 = *(float *)(local_18 + 0x1c + iVar14) * param_1->field_0047;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          fVar6 = *(float *)(local_18 + 0x18 + iVar14) * param_1->field_0047;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          fVar5 = *(float *)(local_18 + 0x14 + iVar14) * param_1->field_0047;
          local_70 = fVar5 * param_1->field_006F +
                     fVar4 * param_1->field_0087 + fVar6 * param_1->field_007B + param_1->field_0063
          ;
          local_6c = fVar4 * param_1->field_008B +
                     fVar6 * param_1->field_007F + fVar5 * param_1->field_0073 + param_1->field_0067
          ;
          local_68 = fVar4 * param_1->field_008F +
                     fVar6 * param_1->field_0083 + fVar5 * param_1->field_0077 + param_1->field_006B
          ;
          if (((local_70 < _DAT_0079034c) || (local_6c < _DAT_0079034c)) ||
             ((local_68 < _DAT_0079034c ||
              (((lVar19 = Library::MSVCRT::__ftol(), g_worldGrid.sizeX <= (short)lVar19 ||
                (lVar19 = Library::MSVCRT::__ftol(), g_worldGrid.sizeY <= (short)lVar19)) ||
               (lVar19 = Library::MSVCRT::__ftol(), g_worldGrid.sizeZ <= (short)lVar19)))))) {
            *(undefined4 *)(param_1->field_0057 + local_c * 4) = 0xfffffffe;
            iVar14 = 0;
            if (param_1->field_0053 < 1) goto LAB_0061f035;
            piVar16 = (int *)param_1->field_0057;
            goto LAB_0061f028;
          }
          if ((uVar17 == 0) && (local_14 == *(int *)param_1->field_009B + -2)) {
            uVar22 = param_1->field_0044;
            iVar14 = param_1->field_0040;
            iVar20 = param_1->field_0020;
            iVar23 = 0xb1;
            iVar21 = 0x32;
            uVar7 = uVar17;
            uVar24 = uVar17;
            lVar19 = Library::MSVCRT::__ftol();
            iVar9 = (int)lVar19;
            lVar19 = Library::MSVCRT::__ftol();
            iVar10 = (int)lVar19;
            lVar19 = Library::MSVCRT::__ftol();
            iVar11 = (int)lVar19;
            lVar19 = Library::MSVCRT::__ftol();
            iVar12 = (int)lVar19;
            lVar19 = Library::MSVCRT::__ftol();
            iVar13 = (int)lVar19;
            lVar19 = Library::MSVCRT::__ftol();
            SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00601500::thunk_FUN_00601500
                      ((AnonReceiver_00601500 *)(param_1 + 1),(int)lVar19,iVar13,iVar12,iVar11,
                       iVar10,iVar9,iVar20,iVar21,iVar14,uVar22,iVar23,uVar7,uVar24);
          }
          if (*(int *)(param_1->field_0057 + uVar17 * 4) == 0) {
            uVar15 = 2;
            local_5f = 2;
            local_64 = 2;
          }
          else {
            uVar15 = 1;
            local_5f = 1;
            local_64 = 1;
          }
          local_60 = 0xac;
          local_5b = 0;
          if (param_1->field_0046 == '\0') {
            local_56 = g_playSystem_00802A38->field_00E4 + 0x32;
          }
          else {
            local_56 = 0;
          }
          local_5a = 0xffffffff;
          local_52 = (undefined1)uVar17;
          local_80 = 1;
          FUN_006e88c0(PTR_00807598,(int *)&local_5a,local_7c,local_78,local_74,local_70,local_6c,
                       local_68,local_64,0xac,uVar15,local_2c * 0x200 + DAT_008032d0,0xffffffff);
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
                lVar19 = Library::MSVCRT::__ftol();
                local_20 = (void *)((short)lVar19 + -1);
              }
              else {
                lVar19 = Library::MSVCRT::__ftol();
                local_20 = (void *)(int)(short)lVar19;
              }
              if (local_78 < _DAT_0079034c) {
                lVar19 = Library::MSVCRT::__ftol();
                local_34 = (int)(short)lVar19 - 1;
              }
              else {
                lVar19 = Library::MSVCRT::__ftol();
                local_34 = (uint)(short)lVar19;
              }
              if (local_7c < _DAT_0079034c) {
                lVar19 = Library::MSVCRT::__ftol();
                iVar14 = (short)lVar19 + -1;
              }
              else {
                lVar19 = Library::MSVCRT::__ftol();
                iVar14 = (int)(short)lVar19;
              }
              if (((((DAT_0080874d != -1) && (this->field_00F8 != 0)) &&
                   ((VisibleClassTy::sub_00558C00
                               (this,this->field_010C,iVar14,local_34,&local_38,&local_48),
                    -1 < (int)local_20 &&
                    (((((int)local_20 < 5 && (-1 < local_38)) && (local_38 < this->field_0030)) &&
                     ((iVar14 = local_48 + g_centeredOffsets5[(int)local_20], -1 < iVar14 &&
                      (iVar14 < this->field_0034)))))))) && (this->field_004C != (byte *)0x0)) &&
                 (this->field_004C[local_38 + iVar14 * this->field_0030] == 0)) goto LAB_0061eefe;
            }
          }
          Library::DKW::TBL::FUN_006ae1c0(&param_1->field_00A3->flags,&local_80);
          if (local_14 == *(int *)(param_1->field_009B + uVar17 * 4) + -2) {
            *(undefined4 *)(param_1->field_0057 + local_c * 4) = 0xfffffffe;
            iVar14 = 0;
            if (param_1->field_0053 < 1) goto LAB_0061efea;
            piVar16 = (int *)param_1->field_0057;
            goto LAB_0061efdd;
          }
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          iVar14 = *(int *)(*(int *)(param_1->field_009F + uVar17 * 4) + 0x24 + local_18);
          if (0 < iVar14) {
            *(int *)(param_1->field_0057 + param_1->field_0053 * 4) = iVar14;
            *(undefined4 *)(param_1->field_0057 + (local_30 + param_1->field_0053) * 4) =
                 *(undefined4 *)(*(int *)(param_1->field_009F + uVar17 * 4) + 0x24 + local_18);
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
          pDVar2 = param_1->field_00A3;
          local_34 = pDVar2->count;
          if (local_8 < local_34) {
            dVar3 = pDVar2->elementSize;
            local_44 = pDVar2->data;
            local_20 = (void *)(dVar3 * local_8 + (int)local_44);
            if (local_20 != (void *)0x0) {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              if (*(byte *)((int)local_20 + 0x2e) != uVar17) {
                local_24 = 1;
                pvVar18 = local_20;
                for (uVar7 = local_8; (int)uVar7 < (int)local_1c; uVar7 = uVar7 + 1) {
                  if (uVar7 < local_34) {
                    local_20 = pvVar18;
                    if ((pvVar18 != (void *)0x0) && (*(byte *)((int)pvVar18 + 0x2e) == uVar17)) {
                      local_24 = 0;
                      local_8 = uVar7;
                      break;
                    }
                  }
                  else {
                    local_20 = (void *)0x0;
                  }
                  pvVar18 = (void *)((int)pvVar18 + dVar3);
                }
              }
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              if (*(byte *)((int)local_20 + 0x2e) != uVar17) goto LAB_0061eb1a;
              if (local_8 < local_34) {
                pvVar18 = (void *)(dVar3 * local_8 + (int)local_44);
              }
              else {
                pvVar18 = (void *)0x0;
              }
              iVar14 = *(int *)(param_1->field_009F + uVar17 * 4);
              fVar4 = *(float *)(iVar14 + 8 + local_18) * param_1->field_0047;
              fVar6 = *(float *)(iVar14 + 4 + local_18) * param_1->field_0047;
              fVar5 = param_1->field_0047 * *(float *)(iVar14 + local_18);
              local_10 = local_10 + (int)((float *)(iVar14 + local_18))[8];
              local_7c = fVar5 * param_1->field_006F +
                         fVar4 * param_1->field_0087 + fVar6 * param_1->field_007B;
              local_78 = fVar4 * param_1->field_008B +
                         fVar6 * param_1->field_007F + fVar5 * param_1->field_0073;
              local_74 = fVar4 * param_1->field_008F +
                         fVar6 * param_1->field_0083 + fVar5 * param_1->field_0077;
              *(float *)((int)pvVar18 + 4) = local_7c + param_1->field_0063;
              *(float *)((int)pvVar18 + 8) = local_78 + param_1->field_0067;
              *(float *)((int)pvVar18 + 0xc) = local_74 + param_1->field_006B;
              iVar14 = *(int *)(param_1->field_009F + uVar17 * 4);
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              fVar4 = *(float *)(local_18 + 0x1c + iVar14) * param_1->field_0047;
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              fVar6 = *(float *)(local_18 + 0x18 + iVar14) * param_1->field_0047;
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              fVar5 = *(float *)(local_18 + 0x14 + iVar14) * param_1->field_0047;
              local_70 = fVar5 * param_1->field_006F +
                         fVar4 * param_1->field_0087 + fVar6 * param_1->field_007B;
              local_6c = fVar4 * param_1->field_008B +
                         fVar6 * param_1->field_007F + fVar5 * param_1->field_0073;
              local_68 = fVar4 * param_1->field_008F +
                         fVar6 * param_1->field_0083 + fVar5 * param_1->field_0077;
              *(float *)((int)pvVar18 + 0x10) = local_70 + param_1->field_0063;
              *(float *)((int)pvVar18 + 0x14) = local_6c + param_1->field_0067;
              local_44 = (void *)(local_68 + param_1->field_006B);
              *(void **)((int)pvVar18 + 0x18) = local_44;
              FUN_006e8c80(PTR_00807598,*(uint *)((int)pvVar18 + 0x26),
                           *(undefined4 *)((int)pvVar18 + 4),*(undefined4 *)((int)pvVar18 + 8),
                           *(undefined4 *)((int)pvVar18 + 0xc),*(undefined4 *)((int)pvVar18 + 0x10),
                           *(undefined4 *)((int)pvVar18 + 0x14),local_44);
              FUN_006e8d20(PTR_00807598,*(uint *)((int)pvVar18 + 0x26),
                           *(undefined4 *)((int)pvVar18 + 0x21),local_2c * 0x200 + DAT_008032d0);
              local_28 = local_28 + 1;
              local_8 = local_8 + 1;
            }
          }
        }
        local_18 = local_18 + 0x14;
        local_14 = local_14 + 1;
      } while (local_14 < *(int *)(param_1->field_009B + uVar17 * 4) + -1);
    }
  }
  goto LAB_0061f043;
  while( true ) {
    iVar14 = iVar14 + 1;
    piVar16 = piVar16 + 1;
    if (param_1->field_0053 <= iVar14) break;
LAB_0061f028:
    if (-1 < *piVar16) goto LAB_0061f043;
  }
LAB_0061f035:
  cVar1 = param_1->field_0046;
  goto joined_r0x0061f03a;
  while( true ) {
    iVar14 = iVar14 + 1;
    piVar16 = piVar16 + 1;
    if (param_1->field_0053 <= iVar14) break;
LAB_0061efdd:
    if (-1 < *piVar16) goto LAB_0061f043;
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

