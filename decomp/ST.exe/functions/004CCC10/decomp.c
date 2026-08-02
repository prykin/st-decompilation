#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 004CCC10 -> 006E62D0 @ 004CD011 | 004CCC10 -> 006E62D0 @ 004CD062 | 004CCC10 ->
   006E62D0 @ 004CD0A6 | 004CCC10 -> 006E62D0 @ 004CD0EC | 004CCC10 -> 006E62D0 @ 004CD124 */

void __thiscall FUN_004ccc10(void *this,int *param_1,int *param_2)

{
  int *piVar1;
  int local_EAX_120;
  int iVar2;
  int uVar2;
  uint uVar3;
  int local_EAX_374;
  int local_EAX_512;
  undefined *puVar4;
  int local_EAX_654;
  int local_EAX_691;
  int local_EAX_948;
  int uVar5;
  int local_EAX_1346;
  int local_EAX_1385;
  int iVar5;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_02;
  undefined4 *puVar7;
  char recordIndex;
  undefined4 uVar8;
  int local_294 [155];
  undefined4 local_28 [4];
  undefined4 local_18;
  undefined2 local_14;
  undefined2 local_10;
  short local_e;
  int local_8;

  piVar1 = param_1;
  local_8 = *(int *)((int)this + 0x24);
  thunk_FUN_00423180();
  recordIndex = (char)param_1;
  if ((*(int *)((int)this + 0x24) == *(int *)((int)this + 0x23d)) &&
     (*(int *)(&DAT_007e1218 + (*(int *)((int)this + 0x235) * 3 + *(int *)((int)this + 0x239)) * 4)
      != 0)) {
    memset(local_294, 0, 0x26c); /* compiler bulk-zero initialization */
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = local_294;
    iVar5 = 0;
    do {
      local_EAX_120 = LookupRecordByte(*(char *)((int)this + 0x24));
      if (*(char *)(*(int *)(&DAT_007bfc00 + (local_EAX_120 & 0xffU) * 4) + iVar5) == '\0') {
        iVar2 = thunk_FUN_004e60d0((int)piVar1,iVar5);
        iVar2 = thunk_FUN_004e7f20((int)piVar1,iVar5,iVar2 + 1);
        if (iVar2 != 0) {
          *param_1 = 1;
        }
      }
      iVar5 = iVar5 + 1;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = param_1 + 1;
    } while (iVar5 < 0x9b);
    thunk_FUN_004e7eb0((int)piVar1,*(int *)((int)this + 0x24),
                       *(int *)(&DAT_007e1218 +
                               (*(int *)((int)this + 0x235) * 3 + *(int *)((int)this + 0x239)) * 4));
    if (piVar1 == (int *)(uint)DAT_0080874d) {
      uVar2 = LookupRecordByte(recordIndex);
      uVar3 = uVar2 & 0xff;
      if (uVar3 == 1) {
        iVar5 = *(int *)this;
        uVar8 = 0x74;
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
LAB_004ccd43:
        (**(code **)(iVar5 + 0x90))(6,uVar8);
      }
      else if (uVar3 == 2) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*(int *)this + 0x90))(6,0x75);
      }
      else if (uVar3 == 3) {
        iVar5 = *(int *)this;
        uVar8 = 0x76;
        goto LAB_004ccd43;
      }
    }
    if (DAT_008117bc != nullptr) {
      memset(local_28, 0, 0x20); /* compiler bulk-zero initialization */
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = local_294;
      local_18 = 0x5de9;
      local_14 = SUB42(piVar1,0);
      iVar5 = 0;
      do {
        local_EAX_374 = LookupRecordByte(*(char *)((int)this + 0x24));
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        if ((*(char *)(*(int *)(&DAT_007bfc00 + (local_EAX_374 & 0xffU) * 4) + iVar5) == '\0') &&
           (*param_1 == 0)) {
          iVar2 = thunk_FUN_004e60d0((int)piVar1,iVar5);
          iVar2 = thunk_FUN_004e7f20((int)piVar1,iVar5,iVar2 + 1);
          if (iVar2 != 0) {
            local_10 = (undefined2)iVar5;
            uVar8 = thunk_FUN_004e60d0((int)piVar1,iVar5);
            local_e = (short)uVar8 + 1;
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)*DAT_008117bc)(local_28);
          }
        }
        iVar5 = iVar5 + 1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = param_1 + 1;
      } while (iVar5 < 0x9b);
    }
  }
  *(int **)((int)this + 0x24) = piVar1;
  *(int **)((int)this + 0x5c0) = param_2;
  local_EAX_512 = LookupRecordByte(recordIndex);
  *(uint *)((int)this + 0x239) = (local_EAX_512 & 0xffU) - 1;
  thunk_FUN_004b9920(this);
  iVar5 = 0;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  TLOEmbryoTy::sub_00419C70(this,extraout_EDX,0);
  thunk_FUN_0041f630(this);
  if ((*(int *)(&DAT_00792778 + *(int *)((int)this + 0x235) * 4) == 0) ||
     (iVar2 = thunk_FUN_004e81b0(*(int *)((int)this + 0x24),*(int *)((int)this + 0x235),0),
     iVar2 == 0)) {
    puVar4 = (undefined *)0x5;
  }
  else {
    puVar4 = (undefined *)
             thunk_FUN_004e81b0(*(int *)((int)this + 0x24),*(int *)((int)this + 0x235),0);
  }
  TLOEmbryoTy::sub_0041C3F0(this,puVar4);
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uVar8 = extraout_EDX_00;
  if (*(int *)((int)this + 0x5ac) == 0x34) {
    thunk_FUN_004dd880(this);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    uVar8 = extraout_EDX_01;
  }
  if (*(int *)((int)this + 0x24) == *(int *)((int)this + 0x23d)) {
LAB_004ccedc:
    if (*(int *)((int)this + 0x5ac) == 0x50) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      thunk_FUN_004b7080(CONCAT31((int3)((uint)uVar8 >> 8),*(undefined1 *)((int)this + 0x24)),0x28);
    }
    if ((*(int *)((int)this + 0x5ac) == 0x6f) || (*(int *)((int)this + 0x5ac) == 0x73)) {
      thunk_FUN_004ecc70(this);
    }
    if ((*(int *)((int)this + 0x5ac) == 0x36) || (*(int *)((int)this + 0x5ac) == 0x5d)) {
      iVar2 = thunk_FUN_004e60d0(*(int *)((int)this + 0x24),
                                 *(int *)(&DAT_00798fb0 + *(int *)((int)this + 0x239) * 4));
      iVar2 = *(int *)(&DAT_00798f98 + (iVar2 + *(int *)((int)this + 0x239) * 2) * 4);
      *(int *)((int)this + 0x4d0) = iVar2;
      thunk_FUN_0041ce40(this,iVar2);
      *(undefined4 *)((int)this + 0x4dc) = 1;
    }
    if ((*(int *)((int)this + 0x5ac) == 0x3d) || (*(int *)((int)this + 0x5ac) == 0x5d)) {
      thunk_FUN_004e4f30(this);
    }
  }
  else {
    local_EAX_654 = LookupRecordByte((char)*(int *)((int)this + 0x23d));
    iVar2 = *(int *)((int)this + 0x235);
    local_EAX_691 = LookupRecordByte(*(char *)((int)this + 0x24));
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    uVar8 = extraout_EDX_02;
    if ((&DAT_007e1984)[(local_EAX_691 & 0xffU) + (iVar2 * 3 + (local_EAX_654 & 0xffU)) * 3] != '\0'
       ) goto LAB_004ccedc;
    *(undefined4 *)((int)this + 0x261) = 0;
    *(undefined4 *)((int)this + 0x2e1) = 0;
    if (*(int *)((int)this + 0x5ac) == 0x3c) {
      thunk_FUN_004db0a0(local_8);
    }
  }
  if (*(int *)((int)this + 0x408) != 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = nullptr;
    if (*(int *)((int)this + 0x24) != *(int *)((int)this + 0x23d)) {
      local_EAX_948 = LookupRecordByte((char)*(int *)((int)this + 0x23d));
      iVar2 = *(int *)((int)this + 0x235);
      uVar5 = LookupRecordByte(*(char *)((int)this + 0x24));
      if ((&DAT_007e1984)[(uVar5 & 0xffU) + ((local_EAX_948 & 0xffU) + iVar2 * 3) * 3] == '\0') {
        thunk_FUN_004c2d40(this);
        goto LAB_004cd038;
      }
    }
    iVar2 = STPlaySystemC::sub_006E62D0
                      (g_playSystem_00802A38,*(AnonShape_005EFAE0_B406B78B **)((int)this + 0x40c),
                       (int *)&param_2);
    if ((iVar2 == 0) && (param_2 != nullptr)) {
      thunk_FUN_0060bc80(param_2,*(undefined4 *)((int)this + 0x24),*(ushort *)((int)this + 0x32));
    }
  }
/* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
LAB_004cd038:
  if (((*(int *)((int)this + 0x5ac) == 0x6a) &&
      (*(uint *)((int)this + 0x4d4) <= g_playSystem_00802A38->field_00E4)) &&
     (iVar2 = STPlaySystemC::sub_006E62D0
                        (g_playSystem_00802A38,*(AnonShape_005EFAE0_B406B78B **)((int)this + 0x4d0),
                         (int *)&param_2), iVar2 == 0)) {
    thunk_FUN_005822b0(param_2,*(undefined4 *)((int)this + 0x24),*(ushort *)((int)this + 0x32));
  }
  if ((*(int *)((int)this + 0x5ac) == 0x41) && (0 < *(int *)((int)this + 0x4e4))) {
    puVar7 = (undefined4 *)((int)this + 0x4d0);
    do {
      if (((AnonShape_005EFAE0_B406B78B *)*puVar7 != nullptr) &&
         (iVar2 = STPlaySystemC::sub_006E62D0
                            (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)*puVar7,
                             (int *)&param_2), iVar2 == 0)) {
        thunk_FUN_00590130(param_2,*(undefined4 *)((int)this + 0x24));
      }
      iVar5 = iVar5 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar5 < *(int *)((int)this + 0x4e4));
  }
  if ((*(int *)((int)this + 0x5ac) == 0x69) &&
     (iVar5 = STPlaySystemC::sub_006E62D0
                        (g_playSystem_00802A38,*(AnonShape_005EFAE0_B406B78B **)((int)this + 0x4ec),
                         (int *)&param_2), iVar5 == 0)) {
    thunk_FUN_00618b40(param_2,*(undefined4 *)((int)this + 0x24),*(undefined2 *)((int)this + 0x32));
  }
  if (((*(int *)((int)this + 0x5ac) == 0x70) &&
      (*(AnonShape_005EFAE0_B406B78B **)((int)this + 0x4f0) != nullptr))
     && (iVar5 = STPlaySystemC::sub_006E62D0
                           (g_playSystem_00802A38,
                            *(AnonShape_005EFAE0_B406B78B **)((int)this + 0x4f0),(int *)&param_2),
        iVar5 == 0)) {
    thunk_FUN_0058cf90(param_2,*(undefined4 *)((int)this + 0x24),*(undefined2 *)((int)this + 0x32));
  }
  if (*(int *)((int)this + 0x24) != *(int *)((int)this + 0x23d)) {
    local_EAX_1346 = LookupRecordByte((char)*(int *)((int)this + 0x23d));
    iVar5 = *(int *)((int)this + 0x235);
    local_EAX_1385 = LookupRecordByte(*(char *)((int)this + 0x24));
    if ((&DAT_007e1984)[(local_EAX_1385 & 0xffU) + ((local_EAX_1346 & 0xffU) + iVar5 * 3) * 3] ==
        '\0') goto LAB_004cd1d7;
  }
  iVar5 = *(int *)((int)this + 0x5ac);
  if ((((iVar5 != 0x4d) || (*(int *)((int)this + 0x4d0) == 2)) &&
      ((iVar5 != 0x4c || (*(int *)((int)this + 0x4d0) == 2)))) &&
     ((iVar5 != 0x43 || (*(int *)((int)this + 0x4d0) == 2)))) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar5 = (**(code **)(*(int *)this + 0x2c))();
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    thunk_FUN_004b76d0(CONCAT31((int3)((uint)iVar5 >> 8),*(undefined1 *)((int)this + 0x24)),iVar5);
  }
LAB_004cd1d7:
  TLOBaseTy::ReloadLogoPlane(this);
  TLOBaseTy::RotateSpr(this,1);
  if (*(uint *)((int)this + 0x24) == (uint)*(byte *)(*(int *)((int)this + 0x10) + 0x112d)) {
    thunk_FUN_004d8b70((char)*(uint *)((int)this + 0x24));
  }
  return;
}

