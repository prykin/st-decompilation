
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0060EF40.
   Evidence: incoming_receiver_captures=1; receiver_accesses=47; incoming_edx_uses=0; calls=1;
   ecx_pointer_setup=1; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[4];
   expected_stack=4; receiver_family_members=8; adopt_untyped_existing_thiscall;
   single_call_corroborated_by_receiver_family */

int __thiscall
SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0060EF40::FUN_0060ef40
          (AnonReceiver_0060EF40 *this,int param_1)

{
  undefined1 *value;
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  AnonShape_0060F940_1CCED7C8 *pAVar3;
  undefined4 uVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  short sVar8;
  STWorldObject *pSVar9;
  short sVar10;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
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
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff38;
  sVar10 = *(short *)&this->field_0x215;
  sVar8 = *(short *)&this->field_0x217;
  local_40 = (short *)(int)*(short *)&this->field_0x219;
  ExceptionList = &local_14;
  local_2c = (int)sVar8;
  local_20 = (int)sVar10;
  thunk_FUN_00615bb0((int)*(short *)&this->field_0x1f5,local_b8,&local_74,0,(undefined2 *)0x0);
  local_54 = &stack0xffffff38;
  local_3c = sVar10 + local_b8[0];
  local_48 = sVar8 + local_74;
  sVar10 = *(short *)&this->field_0x1ef;
  if (sVar10 < 0) {
    local_80 = (short)((sVar10 / 0xc9 + (sVar10 >> 0xf)) -
                      (short)((longlong)(int)sVar10 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_80 = (int)(short)((sVar10 / 0xc9 + (sVar10 >> 0xf)) -
                           (short)((longlong)(int)sVar10 * 0x28c1979 >> 0x3f));
  }
  sVar10 = *(short *)&this->field_0x1f1;
  if (sVar10 < 0) {
    local_b0 = (short)((sVar10 / 0xc9 + (sVar10 >> 0xf)) -
                      (short)((longlong)(int)sVar10 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_b0 = (int)(short)((sVar10 / 0xc9 + (sVar10 >> 0xf)) -
                           (short)((longlong)(int)sVar10 * 0x28c1979 >> 0x3f));
  }
  sVar10 = *(short *)&this->field_0x1f3;
  if (sVar10 < 0) {
    local_34 = (short *)((short)((sVar10 / 200 + (sVar10 >> 0xf)) -
                                (short)((longlong)(int)sVar10 * 0x51eb851f >> 0x3f)) + -1);
  }
  else {
    local_34 = (short *)(int)(short)((sVar10 / 200 + (sVar10 >> 0xf)) -
                                    (short)((longlong)(int)sVar10 * 0x51eb851f >> 0x3f));
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
  uVar11 = local_8c * 10;
  Library::MSVCRT::FUN_0072da40();
  puVar12 = (undefined4 *)&stack0xffffff38;
  local_1c = &stack0xffffff38;
  for (uVar6 = uVar11 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined1 *)puVar12 = 0;
    puVar12 = (undefined4 *)((int)puVar12 + 1);
  }
  local_8 = 0xffffffff;
  local_4c = 0;
  do {
    iVar7 = local_4c * local_8c;
    local_50 = local_38;
    local_a8 = iVar7;
    if (local_38 < local_94) {
      do {
        local_98 = (local_50 - local_38) * local_9c + iVar7;
        iVar13 = iVar2;
        if (iVar2 < local_84) {
          do {
            local_88 = (iVar13 - iVar2) + local_98;
            sVar10 = (short)iVar13;
            if ((((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) ||
                (sVar8 = (short)local_50, sVar8 < 0)) ||
               (((g_worldGrid.sizeY <= sVar8 || (sVar5 = (short)local_4c, sVar5 < 0)) ||
                (g_worldGrid.sizeZ <= sVar5)))) {
              pSVar9 = (STWorldObject *)0x0;
            }
            else {
              pSVar9 = g_worldGrid.cells
                       [(int)sVar5 * (int)g_worldGrid.planeStride +
                        (int)sVar8 * (int)g_worldGrid.sizeX + (int)sVar10].objects[0];
            }
            if (((pSVar9 == (STWorldObject *)0x0) ||
                (iVar2 = (*pSVar9->vtable[5].slots_00_28[2])(), iVar2 == 0)) ||
               (((STWorldObjectVTable *)0x7 < pSVar9[1].vtable ||
                ((PTR_00802a38 != (STPlaySystemC *)0x0 &&
                 (7 < (byte)(&DAT_008087e9)[(int)pSVar9[1].vtable * 0x51])))))) {
              bVar1 = thunk_FUN_004961b0(sVar10,(short)local_50,(short)local_4c);
              if (CONCAT31(extraout_var,bVar1) == 0) goto LAB_0060f230;
            }
            else if (*(int *)&this->field_0x2d1 != *(int *)&pSVar9->field_0x18) {
LAB_0060f230:
              *(undefined2 *)(local_54 + local_88 * 2) = 0xbfff;
            }
            iVar13 = iVar13 + 1;
            iVar7 = local_a8;
            iVar2 = local_24;
          } while (iVar13 < local_84);
        }
        local_50 = local_50 + 1;
      } while (local_50 < local_94);
    }
    local_4c = local_4c + 1;
  } while (local_4c < 5);
  thunk_FUN_00615bb0((int)*(short *)&this->field_0x1f5,(undefined4 *)0x0,(undefined4 *)0x0,1,
                     local_60);
  iVar7 = 0;
  do {
    if ((((-1 < local_20 + local_60[iVar7 * 2]) && (-1 < local_60[iVar7 * 2 + 1] + local_2c)) &&
        (local_20 + local_60[iVar7 * 2] < (int)g_worldGrid.sizeX)) &&
       ((local_60[iVar7 * 2 + 1] + local_2c < (int)g_worldGrid.sizeY &&
        (local_4c = (int)local_40 + -1, local_4c <= (int)local_40 + 1)))) {
      do {
        if ((-1 < local_4c) && (local_4c < 5)) {
          local_b8[0] = local_60[iVar7 * 2] + local_20;
          local_74 = local_60[iVar7 * 2 + 1] + local_2c;
          *(undefined2 *)
           (local_54 +
           ((((local_74 - local_38) * local_9c + local_4c * local_8c) - iVar2) + local_b8[0]) * 2) =
               0xbfff;
        }
        local_4c = local_4c + 1;
      } while (local_4c <= (int)local_40 + 1);
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 3);
  local_6c = Library::DKW::WAY::FUN_006afba0
                       ((int)local_54,local_84 - iVar2,(short *)(local_94 - local_38),(short *)0x5,
                        (short *)(local_3c - iVar2),(short *)(local_48 - local_38),local_40,
                        (short *)(local_80 - iVar2),(short *)(local_b0 - local_38),local_34,local_68
                        ,2);
  if (local_6c == (short *)0x0) {
    local_68[0] = 0;
  }
  else {
    value = &this->field_0x2dd;
    if (*(int *)value == 0) {
      iVar2 = Library::DKW::LIB::FUN_006aac70((local_68[0] + 1) * 0x1c);
      *(int *)value = iVar2;
    }
    else {
      if (*(int *)&this->field_0x2d5 <= local_68[0]) {
        FreeAndNull((void **)value);
      }
      *(undefined4 *)&this->field_0x2d5 = 0;
    }
    iVar2 = 1;
    if (1 < local_68[0]) {
      do {
        iVar7 = iVar2 * 0x1c;
        *(short *)(*(int *)value + iVar7) = local_6c[iVar2 * 4 + -4] + (short)local_24;
        *(short *)(*(int *)value + iVar7 + 2) = local_6c[iVar2 * 4 + -3] + (short)local_38;
        *(short *)(*(int *)value + iVar7 + 4) = local_6c[iVar2 * 4 + -2];
        *(undefined2 *)(*(int *)value + iVar7 + 6) =
             *(undefined2 *)
              (PTR_DAT_007ed56c +
              ((((((int)local_6c[iVar2 * 4 + 2] - (int)local_6c[iVar2 * 4 + -2]) * 3 -
                 (int)local_6c[iVar2 * 4 + -3]) + (int)local_6c[iVar2 * 4 + 1]) * 3 -
               (int)local_6c[iVar2 * 4 + -4]) + (int)local_6c[iVar2 * 4]) * 4);
        *(int *)(*(int *)value + iVar7 + 8) =
             (*(int *)(&DAT_007cfe74 + *(short *)(*(int *)value + iVar7 + 6) * 4) * 0xc9) / 1000;
        iVar2 = iVar2 + 1;
      } while (iVar2 < local_68[0]);
    }
    iVar2 = local_68[0] * 0x1c;
    *(short *)(*(int *)value + iVar2) = local_6c[local_68[0] * 4 + -4] + (short)local_24;
    *(short *)(*(int *)value + iVar2 + 2) = local_6c[local_68[0] * 4 + -3] + (short)local_38;
    *(short *)(*(int *)value + iVar2 + 4) = local_6c[local_68[0] * 4 + -2];
    *(undefined2 *)(*(int *)value + iVar2 + 6) = *(undefined2 *)(*(int *)value + iVar2 + -0x16);
    *(int *)&this->field_0x2d5 = local_68[0] + 1;
    local_7c = 1;
    if (1 < local_68[0] + -1) {
      do {
        iVar2 = local_7c * 0x1c;
        pAVar3 = (AnonShape_0060F940_1CCED7C8 *)(*(int *)value + iVar2);
        uVar4 = thunk_FUN_0060f940((int)*(short *)&pAVar3->field_0x6,
                                   (int)*(short *)((int)&pAVar3[1].field_0008 + 2),pAVar3,1,0,0,0,0,
                                   0,0,0,0,0,(int *)0x0,(int *)0x0);
        *(undefined4 *)(*(int *)value + iVar2 + 0x18) = uVar4;
        if (*(int *)(*(int *)value + iVar2 + 0x18) < 0) {
          local_68[0] = -1;
          break;
        }
        local_7c = local_7c + 1;
      } while (local_7c < local_68[0] + -1);
    }
    if (1 < local_68[0]) {
      **(undefined2 **)value = (short)local_20;
      *(short *)(*(int *)value + 2) = (short)local_2c;
      *(undefined2 *)(*(int *)value + 4) = local_40._0_2_;
      *(undefined2 *)(*(int *)value + 6) =
           *(undefined2 *)
            (PTR_DAT_007ed56c + (((local_48 - local_2c) * 3 - local_20) + local_3c) * 4);
      *(int *)(*(int *)value + 8) =
           (*(int *)(&DAT_007cfe74 + *(short *)(*(int *)value + 6) * 4) * 0xc9) / 1000;
      pAVar3 = *(AnonShape_0060F940_1CCED7C8 **)value;
      uVar4 = thunk_FUN_0060f940((int)*(short *)&pAVar3->field_0x6,
                                 (int)*(short *)((int)&pAVar3[1].field_0008 + 2),pAVar3,1,0,0,0,0,0,
                                 0,0,0,0,(int *)0x0,(int *)0x0);
      *(undefined4 *)(*(int *)value + 0x18) = uVar4;
      **(undefined2 **)value = *(undefined2 *)&this->field_0x1e9;
      *(undefined2 *)(*(int *)value + 2) = *(undefined2 *)&this->field_0x1eb;
      *(undefined2 *)(*(int *)value + 4) = *(undefined2 *)&this->field_0x1ed;
      thunk_FUN_00615860((int)*(short *)&this->field_0x1f5,&local_30,&local_44,&local_70);
      iVar2 = *(int *)value;
      thunk_FUN_00615e70(this,(int)*(short *)&this->field_0x1e9,(int)*(short *)&this->field_0x1eb,
                         (int)*(short *)&this->field_0x1ed,local_30,local_44,local_70,
                         *(short *)(iVar2 + 0x1c) * 0xc9 + (int)*(short *)&this->field_0x1ef % 0xc9,
                         *(short *)(iVar2 + 0x1e) * 0xc9 + (int)*(short *)&this->field_0x1f1 % 0xc9,
                         (int)*(short *)&this->field_0x1f3 % 200 + *(short *)(iVar2 + 0x20) * 200);
    }
  }
  if (local_6c != (short *)0x0) {
    FreeAndNull(&local_6c);
  }
  ExceptionList = local_14;
  return local_68[0];
}

