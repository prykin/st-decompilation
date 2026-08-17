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
  int local_EAX_374;
  int local_EAX_512;
  undefined *puVar3;
  int local_EAX_654;
  int local_EAX_691;
  int local_EAX_948;
  int uVar5;
  int local_EAX_1346;
  int local_EAX_1385;
  int iVar4;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_00;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_01;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_02;
  STMessage *pSVar6;
  undefined4 *puVar7;
  char recordIndex;
  undefined4 uVar8;
  int local_294 [155];
  STMessage local_28;
  int local_8;

  piVar1 = param_1;
  local_8 = STField<int>(this,0x24);
  thunk_FUN_00423180();
  recordIndex = (char)param_1;
  if ((STField<int>(this,0x24) == STField<int>(this,0x23d)) &&
     (*(int *)(&DAT_007e1218 + (STField<int>(this,0x235) * 3 + STField<int>(this,0x239)) * 4)
      != 0)) {
    memset(local_294, 0, 0x26c); /* compiler bulk-zero initialization */
    auto param_1_after_write = local_294; /* compiler stack-slot lifetime split */
    iVar4 = 0;
    do {
      /* ST_CALLSITE[004CCC88]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_120 = LookupRecordByte(STField<char>(this,0x24));
      local_EAX_120 = (int)(byte)local_EAX_120;
      if (*(char *)(*(int *)(&DAT_007bfc00 + local_EAX_120 * 4) + iVar4) == '\0') {
        iVar2 = thunk_FUN_004e60d0((int)piVar1,iVar4);
        iVar2 = thunk_FUN_004e7f20((int)piVar1,iVar4,iVar2 + 1);
        if (iVar2 != 0) {
          *param_1_after_write = 1;
        }
      }
      iVar4 = iVar4 + 1;
      param_1_after_write = param_1_after_write + 1;
    } while (iVar4 < 0x9b);
    thunk_FUN_004e7eb0((int)piVar1,STField<int>(this,0x24),
                       *(int *)(&DAT_007e1218 +
                               (STField<int>(this,0x235) * 3 + STField<int>(this,0x239)) * 4));
    if (piVar1 == (int *)(uint)DAT_0080874d) {
      /* ST_CALLSITE[004CCD16]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      uVar2 = LookupRecordByte(recordIndex);
      uVar2 = (int)(byte)uVar2;
      if (uVar2 == 1) {
        iVar4 = *(int *)this;
        uVar8 = 0x74;
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
LAB_004ccd43:
        /* ST_CALLSITE[004CCD47]: CALL dword ptr [EAX + 0x90] */
        (**(code **)(iVar4 + 0x90))(6,uVar8);
      }
      else if (uVar2 == 2) {
        /* ST_CALLSITE[004CCD37]: CALL dword ptr [EDX + 0x90] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(*(int *)this + 0x90))(6,0x75);
      }
      else if (uVar2 == 3) {
        iVar4 = *(int *)this;
        uVar8 = 0x76;
        goto LAB_004ccd43;
      }
    }
    if (g_aiBossClass_008117BC != nullptr) {
      pSVar6 = &local_28;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        pSVar6->unknown_00 = 0;
        pSVar6 = (STMessage *)&pSVar6->unknown_04;
      }
      param_1_after_write = local_294;
      local_28.id = 0x5de9;
      local_28.arg0.words.low = (word)piVar1;
      iVar4 = 0;
      do {
        /* ST_CALLSITE[004CCD86]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
        local_EAX_374 = LookupRecordByte(STField<char>(this,0x24));
        local_EAX_374 = (int)(byte)local_EAX_374;
        if ((*(char *)(*(int *)(&DAT_007bfc00 + local_EAX_374 * 4) + iVar4) == '\0') &&
           (*param_1_after_write == 0)) {
          iVar2 = thunk_FUN_004e60d0((int)piVar1,iVar4);
          iVar2 = thunk_FUN_004e7f20((int)piVar1,iVar4,iVar2 + 1);
          if (iVar2 != 0) {
            local_28.arg1.words.low = (word)iVar4;
            uVar8 = thunk_FUN_004e60d0((int)piVar1,iVar4);
            local_28.arg1.words.high = (short)uVar8 + 1;
            /* ST_CALLSITE[004CCDE7]: CALL dword ptr [EDX] */
            g_aiBossClass_008117BC->GetMessage(&local_28);
          }
        }
        iVar4 = iVar4 + 1;
        param_1_after_write = param_1_after_write + 1;
      } while (iVar4 < 0x9b);
    }
  }
  STField<int *>(this,0x24) = piVar1;
  STField<int *>(this,0x5c0) = param_2;
  /* ST_CALLSITE[004CCE10]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  local_EAX_512 = LookupRecordByte(recordIndex);
  local_EAX_512 = (int)(byte)local_EAX_512;
  STField<int>(this,0x239) = local_EAX_512 + -1;
  thunk_FUN_004b9920(this);
  iVar4 = 0;
  /* ST_CALLSITE[004CCE2D]: CALL 0x00404bc9; direct=00404BC9 TLOEmbryoTy::sub_00419C70 */
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  TLOEmbryoTy::sub_00419C70(this,extraout_EDX,0);
  thunk_FUN_0041f630(this);
  if ((*(int *)(&DAT_00792778 + STField<int>(this,0x235) * 4) == 0) ||
     (iVar2 = thunk_FUN_004e81b0(STField<int>(this,0x24),STField<int>(this,0x235),0),
     iVar2 == 0)) {
    puVar3 = (undefined *)0x5;
  }
  else {
    puVar3 = (undefined *)
             thunk_FUN_004e81b0(STField<int>(this,0x24),STField<int>(this,0x235),0);
  }
  /* ST_CALLSITE[004CCE75]: CALL 0x004023a1; direct=004023A1 TLOEmbryoTy::sub_0041C3F0 */
  TLOEmbryoTy::sub_0041C3F0(this,puVar3);
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  uVar8 = extraout_EDX_00;
  if (STField<int>(this,0x5ac) == 0x34) {
    thunk_FUN_004dd880(this);
    /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
    uVar8 = extraout_EDX_01;
  }
  if (STField<int>(this,0x24) == STField<int>(this,0x23d)) {
LAB_004ccedc:
    if (STField<int>(this,0x5ac) == 0x50) {
      thunk_FUN_004b7080(STReplaceLowByte((uint32_t)(uVar8), (uint8_t)(STField<undefined1>(this,0x24))),0x28);
    }
    if ((STField<int>(this,0x5ac) == 0x6f) || (STField<int>(this,0x5ac) == 0x73)) {
      thunk_FUN_004ecc70(this);
    }
    if ((STField<int>(this,0x5ac) == 0x36) || (STField<int>(this,0x5ac) == 0x5d)) {
      iVar2 = thunk_FUN_004e60d0(STField<int>(this,0x24),
                                 *(int *)(&DAT_00798fb0 + STField<int>(this,0x239) * 4));
      iVar2 = *(int *)(&DAT_00798f98 + (iVar2 + STField<int>(this,0x239) * 2) * 4);
      STField<int>(this,0x4d0) = iVar2;
      thunk_FUN_0041ce40(this,iVar2);
      STField<undefined4>(this,0x4dc) = 1;
    }
    if ((STField<int>(this,0x5ac) == 0x3d) || (STField<int>(this,0x5ac) == 0x5d)) {
      thunk_FUN_004e4f30(this);
    }
  }
  else {
    /* ST_CALLSITE[004CCE9E]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
    local_EAX_654 = LookupRecordByte((char)STField<int>(this,0x23d));
    iVar2 = STField<int>(this,0x235);
    /* ST_CALLSITE[004CCEC3]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
    local_EAX_691 = LookupRecordByte(STField<char>(this,0x24));
    local_EAX_691 = (int)(byte)local_EAX_691;
    /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
    uVar8 = extraout_EDX_02;
    if ((&DAT_007e1984)[local_EAX_691 + (iVar2 * 3 + (uint)(byte)local_EAX_654) * 3] != '\0')
    goto LAB_004ccedc;
    STField<undefined4>(this,0x261) = 0;
    STField<undefined4>(this,0x2e1) = 0;
    if (STField<int>(this,0x5ac) == 0x3c) {
      thunk_FUN_004db0a0(local_8);
    }
  }
  if (STField<int>(this,0x408) != 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = nullptr;
    if (STField<int>(this,0x24) != STField<int>(this,0x23d)) {
      /* ST_CALLSITE[004CCFC4]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_948 = LookupRecordByte((char)STField<int>(this,0x23d));
      iVar2 = STField<int>(this,0x235);
      /* ST_CALLSITE[004CCFEB]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      uVar5 = LookupRecordByte(STField<char>(this,0x24));
      uVar5 = (int)(byte)uVar5;
      if ((&DAT_007e1984)[uVar5 + ((uint)(byte)local_EAX_948 + iVar2 * 3) * 3] == '\0') {
        thunk_FUN_004c2d40(this);
        goto LAB_004cd038;
      }
    }
    iVar2 = STPlaySystemC::sub_006E62D0
                      (g_playSystem_00802A38,STField<AnonShape_005EFAE0_B406B78B *>(this,0x40c),
                       (int *)&param_2);
    if ((iVar2 == 0) && (param_2 != nullptr)) {
      thunk_FUN_0060bc80(param_2,STField<undefined4>(this,0x24),STField<ushort>(this,0x32));
    }
  }
LAB_004cd038:
  if (((STField<int>(this,0x5ac) == 0x6a) &&
      (STField<uint>(this,0x4d4) <= g_playSystem_00802A38->field_00E4)) &&
     (iVar2 = STPlaySystemC::sub_006E62D0
                        (g_playSystem_00802A38,STField<AnonShape_005EFAE0_B406B78B *>(this,0x4d0),
                         (int *)&param_2), iVar2 == 0)) {
    thunk_FUN_005822b0(param_2,STField<undefined4>(this,0x24),STField<ushort>(this,0x32));
  }
  if ((STField<int>(this,0x5ac) == 0x41) && (0 < STField<int>(this,0x4e4))) {
    puVar7 = (undefined4 *)((int)this + 0x4d0);
    do {
      if (((AnonShape_005EFAE0_B406B78B *)*puVar7 != nullptr) &&
         (iVar2 = STPlaySystemC::sub_006E62D0
                            (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)*puVar7,
                             (int *)&param_2), iVar2 == 0)) {
        thunk_FUN_00590130(param_2,STField<undefined4>(this,0x24));
      }
      iVar4 = iVar4 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar4 < STField<int>(this,0x4e4));
  }
  if ((STField<int>(this,0x5ac) == 0x69) &&
     (iVar4 = STPlaySystemC::sub_006E62D0
                        (g_playSystem_00802A38,STField<AnonShape_005EFAE0_B406B78B *>(this,0x4ec),
                         (int *)&param_2), iVar4 == 0)) {
    thunk_FUN_00618b40(param_2,STField<undefined4>(this,0x24),STField<undefined2>(this,0x32));
  }
  if (((STField<int>(this,0x5ac) == 0x70) &&
      (STField<AnonShape_005EFAE0_B406B78B *>(this,0x4f0) != nullptr))
     && (iVar4 = STPlaySystemC::sub_006E62D0
                           (g_playSystem_00802A38,
                            STField<AnonShape_005EFAE0_B406B78B *>(this,0x4f0),(int *)&param_2),
        iVar4 == 0)) {
    thunk_FUN_0058cf90(param_2,STField<undefined4>(this,0x24),STField<undefined2>(this,0x32));
  }
  if (STField<int>(this,0x24) != STField<int>(this,0x23d)) {
    /* ST_CALLSITE[004CD152]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
    local_EAX_1346 = LookupRecordByte((char)STField<int>(this,0x23d));
    iVar4 = STField<int>(this,0x235);
    /* ST_CALLSITE[004CD179]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
    local_EAX_1385 = LookupRecordByte(STField<char>(this,0x24));
    local_EAX_1385 = (int)(byte)local_EAX_1385;
    if ((&DAT_007e1984)[local_EAX_1385 + ((uint)(byte)local_EAX_1346 + iVar4 * 3) * 3] == '\0')
    goto LAB_004cd1d7;
  }
  iVar4 = STField<int>(this,0x5ac);
  if ((((iVar4 != 0x4d) || (STField<int>(this,0x4d0) == 2)) &&
      ((iVar4 != 0x4c || (STField<int>(this,0x4d0) == 2)))) &&
     ((iVar4 != 0x43 || (STField<int>(this,0x4d0) == 2)))) {
    /* ST_CALLSITE[004CD1C4]: CALL dword ptr [EDX + 0x2c] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar4 = (**(code **)(*(int *)this + 0x2c))();
    thunk_FUN_004b76d0(STReplaceLowByte((uint32_t)(iVar4), (uint8_t)(STField<undefined1>(this,0x24))),iVar4);
  }
LAB_004cd1d7:
  /* ST_CALLSITE[004CD1D9]: CALL 0x00404e17; direct=00404E17 TLOBaseTy::ReloadLogoPlane */
  TLOBaseTy::ReloadLogoPlane(this);
  /* ST_CALLSITE[004CD1E2]: CALL 0x00402cf7; direct=00402CF7 TLOBaseTy::RotateSpr */
  TLOBaseTy::RotateSpr(this,1);
  if (STField<uint>(this,0x24) == (uint)*(byte *)(STField<int>(this,0x10) + 0x112d)) {
    thunk_FUN_004d8b70((char)STField<uint>(this,0x24));
  }
  return;
}

