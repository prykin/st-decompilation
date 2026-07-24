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
  code *pcVar3;
  bool bVar4;
  TLOEmbryoTy *this_00;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  STT3DSprC **ppSVar14;
  char *pcVar15;
  char cVar16;
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
  iVar5 = Library::MSVCRT::__setjmp3(local_70.jumpBuffer,0);
  this_00 = local_c;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_70.previous;
    iVar11 = ReportDebugMessage("E:\\__titans\\Artem\\TLO_embryo.cpp",0x4e5,0,iVar5,
                                "%s","TLOEmbryoTy::GetMessage error");
    if (iVar11 == 0) {
      RaiseInternalException(iVar5,0,"E:\\__titans\\Artem\\TLO_embryo.cpp",0x4e6);
      return iVar5;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
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
        iVar11 = (this_00->field_0368 * 3 + this_00->field_036C) * 4;
        iVar5 = *local_8;
        if (this_00->field_0338 != 0) {
          iVar5 = (this_00->field_033C * iVar5) / 100;
        }
        iVar5 = (this_00->field_02A8 * *(int *)(&DAT_007e417c + iVar11)) / 100 - iVar5;
        if (iVar5 < 1) {
          if (this_00->field_02A0 == 0) {
            STT3DSprC::StopShow(this_00->field_035C,0xe);
            thunk_FUN_004ad430((int)this_00->field_035C);
            puVar12 = &this_00->field_01D5;
            if (this_00->field_002C == 1) {
              pcVar15 = "expl_bt1";
            }
            else {
              pcVar15 = "expl_bt0";
            }
            iVar5 = STT3DSprC::LoadSequence((STT3DSprC *)puVar12,6,DAT_00806774,pcVar15,0x1d);
            if (iVar5 != 0) {
              return 0xffff;
            }
            thunk_FUN_004ac700(puVar12,'\x06');
            STT3DSprC::StartShow((STT3DSprC *)puVar12,6,g_playSystem_00802A38->field_00E4);
          }
          this_00->field_02A8 = 0;
          this_00->field_02A0 = 1;
        }
        else {
          iVar5 = (iVar5 * 100) / *(int *)(&DAT_007e417c + iVar11);
          this_00->field_02A8 = iVar5;
          this_00->field_02CC = (iVar5 * *(int *)(&DAT_008545ac + iVar11)) / 100;
          this_00->field_02D0 = (*(int *)(&DAT_007e1c50 + iVar11) * this_00->field_02A8) / 100;
          this_00->field_02D4 = (*(int *)(&DAT_007e24fc + iVar11) * this_00->field_02A8) / 100;
          iVar5 = (*(int *)(&DAT_007e3160 + iVar11) * this_00->field_02A8) / 100;
          this_00->field_02D8 = iVar5;
          iVar6 = *(int *)(&DAT_008545ac + iVar11) - this_00->field_02CC;
          iVar9 = *(int *)(&DAT_007e1c50 + iVar11) - this_00->field_02D0;
          iVar13 = *(int *)(&DAT_007e24fc + iVar11) - this_00->field_02D4;
          iVar5 = *(int *)(&DAT_007e3160 + iVar11) - iVar5;
          if (iVar6 < 0) {
            iVar6 = 0;
          }
          if (iVar9 < 0) {
            iVar9 = 0;
          }
          if (iVar13 < 0) {
            iVar13 = 0;
          }
          if (iVar5 < 0) {
            iVar5 = 0;
          }
          thunk_FUN_004d76e0(*(char *)&this_00->field_0024,0,this_00->field_0018,iVar6,iVar9,iVar13,
                             iVar5);
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
    iVar5 = 3;
    this_00->field_02EC = 3;
    this_00->field_02E8 = 1;
    if (this_00->field_0370 == 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (*(code *)this_00->field_0000->field_0090)(3,0x361);
    }
    iVar11 = this_00->field_0259;
    if (((iVar11 != 0x6c) || (this_00->field_0251 != 3)) && ((iVar11 < 0x54 || (0x5a < iVar11)))) {
      puVar12 = &this_00->field_01D5;
      thunk_FUN_004ac6b0(puVar12,*(char *)&this_00->field_02F0);
      iVar11 = this_00->field_02EC + this_00->field_0241 * 4;
      thunk_FUN_004abce0(puVar12,*(byte *)&this_00->field_02F0,
                         *(int *)(this_00->field_0364 + iVar11 * 8),
                         *(int *)(this_00->field_0364 + 4 + iVar11 * 8),'\0');
      STT3DSprC::SetCurFase
                ((STT3DSprC *)puVar12,*(char *)&this_00->field_02F0,
                 *(uint *)(this_00->field_0364 + (this_00->field_02EC + this_00->field_0241 * 4) * 8
                          ));
      STT3DSprC::StartShow
                ((STT3DSprC *)puVar12,*(byte *)&this_00->field_02F0,
                 g_playSystem_00802A38->field_00E4);
      if (this_00->field_0370 == 0) goto LAB_004d600f;
      thunk_FUN_004ac6b0(puVar12,*(char *)&this_00->field_02F0 + -1);
      iVar11 = this_00->field_02EC + this_00->field_0241 * 4;
      thunk_FUN_004abce0(puVar12,*(char *)&this_00->field_02F0 - 1,
                         *(int *)(this_00->field_0364 + iVar11 * 8),
                         *(int *)(this_00->field_0364 + 4 + iVar11 * 8),'\0');
      STT3DSprC::SetCurFase
                ((STT3DSprC *)puVar12,*(char *)&this_00->field_02F0 + -1,
                 *(uint *)(this_00->field_0364 + (this_00->field_02EC + this_00->field_0241 * 4) * 8
                          ));
      STT3DSprC::StartShow
                ((STT3DSprC *)puVar12,*(char *)&this_00->field_02F0 - 1,
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
        thunk_FUN_004ad430((int)*ppSVar14);
      }
      ppSVar14 = ppSVar14 + 1;
      piVar10 = piVar10 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
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
      thunk_FUN_004d2760((AnonShape_004D2760_CB2BA53E *)this_00);
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
    if (SVar1 != MESS_ID_NONE) {
      if (SVar1 != MESS_ID_CREATE) {
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
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
  iVar5 = 0;
  do {
    piVar10 = (int *)(this_00->field_01F5 + iVar5);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    auStack_17c[iVar11] = *(undefined4 *)(this_00->field_01F5 + 0x1c + iVar5);
    aiStack_f4[iVar11] = piVar10[8];
    if (*piVar10 != 0) {
      cVar16 = (char)iVar11;
      iVar6 = thunk_FUN_004ac910(&this_00->field_01D5,cVar16);
      aiStack_138[iVar11] = iVar6;
      iVar6 = thunk_FUN_004ac910(&this_00->field_01D5,cVar16);
      uVar7 = thunk_FUN_004acdd0(&this_00->field_01D5,cVar16,iVar6);
      auStack_1c0[iVar11] = uVar7;
    }
    iVar5 = iVar5 + 0x24;
    iVar11 = iVar11 + 1;
  } while (iVar5 < 0x264);
  if (this_00->field_02EC == 0) {
    sub_004D10A0(this_00,1);
    STT3DSprC::StartShow
              ((STT3DSprC *)&this_00->field_01D5,*(byte *)&this_00->field_02F0,
               g_playSystem_00802A38->field_00E4);
    STT3DSprC::StartShow
              ((STT3DSprC *)&this_00->field_01D5,*(char *)&this_00->field_02F0 - 1,
               g_playSystem_00802A38->field_00E4);
  }
  if (this_00->field_02DC == 0) {
    if ((this_00->field_01F1 & 0x4000) == 0) goto LAB_004d59e7;
    uVar8 = thunk_FUN_004ab050();
    uVar8 = uVar8 & 0x80000001;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xfffffffe) + 1;
    }
    wsprintfA(local_b0,"%s%1i",(&PTR_s_tlo_embws1_007bf3e8)[this_00->field_036C],uVar8);
    puVar12 = &this_00->field_01D5;
    iVar5 = STT3DSprC::LoadSequence((STT3DSprC *)puVar12,0xe,DAT_0080678c,local_b0,0x1d);
    if (iVar5 != 0) {
      RaiseInternalException
                (iVar5,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp",0x43a
                );
    }
    thunk_FUN_004abce0(puVar12,0xe,*(int *)(&DAT_0079104c + this_00->field_0368 * 4),
                       *(int *)(&DAT_0079104c + this_00->field_0368 * 4),'\0');
    STT3DSprC::SetCurFase
              ((STT3DSprC *)puVar12,'\x0e',*(uint *)(&DAT_0079104c + this_00->field_0368 * 4));
    STT3DSprC::StartShow((STT3DSprC *)puVar12,0xe,g_playSystem_00802A38->field_00E4);
    iVar5 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)puVar12,0x10,DAT_0080678c,
                       (&PTR_s_tlo_sha_ws_007bb1b4)[this_00->field_036C],0x1d);
    if (iVar5 != 0) {
      iVar11 = 0x441;
      goto LAB_004d5985;
    }
  }
  else {
    iVar5 = thunk_FUN_004ab050();
    puVar12 = &this_00->field_01D5;
    uVar8 = *(uint *)(PTR_DAT_007b5170 +
                     (iVar5 + (this_00->field_0368 * 3 + this_00->field_036C) * 4) * 8);
    thunk_FUN_004abce0(puVar12,0xe,uVar8,uVar8,'\0');
    STT3DSprC::SetCurFase((STT3DSprC *)puVar12,'\x0e',uVar8);
    STT3DSprC::StartShow((STT3DSprC *)puVar12,0xe,g_playSystem_00802A38->field_00E4);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (**(int **)(this_00->field_01F5 + 0x1d4) < (int)uVar8) {
      uVar8 = 0;
    }
    thunk_FUN_004abce0(puVar12,0xd,uVar8,uVar8,'\0');
    STT3DSprC::SetCurFase((STT3DSprC *)puVar12,'\r',uVar8);
    STT3DSprC::StartShow((STT3DSprC *)puVar12,0xd,g_playSystem_00802A38->field_00E4);
    if (*(int *)(PTR_PTR_007bb198 + (this_00->field_0368 * 3 + this_00->field_036C) * 0xc + 8) != 0)
    {
      iVar5 = thunk_FUN_004ab050();
      uVar8 = *(uint *)(PTR_DAT_007b8310 +
                       (iVar5 + (this_00->field_0368 * 3 + this_00->field_036C) * 4) * 8);
      thunk_FUN_004abce0(puVar12,0xc,uVar8,uVar8,'\0');
      STT3DSprC::SetCurFase((STT3DSprC *)puVar12,'\f',uVar8);
      STT3DSprC::StartShow((STT3DSprC *)puVar12,0xc,g_playSystem_00802A38->field_00E4);
    }
    iVar5 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)puVar12,0x10,DAT_0080678c,
                       (&PTR_s_tlo_sha_ws_007bb1b4)[this_00->field_036C],0x1d);
    if (iVar5 != 0) {
      iVar11 = 0x459;
LAB_004d5985:
      RaiseInternalException
                (iVar5,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp",
                 iVar11);
    }
  }
  puVar12 = &this_00->field_01D5;
  thunk_FUN_004abce0(puVar12,0x10,*(int *)(&DAT_0079104c + this_00->field_0368 * 4),
                     *(int *)(&DAT_0079104c + this_00->field_0368 * 4),'\0');
  STT3DSprC::SetCurFase
            ((STT3DSprC *)puVar12,'\x10',*(uint *)(&DAT_0079104c + this_00->field_0368 * 4));
  STT3DSprC::StartShow((STT3DSprC *)puVar12,0x10,g_playSystem_00802A38->field_00E4);
  STT3DSprC::sub_004ACF50((STT3DSprC *)puVar12,'\x10');
LAB_004d59e7:
  iVar11 = 0;
  iVar5 = 0;
  do {
    *(undefined4 *)(iVar5 + 0x1c + this_00->field_01F5) = auStack_17c[iVar11];
    *(int *)(iVar5 + 0x20 + this_00->field_01F5) = aiStack_f4[iVar11];
    iVar6 = *(int *)(iVar5 + this_00->field_01F5);
    if (iVar6 != 0) {
      *(undefined4 *)(*(int *)(iVar5 + this_00->field_01F5 + 4) + aiStack_138[iVar11] * 4) =
           *(undefined4 *)(aiStack_138[iVar11] * 4 + 0x31 + iVar6);
      uVar7 = auStack_1c0[iVar11];
      iVar6 = thunk_FUN_004ac910(&this_00->field_01D5,(char)iVar11);
      thunk_FUN_004ace00(&this_00->field_01D5,(char)iVar11,iVar6,uVar7);
    }
    iVar5 = iVar5 + 0x24;
    iVar11 = iVar11 + 1;
  } while (iVar5 < 0x264);
  g_currentExceptionFrame = local_70.previous;
  return 0;
}

