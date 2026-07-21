
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00632e30(AnonShape_00632E30_A9A0278F *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  undefined4 *puVar5;
  int iVar6;
  float *pfVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  int local_14;
  float local_10;
  undefined4 local_c;
  float local_8;

  local_c = 0;
  local_8 = 0.0;
  switch(param_1->field_0011) {
  case 0:
    param_1->field_005D = DAT_007d1a54;
    local_8 = _DAT_0079c5a4 / (float)param_1->field_0019;
    param_1->field_0061 = DAT_007d1a58;
    param_1->field_0075 = DAT_007d1a64;
    param_1->field_0079 = DAT_007d1a68;
    param_1->field_0065 = DAT_007d1a5c;
    param_1->field_006D = DAT_007d1a60;
    param_1->field_007D = _DAT_007d1a6c * _DAT_0079d1a4;
    param_1->field_0081 = _DAT_007d1a70 * _DAT_0079d1a4;
    param_1->field_0085 = DAT_007d1a74;
    param_1->field_0089 = DAT_007d1a78;
    goto LAB_00632f7e;
  case 1:
    local_8 = _DAT_0079c5a4 / (float)param_1->field_0019;
    fVar1 = _DAT_007d1aa4 * _DAT_0079d1a4;
    param_1->field_0061 = 0;
    param_1->field_005D = fVar1;
    param_1->field_0075 = _DAT_007d1ab4 * _DAT_0079d1a4;
    param_1->field_0079 = _DAT_007d1ab8 * _DAT_0079d1a4;
    param_1->field_0065 = _DAT_007d1aac * _DAT_0079d1a4;
    param_1->field_006D = _DAT_007d1ab0 * _DAT_0079d1a4;
    param_1->field_0069 = _DAT_007d1ab4 * _DAT_0079d1a4;
    param_1->field_007D = _DAT_007d1abc * _DAT_0079d1a4;
    param_1->field_0081 = _DAT_007d1ac0 * _DAT_0079d1a4;
    param_1->field_0085 = DAT_007d1ac4;
    param_1->field_0089 = DAT_007d1ac8;
LAB_00632f7e:
    local_c = 1;
    param_1->field_008D = 0x40c90fdb;
    param_1->field_0091 = 0x40c90fdb;
    break;
  case 2:
    param_1->field_005D = DAT_007d1af4;
    local_8 = _DAT_0079c5a4 / (float)param_1->field_0019;
    param_1->field_0061 = DAT_007d1af8;
    fVar1 = _DAT_0079034c;
    param_1->field_0075 = _DAT_007d1b04 * _DAT_0079d1a4;
    param_1->field_0079 = _DAT_007d1b08 * _DAT_0079d1a4;
    param_1->field_0065 = _DAT_007d1afc * _DAT_0079d1a4;
    param_1->field_006D = _DAT_007d1b00 * _DAT_0079d1a4;
    param_1->field_007D = _DAT_007d1b0c * _DAT_0079d1a4;
    param_1->field_0081 = _DAT_007d1b10 * _DAT_0079d1a4;
    param_1->field_0085 = DAT_007d1b14;
    param_1->field_0089 = DAT_007d1b18;
    if (*(int *)param_1 != 0) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar6 = *(int *)(*(int *)param_1 + 0xc);
      uVar10 = 0;
      if (0 < iVar6) {
        do {
          iVar11 = *(int *)param_1;
          if (uVar10 < *(uint *)(iVar11 + 0xc)) {
            iVar11 = *(int *)(iVar11 + 8) * uVar10 + *(int *)(iVar11 + 0x1c);
          }
          else {
            iVar11 = 0;
          }
          if ((0 < (int)uVar10) && ((int)uVar10 % param_1->field_0019 == 0)) {
            fVar1 = _DAT_0079034c;
          }
          if (iVar11 != 0) {
            *(float *)(iVar11 + 0x21) = fVar1;
            fVar1 = fVar1 + local_8;
          }
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < iVar6);
      }
    }
    local_10 = 0.0;
    if (0 < param_1->field_001D) {
      pfVar7 = (float *)&param_1->field_0x21;
      do {
        fVar1 = (float)param_1->field_0091 - (float)(int)local_10 * param_1->field_007D;
        if (fVar1 < _DAT_0079034c) {
          if (_DAT_0079034c < *pfVar7) {
            uVar10 = param_1->field_0019 * (int)local_10;
            iVar6 = param_1->field_0019 + uVar10;
            if (*(int *)param_1 != 0) {
              for (; (int)uVar10 < iVar6; uVar10 = uVar10 + 1) {
                iVar11 = *(int *)param_1;
                if ((uVar10 < *(uint *)(iVar11 + 0xc)) &&
                   (iVar11 = *(int *)(iVar11 + 8) * uVar10 + *(int *)(iVar11 + 0x1c), iVar11 != 0))
                {
                  *(undefined4 *)(iVar11 + 8) = 0;
                }
              }
            }
          }
        }
        else if (*pfVar7 <= _DAT_0079034c) {
          uVar10 = param_1->field_0019 * (int)local_10;
          iVar6 = param_1->field_0019 + uVar10;
          if (*(int *)param_1 != 0) {
            for (; (int)uVar10 < iVar6; uVar10 = uVar10 + 1) {
              iVar11 = *(int *)param_1;
              if ((uVar10 < *(uint *)(iVar11 + 0xc)) &&
                 (iVar11 = *(int *)(iVar11 + 8) * uVar10 + *(int *)(iVar11 + 0x1c), iVar11 != 0)) {
                *(undefined4 *)(iVar11 + 8) = 1;
              }
            }
          }
        }
        local_10 = (float)((int)local_10 + 1);
        *pfVar7 = fVar1;
        pfVar7 = pfVar7 + 1;
      } while ((int)local_10 < param_1->field_001D);
    }
    break;
  case 3:
    iVar6 = Library::DKW::LIB::FUN_006aac70(param_1->field_0019 << 3);
    fVar1 = (float)param_1->field_006D - param_1->field_0069;
    param_1->field_0039 = iVar6;
    param_1->field_0031 = 0;
    bVar4 = fVar1 != _DAT_0079034c;
    param_1->field_0035 = 0;
    if (bVar4) {
      iVar11 = param_1->field_0019;
      local_10 = 0.0;
      fVar2 = (float)param_1->field_0089;
      if (0 < iVar11) {
        do {
          *(float *)(iVar6 + (int)local_10 * 4) =
               (float)(int)local_10 * (fVar1 / (float)(iVar11 + -1)) + param_1->field_0069;
          *(float *)(param_1->field_0039 + ((int)local_10 + param_1->field_0019) * 4) =
               (float)(int)local_10 * (fVar2 / (float)iVar11);
          iVar6 = param_1->field_0039;
          if (param_1->field_0045 < *(float *)(iVar6 + (int)local_10 * 4)) {
            param_1->field_0035 = param_1->field_0035 + 1;
          }
          else {
            param_1->field_0031 = param_1->field_0031 + 1;
          }
          local_10 = (float)((int)local_10 + 1);
        } while ((int)local_10 < param_1->field_0019);
      }
    }
    bVar4 = param_1->field_0081 != _DAT_0079034c;
    param_1->field_0071 = 0x40490fdb;
    if (bVar4) {
      lVar12 = Library::MSVCRT::__ftol();
      local_14 = (int)lVar12;
      if (local_14 < 1) {
        local_14 = 1;
      }
      param_1->field_0081 = _DAT_0079d1a4 / (float)local_14;
    }
    iVar6 = param_1->field_001D;
    param_1->field_0079 = 0;
    fVar1 = _DAT_0079d1a4 / (float)iVar6;
    param_1->field_0099 = iVar6 * 4;
    param_1->field_007D = fVar1;
    param_1->field_0075 = _DAT_0079c5a4 / (float)(iVar6 * 3);
    if (*(int *)param_1 != 0) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar6 = *(int *)(*(int *)param_1 + 0xc);
      uVar10 = 0;
      if (0 < iVar6) {
        do {
          iVar11 = *(int *)param_1;
          if (uVar10 < *(uint *)(iVar11 + 0xc)) {
            puVar5 = (undefined4 *)(*(int *)(iVar11 + 8) * uVar10 + *(int *)(iVar11 + 0x1c));
          }
          else {
            puVar5 = (undefined4 *)0x0;
          }
          *(undefined1 *)(puVar5 + 3) = 0;
          *(undefined4 *)((int)puVar5 + 0x21) = 0;
          if ((int)uVar10 < param_1->field_001D * 2) {
            uVar8 = param_1->field_0025;
          }
          else {
            uVar8 = param_1->field_0029;
          }
          *puVar5 = uVar8;
          if (uVar10 == iVar6 - 1U) {
            *puVar5 = param_1->field_0025;
          }
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < iVar6);
      }
    }
    uVar10 = PTR_00802a38->field_00E4;
    param_1->field_002D = 0;
    param_1->field_0005 = uVar10;
    break;
  case 4:
    param_1->field_005D = DAT_007d1b7c;
    local_8 = _DAT_0079c5a4 / (float)param_1->field_0019;
    param_1->field_0061 = DAT_007d1b80;
    param_1->field_0075 = _DAT_007d1b8c * _DAT_0079d1a4;
    param_1->field_0079 = _DAT_007d1b90 * _DAT_0079d1a4;
    param_1->field_0065 = _DAT_007d1b84 * _DAT_0079d1a4;
    param_1->field_006D = _DAT_007d1b88 * _DAT_0079d1a4;
    param_1->field_007D = _DAT_007d1b94 * _DAT_0079d1a4;
    param_1->field_0081 = _DAT_007d1b98 * _DAT_0079d1a4;
    param_1->field_0085 = DAT_007d1b9c;
    param_1->field_0089 = DAT_007d1ba0;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((*(int *)param_1 != 0) && (iVar6 = *(int *)(*(int *)param_1 + 0xc), iVar6 != 0)) {
      uVar10 = 0;
      local_10 = 0.0;
      local_8 = _DAT_0079c5a4 / (float)param_1->field_001D;
      if (0 < param_1->field_001D) {
        do {
          iVar11 = *(int *)param_1;
          if ((uVar10 < *(uint *)(iVar11 + 0xc)) &&
             (iVar11 = *(int *)(iVar11 + 8) * uVar10 + *(int *)(iVar11 + 0x1c), iVar11 != 0)) {
            *(float *)(iVar11 + 0x21) = local_10;
            *(undefined4 *)(iVar11 + 0x25) = param_1->field_006D;
            *(undefined4 *)(iVar11 + 8) = 1;
          }
          uVar9 = param_1->field_001D + uVar10;
          iVar11 = *(int *)param_1;
          if ((uVar9 < *(uint *)(iVar11 + 0xc)) &&
             (iVar11 = *(int *)(iVar11 + 8) * uVar9 + *(int *)(iVar11 + 0x1c), iVar11 != 0)) {
            *(float *)(iVar11 + 0x21) = local_10;
            *(undefined4 *)(iVar11 + 0x25) = param_1->field_006D;
            param_1->field_0071 = param_1->field_006D;
            uVar9 = Library::MSVCRT::FUN_0072e6c0();
            *(undefined4 *)(iVar11 + 8) = 1;
            *(undefined4 *)(iVar11 + 0x1d) = 7;
            *(int *)(iVar11 + 0x19) = (int)uVar9 % 7;
          }
          local_10 = local_10 + local_8;
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < param_1->field_001D);
      }
      for (uVar10 = param_1->field_001D * 2; (int)uVar10 < iVar6; uVar10 = uVar10 + 1) {
        iVar11 = *(int *)param_1;
        if (uVar10 < *(uint *)(iVar11 + 0xc)) {
          iVar11 = *(int *)(iVar11 + 8) * uVar10 + *(int *)(iVar11 + 0x1c);
        }
        else {
          iVar11 = 0;
        }
        uVar9 = Library::MSVCRT::FUN_0072e6c0();
        local_8 = (float)((int)uVar9 % 0x168) * _DAT_0079d1a8;
        if (iVar11 != 0) {
          *(float *)(iVar11 + 0x21) = local_8;
          uVar9 = Library::MSVCRT::FUN_0072e6c0();
          fVar1 = (float)param_1->field_0079;
          fVar2 = (float)param_1->field_006D;
          fVar3 = (float)param_1->field_006D;
          *(undefined4 *)(iVar11 + 0x19) = 0;
          *(float *)(iVar11 + 0x25) =
               ((fVar1 - fVar2) * (float)((int)uVar9 % (iVar6 + 1))) / (float)iVar6 + fVar3;
          uVar9 = PTR_00802a38->field_00E4;
          *(undefined4 *)(iVar11 + 8) = 1;
          *(uint *)(iVar11 + 0x35) = uVar9;
        }
      }
    }
  }
  iVar6 = param_1->field_0011;
  if (((iVar6 == 0) || (iVar6 == 1)) && (*(int *)param_1 != 0)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar10 = *(uint *)(*(int *)param_1 + 0xc);
    if (iVar6 == 1) {
      iVar6 = param_1->field_001D;
      iVar11 = 0;
      uVar10 = uVar10 - iVar6;
      fVar1 = _DAT_0079c5a4 / (float)iVar6;
      fVar2 = fVar1 * _DAT_00790784;
      uVar9 = uVar10;
      if (0 < iVar6) {
        do {
          iVar6 = *(int *)param_1;
          if ((uVar9 < *(uint *)(iVar6 + 0xc)) &&
             (iVar6 = *(int *)(iVar6 + 8) * uVar9 + *(int *)(iVar6 + 0x1c), iVar6 != 0)) {
            *(float *)(iVar6 + 0x21) = fVar2;
            fVar2 = fVar2 + fVar1;
            *(undefined4 *)(iVar6 + 8) = 1;
            *(undefined4 *)(iVar6 + 0x19) = 3;
          }
          iVar11 = iVar11 + 1;
          uVar9 = uVar9 + 1;
        } while (iVar11 < param_1->field_001D);
      }
    }
    uVar9 = 0;
    fVar1 = _DAT_0079034c;
    if (0 < (int)uVar10) {
      do {
        iVar6 = *(int *)param_1;
        if ((uVar9 < *(uint *)(iVar6 + 0xc)) &&
           (iVar6 = *(int *)(iVar6 + 8) * uVar9 + *(int *)(iVar6 + 0x1c), iVar6 != 0)) {
          *(float *)(iVar6 + 0x21) = fVar1;
          fVar1 = fVar1 + local_8;
          *(undefined4 *)(iVar6 + 8) = 1;
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar10);
    }
  }
  return local_c;
}

