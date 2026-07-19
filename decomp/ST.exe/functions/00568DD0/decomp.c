
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
  uint uVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  SoundClassTy *pSVar14;
  int iVar15;
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
  iVar4 = Library::MSVCRT::__setjmp3(local_64.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar14 = local_8;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_64.previous;
    return;
  }
  switch(mode) {
  case SOUND_MODE_1:
    if (((DAT_00807300._1_1_ & 4) != 0) &&
       (puVar11 = (uint *)FUN_0071a990(local_8->field_0DF3,soundId,-1,(undefined1 *)0x0),
       puVar11 != (uint *)0x0)) {
      FUN_006c1390(puVar11,0,1,DAT_0080730e,0,2,3);
      g_currentExceptionFrame = local_64.previous;
      return;
    }
    break;
  case SOUND_MODE_2:
    if ((DAT_00807300._1_1_ & 2) == 0) {
      g_currentExceptionFrame = local_64.previous;
      return;
    }
    uVar9 = local_c >> 8;
    local_c = local_c & 0xffffff00;
    if ((-1 < position->x) && (-1 < position->y)) {
      uVar7 = local_8->field_10DD - position->y;
      uVar13 = (int)uVar7 >> 0x1f;
      uVar8 = local_8->field_10D9 - position->x;
      iVar4 = (uVar7 ^ uVar13) - uVar13;
      uVar7 = (int)uVar8 >> 0x1f;
      iVar15 = (uVar8 ^ uVar7) - uVar7;
      if (iVar4 < iVar15) {
        iVar4 = iVar15;
      }
      iVar4 = iVar4 + 1;
      local_8->field_10F1 = iVar4;
      iVar15 = *(int *)(&DAT_007c9788 + local_8->field_10E1 * 0x10);
      bVar3 = (byte)iVar15;
      if (iVar4 <= iVar15) {
        bVar3 = (byte)iVar4;
      }
      local_c = CONCAT31((int3)uVar9,bVar3);
      if (iVar15 <= (int)(uint)bVar3) {
        g_currentExceptionFrame = local_64.previous;
        return;
      }
    }
    puVar11 = (uint *)FUN_0071a990(local_8->field_0DF3,soundId,-1,(undefined1 *)0x0);
    if (puVar11 == (uint *)0x0) {
      g_currentExceptionFrame = local_64.previous;
      return;
    }
    local_14 = position->x;
    local_1c = puVar11;
    if (((int)local_14 < 0) || (local_10 = position->y, local_10 < 0)) {
      iVar15 = 10;
      iVar4 = 4;
LAB_0056959b:
      iVar4 = FUN_006c1390(puVar11,0,0,DAT_0080730e,0,iVar4,iVar15);
    }
    else if (DAT_00807363 == '\0') {
      iVar4 = pSVar14->field_10E9;
      iVar15 = pSVar14->field_10ED;
      uVar9 = (iVar4 * local_14 - local_10) + iVar15;
      uVar7 = (int)uVar9 >> 0x1f;
      iVar2 = (int)(((uVar9 ^ uVar7) - uVar7) * 7) / 10;
      iVar12 = pSVar14->field_10E1 * 0x10;
      pSVar14->field_10F1 = iVar2;
      iVar10 = *(int *)(&DAT_007c9788 + iVar12);
      if (iVar2 <= *(int *)(&DAT_007c9788 + iVar12)) {
        iVar10 = iVar2;
      }
      if (iVar10 < *(int *)(&DAT_007c9790 + iVar12)) {
        uVar9 = (iVar4 * position->x - position->y) + iVar15;
        uVar7 = (int)uVar9 >> 0x1f;
        iVar2 = (int)(((uVar9 ^ uVar7) - uVar7) * 7) / 10;
        pSVar14->field_10F1 = iVar2;
        local_18 = *(int *)(&DAT_007c9788 + iVar12);
        if (iVar2 <= *(int *)(&DAT_007c9788 + iVar12)) {
          local_18 = iVar2;
        }
        local_10 = (int)(1000 / (longlong)*(int *)(&DAT_007c9790 + iVar12)) * local_18;
      }
      else {
        local_10 = 1000;
      }
      iVar15 = iVar4 * position->x + iVar15;
      pSVar14->field_10F1 = iVar15;
      iVar4 = position->y;
      if (iVar15 == iVar4) {
        local_14 = 0;
      }
      else {
        if ((pSVar14->field_10E5 == 0) || (pSVar14->field_10E5 == 3)) {
          bVar1 = iVar15 <= iVar4;
        }
        else {
          bVar1 = iVar4 <= iVar15;
        }
        local_14 = (bVar1 - 1 & 2) - 1;
      }
      iVar4 = *(int *)(&DAT_007c9790 + iVar12);
      local_18 = local_c & 0xff;
      if (iVar4 < (int)local_18) {
        iVar15 = *(int *)(&DAT_007c978c + iVar12);
        if (iVar15 < (int)local_18) {
          uVar9 = (((int)(*(int *)(&DAT_007c9794 + iVar12) * (DAT_0080730e + 4000)) / 100) * 2 +
                  -16000) / 3;
        }
        else {
          iVar2 = (int)(*(int *)(&DAT_007c9794 + iVar12) * (DAT_0080730e + 4000)) / 100;
          iVar4 = *(int *)(&DAT_007c9790 + iVar12);
          uVar9 = (iVar2 * 2 + -16000) / 3 +
                  (int)((((8000 - iVar2) * 2) / 3 + -4000 + iVar2) * (iVar15 - local_18)) /
                  (iVar15 - iVar4);
          pSVar14 = local_8;
        }
      }
      else {
        uVar9 = (int)(*(int *)(&DAT_007c9794 + iVar12) * (DAT_0080730e + 4000)) / 100 - 4000;
      }
      if (iVar4 < (int)local_18) {
        iVar4 = *(int *)(&DAT_007c9788 + iVar12);
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
      iVar4 = FUN_006c1390(puVar11,bVar3,4,uVar9,local_14 * local_10,4,10);
    }
    else {
      iVar4 = pSVar14->field_10E1 * 0x10;
      uVar9 = local_c & 0xff;
      local_c = *(uint *)(&DAT_007c9790 + iVar4);
      if ((int)local_c < (int)uVar9) {
        iVar15 = *(int *)(&DAT_007c9788 + iVar4);
        if (iVar15 < (int)uVar9) {
          bVar3 = 0;
        }
        else {
          bVar3 = (byte)((int)((iVar15 - uVar9) * 0xff) / iVar15);
        }
      }
      else {
        bVar3 = 0xff;
      }
      iVar4 = FUN_006c21e0(puVar11,bVar3,4,DAT_0080730e,(uint)(float)(int)local_14,
                           (uint)(float)local_10,0,(uint)(float)(int)local_c,
                           (uint)(float)*(int *)(&DAT_007c9788 + iVar4),4,10);
    }
    goto LAB_005695ae;
  case SOUND_MODE_3:
    if ((DAT_00807300._1_1_ & 4) == 0) {
      g_currentExceptionFrame = local_64.previous;
      return;
    }
    if ((-1 < position->x) && (-1 < position->y)) {
      uVar9 = local_8->field_10DD - position->y;
      uVar8 = (int)uVar9 >> 0x1f;
      uVar7 = local_8->field_10D9 - position->x;
      iVar4 = (uVar9 ^ uVar8) - uVar8;
      uVar9 = (int)uVar7 >> 0x1f;
      iVar15 = (uVar7 ^ uVar9) - uVar9;
      if (iVar4 < iVar15) {
        iVar4 = iVar15;
      }
      iVar4 = iVar4 + 1;
      local_8->field_10F1 = iVar4;
      iVar15 = local_8->field_10E1 * 0x10;
      bVar3 = (byte)*(int *)(&DAT_007c9788 + iVar15);
      if (iVar4 <= *(int *)(&DAT_007c9788 + iVar15)) {
        bVar3 = (byte)iVar4;
      }
      local_18 = CONCAT31(local_18._1_3_,bVar3);
      if (*(int *)(&DAT_007c978c + iVar15) <= (int)(uint)bVar3) {
        g_currentExceptionFrame = local_64.previous;
        return;
      }
    }
    puVar11 = (uint *)FUN_0071a990(local_8->field_0DF3,soundId,-1,(undefined1 *)0x0);
    if (puVar11 == (uint *)0x0) {
      g_currentExceptionFrame = local_64.previous;
      return;
    }
    local_14 = position->x;
    local_20 = puVar11;
    if (((int)local_14 < 0) || (local_10 = position->y, local_10 < 0)) {
      iVar15 = 0x11;
      iVar4 = 0xb;
      goto LAB_0056959b;
    }
    if (DAT_00807363 == '\0') {
      iVar4 = pSVar14->field_10E9;
      iVar15 = pSVar14->field_10ED;
      uVar9 = (iVar4 * local_14 - local_10) + iVar15;
      uVar7 = (int)uVar9 >> 0x1f;
      iVar2 = (int)(((uVar9 ^ uVar7) - uVar7) * 7) / 10;
      iVar12 = pSVar14->field_10E1 * 0x10;
      pSVar14->field_10F1 = iVar2;
      iVar10 = *(int *)(&DAT_007c9788 + iVar12);
      if (iVar2 <= *(int *)(&DAT_007c9788 + iVar12)) {
        iVar10 = iVar2;
      }
      if (iVar10 < *(int *)(&DAT_007c9790 + iVar12)) {
        uVar9 = (iVar4 * position->x - position->y) + iVar15;
        uVar7 = (int)uVar9 >> 0x1f;
        iVar2 = (int)(((uVar9 ^ uVar7) - uVar7) * 7) / 10;
        pSVar14->field_10F1 = iVar2;
        local_14 = *(int *)(&DAT_007c9788 + iVar12);
        if (iVar2 <= *(int *)(&DAT_007c9788 + iVar12)) {
          local_14 = iVar2;
        }
        local_c = (int)(1000 / (longlong)*(int *)(&DAT_007c9790 + iVar12)) * local_14;
      }
      else {
        local_c = 1000;
      }
      iVar15 = iVar4 * position->x + iVar15;
      pSVar14->field_10F1 = iVar15;
      iVar4 = position->y;
      if (iVar15 == iVar4) {
        local_10 = 0;
      }
      else {
        if ((pSVar14->field_10E5 == 0) || (pSVar14->field_10E5 == 3)) {
          bVar1 = iVar15 <= iVar4;
        }
        else {
          bVar1 = iVar4 <= iVar15;
        }
        local_10 = (bVar1 - 1 & 2) - 1;
      }
      iVar4 = *(int *)(&DAT_007c9790 + iVar12);
      local_14 = local_18 & 0xff;
      if (iVar4 < (int)local_14) {
        iVar15 = *(int *)(&DAT_007c978c + iVar12);
        if (iVar15 < (int)local_14) {
          uVar9 = (((int)(*(int *)(&DAT_007c9794 + iVar12) * (DAT_0080730e + 4000)) / 100) * 2 +
                  -16000) / 3;
        }
        else {
          iVar2 = (int)(*(int *)(&DAT_007c9794 + iVar12) * (DAT_0080730e + 4000)) / 100;
          iVar4 = *(int *)(&DAT_007c9790 + iVar12);
          uVar9 = (iVar2 * 2 + -16000) / 3 +
                  (int)((((8000 - iVar2) * 2) / 3 + -4000 + iVar2) * (iVar15 - local_14)) /
                  (iVar15 - iVar4);
          pSVar14 = local_8;
        }
      }
      else {
        uVar9 = (int)(*(int *)(&DAT_007c9794 + iVar12) * (DAT_0080730e + 4000)) / 100 - 4000;
      }
      if (iVar4 < (int)local_14) {
        iVar4 = *(int *)(&DAT_007c9788 + iVar12);
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
      iVar4 = FUN_006c1390(puVar11,bVar3,4,uVar9,local_10 * local_c,0xb,0x11);
    }
    else {
      iVar4 = pSVar14->field_10E1 * 0x10;
      uVar9 = local_18 & 0xff;
      local_c = *(uint *)(&DAT_007c9790 + iVar4);
      if ((int)local_c < (int)uVar9) {
        iVar15 = *(int *)(&DAT_007c9788 + iVar4);
        if (iVar15 < (int)uVar9) {
          bVar3 = 0;
        }
        else {
          bVar3 = (byte)((int)((iVar15 - uVar9) * 0xff) / iVar15);
        }
      }
      else {
        bVar3 = 0xff;
      }
      iVar4 = FUN_006c21e0(puVar11,bVar3,4,DAT_0080730e,(uint)(float)(int)local_14,
                           (uint)(float)local_10,0,(uint)(float)(int)local_c,
                           (uint)(float)*(int *)(&DAT_007c978c + iVar4),0xb,0x11);
    }
LAB_005695ae:
    if (-1 < iVar4) {
      *(int *)(&pSVar14->field_0xe0b + iVar4 * 0xc) = position->x;
      *(int *)(&pSVar14->field_0xe0f + iVar4 * 0xc) = position->y;
      *(int *)(&pSVar14->field_0xe13 + iVar4 * 0xc) = position->unknown;
      g_currentExceptionFrame = local_64.previous;
      return;
    }
    break;
  case SOUND_MODE_4:
    if (((DAT_00807300._1_1_ & 1) != 0) &&
       (iVar4 = thunk_FUN_00568780(local_8,0x12,0x14), iVar4 != 0)) {
      uVar9 = local_c >> 8;
      local_c = local_c & 0xffffff00;
      if ((-1 < position->x) && (-1 < position->y)) {
        uVar7 = pSVar14->field_10DD - position->y;
        uVar13 = (int)uVar7 >> 0x1f;
        uVar8 = pSVar14->field_10D9 - position->x;
        iVar4 = (uVar7 ^ uVar13) - uVar13;
        uVar7 = (int)uVar8 >> 0x1f;
        iVar15 = (uVar8 ^ uVar7) - uVar7;
        if (iVar4 < iVar15) {
          iVar4 = iVar15;
        }
        iVar4 = iVar4 + 1;
        pSVar14->field_10F1 = iVar4;
        iVar15 = *(int *)(&DAT_007c9788 + pSVar14->field_10E1 * 0x10);
        bVar3 = (byte)iVar15;
        if (iVar4 <= iVar15) {
          bVar3 = (byte)iVar4;
        }
        local_c = CONCAT31((int3)uVar9,bVar3);
        if (iVar15 <= (int)(uint)bVar3) {
          g_currentExceptionFrame = local_64.previous;
          return;
        }
      }
      local_1c = (uint *)FUN_0071a990(pSVar14->field_0DF3,soundId,-1,(undefined1 *)0x0);
      if (local_1c != (uint *)0x0) {
        local_14 = position->x;
        if (((int)local_14 < 0) || (local_10 = position->y, local_10 < 0)) {
          iVar4 = FUN_006c1390(local_1c,0,2,DAT_0080730e,0,0x12,0x14);
        }
        else if (DAT_00807363 == '\0') {
          iVar4 = pSVar14->field_10E9;
          iVar15 = pSVar14->field_10ED;
          uVar9 = (iVar4 * local_14 - local_10) + iVar15;
          uVar7 = (int)uVar9 >> 0x1f;
          iVar2 = (int)(((uVar9 ^ uVar7) - uVar7) * 7) / 10;
          iVar12 = pSVar14->field_10E1 * 0x10;
          pSVar14->field_10F1 = iVar2;
          iVar10 = *(int *)(&DAT_007c9788 + iVar12);
          if (iVar2 <= *(int *)(&DAT_007c9788 + iVar12)) {
            iVar10 = iVar2;
          }
          if (iVar10 < *(int *)(&DAT_007c9790 + iVar12)) {
            uVar9 = (iVar4 * position->x - position->y) + iVar15;
            uVar7 = (int)uVar9 >> 0x1f;
            iVar2 = (int)(((uVar9 ^ uVar7) - uVar7) * 7) / 10;
            pSVar14->field_10F1 = iVar2;
            local_18 = *(int *)(&DAT_007c9788 + iVar12);
            if (iVar2 <= *(int *)(&DAT_007c9788 + iVar12)) {
              local_18 = iVar2;
            }
            local_14 = (int)(1000 / (longlong)*(int *)(&DAT_007c9790 + iVar12)) * local_18;
          }
          else {
            local_14 = 1000;
          }
          iVar15 = iVar4 * position->x + iVar15;
          pSVar14->field_10F1 = iVar15;
          iVar4 = position->y;
          if (iVar15 == iVar4) {
            local_18 = 0;
          }
          else if ((pSVar14->field_10E5 == 0) || (pSVar14->field_10E5 == 3)) {
            local_18 = ((iVar15 <= iVar4) - 1 & 2) - 1;
          }
          else {
            local_18 = ((iVar4 <= iVar15) - 1 & 2) - 1;
          }
          iVar4 = *(int *)(&DAT_007c9790 + iVar12);
          local_20 = (uint *)(local_c & 0xff);
          if (iVar4 < (int)local_20) {
            iVar15 = *(int *)(&DAT_007c978c + iVar12);
            if (iVar15 < (int)local_20) {
              uVar9 = (((int)(*(int *)(&DAT_007c9794 + iVar12) * (DAT_0080730e + 4000)) / 100) * 2 +
                      -16000) / 3;
            }
            else {
              iVar2 = (int)(*(int *)(&DAT_007c9794 + iVar12) * (DAT_0080730e + 4000)) / 100;
              uVar9 = (iVar2 * 2 + -16000) / 3 +
                      ((((8000 - iVar2) * 2) / 3 + -4000 + iVar2) * (iVar15 - (int)local_20)) /
                      (iVar15 - iVar4);
            }
          }
          else {
            uVar9 = (int)(*(int *)(&DAT_007c9794 + iVar12) * (DAT_0080730e + 4000)) / 100 - 4000;
          }
          local_c = iVar4;
          iVar4 = FUN_006c1390(local_1c,0,6,uVar9,local_18 * local_14,0x12,0x14);
        }
        else {
          iVar4 = pSVar14->field_10E1 * 0x10;
          uVar9 = local_c & 0xff;
          local_c = *(uint *)(&DAT_007c9790 + iVar4);
          if ((int)local_c < (int)uVar9) {
            iVar15 = *(int *)(&DAT_007c9788 + iVar4);
            if (iVar15 < (int)uVar9) {
              bVar3 = 0;
            }
            else {
              bVar3 = (byte)((int)((iVar15 - uVar9) * 0xff) / iVar15);
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
          *(int *)(&pSVar14->field_0xe0b + iVar4 * 0xc) = position->x;
          *(int *)(&pSVar14->field_0xe0f + iVar4 * 0xc) = position->y;
          *(int *)(&pSVar14->field_0xe13 + iVar4 * 0xc) = position->unknown;
          g_currentExceptionFrame = local_64.previous;
          return;
        }
      }
    }
    break;
  case SOUND_MODE_5:
    if (((DAT_00807300._1_1_ & 8) != 0) &&
       (puVar11 = (uint *)FUN_0071a990(local_8->field_0DF3,soundId,-1,(undefined1 *)0x0),
       puVar11 != (uint *)0x0)) {
      FUN_006c1390(puVar11,0,(-(uint)(flags != 0) & 0xfffffffe) + 2,DAT_0080730e,0,0x15,0x19);
      g_currentExceptionFrame = local_64.previous;
      return;
    }
    break;
  case SOUND_MODE_6:
    if (((DAT_00807300._1_1_ & 1) != 0) &&
       (puVar11 = (uint *)FUN_0071a990(local_8->field_0DF3,soundId,-1,(undefined1 *)0x0),
       puVar11 != (uint *)0x0)) {
      FUN_006c1390(puVar11,0,2,DAT_0080730e,0,0x1b,0x1d);
      g_currentExceptionFrame = local_64.previous;
      return;
    }
    break;
  case SOUND_MODE_7:
    if (((DAT_00807300._1_1_ & 4) != 0) &&
       (puVar11 = (uint *)FUN_0071a990(local_8->field_0DF3,soundId,-1,(undefined1 *)0x0),
       puVar11 != (uint *)0x0)) {
      FUN_006c1390(puVar11,0,2,DAT_0080730e,0,0x1e,0x1f);
      g_currentExceptionFrame = local_64.previous;
      return;
    }
    break;
  case SOUND_MODE_8:
    if (soundId == 0) {
      iVar15 = 0x10;
      iVar4 = local_8->field_0DF3;
    }
    else {
      iVar4 = local_8->field_0DF3;
      iVar15 = soundId;
    }
    puVar11 = (uint *)FUN_0071a990(iVar4,iVar15,-1,(undefined1 *)0x0);
    if (puVar11 != (uint *)0x0) {
      FUN_006c1390(puVar11,0,(-(uint)(soundId != 0) & 0xfffffff7) + 9,DAT_0080730e,0,0,0);
      g_currentExceptionFrame = local_64.previous;
      return;
    }
    break;
  case SOUND_MODE_9:
    if (soundId == 0) {
      iVar15 = 0x12;
      iVar4 = local_8->field_0DF3;
    }
    else {
      iVar4 = local_8->field_0DF3;
      iVar15 = soundId;
    }
    puVar11 = (uint *)FUN_0071a990(iVar4,iVar15,-1,(undefined1 *)0x0);
    if (puVar11 != (uint *)0x0) {
      FUN_006c1390(puVar11,0,(-(uint)(soundId != 0) & 0xfffffff7) + 9,DAT_0080730e,0,0,0);
      g_currentExceptionFrame = local_64.previous;
      return;
    }
    break;
  case SOUND_MODE_10:
    if (soundId == 0) {
      iVar15 = 0x14;
      iVar4 = local_8->field_0DF3;
    }
    else {
      iVar4 = local_8->field_0DF3;
      iVar15 = soundId;
    }
    puVar11 = (uint *)FUN_0071a990(iVar4,iVar15,-1,(undefined1 *)0x0);
    if (puVar11 != (uint *)0x0) {
      FUN_006c1390(puVar11,0,(-(uint)(soundId != 0) & 0xfffffff7) + 9,DAT_0080730e,0,0,0);
      g_currentExceptionFrame = local_64.previous;
      return;
    }
    break;
  case SOUND_MODE_11:
    puVar11 = (uint *)mfWavLoad(local_8->field_0DEF,soundName,0,0);
    if (puVar11 != (uint *)0x0) {
      pSVar14->field_0E03 = pSVar14->field_0E07;
      uVar5 = FUN_006c1390(puVar11,0,1,DAT_0080730a,0,0,1);
      pSVar14->field_0E07 = uVar5;
      DVar6 = timeGetTime();
      pSVar14->field_0DFF = DVar6;
      g_currentExceptionFrame = local_64.previous;
      return;
    }
    break;
  case SOUND_MODE_12:
    if ((DAT_00807300._1_1_ & 1) == 0) {
      g_currentExceptionFrame = local_64.previous;
      return;
    }
    puVar11 = (uint *)0x0;
    if ((soundName == (char *)0x0) || (*soundName == '\0')) {
      if (0 < soundId) {
        puVar11 = (uint *)FUN_0071a990(local_8->field_0DF3,soundId,-1,(undefined1 *)0x0);
      }
LAB_00569cc6:
      if (puVar11 == (uint *)0x0) {
        g_currentExceptionFrame = local_64.previous;
        return;
      }
    }
    else {
      if (DAT_00806758 != 0) {
        puVar11 = (uint *)mfWavLoad(DAT_00806758,soundName,0,0);
      }
      if (puVar11 == (uint *)0x0) {
        if (DAT_00806798 != 0) {
          puVar11 = (uint *)mfWavLoad(DAT_00806798,soundName,0,0);
        }
        if (puVar11 == (uint *)0x0) {
          puVar11 = (uint *)mfWavLoad(local_8->field_0DEF,soundName,0,0);
          goto LAB_00569cc6;
        }
      }
    }
    bVar3 = DAT_008033f4;
    DAT_008033f4 = DAT_008033f4 + 1;
    FUN_006c1390(puVar11,bVar3,2,DAT_0080730e,0,0x1a,0x1a);
  }
  g_currentExceptionFrame = local_64.previous;
  return;
}

