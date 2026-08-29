#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/SoundClassTy.cpp

// 00568DD0 SoundClassTy::PlaySound
#line 4 "decomp/ST.exe/functions/00568DD0/decomp.c"
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
st::fn_00568DD0
          (SoundClassTy *this,SoundPlayMode mode,char *soundName,int soundId,SoundPosition *position
          ,int flags)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  int local_EAX_49;
  uint *puVar4;
  int iVar4;
  DWORD DVar5;
  uint *local_EAX_332;
  int local_EAX_508;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int local_EAX_2404;
  int iVar11;
  uint *local_EAX_3062;
  uint *local_EAX_3150;
  uint *local_EAX_3250;
  uint *local_EAX_3338;
  uint *local_EAX_3431;
  uint *local_EAX_3533;
  uint *puVar11;
  uint *puVar12_mg0;
  int iVar12;
  uint uVar13;
  SoundClassTy *pSVar14;
  AnonShape_0071A990_7656000F *pAVar15;
  InternalExceptionFrame local_64;
  uint *local_20;
  uint *local_1c_mg0;
  uint local_18;
  uint local_14;
  int local_10;
  uint local_c;
  SoundClassTy *local_8;
  int temp_3f1879c533;
  int temp_3fa1c25070;
  int temp_3f2752d387;

  if (this->field_0F8B == 0) {
    return;
  }
  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  local_8 = this;

  local_EAX_49 = st::fn_0072D7F0(local_64.jumpBuffer,0);
  pSVar14 = local_8;
  if (local_EAX_49 != 0) {
    g_currentExceptionFrame = local_64.previous;
    return;
  }
  switch(mode) {
  case SOUND_MODE_1:
    if (((STPiece<1,1>(DAT_00807300) & 4) != 0) &&
       (local_EAX_3338 = st::fn_0071A990(st::pointer_boundary_cast<AnonShape_0071A990_7656000F *>(local_8->field_0DF3),soundId,-1,nullptr),
       local_EAX_3338 != nullptr)) {

      st::fn_006C1390(local_EAX_3338,0,1,DAT_0080730e,0,2,3);
      g_currentExceptionFrame = local_64.previous;
      return;
    }
    break;
  case SOUND_MODE_2:
    if ((STPiece<1,1>(DAT_00807300) & 2) == 0) {
      g_currentExceptionFrame = local_64.previous;
      return;
    }
    uVar10 = local_c >> 8;
    local_c = local_c & 0xffffff00;
    if ((-1 < position->x) && (-1 < position->y)) {
      uVar7 = local_8->field_10DD - position->y;
      uVar13 = (int)uVar7 >> 0x1f;
      uVar8 = local_8->field_10D9 - position->x;
      iVar6 = (uVar7 ^ uVar13) - uVar13;
      uVar7 = (int)uVar8 >> 0x1f;
      iVar9 = (uVar8 ^ uVar7) - uVar7;
      if (iVar6 < iVar9) {
        iVar6 = iVar9;
      }
      iVar6 = iVar6 + 1;
      local_8->field_10F1 = iVar6;
      iVar9 = *(int *)(&DAT_007c9788 + local_8->field_10E1 * 0x10);
      bVar3 = (byte)iVar9;
      if (iVar6 <= iVar9) {
        bVar3 = (byte)iVar6;
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_c = CONCAT31((int3)uVar10,bVar3);
      if (iVar9 <= (int)(uint)bVar3) {
        g_currentExceptionFrame = local_64.previous;
        return;
      }
    }
    local_EAX_332 = st::fn_0071A990(st::pointer_boundary_cast<AnonShape_0071A990_7656000F *>(local_8->field_0DF3),soundId,-1,nullptr);
    if (local_EAX_332 == nullptr) {
      g_currentExceptionFrame = local_64.previous;
      return;
    }
    local_14 = position->x;
    local_1c_mg0 = local_EAX_332;
    if (((int)local_14 < 0) || (local_10 = position->y, local_10 < 0)) {
      iVar9 = 10;
      iVar6 = 4;
LAB_0056959b:

      local_EAX_508 = st::fn_006C1390(local_EAX_332,0,0,DAT_0080730e,0,iVar6,iVar9);
    }
    else if (DAT_00807363 == '\0') {
      iVar6 = pSVar14->field_10E9;
      iVar9 = pSVar14->field_10ED;
      uVar10 = (iVar6 * local_14 - local_10) + iVar9;
      uVar7 = (int)uVar10 >> 0x1f;
      iVar2 = st::storage_bit_cast<int>(static_cast<uint32_t>(((uVar10 ^ uVar7) - uVar7) * 7)) / 10;
      iVar12 = pSVar14->field_10E1 * 0x10;
      pSVar14->field_10F1 = iVar2;
      iVar11 = *(int *)(&DAT_007c9788 + iVar12);
      if (iVar2 <= *(int *)(&DAT_007c9788 + iVar12)) {
        iVar11 = iVar2;
      }
      if (iVar11 < *(int *)(&DAT_007c9790 + iVar12)) {
        uVar10 = (iVar6 * position->x - position->y) + iVar9;
        uVar7 = (int)uVar10 >> 0x1f;
        iVar2 = st::storage_bit_cast<int>(static_cast<uint32_t>(((uVar10 ^ uVar7) - uVar7) * 7)) / 10;
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
      iVar9 = iVar6 * position->x + iVar9;
      pSVar14->field_10F1 = iVar9;
      iVar6 = position->y;
      if (iVar9 == iVar6) {
        local_14 = 0;
      }
      else {
        if ((pSVar14->field_10E5 == 0) || (pSVar14->field_10E5 == 3)) {
          bVar1 = iVar9 <= iVar6;
        }
        else {
          bVar1 = iVar6 <= iVar9;
        }
        local_14 = (bVar1 - 1 & 2) - 1;
      }
      iVar6 = *(int *)(&DAT_007c9790 + iVar12);
      local_18 = local_c & 0xff;
      if (iVar6 < (int)local_18) {
        iVar9 = *(int *)(&DAT_007c978c + iVar12);
        if (iVar9 < (int)local_18) {
          uVar10 = ((st::storage_bit_cast<int>(static_cast<uint32_t>(*(int *)(&DAT_007c9794 + iVar12) * (DAT_0080730e + 4000))) / 100) * 2 +
                   -16000) / 3;
        }
        else {
          iVar2 = st::storage_bit_cast<int>(static_cast<uint32_t>(*(int *)(&DAT_007c9794 + iVar12) * (DAT_0080730e + 4000))) / 100;
          iVar6 = *(int *)(&DAT_007c9790 + iVar12);
          uVar10 = (iVar2 * 2 + -16000) / 3 +
                   (int)((((8000 - iVar2) * 2) / 3 + -4000 + iVar2) * (iVar9 - local_18)) /
                   (iVar9 - iVar6);
          pSVar14 = local_8;
        }
      }
      else {
        uVar10 = st::storage_bit_cast<int>(static_cast<uint32_t>(*(int *)(&DAT_007c9794 + iVar12) * (DAT_0080730e + 4000))) / 100 - 4000;
      }
      if (iVar6 < (int)local_18) {
        iVar6 = *(int *)(&DAT_007c9788 + iVar12);
        if (iVar6 < (int)local_18) {
          bVar3 = 0;
        }
        else {
          bVar3 = (byte)(st::storage_bit_cast<int>(static_cast<uint32_t>((iVar6 - local_18) * 0xff)) / iVar6);
        }
      }
      else {
        bVar3 = 0xff;
      }

      local_EAX_508 = st::fn_006C1390(local_EAX_332,bVar3,4,uVar10,local_14 * local_10,4,10);
    }
    else {
      iVar6 = pSVar14->field_10E1 * 0x10;
      uVar10 = local_c & 0xff;
      local_c = *(uint *)(&DAT_007c9790 + iVar6);
      if ((int)local_c < (int)uVar10) {
        iVar9 = *(int *)(&DAT_007c9788 + iVar6);
        if (iVar9 < (int)uVar10) {
          bVar3 = 0;
        }
        else {
          bVar3 = (byte)(st::storage_bit_cast<int>(static_cast<uint32_t>((iVar9 - uVar10) * 0xff)) / iVar9);
        }
      }
      else {
        bVar3 = 0xff;
      }

      local_EAX_508 =
           st::fn_006C21E0(local_EAX_332,bVar3,4,DAT_0080730e,(uint)(float)(int)local_14,
                        (uint)(float)local_10,0,(uint)(float)(int)local_c,
                        (uint)(float)*(int *)(&DAT_007c9788 + iVar6),4,10);
    }
    goto LAB_005695ae;
  case SOUND_MODE_3:
    if ((STPiece<1,1>(DAT_00807300) & 4) == 0) {
      g_currentExceptionFrame = local_64.previous;
      return;
    }
    if ((-1 < position->x) && (-1 < position->y)) {
      uVar10 = local_8->field_10DD - position->y;
      uVar8 = (int)uVar10 >> 0x1f;
      uVar7 = local_8->field_10D9 - position->x;
      iVar6 = (uVar10 ^ uVar8) - uVar8;
      uVar10 = (int)uVar7 >> 0x1f;
      iVar9 = (uVar7 ^ uVar10) - uVar10;
      if (iVar6 < iVar9) {
        iVar6 = iVar9;
      }
      iVar6 = iVar6 + 1;
      local_8->field_10F1 = iVar6;
      iVar9 = local_8->field_10E1 * 0x10;
      bVar3 = (byte)*(int *)(&DAT_007c9788 + iVar9);
      if (iVar6 <= *(int *)(&DAT_007c9788 + iVar9)) {
        bVar3 = (byte)iVar6;
      }
      local_18 = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_18)), (uint8_t)(bVar3));
      if (*(int *)(&DAT_007c978c + iVar9) <= (int)(uint)bVar3) {
        g_currentExceptionFrame = local_64.previous;
        return;
      }
    }
    local_EAX_332 = st::fn_0071A990(st::pointer_boundary_cast<AnonShape_0071A990_7656000F *>(local_8->field_0DF3),soundId,-1,nullptr);
    if (local_EAX_332 == nullptr) {
      g_currentExceptionFrame = local_64.previous;
      return;
    }
    local_14 = position->x;
    local_20 = local_EAX_332;
    if (((int)local_14 < 0) || (local_10 = position->y, local_10 < 0)) {
      iVar9 = 0x11;
      iVar6 = 0xb;
      goto LAB_0056959b;
    }
    if (DAT_00807363 == '\0') {
      iVar6 = pSVar14->field_10E9;
      iVar9 = pSVar14->field_10ED;
      uVar10 = (iVar6 * local_14 - local_10) + iVar9;
      uVar7 = (int)uVar10 >> 0x1f;
      iVar2 = st::storage_bit_cast<int>(static_cast<uint32_t>(((uVar10 ^ uVar7) - uVar7) * 7)) / 10;
      iVar12 = pSVar14->field_10E1 * 0x10;
      pSVar14->field_10F1 = iVar2;
      iVar11 = *(int *)(&DAT_007c9788 + iVar12);
      if (iVar2 <= *(int *)(&DAT_007c9788 + iVar12)) {
        iVar11 = iVar2;
      }
      if (iVar11 < *(int *)(&DAT_007c9790 + iVar12)) {
        uVar10 = (iVar6 * position->x - position->y) + iVar9;
        uVar7 = (int)uVar10 >> 0x1f;
        iVar2 = st::storage_bit_cast<int>(static_cast<uint32_t>(((uVar10 ^ uVar7) - uVar7) * 7)) / 10;
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
      iVar9 = iVar6 * position->x + iVar9;
      pSVar14->field_10F1 = iVar9;
      iVar6 = position->y;
      if (iVar9 == iVar6) {
        local_10 = 0;
      }
      else {
        if ((pSVar14->field_10E5 == 0) || (pSVar14->field_10E5 == 3)) {
          bVar1 = iVar9 <= iVar6;
        }
        else {
          bVar1 = iVar6 <= iVar9;
        }
        local_10 = (bVar1 - 1 & 2) - 1;
      }
      iVar6 = *(int *)(&DAT_007c9790 + iVar12);
      local_14 = local_18 & 0xff;
      if (iVar6 < (int)local_14) {
        iVar9 = *(int *)(&DAT_007c978c + iVar12);
        if (iVar9 < (int)local_14) {
          uVar10 = ((st::storage_bit_cast<int>(static_cast<uint32_t>(*(int *)(&DAT_007c9794 + iVar12) * (DAT_0080730e + 4000))) / 100) * 2 +
                   -16000) / 3;
        }
        else {
          iVar2 = st::storage_bit_cast<int>(static_cast<uint32_t>(*(int *)(&DAT_007c9794 + iVar12) * (DAT_0080730e + 4000))) / 100;
          iVar6 = *(int *)(&DAT_007c9790 + iVar12);
          uVar10 = (iVar2 * 2 + -16000) / 3 +
                   (int)((((8000 - iVar2) * 2) / 3 + -4000 + iVar2) * (iVar9 - local_14)) /
                   (iVar9 - iVar6);
          pSVar14 = local_8;
        }
      }
      else {
        uVar10 = st::storage_bit_cast<int>(static_cast<uint32_t>(*(int *)(&DAT_007c9794 + iVar12) * (DAT_0080730e + 4000))) / 100 - 4000;
      }
      if (iVar6 < (int)local_14) {
        iVar6 = *(int *)(&DAT_007c9788 + iVar12);
        if (iVar6 < (int)local_14) {
          bVar3 = 0;
        }
        else {
          bVar3 = (byte)(st::storage_bit_cast<int>(static_cast<uint32_t>((iVar6 - local_14) * 0xff)) / iVar6);
        }
      }
      else {
        bVar3 = 0xff;
      }

      local_EAX_508 = st::fn_006C1390(local_EAX_332,bVar3,4,uVar10,local_10 * local_c,0xb,0x11);
    }
    else {
      iVar6 = pSVar14->field_10E1 * 0x10;
      uVar10 = local_18 & 0xff;
      local_c = *(uint *)(&DAT_007c9790 + iVar6);
      if ((int)local_c < (int)uVar10) {
        iVar9 = *(int *)(&DAT_007c9788 + iVar6);
        if (iVar9 < (int)uVar10) {
          bVar3 = 0;
        }
        else {
          bVar3 = (byte)(st::storage_bit_cast<int>(static_cast<uint32_t>((iVar9 - uVar10) * 0xff)) / iVar9);
        }
      }
      else {
        bVar3 = 0xff;
      }

      local_EAX_508 =
           st::fn_006C21E0(local_EAX_332,bVar3,4,DAT_0080730e,(uint)(float)(int)local_14,
                        (uint)(float)local_10,0,(uint)(float)(int)local_c,
                        (uint)(float)*(int *)(&DAT_007c978c + iVar6),0xb,0x11);
    }
LAB_005695ae:
    if (-1 < local_EAX_508) {
      *(int *)(&pSVar14->field_0xe0b + local_EAX_508 * 0xc) = position->x;
      *(int *)(&pSVar14->field_0xe0f + local_EAX_508 * 0xc) = position->y;
      *(int *)(&pSVar14->field_0xe13 + local_EAX_508 * 0xc) = position->unknown;
      g_currentExceptionFrame = local_64.previous;
      return;
    }
    break;
  case SOUND_MODE_4:
    if (((STPiece<1,1>(DAT_00807300) & 1) != 0) &&

       (iVar6 = st::fn_0040352B(local_8,0x12,0x14), iVar6 != 0)) {
      uVar10 = local_c >> 8;
      local_c = local_c & 0xffffff00;
      if ((-1 < position->x) && (-1 < position->y)) {
        uVar7 = pSVar14->field_10DD - position->y;
        uVar13 = (int)uVar7 >> 0x1f;
        uVar8 = pSVar14->field_10D9 - position->x;
        iVar6 = (uVar7 ^ uVar13) - uVar13;
        uVar7 = (int)uVar8 >> 0x1f;
        iVar9 = (uVar8 ^ uVar7) - uVar7;
        if (iVar6 < iVar9) {
          iVar6 = iVar9;
        }
        iVar6 = iVar6 + 1;
        pSVar14->field_10F1 = iVar6;
        iVar9 = *(int *)(&DAT_007c9788 + pSVar14->field_10E1 * 0x10);
        bVar3 = (byte)iVar9;
        if (iVar6 <= iVar9) {
          bVar3 = (byte)iVar6;
        }
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_c = CONCAT31((int3)uVar10,bVar3);
        if (iVar9 <= (int)(uint)bVar3) {
          g_currentExceptionFrame = local_64.previous;
          return;
        }
      }
      local_1c_mg0 = st::fn_0071A990(st::pointer_boundary_cast<AnonShape_0071A990_7656000F *>(pSVar14->field_0DF3),soundId,-1,nullptr);
      if (local_1c_mg0 != nullptr) {
        local_14 = position->x;
        if (((int)local_14 < 0) || (local_10 = position->y, local_10 < 0)) {

          local_EAX_2404 = st::fn_006C1390(local_1c_mg0,0,2,DAT_0080730e,0,0x12,0x14);
        }
        else if (DAT_00807363 == '\0') {
          iVar6 = pSVar14->field_10E9;
          iVar9 = pSVar14->field_10ED;
          uVar10 = (iVar6 * local_14 - local_10) + iVar9;
          uVar7 = (int)uVar10 >> 0x1f;
          iVar2 = st::storage_bit_cast<int>(static_cast<uint32_t>(((uVar10 ^ uVar7) - uVar7) * 7)) / 10;
          iVar12 = pSVar14->field_10E1 * 0x10;
          pSVar14->field_10F1 = iVar2;
          iVar11 = *(int *)(&DAT_007c9788 + iVar12);
          if (iVar2 <= *(int *)(&DAT_007c9788 + iVar12)) {
            iVar11 = iVar2;
          }
          if (iVar11 < *(int *)(&DAT_007c9790 + iVar12)) {
            uVar10 = (iVar6 * position->x - position->y) + iVar9;
            uVar7 = (int)uVar10 >> 0x1f;
            iVar2 = st::storage_bit_cast<int>(static_cast<uint32_t>(((uVar10 ^ uVar7) - uVar7) * 7)) / 10;
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
          iVar9 = iVar6 * position->x + iVar9;
          pSVar14->field_10F1 = iVar9;
          iVar6 = position->y;
          if (iVar9 == iVar6) {
            local_18 = 0;
          }
          else if ((pSVar14->field_10E5 == 0) || (pSVar14->field_10E5 == 3)) {
            local_18 = ((iVar9 <= iVar6) - 1 & 2) - 1;
          }
          else {
            local_18 = ((iVar6 <= iVar9) - 1 & 2) - 1;
          }
          iVar6 = *(int *)(&DAT_007c9790 + iVar12);
          local_20 = (uint *)(local_c & 0xff);
          if (iVar6 < (int)local_20) {
            iVar9 = *(int *)(&DAT_007c978c + iVar12);
            if (iVar9 < (int)local_20) {
              uVar10 = ((st::storage_bit_cast<int>(static_cast<uint32_t>(*(int *)(&DAT_007c9794 + iVar12) * (DAT_0080730e + 4000))) / 100) * 2
                       + -16000) / 3;
            }
            else {
              iVar2 = st::storage_bit_cast<int>(static_cast<uint32_t>(*(int *)(&DAT_007c9794 + iVar12) * (DAT_0080730e + 4000))) / 100;
              uVar10 = (iVar2 * 2 + -16000) / 3 +
                       ((((8000 - iVar2) * 2) / 3 + -4000 + iVar2) * (iVar9 - (int)local_20)) /
                       (iVar9 - iVar6);
            }
          }
          else {
            uVar10 = st::storage_bit_cast<int>(static_cast<uint32_t>(*(int *)(&DAT_007c9794 + iVar12) * (DAT_0080730e + 4000))) / 100 - 4000;
          }
          local_c = iVar6;

          local_EAX_2404 = st::fn_006C1390(local_1c_mg0,0,6,uVar10,local_18 * local_14,0x12,0x14);
        }
        else {
          iVar6 = pSVar14->field_10E1 * 0x10;
          uVar10 = local_c & 0xff;
          local_c = *(uint *)(&DAT_007c9790 + iVar6);
          if ((int)local_c < (int)uVar10) {
            iVar9 = *(int *)(&DAT_007c9788 + iVar6);
            if (iVar9 < (int)uVar10) {
              bVar3 = 0;
            }
            else {
              bVar3 = (byte)(st::storage_bit_cast<int>(static_cast<uint32_t>((iVar9 - uVar10) * 0xff)) / iVar9);
            }
          }
          else {
            bVar3 = 0xff;
          }

          local_EAX_2404 =
               st::fn_006C21E0(local_1c_mg0,bVar3,6,DAT_0080730e,(uint)(float)(int)local_14,
                            (uint)(float)local_10,0,(uint)(float)(int)local_c,
                            (uint)(float)*(int *)(&DAT_007c9788 + iVar6),0x12,0x14);
        }
        if (-1 < local_EAX_2404) {
          *(int *)(&pSVar14->field_0xe0b + local_EAX_2404 * 0xc) = position->x;
          *(int *)(&pSVar14->field_0xe0f + local_EAX_2404 * 0xc) = position->y;
          *(int *)(&pSVar14->field_0xe13 + local_EAX_2404 * 0xc) = position->unknown;
          g_currentExceptionFrame = local_64.previous;
          return;
        }
      }
    }
    break;
  case SOUND_MODE_5:
    if (((STPiece<1,1>(DAT_00807300) & 8) != 0) &&
       (local_EAX_3150 = st::fn_0071A990(st::pointer_boundary_cast<AnonShape_0071A990_7656000F *>(local_8->field_0DF3),soundId,-1,nullptr),
       local_EAX_3150 != nullptr)) {

      st::fn_006C1390(local_EAX_3150,0,(-(uint)(flags != 0) & 0xfffffffe) + 2,DAT_0080730e,0,0x15,0x19);
      g_currentExceptionFrame = local_64.previous;
      return;
    }
    break;
  case SOUND_MODE_6:
    if (((STPiece<1,1>(DAT_00807300) & 1) != 0) &&
       (local_EAX_3062 = st::fn_0071A990(st::pointer_boundary_cast<AnonShape_0071A990_7656000F *>(local_8->field_0DF3),soundId,-1,nullptr),
       local_EAX_3062 != nullptr)) {

      st::fn_006C1390(local_EAX_3062,0,2,DAT_0080730e,0,0x1b,0x1d);
      g_currentExceptionFrame = local_64.previous;
      return;
    }
    break;
  case SOUND_MODE_7:
    if (((STPiece<1,1>(DAT_00807300) & 4) != 0) &&
       (local_EAX_3250 = st::fn_0071A990(st::pointer_boundary_cast<AnonShape_0071A990_7656000F *>(local_8->field_0DF3),soundId,-1,nullptr),
       local_EAX_3250 != nullptr)) {

      st::fn_006C1390(local_EAX_3250,0,2,DAT_0080730e,0,0x1e,0x1f);
      g_currentExceptionFrame = local_64.previous;
      return;
    }
    break;
  case SOUND_MODE_8:
    if (soundId == 0) {
      temp_3f2752d387 = 0x10;
      pAVar15 = st::pointer_boundary_cast<AnonShape_0071A990_7656000F *>(local_8->field_0DF3);
    }
    else {
      pAVar15 = st::pointer_boundary_cast<AnonShape_0071A990_7656000F *>(local_8->field_0DF3);
      temp_3f2752d387 = soundId;
    }
    local_EAX_3431 = st::fn_0071A990(pAVar15,temp_3f2752d387,-1,nullptr);
    if (local_EAX_3431 != nullptr) {

      st::fn_006C1390(local_EAX_3431,0,(-(uint)(soundId != 0) & 0xfffffff7) + 9,DAT_0080730e,0,0,0);
      g_currentExceptionFrame = local_64.previous;
      return;
    }
    break;
  case SOUND_MODE_9:
    if (soundId == 0) {
      temp_3fa1c25070 = 0x12;
      pAVar15 = st::pointer_boundary_cast<AnonShape_0071A990_7656000F *>(local_8->field_0DF3);
    }
    else {
      pAVar15 = st::pointer_boundary_cast<AnonShape_0071A990_7656000F *>(local_8->field_0DF3);
      temp_3fa1c25070 = soundId;
    }
    local_EAX_3533 = st::fn_0071A990(pAVar15,temp_3fa1c25070,-1,nullptr);
    if (local_EAX_3533 != nullptr) {

      st::fn_006C1390(local_EAX_3533,0,(-(uint)(soundId != 0) & 0xfffffff7) + 9,DAT_0080730e,0,0,0);
      g_currentExceptionFrame = local_64.previous;
      return;
    }
    break;
  case SOUND_MODE_10:
    if (soundId == 0) {
      temp_3f1879c533 = 0x14;
      pAVar15 = st::pointer_boundary_cast<AnonShape_0071A990_7656000F *>(local_8->field_0DF3);
    }
    else {
      pAVar15 = st::pointer_boundary_cast<AnonShape_0071A990_7656000F *>(local_8->field_0DF3);
      temp_3f1879c533 = soundId;
    }
    puVar11 = st::fn_0071A990(pAVar15,temp_3f1879c533,-1,nullptr);
    if (puVar11 != nullptr) {

      st::fn_006C1390(puVar11,0,(-(uint)(soundId != 0) & 0xfffffff7) + 9,DAT_0080730e,0,0,0);
      g_currentExceptionFrame = local_64.previous;
      return;
    }
    break;
  case SOUND_MODE_11:
    /* ST_CALLSITE[00568E3C]: CALL 0x00719d00; direct=00719D00 Library::Ourlib::MFWAV::mfWavLoad; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/uint; signature=__cdecl;pointer:/uint;pointer:/cMf32;pointer:/char;/byte;pointer:/ushort */
    puVar4 = st::pointer_boundary_cast<uint *>(st::fn_00719D00(st::pointer_boundary_cast<cMf32 *>(local_8->field_0DEF),soundName,0,nullptr));
    if (puVar4 != nullptr) {
      pSVar14->field_0E03 = pSVar14->field_0E07;

      iVar4 = st::fn_006C1390(puVar4,0,1,DAT_0080730a,0,0,1);
      pSVar14->field_0E07 = iVar4;
      /* ST_CALLSITE[00568E75]: CALL dword ptr [0x0085bedc] */
      DVar5 = st::external_000000DA();
      pSVar14->field_0DFF = DVar5;
      g_currentExceptionFrame = local_64.previous;
      return;
    }
    break;
  case SOUND_MODE_12:
    if ((STPiece<1,1>(DAT_00807300) & 1) == 0) {
      g_currentExceptionFrame = local_64.previous;
      return;
    }
    puVar12_mg0 = nullptr;
    if ((soundName == nullptr) || (*soundName == '\0')) {
      if (0 < soundId) {
        puVar12_mg0 = st::fn_0071A990(st::pointer_boundary_cast<AnonShape_0071A990_7656000F *>(local_8->field_0DF3),soundId,-1,nullptr);
      }
LAB_00569cc6:
      if (puVar12_mg0 == nullptr) {
        g_currentExceptionFrame = local_64.previous;
        return;
      }
    }
    else {
      if (g_cMf32_00806758 != nullptr) {
        puVar12_mg0 = reinterpret_cast<uint *>(st::fn_00719D00
                                        (g_cMf32_00806758,soundName,0,nullptr));
      }
      if (puVar12_mg0 == nullptr) {
        if (g_cMf32_00806798 != nullptr) {
          puVar12_mg0 = reinterpret_cast<uint *>(st::fn_00719D00
                                          (g_cMf32_00806798,soundName,0,nullptr));
        }
        if (puVar12_mg0 == nullptr) {
          puVar12_mg0 = reinterpret_cast<uint *>(st::fn_00719D00
                                          (st::pointer_boundary_cast<cMf32 *>(local_8->field_0DEF),soundName,0,nullptr));
          goto LAB_00569cc6;
        }
      }
    }
    bVar3 = DAT_008033f4;
    DAT_008033f4 = DAT_008033f4 + 1;

    st::fn_006C1390(puVar12_mg0,bVar3,2,DAT_0080730e,0,0x1a,0x1a);
  }
  g_currentExceptionFrame = local_64.previous;
  return;
}
