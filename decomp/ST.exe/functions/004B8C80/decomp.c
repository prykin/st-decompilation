#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004b8c80(TLOBaseTy *param_1)

{
  uint *puVar1;
  TLOBaseTy_field_0245State TVar2;
  AnonPointee_TLOBaseTy_01F5 *pAVar3;
  byte bVar4;
  int iVar5;
  int local_EAX_675;
  int local_EAX_852;
  int local_EAX_1028;
  int iVar5_mgD;
  int iVar6;
  int TVar6;
  int uVar4;
  TLOBaseTyVTable *pTVar7;
  uint uVar8;
  undefined2 arg_2;
  uint local_2c [2];
  int local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  RecoveredRecordView_0060D340_06E635D9 *local_c;
  int local_8;

  TVar2 = param_1->field_0245;
  local_8 = 0;
  if (TVar2 == CASE_1) {
    if (param_1->field_05DF == 5) {
      if (param_1->field_04CC + 2 <= g_playSystem_00802A38->field_00E4) {
        param_1->field_04CC = g_playSystem_00802A38->field_00E4;
        iVar5 = param_1->field_04C8;
        iVar6 = iVar5 + 1;
        param_1->field_04C8 = iVar6;
        if (PTR_00806724->entryCount + -1 <= iVar6) {
          local_18 = param_1->field_0008;
          local_24 = param_1->field_000C->systemId;
          local_20 = 0;
          local_1c = 10;

          sub_006E60A0(param_1,local_2c);
          return 0;
        }
        /* ST_CALLSITE[004B9478]: CALL 0x0040116d; direct=0040116D STT3DSprC::sub_004ACE30 */
        STT3DSprC::sub_004ACE30
                  ((STT3DSprC *)&param_1->field_01D5,PTR_00806724[1].entries[iVar5 + -0xc],
                   (int)PTR_00806724->field_002C);
        return 0;
      }
    }
    else {
      puVar1 = &param_1->field_01D5;

      iVar5 = thunk_FUN_004ac910(puVar1,'\x04');
      if ((*(int *)&param_1->field_01F5->field_0xa4 <= iVar5) &&

         (iVar5 = thunk_FUN_004ac910(puVar1,'\x05'),
         *(int *)&param_1->field_01F5->field_0xc8 <= iVar5)) {
        local_18 = param_1->field_0008;
        local_24 = param_1->field_000C->systemId;
        local_20 = 0;
        local_1c = 10;

        sub_006E60A0(param_1,local_2c);
        return 0;
      }
      /* ST_CALLSITE[004B9520]: CALL dword ptr [EAX + 0xd8] */
      param_1->vfunc_D8();

      iVar5 = thunk_FUN_004ac910(puVar1,'\x04');
      if (iVar5 == *(int *)(&DAT_007cdf52 + *(int *)(&DAT_0079125c + param_1->field_0235 * 4) * 0x32
                           )) {
        /* ST_CALLSITE[004B9552]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
        STT3DSprC::StopShow((STT3DSprC *)puVar1,0xe);
        /* ST_CALLSITE[004B955B]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
        STT3DSprC::StopShow((STT3DSprC *)puVar1,0xd);
        /* ST_CALLSITE[004B9564]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
        STT3DSprC::StopShow((STT3DSprC *)puVar1,0xc);
        /* ST_CALLSITE[004B956D]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
        STT3DSprC::StopShow((STT3DSprC *)puVar1,9);
        /* ST_CALLSITE[004B9576]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
        STT3DSprC::StopShow((STT3DSprC *)puVar1,8);
        /* ST_CALLSITE[004B957F]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
        STT3DSprC::StopShow((STT3DSprC *)puVar1,7);
        /* ST_CALLSITE[004B9588]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
        STT3DSprC::StopShow((STT3DSprC *)puVar1,0x10);
        if (*(int *)(&DAT_00791a10 + param_1->field_0235 * 4) != 0) {
          /* ST_CALLSITE[004B95A0]: CALL 0x00403616; direct=00403616 TLOBaseTy::sub_004CBF70 */
          TLOBaseTy::sub_004CBF70(param_1);
        }
        uVar8 = (uint)(param_1->field_024D == 4);
        /* ST_CALLSITE[004B95BD]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
        uVar4 = LookupRecordByte(*(char *)&param_1->field_0024);
        uVar4 = (int)(byte)uVar4;
        thunk_FUN_0062b830((int)param_1->field_0041,(int)param_1->field_0043,
                           (int)param_1->field_0045,param_1->field_05AC,(int *)param_1,0xffffffff,
                           0xffffffff,uVar4,uVar8);
        return 0;
      }
      iVar5 = *(int *)(&DAT_0079125c + param_1->field_0235 * 4);

      iVar6 = thunk_FUN_004ac910(puVar1,'\x04');
      if (iVar6 == *(int *)(&DAT_007cdf5a + iVar5 * 0x32)) {
        /* ST_CALLSITE[004B962C]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
        iVar5 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)puVar1,5,PTR_00806764,"expl_bbt0" + iVar5 * 0x32,
                           CASE_1D);
        if (iVar5 != 0) {
          return 0xffff;
        }
        /* ST_CALLSITE[004B9652]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
        STT3DSprC::StartShow((STT3DSprC *)puVar1,5,g_playSystem_00802A38->field_00E4);
      }
    }
    return 0;
  }
  if (TVar2 == CASE_5) {
    if (((param_1->field_0299 != 0) &&

        (iVar5 = thunk_FUN_004ac910(&param_1->field_01D5,'\x0e'),
        param_1->field_01F5->field_0208 + *(int *)&param_1->field_0x2a1 <= iVar5)) &&
       (*(int *)&param_1->field_0x29d == 0)) {
      /* ST_CALLSITE[004B917B]: CALL 0x00403efe; direct=00403EFE TLOBaseTy::sub_004C4550 */
      TLOBaseTy::sub_004C4550(param_1,nullptr);
    }
  }
  else if (TVar2 == CASE_6) {
    if (param_1->field_04BC != 4) {
      /* ST_CALLSITE[004B8FBE]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      bVar4 = LookupRecordByte((char)param_1->field_023D);
      if (bVar4 == 3) {
        /* ST_CALLSITE[004B8FD4]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
        local_EAX_852 = LookupRecordByte((char)param_1->field_023D);
        if (g_playSystem_00802A38->field_00E4 <
            *(int *)(&DAT_007e3dc0 + ((uint)(byte)local_EAX_852 + param_1->field_0235 * 3) * 4) / 3
            + param_1->field_04B8) goto cf_common_exit_004B9130;
      }
      else {

        iVar5 = thunk_FUN_004ac910(&param_1->field_01D5,'\x05');
        if (iVar5 != *(int *)&param_1->field_01F5->field_0xc8) goto cf_common_exit_004B9130;
        iVar5 = param_1->field_04BC;
        if (iVar5 == 1) {
          param_1->field_04BC = 2;
          /* ST_CALLSITE[004B9056]: CALL 0x004022a7; direct=004022A7 TLOBaseTy::LoadImages */
          TLOBaseTy::LoadImages(param_1);
          /* ST_CALLSITE[004B905F]: CALL dword ptr [EAX + 0xd8] */
          param_1->vfunc_D8();
          return 0;
        }
        if (iVar5 == 2) {
          /* ST_CALLSITE[004B9084]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
          local_EAX_1028 = LookupRecordByte((char)param_1->field_023D);
          if (*(int *)(&DAT_007e3dc0 + ((uint)(byte)local_EAX_1028 + param_1->field_0235 * 3) * 4) /
              3 + param_1->field_04B8 <= g_playSystem_00802A38->field_00E4) {
            /* ST_CALLSITE[004B90D2]: CALL dword ptr [EDX + 0x90] */
            param_1->vfunc_90(3,0x361);
            param_1->field_04BC = 3;
            /* ST_CALLSITE[004B90E4]: CALL 0x004022a7; direct=004022A7 TLOBaseTy::LoadImages */
            TLOBaseTy::LoadImages(param_1);
            /* ST_CALLSITE[004B90F4]: CALL dword ptr [EAX + 0x90] */
            param_1->vfunc_90(3,0x361);
            /* ST_CALLSITE[004B90FE]: CALL dword ptr [EAX + 0xd8] */
            param_1->vfunc_D8();
            return 0;
          }
          goto cf_common_exit_004B9130;
        }
        if (iVar5 != 3) goto cf_common_exit_004B9130;
      }
      param_1->field_04BC = 4;
      /* ST_CALLSITE[004B911A]: CALL 0x004022a7; direct=004022A7 TLOBaseTy::LoadImages */
      TLOBaseTy::LoadImages(param_1);
      /* ST_CALLSITE[004B912A]: CALL dword ptr [EDX + 0x90] */
      param_1->vfunc_90(3,0x362);
