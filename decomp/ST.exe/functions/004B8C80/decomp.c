
undefined4 __fastcall FUN_004b8c80(TLOBaseTy *param_1)

{
  undefined4 *puVar1;
  AnonPointee_TLOBaseTy_01F5 *pAVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  TLOBaseTy_field_0245State TVar6;
  uint uVar7;
  TLOBaseTyVTable *pTVar8;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  void *unaff_EDI;
  void *pvVar9;
  undefined4 uVar10;
  undefined4 local_2c [2];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  AnonShape_0060D340_D77FEBE7 *local_c;
  int local_8;

  TVar6 = param_1->field_0245;
  local_8 = 0;
  if (TVar6 == CASE_1) {
    if (param_1->field_05DF == 5) {
      if (param_1->field_04CC + 2 <= (uint)PTR_00802a38->field_00E4) {
        param_1->field_04CC = PTR_00802a38->field_00E4;
        iVar3 = param_1->field_04C8 + 1;
        param_1->field_04C8 = iVar3;
        if (*(short *)(DAT_00806724 + 0x23) + -1 <= iVar3) {
          local_18 = param_1->field_0008;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          local_24 = *(undefined4 *)(param_1->field_000C + 0x14);
          local_20 = 0;
          local_1c = 10;
          sub_006E60A0(param_1,local_2c);
          return 0;
        }
        thunk_FUN_004ace30(&param_1->field_01D5,*(uint *)(DAT_00806724 + 0x30 + iVar3 * 4),
                           (int)*(short *)(DAT_00806724 + 0x2c));
        return 0;
      }
    }
    else {
      puVar1 = &param_1->field_01D5;
      iVar3 = thunk_FUN_004ac910(puVar1,'\x04');
      if ((*(int *)&param_1->field_01F5->field_0xa4 <= iVar3) &&
         (iVar3 = thunk_FUN_004ac910(puVar1,'\x05'),
         *(int *)&param_1->field_01F5->field_0xc8 <= iVar3)) {
        local_18 = param_1->field_0008;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        local_24 = *(undefined4 *)(param_1->field_000C + 0x14);
        local_20 = 0;
        local_1c = 10;
        sub_006E60A0(param_1,local_2c);
        return 0;
      }
      (*param_1->vtable->vfunc_D8)();
      iVar3 = thunk_FUN_004ac910(puVar1,'\x04');
      if (iVar3 == *(int *)(&DAT_007cdf52 + *(int *)(&DAT_0079125c + param_1->field_0235 * 4) * 0x32
                           )) {
        STT3DSprC::StopShow((STT3DSprC *)puVar1,0xe);
        STT3DSprC::StopShow((STT3DSprC *)puVar1,0xd);
        STT3DSprC::StopShow((STT3DSprC *)puVar1,0xc);
        STT3DSprC::StopShow((STT3DSprC *)puVar1,9);
        STT3DSprC::StopShow((STT3DSprC *)puVar1,8);
        STT3DSprC::StopShow((STT3DSprC *)puVar1,7);
        STT3DSprC::StopShow((STT3DSprC *)puVar1,0x10);
        if (*(int *)(&DAT_00791a10 + param_1->field_0235 * 4) != 0) {
          thunk_FUN_004cbf70((int)param_1);
        }
        uVar7 = (uint)(param_1->field_024D == 4);
        uVar4 = GetPlayerRaceId(*(char *)&param_1->field_0024);
        thunk_FUN_0062b830((int)param_1->field_0041,(int)param_1->field_0043,
                           (int)param_1->field_0045,param_1->field_05AC,(int *)param_1,0xffffffff,
                           0xffffffff,uVar4 & 0xff,uVar7);
        return 0;
      }
      iVar3 = *(int *)(&DAT_0079125c + param_1->field_0235 * 4);
      iVar5 = thunk_FUN_004ac910(puVar1,'\x04');
      if (iVar5 == *(int *)(&DAT_007cdf5a + iVar3 * 0x32)) {
        iVar3 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)puVar1,5,DAT_00806764,"expl_bbt0" + iVar3 * 0x32,
                           0x1d);
        if (iVar3 != 0) {
          return 0xffff;
        }
        STT3DSprC::StartShow((STT3DSprC *)puVar1,5,PTR_00802a38->field_00E4);
      }
    }
    return 0;
  }
  if (TVar6 == (CASE_4|CASE_1)) {
    if (((param_1->field_0299 != 0) &&
        (iVar3 = thunk_FUN_004ac910(&param_1->field_01D5,'\x0e'),
        (int)(param_1->field_01F5->field_0208 + param_1->field_02A1) <= iVar3)) &&
       (param_1->field_029D == 0)) {
      thunk_FUN_004c4550(param_1,(int *)0x0);
    }
  }
  else if (TVar6 == CASE_6) {
    if (param_1->field_04BC != 4) {
      iVar3 = GetPlayerRaceId(*(char *)&param_1->field_023D);
      if ((char)iVar3 == '\x03') {
        uVar4 = GetPlayerRaceId(*(char *)&param_1->field_023D);
        if ((uint)PTR_00802a38->field_00E4 <
            (uint)(*(int *)(&DAT_007e3dc0 + ((uVar4 & 0xff) + param_1->field_0235 * 3) * 4) / 3 +
                  param_1->field_04B8)) goto cf_common_exit_004B9130;
      }
      else {
        iVar3 = thunk_FUN_004ac910(&param_1->field_01D5,'\x05');
        if (iVar3 != *(int *)&param_1->field_01F5->field_0xc8) goto cf_common_exit_004B9130;
        iVar3 = param_1->field_04BC;
        if (iVar3 == 1) {
          param_1->field_04BC = 2;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          TLOBaseTy::LoadImages(param_1,unaff_EDI);
          (*param_1->vtable->vfunc_D8)();
          return 0;
        }
        if (iVar3 == 2) {
          uVar4 = GetPlayerRaceId(*(char *)&param_1->field_023D);
          if ((uint)(*(int *)(&DAT_007e3dc0 + ((uVar4 & 0xff) + param_1->field_0235 * 3) * 4) / 3 +
                    param_1->field_04B8) <= (uint)PTR_00802a38->field_00E4) {
            pvVar9 = (void *)0x3;
            (*param_1->vtable->vfunc_90)(3,0x361);
            param_1->field_04BC = 3;
            TLOBaseTy::LoadImages(param_1,pvVar9);
            (*param_1->vtable->vfunc_90)(3,0x361);
            (*param_1->vtable->vfunc_D8)();
            return 0;
          }
          goto cf_common_exit_004B9130;
        }
        if (iVar3 != 3) goto cf_common_exit_004B9130;
      }
      param_1->field_04BC = 4;
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      TLOBaseTy::LoadImages(param_1,unaff_EDI);
      (*param_1->vtable->vfunc_90)(3,0x362);
cf_common_exit_004B9130:
      (*param_1->vtable->vfunc_D8)();
      return 0;
    }
    puVar1 = &param_1->field_01D5;
    iVar3 = thunk_FUN_004ac910(puVar1,'\x04');
    if (iVar3 == 0x15) {
      STT3DSprC::StopShow((STT3DSprC *)puVar1,0xe);
      STT3DSprC::StopShow((STT3DSprC *)puVar1,0xd);
      STT3DSprC::StopShow((STT3DSprC *)puVar1,0xc);
      STT3DSprC::StopShow((STT3DSprC *)puVar1,9);
      STT3DSprC::StopShow((STT3DSprC *)puVar1,8);
      STT3DSprC::StopShow((STT3DSprC *)puVar1,7);
      STT3DSprC::StopShow((STT3DSprC *)puVar1,0x10);
      if (*(int *)(&DAT_00791a10 + param_1->field_0235 * 4) != 0) {
        thunk_FUN_004cbf70((int)param_1);
      }
      thunk_FUN_004cc900((AnonShape_004CC900_31EE9CAA *)param_1);
      STT3DSprC::StopShow((STT3DSprC *)puVar1,5);
      iVar3 = (*param_1->vtable->vfunc_08)();
      if (iVar3 != 0) {
        (*param_1->vtable->SetActivity)(param_1,0);
        (*param_1->vtable->vfunc_D8)();
        return 0;
      }
      goto cf_common_exit_004B9130;
    }
    iVar3 = thunk_FUN_004ac910(puVar1,'\x04');
    if (iVar3 != *(int *)&param_1->field_01F5->field_0xa4) goto cf_common_exit_004B9130;
    if (*(int *)(&DAT_007e1c50 + (param_1->field_0235 * 3 + param_1->field_0239) * 4) != 0) {
      thunk_FUN_004d88f0(*(char *)&param_1->field_0024,
                         (param_1->field_05D7 *
                          *(int *)(&DAT_007e1c50 +
                                  (param_1->field_0235 * 3 + param_1->field_0239) * 4) * 0x3c) /
                         10000);
    }
    if (*(int *)(&DAT_007e24fc + (param_1->field_0235 * 3 + param_1->field_0239) * 4) != 0) {
      thunk_FUN_004d8a30(*(char *)&param_1->field_0024,
                         (param_1->field_05D7 *
                          *(int *)(&DAT_007e24fc +
                                  (param_1->field_0235 * 3 + param_1->field_0239) * 4) * 0x3c) /
                         10000);
    }
    if (*(int *)(&DAT_008545ac + (param_1->field_0235 * 3 + param_1->field_0239) * 4) != 0) {
      thunk_FUN_004d87b0(*(char *)&param_1->field_0024,
                         (param_1->field_05D7 *
                          *(int *)(&DAT_008545ac +
                                  (param_1->field_0235 * 3 + param_1->field_0239) * 4) * 0x3c) /
                         10000);
    }
    if (*(int *)(&DAT_007e3160 + (param_1->field_0235 * 3 + param_1->field_0239) * 4) != 0) {
      thunk_FUN_004e4380(param_1->field_0024,
                         (param_1->field_05D7 *
                          *(int *)(&DAT_007e3160 +
                                  (param_1->field_0235 * 3 + param_1->field_0239) * 4) * 0x3c) /
                         10000);
    }
    thunk_FUN_004d78e0(*(char *)&param_1->field_0024);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (param_1->field_0024 == (uint)*(byte *)(param_1->field_0010 + 0x112d)) {
      thunk_FUN_004d8b70((char)param_1->field_0024);
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (param_1->field_0024 != (uint)*(byte *)(param_1->field_0010 + 0x112d))
    goto cf_common_exit_004B8F5A;
    thunk_FUN_0052af50(0,(float)param_1->field_01F9,(float)param_1->field_01FD);
    uVar4 = GetPlayerRaceId(*(char *)&param_1->field_0024);
    uVar4 = uVar4 & 0xff;
    if (uVar4 == 1) {
      pTVar8 = param_1->vtable;
      uVar10 = 0x68;
    }
    else {
      if (uVar4 == 2) {
        (*param_1->vtable->vfunc_90)(6,0x69);
        goto cf_common_exit_004B8F5A;
      }
      if (uVar4 != 3) goto cf_common_exit_004B8F5A;
      pTVar8 = param_1->vtable;
      uVar10 = 0x6a;
    }
    (*pTVar8->vfunc_90)(6,uVar10);
cf_common_exit_004B8F5A:
    param_1->field_0241 = 0;
    param_1->field_05D7 = 0;
    param_1->field_05DF = 1;
    TLOBaseTy::SetState(param_1,1,0);
    local_18 = param_1->field_0008;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_24 = *(undefined4 *)(param_1->field_000C + 0x14);
    local_20 = 0;
    local_1c = 10;
    sub_006E60A0(param_1,local_2c);
    (*param_1->vtable->vfunc_D8)();
    return 0;
  }
  if (((param_1->field_0255 == 0) || (param_1->field_0245 != CASE_0)) || (param_1->field_0249 != 2))
  {
    if (param_1->field_0245 != CASE_4) {
      iVar3 = thunk_FUN_004ac910(&param_1->field_01D5,'\x0e');
      if (((iVar3 == param_1->field_01F5->field_020C) && (local_8 = 1, param_1->field_05AC == 0x65))
         && ((param_1->field_0408 != 0 &&
             ((param_1->field_040C != 0 &&
              (iVar3 = FUN_006e62d0(PTR_00802a38,param_1->field_040C,(int *)&local_c), iVar3 == 0)))
             ))) {
        thunk_FUN_0060d340(local_c);
        (*param_1->vtable->vfunc_90)(3,0x3d9);
      }
      if (*(int *)(&DAT_00791a10 + param_1->field_0235 * 4) != 0) {
        local_8 = thunk_FUN_004cc130((int)param_1);
      }
      goto cf_common_join_004B92EE;
    }
    if (param_1->field_03DC != 0) goto cf_common_join_004B92EE;
  }
  else {
    if ((uint)PTR_00802a38->field_00E4 <
        (uint)(*(int *)(&DAT_00792040 + param_1->field_0235 * 4) + param_1->field_0285))
    goto cf_common_join_004B92EE;
    param_1->field_0285 = PTR_00802a38->field_00E4;
    iVar3 = (int)param_1->field_0259 / 0xf;
    if (*(int *)(&DAT_007be8c8 + iVar3 * 0x60) != 0) {
      iVar3 = (((*(int *)(&DAT_007be8c8 + iVar3 * 0x60) < 1) - 1 & 2) - 1) + iVar3;
      if (iVar3 < 0x18) {
        if (iVar3 < 0) {
          iVar3 = 0x17;
        }
        thunk_FUN_004b98e0(param_1,iVar3 * 0xf);
      }
      else {
        thunk_FUN_004b98e0(param_1,0);
      }
      goto cf_common_join_004B92EE;
    }
  }
  local_8 = 1;
cf_common_join_004B92EE:
  puVar1 = &param_1->field_01D5;
  iVar3 = thunk_FUN_004acd30(puVar1,'\x0e');
  iVar5 = thunk_FUN_004acd30(puVar1,'\r');
  if (((iVar5 < iVar3) && (iVar3 = thunk_FUN_004acd30(puVar1,'\r'), 1 < iVar3)) &&
     (iVar3 = thunk_FUN_004cba10(), iVar3 == 2)) {
    pAVar2 = param_1->field_01F5;
    iVar3 = pAVar2->field_0208;
    if (iVar3 < (int)pAVar2->field_020C) {
      iVar3 = pAVar2->field_0210 - iVar3;
    }
    else {
      iVar3 = iVar3 - pAVar2->field_0210;
    }
    local_c = (AnonShape_0060D340_D77FEBE7 *)thunk_FUN_004acd30(puVar1,'\x0e');
    iVar5 = thunk_FUN_004acd30(puVar1,'\r');
    if (((int)local_c + (-1 - iVar5) <= iVar3) && ((param_1->field_01F1 & 0x2000) == 0)) {
      thunk_FUN_004ca7b0(param_1,0xd,0);
    }
  }
  if ((local_8 != 0) &&
     (TVar6 = thunk_FUN_004b8c00((AnonShape_004B8C00_93076312 *)param_1),
     TVar6 != param_1->field_0245)) {
    TLOBaseTy::SetState(param_1,TVar6,1);
  }
  if ((param_1->field_05DF != 0) && (param_1->field_04CC + 2 <= (uint)PTR_00802a38->field_00E4)) {
    param_1->field_04CC = PTR_00802a38->field_00E4;
    iVar3 = param_1->field_04C8 + -1;
    param_1->field_04C8 = iVar3;
    if (iVar3 == 0) {
      iVar5 = 0;
      param_1->field_05DF = 0;
      uVar4 = 0;
    }
    else {
      iVar5 = (int)*(short *)(DAT_00806724 + 0x2c);
      uVar4 = *(uint *)(DAT_00806724 + 0x30 + iVar3 * 4);
    }
    thunk_FUN_004ace30(&param_1->field_01D5,uVar4,iVar5);
  }
  (*param_1->vtable->vfunc_D8)();
  return 0;
}

