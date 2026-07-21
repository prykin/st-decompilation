
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_00601500.
   Evidence: incoming_receiver_captures=1; receiver_accesses=19; incoming_edx_uses=0; calls=17;
   ecx_pointer_setup=16; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[52];
   expected_stack=52; receiver_family_members=2; adopt_untyped_existing_thiscall */

uint __thiscall
SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00601500::FUN_00601500
          (AnonReceiver_00601500 *this,int param_1,int param_2,int param_3,int param_4,int param_5,
          int param_6,int param_7,int param_8,int param_9,undefined2 param_10,int param_11,
          int param_12,int param_13)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  STWorldObject *pSVar8;
  short sVar9;
  int iVar10;
  bool bVar11;
  longlong lVar12;
  short sVar13;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  AnonReceiver_00601500 *local_10;
  uint local_c;
  int local_8;

  sVar5 = (short)(param_1 >> 0x1f);
  if (param_1 < 0) {
    iVar10 = (short)(((short)(param_1 / 0xc9) + sVar5) -
                    (short)((longlong)param_1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar10 = (int)(short)(((short)(param_1 / 0xc9) + sVar5) -
                         (short)((longlong)param_1 * 0x28c1979 >> 0x3f));
  }
  sVar5 = (short)(param_2 >> 0x1f);
  if (param_2 < 0) {
    iVar6 = (short)(((short)(param_2 / 0xc9) + sVar5) -
                   (short)((longlong)param_2 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar6 = (int)(short)(((short)(param_2 / 0xc9) + sVar5) -
                        (short)((longlong)param_2 * 0x28c1979 >> 0x3f));
  }
  sVar5 = (short)(param_3 >> 0x1f);
  if (param_3 < 0) {
    local_8 = (short)(((short)(param_3 / 200) + sVar5) -
                     (short)((longlong)param_3 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    local_8 = (int)(short)(((short)(param_3 / 200) + sVar5) -
                          (short)((longlong)param_3 * 0x51eb851f >> 0x3f));
  }
  bVar11 = param_1 < 0;
  if (bVar11) {
    iVar10 = 0;
    param_1 = 0;
  }
  local_c = (uint)bVar11;
  if (param_2 < 0) {
    param_2 = 0;
    local_c = 1;
    iVar10 = 0;
  }
  if (param_3 < 0x14) {
    param_3 = 0x14;
    local_c = 1;
    local_8 = 0;
cf_common_exit_00601B38:
    *(int *)&this->field_0x28 = param_3;
    *(int *)&this->field_0x20 = param_1;
    *(int *)&this->field_0x24 = param_2;
    *(int *)this = iVar10;
    *(int *)&this->field_0x4 = iVar6;
    *(int *)&this->field_0x8 = local_8;
    *(undefined4 *)&this->field_0x14 = 0;
    return local_c;
  }
  if (local_c != 0) {
    if (local_c != 1) {
      return local_c;
    }
    goto cf_common_exit_00601B38;
  }
  local_10 = this;
  if (((param_11 != 0xa8) && (param_11 != 0xb1)) && (param_11 != 0x14e)) {
    sVar5 = (short)(param_4 >> 0x1f);
    if (param_4 < 0) {
      iVar7 = (short)(((short)(param_4 / 0xc9) + sVar5) -
                     (short)((longlong)param_4 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar7 = (int)(short)(((short)(param_4 / 0xc9) + sVar5) -
                          (short)((longlong)param_4 * 0x28c1979 >> 0x3f));
    }
    sVar5 = (short)(param_5 >> 0x1f);
    if (param_5 < 0) {
      iVar3 = (short)(((short)(param_5 / 0xc9) + sVar5) -
                     (short)((longlong)param_5 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar3 = (int)(short)(((short)(param_5 / 0xc9) + sVar5) -
                          (short)((longlong)param_5 * 0x28c1979 >> 0x3f));
    }
    sVar5 = (short)(param_6 >> 0x1f);
    if (param_6 < 0) {
      iVar4 = (short)(((short)(param_6 / 200) + sVar5) -
                     (short)((longlong)param_6 * 0x51eb851f >> 0x3f)) + -1;
    }
    else {
      iVar4 = (int)(short)(((short)(param_6 / 200) + sVar5) -
                          (short)((longlong)param_6 * 0x51eb851f >> 0x3f));
    }
    if (((iVar10 != iVar7) || (iVar6 != iVar3)) || (local_8 != iVar4)) {
      iVar7 = local_8;
      if (iVar10 < 0) goto LAB_006018c7;
      if ((((-1 < iVar6) && (iVar10 < g_worldGrid.sizeX)) &&
          ((iVar6 < g_worldGrid.sizeY &&
           (iVar7 = g_worldGrid.sizeX * iVar6, *(char *)(DAT_007fb26c + iVar7 + iVar10) != '\0'))))
         && (((&DAT_007fb24c)[param_7] == 0 ||
             (*(char *)((&DAT_007fb24c)[param_7] + iVar7 + iVar10) == '\0')))) {
        if ((this->field_0x2c == '\0') && (iVar4 < 5)) {
          uVar2 = thunk_FUN_00497030(iVar10,iVar6,param_7,1,param_8);
          if (-1 < (int)uVar2) {
            local_c = 5;
            thunk_FUN_00497850(param_4,param_5,param_6,param_1,param_2,param_3,uVar2,&local_14,
                               &local_18,&local_1c);
            thunk_FUN_00637ae0(local_14,local_18,local_1c);
            return local_c;
          }
        }
        else {
          this->field_0x2c = 1;
        }
      }
    }
  }
  iVar7 = local_8;
  if (((((-1 < iVar10) && (iVar10 < g_worldGrid.sizeX)) && (-1 < iVar6)) &&
      ((iVar6 < g_worldGrid.sizeY && (-1 < local_8)))) && (local_8 < g_worldGrid.sizeZ)) {
    sVar5 = (short)iVar10;
    sVar9 = (short)iVar6;
    sVar13 = (short)local_8;
    iVar3 = thunk_FUN_004961b0(sVar5,sVar9,sVar13);
    if (iVar3 == 0) {
      if ((((sVar5 < 0) || (g_worldGrid.sizeX <= sVar5)) ||
          ((sVar9 < 0 ||
           (((g_worldGrid.sizeY <= sVar9 || (sVar13 < 0)) || (g_worldGrid.sizeZ <= sVar13)))))) ||
         (pSVar8 = g_worldGrid.cells
                   [(int)g_worldGrid.planeStride * (int)sVar13 + (int)g_worldGrid.sizeX * (int)sVar9
                    + (int)sVar5].objects[0], pSVar8 == (STWorldObject *)0x0)) {
        local_c = 1;
        this = local_10;
        goto cf_common_exit_00601B38;
      }
      iVar7 = (*pSVar8->vtable[5].slots_00_28[2])();
      if (iVar7 == 0) {
        return local_c;
      }
      if (*(int *)&pSVar8->field_0x18 == param_9) {
        return local_c;
      }
      iVar3 = (*pSVar8->vtable[4].slots_00_28[7])(param_1,param_2,param_3,param_4,param_5,param_6);
      iVar7 = local_8;
      if (0 < iVar3) {
        if ((param_13 != 0) && (pSVar8[1].vtable == (STWorldObjectVTable *)param_7)) {
          return local_c;
        }
        *(int *)local_10 = iVar10;
        *(int *)&local_10->field_0x4 = iVar6;
        *(int *)&local_10->field_0x8 = local_8;
LAB_00601aeb:
        local_c = 2;
        uVar1 = *(undefined4 *)&pSVar8->field_0x18;
        *(int *)&local_10->field_0x18 = iVar3;
        *(undefined4 *)&local_10->field_0x10 = uVar1;
        *(STWorldObject **)&local_10->field_0x14 = pSVar8;
        *(undefined4 *)&local_10->field_0xc = 1;
        if (param_12 != 0) {
          return 2;
        }
        thunk_FUN_00601d10(param_7,param_8,(int)pSVar8,(short)param_9,param_10,param_11,0x110);
        return local_c;
      }
    }
  }
LAB_006018c7:
  if (param_1 % 0xc9 < 0x65) {
    local_14 = iVar10 + -1;
    local_28 = iVar10;
    if (local_14 < 0) {
      local_14 = 0;
    }
  }
  else {
    local_28 = iVar10 + 1;
    local_14 = iVar10;
    if ((int)g_worldGrid.sizeX <= iVar10 + 1) {
      local_28 = g_worldGrid.sizeX + -1;
    }
  }
  if (param_2 < 0) {
    lVar12 = Library::MSVCRT::__ftol();
    iVar3 = (short)lVar12 + -1;
  }
  else {
    lVar12 = Library::MSVCRT::__ftol();
    iVar3 = (int)(short)lVar12;
  }
  if (iVar3 < 0x65) {
    local_18 = iVar6 + -1;
    local_24 = iVar6;
    if (local_18 < 0) {
      local_18 = 0;
    }
  }
  else {
    local_24 = iVar6 + 1;
    local_18 = iVar6;
    if ((int)g_worldGrid.sizeY <= iVar6 + 1) {
      local_24 = g_worldGrid.sizeY + -1;
    }
  }
  if (param_3 % 200 < 0x65) {
    local_1c = iVar7 + -1;
    local_20 = iVar7;
    if (local_1c < 0) {
      local_1c = 0;
    }
  }
  else {
    local_20 = iVar7 + 1;
    local_1c = iVar7;
    if (4 < iVar7 + 1) {
      local_20 = 4;
    }
  }
  if (((*(int *)local_10 != iVar10) || (*(int *)&local_10->field_0x4 != iVar6)) ||
     (*(int *)&local_10->field_0x8 != iVar7)) {
    *(int *)local_10 = iVar10;
    *(int *)&local_10->field_0x4 = iVar6;
    *(int *)&local_10->field_0x8 = iVar7;
    *(undefined4 *)&local_10->field_0xc = 0;
  }
  if (*(int *)&local_10->field_0xc != 0) {
    return local_c;
  }
  iVar10 = local_1c;
  iVar6 = local_18;
  local_8 = local_14;
  if (local_28 < local_14) {
    return local_c;
  }
  do {
    while (iVar7 = iVar10, local_24 < iVar6) {
      local_8 = local_8 + 1;
      iVar6 = local_18;
      if (local_28 < local_8) {
        return local_c;
      }
    }
    for (; iVar10 <= local_20; iVar10 = iVar10 + 1) {
      if ((((((-1 < (short)local_8) && ((short)local_8 < g_worldGrid.sizeX)) &&
            (sVar5 = (short)iVar6, -1 < sVar5)) &&
           ((sVar5 < g_worldGrid.sizeY && (sVar9 = (short)iVar10, -1 < sVar9)))) &&
          (((sVar9 < g_worldGrid.sizeZ &&
            ((pSVar8 = g_worldGrid.cells
                       [(int)sVar5 * (int)g_worldGrid.sizeX +
                        (int)sVar9 * (int)g_worldGrid.planeStride + (int)(short)local_8].objects[0],
             pSVar8 != (STWorldObject *)0x0 && (param_9 != *(int *)&pSVar8->field_0x18)))) &&
           (iVar3 = (*pSVar8->vtable[4].slots_00_28[7])
                              (param_1,param_2,param_3,param_4,param_5,param_6), iVar7 = local_1c,
           0 < iVar3)))) &&
         ((param_13 == 0 || (pSVar8[1].vtable != (STWorldObjectVTable *)param_7)))) {
        *(int *)local_10 = local_8;
        *(int *)&local_10->field_0x4 = iVar6;
        *(int *)&local_10->field_0x8 = iVar10;
        goto LAB_00601aeb;
      }
    }
    iVar10 = iVar7;
    iVar6 = iVar6 + 1;
  } while( true );
}

