
int __thiscall
FUN_0058f680(void *this,undefined2 *param_1,undefined2 *param_2,undefined2 *param_3,short *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  short sVar11;
  short sVar12;
  int local_1c;
  int local_18;
  int local_14;
  int local_8;

  uVar8 = 0;
  uVar6 = 0;
  local_1c = STSharkC::sub_0058F430(this);
  if (*(int *)((int)this + 0x23d) != 0) {
    return local_1c;
  }
  iVar3 = (int)*(short *)((int)this + 0x47);
  if ((((iVar3 <= *(int *)((int)this + 0x27f)) &&
       (((sVar4 = *(short *)((int)this + 0x6c), sVar4 == 0xe1 || (sVar4 == 0xb4)) || (sVar4 == 0x87)
        ))) || ((*(int *)((int)this + 0x287) <= iVar3 &&
                (((sVar4 = *(short *)((int)this + 0x6c), sVar4 == 0x2d || (sVar4 == 0)) ||
                 (sVar4 == 0x13b)))))) ||
     (((iVar5 = (int)*(short *)((int)this + 0x49), iVar5 <= *(int *)((int)this + 0x283) &&
       (((sVar4 = *(short *)((int)this + 0x6c), sVar4 == 0x87 || (sVar4 == 0x5a)) || (sVar4 == 0x2d)
        ))) || ((*(int *)((int)this + 0x28b) <= iVar5 &&
                (((sVar4 = *(short *)((int)this + 0x6c), sVar4 == 0xe1 || (sVar4 == 0x10e)) ||
                 (sVar4 == 0x13b)))))))) {
    sVar4 = (short)((sVar4 + 0x2d) % 0x168);
    *param_4 = sVar4;
    while (sVar4 < 0) {
      *param_4 = *param_4 + 0x168;
      sVar4 = *param_4;
    }
    return 6;
  }
  local_18 = iVar3 + -1;
  if (iVar3 + -1 < *(int *)((int)this + 0x27f)) {
    local_18 = *(int *)((int)this + 0x27f);
  }
  local_14 = iVar5 + -1;
  if (iVar5 + -1 < *(int *)((int)this + 0x283)) {
    local_14 = *(int *)((int)this + 0x283);
  }
  iVar3 = *(short *)((int)this + 0x47) + 1;
  if (*(int *)((int)this + 0x287) < iVar3) {
    iVar3 = *(int *)((int)this + 0x287);
  }
  local_8 = iVar5 + 1;
  if (*(int *)((int)this + 0x28b) < iVar5 + 1) {
    local_8 = *(int *)((int)this + 0x28b);
  }
  do {
    iVar5 = (int)((ulonglong)((longlong)(int)*(short *)((int)this + 0x6c) * -0x49f49f49) >> 0x20) +
            (int)*(short *)((int)this + 0x6c);
    switch((iVar5 >> 5) - (iVar5 >> 0x1f)) {
    case 0:
      if (iVar3 < 0) {
        iVar5 = *(int *)((int)this + 0x1c);
      }
      else {
        iVar5 = *(int *)((int)this + 0x1c);
      }
      uVar6 = iVar5 * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar6;
      uVar8 = (uVar6 >> 0x10) % ((*(int *)((int)this + 0x287) - iVar3) + 1U) + iVar3;
      iVar5 = uVar8 - (int)*(short *)((int)this + 0x47);
      iVar2 = *(short *)((int)this + 0x49) - iVar5;
      if (iVar2 < 0) {
        iVar1 = *(int *)((int)this + 0x1c);
      }
      else {
        iVar1 = *(int *)((int)this + 0x1c);
      }
      uVar6 = iVar1 * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar6;
      uVar6 = (uVar6 >> 0x10) % (((*(short *)((int)this + 0x49) + iVar5) - iVar2) + 1U) + iVar2;
      break;
    case 1:
      uVar6 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar6;
      uVar6 = (uVar6 >> 0x10) % (local_14 + 1U);
      goto LAB_0058fb0d;
    case 2:
      uVar6 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar6;
      uVar6 = (uVar6 >> 0x10) % (local_14 + 1U);
      iVar2 = (int)*(short *)((int)this + 0x49) - uVar6;
      iVar5 = *(short *)((int)this + 0x47) + iVar2;
      iVar2 = *(short *)((int)this + 0x47) - iVar2;
      if (iVar2 < 0) {
        uVar8 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar8;
        uVar8 = (uVar8 >> 0x10) % ((iVar5 - iVar2) + 1U) + iVar2;
      }
      else {
        uVar8 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar8;
        uVar8 = (uVar8 >> 0x10) % ((iVar5 - iVar2) + 1U) + iVar2;
      }
      break;
    case 3:
      uVar6 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar6;
      uVar8 = (uVar6 >> 0x10) % (local_18 + 1U);
      uVar6 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar6;
      uVar6 = (uVar6 >> 0x10) % (local_14 + 1U);
      break;
    case 4:
      uVar6 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar6;
      uVar8 = (uVar6 >> 0x10) % (local_18 + 1U);
      iVar2 = (int)*(short *)((int)this + 0x47) - uVar8;
      iVar5 = *(short *)((int)this + 0x49) + iVar2;
      iVar2 = *(short *)((int)this + 0x49) - iVar2;
      if (iVar2 < 0) {
        uVar6 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar6;
        uVar6 = (uVar6 >> 0x10) % ((iVar5 - iVar2) + 1U) + iVar2;
      }
      else {
        uVar6 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar6;
        uVar6 = (uVar6 >> 0x10) % ((iVar5 - iVar2) + 1U) + iVar2;
      }
      break;
    case 5:
      if (local_8 < 0) {
        iVar5 = *(int *)((int)this + 0x1c);
      }
      else {
        iVar5 = *(int *)((int)this + 0x1c);
      }
      uVar6 = iVar5 * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar6;
      uVar6 = (uVar6 >> 0x10) % ((*(int *)((int)this + 0x28b) - local_8) + 1U) + local_8;
      uVar8 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar8;
      uVar8 = (uVar8 >> 0x10) % (local_18 + 1U);
      break;
    case 6:
      if (local_8 < 0) {
        iVar5 = *(int *)((int)this + 0x1c);
      }
      else {
        iVar5 = *(int *)((int)this + 0x1c);
      }
      uVar6 = iVar5 * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar6;
      uVar6 = (uVar6 >> 0x10) % ((*(int *)((int)this + 0x28b) - local_8) + 1U) + local_8;
      iVar5 = uVar6 - (int)*(short *)((int)this + 0x49);
      iVar2 = *(short *)((int)this + 0x47) - iVar5;
      if (iVar2 < 0) {
        iVar1 = *(int *)((int)this + 0x1c);
      }
      else {
        iVar1 = *(int *)((int)this + 0x1c);
      }
      uVar8 = iVar1 * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar8;
      uVar8 = (uVar8 >> 0x10) % (((*(short *)((int)this + 0x47) + iVar5) - iVar2) + 1U) + iVar2;
      break;
    case 7:
      if (local_8 < 0) {
        iVar5 = *(int *)((int)this + 0x1c);
      }
      else {
        iVar5 = *(int *)((int)this + 0x1c);
      }
      uVar6 = iVar5 * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar6;
      uVar6 = (uVar6 >> 0x10) % ((*(int *)((int)this + 0x28b) - local_8) + 1U) + local_8;
LAB_0058fb0d:
      if (iVar3 < 0) {
        iVar5 = *(int *)((int)this + 0x1c);
      }
      else {
        iVar5 = *(int *)((int)this + 0x1c);
      }
      uVar8 = iVar5 * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar8;
      uVar8 = (uVar8 >> 0x10) % ((*(int *)((int)this + 0x287) - iVar3) + 1U) + iVar3;
    }
    if ((uVar8 != (int)*(short *)((int)this + 0x47)) || (uVar6 != (int)*(short *)((int)this + 0x49))
       ) {
      if ((int)uVar8 < 0) {
        uVar8 = 0;
      }
      if ((int)*(uint *)((int)this + 0x287) < (int)uVar8) {
        uVar8 = *(uint *)((int)this + 0x287);
      }
      if ((int)uVar6 < 0) {
        uVar6 = 0;
      }
      if ((int)*(uint *)((int)this + 0x28b) < (int)uVar6) {
        uVar6 = *(uint *)((int)this + 0x28b);
      }
      uVar7 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar7;
      iVar3 = *(short *)((int)this + 0x4b) + -2 + (uVar7 >> 0x10) % 5;
      if (iVar3 < 5) {
        if (iVar3 < 0) {
          iVar3 = 0;
        }
      }
      else {
        iVar3 = 4;
      }
      iVar5 = iVar3 + 5;
      if (iVar3 < iVar5) {
        local_1c = 2;
        iVar2 = iVar3;
        do {
          uVar7 = uVar6;
          uVar9 = uVar8;
          iVar3 = iVar2;
          if (4 < iVar2) {
            iVar3 = iVar2 + -5;
          }
          do {
            while( true ) {
              while( true ) {
                while( true ) {
                  sVar4 = (short)uVar9;
                  sVar11 = (short)uVar7;
                  sVar12 = (short)iVar3;
                  iVar1 = thunk_FUN_004961b0(sVar4,sVar11,sVar12);
                  if (((iVar1 != 0) &&
                      (((sVar4 < 0 || (g_worldGrid.sizeX <= sVar4)) ||
                       ((sVar11 < 0 ||
                        ((((g_worldGrid.sizeY <= sVar11 || (sVar12 < 0)) ||
                          (g_worldGrid.sizeZ <= sVar12)) ||
                         (g_worldGrid.cells
                          [(int)sVar12 * (int)g_worldGrid.planeStride +
                           (int)sVar11 * (int)g_worldGrid.sizeX + (int)sVar4].objects[0] ==
                          (STWorldObject *)0x0)))))))) &&
                     (((sVar4 < 0 || (g_worldGrid.sizeX <= sVar4)) ||
                      ((sVar11 < 0 ||
                       (((g_worldGrid.sizeY <= sVar11 || (sVar12 < 0)) ||
                        ((g_worldGrid.sizeZ <= sVar12 ||
                         (g_worldGrid.cells
                          [(int)sVar12 * (int)g_worldGrid.planeStride +
                           (int)sVar11 * (int)g_worldGrid.sizeX + (int)sVar4].objects[1] ==
                          (STWorldObject *)0x0)))))))))) goto LAB_0058fd1a;
                  bVar10 = (int)(uVar9 - (int)*(short *)((int)this + 0x47)) < 0;
                  if (uVar9 == (int)*(short *)((int)this + 0x47) || bVar10) break;
                  uVar9 = uVar9 - 1;
                  if ((int)uVar9 < 0) goto LAB_0058fcfe;
                }
                if (!bVar10) break;
                uVar9 = uVar9 + 1;
              }
              bVar10 = -1 < (int)(uVar7 - (int)*(short *)((int)this + 0x49));
              if (uVar7 != (int)*(short *)((int)this + 0x49) && bVar10) break;
              if (bVar10) goto LAB_0058fcfe;
              uVar7 = uVar7 + 1;
            }
            uVar7 = uVar7 - 1;
          } while (-1 < (int)uVar7);
LAB_0058fcfe:
          iVar2 = iVar2 + 1;
        } while (iVar2 < iVar5);
      }
      else {
        uVar7 = uVar6;
        uVar9 = uVar8;
        if (local_1c != 0) {
LAB_0058fd1a:
          *param_1 = (short)uVar9;
          *param_2 = (short)uVar7;
          *param_3 = (short)iVar3;
          return local_1c;
        }
      }
      sVar4 = (short)((*(short *)((int)this + 0x6c) + 0x2d) % 0x168);
      *param_4 = sVar4;
      while (sVar4 < 0) {
        *param_4 = *param_4 + 0x168;
        sVar4 = *param_4;
      }
      return 6;
    }
  } while( true );
}

