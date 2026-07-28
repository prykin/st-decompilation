#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 004CCC10 -> 006E62D0 @ 004CD011 | 004CCC10 -> 006E62D0 @ 004CD062 | 004CCC10 ->
   006E62D0 @ 004CD0A6 | 004CCC10 -> 006E62D0 @ 004CD0EC | 004CCC10 -> 006E62D0 @ 004CD124 */

void __thiscall FUN_004ccc10(void *this,int *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_02;
  undefined4 *puVar8;
  char playerId;
  undefined4 uVar9;
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
  playerId = (char)param_1;
  if ((*(int *)((int)this + 0x24) == *(int *)((int)this + 0x23d)) &&
     (*(int *)(&DAT_007e1218 + (*(int *)((int)this + 0x235) * 3 + *(int *)((int)this + 0x239)) * 4)
      != 0)) {
    memset(local_294, 0, 0x26c); /* compiler bulk-zero initialization */
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = local_294;
    iVar6 = 0;
    do {
      uVar2 = GetPlayerRaceId(*(char *)((int)this + 0x24));
      if (*(char *)(*(int *)(&DAT_007bfc00 + (uVar2 & 0xff) * 4) + iVar6) == '\0') {
        iVar3 = thunk_FUN_004e60d0((int)piVar1,iVar6);
        iVar3 = thunk_FUN_004e7f20((int)piVar1,iVar6,iVar3 + 1);
        if (iVar3 != 0) {
          *param_1 = 1;
        }
      }
      iVar6 = iVar6 + 1;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = param_1 + 1;
    } while (iVar6 < 0x9b);
    thunk_FUN_004e7eb0((int)piVar1,*(int *)((int)this + 0x24),
                       *(int *)(&DAT_007e1218 +
                               (*(int *)((int)this + 0x235) * 3 + *(int *)((int)this + 0x239)) * 4))
    ;
    if (piVar1 == (int *)(uint)DAT_0080874d) {
      uVar2 = GetPlayerRaceId(playerId);
      uVar2 = uVar2 & 0xff;
      if (uVar2 == 1) {
        iVar6 = *(int *)this;
        uVar9 = 0x74;
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
LAB_004ccd43:
        (**(code **)(iVar6 + 0x90))(6,uVar9);
      }
      else if (uVar2 == 2) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*(int *)this + 0x90))(6,0x75);
      }
      else if (uVar2 == 3) {
        iVar6 = *(int *)this;
        uVar9 = 0x76;
        goto LAB_004ccd43;
      }
    }
    if (DAT_008117bc != (undefined4 *)0x0) {
      memset(local_28, 0, 0x20); /* compiler bulk-zero initialization */
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = local_294;
      local_18 = 0x5de9;
      local_14 = SUB42(piVar1,0);
      iVar6 = 0;
      do {
        uVar2 = GetPlayerRaceId(*(char *)((int)this + 0x24));
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        if ((*(char *)(*(int *)(&DAT_007bfc00 + (uVar2 & 0xff) * 4) + iVar6) == '\0') &&
           (*param_1 == 0)) {
          iVar3 = thunk_FUN_004e60d0((int)piVar1,iVar6);
          iVar3 = thunk_FUN_004e7f20((int)piVar1,iVar6,iVar3 + 1);
          if (iVar3 != 0) {
            local_10 = (undefined2)iVar6;
            uVar9 = thunk_FUN_004e60d0((int)piVar1,iVar6);
            local_e = (short)uVar9 + 1;
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)*DAT_008117bc)(local_28);
          }
        }
        iVar6 = iVar6 + 1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = param_1 + 1;
      } while (iVar6 < 0x9b);
    }
  }
  *(int **)((int)this + 0x24) = piVar1;
  *(int **)((int)this + 0x5c0) = param_2;
  uVar2 = GetPlayerRaceId(playerId);
  *(uint *)((int)this + 0x239) = (uVar2 & 0xff) - 1;
  thunk_FUN_004b9920(this);
  iVar6 = 0;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  TLOEmbryoTy::sub_00419C70(this,extraout_EDX,0);
  thunk_FUN_0041f630(this);
  if ((*(int *)(&DAT_00792778 + *(int *)((int)this + 0x235) * 4) == 0) ||
     (iVar3 = thunk_FUN_004e81b0(*(int *)((int)this + 0x24),*(int *)((int)this + 0x235),0),
     iVar3 == 0)) {
    puVar4 = (undefined *)0x5;
  }
  else {
    puVar4 = (undefined *)
             thunk_FUN_004e81b0(*(int *)((int)this + 0x24),*(int *)((int)this + 0x235),0);
  }
  TLOEmbryoTy::sub_0041C3F0(this,puVar4);
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uVar9 = extraout_EDX_00;
  if (*(int *)((int)this + 0x5ac) == 0x34) {
    thunk_FUN_004dd880(this);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    uVar9 = extraout_EDX_01;
  }
  if (*(int *)((int)this + 0x24) == *(int *)((int)this + 0x23d)) {
LAB_004ccedc:
    if (*(int *)((int)this + 0x5ac) == 0x50) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      thunk_FUN_004b7080(CONCAT31((int3)((uint)uVar9 >> 8),*(undefined1 *)((int)this + 0x24)),0x28);
    }
    if ((*(int *)((int)this + 0x5ac) == 0x6f) || (*(int *)((int)this + 0x5ac) == 0x73)) {
      thunk_FUN_004ecc70(this);
    }
    if ((*(int *)((int)this + 0x5ac) == 0x36) || (*(int *)((int)this + 0x5ac) == 0x5d)) {
      iVar3 = thunk_FUN_004e60d0(*(int *)((int)this + 0x24),
                                 *(int *)(&DAT_00798fb0 + *(int *)((int)this + 0x239) * 4));
      iVar3 = *(int *)(&DAT_00798f98 + (iVar3 + *(int *)((int)this + 0x239) * 2) * 4);
      *(int *)((int)this + 0x4d0) = iVar3;
      thunk_FUN_0041ce40(this,iVar3);
      *(undefined4 *)((int)this + 0x4dc) = 1;
    }
    if ((*(int *)((int)this + 0x5ac) == 0x3d) || (*(int *)((int)this + 0x5ac) == 0x5d)) {
      thunk_FUN_004e4f30(this);
    }
  }
  else {
    uVar2 = GetPlayerRaceId((char)*(int *)((int)this + 0x23d));
    iVar3 = *(int *)((int)this + 0x235);
    uVar5 = GetPlayerRaceId(*(char *)((int)this + 0x24));
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    uVar9 = extraout_EDX_02;
    if ((&DAT_007e1984)[(uVar5 & 0xff) + (iVar3 * 3 + (uVar2 & 0xff)) * 3] != '\0')
    goto LAB_004ccedc;
    *(undefined4 *)((int)this + 0x261) = 0;
    *(undefined4 *)((int)this + 0x2e1) = 0;
    if (*(int *)((int)this + 0x5ac) == 0x3c) {
      thunk_FUN_004db0a0(local_8);
    }
  }
  if (*(int *)((int)this + 0x408) != 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = (int *)0x0;
    if (*(int *)((int)this + 0x24) != *(int *)((int)this + 0x23d)) {
      uVar2 = GetPlayerRaceId((char)*(int *)((int)this + 0x23d));
      iVar3 = *(int *)((int)this + 0x235);
      uVar5 = GetPlayerRaceId(*(char *)((int)this + 0x24));
      if ((&DAT_007e1984)[(uVar5 & 0xff) + ((uVar2 & 0xff) + iVar3 * 3) * 3] == '\0') {
        thunk_FUN_004c2d40(this);
        goto LAB_004cd038;
      }
    }
    iVar3 = STPlaySystemC::sub_006E62D0
                      (g_playSystem_00802A38,*(AnonShape_005EFAE0_B406B78B **)((int)this + 0x40c),
                       (int *)&param_2);
    if ((iVar3 == 0) && (param_2 != (int *)0x0)) {
      thunk_FUN_0060bc80(param_2,*(undefined4 *)((int)this + 0x24),*(ushort *)((int)this + 0x32));
    }
  }
/* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
LAB_004cd038:
  if (((*(int *)((int)this + 0x5ac) == 0x6a) &&
      (*(uint *)((int)this + 0x4d4) <= g_playSystem_00802A38->field_00E4)) &&
     (iVar3 = STPlaySystemC::sub_006E62D0
                        (g_playSystem_00802A38,*(AnonShape_005EFAE0_B406B78B **)((int)this + 0x4d0),
                         (int *)&param_2), iVar3 == 0)) {
    thunk_FUN_005822b0(param_2,*(undefined4 *)((int)this + 0x24),*(ushort *)((int)this + 0x32));
  }
  if ((*(int *)((int)this + 0x5ac) == 0x41) && (0 < *(int *)((int)this + 0x4e4))) {
    puVar8 = (undefined4 *)((int)this + 0x4d0);
    do {
      if (((AnonShape_005EFAE0_B406B78B *)*puVar8 != (AnonShape_005EFAE0_B406B78B *)0x0) &&
         (iVar3 = STPlaySystemC::sub_006E62D0
                            (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)*puVar8,
                             (int *)&param_2), iVar3 == 0)) {
        thunk_FUN_00590130(param_2,*(undefined4 *)((int)this + 0x24));
      }
      iVar6 = iVar6 + 1;
      puVar8 = puVar8 + 1;
    } while (iVar6 < *(int *)((int)this + 0x4e4));
  }
  if ((*(int *)((int)this + 0x5ac) == 0x69) &&
     (iVar6 = STPlaySystemC::sub_006E62D0
                        (g_playSystem_00802A38,*(AnonShape_005EFAE0_B406B78B **)((int)this + 0x4ec),
                         (int *)&param_2), iVar6 == 0)) {
    thunk_FUN_00618b40(param_2,*(undefined4 *)((int)this + 0x24),*(undefined2 *)((int)this + 0x32));
  }
  if (((*(int *)((int)this + 0x5ac) == 0x70) &&
      (*(AnonShape_005EFAE0_B406B78B **)((int)this + 0x4f0) != (AnonShape_005EFAE0_B406B78B *)0x0))
     && (iVar6 = STPlaySystemC::sub_006E62D0
                           (g_playSystem_00802A38,
                            *(AnonShape_005EFAE0_B406B78B **)((int)this + 0x4f0),(int *)&param_2),
        iVar6 == 0)) {
    thunk_FUN_0058cf90(param_2,*(undefined4 *)((int)this + 0x24),*(undefined2 *)((int)this + 0x32));
  }
  if (*(int *)((int)this + 0x24) != *(int *)((int)this + 0x23d)) {
    uVar2 = GetPlayerRaceId((char)*(int *)((int)this + 0x23d));
    iVar6 = *(int *)((int)this + 0x235);
    uVar5 = GetPlayerRaceId(*(char *)((int)this + 0x24));
    if ((&DAT_007e1984)[(uVar5 & 0xff) + ((uVar2 & 0xff) + iVar6 * 3) * 3] == '\0')
    goto LAB_004cd1d7;
  }
  iVar6 = *(int *)((int)this + 0x5ac);
  if ((((iVar6 != 0x4d) || (*(int *)((int)this + 0x4d0) == 2)) &&
      ((iVar6 != 0x4c || (*(int *)((int)this + 0x4d0) == 2)))) &&
     ((iVar6 != 0x43 || (*(int *)((int)this + 0x4d0) == 2)))) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar6 = (**(code **)(*(int *)this + 0x2c))();
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    thunk_FUN_004b76d0(CONCAT31((int3)((uint)iVar6 >> 8),*(undefined1 *)((int)this + 0x24)),iVar6);
  }
LAB_004cd1d7:
  TLOBaseTy::ReloadLogoPlane(this);
  TLOBaseTy::RotateSpr(this,1);
  if (*(uint *)((int)this + 0x24) == (uint)*(byte *)(*(int *)((int)this + 0x10) + 0x112d)) {
    thunk_FUN_004d8b70((char)*(uint *)((int)this + 0x24));
  }
  return;
}

