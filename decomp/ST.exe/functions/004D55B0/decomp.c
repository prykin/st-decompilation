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
  uint *puVar2;
  dword dVar3;
  STSprGameObjC_field_0259State SVar4;
  code *pcVar5;
  bool bVar6;
  STSprGameObjC *this_00;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  undefined4 *puVar14;
  int iVar15;
  int *piVar16;
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
  STSprGameObjC *local_c;
  int *local_8;

  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  local_c = (STSprGameObjC *)this;
  iVar7 = Library::MSVCRT::__setjmp3(local_70.jumpBuffer,0);
  this_00 = local_c;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_70.previous;
    iVar13 = ReportDebugMessage("E:\\__titans\\Artem\\TLO_embryo.cpp",0x4e5,0,iVar7,
                                "%s","TLOEmbryoTy::GetMessage error");
    if (iVar13 == 0) {
      RaiseInternalException(iVar7,0,"E:\\__titans\\Artem\\TLO_embryo.cpp",0x4e6);
      return iVar7;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  STSprGameObjC::GetMessage(local_c,message);
  SVar1 = message->id;
  if (MESS_SHARED_010F < SVar1) {
    if (SVar1 < MESS_SHARED_0129) {
      if (SVar1 == MESS_HITKILL) {
        dVar3 = (message->arg0).u32;
        if (*(int *)&this_00->field_0x2a0 != 0) {
          g_currentExceptionFrame = local_70.previous;
          return 0;
        }
        local_18 = *(undefined4 *)&this_00->field_0x8;
        *(undefined4 *)&this_00->field_0x2a0 = 1;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        local_24 = *(undefined4 *)(*(int *)&this_00->field_0xc + 0x14);
        local_20 = 0;
        local_1c = 10;
        sub_006E60A0(this_00,local_2c);
        *(uint *)&this_00[1].field_0x39 = PTR_00802a38->field_00E4;
        *(undefined4 *)&this_00[1].field_0x3d = *(undefined4 *)(dVar3 + 8);
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      if (SVar1 == MESS_TORPHIT) {
        if (*(int *)&this_00->field_0x2ec == 3) {
          g_currentExceptionFrame = local_70.previous;
          return 0;
        }
        if (*(int *)&this_00->field_0x2dc != 0) {
          g_currentExceptionFrame = local_70.previous;
          return 0;
        }
        local_8 = (message->arg0).ptr;
        iVar13 = (*(int *)&this_00[1].field_0x59 * 3 + *(int *)&this_00[1].field_0x5d) * 4;
        iVar7 = *local_8;
        if (*(int *)&this_00[1].field_0x29 != 0) {
          iVar7 = (*(int *)((int)&this_00[1].field_002C + 1) * iVar7) / 100;
        }
        iVar7 = (*(int *)&this_00->field_0x2a8 * *(int *)(&DAT_007e417c + iVar13)) / 100 - iVar7;
        if (iVar7 < 1) {
          if (*(int *)&this_00->field_0x2a0 == 0) {
            STT3DSprC::StopShow(*(STT3DSprC **)&this_00[1].field_0x4d,0xe);
            thunk_FUN_004ad430(*(int *)&this_00[1].field_0x4d);
            puVar14 = &this_00->field_01D5;
            if (this_00->field_002C == 1) {
              pcVar17 = "expl_bt1";
            }
            else {
              pcVar17 = "expl_bt0";
            }
            iVar7 = STT3DSprC::LoadSequence((STT3DSprC *)puVar14,6,DAT_00806774,pcVar17,0x1d);
            if (iVar7 != 0) {
              return 0xffff;
            }
            thunk_FUN_004ac700(puVar14,'\x06');
            STT3DSprC::StartShow((STT3DSprC *)puVar14,6,PTR_00802a38->field_00E4);
          }
          *(undefined4 *)&this_00->field_0x2a8 = 0;
          *(undefined4 *)&this_00->field_0x2a0 = 1;
        }
        else {
          iVar7 = (iVar7 * 100) / *(int *)(&DAT_007e417c + iVar13);
          *(int *)&this_00->field_0x2a8 = iVar7;
          *(int *)&this_00->field_0x2cc = (iVar7 * *(int *)(&DAT_008545ac + iVar13)) / 100;
          *(int *)&this_00->field_0x2d0 =
               (*(int *)(&DAT_007e1c50 + iVar13) * *(int *)&this_00->field_0x2a8) / 100;
          *(int *)&this_00->field_0x2d4 =
               (*(int *)(&DAT_007e24fc + iVar13) * *(int *)&this_00->field_0x2a8) / 100;
          iVar7 = (*(int *)(&DAT_007e3160 + iVar13) * *(int *)&this_00->field_0x2a8) / 100;
          *(int *)&this_00->field_0x2d8 = iVar7;
          iVar8 = *(int *)(&DAT_008545ac + iVar13) - *(int *)&this_00->field_0x2cc;
          iVar11 = *(int *)(&DAT_007e1c50 + iVar13) - *(int *)&this_00->field_0x2d0;
          iVar15 = *(int *)(&DAT_007e24fc + iVar13) - *(int *)&this_00->field_0x2d4;
          iVar7 = *(int *)(&DAT_007e3160 + iVar13) - iVar7;
          if (iVar8 < 0) {
            iVar8 = 0;
          }
          if (iVar11 < 0) {
            iVar11 = 0;
          }
          if (iVar15 < 0) {
            iVar15 = 0;
          }
          if (iVar7 < 0) {
            iVar7 = 0;
          }
          thunk_FUN_004d76e0((char)this_00->field_0024,0,this_00->field_0018,iVar8,iVar11,iVar15,
                             iVar7);
        }
        *(uint *)&this_00[1].field_0x39 = PTR_00802a38->field_00E4;
        *(int *)&this_00[1].field_0x3d = local_8[2];
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      if (SVar1 != MESS_SHARED_0122) {
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      puVar2 = (message->arg0).ptr;
      if (*puVar2 != this_00->field_0024) {
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      *(undefined4 *)&this_00[1].field_0x29 = 1;
      *(uint *)((int)&this_00[1].field_002C + 1) = puVar2[2];
      *(uint *)&this_00[1].field_0x31 = PTR_00802a38->field_00E4;
      *(uint *)&this_00[1].field_0x35 = puVar2[1];
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
      if (*(int *)&this_00->field_0x2a4 != 0) {
        if (*pcVar17 != '\x1c') {
          g_currentExceptionFrame = local_70.previous;
          return 0;
        }
        *(undefined4 *)&this_00->field_0x2a4 = 0;
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      if (*pcVar17 != '\x1b') {
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      if (((*(int *)&this_00->field_0x2ec == 2) && (0 < *(int *)&this_00->field_0x2a8)) &&
         (*(int *)&this_00->field_0x2a8 < 0x65)) {
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
      if (!bVar6) {
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      *(undefined4 *)&this_00->field_0x2a4 = 1;
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
    if (((*(int *)&this_00->field_0x2ec == 2) && (0 < *(int *)&this_00->field_0x2a8)) &&
       (*(int *)&this_00->field_0x2a8 < 0x65)) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    if (!bVar6) {
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
    iVar7 = *(int *)&this_00[1].field_0x61;
    iVar13 = 3;
    *(undefined4 *)&this_00->field_0x2ec = 3;
    *(undefined4 *)&this_00->field_0x2e8 = 1;
    if (iVar7 == 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(this_00->vtable + 3))(3,0x361);
    }
    SVar4 = this_00->field_0259;
    if (((SVar4 != 0x6c) || (*(int *)&this_00->field_0x251 != 3)) &&
       (((int)SVar4 < 0x54 || (0x5a < (int)SVar4)))) {
      puVar14 = &this_00->field_01D5;
      thunk_FUN_004ac6b0(puVar14,this_00->field_0x2f0);
      iVar7 = *(int *)&this_00->field_0x2ec + *(int *)((int)&this_00->field_023E + 3) * 4;
      thunk_FUN_004abce0(puVar14,this_00->field_0x2f0,
                         *(int *)(*(int *)&this_00[1].field_0x55 + iVar7 * 8),
                         *(int *)(*(int *)&this_00[1].field_0x55 + 4 + iVar7 * 8),'\0');
      STT3DSprC::SetCurFase
                ((STT3DSprC *)puVar14,this_00->field_0x2f0,
                 *(uint *)(*(int *)&this_00[1].field_0x55 +
                          (*(int *)&this_00->field_0x2ec +
                          *(int *)((int)&this_00->field_023E + 3) * 4) * 8));
      STT3DSprC::StartShow((STT3DSprC *)puVar14,this_00->field_0x2f0,PTR_00802a38->field_00E4);
      if (*(int *)&this_00[1].field_0x61 == 0) goto LAB_004d600f;
      thunk_FUN_004ac6b0(puVar14,this_00->field_0x2f0 + -1);
      iVar7 = *(int *)&this_00->field_0x2ec + *(int *)((int)&this_00->field_023E + 3) * 4;
      thunk_FUN_004abce0(puVar14,this_00->field_0x2f0 - 1,
                         *(int *)(*(int *)&this_00[1].field_0x55 + iVar7 * 8),
                         *(int *)(*(int *)&this_00[1].field_0x55 + 4 + iVar7 * 8),'\0');
      STT3DSprC::SetCurFase
                ((STT3DSprC *)puVar14,this_00->field_0x2f0 + -1,
                 *(uint *)(*(int *)&this_00[1].field_0x55 +
                          (*(int *)&this_00->field_0x2ec +
                          *(int *)((int)&this_00->field_023E + 3) * 4) * 8));
      STT3DSprC::StartShow((STT3DSprC *)puVar14,this_00->field_0x2f0 - 1,PTR_00802a38->field_00E4);
    }
    if (*(int *)&this_00[1].field_0x61 != 0) {
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
LAB_004d600f:
    piVar16 = (int *)&this_00[1].field_0x41;
    piVar12 = &this_00->field_0308;
    do {
      if (*piVar12 != 0) {
        *piVar12 = 0;
        thunk_FUN_004ad430(*piVar16);
      }
      piVar16 = piVar16 + 1;
      piVar12 = piVar12 + 4;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
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
      Create((TLOEmbryoTy *)this_00,(message->arg0).ptr);
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
    thunk_FUN_004d32c0(this_00);
    g_currentExceptionFrame = local_70.previous;
    return 0;
  }
  if (SVar1 != MESS_SHARED_0108) {
    g_currentExceptionFrame = local_70.previous;
    return 0;
  }
  iVar13 = 0;
  iVar7 = 0;
  do {
    piVar16 = (int *)(*(int *)&this_00->field_0x1f5 + iVar7);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    auStack_17c[iVar13] = *(undefined4 *)(*(int *)&this_00->field_0x1f5 + 0x1c + iVar7);
    aiStack_f4[iVar13] = piVar16[8];
    if (*piVar16 != 0) {
      cVar18 = (char)iVar13;
      iVar8 = thunk_FUN_004ac910(&this_00->field_01D5,cVar18);
      aiStack_138[iVar13] = iVar8;
      iVar8 = thunk_FUN_004ac910(&this_00->field_01D5,cVar18);
      uVar9 = thunk_FUN_004acdd0(&this_00->field_01D5,cVar18,iVar8);
      auStack_1c0[iVar13] = uVar9;
    }
    iVar7 = iVar7 + 0x24;
    iVar13 = iVar13 + 1;
  } while (iVar7 < 0x264);
  if (*(int *)&this_00->field_0x2ec == 0) {
    thunk_FUN_004d10a0(this_00,1);
    STT3DSprC::StartShow
              ((STT3DSprC *)&this_00->field_01D5,this_00->field_0x2f0,PTR_00802a38->field_00E4);
    STT3DSprC::StartShow
              ((STT3DSprC *)&this_00->field_01D5,this_00->field_0x2f0 - 1,PTR_00802a38->field_00E4);
  }
  if (*(int *)&this_00->field_0x2dc == 0) {
    if ((*(uint *)&this_00->field_0x1f1 & 0x4000) == 0) goto LAB_004d59e7;
    uVar10 = thunk_FUN_004ab050();
    uVar10 = uVar10 & 0x80000001;
    if ((int)uVar10 < 0) {
      uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
    }
    wsprintfA(local_b0,"%s%1i",(&PTR_s_tlo_embws1_007bf3e8)[*(int *)&this_00[1].field_0x5d]
              ,uVar10);
    puVar14 = &this_00->field_01D5;
    iVar7 = STT3DSprC::LoadSequence((STT3DSprC *)puVar14,0xe,DAT_0080678c,local_b0,0x1d);
    if (iVar7 != 0) {
      RaiseInternalException
                (iVar7,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp",0x43a
                );
    }
    thunk_FUN_004abce0(puVar14,0xe,*(int *)(&DAT_0079104c + *(int *)&this_00[1].field_0x59 * 4),
                       *(int *)(&DAT_0079104c + *(int *)&this_00[1].field_0x59 * 4),'\0');
    STT3DSprC::SetCurFase
              ((STT3DSprC *)puVar14,'\x0e',
               *(uint *)(&DAT_0079104c + *(int *)&this_00[1].field_0x59 * 4));
    STT3DSprC::StartShow((STT3DSprC *)puVar14,0xe,PTR_00802a38->field_00E4);
    iVar7 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)puVar14,0x10,DAT_0080678c,
                       (&PTR_s_tlo_sha_ws_007bb1b4)[*(int *)&this_00[1].field_0x5d],0x1d);
    if (iVar7 != 0) {
      iVar13 = 0x441;
      goto LAB_004d5985;
    }
  }
  else {
    iVar7 = thunk_FUN_004ab050();
    puVar14 = &this_00->field_01D5;
    uVar10 = *(uint *)(PTR_DAT_007b5170 +
                      (iVar7 + (*(int *)&this_00[1].field_0x59 * 3 + *(int *)&this_00[1].field_0x5d)
                               * 4) * 8);
    thunk_FUN_004abce0(puVar14,0xe,uVar10,uVar10,'\0');
    STT3DSprC::SetCurFase((STT3DSprC *)puVar14,'\x0e',uVar10);
    STT3DSprC::StartShow((STT3DSprC *)puVar14,0xe,PTR_00802a38->field_00E4);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (**(int **)(*(int *)&this_00->field_0x1f5 + 0x1d4) < (int)uVar10) {
      uVar10 = 0;
    }
    thunk_FUN_004abce0(puVar14,0xd,uVar10,uVar10,'\0');
    STT3DSprC::SetCurFase((STT3DSprC *)puVar14,'\r',uVar10);
    STT3DSprC::StartShow((STT3DSprC *)puVar14,0xd,PTR_00802a38->field_00E4);
    if (*(int *)(PTR_PTR_007bb198 +
                (*(int *)&this_00[1].field_0x59 * 3 + *(int *)&this_00[1].field_0x5d) * 0xc + 8) !=
        0) {
      iVar7 = thunk_FUN_004ab050();
      uVar10 = *(uint *)(PTR_DAT_007b8310 +
                        (iVar7 + (*(int *)&this_00[1].field_0x59 * 3 +
                                 *(int *)&this_00[1].field_0x5d) * 4) * 8);
      thunk_FUN_004abce0(puVar14,0xc,uVar10,uVar10,'\0');
      STT3DSprC::SetCurFase((STT3DSprC *)puVar14,'\f',uVar10);
      STT3DSprC::StartShow((STT3DSprC *)puVar14,0xc,PTR_00802a38->field_00E4);
    }
    iVar7 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)puVar14,0x10,DAT_0080678c,
                       (&PTR_s_tlo_sha_ws_007bb1b4)[*(int *)&this_00[1].field_0x5d],0x1d);
    if (iVar7 != 0) {
      iVar13 = 0x459;
LAB_004d5985:
      RaiseInternalException
                (iVar7,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp",
                 iVar13);
    }
  }
  puVar14 = &this_00->field_01D5;
  thunk_FUN_004abce0(puVar14,0x10,*(int *)(&DAT_0079104c + *(int *)&this_00[1].field_0x59 * 4),
                     *(int *)(&DAT_0079104c + *(int *)&this_00[1].field_0x59 * 4),'\0');
  STT3DSprC::SetCurFase
            ((STT3DSprC *)puVar14,'\x10',
             *(uint *)(&DAT_0079104c + *(int *)&this_00[1].field_0x59 * 4));
  STT3DSprC::StartShow((STT3DSprC *)puVar14,0x10,PTR_00802a38->field_00E4);
  thunk_FUN_004acf50(puVar14,'\x10');
LAB_004d59e7:
  iVar13 = 0;
  iVar7 = 0;
  do {
    *(undefined4 *)(iVar7 + 0x1c + *(int *)&this_00->field_0x1f5) = auStack_17c[iVar13];
    *(int *)(iVar7 + 0x20 + *(int *)&this_00->field_0x1f5) = aiStack_f4[iVar13];
    iVar8 = *(int *)(iVar7 + *(int *)&this_00->field_0x1f5);
    if (iVar8 != 0) {
      *(undefined4 *)(*(int *)(iVar7 + *(int *)&this_00->field_0x1f5 + 4) + aiStack_138[iVar13] * 4)
           = *(undefined4 *)(aiStack_138[iVar13] * 4 + 0x31 + iVar8);
      uVar9 = auStack_1c0[iVar13];
      iVar8 = thunk_FUN_004ac910(&this_00->field_01D5,(char)iVar13);
      thunk_FUN_004ace00(&this_00->field_01D5,(char)iVar13,iVar8,uVar9);
    }
    iVar7 = iVar7 + 0x24;
    iVar13 = iVar13 + 1;
  } while (iVar7 < 0x264);
  g_currentExceptionFrame = local_70.previous;
  return 0;
}

