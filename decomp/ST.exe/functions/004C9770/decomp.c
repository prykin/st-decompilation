#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_bspr.cpp
   TLOBaseTy::LoadImages
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=int __thiscall
   LoadImages(TLOBaseTy * this) Evidence: every machine RET purges exactly 0 explicit stack bytes;
   current signature describes 4; removed trailing parameter slots have no listing references;
   ret_sites=004C9DB7 RET | 004CA0F2 RET | 004CA139 RET

   [STSwitchEnumApplier] Switch target field_0245 uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_0245State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_32=50;CASE_34=52;CASE_35=53;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3B=59;CASE_40=64;CASE_41=65;CASE_48=72;CASE_49=73;CASE_4C=76;CASE_4F=79;CASE_50=80;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_63=99;CASE_64=100;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_73=115;CASE_FFFFFFFF=4294967295
    */

int __thiscall TLOBaseTy::LoadImages(TLOBaseTy *this)

{
  TLOBaseTy *this_00;
  byte bVar2;
  int local_EAX_28;
  int iVar3;
  int iVar5;
  int uVar2;
  int iVar6;
  int iVar4;
  uint uVar7;
  TLOBaseTy_field_0245State TVar8;
  undefined4 *this_01;
  uint uVar9;
  char cVar10;
  char *text;
  CHAR local_154 [256];
  InternalExceptionFrame local_54;
  TLOBaseTy *local_10;
  TLOBaseTy_field_0245State local_c;
  int local_8;

  local_10 = this;
  /* ST_CALLSITE[004C978C]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  local_EAX_28 = LookupRecordByte((char)this->field_023D);
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
  TVar8 = local_10->field_0245;
  local_c = TVar8;
  /* ST_CALLSITE[004C97D2]: CALL 0x00404a11; direct=00404A11 TLOBaseTy::sub_004C96E0 */
  sub_004C96E0(local_10);
  if ((TVar8 == CASE_1) && (this_00->field_024D == 4)) {
    iVar5 = (local_8 + this_00->field_0235 * 3) * 0xc;
    this_00->field_05EF = *(char **)(PTR_DAT_007bb1a8 + iVar5);
    this_00->field_05F3 = *(undefined4 *)(PTR_DAT_007bb1a8 + iVar5 + 4);
    this_00->field_05F7 = *(char **)(PTR_DAT_007bb1a8 + iVar5 + 8);
  }
  if (this_00->field_05EF != nullptr) {
    /* ST_CALLSITE[004C9843]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    iVar5 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)&this_00->field_01D5,0xe,PTR_0080678c,this_00->field_05EF,
                       CASE_1D);
    if (iVar5 != 0) {
      RaiseInternalException
                (iVar5,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",0x1f);
    }
  }
  if (this_00->field_05F3 == 0) {
    /* ST_CALLSITE[004C98CC]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
    STT3DSprC::StopShow((STT3DSprC *)&this_00->field_01D5,0xd);
    this_00->field_01F5->field_01E8 = 0;
    this_00->field_01F5->field_01E4 = 0;
  }
  else {
    /* ST_CALLSITE[004C9884]: CALL EBX */
    wsprintfA(local_154,"%s%1i",this_00->field_05F3,this_00->field_05C0);
    /* ST_CALLSITE[004C98A3]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    iVar5 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)&this_00->field_01D5,0xd,PTR_0080678c,local_154,CASE_1D);
    if (iVar5 != 0) {
      RaiseInternalException
                (iVar5,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",0x23);
    }
  }
  this_01 = &this_00->field_01D5;
  if (this_00->field_05F7 == nullptr) {
    /* ST_CALLSITE[004C994E]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
    STT3DSprC::StopShow((STT3DSprC *)this_01,0xc);
    this_00->field_01F5->field_01C4 = 0;
    this_00->field_01F5->field_01C0 = 0;
  }
  else {
    /* ST_CALLSITE[004C9903]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    iVar5 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)this_01,0xc,PTR_0080678c,this_00->field_05F7,CASE_1D);
    if (iVar5 != 0) {
      RaiseInternalException
                (iVar5,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",0x28);
    }
    if (*(int *)(&DAT_00790c2c + this_00->field_0235 * 4) != 0) {
      iVar5 = 1;
      uVar9 = 0xc;

      uVar2 = thunk_FUN_004ad650((STT3DSprC *)this_01);

      FUN_006ea190(this_00->field_0211,uVar2,uVar9,iVar5);
    }
  }
  if (*(int *)(&DAT_00791a10 + this_00->field_0235 * 4) != 0) {
    /* ST_CALLSITE[004C9995]: CALL EBX */
    wsprintfA(local_154,"%s_cover",this_00->field_05EF);
    /* ST_CALLSITE[004C99AE]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    iVar5 = STT3DSprC::LoadSequence((STT3DSprC *)this_01,9,PTR_0080678c,local_154,CASE_1D);
    if (iVar5 != 0) {
      RaiseInternalException
                (iVar5,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",0x31);
    }
    if ((this_00->field_05AC != CASE_40) && (this_00->field_05AC != CASE_49)) {
      /* ST_CALLSITE[004C99F5]: CALL EBX */
      wsprintfA(local_154,"%s_cover%1i",this_00->field_05F3,this_00->field_05C0);
      /* ST_CALLSITE[004C9A0E]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
      iVar5 = STT3DSprC::LoadSequence((STT3DSprC *)this_01,8,PTR_0080678c,local_154,CASE_1D);
      if (iVar5 != 0) {
        RaiseInternalException
                  (iVar5,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",0x35);
      }
    }
    if (this_00->field_05AC == CASE_4E) {
      /* ST_CALLSITE[004C9A40]: CALL EBX */
      wsprintfA(local_154,"htec_ani_cover");
      /* ST_CALLSITE[004C9A59]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
      iVar5 = STT3DSprC::LoadSequence((STT3DSprC *)this_01,7,PTR_0080678c,local_154,CASE_1D);
      if (iVar5 != 0) {
        RaiseInternalException
                  (iVar5,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",0x3a);
      }
    }
    if (this_00->field_05AC == CASE_72) {
      /* ST_CALLSITE[004C9A8B]: CALL EBX */
      wsprintfA(local_154,"vqb_ani_cover");
      /* ST_CALLSITE[004C9AA4]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
      iVar5 = STT3DSprC::LoadSequence((STT3DSprC *)this_01,7,PTR_0080678c,local_154,CASE_1D);
      if (iVar5 != 0) {
        RaiseInternalException
                  (iVar5,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",0x3e);
      }
    }
    if (this_00->field_05AC == CASE_70) {
      /* ST_CALLSITE[004C9AD6]: CALL EBX */
      wsprintfA(local_154,"glsat_ani_cover");
      /* ST_CALLSITE[004C9AEF]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
      iVar5 = STT3DSprC::LoadSequence((STT3DSprC *)this_01,7,PTR_0080678c,local_154,CASE_1D);
      if (iVar5 != 0) {
        RaiseInternalException
                  (iVar5,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",0x42);
      }
    }
    if (this_00->field_05AC == CASE_52) {
      /* ST_CALLSITE[004C9B1F]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      bVar2 = LookupRecordByte(*(char *)&this_00->field_0024);
      if (bVar2 == 1) {
        text = "traws_ani";
      }
      else {
        text = "trabo_ani";
      }
      /* ST_CALLSITE[004C9B42]: CALL EBX */
      wsprintfA(local_154,text);
      /* ST_CALLSITE[004C9B5A]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
      iVar5 = STT3DSprC::LoadSequence((STT3DSprC *)this_01,7,PTR_0080678c,local_154,CASE_1D);
      if (iVar5 != 0) {
        RaiseInternalException
                  (iVar5,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",0x46);
      }
    }
  }

  thunk_FUN_004ac660(this_01,'\r');
  /* ST_CALLSITE[004C9B84]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
  iVar5 = STT3DSprC::sub_004ACD30((STT3DSprC *)this_01,'\x0e');
  /* ST_CALLSITE[004C9B8F]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
  iVar6 = STT3DSprC::sub_004ACD30((STT3DSprC *)this_01,'\r');
  if ((iVar6 < iVar5) &&
     (uVar9 = this_00->field_01F5->field_01E4 - this_00->field_01F5->field_01E8,
     uVar7 = (int)uVar9 >> 0x1f, 1 < (int)((uVar9 ^ uVar7) - uVar7))) {

    iVar5 = thunk_FUN_004cba10();
    if (iVar5 == 2) {
      /* ST_CALLSITE[004C9BC8]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
      STT3DSprC::StopShow((STT3DSprC *)this_01,0xd);
    }
    else {

      thunk_FUN_004ac700(this_01,'\r');
    }
  }
  /* ST_CALLSITE[004C9BD8]: CALL 0x00402cf7; direct=00402CF7 TLOBaseTy::RotateSpr */
  RotateSpr(this_00,1);
  TVar8 = local_c;
  if ((local_c == CASE_1) && (this_00->field_024D == 4)) {
    TVar8 = CASE_4;
  }
  if (*(int *)(&DAT_00791b18 + (this_00->field_0235 * 3 + this_00->field_0239) * 4) != 0) {
    if (((int)TVar8 < 2) || (4 < (int)TVar8)) {
      thunk_FUN_004ad5e0((STT3DSprC *)this_01);
    }
    else {
      /* ST_CALLSITE[004C9C1D]: CALL dword ptr [EAX] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)*this_01)();
    }
  }
  if ((((TVar8 == CASE_0) || (TVar8 == CASE_5)) || ((TVar8 == CASE_1 && (this_00->field_024D == 0)))
      ) || (TVar8 == CASE_6)) {
    /* ST_CALLSITE[004C9C65]: CALL 0x00405ca9; direct=00405CA9 STT3DSprC::sub_004ACEF0 */
    STT3DSprC::sub_004ACEF0((STT3DSprC *)this_01,PTR_008073cc);
    /* ST_CALLSITE[004C9C82]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    iVar5 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)this_01,0x10,PTR_0080678c,(&PTR_s_tlo_sha_ws_007bb1b4)[local_8],
                       CASE_1D);
    if (iVar5 != 0) {
      RaiseInternalException
                (iVar5,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",0x6a);
    }

    thunk_FUN_004abce0(this_01,0x10,*(int *)(&DAT_0079104c + this_00->field_0235 * 4),
                       *(int *)(&DAT_0079104c + this_00->field_0235 * 4),'\0');
    /* ST_CALLSITE[004C9CCB]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
    STT3DSprC::SetCurFase
              ((STT3DSprC *)this_01,'\x10',*(uint *)(&DAT_0079104c + this_00->field_0235 * 4));

    uVar9 = STAppC::sub_006E51B0(this_00->field_0010);
    /* ST_CALLSITE[004C9CDD]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    STT3DSprC::StartShow((STT3DSprC *)this_01,0x10,uVar9);
    /* ST_CALLSITE[004C9CE6]: CALL 0x00403afd; direct=00403AFD STT3DSprC::sub_004ACF50 */
    STT3DSprC::sub_004ACF50((STT3DSprC *)this_01,'\x10');
  }
  else {
    /* ST_CALLSITE[004C9C49]: CALL 0x0040461f; direct=0040461F STT3DSprC::sub_004ACF90 */
    STT3DSprC::sub_004ACF90((STT3DSprC *)this_01,'\x10');
    /* ST_CALLSITE[004C9C52]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
    STT3DSprC::StopShow((STT3DSprC *)this_01,0x10);
  }
  if (this_00->field_0245 == CASE_1) {
    if (this_00->field_05DF == 5) {
      this_00->field_04C8 = 0;
      this_00->field_04CC = g_playSystem_00802A38->field_00E4;
      /* ST_CALLSITE[004C9D20]: CALL 0x00401bae; direct=00401BAE STT3DSprC::sub_004ACE60 */
      STT3DSprC::sub_004ACE60((STT3DSprC *)this_01,'\x0e');
      /* ST_CALLSITE[004C9D29]: CALL 0x00401bae; direct=00401BAE STT3DSprC::sub_004ACE60 */
      STT3DSprC::sub_004ACE60((STT3DSprC *)this_01,'\r');
      /* ST_CALLSITE[004C9D32]: CALL 0x00401bae; direct=00401BAE STT3DSprC::sub_004ACE60 */
      STT3DSprC::sub_004ACE60((STT3DSprC *)this_01,'\f');
      /* ST_CALLSITE[004C9D3B]: CALL 0x00401bae; direct=00401BAE STT3DSprC::sub_004ACE60 */
      STT3DSprC::sub_004ACE60((STT3DSprC *)this_01,'\v');
      /* ST_CALLSITE[004C9D44]: CALL 0x00401bae; direct=00401BAE STT3DSprC::sub_004ACE60 */
      STT3DSprC::sub_004ACE60((STT3DSprC *)this_01,'\t');
      /* ST_CALLSITE[004C9D4D]: CALL 0x00401bae; direct=00401BAE STT3DSprC::sub_004ACE60 */
      STT3DSprC::sub_004ACE60((STT3DSprC *)this_01,'\b');
      /* ST_CALLSITE[004C9D56]: CALL 0x00401bae; direct=00401BAE STT3DSprC::sub_004ACE60 */
      STT3DSprC::sub_004ACE60((STT3DSprC *)this_01,'\a');
      /* ST_CALLSITE[004C9D72]: CALL 0x0040116d; direct=0040116D STT3DSprC::sub_004ACE30 */
      STT3DSprC::sub_004ACE30
                ((STT3DSprC *)this_01,PTR_00806724->entries[this_00->field_04C8],
                 (int)PTR_00806724->field_002C);
    }
    else {
      /* ST_CALLSITE[004C9DA3]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
      iVar5 = STT3DSprC::LoadSequence
                        ((STT3DSprC *)this_01,4,PTR_00806774,
                         "expl_bt0" +
                         *(int *)(&DAT_0079125c + this_00->field_0235 * 4) * 0x32,CASE_1D);
      if (iVar5 != 0) {
        return 0xffff;
      }

      thunk_FUN_004ac700(this_01,'\x04');
      cVar10 = '\0';
      /* ST_CALLSITE[004C9DC7]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
      iVar5 = STT3DSprC::sub_004ACD30((STT3DSprC *)this_01,'\x04');

      thunk_FUN_004abce0(this_01,4,0,iVar5,cVar10);
      /* ST_CALLSITE[004C9DDE]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
      STT3DSprC::SetCurFase((STT3DSprC *)this_01,'\x04',0);
      /* ST_CALLSITE[004C9DF4]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
      STT3DSprC::StartShow((STT3DSprC *)this_01,4,g_playSystem_00802A38->field_00E4);
      /* ST_CALLSITE[004C9E20]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
      STT3DSprC::LoadSequence
                ((STT3DSprC *)this_01,6,PTR_00806774,
                 "expmask3" + *(int *)(&DAT_0079125c + this_00->field_0235 * 4) * 0x32,
                 CASE_1D);

      thunk_FUN_004ac700(this_01,'\x06');
      /* ST_CALLSITE[004C9E3F]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
      STT3DSprC::StartShow((STT3DSprC *)this_01,6,g_playSystem_00802A38->field_00E4);
      /* ST_CALLSITE[004C9E4E]: CALL 0x004044ee; direct=004044EE STT3DSprC::sub_004ACF20 */
      STT3DSprC::sub_004ACF20((STT3DSprC *)this_01,PTR_008032b8,0x10);
      /* ST_CALLSITE[004C9E57]: CALL 0x00403233; direct=00403233 STT3DSprC::sub_004ACFE0 */
      STT3DSprC::sub_004ACFE0((STT3DSprC *)this_01,'\x06');
    }
  }
  if (this_00->field_0245 != CASE_6) goto LAB_004ca0a2;
  if (this_00->field_04BC == 4) {
    if (this_00->field_002C == 0) {
      /* ST_CALLSITE[004C9EC0]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
      iVar5 = STT3DSprC::LoadSequence
                        ((STT3DSprC *)this_01,4,PTR_00806764,"tlo_emb5",CASE_1D);
      if (iVar5 != 0) {
        iVar6 = 0x91;
LAB_004c9eda:
        RaiseInternalException
                  (iVar5,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",iVar6
                  );
      }
    }
    else if (this_00->field_002C == 1) {
      /* ST_CALLSITE[004C9E93]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
      iVar5 = STT3DSprC::LoadSequence
                        ((STT3DSprC *)this_01,4,PTR_00806764,"tlo_emb5_big",CASE_1D);
      if (iVar5 != 0) {
        iVar6 = 0x92;
        goto LAB_004c9eda;
      }
    }
    /* ST_CALLSITE[004C9EF1]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    STT3DSprC::StartShow((STT3DSprC *)this_01,4,g_playSystem_00802A38->field_00E4);

    thunk_FUN_004abce0(this_01,5,*(int *)(&DAT_007976e4 + this_00->field_002C * 0x20),
                       *(int *)(&DAT_007976e4 + this_00->field_002C * 0x20),'\0');
    /* ST_CALLSITE[004C9F20]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
    STT3DSprC::SetCurFase
              ((STT3DSprC *)this_01,'\x05',*(uint *)(&DAT_007976e4 + this_00->field_002C * 0x20));
    uVar9 = g_playSystem_00802A38->field_00E4;
  }
  else {
    /* ST_CALLSITE[004C9F44]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
    bVar2 = LookupRecordByte((char)this_00->field_023D);
    iVar5 = this_00->field_002C;
    if (bVar2 == 3) {
      if (iVar5 == 0) {
        /* ST_CALLSITE[004C9F97]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
        iVar5 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)this_01,5,PTR_0080678c,"si_emb5",CASE_1D);
        if (iVar5 != 0) {
          iVar6 = 0x9e;
LAB_004c9fb1:
          RaiseInternalException
                    (iVar5,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",
                     iVar6);
        }
      }
      else if (iVar5 == 1) {
        /* ST_CALLSITE[004C9F6A]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
        iVar5 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)this_01,5,PTR_0080678c,"si_emb6",CASE_1D);
        if (iVar5 != 0) {
          iVar6 = 0x9f;
          goto LAB_004c9fb1;
        }
      }
      uVar9 = g_playSystem_00802A38->field_00E4;
    }
    else {
      if (iVar5 == 0) {
        /* ST_CALLSITE[004CA010]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
        iVar5 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)this_01,5,PTR_0080678c,"tlo_emb2",CASE_1D);
        if (iVar5 != 0) {
          iVar6 = 0xa5;
LAB_004ca02a:
          RaiseInternalException
                    (iVar5,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",
                     iVar6);
        }
      }
      else if (iVar5 == 1) {
        /* ST_CALLSITE[004C9FE3]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
        iVar5 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)this_01,5,PTR_0080678c,"tlo_emb3",CASE_1D);
        if (iVar5 != 0) {
          iVar6 = 0xa6;
          goto LAB_004ca02a;
        }
      }
      iVar5 = this_00->field_04BC;
      iVar6 = 0;
      if (iVar5 == 1) {
        iVar6 = 1;
      }
      else if (iVar5 == 2) {
        iVar6 = 2;
      }
      else if (iVar5 == 3) {
        iVar6 = 3;
      }
      iVar5 = (iVar6 + this_00->field_002C * 4) * 8;

      thunk_FUN_004abce0(this_01,5,*(int *)(&DAT_007976c8 + iVar5),*(int *)(&DAT_007976cc + iVar5),
                         '\0');
      /* ST_CALLSITE[004CA088]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
      STT3DSprC::SetCurFase
                ((STT3DSprC *)this_01,'\x05',
                 *(uint *)(&DAT_007976c8 + (iVar6 + this_00->field_002C * 4) * 8));
      uVar9 = g_playSystem_00802A38->field_00E4;
    }
  }
  /* ST_CALLSITE[004CA09D]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
  STT3DSprC::StartShow((STT3DSprC *)this_01,5,uVar9);
LAB_004ca0a2:
  /* ST_CALLSITE[004CA0DC]: CALL 0x00402455; direct=00402455 sub_00415B30 */
  sub_00415B30(this_00,(short)this_00->field_05B0 * 0xc9 + 100,
               (short)this_00->field_05B4 * 0xc9 + 100,(short)this_00->field_05B8 * 200 + 100,0,
               0,0,1);
  g_currentExceptionFrame = local_54.previous;
  return 0;
}

