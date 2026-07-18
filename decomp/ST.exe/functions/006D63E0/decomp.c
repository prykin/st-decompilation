
int __thiscall FUN_006d63e0(void *this,int *param_1)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  HRGN hrgn;
  int iVar4;
  uint uVar5;
  BOOL BVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  uint *local_bc;
  int local_b8;
  HDC local_b4 [3];
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  undefined4 local_98 [4];
  int local_88;
  ushort *local_74;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0079dd90;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff0c;
  iVar8 = *(int *)((int)this + 0x284);
  local_b4[0] = (HDC)0x0;
  if ((*(uint *)(*(int *)(*(int *)((int)this + 0x288) + 0x28) + 0xc) & 0x100) == 0) {
    ExceptionList = &local_14;
    iVar4 = (**(code **)(*param_1 + 0xc))(param_1,&local_bc);
    if (iVar4 < 0) {
      ExceptionList = local_14;
      return iVar4;
    }
    iVar4 = *(int *)(*(int *)((int)this + 0x288) + 0x28);
    if ((*(uint *)(iVar4 + 8) & 0x4000000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(iVar4 + 0x4f0));
    }
    iVar4 = *(int *)((int)this + 0x288);
    if (((*(uint *)(iVar4 + 4) & 8) == 0) &&
       (((*(uint *)(iVar4 + 4) & 4) == 0 ||
        ((*(int *)(iVar4 + 0x20) == *(int *)(iVar4 + 0x10) &&
         (*(int *)(iVar4 + 0x24) == *(int *)(iVar4 + 0x14))))))) {
      iVar7 = *(int *)(iVar4 + 0x18);
      iVar1 = *(int *)(iVar4 + 0x1c);
      local_a0 = *(int *)(iVar4 + 0x20);
      pcVar2 = *(code **)(*(int *)(iVar4 + 0x28) + 0x4e4);
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(*(undefined4 *)(*(int *)(iVar4 + 0x28) + 0x4ec),iVar7,iVar1,local_a0,
                  *(undefined4 *)(iVar4 + 0x24));
      }
      iVar4 = *(int *)((int)this + 0x288);
      FUN_006b42d0(*(uint *)(iVar4 + 0x28),iVar7,iVar1,(BITMAPINFO *)(iVar8 + 0x30),local_bc,
                   *(int *)(iVar4 + 8),*(int *)(iVar4 + 0xc),*(DWORD *)(iVar4 + 0x10),
                   *(DWORD *)(iVar4 + 0x14));
    }
    else {
      if (((*(byte *)(iVar4 + 4) & 8) == 0) &&
         ((*(int *)(iVar4 + 0x20) != *(int *)(iVar4 + 0x10) * 2 ||
          (*(int *)(iVar4 + 0x24) != *(int *)(iVar4 + 0x14) * 2)))) {
        local_c0 = 0;
      }
      else {
        local_c0 = 1;
      }
      iVar7 = *(int *)(iVar4 + 0x18);
      local_a4 = *(int *)(iVar4 + 0x1c);
      local_a0 = *(int *)(iVar4 + 0x20);
      local_9c = *(int *)(iVar4 + 0x24);
      iVar4 = *(int *)(iVar4 + 0x28);
      piVar3 = *(int **)(iVar4 + 0x40);
      local_a8 = iVar7;
      if (*(code **)(iVar4 + 0x4e4) != (code *)0x0) {
        (**(code **)(iVar4 + 0x4e4))
                  (*(undefined4 *)(iVar4 + 0x4ec),iVar7,local_a4,local_a0,local_9c);
      }
      iVar4 = *(int *)((int)this + 0x288);
      if ((*(int *)(*(int *)(iVar4 + 0x28) + 0x20) < 0x11) && (*(ushort *)(iVar8 + 0x3e) < 0x11)) {
        uVar5 = (uint)*(ushort *)(iVar8 + 0x3e) * *(int *)(iVar8 + 0x34) + 0x1f >> 3 & 0x1ffffffc;
        BVar6 = IsBadReadPtr((uint *)(((*(int *)(iVar8 + 0x38) - *(int *)(iVar4 + 0xc)) -
                                      *(int *)(iVar4 + 0x14)) * uVar5 + (int)local_bc),
                             uVar5 * *(int *)(iVar4 + 0x14));
        if (BVar6 == 0) {
          local_cc = local_a4;
          local_c8 = iVar7 + local_a0;
          local_c4 = local_a4 + local_9c;
          puVar9 = local_98;
          for (iVar4 = 0x1f; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar9 = 0;
            puVar9 = puVar9 + 1;
          }
          local_98[0] = 0x7c;
          iVar4 = 0;
          local_d0 = iVar7;
          do {
            iVar7 = (**(code **)(*piVar3 + 100))(piVar3,&local_d0,local_98,0x21,0);
            if (iVar7 == 0) goto LAB_006d666f;
            if (iVar7 != -0x7789fe3e) break;
            FUN_006cec40(*(int *)(*(int *)((int)this + 0x288) + 0x28));
            iVar4 = iVar4 + 1;
          } while (iVar4 < 2);
          if (iVar7 == 0) {
LAB_006d666f:
            local_8 = 0;
            iVar4 = *(int *)((int)this + 0x288);
            if (*(int *)(*(int *)(iVar4 + 0x28) + 0x20) == 8) {
              uVar5 = (uint)*(ushort *)(iVar8 + 0x3e) * *(int *)(iVar8 + 0x34) + 0x1f >> 3 &
                      0x1ffffffc;
              iVar8 = ((*(int *)(iVar8 + 0x38) - *(int *)(iVar4 + 0xc)) + -1) * uVar5 +
                      *(int *)(iVar4 + 8);
              if (local_c0 == 0) {
                FUN_006db310((undefined4 *)local_74,local_88,local_a0,local_9c,iVar8 + (int)local_bc
                             ,-uVar5,*(int *)(iVar4 + 0x10),*(uint *)(iVar4 + 0x14));
              }
              else {
                FUN_006db450((undefined4 *)local_74,local_88,(undefined2 *)(iVar8 + (int)local_bc),
                             -uVar5,*(int *)(iVar4 + 0x10),*(uint *)(iVar4 + 0x14));
              }
            }
            else if (*(ushort *)(iVar8 + 0x3e) == 8) {
              uVar5 = *(int *)(iVar8 + 0x34) * 8 + 0x1fU >> 3 & 0x1ffffffc;
              iVar7 = ((*(int *)(iVar8 + 0x38) - *(int *)(iVar4 + 0xc)) + -1) * uVar5 +
                      *(int *)(iVar4 + 8);
              iVar8 = *(int *)(*(int *)(iVar4 + 0x28) + 0x4c0);
              if (local_c0 == 0) {
                FUN_006db0d0((undefined4 *)local_74,local_88,local_a0,local_9c,iVar7 + (int)local_bc
                             ,-uVar5,*(int *)(iVar4 + 0x10),*(uint *)(iVar4 + 0x14),iVar8);
              }
              else {
                FUN_006db1f0(local_74,local_88,(byte *)(iVar7 + (int)local_bc),-uVar5,
                             *(int *)(iVar4 + 0x10),*(uint *)(iVar4 + 0x14),iVar8);
              }
            }
            else {
              uVar5 = (uint)*(ushort *)(iVar8 + 0x3e) * *(int *)(iVar8 + 0x34) + 0x1f >> 3 &
                      0x1ffffffc;
              iVar8 = ((*(int *)(iVar8 + 0x38) - *(int *)(iVar4 + 0xc)) + -1) * uVar5 +
                      *(int *)(iVar4 + 8) * 2;
              if (local_c0 == 0) {
                FUN_006daed0((undefined4 *)local_74,local_88,local_a0,local_9c,iVar8 + (int)local_bc
                             ,-uVar5,*(int *)(iVar4 + 0x10),*(uint *)(iVar4 + 0x14));
              }
              else {
                FUN_006dafd0(local_74,local_88,(ushort *)(iVar8 + (int)local_bc),-uVar5,
                             *(int *)(iVar4 + 0x10),*(uint *)(iVar4 + 0x14));
              }
            }
            local_8 = 0xffffffff;
          }
        }
        (**(code **)(*piVar3 + 0x80))(piVar3,0);
      }
      else {
        piVar3 = *(int **)(*(int *)(iVar4 + 0x28) + 0x40);
        local_b8 = 0;
        do {
          iVar4 = (**(code **)(*piVar3 + 0x44))(piVar3,local_b4);
          if (iVar4 == 0) goto LAB_006d68c8;
          if (iVar4 == -0x7789fe3e) {
            FUN_006cec40(*(int *)(*(int *)((int)this + 0x288) + 0x28));
          }
          else if (iVar4 != -0x7789fde4) break;
          local_b8 = local_b8 + 1;
        } while (local_b8 < 40000);
        if (iVar4 == 0) {
LAB_006d68c8:
          iVar4 = *(int *)(*(int *)((int)this + 0x288) + 0x28);
          SetViewportOrgEx(local_b4[0],*(int *)(iVar4 + 0x10),*(int *)(iVar4 + 0x14),(LPPOINT)0x0);
          hrgn = *(HRGN *)(*(int *)(*(int *)((int)this + 0x288) + 0x28) + 0x494);
          if (hrgn != (HRGN)0x0) {
            SelectClipRgn(local_b4[0],hrgn);
          }
          *(HDC **)(*(int *)(*(int *)((int)this + 0x288) + 0x28) + 0x47c) = local_b4;
          *(int **)(*(int *)(*(int *)((int)this + 0x288) + 0x28) + 0x480) = piVar3;
          iVar4 = *(int *)((int)this + 0x288);
          StretchDIBits(local_b4[0],local_a8,local_a4,local_a0,local_9c,*(int *)(iVar4 + 8),
                        *(int *)(iVar4 + 0xc),*(int *)(iVar4 + 0x10),*(int *)(iVar4 + 0x14),local_bc
                        ,(BITMAPINFO *)(iVar8 + 0x30),0,0xcc0020);
          iVar8 = 0;
          do {
            iVar4 = (**(code **)(*piVar3 + 0x68))(piVar3,local_b4[0]);
            if (iVar4 == 0) break;
            if (iVar4 == -0x7789fe3e) {
              FUN_006cec40(*(int *)(*(int *)((int)this + 0x288) + 0x28));
            }
            else if (iVar4 != -0x7789fde4) break;
            iVar8 = iVar8 + 1;
          } while (iVar8 < 40000);
        }
        *(undefined4 *)(*(int *)(*(int *)((int)this + 0x288) + 0x28) + 0x47c) = 0;
      }
    }
    iVar8 = *(int *)(*(int *)((int)this + 0x288) + 0x28);
    if ((*(uint *)(iVar8 + 8) & 0x4000000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(iVar8 + 0x4f0));
    }
  }
  ExceptionList = local_14;
  return 0;
}

