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
  int uVar8;
  uint uVar7;
  int iVar5;
  int local_EAX_862;
  int iVar8;
  int iVar12;
  int iVar9;
  int *piVar10;
  int iVar11;
  TLOEmbryoTyVTable_at_1D5 **ppTVar12;
  int iVar13;
  STT3DSprC **ppSVar14;
  char *pcVar15;
  char cVar16;
  int aiStack_1c0 [17];
  undefined4 auStack_17c [17];
  int aiStack_138 [17];
  int aiStack_f4 [17];
  CHAR local_b0 [64];
  InternalExceptionFrame local_70;
  uint local_2c [2];
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
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
        this_00->field_034C = STField<undefined4>(dVar2,0x8);
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
        iVar11 = (this_00->field_0368 * 3 + (int)this_00->field_036C) * 4;
        iVar9 = *local_8;
        if (this_00->field_0338 != 0) {
          iVar9 = (this_00->field_033C * iVar9) / 100;
        }
        iVar9 = (this_00->field_02A8 * *(int *)(&DAT_007e417c + iVar11)) / 100 - iVar9;
        if (iVar9 < 1) {
          if (this_00->field_02A0 == 0) {
            /* ST_CALLSITE[004D5B9B]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
            STT3DSprC::StopShow(this_00->field_035C,0xe);
            /* ST_CALLSITE[004D5BA6]: CALL 0x00403d0f; direct=00403D0F STT3DSprC::sub_004AD430 */
            STT3DSprC::sub_004AD430(this_00->field_035C);
            ppTVar12 = &this_00->vtable_at_1d5;
            if (this_00->field_002C == 1) {
              pcVar15 = "expl_bt1";
            }
            else {
              pcVar15 = "expl_bt0";
            }
            /* ST_CALLSITE[004D5BD9]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
            iVar9 = STT3DSprC::LoadSequence((STT3DSprC *)ppTVar12,6,PTR_00806774,pcVar15,CASE_1D);
            if (iVar9 != 0) {
              return 0xffff;
            }

            thunk_FUN_004ac700(ppTVar12,'\x06');
            /* ST_CALLSITE[004D5C09]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
            STT3DSprC::StartShow((STT3DSprC *)ppTVar12,6,g_playSystem_00802A38->field_00E4);
          }
          this_00->field_02A8 = 0;
          this_00->field_02A0 = 1;
        }
        else {
          iVar9 = (iVar9 * 100) / *(int *)(&DAT_007e417c + iVar11);
          this_00->field_02A8 = iVar9;
          this_00->field_02CC = (iVar9 * *(int *)(&DAT_008545ac + iVar11)) / 100;
          this_00->field_02D0 = (*(int *)(&DAT_007e1c50 + iVar11) * this_00->field_02A8) / 100;
          this_00->field_02D4 = (*(int *)(&DAT_007e24fc + iVar11) * this_00->field_02A8) / 100;
          iVar9 = (*(int *)(&DAT_007e3160 + iVar11) * this_00->field_02A8) / 100;
          this_00->field_02D8 = iVar9;
          iVar6 = *(int *)(&DAT_008545ac + iVar11) - this_00->field_02CC;
          iVar8 = *(int *)(&DAT_007e1c50 + iVar11) - this_00->field_02D0;
          iVar13 = *(int *)(&DAT_007e24fc + iVar11) - this_00->field_02D4;
          iVar9 = *(int *)(&DAT_007e3160 + iVar11) - iVar9;
          if (iVar6 < 0) {
            iVar6 = 0;
          }
          if (iVar8 < 0) {
            iVar8 = 0;
          }
          if (iVar13 < 0) {
            iVar13 = 0;
          }
          if (iVar9 < 0) {
            iVar9 = 0;
          }
          /* ST_CALLSITE[004D5D23]: CALL 0x0040497b; direct=0040497B STAllPlayersC::sub_004D76E0 */
          STAllPlayersC::sub_004D76E0
                    (g_allPlayers_007FA174,(char)this_00->field_0024,0,
                     (int *)this_00->field_0018,iVar6,iVar8,iVar13,iVar9);
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
      piVar10 = (message->arg0).ptr;
      if (*piVar10 != this_00->field_0024) {
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      this_00->field_0338 = 1;
      this_00->field_033C = piVar10[2];
      this_00->field_0340 = g_playSystem_00802A38->field_00E4;
      this_00->field_0344 = piVar10[1];
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
    if (SVar1 != MESS_TLOEMBRYOTY_4401) {
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    cVar16 = *(char *)((message->arg0).u32 + 0xe);
    if (cVar16 != '\t') {
      if (cVar16 != '\x17') {
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      pcVar15 = *(char **)((message->arg0).u32 + 0x17);
      if (this_00->field_02A4 != 0) {
        if (*pcVar15 != '\x1c') {
          g_currentExceptionFrame = local_70.previous;
          return 0;
        }
        this_00->field_02A4 = 0;
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      if (*pcVar15 != '\x1b') {
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
    iVar9 = 3;
    this_00->field_02EC = 3;
    this_00->field_02E8 = 1;
    if (this_00->field_0370 == 0) {
      /* ST_CALLSITE[004D5EBE]: CALL dword ptr [EDX + 0x90] */
      this_00->vfunc_90(3,0x361);
    }
    iVar11 = this_00->field_0259;
    if (((iVar11 != 0x6c) || (this_00->field_0251 != 3)) && ((iVar11 < 0x54 || (0x5a < iVar11)))) {
      ppTVar12 = &this_00->vtable_at_1d5;

      thunk_FUN_004ac6b0(ppTVar12,(char)this_00->field_02F0);
      iVar11 = this_00->field_02EC + this_00->field_0241 * 4;

      thunk_FUN_004abce0(ppTVar12,(byte)this_00->field_02F0,
                         *(int *)(this_00->field_0364 + iVar11 * 8),
                         *(int *)(this_00->field_0364 + 4 + iVar11 * 8),'\0');
      /* ST_CALLSITE[004D5F4F]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
      STT3DSprC::SetCurFase
                ((STT3DSprC *)ppTVar12,(char)this_00->field_02F0,
                 *(uint *)(this_00->field_0364 + (this_00->field_02EC + this_00->field_0241 * 4) * 8
                          ));
      /* ST_CALLSITE[004D5F6A]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
      STT3DSprC::StartShow
                ((STT3DSprC *)ppTVar12,(byte)this_00->field_02F0,
                 g_playSystem_00802A38->field_00E4);
      if (this_00->field_0370 == 0) goto LAB_004d600f;

      thunk_FUN_004ac6b0(ppTVar12,(char)this_00->field_02F0 + -1);
      iVar11 = this_00->field_02EC + this_00->field_0241 * 4;

      thunk_FUN_004abce0(ppTVar12,(char)this_00->field_02F0 - 1,
                         *(int *)(this_00->field_0364 + iVar11 * 8),
                         *(int *)(this_00->field_0364 + 4 + iVar11 * 8),'\0');
      /* ST_CALLSITE[004D5FE3]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
      STT3DSprC::SetCurFase
                ((STT3DSprC *)ppTVar12,(char)this_00->field_02F0 + -1,
                 *(uint *)(this_00->field_0364 + (this_00->field_02EC + this_00->field_0241 * 4) * 8
                          ));
      /* ST_CALLSITE[004D6000]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
      STT3DSprC::StartShow
                ((STT3DSprC *)ppTVar12,(char)this_00->field_02F0 - 1,
                 g_playSystem_00802A38->field_00E4);
    }
    if (this_00->field_0370 != 0) {
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
LAB_004d600f:
    ppSVar14 = &this_00->field_0350;
    piVar10 = (int *)&this_00->field_0x308;
    do {
      if (*piVar10 != 0) {
        *piVar10 = 0;
        /* ST_CALLSITE[004D6028]: CALL 0x00403d0f; direct=00403D0F STT3DSprC::sub_004AD430 */
        STT3DSprC::sub_004AD430(*ppSVar14);
      }
      ppSVar14 = ppSVar14 + 1;
      piVar10 = piVar10 + 4;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
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
  iVar11 = 0;
  iVar9 = 0;
  do {
    piVar10 = (int *)(this_00->field_01F5 + iVar9);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    auStack_17c[iVar11] = *(undefined4 *)(this_00->field_01F5 + 0x1c + iVar9);
    aiStack_f4[iVar11] = piVar10[8];
    if (*piVar10 != 0) {
      cVar16 = (char)iVar11;

      iVar6 = thunk_FUN_004ac910(&this_00->vtable_at_1d5,cVar16);
      aiStack_138[iVar11] = iVar6;

      iVar6 = thunk_FUN_004ac910(&this_00->vtable_at_1d5,cVar16);

      iVar6 = thunk_FUN_004acdd0(&this_00->vtable_at_1d5,cVar16,iVar6);
      aiStack_1c0[iVar11] = iVar6;
    }
    iVar9 = iVar9 + 0x24;
    iVar11 = iVar11 + 1;
  } while (iVar9 < 0x264);
  if (this_00->field_02EC == 0) {
    /* ST_CALLSITE[004D56F9]: CALL 0x00404061; direct=00404061 TLOEmbryoTy::sub_004D10A0 */
    sub_004D10A0(this_00,1);
    /* ST_CALLSITE[004D571A]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    STT3DSprC::StartShow
              ((STT3DSprC *)&this_00->vtable_at_1d5,(byte)this_00->field_02F0,
               g_playSystem_00802A38->field_00E4);
    /* ST_CALLSITE[004D5737]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    STT3DSprC::StartShow
              ((STT3DSprC *)&this_00->vtable_at_1d5,(char)this_00->field_02F0 - 1,
               g_playSystem_00802A38->field_00E4);
  }
  if (this_00->field_02DC == 0) {
    if ((this_00->field_01F1 & 0x4000U) == 0) goto LAB_004d59e7;

    uVar8 = thunk_FUN_004ab050();
    uVar7 = uVar8 & 0x80000001;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
    }
    /* ST_CALLSITE[004D578B]: CALL dword ptr [0x0085bde8] */
    wsprintfA(local_b0,"%s%1i",(&PTR_s_tlo_embws1_007bf3e8)[(int)this_00->field_036C],uVar7
             );
    ppTVar12 = &this_00->vtable_at_1d5;
    /* ST_CALLSITE[004D57AD]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    iVar9 = STT3DSprC::LoadSequence((STT3DSprC *)ppTVar12,0xe,PTR_0080678c,local_b0,CASE_1D);
    if (iVar9 != 0) {
      RaiseInternalException
                (iVar9,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp",0x43a
                );
    }

    thunk_FUN_004abce0(ppTVar12,0xe,*(int *)(&DAT_0079104c + this_00->field_0368 * 4),
                       *(int *)(&DAT_0079104c + this_00->field_0368 * 4),'\0');
    /* ST_CALLSITE[004D57F9]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
    STT3DSprC::SetCurFase
              ((STT3DSprC *)ppTVar12,'\x0e',*(uint *)(&DAT_0079104c + this_00->field_0368 * 4));
    /* ST_CALLSITE[004D580F]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    STT3DSprC::StartShow((STT3DSprC *)ppTVar12,0xe,g_playSystem_00802A38->field_00E4);
    /* ST_CALLSITE[004D582E]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    iVar9 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)ppTVar12,0x10,PTR_0080678c,
                       (&PTR_s_tlo_sha_ws_007bb1b4)[(int)this_00->field_036C],CASE_1D);
    if (iVar9 != 0) {
      iVar11 = 0x441;
      goto LAB_004d5985;
    }
  }
  else {

    iVar5 = thunk_FUN_004ab050();
    ppTVar12 = &this_00->vtable_at_1d5;
    uVar7 = *(uint *)(PTR_DAT_007b5170 +
                     (iVar5 + (this_00->field_0368 * 3 + (int)this_00->field_036C) * 4) * 8);

    thunk_FUN_004abce0(ppTVar12,0xe,uVar7,uVar7,'\0');
    /* ST_CALLSITE[004D588C]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
    STT3DSprC::SetCurFase((STT3DSprC *)ppTVar12,'\x0e',uVar7);
    /* ST_CALLSITE[004D58A2]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    STT3DSprC::StartShow((STT3DSprC *)ppTVar12,0xe,g_playSystem_00802A38->field_00E4);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (**(int **)(this_00->field_01F5 + 0x1d4) < (int)uVar7) {
      uVar7 = 0;
    }

    thunk_FUN_004abce0(ppTVar12,0xd,uVar7,uVar7,'\0');
    /* ST_CALLSITE[004D58CB]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
    STT3DSprC::SetCurFase((STT3DSprC *)ppTVar12,'\r',uVar7);
    /* ST_CALLSITE[004D58E1]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    STT3DSprC::StartShow((STT3DSprC *)ppTVar12,0xd,g_playSystem_00802A38->field_00E4);
    if (*(int *)(PTR_PTR_007bb198 + (this_00->field_0368 * 3 + (int)this_00->field_036C) * 0xc + 8)
        != 0) {

      local_EAX_862 = thunk_FUN_004ab050();
      uVar7 = *(uint *)(PTR_DAT_007b8310 +
                       (local_EAX_862 + (this_00->field_0368 * 3 + (int)this_00->field_036C) * 4) *
                       8);

      thunk_FUN_004abce0(ppTVar12,0xc,uVar7,uVar7,'\0');
      /* ST_CALLSITE[004D5941]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
      STT3DSprC::SetCurFase((STT3DSprC *)ppTVar12,'\f',uVar7);
      /* ST_CALLSITE[004D5957]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
      STT3DSprC::StartShow((STT3DSprC *)ppTVar12,0xc,g_playSystem_00802A38->field_00E4);
    }
    /* ST_CALLSITE[004D5977]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    iVar9 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)ppTVar12,0x10,PTR_0080678c,
                       (&PTR_s_tlo_sha_ws_007bb1b4)[(int)this_00->field_036C],CASE_1D);
    if (iVar9 != 0) {
      iVar11 = 0x459;
LAB_004d5985:
      RaiseInternalException
                (iVar9,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp",
                 iVar11);
    }
  }
  ppTVar12 = &this_00->vtable_at_1d5;

  thunk_FUN_004abce0(ppTVar12,0x10,*(int *)(&DAT_0079104c + this_00->field_0368 * 4),
                     *(int *)(&DAT_0079104c + this_00->field_0368 * 4),'\0');
  /* ST_CALLSITE[004D59C3]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
  STT3DSprC::SetCurFase
            ((STT3DSprC *)ppTVar12,'\x10',*(uint *)(&DAT_0079104c + this_00->field_0368 * 4));
  /* ST_CALLSITE[004D59D9]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
  STT3DSprC::StartShow((STT3DSprC *)ppTVar12,0x10,g_playSystem_00802A38->field_00E4);
  /* ST_CALLSITE[004D59E2]: CALL 0x00403afd; direct=00403AFD STT3DSprC::sub_004ACF50 */
  STT3DSprC::sub_004ACF50((STT3DSprC *)ppTVar12,'\x10');
LAB_004d59e7:
  iVar11 = 0;
  iVar9 = 0;
  do {
    *(undefined4 *)(iVar9 + 0x1c + this_00->field_01F5) = auStack_17c[iVar11];
    *(int *)(iVar9 + 0x20 + this_00->field_01F5) = aiStack_f4[iVar11];
    iVar6 = *(int *)(iVar9 + this_00->field_01F5);
    if (iVar6 != 0) {
      *(undefined4 *)(*(int *)(iVar9 + this_00->field_01F5 + 4) + aiStack_138[iVar11] * 4) =
           *(undefined4 *)(aiStack_138[iVar11] * 4 + 0x31 + iVar6);
      iVar6 = aiStack_1c0[iVar11];

      iVar8 = thunk_FUN_004ac910(&this_00->vtable_at_1d5,(char)iVar11);
      thunk_FUN_004ace00(&this_00->vtable_at_1d5,(char)iVar11,iVar8,iVar6);
    }
    iVar9 = iVar9 + 0x24;
    iVar11 = iVar11 + 1;
  } while (iVar9 < 0x264);
  g_currentExceptionFrame = local_70.previous;
  return 0;
}

