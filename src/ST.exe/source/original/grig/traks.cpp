#include "st/generated.hpp"
// Generated translation unit: source/original/grig/traks.cpp

// 00555720 TraksClassTy::CreateDate
#line 4 "decomp/ST.exe/functions/00555720/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\grig\traks.cpp
   TraksClassTy::CreateDate */

int __thiscall st::fn_00555720(TraksClassTy *this)

{
  InternalExceptionFrame *pIVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_44 [16];

  pIVar2 = g_currentExceptionFrame;
  iVar3 = st::fn_0072D7F0(local_44,0);
  if (iVar3 == 0) {
    g_currentExceptionFrame = pIVar2;
    return 0;
  }
  g_currentExceptionFrame = pIVar2;
  iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\grig\\traks.cpp"),0x37,0,iVar3,st::mutable_c_string("%s"),
                             "TraksClassTy::CreateDate error");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\grig\\traks.cpp"),0x38);
  return iVar3;
}

// 00555910 TraksClassTy::DrawTrakSprite
#line 4 "decomp/ST.exe/functions/00555910/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\grig\traks.cpp
   TraksClassTy::DrawTrakSprite */

void __thiscall
st::fn_00555910(TraksClassTy *this,RecoveredRecord_TraksClassTy_00555910 *param_1)

{
  ushort uVar1;
  int iVar3;
  int iVar5;
  short sVar3;
  int iVar4;
  int iVar6;
  InternalExceptionFrame local_64;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  TraksClassTy *local_8;

  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_64.jumpBuffer,0);
  if (iVar3 == 0) {
    sVar3 = param_1->field_0022;
    local_20 = (int)sVar3;
    if ((st::storage_bit_cast<uint>(static_cast<uint32_t>((int)param_1->field_0014 + param_1->field_0024)) <= local_8->field_0020) ||
       (param_1->field_003A != 0)) {
      param_1->field_0022 = sVar3 + 1;
      if (param_1->field_0036 <= (short)(sVar3 + 1)) {
        param_1->field_0022 = sVar3;
        param_1->field_0038 = 1;
      }
      param_1->field_0024 = local_8->field_0020;
    }
    local_c = (short)param_1->field_0002;
    local_10 = (short)param_1->field_0004;
    local_18 = (short)param_1->field_001E;
    uVar1 = param_1->field_001C;
    local_14 = (short)param_1->field_0006;
    local_1c = (short)param_1->field_0020;
    if (param_1->field_003A == 0) {
      iVar6 = local_8->field_0020 - param_1->field_0028;
      if (iVar6 == 0) {
        iVar6 = 1;
      }
      iVar4 = param_1->field_0008 * iVar6;
      sVar3 = (((short)(iVar4 / 10) + (short)(iVar4 >> 0x1f)) -
              (short)((longlong)iVar4 * 0x66666667 >> 0x3f)) + param_1->field_002C;
      param_1->field_0002 = sVar3;
      if (param_1->field_000E != 0) {
        iVar4 = param_1->field_000E * iVar6 * iVar6;
        param_1->field_0002 =
             (((short)(iVar4 / 0x14) + (short)(iVar4 >> 0x1f)) -
             (short)((longlong)iVar4 * 0x66666667 >> 0x3f)) + sVar3;
      }
      iVar4 = param_1->field_000A * iVar6;
      sVar3 = (((short)(iVar4 / 10) + (short)(iVar4 >> 0x1f)) -
              (short)((longlong)iVar4 * 0x66666667 >> 0x3f)) + param_1->field_002E;
      param_1->field_0004 = sVar3;
      if (param_1->field_0010 != 0) {
        iVar4 = param_1->field_0010 * iVar6 * iVar6;
        param_1->field_0004 =
             (((short)(iVar4 / 0x14) + (short)(iVar4 >> 0x1f)) -
             (short)((longlong)iVar4 * 0x66666667 >> 0x3f)) + sVar3;
      }
      iVar4 = param_1->field_000C * iVar6;
      sVar3 = (((short)(iVar4 / 10) + (short)(iVar4 >> 0x1f)) -
              (short)((longlong)iVar4 * 0x66666667 >> 0x3f)) + param_1->field_0030;
      param_1->field_0006 = sVar3;
      if (param_1->field_0012 != 0) {
        iVar6 = param_1->field_0012 * iVar6 * iVar6;
        param_1->field_0006 =
             (((short)(iVar6 / 0x14) + (short)(iVar6 >> 0x1f)) -
             (short)((longlong)iVar6 * 0x66666667 >> 0x3f)) + sVar3;
      }
      sVar3 = param_1->field_0002;
      sVar3 = STBiasedDiv16(sVar3, 0xc9); /* exact signed 16-bit grid-index division */
      param_1->field_001C = sVar3;
      sVar3 = param_1->field_0004;
      sVar3 = STBiasedDiv16(sVar3, 0xc9); /* exact signed 16-bit grid-index division */
      param_1->field_001E = sVar3;
      sVar3 = param_1->field_0006;
      sVar3 = STBiasedDiv16(sVar3, 200); /* exact signed 16-bit grid-index division */
      param_1->field_0020 = sVar3;
      iVar6 = st::fn_0040468D(reinterpret_cast<RecoveredRecord_TraksClassTy_00555880 *>(param_1));
      if (iVar6 == 0) {
        param_1->field_0002 = (undefined2)local_c;
        param_1->field_0004 = (undefined2)local_10;
        param_1->field_001C = uVar1;
        param_1->field_001E = (undefined2)local_18;
        param_1->field_0006 = (undefined2)local_14;
        param_1->field_0020 = (undefined2)local_1c;
        if (((param_1->field_0008 != 0) || (param_1->field_000A != 0)) || (param_1->field_000C != 0)
           ) {
          param_1->field_003A = 1;
        }
      }
    }
    if (((((short)param_1->field_0002 != local_c) || ((short)param_1->field_0004 != local_10)) ||
        (((short)param_1->field_0006 != local_14 || (param_1->field_0022 != local_20)))) &&
       (param_1->field_0038 == 0)) {
      st::fn_006EA270
                (g_sT3DSMAPContext_00807598,param_1->field_0032,0,(int)param_1->field_0022);
      local_20 = (short)param_1->field_0002;
      st::fn_006EA960
                (g_sT3DSMAPContext_00807598,param_1->field_0032,
                 (float)local_20 * _DAT_007904f8 * _DAT_007904f0,
                 (float)(short)param_1->field_0004 * _DAT_007904f8 * _DAT_007904f0,
                 (float)(short)param_1->field_0006 * _DAT_007904f8 * _DAT_007904f0 +
                 _DAT_007904fc);
    }
    g_currentExceptionFrame = local_64.previous;
    return;
  }
  g_currentExceptionFrame = local_64.previous;
  iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\grig\\traks.cpp"),0x96,0,iVar3,st::mutable_c_string("%s"),
                             "TraksClassTy::DrawTrakSprite error");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\grig\\traks.cpp"),0x97);
  return;
}

