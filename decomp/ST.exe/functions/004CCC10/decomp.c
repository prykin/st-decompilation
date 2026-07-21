
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 004CCC10 -> 006E62D0 @ 004CD011 | 004CCC10 -> 006E62D0 @ 004CD062 | 004CCC10 ->
   006E62D0 @ 004CD0A6 | 004CCC10 -> 006E62D0 @ 004CD0EC | 004CCC10 -> 006E62D0 @ 004CD124 */

void __thiscall FUN_004ccc10(void *this,int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_02;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  char playerId;
  undefined4 uVar9;
  int local_294 [155];
  undefined4 local_28 [4];
  undefined4 local_18;
  undefined2 local_14;
  undefined2 local_10;
  short local_e;
  int local_8;

  piVar8 = param_1;
  local_8 = *(int *)((int)this + 0x24);
  thunk_FUN_00423180();
  playerId = (char)param_1;
  if ((*(int *)((int)this + 0x24) == *(int *)((int)this + 0x23d)) &&
     (*(int *)(&DAT_007e1218 + (*(int *)((int)this + 0x235) * 3 + *(int *)((int)this + 0x239)) * 4)
      != 0)) {
    piVar6 = local_294;
    for (iVar5 = 0x9b; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar6 = 0;
      piVar6 = piVar6 + 1;
    }
    param_1 = local_294;
    iVar5 = 0;
    do {
      uVar1 = GetPlayerRaceId(*(char *)((int)this + 0x24));
      if (*(char *)(*(int *)(&DAT_007bfc00 + (uVar1 & 0xff) * 4) + iVar5) == '\0') {
        iVar2 = thunk_FUN_004e60d0((int)piVar8,iVar5);
        iVar2 = thunk_FUN_004e7f20((int)piVar8,iVar5,iVar2 + 1);
        if (iVar2 != 0) {
          *param_1 = 1;
        }
      }
      iVar5 = iVar5 + 1;
      param_1 = param_1 + 1;
    } while (iVar5 < 0x9b);
    thunk_FUN_004e7eb0((int)piVar8,*(int *)((int)this + 0x24),
                       *(int *)(&DAT_007e1218 +
                               (*(int *)((int)this + 0x235) * 3 + *(int *)((int)this + 0x239)) * 4))
    ;
    if (piVar8 == (int *)(uint)DAT_0080874d) {
      uVar1 = GetPlayerRaceId(playerId);
      uVar1 = uVar1 & 0xff;
      if (uVar1 == 1) {
        iVar5 = *(int *)this;
        uVar9 = 0x74;
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
LAB_004ccd43:
        (**(code **)(iVar5 + 0x90))(6,uVar9);
      }
      else if (uVar1 == 2) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*(int *)this + 0x90))(6,0x75);
      }
      else if (uVar1 == 3) {
        iVar5 = *(int *)this;
        uVar9 = 0x76;
        goto LAB_004ccd43;
      }
    }
    if (DAT_008117bc != (undefined4 *)0x0) {
      puVar7 = local_28;
      for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      param_1 = local_294;
      local_18 = 0x5de9;
      local_14 = SUB42(piVar8,0);
      iVar5 = 0;
      do {
        uVar1 = GetPlayerRaceId(*(char *)((int)this + 0x24));
        if ((*(char *)(*(int *)(&DAT_007bfc00 + (uVar1 & 0xff) * 4) + iVar5) == '\0') &&
           (*param_1 == 0)) {
          iVar2 = thunk_FUN_004e60d0((int)piVar8,iVar5);
          iVar2 = thunk_FUN_004e7f20((int)piVar8,iVar5,iVar2 + 1);
          if (iVar2 != 0) {
            local_10 = (undefined2)iVar5;
            uVar9 = thunk_FUN_004e60d0((int)piVar8,iVar5);
            local_e = (short)uVar9 + 1;
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)*DAT_008117bc)(local_28);
          }
        }
        iVar5 = iVar5 + 1;
        param_1 = param_1 + 1;
      } while (iVar5 < 0x9b);
    }
  }
  *(int **)((int)this + 0x24) = piVar8;
  *(int **)((int)this + 0x5c0) = param_2;
  uVar1 = GetPlayerRaceId(playerId);
  *(uint *)((int)this + 0x239) = (uVar1 & 0xff) - 1;
  thunk_FUN_004b9920(this);
  iVar5 = 0;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  thunk_FUN_00419c70(this,extraout_EDX,0);
  thunk_FUN_0041f630(this);
  if ((*(int *)(&DAT_00792778 + *(int *)((int)this + 0x235) * 4) == 0) ||
     (iVar2 = thunk_FUN_004e81b0(*(int *)((int)this + 0x24),*(int *)((int)this + 0x235),0),
     iVar2 == 0)) {
    puVar3 = (undefined *)0x5;
  }
  else {
    puVar3 = (undefined *)
             thunk_FUN_004e81b0(*(int *)((int)this + 0x24),*(int *)((int)this + 0x235),0);
  }
  thunk_FUN_0041c3f0(this,puVar3);
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uVar9 = extraout_EDX_00;
  if (*(int *)((int)this + 0x5ac) == 0x34) {
    thunk_FUN_004dd880((int)this);
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
    uVar1 = GetPlayerRaceId((char)*(int *)((int)this + 0x23d));
    iVar2 = *(int *)((int)this + 0x235);
    uVar4 = GetPlayerRaceId(*(char *)((int)this + 0x24));
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    uVar9 = extraout_EDX_02;
    if ((&DAT_007e1984)[(uVar4 & 0xff) + (iVar2 * 3 + (uVar1 & 0xff)) * 3] != '\0')
    goto LAB_004ccedc;
    *(undefined4 *)((int)this + 0x261) = 0;
    *(undefined4 *)((int)this + 0x2e1) = 0;
    if (*(int *)((int)this + 0x5ac) == 0x3c) {
      thunk_FUN_004db0a0(local_8);
    }
  }
  if (*(int *)((int)this + 0x408) != 0) {
    param_2 = (int *)0x0;
    if (*(int *)((int)this + 0x24) != *(int *)((int)this + 0x23d)) {
      uVar1 = GetPlayerRaceId((char)*(int *)((int)this + 0x23d));
      iVar2 = *(int *)((int)this + 0x235);
      uVar4 = GetPlayerRaceId(*(char *)((int)this + 0x24));
      if ((&DAT_007e1984)[(uVar4 & 0xff) + ((uVar1 & 0xff) + iVar2 * 3) * 3] == '\0') {
        thunk_FUN_004c2d40(this);
        goto LAB_004cd038;
      }
    }
    iVar2 = FUN_006e62d0(PTR_00802a38,*(int *)((int)this + 0x40c),(int *)&param_2);
    if ((iVar2 == 0) && (param_2 != (int *)0x0)) {
      thunk_FUN_0060bc80(param_2,*(undefined4 *)((int)this + 0x24),
                         (uint)*(ushort *)((int)this + 0x32));
    }
  }
/* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
LAB_004cd038:
  if (((*(int *)((int)this + 0x5ac) == 0x6a) &&
      (*(uint *)((int)this + 0x4d4) <= (uint)PTR_00802a38->field_00E4)) &&
     (iVar2 = FUN_006e62d0(PTR_00802a38,*(int *)((int)this + 0x4d0),(int *)&param_2), iVar2 == 0)) {
    thunk_FUN_005822b0(param_2,*(undefined4 *)((int)this + 0x24),*(undefined2 *)((int)this + 0x32));
  }
  if ((*(int *)((int)this + 0x5ac) == 0x41) && (0 < *(int *)((int)this + 0x4e4))) {
    piVar8 = (int *)((int)this + 0x4d0);
    do {
      if ((*piVar8 != 0) && (iVar2 = FUN_006e62d0(PTR_00802a38,*piVar8,(int *)&param_2), iVar2 == 0)
         ) {
        thunk_FUN_00590130(param_2,*(undefined4 *)((int)this + 0x24));
      }
      iVar5 = iVar5 + 1;
      piVar8 = piVar8 + 1;
    } while (iVar5 < *(int *)((int)this + 0x4e4));
  }
  if ((*(int *)((int)this + 0x5ac) == 0x69) &&
     (iVar5 = FUN_006e62d0(PTR_00802a38,*(int *)((int)this + 0x4ec),(int *)&param_2), iVar5 == 0)) {
    thunk_FUN_00618b40(param_2,*(undefined4 *)((int)this + 0x24),*(undefined2 *)((int)this + 0x32));
  }
  if (((*(int *)((int)this + 0x5ac) == 0x70) && (*(int *)((int)this + 0x4f0) != 0)) &&
     (iVar5 = FUN_006e62d0(PTR_00802a38,*(int *)((int)this + 0x4f0),(int *)&param_2), iVar5 == 0)) {
    thunk_FUN_0058cf90(param_2,*(undefined4 *)((int)this + 0x24),*(undefined2 *)((int)this + 0x32));
  }
  if (*(int *)((int)this + 0x24) != *(int *)((int)this + 0x23d)) {
    uVar1 = GetPlayerRaceId((char)*(int *)((int)this + 0x23d));
    iVar5 = *(int *)((int)this + 0x235);
    uVar4 = GetPlayerRaceId(*(char *)((int)this + 0x24));
    if ((&DAT_007e1984)[(uVar4 & 0xff) + ((uVar1 & 0xff) + iVar5 * 3) * 3] == '\0')
    goto LAB_004cd1d7;
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