cf_common_exit_004B9130:
      /* ST_CALLSITE[004B9134]: CALL dword ptr [EAX + 0xd8] */
      param_1->vfunc_D8();
      return 0;
    }
    puVar1 = &param_1->field_01D5;

    iVar5 = thunk_FUN_004ac910(puVar1,'\x04');
    if (iVar5 == 0x15) {
      /* ST_CALLSITE[004B8CD8]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
      STT3DSprC::StopShow((STT3DSprC *)puVar1,0xe);
      /* ST_CALLSITE[004B8CE1]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
      STT3DSprC::StopShow((STT3DSprC *)puVar1,0xd);
      /* ST_CALLSITE[004B8CEA]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
      STT3DSprC::StopShow((STT3DSprC *)puVar1,0xc);
      /* ST_CALLSITE[004B8CF3]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
      STT3DSprC::StopShow((STT3DSprC *)puVar1,9);
      /* ST_CALLSITE[004B8CFC]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
      STT3DSprC::StopShow((STT3DSprC *)puVar1,8);
      /* ST_CALLSITE[004B8D05]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
      STT3DSprC::StopShow((STT3DSprC *)puVar1,7);
      /* ST_CALLSITE[004B8D0E]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
      STT3DSprC::StopShow((STT3DSprC *)puVar1,0x10);
      if (*(int *)(&DAT_00791a10 + param_1->field_0235 * 4) != 0) {
        /* ST_CALLSITE[004B8D26]: CALL 0x00403616; direct=00403616 TLOBaseTy::sub_004CBF70 */
        TLOBaseTy::sub_004CBF70(param_1);
      }
      /* ST_CALLSITE[004B8D2D]: CALL 0x00405768; direct=00405768 TLOBaseTy::sub_004CC900 */
      TLOBaseTy::sub_004CC900(param_1);
      /* ST_CALLSITE[004B8D36]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
      STT3DSprC::StopShow((STT3DSprC *)puVar1,5);
      /* ST_CALLSITE[004B8D3F]: CALL dword ptr [EDX + 0x8] */
      iVar5 = param_1->vfunc_08();
      if (iVar5 != 0) {
        /* ST_CALLSITE[004B8D50]: CALL dword ptr [EAX + 0xe8] */
        param_1->SetActivity(0);
        /* ST_CALLSITE[004B8D5A]: CALL dword ptr [EAX + 0xd8] */
        param_1->vfunc_D8();
        return 0;
      }
      goto cf_common_exit_004B9130;
    }

    iVar5 = thunk_FUN_004ac910(puVar1,'\x04');
    if (iVar5 != *(int *)&param_1->field_01F5->field_0xa4) goto cf_common_exit_004B9130;
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

      thunk_FUN_004e4380((int)param_1->field_0024,
                         (param_1->field_05D7 *
                          *(int *)(&DAT_007e3160 +
                                  (param_1->field_0235 * 3 + param_1->field_0239) * 4) * 0x3c) /
                         10000);
    }

    thunk_FUN_004d78e0(*(char *)&param_1->field_0024);
    if (param_1->field_0024 == (byte *)(uint)(byte)param_1->field_0010->field_112D) {
      /* ST_CALLSITE[004B8EEB]: CALL 0x00404b8d; direct=00404B8D STAllPlayersC::sub_004D8B70 */
      STAllPlayersC::sub_004D8B70(g_allPlayers_007FA174,(char)param_1->field_0024);
    }
    if (param_1->field_0024 != (byte *)(uint)(byte)param_1->field_0010->field_112D)
    goto cf_common_exit_004B8F5A;
    thunk_FUN_0052af50(0,(float)param_1->field_01F9,(float)param_1->field_01FD);
    /* ST_CALLSITE[004B8F23]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
    local_EAX_675 = LookupRecordByte(*(char *)&param_1->field_0024);
    local_EAX_675 = (int)(byte)local_EAX_675;
    if (local_EAX_675 == 1) {
      pTVar7 = param_1->vtable;
      arg_2 = 0x68;
    }
    else {
      if (local_EAX_675 == 2) {
        /* ST_CALLSITE[004B8F44]: CALL dword ptr [EAX + 0x90] */
        param_1->vfunc_90(6,0x69);
        goto cf_common_exit_004B8F5A;
      }
      if (local_EAX_675 != 3) goto cf_common_exit_004B8F5A;
      pTVar7 = param_1->vtable;
      arg_2 = 0x6a;
    }
    /* ST_CALLSITE[004B8F54]: CALL dword ptr [EDX + 0x90] */
    (*pTVar7->vfunc_90)(param_1,6,arg_2);
