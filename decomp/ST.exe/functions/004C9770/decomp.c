#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_bspr.cpp
   TLOBaseTy::LoadImages */

int __thiscall TLOBaseTy::LoadImages(TLOBaseTy *this,void *param_1)

{
  code *pcVar1;
  TLOBaseTy *this_00;
  int local_EAX_28;
  int iVar2;
  int uVar2;
  int iVar3;
  DWORD DVar4;
  uint uVar5;
  TLOBaseTy_field_0245State TVar6;
  undefined4 *this_01;
  uint uVar7;
  char cVar8;
  char *text;
  CHAR local_154 [256];
  InternalExceptionFrame local_54;
  TLOBaseTy *local_10;
  TLOBaseTy_field_0245State local_c;
  int local_8;

  local_10 = this;
  local_EAX_28 = LookupRecordByte(*(char *)&this->field_023D);
  local_8 = (local_EAX_28 & 0xffU) - 1;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  iVar2 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  this_00 = local_10;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar3 = ReportDebugMessage("E:\\__titans\\Artem\\TLO_bspr.cpp",0xbb,0,iVar2,"%s",
                               "TLOBaseTy::LoadImages error");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar2,0,"E:\\__titans\\Artem\\TLO_bspr.cpp",0xbc);
    return iVar2;
  }
  TVar6 = local_10->field_0245;
  local_c = TVar6;
  sub_004C96E0(local_10);
  if ((TVar6 == CASE_1) && (this_00->field_024D == 4)) {
    iVar2 = (local_8 + this_00->field_0235 * 3) * 0xc;
    this_00->field_05EF = *(char **)(PTR_DAT_007bb1a8 + iVar2);
    this_00->field_05F3 = *(undefined4 *)(PTR_DAT_007bb1a8 + iVar2 + 4);
    this_00->field_05F7 = *(char **)(PTR_DAT_007bb1a8 + iVar2 + 8);
  }
  if (this_00->field_05EF != (char *)0x0) {
    iVar2 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)&this_00->field_01D5,0xe,DAT_0080678c,this_00->field_05EF,0x1d);
    if (iVar2 != 0) {
      RaiseInternalException
                (iVar2,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",0x1f);
    }
  }
  if (this_00->field_05F3 == 0) {
    STT3DSprC::StopShow((STT3DSprC *)&this_00->field_01D5,0xd);
    this_00->field_01F5->field_01E8 = 0;
    this_00->field_01F5->field_01E4 = 0;
  }
  else {
    wsprintfA(local_154,"%s%1i",this_00->field_05F3,this_00->field_05C0);
    iVar2 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)&this_00->field_01D5,0xd,DAT_0080678c,local_154,0x1d);
    if (iVar2 != 0) {
      RaiseInternalException
                (iVar2,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",0x23);
    }
  }
  this_01 = &this_00->field_01D5;
  if (this_00->field_05F7 == (char *)0x0) {
    STT3DSprC::StopShow((STT3DSprC *)this_01,0xc);
    this_00->field_01F5->field_01C4 = 0;
    this_00->field_01F5->field_01C0 = 0;
  }
  else {
    iVar2 = STT3DSprC::LoadSequence((STT3DSprC *)this_01,0xc,DAT_0080678c,this_00->field_05F7,0x1d);
    if (iVar2 != 0) {
      RaiseInternalException
                (iVar2,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",0x28);
    }
    if (*(int *)(&DAT_00790c2c + this_00->field_0235 * 4) != 0) {
      iVar2 = 1;
      uVar7 = 0xc;
      uVar2 = thunk_FUN_004ad650((STT3DSprC *)this_01);
      FUN_006ea190((void *)this_00->field_0211,uVar2,uVar7,iVar2);
    }
  }
  if (*(int *)(&DAT_00791a10 + this_00->field_0235 * 4) != 0) {
    wsprintfA(local_154,"%s_cover",this_00->field_05EF);
    iVar2 = STT3DSprC::LoadSequence((STT3DSprC *)this_01,9,DAT_0080678c,local_154,0x1d);
    if (iVar2 != 0) {
      RaiseInternalException
                (iVar2,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",0x31);
    }
    if ((this_00->field_05AC != CASE_40) && (this_00->field_05AC != CASE_49)) {
      wsprintfA(local_154,"%s_cover%1i",this_00->field_05F3,this_00->field_05C0);
      iVar2 = STT3DSprC::LoadSequence((STT3DSprC *)this_01,8,DAT_0080678c,local_154,0x1d);
      if (iVar2 != 0) {
        RaiseInternalException
                  (iVar2,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",0x35);
      }
    }
    if (this_00->field_05AC == CASE_4E) {
      wsprintfA(local_154,"htec_ani_cover");
      iVar2 = STT3DSprC::LoadSequence((STT3DSprC *)this_01,7,DAT_0080678c,local_154,0x1d);
      if (iVar2 != 0) {
        RaiseInternalException
                  (iVar2,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",0x3a);
      }
    }
    if (this_00->field_05AC == CASE_72) {
      wsprintfA(local_154,"vqb_ani_cover");
      iVar2 = STT3DSprC::LoadSequence((STT3DSprC *)this_01,7,DAT_0080678c,local_154,0x1d);
      if (iVar2 != 0) {
        RaiseInternalException
                  (iVar2,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",0x3e);
      }
    }
    if (this_00->field_05AC == CASE_70) {
      wsprintfA(local_154,"glsat_ani_cover");
      iVar2 = STT3DSprC::LoadSequence((STT3DSprC *)this_01,7,DAT_0080678c,local_154,0x1d);
      if (iVar2 != 0) {
        RaiseInternalException
                  (iVar2,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",0x42);
      }
    }
    if (this_00->field_05AC == CASE_52) {
      iVar2 = LookupRecordByte(*(char *)&this_00->field_0024);
      if ((char)iVar2 == '\x01') {
        text = "traws_ani";
      }
      else {
        text = "trabo_ani";
      }
      wsprintfA(local_154,text);
      iVar2 = STT3DSprC::LoadSequence((STT3DSprC *)this_01,7,DAT_0080678c,local_154,0x1d);
      if (iVar2 != 0) {
        RaiseInternalException
                  (iVar2,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",0x46);
      }
    }
  }
  thunk_FUN_004ac660(this_01,'\r');
  iVar2 = STT3DSprC::sub_004ACD30((STT3DSprC *)this_01,'\x0e');
  iVar3 = STT3DSprC::sub_004ACD30((STT3DSprC *)this_01,'\r');
  if ((iVar3 < iVar2) &&
     (uVar7 = this_00->field_01F5->field_01E4 - this_00->field_01F5->field_01E8,
     uVar5 = (int)uVar7 >> 0x1f, 1 < (int)((uVar7 ^ uVar5) - uVar5))) {
    iVar2 = thunk_FUN_004cba10();
    if (iVar2 == 2) {
      STT3DSprC::StopShow((STT3DSprC *)this_01,0xd);
    }
    else {
      thunk_FUN_004ac700(this_01,'\r');
    }
  }
  RotateSpr(this_00,1);
  TVar6 = local_c;
  if ((local_c == CASE_1) && (this_00->field_024D == 4)) {
    TVar6 = CASE_4;
  }
  if (*(int *)(&DAT_00791b18 + (this_00->field_0235 * 3 + this_00->field_0239) * 4) != 0) {
    if (((int)TVar6 < 2) || (4 < (int)TVar6)) {
      thunk_FUN_004ad5e0((STT3DSprC *)this_01);
    }
    else {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)*this_01)();
    }
  }
  if ((((TVar6 == CASE_0) || (TVar6 == CASE_5)) || ((TVar6 == CASE_1 && (this_00->field_024D == 0)))
      ) || (TVar6 == CASE_6)) {
    STT3DSprC::sub_004ACEF0((STT3DSprC *)this_01,DAT_008073cc);
    iVar2 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)this_01,0x10,DAT_0080678c,(&PTR_s_tlo_sha_ws_007bb1b4)[local_8],
                       0x1d);
    if (iVar2 != 0) {
      RaiseInternalException
                (iVar2,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",0x6a);
    }
    thunk_FUN_004abce0(this_01,0x10,*(int *)(&DAT_0079104c + this_00->field_0235 * 4),
                       *(int *)(&DAT_0079104c + this_00->field_0235 * 4),'\0');
    STT3DSprC::SetCurFase
              ((STT3DSprC *)this_01,'\x10',*(uint *)(&DAT_0079104c + this_00->field_0235 * 4));
    DVar4 = STAppC::sub_006E51B0(this_00->field_0010);
    STT3DSprC::StartShow((STT3DSprC *)this_01,0x10,DVar4);
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
      iVar2 = STT3DSprC::LoadSequence
                        ((STT3DSprC *)this_01,4,DAT_00806774,
                         "expl_bt0" +
                         *(int *)(&DAT_0079125c + this_00->field_0235 * 4) * 0x32,0x1d);
      if (iVar2 != 0) {
        return 0xffff;
      }
      thunk_FUN_004ac700(this_01,'\x04');
      cVar8 = '\0';
      iVar2 = STT3DSprC::sub_004ACD30((STT3DSprC *)this_01,'\x04');
      thunk_FUN_004abce0(this_01,4,0,iVar2,cVar8);
      STT3DSprC::SetCurFase((STT3DSprC *)this_01,'\x04',0);
      STT3DSprC::StartShow((STT3DSprC *)this_01,4,g_playSystem_00802A38->field_00E4);
      STT3DSprC::LoadSequence
                ((STT3DSprC *)this_01,6,DAT_00806774,
                 "expmask3" + *(int *)(&DAT_0079125c + this_00->field_0235 * 4) * 0x32,0x1d
                );
      thunk_FUN_004ac700(this_01,'\x06');
      STT3DSprC::StartShow((STT3DSprC *)this_01,6,g_playSystem_00802A38->field_00E4);
      STT3DSprC::sub_004ACF20((STT3DSprC *)this_01,DAT_008032b8,0x10);
      STT3DSprC::sub_004ACFE0((STT3DSprC *)this_01,'\x06');
    }
  }
  if (this_00->field_0245 != CASE_6) goto LAB_004ca0a2;
  if (this_00->field_04BC == 4) {
    if (this_00->field_002C == 0) {
      iVar2 = STT3DSprC::LoadSequence((STT3DSprC *)this_01,4,DAT_00806764,"tlo_emb5",0x1d);
      if (iVar2 != 0) {
        iVar3 = 0x91;
LAB_004c9eda:
        RaiseInternalException
                  (iVar2,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",iVar3
                  );
      }
    }
    else if (this_00->field_002C == 1) {
      iVar2 = STT3DSprC::LoadSequence
                        ((STT3DSprC *)this_01,4,DAT_00806764,"tlo_emb5_big",0x1d);
      if (iVar2 != 0) {
        iVar3 = 0x92;
        goto LAB_004c9eda;
      }
    }
    STT3DSprC::StartShow((STT3DSprC *)this_01,4,g_playSystem_00802A38->field_00E4);
    thunk_FUN_004abce0(this_01,5,*(int *)(&DAT_007976e4 + this_00->field_002C * 0x20),
                       *(int *)(&DAT_007976e4 + this_00->field_002C * 0x20),'\0');
    STT3DSprC::SetCurFase
              ((STT3DSprC *)this_01,'\x05',*(uint *)(&DAT_007976e4 + this_00->field_002C * 0x20));
    uVar7 = g_playSystem_00802A38->field_00E4;
  }
  else {
    iVar3 = LookupRecordByte(*(char *)&this_00->field_023D);
    iVar2 = this_00->field_002C;
    if ((char)iVar3 == '\x03') {
      if (iVar2 == 0) {
        iVar2 = STT3DSprC::LoadSequence((STT3DSprC *)this_01,5,DAT_0080678c,"si_emb5",0x1d);
        if (iVar2 != 0) {
          iVar3 = 0x9e;
LAB_004c9fb1:
          RaiseInternalException
                    (iVar2,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",
                     iVar3);
        }
      }
      else if (iVar2 == 1) {
        iVar2 = STT3DSprC::LoadSequence((STT3DSprC *)this_01,5,DAT_0080678c,"si_emb6",0x1d);
        if (iVar2 != 0) {
          iVar3 = 0x9f;
          goto LAB_004c9fb1;
        }
      }
      uVar7 = g_playSystem_00802A38->field_00E4;
    }
    else {
      if (iVar2 == 0) {
        iVar2 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)this_01,5,DAT_0080678c,"tlo_emb2",0x1d);
        if (iVar2 != 0) {
          iVar3 = 0xa5;
LAB_004ca02a:
          RaiseInternalException
                    (iVar2,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",
                     iVar3);
        }
      }
      else if (iVar2 == 1) {
        iVar2 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)this_01,5,DAT_0080678c,"tlo_emb3",0x1d);
        if (iVar2 != 0) {
          iVar3 = 0xa6;
          goto LAB_004ca02a;
        }
      }
      iVar2 = this_00->field_04BC;
      iVar3 = 0;
      if (iVar2 == 1) {
        iVar3 = 1;
      }
      else if (iVar2 == 2) {
        iVar3 = 2;
      }
      else if (iVar2 == 3) {
        iVar3 = 3;
      }
      iVar2 = (iVar3 + this_00->field_002C * 4) * 8;
      thunk_FUN_004abce0(this_01,5,*(int *)(&DAT_007976c8 + iVar2),*(int *)(&DAT_007976cc + iVar2),
                         '\0');
      STT3DSprC::SetCurFase
                ((STT3DSprC *)this_01,'\x05',
                 *(uint *)(&DAT_007976c8 + (iVar3 + this_00->field_002C * 4) * 8));
      uVar7 = g_playSystem_00802A38->field_00E4;
    }
  }
  STT3DSprC::StartShow((STT3DSprC *)this_01,5,uVar7);
LAB_004ca0a2:
  sub_00415B30(this_00,*(short *)&this_00->field_05B0 * 0xc9 + 100,
               *(short *)&this_00->field_05B4 * 0xc9 + 100,
               *(short *)&this_00->field_05B8 * 200 + 100,0,0,0,1);
  g_currentExceptionFrame = local_54.previous;
  return 0;
}

