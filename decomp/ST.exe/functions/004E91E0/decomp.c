
/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 00479600 -> 004E91E0 @ 004797EC */

undefined4 __thiscall FUN_004e91e0(void *this,STBoatC *param_1)

{
  int iVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  dword dVar7;
  short sVar8;
  int iVar9;
  short sVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  int *piVar16;

  if (*(int *)((int)this + 0x5ac) == 0x6c) {
    iVar4 = thunk_FUN_004e9930((int)this);
    if ((((iVar4 == 0) || (iVar4 = *(int *)((int)this + 0x61b), iVar4 == 0)) ||
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
    dVar7 = (*param_1->vtable->slot_2C)(param_1);
    if (((int)dVar7 < 1) || (dVar7 = (*param_1->vtable->slot_2C)(param_1), 0x28 < (int)dVar7)) {
      dVar7 = (*param_1->vtable->slot_2C)(param_1);
      if (((int)dVar7 < 0x32) || (dVar7 = (*param_1->vtable->slot_2C)(param_1), 0x73 < (int)dVar7))
      {
        iVar4 = 100;
      }
      else {
        uVar6 = GetPlayerRaceId(param_1->field_0x24);
        dVar7 = (*param_1->vtable->slot_2C)(param_1);
        iVar4 = *(int *)(&DAT_007e37b0 + ((uVar6 & 0xff) + dVar7 * 3) * 4);
      }
    }
    else {
      dVar7 = (*param_1->vtable->slot_2C)(param_1);
      iVar4 = *(int *)(&DAT_007e0d9c + dVar7 * 4);
    }
    if (((*(int *)((int)this + 0x4d0) * 100) / 100 < iVar4) || (*(int *)((int)this + 0x42c) == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
  }
  if (((*(int *)((int)this + 0x4d8) == 0xffff) && (bVar2)) && (*(int *)((int)this + 0x245) == 0)) {
    if (*(int *)((int)this + 0x5ac) == 0x6c) {
      iVar11 = *(int *)((int)this + 0x61b);
      *(undefined4 *)((int)this + 0x4e4) = 0xffffffff;
      *(undefined4 *)((int)this + 0x4e8) = 0xffffffff;
      *(undefined4 *)((int)this + 0x4ec) = 0xffffffff;
      iVar9 = *(int *)(iVar11 + 0x5b4);
      iVar4 = iVar9 + 1;
      if (iVar9 <= iVar4) {
        iVar1 = *(int *)(iVar11 + 0x5b0);
        do {
          if (iVar1 <= iVar1 + 1) {
            sVar10 = *(short *)(iVar11 + 0x5b8) + 1;
            iVar5 = iVar1;
            do {
              sVar3 = (short)iVar5;
              if (((((sVar3 < 0) || (g_worldGrid.sizeX <= sVar3)) ||
                   (sVar8 = (short)iVar9, sVar8 < 0)) ||
                  ((g_worldGrid.sizeY <= sVar8 || (sVar10 < 0)))) ||
                 ((g_worldGrid.sizeZ <= sVar10 ||
                  (g_worldGrid.cells
                   [(int)sVar8 * (int)g_worldGrid.sizeX + (int)g_worldGrid.planeStride * (int)sVar10
                    + (int)sVar3].objects[0] == (STWorldObject *)0x0)))) {
                *(int *)((int)this + 0x4e4) = iVar5;
                *(int *)((int)this + 0x4e8) = iVar9;
                *(int *)((int)this + 0x4ec) = *(int *)(iVar11 + 0x5b8) + 1;
                goto LAB_004e946f;
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 <= iVar1 + 1);
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 <= iVar4);
      }
    }
    else {
      piVar16 = (int *)((int)this + 0x4f0);
      puVar15 = (undefined4 *)((int)this + 0x4ec);
      uVar6 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      puVar14 = (undefined4 *)((int)this + 0x4e8);
      *(uint *)((int)this + 0x1c) = uVar6;
      puVar13 = (undefined4 *)((int)this + 0x4e4);
      uVar6 = uVar6 >> 0x10;
      uVar12 = *(undefined4 *)((int)this + 0x438);
      iVar4 = *(int *)((int)this + 0x434);
      iVar11 = *(int *)((int)this + 0x430);
      dVar7 = (*param_1->vtable->slot_2C)(param_1);
      thunk_FUN_004b2520(*(uint *)((int)this + 0x24),dVar7,iVar11,iVar4,uVar12,puVar13,puVar14,
                         puVar15,uVar6,piVar16);
    }
LAB_004e946f:
    if (((-1 < *(int *)((int)this + 0x4e4)) && (-1 < *(int *)((int)this + 0x4e8))) &&
       (-1 < *(int *)((int)this + 0x4ec))) {
      *(undefined4 *)((int)this + 0x4d8) = param_1->field_0018;
      dVar7 = (*param_1->vtable->slot_2C)(param_1);
      *(dword *)((int)this + 0x4dc) = dVar7;
      if (DAT_00800bcc == (void *)0x0) {
        thunk_FUN_004d0f00();
      }
      thunk_FUN_004d0970(DAT_00800bcc,*(undefined4 *)((int)this + 0x4e4),
                         *(undefined4 *)((int)this + 0x4e8),*(undefined4 *)((int)this + 0x4ec));
      *(undefined4 *)((int)this + 0x4e0) = 1;
      return 1;
    }
  }
  return 0;
}