// 00555E80 TraksClassTy::TraksExec
#line 4 "decomp/ST.exe/functions/00555E80/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\grig\traks.cpp
   TraksClassTy::TraksExec */

void __thiscall st::fn_00555E80(TraksClassTy *this)

{
  dword dVar1;
  TraksClassTy_field_0024DArray *pTVar2;
  TraksClassTy *this_00;
  int iVar4;
  TraksClassTy_field_0024Element *element_0024;
  int iVar6;
  RecoveredRecord_TraksClassTy_00555910 *pRVar7;
  uint uVar8;
  InternalExceptionFrame local_4c;
  TraksClassTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar4 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar4 == 0) {
    dVar1 = local_8->field_0024->count;
    if (dVar1 == 0) {
      pRVar7 = nullptr;
    }
    else {
      pRVar7 = reinterpret_cast<RecoveredRecord_TraksClassTy_00555910 *>(local_8->field_0024->data);
    }
    uVar8 = 0;
    if (0 < (int)dVar1) {
      do {
        if (-1 < (int)pRVar7->field_0032) {
          if (pRVar7->field_0038 == 0) {
            /* ST_CALLSITE[00555F25]: CALL 0x00401127; direct=00401127 TraksClassTy::DrawTrakSprite */
            st::fn_00401127(this_00,pRVar7);
          }
          else {
            st::fn_006E8BA0(g_sT3DSMAPContext_00807598,pRVar7->field_0032);
            pRVar7->field_0032 = 0xffffffff;
            pTVar2 = this_00->field_0024;
            if (uVar8 < pTVar2->count) {
              element_0024 = DArrayAt<TraksClassTy_field_0024Element>(pTVar2, uVar8);
            }
            else {
              element_0024 = nullptr;
            }
            element_0024->spriteHandle = 0xffffffff;
            iVar4 = this_00->field_0828;
            if (iVar4 < 0x3ff) {
              this_00->field_0828 = iVar4 + 1;
              *(short *)(&this_00->field_0x2a + iVar4 * 2) = (short)uVar8;
            }
          }
        }
        pRVar7 = pRVar7 + 1;
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)this_00->field_0024->count);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\grig\\traks.cpp"),200,0,iVar4,st::mutable_c_string("%s"),
                             "TraksClassTy::TraksExec error");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\grig\\traks.cpp"),0xc9);
  return;
}

// 00555FE0 TraksClassTy::PrepareToSave
#line 4 "decomp/ST.exe/functions/00555FE0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\grig\traks.cpp
   TraksClassTy::PrepareToSave

   [STPrototypeApplier] Propagated return.
   Evidence: 00555FE0 returns used as parameter 2 of STPlaySystemC::SaveObjData @ 00556638 */

byte * __thiscall st::fn_00555FE0(TraksClassTy *this,uint *param_1)

{
  int errorCode;
  int iVar2;
  byte *pbVar3;
  uint uVar5;
  byte *pbVar6;
  InternalExceptionFrame local_58;
  TraksClassTy *local_14;
  uint local_10;
  byte *local_c;
  byte *local_8;

  local_8 = nullptr;
  local_c = nullptr;
  local_10 = 0;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;
  errorCode = st::fn_0072D7F0(local_58.jumpBuffer,0);
  uVar5 = local_10;
  if (errorCode == 0) {
    *param_1 = local_10 + 0x5d;
    local_8 = (byte *)st::fn_006AAC10(local_10 + 0x5d);
    local_8[0] = 0x46;
    local_8[1] = 0;
    local_8[2] = 0;
    local_8[3] = 0;
    local_8[4] = 0xff;
    local_8[5] = 0;
    local_8[6] = 0;
    local_8[7] = 0;
    local_8[8] = 2;
    local_8[9] = 0;
    local_8[10] = 0;
    local_8[0xb] = 0;
    local_8[0x14] = 1;
    local_8[0x15] = 0;
    local_8[0x16] = 0;
    local_8[0x17] = 0;
    *(undefined4 *)(local_8 + 0x18) = local_14->field_001C;
    local_8[0x1c] = local_c != nullptr;
    if (local_c != nullptr) {
      pbVar3 = local_c;
      pbVar6 = local_8 + 0x5c;
      memmove(pbVar6, pbVar3, uVar5); /* compiler REP MOVS byte copy */
      st::fn_006AB060(&local_c);
    }
    g_currentExceptionFrame = local_58.previous;
    return local_8;
  }
  g_currentExceptionFrame = local_58.previous;
  if (local_8 != nullptr) {
    st::fn_006AB060(&local_8);
  }
  if (local_c != nullptr) {
    st::fn_006AB060(&local_c);
  }
  iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\grig\\traks.cpp"),0xed,0,errorCode,st::mutable_c_string("%s"),
                             "TraksClassTy::PrepareToSave error");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\grig\\traks.cpp"),0xee);
  return nullptr;
}

