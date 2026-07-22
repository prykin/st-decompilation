
/* Inferred SoundClassTy method.

   Central sound playback dispatcher.
   mode selects one of 12 playback behaviours.
   soundId identifies a sound resource.
   position is optional and supplies world coordinates.
   Calculates distance, volume and stereo/3D placement.

   Inferred from:
   - proximity to SoundClassTy::CheckFader
   - calls through thunk 00404BD8
   - low-level sound functions in the 006Cxxxx range */

void __thiscall
SoundClassTy::PlaySound
          (SoundClassTy *this,SoundPlayMode mode,char *soundName,int soundId,SoundPosition *position
          ,int flags)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  DWORD DVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  SoundClassTy *pSVar15;
  AnonShape_0071A990_7656000F *pAVar16;
  InternalExceptionFrame local_64;
  uint *local_20;
  uint *local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  uint local_c;
  SoundClassTy *local_8;

  if (this->field_0F8B == 0) {
    return;
  }
  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_64.jumpBuffer,0);
  pSVar15 = local_8;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_64.previous;
    return;
  }
  switch(mode) {
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  case SOUND_MODE_1:
    if (((DAT_00807300._1_1_ & 4) != 0) &&
       (puVar12 = FUN_0071a990((AnonShape_0071A990_7656000F *)local_8->field_0DF3,soundId,-1,
                               (undefined1 *)0x0), puVar12 != (uint *)0x0)) {
      FUN_006c1390(puVar12,0,1,DAT_0080730e,0,2,3);
      g_currentExceptionFrame = local_64.previous;
      return;
    }
    break;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  case SOUND_MODE_2:
    if ((DAT_00807300._1_1_ & 2) == 0) {
      g_currentExceptionFrame = local_64.previous;
      return;
    }
    uVar10 = local_c >> 8;
    local_c = local_c & 0xffffff00;
    if ((-1 < position->x) && (-1 < position->y)) {
      uVar7 = local_8->field_10DD - position->y;
      uVar14 = (int)uVar7 >> 0x1f;
      uVar8 = local_8->field_10D9 - position->x;
      iVar4 = (uVar7 ^ uVar14) - uVar14;
      uVar7 = (int)uVar8 >> 0x1f;
      iVar9 = (uVar8 ^ uVar7) - uVar7;
      if (iVar4 < iVar9) {
        iVar4 = iVar9;
      }
      iVar4 = iVar4 + 1;
      local_8->field_10F1 = iVar4;
      iVar9 = *(int *)(&DAT_007c9788 + local_8->field_10E1 * 0x10);
      bVar3 = (byte)iVar9;
      if (iVar4 <= iVar9) {
        bVar3 = (byte)iVar4;
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_c = CONCAT31((int3)uVar10,bVar3);
      if (iVar9 <= (int)(uint)bVar3) {
        g_currentExceptionFrame = local_64.previous;
        return;
      }
    }
    puVar12 = FUN_0071a990((AnonShape_0071A990_7656000F *)local_8->field_0DF3,soundId,-1,
                           (undefined1 *)0x0);
    if (puVar12 == (uint *)0x0) {
      g_currentExceptionFrame = local_64.previous;
      return;
    }
    local_14 = position->x;
    local_1c = puVar12;
    if (((int)local_14 < 0) || (local_10 = position->y, local_10 < 0)) {
      iVar9 = 10;
      iVar4 = 4;
LAB_0056959b:
      iVar4 = FUN_006c1390(puVar12,0,0,DAT_0080730e,0,iVar4,iVar9);
    }
    else if (DAT_00807363 == '\0') {
      iVar4 = pSVar15->field_10E9;
      iVar9 = pSVar15->field_10ED;
      uVar10 = (iVar4 * local_14 - local_10) + iVar9;
      uVar7 = (int)uVar10 >> 0x1f;
      iVar2 = (int)(((uVar10 ^ uVar7) - uVar7) * 7) / 10;
      iVar13 = pSVar15->field_10E1 * 0x10;
      pSVar15->field_10F1 = iVar2;
      iVar11 = *(int *)(&DAT_007c9788 + iVar13);
      if (iVar2 <= *(int *)(&DAT_007c9788 + iVar13)) {
        iVar11 = iVar2;
      }
      if (iVar11 < *(int *)(&DAT_007c9790 + iVar13)) {
        uVar10 = (iVar4 * position->x - position->y) + iVar9;
        uVar7 = (int)uVar10 >> 0x1f;
        iVar2 = (int)(((uVar10 ^ uVar7) - uVar7) * 7) / 10;
        pSVar15->field_10F1 = iVar2;
        local_18 = *(int *)(&DAT_007c9788 + iVar13);
        if (iVar2 <= *(int *)(&DAT_007c9788 + iVar13)) {
          local_18 = iVar2;
        }
        local_10 = (int)(1000 / (longlong)*(int *)(&DAT_007c9790 + iVar13)) * local_18;
      }
      else {
        local_10 = 1000;
      }
      iVar9 = iVar4 * position->x + iVar9;
      pSVar15->field_10F1 = iVar9;
      iVar4 = position->y;
      if (iVar9 == iVar4) {
        local_14 = 0;
      }
      else {
        if ((pSVar15->field_10E5 == 0) || (pSVar15->field_10E5 == 3)) {
          bVar1 = iVar9 <= iVar4;
        }
        else {
          bVar1 = iVar4 <= iVar9;
        }
        local_14 = (bVar1 - 1 & 2) - 1;
      }
      iVar4 = *(int *)(&DAT_007c9790 + iVar13);
      local_18 = local_c & 0xff;
      if (iVar4 < (int)local_18) {
        iVar9 = *(int *)(&DAT_007c978c + iVar13);
        if (iVar9 < (int)local_18) {
          uVar10 = (((int)(*(int *)(&DAT_007c9794 + iVar13) * (DAT_0080730e + 4000)) / 100) * 2 +
                   -16000) / 3;
        }
        else {
          iVar2 = (int)(*(int *)(&DAT_007c9794 + iVar13) * (DAT_0080730e + 4000)) / 100;
          iVar4 = *(int *)(&DAT_007c9790 + iVar13);
          uVar10 = (iVar2 * 2 + -16000) / 3 +
                   (int)((((8000 - iVar2) * 2) / 3 + -4000 + iVar2) * (iVar9 - local_18)) /
                   (iVar9 - iVar4);
          pSVar15 = local_8;
        }
      }
      else {
        uVar10 = (int)(*(int *)(&DAT_007c9794 + iVar13) * (DAT_0080730e + 4000)) / 100 - 4000;
      }
      if (iVar4 < (int)local_18) {
        iVar4 = *(int *)(&DAT_007c9788 + iVar13);
        if (iVar4 < (int)local_18) {
          bVar3 = 0;
        }
        else {
          bVar3 = (byte)((int)((iVar4 - local_18) * 0xff) / iVar4);
        }
      }
      else {
        bVar3 = 0xff;
      }
      iVar4 = FUN_006c1390(puVar12,bVar3,4,uVar10,local_14 * local_10,4,10);
    }
    else {
      iVar4 = pSVar15->field_10E1 * 0x10;
      uVar10 = local_c & 0xff;
      local_c = *(uint *)(&DAT_007c9790 + iVar4);
      if ((int)local_c < (int)uVar10) {
        iVar9 = *(int *)(&DAT_007c9788 + iVar4);
        if (iVar9 < (int)uVar10) {
          bVar3 = 0;
        }
        else {
          bVar3 = (byte)((int)((iVar9 - uVar10) * 0xff) / iVar9);
        }
      }
      else {
        bVar3 = 0xff;
      }
      iVar4 = FUN_006c21e0(puVar12,bVar3,4,DAT_0080730e,(uint)(float)(int)local_14,
                           (uint)(float)local_10,0,(uint)(float)(int)local_c,
                           (uint)(float)*(int *)(&DAT_007c9788 + iVar4),4,10);
    }
    goto LAB_005695ae;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  case SOUND_MODE_3:
    if ((DAT_00807300._1_1_ & 4) == 0) {
      g_currentExceptionFrame = local_64.previous;
      return;
    }
    if ((-1 < position->x) && (-1 < position->y)) {
      uVar10 = local_8->field_10DD - position->y;
      uVar8 = (int)uVar10 >> 0x1f;
      uVar7 = local_8->field_10D9 - position->x;
      iVar4 = (uVar10 ^ uVar8) - uVar8;
      uVar10 = (int)uVar7 >> 0x1f;
      iVar9 = (uVar7 ^ uVar10) - uVar10;
      if (iVar4 < iVar9) {
        iVar4 = iVar9;
      }
      iVar4 = iVar4 + 1;
      local_8->field_10F1 = iVar4;
      iVar9 = local_8->field_10E1 * 0x10;
      bVar3 = (byte)*(int *)(&DAT_007c9788 + iVar9);
      if (iVar4 <= *(int *)(&DAT_007c9788 + iVar9)) {
        bVar3 = (byte)iVar4;
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_18 = CONCAT31(local_18._1_3_,bVar3);
      if (*(int *)(&DAT_007c978c + iVar9) <= (int)(uint)bVar3) {
        g_currentExceptionFrame = local_64.previous;
        return;
      }
    }
    puVar12 = FUN_0071a990((AnonShape_0071A990_7656000F *)local_8->field_0DF3,soundId,-1,
                           (undefined1 *)0x0);
    if (puVar12 == (uint *)0x0) {
      g_currentExceptionFrame = local_64.previous;
      return;
    }
    local_14 = position->x;
    local_20 = puVar12;
    if (((int)local_14 < 0) || (local_10 = position->y, local_10 < 0)) {
      iVar9 = 0x11;
      iVar4 = 0xb;
      goto LAB_0056959b;
    }
    if (DAT_00807363 == '\0') {
      iVar4 = pSVar15->field_10E9;
      iVar9 = pSVar15->field_10ED;
      uVar10 = (iVar4 * local_14 - local_10) + iVar9;
      uVar7 = (int)uVar10 >> 0x1f;
      iVar2 = (int)(((uVar10 ^ uVar7) - uVar7) * 7) / 10;
      iVar13 = pSVar15->field_10E1 * 0x10;
      pSVar15->field_10F1 = iVar2;
      iVar11 = *(int *)(&DAT_007c9788 + iVar13);
      if (iVar2 <= *(int *)(&DAT_007c9788 + iVar13)) {
        iVar11 = iVar2;
      }
      if (iVar11 < *(int *)(&DAT_007c9790 + iVar13)) {
        uVar10 = (iVar4 * position->x - position->y) + iVar9;
        uVar7 = (int)uVar10 >> 0x1f;
        iVar2 = (int)(((uVar10 ^ uVar7) - uVar7) * 7) / 10;
        pSVar15->field_10F1 = iVar2;
        local_14 = *(int *)(&DAT_007c9788 + iVar13);
        if (iVar2 <= *(int *)(&DAT_007c9788 + iVar13)) {
          local_14 = iVar2;
        }
        local_c = (int)(1000 / (longlong)*(int *)(&DAT_007c9790 + iVar13)) * local_14;
      }
      else {
        local_c = 1000;
      }
      iVar9 = iVar4 * position->x + iVar9;
      pSVar15->field_10F1 = iVar9;
      iVar4 = position->y;
      if (iVar9 == iVar4) {
        local_10 = 0;
      }
      else {
        if ((pSVar15->field_10E5 == 0) || (pSVar15->field_10E5 == 3)) {
          bVar1 = iVar9 <= iVar4;
        }
        else {
          bVar1 = iVar4 <= iVar9;
        }
        local_10 = (bVar1 - 1 & 2) - 1;
      }
      iVar4 = *(int *)(&DAT_007c9790 + iVar13);
      local_14 = local_18 & 0xff;
      if (iVar4 < (int)local_14) {
        iVar9 = *(int *)(&DAT_007c978c + iVar13);
        if (iVar9 < (int)local_14) {
          uVar10 = (((int)(*(int *)(&DAT_007c9794 + iVar13) * (DAT_0080730e + 4000)) / 100) * 2 +
                   -16000) / 3;
        }
        else {
          iVar2 = (int)(*(int *)(&DAT_007c9794 + iVar13) * (DAT_0080730e + 4000)) / 100;
          iVar4 = *(int *)(&DAT_007c9790 + iVar13);
          uVar10 = (iVar2 * 2 + -16000) / 3 +
                   (int)((((8000 - iVar2) * 2) / 3 + -4000 + iVar2) * (iVar9 - local_14)) /
                   (iVar9 - iVar4);
          pSVar15 = local_8;
        }
      }
      else {
        uVar10 = (int)(*(int *)(&DAT_007c9794 + iVar13) * (DAT_0080730e + 4000)) / 100 - 4000;
      }
      if (iVar4 < (int)local_14) {
        iVar4 = *(int *)(&DAT_007c9788 + iVar13);
        if (iVar4 < (int)local_14) {
          bVar3 = 0;
        }
        else {
          bVar3 = (byte)((int)((iVar4 - local_14) * 0xff) / iVar4);
        }
      }
      else {
        bVar3 = 0xff;
      }
      iVar4 = FUN_006c1390(puVar12,bVar3,4,uVar10,local_10 * local_c,0xb,0x11);
    }
    else {
      iVar4 = pSVar15->field_10E1 * 0x10;
      uVar10 = local_18 & 0xff;
      local_c = *(uint *)(&DAT_007c9790 + iVar4);
      if ((int)local_c < (int)uVar10) {
        iVar9 = *(int *)(&DAT_007c9788 + iVar4);
        if (iVar9 < (int)uVar10) {
          bVar3 = 0;
        }
        else {
          bVar3 = (byte)((int)((iVar9 - uVar10) * 0xff) / iVar9);
        }
      }
      else {
        bVar3 = 0xff;
      }
      iVar4 = FUN_006c21e0(puVar12,bVar3,4,DAT_0080730e,(uint)(float)(int)local_14,
                           (uint)(float)local_10,0,(uint)(float)(int)local_c,
                           (uint)(float)*(int *)(&DAT_007c978c + iVar4),0xb,0x11);
    }
LAB_005695ae:
    if (-1 < iVar4) {
      *(int *)(&pSVar15->field_0xe0b + iVar4 * 0xc) = position->x;
      *(int *)(&pSVar15->field_0xe0f + iVar4 * 0xc) = position->y;
      *(int *)(&pSVar15->field_0xe13 + iVar4 * 0xc) = position->unknown;
      g_currentExceptionFrame = local_64.previous;
      return;
    }
    break;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  case SOUND_MODE_4:
    if (((DAT_00807300._1_1_ & 1) != 0) &&
       (iVar4 = thunk_FUN_00568780(local_8,0x12,0x14), iVar4 != 0)) {
      uVar10 = local_c >> 8;
      local_c = local_c & 0xffffff00;
      if ((-1 < position->x) && (-1 < position->y)) {
        uVar7 = pSVar15->field_10DD - position->y;
        uVar14 = (int)uVar7 >> 0x1f;
        uVar8 = pSVar15->field_10D9 - position->x;
        iVar4 = (uVar7 ^ uVar14) - uVar14;
        uVar7 = (int)uVar8 >> 0x1f;
        iVar9 = (uVar8 ^ uVar7) - uVar7;
        if (iVar4 < iVar9) {
          iVar4 = iVar9;
        }
        iVar4 = iVar4 + 1;
        pSVar15->field_10F1 = iVar4;
        iVar9 = *(int *)(&DAT_007c9788 + pSVar15->field_10E1 * 0x10);
        bVar3 = (byte)iVar9;
        if (iVar4 <= iVar9) {
          bVar3 = (byte)iVar4;
        }
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_c = CONCAT31((int3)uVar10,bVar3);
        if (iVar9 <= (int)(uint)bVar3) {
          g_currentExceptionFrame = local_64.previous;
          return;
        }
      }
      local_1c = FUN_0071a990((AnonShape_0071A990_7656000F *)pSVar15->field_0DF3,soundId,-1,
                              (undefined1 *)0x0);
      if (local_1c != (uint *)0x0) {
        local_14 = position->x;
        if (((int)local_14 < 0) || (local_10 = position->y, local_10 < 0)) {
          iVar4 = FUN_006c1390(local_1c,0,2,DAT_0080730e,0,0x12,0x14);
        }
        else if (DAT_00807363 == '\0') {
          iVar4 = pSVar15->field_10E9;
          iVar9 = pSVar15->field_10ED;
          uVar10 = (iVar4 * local_14 - local_10) + iVar9;
          uVar7 = (int)uVar10 >> 0x1f;
          iVar2 = (int)(((uVar10 ^ uVar7) - uVar7) * 7) / 10;
          iVar13 = pSVar15->field_10E1 * 0x10;
          pSVar15->field_10F1 = iVar2;
          iVar11 = *(int *)(&DAT_007c9788 + iVar13);
          if (iVar2 <= *(int *)(&DAT_007c9788 + iVar13)) {
            iVar11 = iVar2;
          }
          if (iVar11 < *(int *)(&DAT_007c9790 + iVar13)) {
            uVar10 = (iVar4 * position->x - position->y) + iVar9;
            uVar7 = (int)uVar10 >> 0x1f;
            iVar2 = (int)(((uVar10 ^ uVar7) - uVar7) * 7) / 10;
            pSVar15->field_10F1 = iVar2;
            local_18 = *(int *)(&DAT_007c9788 + iVar13);
            if (iVar2 <= *(int *)(&DAT_007c9788 + iVar13)) {
              local_18 = iVar2;
            }
            local_14 = (int)(1000 / (longlong)*(int *)(&DAT_007c9790 + iVar13)) * local_18;
          }
          else {
            local_14 = 1000;
          }
          iVar9 = iVar4 * position->x + iVar9;
          pSVar15->field_10F1 = iVar9;
          iVar4 = position->y;
          if (iVar9 == iVar4) {
            local_18 = 0;
          }
          else if ((pSVar15->field_10E5 == 0) || (pSVar15->field_10E5 == 3)) {
            local_18 = ((iVar9 <= iVar4) - 1 & 2) - 1;
          }
          else {
            local_18 = ((iVar4 <= iVar9) - 1 & 2) - 1;
          }
          iVar4 = *(int *)(&DAT_007c9790 + iVar13);
          local_20 = (uint *)(local_c & 0xff);
          if (iVar4 < (int)local_20) {
            iVar9 = *(int *)(&DAT_007c978c + iVar13);
            if (iVar9 < (int)local_20) {
              uVar10 = (((int)(*(int *)(&DAT_007c9794 + iVar13) * (DAT_0080730e + 4000)) / 100) * 2
                       + -16000) / 3;
            }
            else {
              iVar2 = (int)(*(int *)(&DAT_007c9794 + iVar13) * (DAT_0080730e + 4000)) / 100;
              uVar10 = (iVar2 * 2 + -16000) / 3 +
                       ((((8000 - iVar2) * 2) / 3 + -4000 + iVar2) * (iVar9 - (int)local_20)) /
                       (iVar9 - iVar4);
            }
          }
          else {
            uVar10 = (int)(*(int *)(&DAT_007c9794 + iVar13) * (DAT_0080730e + 4000)) / 100 - 4000;
          }
          local_c = iVar4;
          iVar4 = FUN_006c1390(local_1c,0,6,uVar10,local_18 * local_14,0x12,0x14);
        }
        else {
          iVar4 = pSVar15->field_10E1 * 0x10;
          uVar10 = local_c & 0xff;
          local_c = *(uint *)(&DAT_007c9790 + iVar4);
          if ((int)local_c < (int)uVar10) {
            iVar9 = *(int *)(&DAT_007c9788 + iVar4);
            if (iVar9 < (int)uVar10) {
              bVar3 = 0;
            }
            else {
              bVar3 = (byte)((int)((iVar9 - uVar10) * 0xff) / iVar9);
            }
          }
          else {
            bVar3 = 0xff;
          }
          iVar4 = FUN_006c21e0(local_1c,bVar3,6,DAT_0080730e,(uint)(float)(int)local_14,
                               (uint)(float)local_10,0,(uint)(float)(int)local_c,
                               (uint)(float)*(int *)(&DAT_007c9788 + iVar4),0x12,0x14);
        }
        if (-1 < iVar4) {
          *(int *)(&pSVar15->field_0xe0b + iVar4 * 0xc) = position->x;
          *(int *)(&pSVar15->field_0xe0f + iVar4 * 0xc) = position->y;
          *(int *)(&pSVar15->field_0xe13 + iVar4 * 0xc) = position->unknown;
          g_currentExceptionFrame = local_64.previous;
          return;
        }
      }
    }
    break;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  case SOUND_MODE_5:
    if (((DAT_00807300._1_1_ & 8) != 0) &&
       (puVar12 = FUN_0071a990((AnonShape_0071A990_7656000F *)local_8->field_0DF3,soundId,-1,
                               (undefined1 *)0x0), puVar12 != (uint *)0x0)) {
      FUN_006c1390(puVar12,0,(-(uint)(flags != 0) & 0xfffffffe) + 2,DAT_0080730e,0,0x15,0x19);
      g_currentExceptionFrame = local_64.previous;
      return;
    }
    break;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  case SOUND_MODE_6:
    if (((DAT_00807300._1_1_ & 1) != 0) &&
       (puVar12 = FUN_0071a990((AnonShape_0071A990_7656000F *)local_8->field_0DF3,soundId,-1,
                               (undefined1 *)0x0), puVar12 != (uint *)0x0)) {
      FUN_006c1390(puVar12,0,2,DAT_0080730e,0,0x1b,0x1d);
      g_currentExceptionFrame = local_64.previous;
      return;
    }
    break;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  case SOUND_MODE_7:
    if (((DAT_00807300._1_1_ & 4) != 0) &&
       (puVar12 = FUN_0071a990((AnonShape_0071A990_7656000F *)local_8->field_0DF3,soundId,-1,
                               (undefined1 *)0x0), puVar12 != (uint *)0x0)) {
      FUN_006c1390(puVar12,0,2,DAT_0080730e,0,0x1e,0x1f);
      g_currentExceptionFrame = local_64.previous;
      return;
    }
    break;
  case SOUND_MODE_8:
    if (soundId == 0) {
      iVar4 = 0x10;
      pAVar16 = (AnonShape_0071A990_7656000F *)local_8->field_0DF3;
    }
    else {
      pAVar16 = (AnonShape_0071A990_7656000F *)local_8->field_0DF3;
      iVar4 = soundId;
    }
    puVar12 = FUN_0071a990(pAVar16,iVar4,-1,(undefined1 *)0x0);
    if (puVar12 != (uint *)0x0) {
      FUN_006c1390(puVar12,0,(-(uint)(soundId != 0) & 0xfffffff7) + 9,DAT_0080730e,0,0,0);
      g_currentExceptionFrame = local_64.previous;
      return;
    }
    break;
  case SOUND_MODE_9:
    if (soundId == 0) {
      iVar4 = 0x12;
      pAVar16 = (AnonShape_0071A990_7656000F *)local_8->field_0DF3;
    }
    else {
      pAVar16 = (AnonShape_0071A990_7656000F *)local_8->field_0DF3;
      iVar4 = soundId;
    }
    puVar12 = FUN_0071a990(pAVar16,iVar4,-1,(undefined1 *)0x0);
    if (puVar12 != (uint *)0x0) {
      FUN_006c1390(puVar12,0,(-(uint)(soundId != 0) & 0xfffffff7) + 9,DAT_0080730e,0,0,0);
      g_currentExceptionFrame = local_64.previous;
      return;
    }
    break;
  case SOUND_MODE_10:
    if (soundId == 0) {
      iVar4 = 0x14;
      pAVar16 = (AnonShape_0071A990_7656000F *)local_8->field_0DF3;
    }
    else {
      pAVar16 = (AnonShape_0071A990_7656000F *)local_8->field_0DF3;
      iVar4 = soundId;
    }
    puVar12 = FUN_0071a990(pAVar16,iVar4,-1,(undefined1 *)0x0);
    if (puVar12 != (uint *)0x0) {
      FUN_006c1390(puVar12,0,(-(uint)(soundId != 0) & 0xfffffff7) + 9,DAT_0080730e,0,0,0);
      g_currentExceptionFrame = local_64.previous;
      return;
    }
    break;
  case SOUND_MODE_11:
    puVar12 = (uint *)Library::Ourlib::MFWAV::mfWavLoad
                                ((cMf32 *)local_8->field_0DEF,soundName,0,(ushort *)0x0);
    if (puVar12 != (uint *)0x0) {
      pSVar15->field_0E03 = pSVar15->field_0E07;
      uVar5 = FUN_006c1390(puVar12,0,1,DAT_0080730a,0,0,1);
      pSVar15->field_0E07 = uVar5;
      DVar6 = timeGetTime();
      pSVar15->field_0DFF = DVar6;
      g_currentExceptionFrame = local_64.previous;
      return;
    }
    break;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  case SOUND_MODE_12:
    if ((DAT_00807300._1_1_ & 1) == 0) {
      g_currentExceptionFrame = local_64.previous;
      return;
    }
    puVar12 = (uint *)0x0;
    if ((soundName == (char *)0x0) || (*soundName == '\0')) {
      if (0 < soundId) {
        puVar12 = FUN_0071a990((AnonShape_0071A990_7656000F *)local_8->field_0DF3,soundId,-1,
                               (undefined1 *)0x0);
      }
LAB_00569cc6:
      if (puVar12 == (uint *)0x0) {
        g_currentExceptionFrame = local_64.previous;
        return;
      }
    }
    else {
      if (g_cMf32_00806758 != (cMf32 *)0x0) {
        puVar12 = (uint *)Library::Ourlib::MFWAV::mfWavLoad
                                    (g_cMf32_00806758,soundName,0,(ushort *)0x0);
      }
      if (puVar12 == (uint *)0x0) {
        if (g_cMf32_00806798 != (cMf32 *)0x0) {
          puVar12 = (uint *)Library::Ourlib::MFWAV::mfWavLoad
                                      (g_cMf32_00806798,soundName,0,(ushort *)0x0);
        }
        if (puVar12 == (uint *)0x0) {
          puVar12 = (uint *)Library::Ourlib::MFWAV::mfWavLoad
                                      ((cMf32 *)local_8->field_0DEF,soundName,0,(ushort *)0x0);
          goto LAB_00569cc6;
        }
      }
    }
    bVar3 = DAT_008033f4;
    DAT_008033f4 = DAT_008033f4 + 1;
    FUN_006c1390(puVar12,bVar3,2,DAT_0080730e,0,0x1a,0x1a);
  }
  g_currentExceptionFrame = local_64.previous;
  return;
}

