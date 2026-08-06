#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_bspr.cpp
   TLOBaseTy::LoadImages
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=int __thiscall
   LoadImages(TLOBaseTy * this) Evidence: every machine RET purges exactly 0 explicit stack bytes;
   current signature describes 4; removed trailing parameter slots have no listing references;
   ret_sites=004C9DB7 RET | 004CA0F2 RET | 004CA139 RET */

int __thiscall TLOBaseTy::LoadImages(TLOBaseTy *this)

{
  TLOBaseTy *this_00;
  byte bVar2;
  int local_EAX_28;
  int iVar3;
  int uVar2;
  int iVar4;
  DWORD DVar5;
  uint uVar6;
  TLOBaseTy_field_0245State TVar7;
  undefined4 *this_01;
  uint uVar8;
  char cVar9;
  char *text;
  CHAR local_154 [256];
  InternalExceptionFrame local_54;
  TLOBaseTy *local_10;
  TLOBaseTy_field_0245State local_c;
  int local_8;

  local_10 = this;
  local_EAX_28 = LookupRecordByte(*(char *)&this->field_023D);
  local_EAX_28 = (int)(byte)local_EAX_28;
  local_8 = local_EAX_28 + -1;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  iVar3 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  this_00 = local_10;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar4 = ReportDebugMessage("E:\\__titans\\Artem\\TLO_bspr.cpp",0xbb,0,iVar3,"%s",
                               "TLOBaseTy::LoadImages error");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\Artem\\TLO_bspr.cpp",0xbc);
    return iVar3;
  }
  TVar7 = local_10->field_0245;
  local_c = TVar7;
  sub_004C96E0(local_10);
  if ((TVar7 == CASE_1) && (this_00->field_024D == 4)) {
    iVar3 = (local_8 + this_00->field_0235 * 3) * 0xc;
    this_00->field_05EF = *(char **)(PTR_DAT_007bb1a8 + iVar3);
    this_00->field_05F3 = *(undefined4 *)(PTR_DAT_007bb1a8 + iVar3 + 4);
    this_00->field_05F7 = *(char **)(PTR_DAT_007bb1a8 + iVar3 + 8);
  }
  if (this_00->field_05EF != nullptr) {
    iVar3 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)&this_00->field_01D5,0xe,PTR_0080678c,this_00->field_05EF,0x1d);
    if (iVar3 != 0) {
      RaiseInternalException
                (iVar3,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",0x1f);
    }
  }
  if (this_00->field_05F3 == 0) {
    STT3DSprC::StopShow((STT3DSprC *)&this_00->field_01D5,0xd);
    this_00->field_01F5->field_01E8 = 0;
    this_00->field_01F5->field_01E4 = 0;
  }
  else {
    wsprintfA(local_154,"%s%1i",this_00->field_05F3,this_00->field_05C0);
    iVar3 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)&this_00->field_01D5,0xd,PTR_0080678c,local_154,0x1d);
    if (iVar3 != 0) {
      RaiseInternalException
                (iVar3,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",0x23);
    }
  }
  this_01 = &this_00->field_01D5;
  if (this_00->field_05F7 == nullptr) {
    STT3DSprC::StopShow((STT3DSprC *)this_01,0xc);
    this_00->field_01F5->field_01C4 = 0;
    this_00->field_01F5->field_01C0 = 0;
  }
  else {
    iVar3 = STT3DSprC::LoadSequence((STT3DSprC *)this_01,0xc,PTR_0080678c,this_00->field_05F7,0x1d);
    if (iVar3 != 0) {
      RaiseInternalException
                (iVar3,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",0x28);
    }
    if (*(int *)(&DAT_00790c2c + this_00->field_0235 * 4) != 0) {
      iVar3 = 1;
      uVar8 = 0xc;
      uVar2 = thunk_FUN_004ad650((STT3DSprC *)this_01);
      FUN_006ea190((void *)this_00->field_0211,uVar2,uVar8,iVar3);
    }
  }
  if (*(int *)(&DAT_00791a10 + this_00->field_0235 * 4) != 0) {
    wsprintfA(local_154,"%s_cover",this_00->field_05EF);
    iVar3 = STT3DSprC::LoadSequence((STT3DSprC *)this_01,9,PTR_0080678c,local_154,0x1d);
    if (iVar3 != 0) {
      RaiseInternalException
                (iVar3,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",0x31);
    }
    if ((this_00->field_05AC != CASE_40) && (this_00->field_05AC != CASE_49)) {
      wsprintfA(local_154,"%s_cover%1i",this_00->field_05F3,this_00->field_05C0);
      iVar3 = STT3DSprC::LoadSequence((STT3DSprC *)this_01,8,PTR_0080678c,local_154,0x1d);
      if (iVar3 != 0) {
        RaiseInternalException
                  (iVar3,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",0x35);
      }
    }
    if (this_00->field_05AC == CASE_4E) {
      wsprintfA(local_154,"htec_ani_cover");
      iVar3 = STT3DSprC::LoadSequence((STT3DSprC *)this_01,7,PTR_0080678c,local_154,0x1d);
      if (iVar3 != 0) {
        RaiseInternalException
                  (iVar3,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",0x3a);
      }
    }
    if (this_00->field_05AC == CASE_72) {
      wsprintfA(local_154,"vqb_ani_cover");
      iVar3 = STT3DSprC::LoadSequence((STT3DSprC *)this_01,7,PTR_0080678c,local_154,0x1d);
      if (iVar3 != 0) {
        RaiseInternalException
                  (iVar3,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",0x3e);
      }
    }
    if (this_00->field_05AC == CASE_70) {
      wsprintfA(local_154,"glsat_ani_cover");
      iVar3 = STT3DSprC::LoadSequence((STT3DSprC *)this_01,7,PTR_0080678c,local_154,0x1d);
      if (iVar3 != 0) {
        RaiseInternalException
                  (iVar3,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",0x42);
      }
    }
    if (this_00->field_05AC == CASE_52) {
      bVar2 = LookupRecordByte(*(char *)&this_00->field_0024);
      if (bVar2 == 1) {
        text = "traws_ani";
      }
      else {
        text = "trabo_ani";
      }
      wsprintfA(local_154,text);
      iVar3 = STT3DSprC::LoadSequence((STT3DSprC *)this_01,7,PTR_0080678c,local_154,0x1d);
      if (iVar3 != 0) {
        RaiseInternalException
                  (iVar3,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",0x46);
      }
    }
  }
  thunk_FUN_004ac660(this_01,'\r');
  iVar3 = STT3DSprC::sub_004ACD30((STT3DSprC *)this_01,'\x0e');
  iVar4 = STT3DSprC::sub_004ACD30((STT3DSprC *)this_01,'\r');
  if ((iVar4 < iVar3) &&
     (uVar8 = this_00->field_01F5->field_01E4 - this_00->field_01F5->field_01E8,
     uVar6 = (int)uVar8 >> 0x1f, 1 < (int)((uVar8 ^ uVar6) - uVar6))) {
    iVar3 = thunk_FUN_004cba10();
    if (iVar3 == 2) {
      STT3DSprC::StopShow((STT3DSprC *)this_01,0xd);
    }
    else {
      thunk_FUN_004ac700(this_01,'\r');
    }
  }
  RotateSpr(this_00,1);
  TVar7 = local_c;
  if ((local_c == CASE_1) && (this_00->field_024D == 4)) {
    TVar7 = CASE_4;
  }
  if (*(int *)(&DAT_00791b18 + (this_00->field_0235 * 3 + this_00->field_0239) * 4) != 0) {
    if (((int)TVar7 < 2) || (4 < (int)TVar7)) {
      thunk_FUN_004ad5e0((STT3DSprC *)this_01);
    }
    else {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)*this_01)();
    }
  }
  if ((((TVar7 == CASE_0) || (TVar7 == CASE_5)) || ((TVar7 == CASE_1 && (this_00->field_024D == 0)))
      ) || (TVar7 == CASE_6)) {
    STT3DSprC::sub_004ACEF0((STT3DSprC *)this_01,PTR_008073cc);
    iVar3 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)this_01,0x10,PTR_0080678c,(&PTR_s_tlo_sha_ws_007bb1b4)[local_8],
                       0x1d);
    if (iVar3 != 0) {
      RaiseInternalException
                (iVar3,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",0x6a);
    }
    thunk_FUN_004abce0(this_01,0x10,*(int *)(&DAT_0079104c + this_00->field_0235 * 4),
                       *(int *)(&DAT_0079104c + this_00->field_0235 * 4),'\0');
    STT3DSprC::SetCurFase
              ((STT3DSprC *)this_01,'\x10',*(uint *)(&DAT_0079104c + this_00->field_0235 * 4));
    DVar5 = STAppC::sub_006E51B0(this_00->field_0010);
    STT3DSprC::StartShow((STT3DSprC *)this_01,0x10,DVar5);
    STT3DSprC::sub_004ACF50((STT3DSprC *)this_01,'\x10');
  }
  else {
    STT3DSprC::sub_004ACF90((STT3DSprC *)this_01,'\x10');
    STT3DSprC::StopShow((STT3DSprC *)this_01,0x10);
  }
  if (this_00->field_0245 == CASE_1) {
    if (this_00->field_05DF == 5) {
      this_00->field_04C8 = 0;
      this_00->field_04CC = g_playSystem_00802A38->field_00E4;
      STT3DSprC::sub_004ACE60((STT3DSprC *)this_01,'\x0e');
      STT3DSprC::sub_004ACE60((STT3DSprC *)this_01,'\r');
      STT3DSprC::sub_004ACE60((STT3DSprC *)this_01,'\f');
      STT3DSprC::sub_004ACE60((STT3DSprC *)this_01,'\v');
      STT3DSprC::sub_004ACE60((STT3DSprC *)this_01,'\t');
      STT3DSprC::sub_004ACE60((STT3DSprC *)this_01,'\b');
      STT3DSprC::sub_004ACE60((STT3DSprC *)this_01,'\a');
      STT3DSprC::sub_004ACE30
                ((STT3DSprC *)this_01,PTR_00806724->entries[this_00->field_04C8],
                 (int)PTR_00806724->field_002C);
    }
    else {
      iVar3 = STT3DSprC::LoadSequence
                        ((STT3DSprC *)this_01,4,PTR_00806774,
                         "expl_bt0" +
                         *(int *)(&DAT_0079125c + this_00->field_0235 * 4) * 0x32,0x1d);
      if (iVar3 != 0) {
        return 0xffff;
      }
      thunk_FUN_004ac700(this_01,'\x04');
      cVar9 = '\0';
      iVar3 = STT3DSprC::sub_004ACD30((STT3DSprC *)this_01,'\x04');
      thunk_FUN_004abce0(this_01,4,0,iVar3,cVar9);
      STT3DSprC::SetCurFase((STT3DSprC *)this_01,'\x04',0);
      STT3DSprC::StartShow((STT3DSprC *)this_01,4,g_playSystem_00802A38->field_00E4);
      STT3DSprC::LoadSequence
                ((STT3DSprC *)this_01,6,PTR_00806774,
                 "expmask3" + *(int *)(&DAT_0079125c + this_00->field_0235 * 4) * 0x32,0x1d
                );
      thunk_FUN_004ac700(this_01,'\x06');
      STT3DSprC::StartShow((STT3DSprC *)this_01,6,g_playSystem_00802A38->field_00E4);
      STT3DSprC::sub_004ACF20((STT3DSprC *)this_01,PTR_008032b8,0x10);
      STT3DSprC::sub_004ACFE0((STT3DSprC *)this_01,'\x06');
    }
  }
  if (this_00->field_0245 != CASE_6) goto LAB_004ca0a2;
  if (this_00->field_04BC == 4) {
    if (this_00->field_002C == 0) {
      iVar3 = STT3DSprC::LoadSequence((STT3DSprC *)this_01,4,PTR_00806764,"tlo_emb5",0x1d);
      if (iVar3 != 0) {
        iVar4 = 0x91;
LAB_004c9eda:
        RaiseInternalException
                  (iVar3,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",iVar4
                  );
      }
    }
    else if (this_00->field_002C == 1) {
      iVar3 = STT3DSprC::LoadSequence
                        ((STT3DSprC *)this_01,4,PTR_00806764,"tlo_emb5_big",0x1d);
      if (iVar3 != 0) {
        iVar4 = 0x92;
        goto LAB_004c9eda;
      }
    }
    STT3DSprC::StartShow((STT3DSprC *)this_01,4,g_playSystem_00802A38->field_00E4);
    thunk_FUN_004abce0(this_01,5,*(int *)(&DAT_007976e4 + this_00->field_002C * 0x20),
                       *(int *)(&DAT_007976e4 + this_00->field_002C * 0x20),'\0');
    STT3DSprC::SetCurFase
              ((STT3DSprC *)this_01,'\x05',*(uint *)(&DAT_007976e4 + this_00->field_002C * 0x20));
    uVar8 = g_playSystem_00802A38->field_00E4;
  }
  else {
    bVar2 = LookupRecordByte(*(char *)&this_00->field_023D);
    iVar3 = this_00->field_002C;
    if (bVar2 == 3) {
      if (iVar3 == 0) {
        iVar3 = STT3DSprC::LoadSequence((STT3DSprC *)this_01,5,PTR_0080678c,"si_emb5",0x1d);
        if (iVar3 != 0) {
          iVar4 = 0x9e;
LAB_004c9fb1:
          RaiseInternalException
                    (iVar3,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",
                     iVar4);
        }
      }
      else if (iVar3 == 1) {
        iVar3 = STT3DSprC::LoadSequence((STT3DSprC *)this_01,5,PTR_0080678c,"si_emb6",0x1d);
        if (iVar3 != 0) {
          iVar4 = 0x9f;
          goto LAB_004c9fb1;
        }
      }
      uVar8 = g_playSystem_00802A38->field_00E4;
    }
    else {
      if (iVar3 == 0) {
        iVar3 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)this_01,5,PTR_0080678c,"tlo_emb2",0x1d);
        if (iVar3 != 0) {
          iVar4 = 0xa5;
LAB_004ca02a:
          RaiseInternalException
                    (iVar3,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",
                     iVar4);
        }
      }
      else if (iVar3 == 1) {
        iVar3 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)this_01,5,PTR_0080678c,"tlo_emb3",0x1d);
        if (iVar3 != 0) {
          iVar4 = 0xa6;
          goto LAB_004ca02a;
        }
      }
      iVar3 = this_00->field_04BC;
      iVar4 = 0;
      if (iVar3 == 1) {
        iVar4 = 1;
      }
      else if (iVar3 == 2) {
        iVar4 = 2;
      }
      else if (iVar3 == 3) {
        iVar4 = 3;
      }
      iVar3 = (iVar4 + this_00->field_002C * 4) * 8;
      thunk_FUN_004abce0(this_01,5,*(int *)(&DAT_007976c8 + iVar3),*(int *)(&DAT_007976cc + iVar3),
                         '\0');
      STT3DSprC::SetCurFase
                ((STT3DSprC *)this_01,'\x05',
                 *(uint *)(&DAT_007976c8 + (iVar4 + this_00->field_002C * 4) * 8));
      uVar8 = g_playSystem_00802A38->field_00E4;
    }
  }
  STT3DSprC::StartShow((STT3DSprC *)this_01,5,uVar8);
LAB_004ca0a2:
  sub_00415B30(this_00,*(short *)&this_00->field_05B0 * 0xc9 + 100,
               *(short *)&this_00->field_05B4 * 0xc9 + 100,
               *(short *)&this_00->field_05B8 * 200 + 100,0,0,0,1);
  g_currentExceptionFrame = local_54.previous;
  return 0;
}

