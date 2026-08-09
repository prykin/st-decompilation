#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/SubmarineTitans__Recovered__HiddenThis__AnonReceiver_0060EF40.cpp

// 0060EF40 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0060EF40::FUN_0060ef40
#line 4 "decomp/ST.exe/functions/0060EF40/decomp.c"
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0060EF40.
   Evidence: incoming_receiver_captures=1; receiver_accesses=47; incoming_edx_uses=0; calls=1;
   ecx_pointer_setup=1; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[4];
   expected_stack=4; receiver_family_members=8; adopt_untyped_existing_thiscall;
   single_call_corroborated_by_receiver_family */

int __thiscall
st::fn_0060EF40
          (AnonReceiver_0060EF40 *this,int param_1)

{
  undefined1 *slotStorage;
  int iVar2;
  int iVar1;
  void *pvVar3;
  AnonShape_0060F940_1CCED7C8 *pAVar4;
  undefined4 uVar5;
  short sVar6;
  int iVar8;
  short sVar9;
  STWorldObject *pSVar10;
  short sVar11;
  uint uVar12;
  byte *puVar13;
  int iVar14;
  int local_b8 [2];
  int local_b0;
  int local_a8;
  int local_9c;
  int local_98;
  int local_94;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_74;
  int local_70;
  short *local_6c;
  int local_68 [2];
  short local_60 [6];
  undefined1 *local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  short *local_40;
  int local_3c;
  int local_38;
  short *local_34;
  int local_30;
  int local_2c;
  int local_24;
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &DAT_0079ce98;
  puStack_10 = &st_image_0072D964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff38;
  sVar11 = *(short *)&this->field_0x215;
  sVar9 = *(short *)&this->field_0x217;
  local_40 = (short *)(int)*(short *)&this->field_0x219;
  ExceptionList = &local_14;
  local_2c = (int)sVar9;
  local_20 = (int)sVar11;
  st::fn_0040156E((int)*(short *)&this->field_0x1f5,local_b8,&local_74,0,nullptr);
  local_54 = &stack0xffffff38;
  local_3c = sVar11 + local_b8[0];
  local_48 = sVar9 + local_74;
  sVar11 = *(short *)&this->field_0x1ef;
  if (sVar11 < 0) {
    local_80 = (short)((sVar11 / 0xc9 + (sVar11 >> 0xf)) -
                      (short)((longlong)(int)sVar11 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_80 = (int)(short)((sVar11 / 0xc9 + (sVar11 >> 0xf)) -
                           (short)((longlong)(int)sVar11 * 0x28c1979 >> 0x3f));
  }
  sVar11 = *(short *)&this->field_0x1f1;
  if (sVar11 < 0) {
    local_b0 = (short)((sVar11 / 0xc9 + (sVar11 >> 0xf)) -
                      (short)((longlong)(int)sVar11 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_b0 = (int)(short)((sVar11 / 0xc9 + (sVar11 >> 0xf)) -
                           (short)((longlong)(int)sVar11 * 0x28c1979 >> 0x3f));
  }
  sVar11 = *(short *)&this->field_0x1f3;
  if (sVar11 < 0) {
    local_34 = (short *)((short)((sVar11 / 200 + (sVar11 >> 0xf)) -
                                (short)((longlong)(int)sVar11 * 0x51eb851f >> 0x3f)) + -1);
  }
  else {
    local_34 = (short *)(int)(short)((sVar11 / 200 + (sVar11 >> 0xf)) -
                                    (short)((longlong)(int)sVar11 * 0x51eb851f >> 0x3f));
  }
  local_38 = local_48 - param_1;
  local_24 = local_3c - param_1;
  local_94 = local_48 + 1 + param_1;
  local_84 = local_3c + 1 + param_1;
  if (local_38 < 0) {
    local_38 = 0;
  }
  if (local_24 < 0) {
    local_24 = 0;
  }
  iVar2 = local_24;
  if (g_worldGrid.sizeY < local_94) {
    local_94 = (int)g_worldGrid.sizeY;
  }
  if (g_worldGrid.sizeX < local_84) {
    local_84 = (int)g_worldGrid.sizeX;
  }
  local_9c = local_84 - local_24;
  local_8c = (local_94 - local_38) * local_9c;
  local_8 = 0;
  uVar12 = local_8c * 10;
  st::fn_0072DA40();
  puVar13 = (byte *)&stack0xffffff38;
  local_1c = &stack0xffffff38;
  memset(puVar13, 0, uVar12); /* compiler bulk-zero initialization */
  local_8 = 0xffffffff;
  local_4c = 0;
  do {
    iVar8 = local_4c * local_8c;
    local_50 = local_38;
    local_a8 = iVar8;
    if (local_38 < local_94) {
      do {
        local_98 = (local_50 - local_38) * local_9c + iVar8;
        iVar14 = iVar2;
        if (iVar2 < local_84) {
          do {
            local_88 = (iVar14 - iVar2) + local_98;
            sVar11 = (short)iVar14;
            if ((((sVar11 < 0) || (g_worldGrid.sizeX <= sVar11)) ||
                (sVar9 = (short)local_50, sVar9 < 0)) ||
               (((g_worldGrid.sizeY <= sVar9 || (sVar6 = (short)local_4c, sVar6 < 0)) ||
                (g_worldGrid.sizeZ <= sVar6)))) {
              pSVar10 = nullptr;
            }
            else {
              pSVar10 = STGridAt3D(g_worldGrid, sVar11, sVar9, sVar6).objects[0];
            }
            if (((pSVar10 == nullptr) ||
                (iVar2 = (*pSVar10->vtable[5].slots_00_28[2])(), iVar2 == 0)) ||
               (((STWorldObjectVTable *)0x7 < pSVar10[1].vtable ||
                ((g_playSystem_00802A38 != nullptr &&
                 (7 < g_bulkInitializedRecords_008087C7[(int)pSVar10[1].vtable].field_0022)))))) {
              iVar1 = st::fn_00404D3B(sVar11,(short)local_50,(short)local_4c);
              if (iVar1 == 0) goto LAB_0060f230;
            }
            else if (*(int *)&this->field_0x2d1 != *(int *)&pSVar10->field_0x18) {
LAB_0060f230:
              *(undefined2 *)(local_54 + local_88 * 2) = 0xbfff;
            }
            iVar14 = iVar14 + 1;
            iVar8 = local_a8;
            iVar2 = local_24;
          } while (iVar14 < local_84);
        }
        local_50 = local_50 + 1;
      } while (local_50 < local_94);
    }
    local_4c = local_4c + 1;
  } while (local_4c < 5);
  st::fn_0040156E((int)*(short *)&this->field_0x1f5,nullptr,nullptr,1,
                     local_60);
  iVar8 = 0;
  do {
    if ((((-1 < local_20 + local_60[iVar8 * 2]) && (-1 < local_60[iVar8 * 2 + 1] + local_2c)) &&
        (local_20 + local_60[iVar8 * 2] < (int)g_worldGrid.sizeX)) &&
       ((local_60[iVar8 * 2 + 1] + local_2c < (int)g_worldGrid.sizeY &&
        (local_4c = (int)local_40 + -1, local_4c <= (int)local_40 + 1)))) {
      do {
        if ((-1 < local_4c) && (local_4c < 5)) {
          local_b8[0] = local_60[iVar8 * 2] + local_20;
          local_74 = local_60[iVar8 * 2 + 1] + local_2c;
          *(undefined2 *)
           (local_54 +
           ((((local_74 - local_38) * local_9c + local_4c * local_8c) - iVar2) + local_b8[0]) * 2) =
               0xbfff;
        }
        local_4c = local_4c + 1;
      } while (local_4c <= (int)local_40 + 1);
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 3);
  local_6c = st::fn_006AFBA0
                       ((int)local_54,local_84 - iVar2,(short *)(local_94 - local_38),(short *)0x5,
                        (short *)(local_3c - iVar2),(short *)(local_48 - local_38),local_40,
                        (short *)(local_80 - iVar2),(short *)(local_b0 - local_38),local_34,local_68
                        ,2);
  if (local_6c == nullptr) {
    local_68[0] = 0;
  }
  else {
    slotStorage = &this->field_0x2dd;
    if (*(int *)slotStorage == 0) {
      pvVar3 = st::fn_006AAC70((local_68[0] + 1) * 0x1c);
      *(void **)slotStorage = pvVar3;
    }
    else {
      if (*(int *)&this->field_0x2d5 <= local_68[0]) {
        st::fn_006AB060(slotStorage);
      }
      *(undefined4 *)&this->field_0x2d5 = 0;
    }
    iVar2 = 1;
    if (1 < local_68[0]) {
      do {
        iVar8 = iVar2 * 0x1c;
        *(short *)(*(int *)slotStorage + iVar8) = local_6c[iVar2 * 4 + -4] + (short)local_24;
        *(short *)(*(int *)slotStorage + 2 + iVar8) = local_6c[iVar2 * 4 + -3] + (short)local_38;
        *(short *)(*(int *)slotStorage + 4 + iVar8) = local_6c[iVar2 * 4 + -2];
        *(undefined2 *)(*(int *)slotStorage + 6 + iVar8) =
             *(undefined2 *)
              (PTR_DAT_007ed56c +
              ((((((int)local_6c[iVar2 * 4 + 2] - (int)local_6c[iVar2 * 4 + -2]) * 3 -
                 (int)local_6c[iVar2 * 4 + -3]) + (int)local_6c[iVar2 * 4 + 1]) * 3 -
               (int)local_6c[iVar2 * 4 + -4]) + (int)local_6c[iVar2 * 4]) * 4);
        *(int *)(*(int *)slotStorage + iVar8 + 8) =
             (*(int *)(&DAT_007cfe74 + *(short *)(*(int *)slotStorage + iVar8 + 6) * 4) * 0xc9) /
             1000;
        iVar2 = iVar2 + 1;
      } while (iVar2 < local_68[0]);
    }
    iVar2 = local_68[0] * 0x1c;
    *(short *)(*(int *)slotStorage + iVar2) = local_6c[local_68[0] * 4 + -4] + (short)local_24;
    *(short *)(*(int *)slotStorage + 2 + iVar2) = local_6c[local_68[0] * 4 + -3] + (short)local_38;
    *(short *)(*(int *)slotStorage + 4 + iVar2) = local_6c[local_68[0] * 4 + -2];
    *(undefined2 *)(iVar2 + *(int *)slotStorage + 6) =
         *(undefined2 *)(iVar2 + *(int *)slotStorage + -0x16);
    *(int *)&this->field_0x2d5 = local_68[0] + 1;
    local_7c = 1;
    if (1 < local_68[0] + -1) {
      do {
        iVar2 = local_7c * 0x1c;
        pAVar4 = (AnonShape_0060F940_1CCED7C8 *)(*(int *)slotStorage + iVar2);
        uVar5 = st::fn_00402EFF((int)*(short *)&pAVar4->field_0x6,
                                   (int)*(short *)((int)&pAVar4[1].field_0008 + 2),pAVar4,1,0,0,0,0,
                                   0,0,0,0,0,nullptr,nullptr);
        *(undefined4 *)(*(int *)slotStorage + 0x18 + iVar2) = uVar5;
        if (*(int *)(*(int *)slotStorage + 0x18 + iVar2) < 0) {
          local_68[0] = -1;
          break;
        }
        local_7c = local_7c + 1;
      } while (local_7c < local_68[0] + -1);
    }
    if (1 < local_68[0]) {
      **(undefined2 **)slotStorage = (short)local_20;
      *(short *)(*(int *)slotStorage + 2) = (short)local_2c;
      *(undefined2 *)(*(int *)slotStorage + 4) = STPiece<0,2>(local_40);
      *(undefined2 *)(*(int *)slotStorage + 6) =
           *(undefined2 *)
            (PTR_DAT_007ed56c + (((local_48 - local_2c) * 3 - local_20) + local_3c) * 4);
      *(int *)(*(int *)slotStorage + 8) =
           (*(int *)(&DAT_007cfe74 + *(short *)(*(int *)slotStorage + 6) * 4) * 0xc9) / 1000;
      pAVar4 = *(AnonShape_0060F940_1CCED7C8 **)slotStorage;
      uVar5 = st::fn_00402EFF((int)*(short *)&pAVar4->field_0x6,
                                 (int)*(short *)((int)&pAVar4[1].field_0008 + 2),pAVar4,1,0,0,0,0,0,
                                 0,0,0,0,nullptr,nullptr);
      *(undefined4 *)(*(int *)slotStorage + 0x18) = uVar5;
      **(undefined2 **)slotStorage = *(undefined2 *)&this->field_0x1e9;
      *(undefined2 *)(*(int *)slotStorage + 2) = *(undefined2 *)&this->field_0x1eb;
      *(undefined2 *)(*(int *)slotStorage + 4) = *(undefined2 *)&this->field_0x1ed;
      st::fn_004047AF((int)*(short *)&this->field_0x1f5,&local_30,&local_44,&local_70);
      iVar2 = *(int *)slotStorage;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      st::fn_004037FB(this,(int)*(short *)&this->field_0x1e9,(int)*(short *)&this->field_0x1eb,
                         (int)*(short *)&this->field_0x1ed,local_30,local_44,local_70,
                         *(short *)(iVar2 + 0x1c) * 0xc9 + (int)*(short *)&this->field_0x1ef % 0xc9,
                         *(short *)(iVar2 + 0x1e) * 0xc9 + (int)*(short *)&this->field_0x1f1 % 0xc9,
                         (int)*(short *)&this->field_0x1f3 % 200 + *(short *)(iVar2 + 0x20) * 200);
    }
  }
  if (local_6c != nullptr) {
    st::fn_006AB060(&local_6c);
  }
  ExceptionList = local_14;
  return local_68[0];
}