cf_common_exit_004B8F5A:
    param_1->field_0241 = 0;
    param_1->field_05D7 = 0;
    param_1->field_05DF = 1;
    /* ST_CALLSITE[004B8F75]: CALL 0x004010aa; direct=004010AA TLOBaseTy::SetState */
    TLOBaseTy::SetState(param_1,1,0);
    local_18 = param_1->field_0008;
    local_24 = param_1->field_000C->systemId;
    local_20 = 0;
    local_1c = 10;

    sub_006E60A0(param_1,local_2c);
    /* ST_CALLSITE[004B8FA2]: CALL dword ptr [EAX + 0xd8] */
    param_1->vfunc_D8();
    return 0;
  }
  if (((param_1->field_0255 == 0) || (param_1->field_0245 != CASE_0)) || (param_1->field_0249 != 2))
  {
    if (param_1->field_0245 != CASE_4) {

      iVar5 = thunk_FUN_004ac910(&param_1->field_01D5,'\x0e');
      if (((iVar5 == param_1->field_01F5->field_020C) &&
          (local_8 = 1, param_1->field_05AC == CASE_65)) &&
         ((param_1->field_0408 != 0 &&
          ((param_1->field_040C != nullptr &&

           (iVar5_mgD = STPlaySystemC::sub_006E62D0
                                  (g_playSystem_00802A38,param_1->field_040C,(int *)&local_c),
           iVar5_mgD == 0)))))) {

        thunk_FUN_0060d340(local_c);
        /* ST_CALLSITE[004B92CD]: CALL dword ptr [EAX + 0x90] */
        param_1->vfunc_90(3,0x3d9);
      }
      if (*(int *)(&DAT_00791a10 + param_1->field_0235 * 4) != 0) {

        local_8 = thunk_FUN_004cc130((RecoveredRecordView_004CC130_E53952B7 *)param_1);
      }
      goto cf_common_join_004B92EE;
    }
    if (param_1->field_03DC != 0) goto cf_common_join_004B92EE;
  }
  else {
    if (g_playSystem_00802A38->field_00E4 <
        *(int *)(&DAT_00792040 + param_1->field_0235 * 4) + param_1->field_0285)
    goto cf_common_join_004B92EE;
    param_1->field_0285 = g_playSystem_00802A38->field_00E4;
    iVar5 = param_1->field_0259 / 0xf;
    if (*(int *)(&DAT_007be8c8 + iVar5 * 0x60) != 0) {
      iVar5 = (((*(int *)(&DAT_007be8c8 + iVar5 * 0x60) < 1) - 1 & 2) - 1) + iVar5;
      if (iVar5 < 0x18) {
        if (iVar5 < 0) {
          iVar5 = 0x17;
        }
        /* ST_CALLSITE[004B9241]: CALL 0x00403ad0; direct=00403AD0 TLOBaseTy::sub_004B98E0 */
        TLOBaseTy::sub_004B98E0(param_1,iVar5 * 0xf);
      }
      else {
        /* ST_CALLSITE[004B9225]: CALL 0x00403ad0; direct=00403AD0 TLOBaseTy::sub_004B98E0 */
        TLOBaseTy::sub_004B98E0(param_1,0);
      }
      goto cf_common_join_004B92EE;
    }
  }
  local_8 = 1;
