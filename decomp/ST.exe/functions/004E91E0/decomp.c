#include "../../pseudocode_runtime.h"


/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 00479600 -> 004E91E0 @ 004797EC */

undefined4 __thiscall FUN_004e91e0(void *this,STBoatC *param_1)

{
  int iVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  int uVar6;
  int iVar5;
  uint uVar7;
  dword dVar8;
  short sVar9;
  int iVar10;
  short sVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  int *piVar16;

  if (STField<int>(this,0x5ac) == 0x6c) {
    iVar4 = thunk_FUN_004e9930((int)this);
    if ((((iVar4 == 0) || (iVar4 = STField<int>(this,0x61b), iVar4 == 0)) ||
        (*(int *)(iVar4 + 0x20) != 1000)) ||
       ((*(int *)(iVar4 + 0x4d8) != 0xffff || (g_worldGrid.sizeZ + -1 <= *(int *)(iVar4 + 0x5b8)))))
    {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
  }
  else {
    dVar8 = param_1->slot_2C();
    if (((int)dVar8 < 1) || (dVar8 = param_1->slot_2C(), 0x28 < (int)dVar8)) {
      dVar8 = param_1->slot_2C();
      if (((int)dVar8 < 0x32) || (dVar8 = param_1->slot_2C(), 0x73 < (int)dVar8))
      {
        iVar4 = 100;
      }
      else {
        uVar6 = LookupRecordByte(*(char *)&param_1->field_0024);
        dVar8 = param_1->slot_2C();
        iVar4 = *(int *)(&DAT_007e37b0 + ((uint)(byte)uVar6 + dVar8 * 3) * 4);
      }
    }
    else {
      dVar8 = param_1->slot_2C();
      iVar4 = *(int *)(&DAT_007e0d9c + dVar8 * 4);
    }
    if (((STField<int>(this,0x4d0) * 100) / 100 < iVar4) || (STField<int>(this,0x42c) == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
  }
  if (((STField<int>(this,0x4d8) == 0xffff) && (bVar2)) && (STField<int>(this,0x245) == 0)) {
    if (STField<int>(this,0x5ac) == 0x6c) {
      iVar12 = STField<int>(this,0x61b);
      STField<undefined4>(this,0x4e4) = 0xffffffff;
      STField<undefined4>(this,0x4e8) = 0xffffffff;
      STField<undefined4>(this,0x4ec) = 0xffffffff;
      iVar10 = *(int *)(iVar12 + 0x5b4);
      iVar4 = iVar10 + 1;
      if (iVar10 <= iVar4) {
        iVar1 = *(int *)(iVar12 + 0x5b0);
        do {
          if (iVar1 <= iVar1 + 1) {
            sVar11 = *(short *)(iVar12 + 0x5b8) + 1;
            iVar5 = iVar1;
            do {
              sVar3 = (short)iVar5;
              if (((((sVar3 < 0) || (g_worldGrid.sizeX <= sVar3)) ||
                   (sVar9 = (short)iVar10, sVar9 < 0)) ||
                  ((g_worldGrid.sizeY <= sVar9 || (sVar11 < 0)))) ||
                 ((g_worldGrid.sizeZ <= sVar11 ||
                  (STGridAt3D(g_worldGrid, sVar3, sVar9, sVar11).objects[0] == nullptr)))) {
                STField<int>(this,0x4e4) = iVar5;
                STField<int>(this,0x4e8) = iVar10;
                STField<int>(this,0x4ec) = *(int *)(iVar12 + 0x5b8) + 1;
                goto LAB_004e946f;
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 <= iVar1 + 1);
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 <= iVar4);
      }
    }
    else {
      piVar16 = (int *)((int)this + 0x4f0);
      puVar15 = (undefined4 *)((int)this + 0x4ec);
      uVar7 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      puVar14 = (undefined4 *)((int)this + 0x4e8);
      STField<uint>(this,0x1c) = uVar7;
      puVar13 = (undefined4 *)((int)this + 0x4e4);
      uVar7 = uVar7 >> 0x10;
      iVar4 = STField<int>(this,0x438);
      iVar12 = STField<int>(this,0x434);
      iVar10 = STField<int>(this,0x430);
      dVar8 = param_1->slot_2C();
      thunk_FUN_004b2520(STField<uint>(this,0x24),dVar8,iVar10,iVar12,iVar4,puVar13,puVar14,
                         puVar15,uVar7,piVar16);
    }
LAB_004e946f:
    if (((-1 < STField<int>(this,0x4e4)) && (-1 < STField<int>(this,0x4e8))) &&
       (-1 < STField<int>(this,0x4ec))) {
      STField<int>(this,0x4d8) = param_1->field_0018;
      dVar8 = param_1->slot_2C();
      STField<dword>(this,0x4dc) = dVar8;
      if (DAT_00800bcc == nullptr) {
        thunk_FUN_004d0f00();
      }
      thunk_FUN_004d0970(DAT_00800bcc,STField<int>(this,0x4e4),STField<int>(this,0x4e8),
                         STField<int>(this,0x4ec));
      STField<undefined4>(this,0x4e0) = 1;
      return 1;
    }
  }
  return 0;
}