// 00556170 TraksClassTy::PrepareAfterSave
#line 4 "decomp/ST.exe/functions/00556170/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\grig\traks.cpp
   TraksClassTy::PrepareAfterSave

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 005564C0 -> 00556170 @ 00556566 */

void __thiscall st::fn_00556170(TraksClassTy *this,ushort *param_1)

{
  TraksClassTy_field_0024DArray *pTVar1;
  TraksClassTy *pTVar3;
  int iVar3;
  DArrayTy *pTVar3_mg0;
  char *text;
  ushort *piVar4_mg1;
  DArrayTy *pTVar3_mg0_2;
  int iVar9;
  TraksClassTy_field_0024Element *element_0024;
  int *piVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  int iVar10;
  uint *puVar11;
  InternalExceptionFrame local_54;
  int local_10;
  TraksClassTy *local_c;
  uint local_8;

  local_8 = 0xffffffff;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_c = this;

  iVar3 = st::fn_0072D7F0(local_54.jumpBuffer,0);
  pTVar3 = local_c;
  if (iVar3 == 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_c->field_001C = *(undefined4 *)(param_1 + 0xc);
    if ((char)param_1[0xe] == '\0') {
      /* ST_CALLSITE[005563A1]: CALL 0x006ae290; direct=006AE290 Library::DKW::TBL::DArrayCreate; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArraySpecializations/TraksClassTy_field_0024DArray; source view only; no Ghidra override */
      pTVar3_mg0_2 = st::fn_006AE290(nullptr,0x32,0x3c,0x32);
      pTVar3->field_0024 = reinterpret_cast<TraksClassTy_field_0024DArray *>(pTVar3_mg0_2);
    }
    else {
      /* ST_CALLSITE[005561C8]: CALL 0x006b0060; direct=006B0060 FUN_006b0060; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArraySpecializations/TraksClassTy_field_0024DArray; source view only; no Ghidra override */
      pTVar3_mg0 = st::fn_006B0060(nullptr,reinterpret_cast<uint *>((param_1 + 0x2e)));
      pTVar3->field_0024 = reinterpret_cast<TraksClassTy_field_0024DArray *>(pTVar3_mg0);
      pTVar3_mg0->iteratorIndex = 0;
      while( true ) {
        pTVar1 = pTVar3->field_0024;
        uVar6 = pTVar1->iteratorIndex;
        if (uVar6 < pTVar1->count) {
          element_0024 = DArrayAt<TraksClassTy_field_0024Element>(pTVar1, uVar6);
          pTVar1->iteratorIndex = uVar6 + 1;
        }
        else {
          element_0024 = nullptr;
        }
        if (element_0024 == nullptr) break;
        piVar5 = PTR_00806764;
        if (*(int *)(&DAT_007c900c + element_0024->field_0000 * 0x18) != 1) {
          piVar5 = PTR_00806774;
        }
        puVar11 = nullptr;
        iVar10 = 0;
        iVar8 = 1;
        bVar7 = 0;
        uVar6 = 0xffffffff;
        text = st::fn_00404CBE((int)element_0024->field_0000);
        piVar4_mg1 = st::fn_00709AF0
                               (piVar5,CASE_1D,text,uVar6,bVar7,iVar8,iVar10,puVar11);
        element_0024->field_0036 = *piVar4_mg1;
        iVar8 = element_0024->field_0000 * 0x18;

        st::fn_006E8660
                  (g_sT3DSMAPContext_00807598,reinterpret_cast<int *>(&local_8),1,0,*(uint *)(&DAT_007c9000 + iVar8),
                   *(uint *)(&DAT_007c9004 + iVar8),*(uint *)(&DAT_007c8ff8 + iVar8),
                   *(uint *)(&DAT_007c8ffc + iVar8),0);
        element_0024->spriteHandle = local_8;

        st::fn_006E98E0
                  (g_sT3DSMAPContext_00807598,local_8,0,(int)element_0024->field_0036,
                   STField<int>(piVar4_mg1,0x21),1);
        st::fn_006EA270
                  (g_sT3DSMAPContext_00807598,element_0024->spriteHandle,0,(int)element_0024->field_0022);
        iVar8 = element_0024->field_0016;
        if (-1 < iVar8) {
          if (element_0024->field_001A == -1) {
            st::fn_006EA3E0
                      (g_sT3DSMAPContext_00807598,element_0024->spriteHandle,iVar8);
          }
          else if (element_0024->field_001A == 1) {
            st::fn_006EA460
                      (g_sT3DSMAPContext_00807598,element_0024->spriteHandle,iVar8);
          }
        }

        st::fn_006EA4E0
                  (g_sT3DSMAPContext_00807598,element_0024->spriteHandle,1,
                   *(int *)(&DAT_007c9000 + element_0024->field_0000 * 0x18) / 2,
                   *(int *)(&DAT_007c9004 + element_0024->field_0000 * 0x18) / 2);
        local_10 = (int)element_0024->field_0002;
        st::fn_006EA960
                  (g_sT3DSMAPContext_00807598,element_0024->spriteHandle,
                   (float)local_10 * _DAT_007904f8 * _DAT_007904f0,
                   (float)(int)element_0024->positionY * _DAT_007904f8 * _DAT_007904f0,
                   (float)(int)element_0024->positionZ * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);

        st::fn_006EAAA0(g_sT3DSMAPContext_00807598,element_0024->spriteHandle,0);
        element_0024->field_0024 = pTVar3->field_0020;
      }
    }
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;

  iVar9 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\grig\\traks.cpp"),0x11b,0,iVar3,st::mutable_c_string("%s"),
                             "TraksClassTy::PrepareAfterSave error");
  if (iVar9 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\grig\\traks.cpp"),0x11c);
  return;
}

// 005564C0 TraksClassTy::GetMessage
#line 4 "decomp/ST.exe/functions/005564C0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\grig\traks.cpp
   TraksClassTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00401A23|005564C0; family_names=TraksClassTy::GetMessage; ret4=5;
   direct_offsets={10:2,14:1,18:0,1c:1} */

int __thiscall st::fn_005564C0(TraksClassTy *this,STMessage *message)

{
  STMessageId SVar1;
  TraksClassTy *this_00;
  int iVar3;
  DArrayTy *pTVar3;
  int iVar4;
  int iVar5;
  InternalExceptionFrame local_58;
  TraksClassTy *local_14;
  byte *local_10;
  uint local_c;
  TraksClassTy *local_8;

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;

  iVar3 = st::fn_0072D7F0(local_58.jumpBuffer,0);
  this_00 = local_14;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_58.previous;

    iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\grig\\traks.cpp"),0x151,0,iVar3,
                               st::mutable_c_string("TraksClassTy::GetMessage error mess->id == %lX"),message->id);
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\grig\\traks.cpp"),0x152);
    return 0xffff;
  }
  local_14->field_0020 = g_playSystem_00802A38->field_00E4;

  st::fn_006E5FD0(local_14,message);
  SVar1 = message->id;
  if (SVar1 < 4) {
    if (SVar1 == MESS_SHARED_0003) {
      st::fn_004021B2(reinterpret_cast<AnonShape_005557B0_28260162 *>(this_00));
      g_traksClass_00802A7C = nullptr;
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    if (SVar1 == MESS_ID_NONE) {
      /* ST_CALLSITE[005565CC]: CALL 0x004040ca; direct=004040CA TraksClassTy::TraksExec */
      st::fn_004040CA(this_00);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    if (SVar1 == MESS_ID_CREATE) {
      local_8 = nullptr;
      if (g_cMf32_00806754 != nullptr) {
        /* ST_CALLSITE[0055654D]: CALL 0x006f2d90; direct=006F2D90 Library::Ourlib::MFAOBJ::mfAObjLoad; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/TraksClassTy; signature=__cdecl;pointer:/TraksClassTy;pointer:/cMf32;pointer:/char;/byte;/int */
        local_8 = st::pointer_boundary_cast<TraksClassTy *>(st::fn_006F2D90(g_cMf32_00806754,PTR_s_TRACKS_0079aebc,0,0));
      }
      if ((local_8 == nullptr) || (*(int *)&local_8->field_0x14 == 0)) {
        /* ST_CALLSITE[00556575]: CALL 0x006ae290; direct=006AE290 Library::DKW::TBL::DArrayCreate; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArraySpecializations/TraksClassTy_field_0024DArray; source view only; no Ghidra override */
        pTVar3 = st::fn_006AE290(nullptr,0x32,0x3c,0x32);
        this_00->field_0024 = reinterpret_cast<TraksClassTy_field_0024DArray *>(pTVar3);
        this_00->field_001C = DAT_00808754 * 0x7d;
      }
      else {
        /* ST_CALLSITE[00556566]: CALL 0x0040359e; direct=0040359E TraksClassTy::PrepareAfterSave */
        st::fn_0040359E(this_00,reinterpret_cast<ushort *>(local_8));
      }
      /* ST_CALLSITE[00556590]: CALL 0x00403701; direct=00403701 TraksClassTy::CreateDate */
      st::fn_00403701(this_00);
      if ((g_cMf32_00806754 != nullptr) && (local_8 != nullptr)) {
        st::fn_006F20E0(g_cMf32_00806754,reinterpret_cast<uint *>(&local_8));
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
    }
  }
  else if (SVar1 == MESS_SHARED_010F) {
    local_c = 0;
    /* ST_CALLSITE[0055661C]: CALL 0x00404845; direct=00404845 TraksClassTy::PrepareToSave; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/char; source view only; no Ghidra override */
    local_10 = st::fn_00404845(this_00,&local_c);
    /* ST_CALLSITE[00556638]: CALL 0x00401078; direct=00401078 STPlaySystemC::SaveObjData */
    st::fn_00401078(g_playSystem_00802A38,PTR_s_TRACKS_0079aebc,local_10,local_c,0xc);
    if (local_10 != nullptr) {
      st::fn_006AB060(&local_10);
    }
  }
  g_currentExceptionFrame = local_58.previous;
  return 0;
}

// 00556760 TraksClassTy::TraksCreate
#line 4 "decomp/ST.exe/functions/00556760/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\grig\traks.cpp
   TraksClassTy::TraksCreate */

uint __thiscall
st::fn_00556760
          (TraksClassTy *this,short param_1,short param_2,uint param_3,int param_4,int param_5,
          int param_6,short param_7,short param_8,short param_9,short param_10,short param_11,
          short param_12,int param_13,short param_14,byte param_15)

{
  VisibleClassTy *pVVar2;
  int iVar4;
  int iVar7;
  char *text;
  ushort *puVar5;
  uint uVar10;
  int iVar3;
  short sVar6;
  int *piVar7;
  int iVar8;
  short *psVar9;
  bool bVar10;
  uint uVar11;
  byte bVar12;
  int iVar13;
  uint *puVar14;
  InternalExceptionFrame local_a8;
  uint local_64;
  TraksClassTy *local_60;
  int local_5c;
  short local_58;
  short local_56;
  short local_54;
  short local_52;
  short local_50;
  short local_4e;
  short local_4c;
  short local_4a;
  short local_48;
  short local_46;
  short local_44;
  int local_42;
  short local_3e;
  ushort local_3c;
  ushort local_3a;
  ushort local_38;
  ushort local_36;
  uint local_34;
  uint local_30;
  short local_2c;
  short local_2a;
  short local_28;
  uint local_26;
  ushort local_22;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  int local_8;

  local_c = 0xffffffff;
  local_1c = 1;
  if (((param_15 & 1) == 0) && (DAT_0080731e == 0)) {
    return 0;
  }
  if (this->field_0024 == nullptr) {
    return 0;
  }
  local_10 = STBiasedDiv16(param_4, 0xc9); /* exact signed 16-bit grid-index division */
  local_18 = STBiasedDiv16(param_5, 0xc9); /* exact signed 16-bit grid-index division */
  iVar8 = STBiasedDiv16(param_6, 200); /* exact signed 16-bit grid-index division */
  local_60 = this;
  local_14 = iVar8;
  if ((param_15 & 2) != 0) goto LAB_0055693a;
  sVar6 = (short)local_18;
  if (g_sT3DSMAPContext_00807598 != nullptr) {
    if (((((short)local_10 < g_sT3DSMAPContext_00807598->field_0048) ||
         (g_sT3DSMAPContext_00807598->field_0058 < (short)local_10)) ||
        ((int)sVar6 < g_sT3DSMAPContext_00807598->field_0044)) ||
       (g_sT3DSMAPContext_00807598->field_0054 < (int)sVar6)) {
      iVar4 = 0;
    }
    else {

      iVar4 = st::fn_006DDBD0();
    }
    if (iVar4 == 0) {
      return 0;
    }
  }
  pVVar2 = g_visibleClass_00802A88;
  if (g_visibleClass_00802A88 == nullptr) goto LAB_0055693a;
  iVar8 = (short)iVar8;
  if ((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) {
LAB_00556926:
    bVar10 = true;
  }
  else {
    /* ST_CALLSITE[005568B6]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
    st::fn_00403F53
              (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,(short)local_10,
               (int)sVar6,&local_5c,&local_8);
    if ((iVar8 < 0) || (4 < iVar8)) goto LAB_00556926;
    if (((local_5c < 0) || (pVVar2->field_0030 <= local_5c)) ||
       ((g_centeredOffsets5[iVar8] + local_8 < 0 ||
        (pVVar2->field_0034 <= g_centeredOffsets5[iVar8] + local_8)))) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if ((bVar10) && (pVVar2->field_004C != nullptr)) {
      bVar10 = pVVar2->field_004C
               [local_5c + (g_centeredOffsets5[iVar8] + local_8) * pVVar2->field_0030] != 0;
    }
    else {
      bVar10 = true;
    }
  }
  if (!bVar10) {
    return 0;
  }
LAB_0055693a:
  local_a8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_a8;

  iVar7 = st::fn_0072D7F0(local_a8.jumpBuffer,0);
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_a8.previous;

    iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\grig\\traks.cpp"),0x1bc,0,iVar7,st::mutable_c_string("%s"),
                               "TraksClassTy::TraksCreate error ");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar7,0,st::mutable_c_string("E:\\__titans\\grig\\traks.cpp"),0x1bd);
    return 0xffffffff;
  }
  psVar9 = &local_58;
  for (iVar8 = 0xf; iVar8 != 0; iVar8 = iVar8 + -1) {
    psVar9[0] = 0;
    psVar9[1] = 0;
    psVar9 = psVar9 + 2;
  }
  local_4c = param_9;
  local_4a = param_10;
  local_48 = param_11;
  local_46 = param_12;
  local_44 = param_2;
  local_42 = param_13;
  local_3e = param_14;
  local_3c = (short)local_10;
  local_3a = (undefined2)local_18;
  local_58 = param_1;
  local_38 = (undefined2)local_14;
  local_56 = (short)param_4;
  local_54 = (short)param_5;
  local_52 = (short)param_6;
  local_50 = param_7;
  local_4e = param_8;
  local_36 = 0xffff;
  local_30 = g_playSystem_00802A38->field_00E4;
  if (((((param_7 == 0) && (param_8 == 0)) && (param_9 == 0)) &&
      ((param_10 == 0 && (param_11 == 0)))) && (param_12 == 0)) {
    local_1c = 0;
  }
  iVar8 = local_1c;
  piVar7 = PTR_00806764;
  if (*(int *)(&DAT_007c900c + param_1 * 0x18) != 1) {
    piVar7 = PTR_00806774;
  }
  puVar14 = nullptr;
  iVar13 = 0;
  iVar4 = 1;
  bVar12 = 0;
  uVar11 = 0xffffffff;
  local_2c = local_56;
  local_2a = local_54;
  local_28 = local_52;
  text = st::fn_00404CBE((int)param_1);
  puVar5 = st::fn_00709AF0(piVar7,CASE_1D,text,uVar11,bVar12,iVar4,iVar13,puVar14);
  local_22 = *puVar5;
  iVar4 = local_58 * 0x18;

  st::fn_006E8660
            (g_sT3DSMAPContext_00807598,reinterpret_cast<int *>(&local_c),1,0,*(uint *)(&DAT_007c9000 + iVar4),
             *(uint *)(&DAT_007c9004 + iVar4),*(uint *)(&DAT_007c8ff8 + iVar4),
             *(uint *)(&DAT_007c8ffc + iVar4),0);
  local_26 = local_c;

  st::fn_006E98E0
            (g_sT3DSMAPContext_00807598,local_c,0,(short)local_22,STField<int>(puVar5,0x21),
             1);
  if (iVar8 == 0) {
    st::fn_006EA050
              (g_sT3DSMAPContext_00807598,local_26,(int)local_44,0xffffffff,0);
  }
  st::fn_006EA270(g_sT3DSMAPContext_00807598,local_26,0,param_3);
  if (-1 < local_42) {
    if (local_3e == -1) {
      st::fn_006EA3E0(g_sT3DSMAPContext_00807598,local_26,local_42);
    }
    else if (local_3e == 1) {
      st::fn_006EA460(g_sT3DSMAPContext_00807598,local_26,local_42);
    }
  }

  st::fn_006EA4E0
            (g_sT3DSMAPContext_00807598,local_26,1,*(int *)(&DAT_007c9000 + local_58 * 0x18) / 2,
             *(int *)(&DAT_007c9004 + local_58 * 0x18) / 2);
  local_8 = (int)local_56;
  st::fn_006EA960
            (g_sT3DSMAPContext_00807598,local_26,(float)local_8 * _DAT_007904f8 * _DAT_007904f0,
             (float)(int)local_54 * _DAT_007904f8 * _DAT_007904f0,
             (float)(int)local_52 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);

  st::fn_006EAAA0(g_sT3DSMAPContext_00807598,local_26,0);
  local_36 = (undefined2)param_3;
  local_34 = local_60->field_0020;
  if (iVar8 != 0) {
    /* ST_CALLSITE[00556BFE]: CALL 0x00402d79; direct=00402D79 TraksClassTy::sub_00555D90 */
    uVar10 = st::fn_00402D79(local_60,reinterpret_cast<undefined4 *>(&local_58));
    g_currentExceptionFrame = local_a8.previous;
    return uVar10;
  }
  g_currentExceptionFrame = local_a8.previous;
  return local_64;
}

// 00556DD0 TraksClassTy::TraksCreateCollection
#line 4 "decomp/ST.exe/functions/00556DD0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\grig\traks.cpp
   TraksClassTy::TraksCreateCollection */

undefined4 __thiscall st::fn_00556DD0(TraksClassTy *this,int *param_1)

{
  int iVar1;
  TraksClassTy *this_00;
  int local_EAX_96;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  int iVar3;
  int iVar8;
  int iVar4;
  uint uVar9;
  short sVar10;
  short sVar11;
  cMf32 *pcVar12;
  char cVar13;
  int iVar14;
  InternalExceptionFrame local_7c;
  int local_38;
  TraksClassTy *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  if (((((((byte *)param_1)[0x1b] & 1) == 0) && (DAT_0080731e == 0)) ||
      (this->field_0024 == nullptr)) ||
     ((param_1 == nullptr || (PTR_00806770 == nullptr)))) {
    return 0;
  }
  local_7c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_7c;
  local_34 = this;
  local_EAX_96 = st::fn_0072D7F0(local_7c.jumpBuffer,0);
  if (local_EAX_96 == 0) {
    local_8 = st::fn_006ACF0D(param_1[4],param_1[5],param_1[6],param_1[7],param_1[8],param_1[9]);
    if (local_8 == 0) {
      iVar14 = param_1[0x18];
      local_10 = param_1[0xf];
      if (0 < iVar14) {
        iVar5 = local_10 - iVar14;
        if (iVar5 < 0) {
          iVar8 = local_34->field_001C;
        }
        else {
          iVar8 = local_34->field_001C;
        }
        uVar6 = iVar8 * 0x41c64e6d + 0x3039;
        local_34->field_001C = uVar6;
        local_10 = (uVar6 >> 0x10) % (((local_10 + iVar14) - iVar5) + 1U) + iVar5;
      }
      local_8 = param_1[0x17];
      if (local_8 < 1) {
        local_8 = param_1[0xe];
      }
      else {
        iVar14 = param_1[0xe] + local_8;
        local_8 = param_1[0xe] - local_8;
        if (local_8 < 0) {
          uVar6 = local_34->field_001C * 0x41c64e6d + 0x3039;
          local_34->field_001C = uVar6;
          local_8 = (uVar6 >> 0x10) % ((iVar14 - local_8) + 1U) + local_8;
        }
        else {
          uVar6 = local_34->field_001C * 0x41c64e6d + 0x3039;
          local_34->field_001C = uVar6;
          local_8 = (uVar6 >> 0x10) % ((iVar14 - local_8) + 1U) + local_8;
        }
      }
      local_14 = param_1[0xd];
      iVar14 = param_1[0x16];
      if (0 < iVar14) {
        iVar5 = local_14 - iVar14;
        if (iVar5 < 0) {
          iVar8 = local_34->field_001C;
        }
        else {
          iVar8 = local_34->field_001C;
        }
        uVar6 = iVar8 * 0x41c64e6d + 0x3039;
        local_34->field_001C = uVar6;
        local_14 = (uVar6 >> 0x10) % (((local_14 + iVar14) - iVar5) + 1U) + iVar5;
      }
      local_18 = param_1[0x15];
      if (local_18 < 1) {
        local_18 = param_1[0xc];
      }
      else {
        iVar14 = param_1[0xc] + local_18;
        local_18 = param_1[0xc] - local_18;
        if (local_18 < 0) {
          uVar6 = local_34->field_001C * 0x41c64e6d + 0x3039;
          local_34->field_001C = uVar6;
          local_18 = (uVar6 >> 0x10) % ((iVar14 - local_18) + 1U) + local_18;
        }
        else {
          uVar6 = local_34->field_001C * 0x41c64e6d + 0x3039;
          local_34->field_001C = uVar6;
          local_18 = (uVar6 >> 0x10) % ((iVar14 - local_18) + 1U) + local_18;
        }
      }
      iVar14 = param_1[0x14];
      if (iVar14 < 1) {
        sVar11 = (short)param_1[0xb];
      }
      else {
        iVar5 = param_1[0xb];
        local_c = iVar5 - iVar14;
        if (local_c < 0) {
          iVar8 = local_34->field_001C;
        }
        else {
          iVar8 = local_34->field_001C;
        }
        uVar6 = iVar8 * 0x41c64e6d + 0x3039;
        local_34->field_001C = uVar6;
        sVar11 = (short)((uVar6 >> 0x10) % (((iVar5 + iVar14) - local_c) + 1U)) + (short)local_c;
      }
      iVar14 = param_1[0x13];
      if (iVar14 < 1) {
        sVar10 = (short)param_1[10];
      }
      else {
        iVar5 = param_1[10];
        local_c = iVar5 - iVar14;
        if (local_c < 0) {
          iVar8 = local_34->field_001C;
        }
        else {
          iVar8 = local_34->field_001C;
        }
        uVar6 = iVar8 * 0x41c64e6d + 0x3039;
        local_34->field_001C = uVar6;
        sVar10 = (short)((uVar6 >> 0x10) % (((iVar5 + iVar14) - local_c) + 1U)) + (short)local_c;
      }
      /* ST_CALLSITE[00557082]: CALL 0x00401433; direct=00401433 TraksClassTy::TraksCreate */
      st::fn_00401433(local_34,(short)*param_1,(short)param_1[1],0,param_1[4],param_1[5],param_1[6],
                  sVar10,sVar11,(short)local_18,(short)local_14,(short)local_8,(short)local_10,
                  param_1[0x19],(short)param_1[0x1a],(byte)param_1[0x1b]);
    }
    else {
      pcVar12 = g_cMf32_00806760;
      if (*(int *)(&DAT_007c900c + *param_1 * 0x18) != 1) {
        pcVar12 = PTR_00806770;
      }
      iVar14 = 1;
      cVar13 = '\x1d';
      pcVar7 = st::fn_00404CBE(*param_1);
      local_38 = st::fn_00716E60(st::machine_word_boundary_cast<undefined4>(pcVar12),pcVar7,cVar13,iVar14);
      if (param_1[3] < 0) {
        iVar3 = st::fn_006ACF0D(0,0,0,(param_1[0x13] * local_38) / 10 +
                                   (param_1[0x16] * local_38 * local_38) / 0x14 + param_1[0x10],
                             (param_1[0x14] * local_38) / 10 +
                             (param_1[0x17] * local_38 * local_38) / 0x14 + param_1[0x11],
                             (param_1[0x15] * local_38) / 10 +
                             (param_1[0x18] * local_38 * local_38) / 0x14 + param_1[0x12]);
        if (*(int *)(&DAT_007c9008 + *param_1 * 0x18) < iVar3 / 2) {
          iVar14 = ((iVar3 / 2) * 100) / *(int *)(&DAT_007c9008 + *param_1 * 0x18);
        }
        else {
          iVar14 = 100;
        }
        param_1[3] = iVar14;
      }
      this_00 = local_34;
      local_30 = 0;
      while( true ) {
        if (param_1[3] < 1) {
          local_c = *(int *)(&DAT_007c9008 + *param_1 * 0x18);
        }
        else {
          local_c = (*(int *)(&DAT_007c9008 + *param_1 * 0x18) * 100) / param_1[3];
        }
        local_c = local_c * local_30;
        if (local_8 <= local_c) break;
        iVar14 = param_1[0x18];
        if (iVar14 < 1) {
          local_18 = param_1[0xf];
        }
        else {
          iVar5 = param_1[0xf];
          local_18 = iVar5 - iVar14;
          if (local_18 < 0) {
            iVar8 = this_00->field_001C;
          }
          else {
            iVar8 = this_00->field_001C;
          }
          uVar6 = iVar8 * 0x41c64e6d + 0x3039;
          this_00->field_001C = uVar6;
          local_18 = (uVar6 >> 0x10) % (((iVar5 + iVar14) - local_18) + 1U) + local_18;
        }
        iVar14 = param_1[0x17];
        if (iVar14 < 1) {
          local_14 = param_1[0xe];
        }
        else {
          iVar5 = param_1[0xe];
          local_14 = iVar5 - iVar14;
          if (local_14 < 0) {
            iVar8 = this_00->field_001C;
          }
          else {
            iVar8 = this_00->field_001C;
          }
          uVar6 = iVar8 * 0x41c64e6d + 0x3039;
          this_00->field_001C = uVar6;
          local_14 = (uVar6 >> 0x10) % (((iVar5 + iVar14) - local_14) + 1U) + local_14;
        }
        iVar14 = param_1[0x16];
        if (iVar14 < 1) {
          local_1c = param_1[0xd];
        }
        else {
          iVar5 = param_1[0xd];
          local_1c = iVar5 - iVar14;
          if (local_1c < 0) {
            iVar8 = this_00->field_001C;
          }
          else {
            iVar8 = this_00->field_001C;
          }
          uVar6 = iVar8 * 0x41c64e6d + 0x3039;
          this_00->field_001C = uVar6;
          local_1c = (uVar6 >> 0x10) % (((iVar5 + iVar14) - local_1c) + 1U) + local_1c;
        }
        iVar14 = param_1[0x15];
        if (iVar14 < 1) {
          local_20 = param_1[0xc];
        }
        else {
          iVar5 = param_1[0xc];
          local_20 = iVar5 - iVar14;
          if (local_20 < 0) {
            iVar8 = this_00->field_001C;
          }
          else {
            iVar8 = this_00->field_001C;
          }
          uVar6 = iVar8 * 0x41c64e6d + 0x3039;
          this_00->field_001C = uVar6;
          local_20 = (uVar6 >> 0x10) % (((iVar5 + iVar14) - local_20) + 1U) + local_20;
        }
        iVar14 = param_1[0x14];
        if (iVar14 < 1) {
          local_24 = param_1[0xb];
        }
        else {
          iVar5 = param_1[0xb];
          local_24 = iVar5 - iVar14;
          if (local_24 < 0) {
            iVar8 = this_00->field_001C;
          }
          else {
            iVar8 = this_00->field_001C;
          }
          uVar6 = iVar8 * 0x41c64e6d + 0x3039;
          this_00->field_001C = uVar6;
          local_24 = (uVar6 >> 0x10) % (((iVar5 + iVar14) - local_24) + 1U) + local_24;
        }
        iVar14 = param_1[0x13];
        if (iVar14 < 1) {
          local_28 = param_1[10];
        }
        else {
          iVar5 = param_1[10];
          local_28 = iVar5 - iVar14;
          if (local_28 < 0) {
            iVar8 = this_00->field_001C;
          }
          else {
            iVar8 = this_00->field_001C;
          }
          uVar6 = iVar8 * 0x41c64e6d + 0x3039;
          this_00->field_001C = uVar6;
          local_28 = (uVar6 >> 0x10) % (((iVar5 + iVar14) - local_28) + 1U) + local_28;
        }
        if (param_1[0x12] < 1) {
          iVar14 = local_8 - local_c;
          local_2c = (param_1[6] * iVar14 + param_1[9] * local_c) / local_8;
        }
        else {
          iVar14 = local_8 - local_c;
          iVar8 = (param_1[6] * iVar14 + param_1[9] * local_c) / local_8;
          iVar5 = param_1[0x12];
          local_2c = iVar8 - iVar5;
          uVar6 = this_00->field_001C * 0x41c64e6d + 0x3039;
          this_00->field_001C = uVar6;
          local_2c = (uVar6 >> 0x10) % (((iVar8 + iVar5) - local_2c) + 1U) + local_2c;
        }
        if (param_1[0x11] < 1) {
          iVar5 = (iVar14 * param_1[5] + param_1[8] * local_c) / local_8;
        }
        else {
          iVar8 = (iVar14 * param_1[5] + param_1[8] * local_c) / local_8;
          iVar5 = param_1[0x11];
          local_10 = iVar8 - iVar5;
          uVar6 = this_00->field_001C * 0x41c64e6d + 0x3039;
          this_00->field_001C = uVar6;
          iVar5 = (uVar6 >> 0x10) % (((iVar8 + iVar5) - local_10) + 1U) + local_10;
        }
        if (param_1[0x10] < 1) {
          iVar14 = (iVar14 * param_1[4] + local_c * param_1[7]) / local_8;
        }
        else {
          iVar8 = (iVar14 * param_1[4] + local_c * param_1[7]) / local_8;
          iVar14 = param_1[0x10];
          local_10 = iVar8 - iVar14;
          if (local_10 < 0) {
            iVar1 = this_00->field_001C;
          }
          else {
            iVar1 = this_00->field_001C;
          }
          uVar6 = iVar1 * 0x41c64e6d + 0x3039;
          this_00->field_001C = uVar6;
          iVar14 = (uVar6 >> 0x10) % (((iVar8 + iVar14) - local_10) + 1U) + local_10;
        }
        /* ST_CALLSITE[00557557]: CALL 0x00401433; direct=00401433 TraksClassTy::TraksCreate */
        st::fn_00401433(this_00,(short)*param_1,(short)param_1[1],
                    (param_1[2] * local_c * local_38) / (local_8 * 100),iVar14,iVar5,local_2c,
                    (short)local_28,(short)local_24,(short)local_20,(short)local_1c,(short)local_14,
                    (short)local_18,param_1[0x19],(short)param_1[0x1a],(byte)param_1[0x1b]);
        local_30 = local_30 + 1;
      }
    }
    g_currentExceptionFrame = local_7c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_7c.previous;
  iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\grig\\traks.cpp"),0x1f7,0,local_EAX_96,
                             st::mutable_c_string("%s"),"TraksClassTy::TraksCreateCollection error ");
  if (iVar4 == 0) {
    st::fn_006A5E40(local_EAX_96,0,st::mutable_c_string("E:\\__titans\\grig\\traks.cpp"),0x1f8);
    return 0xffffffff;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}
