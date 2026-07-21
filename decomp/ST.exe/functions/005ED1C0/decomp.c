
undefined4 __thiscall FUN_005ed1c0(void *this,int *param_1,int *param_2,int *param_3,int *param_4)

{
  short sVar1;
  STWorldObject *pSVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  short sVar10;
  int iVar11;
  int local_8;
  
  iVar8 = *(int *)((int)this + 0x2ba);
  *param_4 = iVar8;
  if (*(char *)((int)this + 0x25a) != '\0') {
    if (*(int *)((int)this + 0x287) == 0) {
      iVar11 = *(int *)((int)this + 0x293);
    }
    else {
      iVar11 = (PTR_00802a38->field_00E4 - *(int *)((int)this + 0x28f)) *
               *(int *)((int)this + 0x287);
      iVar11 = (int)(iVar11 + (iVar11 >> 0x1f & 0xfU)) >> 4;
    }
    if (*(int *)((int)this + 0x28b) != 0) {
      iVar8 = *(int *)((int)this + 0x28b) + iVar8;
      *param_4 = iVar8;
      if (iVar8 < 0) {
        *param_4 = iVar8 + 0x18;
      }
      if (0x17 < *param_4) {
        *param_4 = *param_4 + -0x18;
      }
      if (*param_4 == *(int *)((int)this + 0x273) / 0xf) {
        *(undefined4 *)((int)this + 0x28b) = 0;
      }
    }
    if (*(int *)((int)this + 0x293) <= iVar11) {
      if (*(int *)((int)this + 0x28b) != 0) {
        *(undefined4 *)((int)this + 0x287) = 0;
        return 1;
      }
      *param_1 = *(int *)((int)this + 0x267);
      *param_2 = *(int *)((int)this + 0x26b);
      *param_3 = *(int *)((int)this + 0x26f);
      *(undefined4 *)((int)this + 0x283) = 0;
      return 1;
    }
    iVar8 = *(int *)((int)this + 0x29b);
    iVar7 = *(int *)((int)this + 0x29f);
    iVar3 = *(int *)((int)this + 0x25f);
    iVar4 = *(int *)((int)this + 0x263);
    *param_1 = (*(int *)((int)this + 0x297) * iVar11) / 10000 + *(int *)((int)this + 0x25b);
    *param_2 = (iVar8 * iVar11) / 10000 + iVar3;
    *param_3 = (iVar7 * iVar11) / 10000 + iVar4;
    goto cf_common_exit_005ED874;
  }
  iVar11 = *(int *)((int)this + 0x263);
  if (*(int *)((int)this + 0x26f) - iVar11 < 1) {
    local_8 = -(uint)(*(int *)((int)this + 0x26f) != iVar11);
  }
  else {
    local_8 = 1;
  }
  if (*(int *)((int)this + 0x287) == 0) {
    iVar11 = *(int *)((int)this + 0x2c6);
  }
  else {
    iVar7 = (PTR_00802a38->field_00E4 - *(int *)((int)this + 0x28f)) * *(int *)((int)this + 0x287) *
            local_8;
    iVar11 = ((int)(iVar7 + (iVar7 >> 0x1f & 7U)) >> 3) + iVar11;
  }
  if (*(int *)((int)this + 0x28b) != 0) {
    iVar8 = *(int *)((int)this + 0x28b) + iVar8;
    *param_4 = iVar8;
    if (iVar8 < 0) {
      *param_4 = iVar8 + 0x18;
    }
    if (0x17 < *param_4) {
      *param_4 = *param_4 + -0x18;
    }
    if (*param_4 == *(int *)((int)this + 0x273) / 0xf) {
      *(undefined4 *)((int)this + 0x28b) = 0;
    }
  }
  sVar1 = (short)(iVar11 >> 0x1f);
  if (iVar11 < 0) {
    iVar8 = (short)(((short)(iVar11 / 200) + sVar1) - (short)((longlong)iVar11 * 0x51eb851f >> 0x3f)
                   ) + -1;
  }
  else {
    iVar8 = (int)(short)(((short)(iVar11 / 200) + sVar1) -
                        (short)((longlong)iVar11 * 0x51eb851f >> 0x3f));
  }
  sVar1 = *(short *)((int)this + 0x246);
  if (iVar8 != sVar1) {
    if ((1 < *(byte *)((int)this + 0x252)) && (*(short *)((int)this + 600) == iVar8)) {
      iVar7 = thunk_FUN_00495ff0(*(short *)((int)this + 0x242),*(short *)((int)this + 0x244),sVar1,0
                                 ,this);
      if (iVar7 == 0) {
        *(char *)((int)this + 0x252) = *(char *)((int)this + 0x252) + -1;
      }
      *(short *)((int)this + 0x246) = (short)iVar8;
      *(undefined1 *)((int)this + 0x253) = 0xff;
      *param_1 = *(int *)((int)this + 0x277);
      *param_2 = *(int *)((int)this + 0x27b);
      *param_3 = iVar11;
      return 1;
    }
    *param_1 = *(int *)((int)this + 0x277);
    *param_2 = *(int *)((int)this + 0x27b);
    *param_3 = iVar11;
    *(undefined4 *)((int)this + 0x283) = 1;
    if (*param_1 != *(int *)((int)this + 0x267)) {
      return 1;
    }
    if (*param_2 != *(int *)((int)this + 0x26b)) {
      return 1;
    }
    if (*param_3 != *(int *)((int)this + 0x26f)) {
      return 1;
    }
    *(undefined4 *)((int)this + 0x287) = 0;
    if (*(int *)((int)this + 0x273) != *(int *)((int)this + 0x2ba) * 0xf) {
      return 1;
    }
    *(undefined4 *)((int)this + 0x28b) = 0;
    *(undefined4 *)((int)this + 0x283) = 0;
    return 1;
  }
  iVar8 = (int)(short)(sVar1 * 200 + 100);
  if (1 < *(byte *)((int)this + 0x252)) {
    *param_1 = *(int *)((int)this + 0x277);
    *param_2 = *(int *)((int)this + 0x27b);
    *param_3 = iVar11;
    goto cf_common_exit_005ED874;
  }
  if (local_8 == 0) {
LAB_005ed68c:
    *param_1 = *(int *)((int)this + 0x277);
    *param_2 = *(int *)((int)this + 0x27b);
    *param_3 = iVar11;
    *(undefined4 *)((int)this + 0x283) = 1;
    if (*param_1 != *(int *)((int)this + 0x267)) {
      return 1;
    }
    if (*param_2 != *(int *)((int)this + 0x26b)) {
      return 1;
    }
    if (*param_3 != *(int *)((int)this + 0x26f)) {
      return 1;
    }
    *(undefined4 *)((int)this + 0x287) = 0;
    if (*(int *)((int)this + 0x273) != *(int *)((int)this + 0x2ba) * 0xf) {
      return 1;
    }
    *(undefined4 *)((int)this + 0x28b) = 0;
    *(undefined4 *)((int)this + 0x283) = 0;
    return 1;
  }
  sVar5 = (short)local_8;
  if ((iVar8 + 0x1e < iVar11) && (0 < local_8)) {
    sVar10 = *(short *)((int)this + 0x244);
    sVar9 = sVar1 + sVar5;
    sVar6 = *(short *)((int)this + 0x242);
    if (((-1 < sVar6) && (sVar6 < g_worldGrid.sizeX)) &&
       ((-1 < sVar10 &&
        (((sVar10 < g_worldGrid.sizeY && (-1 < sVar9)) && (sVar9 < g_worldGrid.sizeZ)))))) {
      pSVar2 = g_worldGrid.cells
               [(int)g_worldGrid.planeStride * (int)sVar9 + (int)g_worldGrid.sizeX * (int)sVar10 +
                (int)sVar6].objects[0];
joined_r0x005ed4b7:
      if (pSVar2 != (STWorldObject *)0x0) goto LAB_005ed643;
    }
  }
  else {
    if ((iVar8 + -0x1e <= iVar11) || (-1 < local_8)) {
      if (((0 < local_8) && (*(int *)((int)this + 0x26f) <= iVar11)) ||
         ((local_8 < 0 && (iVar11 <= *(int *)((int)this + 0x26f))))) {
        *(undefined4 *)((int)this + 0x287) = 0;
        *param_1 = *(int *)((int)this + 0x277);
        *param_2 = *(int *)((int)this + 0x27b);
        *param_3 = *(int *)((int)this + 0x26f);
        iVar11 = *(int *)((int)this + 0x26f);
        if (*(int *)((int)this + 0x273) == *(int *)((int)this + 0x2ba)) {
          *(undefined4 *)((int)this + 0x28b) = 0;
          *(undefined4 *)((int)this + 0x283) = 0;
          return 1;
        }
      }
      goto LAB_005ed68c;
    }
    sVar10 = *(short *)((int)this + 0x244);
    sVar9 = sVar1 + sVar5;
    sVar6 = *(short *)((int)this + 0x242);
    if ((((-1 < sVar6) && (sVar6 < g_worldGrid.sizeX)) && (-1 < sVar10)) &&
       (((sVar10 < g_worldGrid.sizeY && (-1 < sVar9)) && (sVar9 < g_worldGrid.sizeZ)))) {
      pSVar2 = g_worldGrid.cells
               [(int)sVar9 * (int)g_worldGrid.planeStride + (int)sVar10 * (int)g_worldGrid.sizeX +
                (int)sVar6].objects[0];
      goto joined_r0x005ed4b7;
    }
  }
  iVar8 = DumpClassC::WritePtr(sVar6,sVar10,sVar1 + sVar5,0,this);
  if (iVar8 == 0) {
    *(char *)((int)this + 0x252) = *(char *)((int)this + 0x252) + '\x01';
    *(undefined2 *)((int)this + 0x254) = *(undefined2 *)((int)this + 0x242);
    *(undefined2 *)((int)this + 0x256) = *(undefined2 *)((int)this + 0x244);
    *(short *)((int)this + 600) = *(short *)((int)this + 0x246) + sVar5;
    *param_1 = *(int *)((int)this + 0x277);
    *param_2 = *(int *)((int)this + 0x27b);
    *param_3 = iVar11;
cf_common_exit_005ED874:
    *(undefined4 *)((int)this + 0x283) = 1;
    return 1;
  }
LAB_005ed643:
  thunk_FUN_005ef4b0(this,*(int *)((int)this + 0x273));
  *param_1 = *(int *)((int)this + 0x277);
  *param_2 = *(int *)((int)this + 0x27b);
  *param_3 = *(int *)((int)this + 0x27f);
  *(undefined4 *)((int)this + 0x283) = 0xffffffff;
  return 1;
}

