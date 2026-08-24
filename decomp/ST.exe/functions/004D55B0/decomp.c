#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_embryo.cpp
   TLOEmbryoTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00404E3F|004D55B0; family_names=TLOEmbryoTy::GetMessage; ret4=13;
   direct_offsets={10:1,14:6,18:1,1c:2} */

int __thiscall TLOEmbryoTy::GetMessage(TLOEmbryoTy *this,STMessage *message)

{
  STMessageId SVar1;
  dword dVar2;
  bool bVar4;
  TLOEmbryoTy *this_00;
  int local_EAX_39;
  int iVar6;
  uint uVar7;
  int uVar8;
  uint uVar9;
  int iVar5;
  int local_EAX_862;
  int iVar12;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  TLOEmbryoTyVTable_at_1D5 **ppTVar14;
  int iVar15;
  STT3DSprC **ppSVar16;
  char *pcVar17;
  char cVar18;
  undefined4 auStack_1c0 [17];
  undefined4 auStack_17c [17];
  int aiStack_138 [17];
  int aiStack_f4 [17];
  CHAR local_b0 [64];
  InternalExceptionFrame local_70;
  undefined4 local_2c [2];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  TLOEmbryoTy *local_c;
  int *local_8;

  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  local_c = this;
  local_EAX_39 = Library::MSVCRT::__setjmp3(local_70.jumpBuffer,0);
  this_00 = local_c;
  if (local_EAX_39 != 0) {
    g_currentExceptionFrame = local_70.previous;
    iVar12 = ReportDebugMessage("E:\\__titans\\Artem\\TLO_embryo.cpp",0x4e5,0,local_EAX_39,
                                "%s","TLOEmbryoTy::GetMessage error");
    if (iVar12 == 0) {
      RaiseInternalException(local_EAX_39,0,"E:\\__titans\\Artem\\TLO_embryo.cpp",0x4e6);
      return local_EAX_39;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  /* ST_CALLSITE[004D55F2]: CALL 0x00404f07; direct=00404F07 STSprGameObjC::GetMessage */
  STSprGameObjC::GetMessage((STSprGameObjC *)local_c,message);
  SVar1 = message->id;
  if (MESS_SHARED_010F < SVar1) {
    if (SVar1 < MESS_SHARED_0129) {
      if (SVar1 == MESS_HITKILL) {
        dVar2 = (message->arg0).u32;
        if (this_00->field_02A0 != 0) {
          g_currentExceptionFrame = local_70.previous;
          return 0;
        }
        local_18 = this_00->field_0008;
        this_00->field_02A0 = 1;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        local_24 = *(undefined4 *)(this_00->field_000C + 0x14);
        local_20 = 0;
        local_1c = 10;
        sub_006E60A0(this_00,local_2c);
        this_00->field_0348 = g_playSystem_00802A38->field_00E4;
        this_00->field_034C = *(undefined4 *)(dVar2 + 8);
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      if (SVar1 == MESS_TORPHIT) {
        if (this_00->field_02EC == 3) {
          g_currentExceptionFrame = local_70.previous;
          return 0;
        }
        if (this_00->field_02DC != 0) {
          g_currentExceptionFrame = local_70.previous;
          return 0;
        }
        local_8 = (message->arg0).ptr;
        iVar13 = (this_00->field_0368 * 3 + this_00->field_036C) * 4;
        iVar11 = *local_8;
        if (this_00->field_0338 != 0) {
          iVar11 = (this_00->field_033C * iVar11) / 100;
        }
        iVar11 = (this_00->field_02A8 * *(int *)(&DAT_007e417c + iVar13)) / 100 - iVar11;
        if (iVar11 < 1) {
          if (this_00->field_02A0 == 0) {
            /* ST_CALLSITE[004D5B9B]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
            STT3DSprC::StopShow(this_00->field_035C,0xe);
            thunk_FUN_004ad430(this_00->field_035C);
            ppTVar14 = &this_00->vtable_at_1d5;
            if (this_00->field_002C == 1) {
              pcVar17 = "expl_bt1";
            }
            else {
              pcVar17 = "expl_bt0";
            }
            /* ST_CALLSITE[004D5BD9]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
            iVar11 = STT3DSprC::LoadSequence((STT3DSprC *)ppTVar14,6,PTR_00806774,pcVar17,CASE_1D);
            if (iVar11 != 0) {
              return 0xffff;
            }
            thunk_FUN_004ac700(ppTVar14,'\x06');
            /* ST_CALLSITE[004D5C09]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
            STT3DSprC::StartShow((STT3DSprC *)ppTVar14,6,g_playSystem_00802A38->field_00E4);
          }
          this_00->field_02A8 = 0;
          this_00->field_02A0 = 1;
        }
        else {
          iVar11 = (iVar11 * 100) / *(int *)(&DAT_007e417c + iVar13);
          this_00->field_02A8 = iVar11;
          this_00->field_02CC = (iVar11 * *(int *)(&DAT_008545ac + iVar13)) / 100;
          this_00->field_02D0 = (*(int *)(&DAT_007e1c50 + iVar13) * this_00->field_02A8) / 100;
          this_00->field_02D4 = (*(int *)(&DAT_007e24fc + iVar13) * this_00->field_02A8) / 100;
          iVar11 = (*(int *)(&DAT_007e3160 + iVar13) * this_00->field_02A8) / 100;
          this_00->field_02D8 = iVar11;
          iVar6 = *(int *)(&DAT_008545ac + iVar13) - this_00->field_02CC;
          iVar10 = *(int *)(&DAT_007e1c50 + iVar13) - this_00->field_02D0;
          iVar15 = *(int *)(&DAT_007e24fc + iVar13) - this_00->field_02D4;
          iVar11 = *(int *)(&DAT_007e3160 + iVar13) - iVar11;
          if (iVar6 < 0) {
            iVar6 = 0;
          }
          if (iVar10 < 0) {
            iVar10 = 0;
          }
          if (iVar15 < 0) {
            iVar15 = 0;
          }
          if (iVar11 < 0) {
            iVar11 = 0;
          }
          thunk_FUN_004d76e0(*(char *)&this_00->field_0024,0,(int *)this_00->field_0018,iVar6,iVar10
                             ,iVar15,iVar11);
        }
        this_00->field_0348 = g_playSystem_00802A38->field_00E4;
        this_00->field_034C = local_8[2];
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      if (SVar1 != MESS_SHARED_0122) {
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      piVar12 = (message->arg0).ptr;
      if (*piVar12 != this_00->field_0024) {
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      this_00->field_0338 = 1;
      this_00->field_033C = piVar12[2];
      this_00->field_0340 = g_playSystem_00802A38->field_00E4;
      this_00->field_0344 = piVar12[1];
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
    if (SVar1 != MESS_TLOEMBRYOTY_4401) {
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    cVar18 = *(char *)((message->arg0).u32 + 0xe);
    if (cVar18 != '\t') {
      if (cVar18 != '\x17') {
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      pcVar17 = *(char **)((message->arg0).u32 + 0x17);
      if (this_00->field_02A4 != 0) {
        if (*pcVar17 != '\x1c') {
          g_currentExceptionFrame = local_70.previous;
          return 0;
        }
        this_00->field_02A4 = 0;
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      if (*pcVar17 != '\x1b') {
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      if (((this_00->field_02EC == 2) && (0 < this_00->field_02A8)) && (this_00->field_02A8 < 0x65))
      {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (!bVar4) {
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      this_00->field_02A4 = 1;
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
    if (((this_00->field_02EC == 2) && (0 < this_00->field_02A8)) && (this_00->field_02A8 < 0x65)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (!bVar4) {
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
    iVar11 = 3;
    this_00->field_02EC = 3;
    this_00->field_02E8 = 1;
    if (this_00->field_0370 == 0) {
      /* ST_CALLSITE[004D5EBE]: CALL dword ptr [EDX + 0x90] */
      this_00->vfunc_90(3,0x361);
    }
    iVar13 = this_00->field_0259;
    if (((iVar13 != 0x6c) || (this_00->field_0251 != 3)) && ((iVar13 < 0x54 || (0x5a < iVar13)))) {
      ppTVar14 = &this_00->vtable_at_1d5;
      thunk_FUN_004ac6b0(ppTVar14,*(char *)&this_00->field_02F0);
      iVar13 = this_00->field_02EC + this_00->field_0241 * 4;
      thunk_FUN_004abce0(ppTVar14,*(byte *)&this_00->field_02F0,
                         *(int *)(this_00->field_0364 + iVar13 * 8),
                         *(int *)(this_00->field_0364 + 4 + iVar13 * 8),'\0');
      /* ST_CALLSITE[004D5F4F]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
      STT3DSprC::SetCurFase
                ((STT3DSprC *)ppTVar14,*(char *)&this_00->field_02F0,
                 *(uint *)(this_00->field_0364 + (this_00->field_02EC + this_00->field_0241 * 4) * 8
                          ));
      /* ST_CALLSITE[004D5F6A]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
      STT3DSprC::StartShow
                ((STT3DSprC *)ppTVar14,*(byte *)&this_00->field_02F0,
                 g_playSystem_00802A38->field_00E4);
      if (this_00->field_0370 == 0) goto LAB_004d600f;
      thunk_FUN_004ac6b0(ppTVar14,*(char *)&this_00->field_02F0 + -1);
      iVar13 = this_00->field_02EC + this_00->field_0241 * 4;
      thunk_FUN_004abce0(ppTVar14,*(char *)&this_00->field_02F0 - 1,
                         *(int *)(this_00->field_0364 + iVar13 * 8),
                         *(int *)(this_00->field_0364 + 4 + iVar13 * 8),'\0');
      /* ST_CALLSITE[004D5FE3]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
      STT3DSprC::SetCurFase
                ((STT3DSprC *)ppTVar14,*(char *)&this_00->field_02F0 + -1,
                 *(uint *)(this_00->field_0364 + (this_00->field_02EC + this_00->field_0241 * 4) * 8
                          ));
      /* ST_CALLSITE[004D6000]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
      STT3DSprC::StartShow
                ((STT3DSprC *)ppTVar14,*(char *)&this_00->field_02F0 - 1,
                 g_playSystem_00802A38->field_00E4);
    }
    if (this_00->field_0370 != 0) {
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
LAB_004d600f:
    ppSVar16 = &this_00->field_0350;
    piVar12 = (int *)&this_00->field_0x308;
    do {
      if (*piVar12 != 0) {
        *piVar12 = 0;
        thunk_FUN_004ad430(*ppSVar16);
      }
      ppSVar16 = ppSVar16 + 1;
      piVar12 = piVar12 + 4;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    g_currentExceptionFrame = local_70.previous;
    return 0;
  }
  if (SVar1 == MESS_SHARED_010F) {
    thunk_FUN_004d2fd0((int)this_00);
    g_currentExceptionFrame = local_70.previous;
    return 0;
  }
  if (SVar1 < 4) {
    if (SVar1 == MESS_SHARED_0003) {
      thunk_FUN_004d2760((TLOBaseTy *)this_00);
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
    if (SVar1 != MESS_ID_NONE) {
      if (SVar1 != MESS_ID_CREATE) {
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      /* ST_CALLSITE[004D562A]: CALL 0x00405ed9; direct=00405ED9 TLOEmbryoTy::Create */
      Create(this_00,(message->arg0).ptr);
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
    thunk_FUN_004d32c0((TLOBaseTy *)this_00);
    g_currentExceptionFrame = local_70.previous;
    return 0;
  }
  if (SVar1 != MESS_SHARED_0108) {
    g_currentExceptionFrame = local_70.previous;
    return 0;
  }
  iVar13 = 0;
  iVar11 = 0;
  do {
    piVar12 = (int *)(this_00->field_01F5 + iVar11);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    auStack_17c[iVar13] = *(undefined4 *)(this_00->field_01F5 + 0x1c + iVar11);
    aiStack_f4[iVar13] = piVar12[8];
    if (*piVar12 != 0) {
      cVar18 = (char)iVar13;
      iVar6 = thunk_FUN_004ac910(&this_00->vtable_at_1d5,cVar18);
      aiStack_138[iVar13] = iVar6;
      iVar6 = thunk_FUN_004ac910(&this_00->vtable_at_1d5,cVar18);
      uVar7 = thunk_FUN_004acdd0(&this_00->vtable_at_1d5,cVar18,iVar6);
      auStack_1c0[iVar13] = uVar7;
    }
    iVar11 = iVar11 + 0x24;
    iVar13 = iVar13 + 1;
  } while (iVar11 < 0x264);
  if (this_00->field_02EC == 0) {
    /* ST_CALLSITE[004D56F9]: CALL 0x00404061; direct=00404061 TLOEmbryoTy::sub_004D10A0 */
    sub_004D10A0(this_00,1);
    /* ST_CALLSITE[004D571A]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    STT3DSprC::StartShow
              ((STT3DSprC *)&this_00->vtable_at_1d5,*(byte *)&this_00->field_02F0,
               g_playSystem_00802A38->field_00E4);
    /* ST_CALLSITE[004D5737]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    STT3DSprC::StartShow
              ((STT3DSprC *)&this_00->vtable_at_1d5,*(char *)&this_00->field_02F0 - 1,
               g_playSystem_00802A38->field_00E4);
  }
  if (this_00->field_02DC == 0) {
    if ((this_00->field_01F1 & 0x4000) == 0) goto LAB_004d59e7;
    uVar8 = thunk_FUN_004ab050();
    uVar9 = uVar8 & 0x80000001;
    if ((int)uVar9 < 0) {
      uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
    }
    /* ST_CALLSITE[004D578B]: CALL dword ptr [0x0085bde8] */
    wsprintfA(local_b0,"%s%1i",(&PTR_s_tlo_embws1_007bf3e8)[this_00->field_036C],uVar9);
    ppTVar14 = &this_00->vtable_at_1d5;
    /* ST_CALLSITE[004D57AD]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    iVar11 = STT3DSprC::LoadSequence((STT3DSprC *)ppTVar14,0xe,PTR_0080678c,local_b0,CASE_1D);
    if (iVar11 != 0) {
      RaiseInternalException
                (iVar11,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp",
                 0x43a);
    }
    thunk_FUN_004abce0(ppTVar14,0xe,*(int *)(&DAT_0079104c + this_00->field_0368 * 4),
                       *(int *)(&DAT_0079104c + this_00->field_0368 * 4),'\0');
    /* ST_CALLSITE[004D57F9]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
    STT3DSprC::SetCurFase
              ((STT3DSprC *)ppTVar14,'\x0e',*(uint *)(&DAT_0079104c + this_00->field_0368 * 4));
    /* ST_CALLSITE[004D580F]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    STT3DSprC::StartShow((STT3DSprC *)ppTVar14,0xe,g_playSystem_00802A38->field_00E4);
    /* ST_CALLSITE[004D582E]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    iVar11 = STT3DSprC::LoadSequence
                       ((STT3DSprC *)ppTVar14,0x10,PTR_0080678c,
                        (&PTR_s_tlo_sha_ws_007bb1b4)[this_00->field_036C],CASE_1D);
    if (iVar11 != 0) {
      iVar13 = 0x441;
      goto LAB_004d5985;
    }
  }
  else {
    iVar5 = thunk_FUN_004ab050();
    ppTVar14 = &this_00->vtable_at_1d5;
    uVar9 = *(uint *)(PTR_DAT_007b5170 +
                     (iVar5 + (this_00->field_0368 * 3 + this_00->field_036C) * 4) * 8);
    thunk_FUN_004abce0(ppTVar14,0xe,uVar9,uVar9,'\0');
    /* ST_CALLSITE[004D588C]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
    STT3DSprC::SetCurFase((STT3DSprC *)ppTVar14,'\x0e',uVar9);
    /* ST_CALLSITE[004D58A2]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    STT3DSprC::StartShow((STT3DSprC *)ppTVar14,0xe,g_playSystem_00802A38->field_00E4);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (**(int **)(this_00->field_01F5 + 0x1d4) < (int)uVar9) {
      uVar9 = 0;
    }
    thunk_FUN_004abce0(ppTVar14,0xd,uVar9,uVar9,'\0');
    /* ST_CALLSITE[004D58CB]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
    STT3DSprC::SetCurFase((STT3DSprC *)ppTVar14,'\r',uVar9);
    /* ST_CALLSITE[004D58E1]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    STT3DSprC::StartShow((STT3DSprC *)ppTVar14,0xd,g_playSystem_00802A38->field_00E4);
    if (*(int *)(PTR_PTR_007bb198 + (this_00->field_0368 * 3 + this_00->field_036C) * 0xc + 8) != 0)
    {
      local_EAX_862 = thunk_FUN_004ab050();
      uVar9 = *(uint *)(PTR_DAT_007b8310 +
                       (local_EAX_862 + (this_00->field_0368 * 3 + this_00->field_036C) * 4) * 8);
      thunk_FUN_004abce0(ppTVar14,0xc,uVar9,uVar9,'\0');
      /* ST_CALLSITE[004D5941]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
      STT3DSprC::SetCurFase((STT3DSprC *)ppTVar14,'\f',uVar9);
      /* ST_CALLSITE[004D5957]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
      STT3DSprC::StartShow((STT3DSprC *)ppTVar14,0xc,g_playSystem_00802A38->field_00E4);
    }
    /* ST_CALLSITE[004D5977]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    iVar11 = STT3DSprC::LoadSequence
                       ((STT3DSprC *)ppTVar14,0x10,PTR_0080678c,
                        (&PTR_s_tlo_sha_ws_007bb1b4)[this_00->field_036C],CASE_1D);
    if (iVar11 != 0) {
      iVar13 = 0x459;
LAB_004d5985:
      RaiseInternalException
                (iVar11,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp",
                 iVar13);
    }
  }
  ppTVar14 = &this_00->vtable_at_1d5;
  thunk_FUN_004abce0(ppTVar14,0x10,*(int *)(&DAT_0079104c + this_00->field_0368 * 4),
                     *(int *)(&DAT_0079104c + this_00->field_0368 * 4),'\0');
  /* ST_CALLSITE[004D59C3]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
  STT3DSprC::SetCurFase
            ((STT3DSprC *)ppTVar14,'\x10',*(uint *)(&DAT_0079104c + this_00->field_0368 * 4));
  /* ST_CALLSITE[004D59D9]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
  STT3DSprC::StartShow((STT3DSprC *)ppTVar14,0x10,g_playSystem_00802A38->field_00E4);
  /* ST_CALLSITE[004D59E2]: CALL 0x00403afd; direct=00403AFD STT3DSprC::sub_004ACF50 */
  STT3DSprC::sub_004ACF50((STT3DSprC *)ppTVar14,'\x10');
LAB_004d59e7:
  iVar13 = 0;
  iVar11 = 0;
  do {
    *(undefined4 *)(iVar11 + 0x1c + this_00->field_01F5) = auStack_17c[iVar13];
    *(int *)(iVar11 + 0x20 + this_00->field_01F5) = aiStack_f4[iVar13];
    iVar6 = *(int *)(iVar11 + this_00->field_01F5);
    if (iVar6 != 0) {
      *(undefined4 *)(*(int *)(iVar11 + this_00->field_01F5 + 4) + aiStack_138[iVar13] * 4) =
           *(undefined4 *)(aiStack_138[iVar13] * 4 + 0x31 + iVar6);
      uVar7 = auStack_1c0[iVar13];
      iVar6 = thunk_FUN_004ac910(&this_00->vtable_at_1d5,(char)iVar13);
      thunk_FUN_004ace00(&this_00->vtable_at_1d5,(char)iVar13,iVar6,uVar7);
    }
    iVar11 = iVar11 + 0x24;
    iVar13 = iVar13 + 1;
  } while (iVar11 < 0x264);
  g_currentExceptionFrame = local_70.previous;
  return 0;
}

