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
  STBoatC_field_06F7State SVar8;
  dword dVar9;
  short sVar10;
  int iVar11;
  short sVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  int *piVar18;

  if (STField<int>(this,0x5ac) == 0x6c) {
    iVar4 = thunk_FUN_004e9930((int)this);
    if ((((iVar4 == 0) || (iVar13 = STField<int>(this,0x61b), iVar13 == 0)) ||
        (*(int *)(iVar13 + 0x20) != 1000)) ||
       ((*(int *)(iVar13 + 0x4d8) != 0xffff || (g_worldGrid.sizeZ + -1 <= *(int *)(iVar13 + 0x5b8)))
       )) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
  }
  else {
    /* ST_CALLSITE[004E924C]: CALL dword ptr [EDX + 0x2c] */
    dVar9 = param_1->slot_2C();
    /* ST_CALLSITE[004E9258]: CALL dword ptr [EAX + 0x2c] */
    if (((int)dVar9 < 1) || (dVar9 = param_1->slot_2C(), 0x28 < (int)dVar9)) {
      /* ST_CALLSITE[004E9274]: CALL dword ptr [EAX + 0x2c] */
      dVar9 = param_1->slot_2C();
      /* ST_CALLSITE[004E9280]: CALL dword ptr [EDX + 0x2c] */
      if (((int)dVar9 < 0x32) || (dVar9 = param_1->slot_2C(), 0x73 < (int)dVar9))
      {
        iVar13 = 100;
      }
      else {
        /* ST_CALLSITE[004E9292]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
        uVar6 = LookupRecordByte(*(char *)&param_1->field_0024);
        /* ST_CALLSITE[004E92A3]: CALL dword ptr [EDX + 0x2c] */
        dVar9 = param_1->slot_2C();
        iVar13 = *(int *)(&DAT_007e37b0 + ((uint)(byte)uVar6 + dVar9 * 3) * 4);
      }
    }
    else {
      /* ST_CALLSITE[004E9264]: CALL dword ptr [EDX + 0x2c] */
      dVar9 = param_1->slot_2C();
      iVar13 = *(int *)(&DAT_007e0d9c + dVar9 * 4);
    }
    if (((STField<int>(this,0x4d0) * 100) / 100 < iVar13) || (STField<int>(this,0x42c) == 0))
    {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
  }
  if (((STField<int>(this,0x4d8) == 0xffff) && (bVar2)) && (STField<int>(this,0x245) == 0)) {
    if (STField<int>(this,0x5ac) == 0x6c) {
      iVar14 = STField<int>(this,0x61b);
      STField<undefined4>(this,0x4e4) = 0xffffffff;
      STField<undefined4>(this,0x4e8) = 0xffffffff;
      STField<undefined4>(this,0x4ec) = 0xffffffff;
      iVar11 = *(int *)(iVar14 + 0x5b4);
      iVar13 = iVar11 + 1;
      if (iVar11 <= iVar13) {
        iVar1 = *(int *)(iVar14 + 0x5b0);
        do {
          if (iVar1 <= iVar1 + 1) {
            sVar12 = *(short *)(iVar14 + 0x5b8) + 1;
            iVar5 = iVar1;
            do {
              sVar3 = (short)iVar5;
              if (((((sVar3 < 0) || (g_worldGrid.sizeX <= sVar3)) ||
                   (sVar10 = (short)iVar11, sVar10 < 0)) ||
                  ((g_worldGrid.sizeY <= sVar10 || (sVar12 < 0)))) ||
                 ((g_worldGrid.sizeZ <= sVar12 ||
                  (STGridAt3D(g_worldGrid, sVar3, sVar10, sVar12).objects[0] ==
                   nullptr)))) {
                STField<int>(this,0x4e4) = iVar5;
                STField<int>(this,0x4e8) = iVar11;
                STField<int>(this,0x4ec) = *(int *)(iVar14 + 0x5b8) + 1;
                goto LAB_004e946f;
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 <= iVar1 + 1);
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 <= iVar13);
      }
    }
    else {
      piVar18 = (int *)((int)this + 0x4f0);
      puVar17 = (undefined4 *)((int)this + 0x4ec);
      uVar7 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      puVar16 = (undefined4 *)((int)this + 0x4e8);
      STField<uint>(this,0x1c) = uVar7;
      puVar15 = (undefined4 *)((int)this + 0x4e4);
      uVar7 = uVar7 >> 0x10;
      iVar13 = STField<int>(this,0x438);
      iVar14 = STField<int>(this,0x434);
      iVar11 = STField<int>(this,0x430);
      /* ST_CALLSITE[004E945C]: CALL dword ptr [EAX + 0x2c] */
      SVar8 = param_1->slot_2C();
      thunk_FUN_004b2520(STField<uint>(this,0x24),SVar8,iVar11,iVar14,iVar13,puVar15,puVar16,
                         puVar17,uVar7,piVar18);
    }
LAB_004e946f:
    if (((-1 < STField<int>(this,0x4e4)) && (-1 < STField<int>(this,0x4e8))) &&
       (-1 < STField<int>(this,0x4ec))) {
      STField<int>(this,0x4d8) = param_1->field_0018;
      /* ST_CALLSITE[004E949A]: CALL dword ptr [EAX + 0x2c] */
      dVar9 = param_1->slot_2C();
      STField<dword>(this,0x4dc) = dVar9;
      if (g_tLOFake_00800BCC == nullptr) {
        thunk_FUN_004d0f00();
      }
      /* ST_CALLSITE[004E94CC]: CALL 0x00401582; direct=00401582 TLOFakeTy::sub_004D0970 */
      TLOFakeTy::sub_004D0970
                (g_tLOFake_00800BCC,STField<int>(this,0x4e4),STField<int>(this,0x4e8),
                 STField<int>(this,0x4ec));
      STField<undefined4>(this,0x4e0) = 1;
      return 1;
    }
  }
  return 0;
}