cf_common_join_004B92EE:
  puVar1 = &param_1->field_01D5;
  /* ST_CALLSITE[004B92F8]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
  iVar5 = STT3DSprC::sub_004ACD30((STT3DSprC *)puVar1,'\x0e');
  /* ST_CALLSITE[004B9303]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
  iVar6 = STT3DSprC::sub_004ACD30((STT3DSprC *)puVar1,'\r');
  /* ST_CALLSITE[004B9310]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
  if (((iVar6 < iVar5) && (iVar5 = STT3DSprC::sub_004ACD30((STT3DSprC *)puVar1,'\r'), 1 < iVar5)) &&

     (iVar5 = thunk_FUN_004cba10(), iVar5 == 2)) {
    pAVar3 = param_1->field_01F5;
    iVar5 = pAVar3->field_0208;
    if (iVar5 < (int)pAVar3->field_020C) {
      iVar5 = pAVar3->field_0210 - iVar5;
    }
    else {
      iVar5 = iVar5 - pAVar3->field_0210;
    }
    local_c = (RecoveredRecordView_0060D340_06E635D9 *)
              /* ST_CALLSITE[004B9354]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
              STT3DSprC::sub_004ACD30((STT3DSprC *)puVar1,'\x0e');
    /* ST_CALLSITE[004B9362]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
    iVar6 = STT3DSprC::sub_004ACD30((STT3DSprC *)puVar1,'\r');
    if (((int)local_c + (-1 - iVar6) <= iVar5) && ((param_1->field_01F1 & 0x2000U) == 0)) {
      /* ST_CALLSITE[004B9382]: CALL 0x0040384b; direct=0040384B TLOBaseTy::sub_004CA7B0 */
      TLOBaseTy::sub_004CA7B0(param_1,0xd,0);
    }
  }
  if ((local_8 != 0) &&
     /* ST_CALLSITE[004B9390]: CALL 0x00404f20; direct=00404F20 thunk_FUN_004b8c00; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/TLOBaseTy; source view only; no Ghidra override */
     (TVar6 = thunk_FUN_004b8c00((RecoveredRecordView_004B8C00_A7F5FC12 *)param_1),
     TVar6 != param_1->field_0245)) {
    /* ST_CALLSITE[004B93A2]: CALL 0x004010aa; direct=004010AA TLOBaseTy::SetState */
    TLOBaseTy::SetState(param_1,TVar6,1);
  }
  if ((param_1->field_05DF != 0) && (param_1->field_04CC + 2 <= g_playSystem_00802A38->field_00E4))
  {
    param_1->field_04CC = g_playSystem_00802A38->field_00E4;
    iVar5 = param_1->field_04C8;
    iVar6 = iVar5 + -1;
    param_1->field_04C8 = iVar6;
    if (iVar6 == 0) {
      iVar6 = 0;
      param_1->field_05DF = 0;
      uVar8 = 0;
    }
    else {
      iVar6 = (int)PTR_00806724->field_002C;
      uVar8 = PTR_00806724->entries[iVar5 + -1];
    }
    /* ST_CALLSITE[004B9405]: CALL 0x0040116d; direct=0040116D STT3DSprC::sub_004ACE30 */
    STT3DSprC::sub_004ACE30((STT3DSprC *)&param_1->field_01D5,uVar8,iVar6);
  }
  /* ST_CALLSITE[004B940E]: CALL dword ptr [EDX + 0xd8] */
  param_1->vfunc_D8();
  return 0;
}

