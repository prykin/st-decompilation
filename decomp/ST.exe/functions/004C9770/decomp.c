#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_bspr.cpp
   TLOBaseTy::LoadImages */

int __thiscall TLOBaseTy::LoadImages(TLOBaseTy *this,void *param_1)

{
  code *pcVar1;
  AnonShape_004C96E0_AE72D977 *this_00;
  uint uVar2;
  int iVar3;
  int iVar4;
  DWORD DVar5;
  undefined1 *this_01;
  uint uVar6;
  char cVar7;
  char *text;
  CHAR local_154 [256];
  InternalExceptionFrame local_54;
  AnonShape_004C96E0_AE72D977 *local_10;
  int local_c;
  int local_8;

  local_10 = (AnonShape_004C96E0_AE72D977 *)this;
  uVar2 = GetPlayerRaceId(*(char *)&this->field_023D);
  local_8 = (uVar2 & 0xff) - 1;
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
  iVar3 = local_10->field_0245;
  local_c = iVar3;
  sub_004C96E0((TLOBaseTy *)local_10);
  if ((iVar3 == 1) && (*(int *)&this_00->field_0x24d == 4)) {
    iVar3 = (local_8 + this_00->field_0235 * 3) * 0xc;
    this_00->field_05EF = *(undefined4 *)(PTR_DAT_007bb1a8 + iVar3);
    this_00->field_05F3 = *(undefined4 *)(PTR_DAT_007bb1a8 + iVar3 + 4);
    this_00->field_05F7 = *(undefined4 *)(PTR_DAT_007bb1a8 + iVar3 + 8);
  }
  if ((char *)this_00->field_05EF != (char *)0x0) {
    iVar3 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)&this_00->field_0x1d5,0xe,DAT_0080678c,
                       (char *)this_00->field_05EF,0x1d);
    if (iVar3 != 0) {
      RaiseInternalException
                (iVar3,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",0x1f);
    }
  }
  if (this_00->field_05F3 == 0) {
    STT3DSprC::StopShow((STT3DSprC *)&this_00->field_0x1d5,0xd);
    *(undefined4 *)(*(int *)&this_00->field_0x1f5 + 0x1e8) = 0;
    *(undefined4 *)(*(int *)&this_00->field_0x1f5 + 0x1e4) = 0;
  }
  else {
    wsprintfA(local_154,"%s%1i",this_00->field_05F3,*(undefined4 *)&this_00->field_0x5c0);
    iVar3 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)&this_00->field_0x1d5,0xd,DAT_0080678c,local_154,0x1d);
    if (iVar3 != 0) {
      RaiseInternalException
                (iVar3,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",0x23);
    }
  }
  this_01 = &this_00->field_0x1d5;
  if ((char *)this_00->field_05F7 == (char *)0x0) {
    STT3DSprC::StopShow((STT3DSprC *)this_01,0xc);
    *(undefined4 *)(*(int *)&this_00->field_0x1f5 + 0x1c4) = 0;
    *(undefined4 *)(*(int *)&this_00->field_0x1f5 + 0x1c0) = 0;
  }
  else {
    iVar3 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)this_01,0xc,DAT_0080678c,(char *)this_00->field_05F7,0x1d);
    if (iVar3 != 0) {
      RaiseInternalException
                (iVar3,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",0x28);
    }
    if (*(int *)(&DAT_00790c2c + this_00->field_0235 * 4) != 0) {
      iVar3 = 1;
      uVar6 = 0xc;
      uVar2 = thunk_FUN_004ad650((int)this_01);
      FUN_006ea190(*(void **)&this_00->field_0x211,uVar2,uVar6,iVar3);
    }
  }
  if (*(int *)(&DAT_00791a10 + this_00->field_0235 * 4) != 0) {
    wsprintfA(local_154,"%s_cover",this_00->field_05EF);
    iVar3 = STT3DSprC::LoadSequence((STT3DSprC *)this_01,9,DAT_0080678c,local_154,0x1d);
    if (iVar3 != 0) {
      RaiseInternalException
                (iVar3,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",0x31);
    }
    if ((*(int *)&this_00->field_0x5ac != 0x40) && (*(int *)&this_00->field_0x5ac != 0x49)) {
      wsprintfA(local_154,"%s_cover%1i",this_00->field_05F3,
                *(undefined4 *)&this_00->field_0x5c0);
      iVar3 = STT3DSprC::LoadSequence((STT3DSprC *)this_01,8,DAT_0080678c,local_154,0x1d);
      if (iVar3 != 0) {
        RaiseInternalException
                  (iVar3,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",0x35)
        ;
      }
    }
    if (*(int *)&this_00->field_0x5ac == 0x4e) {
      wsprintfA(local_154,"htec_ani_cover");
      iVar3 = STT3DSprC::LoadSequence((STT3DSprC *)this_01,7,DAT_0080678c,local_154,0x1d);
      if (iVar3 != 0) {
        RaiseInternalException
                  (iVar3,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",0x3a)
        ;
      }
    }
    if (*(int *)&this_00->field_0x5ac == 0x72) {
      wsprintfA(local_154,"vqb_ani_cover");
      iVar3 = STT3DSprC::LoadSequence((STT3DSprC *)this_01,7,DAT_0080678c,local_154,0x1d);
      if (iVar3 != 0) {
        RaiseInternalException
                  (iVar3,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",0x3e)
        ;
      }
    }
    if (*(int *)&this_00->field_0x5ac == 0x70) {
      wsprintfA(local_154,"glsat_ani_cover");
      iVar3 = STT3DSprC::LoadSequence((STT3DSprC *)this_01,7,DAT_0080678c,local_154,0x1d);
      if (iVar3 != 0) {
        RaiseInternalException
                  (iVar3,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",0x42)
        ;
      }
    }
    if (*(int *)&this_00->field_0x5ac == 0x52) {
      iVar3 = GetPlayerRaceId(this_00->field_0x24);
      if ((char)iVar3 == '\x01') {
        text = "traws_ani";
      }
      else {
        text = "trabo_ani";
      }
      wsprintfA(local_154,text);
      iVar3 = STT3DSprC::LoadSequence((STT3DSprC *)this_01,7,DAT_0080678c,local_154,0x1d);
      if (iVar3 != 0) {
        RaiseInternalException
                  (iVar3,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",0x46)
        ;
      }
    }
  }
  thunk_FUN_004ac660(this_01,'\r');
  iVar3 = STT3DSprC::sub_004ACD30((STT3DSprC *)this_01,'\x0e');
  iVar4 = STT3DSprC::sub_004ACD30((STT3DSprC *)this_01,'\r');
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((iVar4 < iVar3) &&
     (uVar2 = *(int *)(*(int *)&this_00->field_0x1f5 + 0x1e4) -
              *(int *)(*(int *)&this_00->field_0x1f5 + 0x1e8), uVar6 = (int)uVar2 >> 0x1f,
     1 < (int)((uVar2 ^ uVar6) - uVar6))) {
    iVar3 = thunk_FUN_004cba10();
    if (iVar3 == 2) {
      STT3DSprC::StopShow((STT3DSprC *)this_01,0xd);
    }
    else {
      thunk_FUN_004ac700(this_01,'\r');
    }
  }
  RotateSpr((TLOBaseTy *)this_00,1);
  iVar3 = local_c;
  if ((local_c == 1) && (*(int *)&this_00->field_0x24d == 4)) {
    iVar3 = 4;
  }
  if (*(int *)(&DAT_00791b18 + (this_00->field_0235 * 3 + *(int *)&this_00->field_0x239) * 4) != 0)
  {
    if ((iVar3 < 2) || (4 < iVar3)) {
      thunk_FUN_004ad5e0((int)this_01);
    }
    else {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (*(code *)**(undefined4 **)this_01)();
    }
  }
  if ((((iVar3 == 0) || (iVar3 == 5)) || ((iVar3 == 1 && (*(int *)&this_00->field_0x24d == 0)))) ||
     (iVar3 == 6)) {
    STT3DSprC::sub_004ACEF0((STT3DSprC *)this_01,DAT_008073cc);
    iVar3 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)this_01,0x10,DAT_0080678c,(&PTR_s_tlo_sha_ws_007bb1b4)[local_8],
                       0x1d);
    if (iVar3 != 0) {
      RaiseInternalException
                (iVar3,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",0x6a);
    }
    thunk_FUN_004abce0(this_01,0x10,*(int *)(&DAT_0079104c + this_00->field_0235 * 4),
                       *(int *)(&DAT_0079104c + this_00->field_0235 * 4),'\0');
    STT3DSprC::SetCurFase
              ((STT3DSprC *)this_01,'\x10',*(uint *)(&DAT_0079104c + this_00->field_0235 * 4));
    DVar5 = STAppC::sub_006E51B0(*(STAppC **)&this_00->field_0x10);
    STT3DSprC::StartShow((STT3DSprC *)this_01,0x10,DVar5);
    STT3DSprC::sub_004ACF50((STT3DSprC *)this_01,'\x10');
  }
  else {
    STT3DSprC::sub_004ACF90((STT3DSprC *)this_01,'\x10');
    STT3DSprC::StopShow((STT3DSprC *)this_01,0x10);
  }
  if (this_00->field_0245 == 1) {
    if (*(int *)&this_00->field_0x5df == 5) {
      *(undefined4 *)&this_00->field_0x4c8 = 0;
      *(uint *)&this_00->field_0x4cc = g_playSystem_00802A38->field_00E4;
      STT3DSprC::sub_004ACE60((STT3DSprC *)this_01,'\x0e');
      STT3DSprC::sub_004ACE60((STT3DSprC *)this_01,'\r');
      STT3DSprC::sub_004ACE60((STT3DSprC *)this_01,'\f');
      STT3DSprC::sub_004ACE60((STT3DSprC *)this_01,'\v');
      STT3DSprC::sub_004ACE60((STT3DSprC *)this_01,'\t');
      STT3DSprC::sub_004ACE60((STT3DSprC *)this_01,'\b');
      STT3DSprC::sub_004ACE60((STT3DSprC *)this_01,'\a');
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      STT3DSprC::sub_004ACE30
                ((STT3DSprC *)this_01,
                 *(uint *)(DAT_00806724 + 0x30 + *(int *)&this_00->field_0x4c8 * 4),
                 (int)*(short *)(DAT_00806724 + 0x2c));
    }
    else {
      iVar3 = STT3DSprC::LoadSequence
                        ((STT3DSprC *)this_01,4,DAT_00806774,
                         "expl_bt0" +
                         *(int *)(&DAT_0079125c + this_00->field_0235 * 4) * 0x32,0x1d);
      if (iVar3 != 0) {
        return 0xffff;
      }
      thunk_FUN_004ac700(this_01,'\x04');
      cVar7 = '\0';
      iVar3 = STT3DSprC::sub_004ACD30((STT3DSprC *)this_01,'\x04');
      thunk_FUN_004abce0(this_01,4,0,iVar3,cVar7);
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
  if (this_00->field_0245 != 6) goto LAB_004ca0a2;
  if (*(int *)&this_00->field_0x4bc == 4) {
    if (*(int *)&this_00->field_0x2c == 0) {
      iVar3 = STT3DSprC::LoadSequence((STT3DSprC *)this_01,4,DAT_00806764,"tlo_emb5",0x1d);
      if (iVar3 != 0) {
        iVar4 = 0x91;
LAB_004c9eda:
        RaiseInternalException
                  (iVar3,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",iVar4
                  );
      }
    }
    else if (*(int *)&this_00->field_0x2c == 1) {
      iVar3 = STT3DSprC::LoadSequence
                        ((STT3DSprC *)this_01,4,DAT_00806764,"tlo_emb5_big",0x1d);
      if (iVar3 != 0) {
        iVar4 = 0x92;
        goto LAB_004c9eda;
      }
    }
    STT3DSprC::StartShow((STT3DSprC *)this_01,4,g_playSystem_00802A38->field_00E4);
    thunk_FUN_004abce0(this_01,5,*(int *)(&DAT_007976e4 + *(int *)&this_00->field_0x2c * 0x20),
                       *(int *)(&DAT_007976e4 + *(int *)&this_00->field_0x2c * 0x20),'\0');
    STT3DSprC::SetCurFase
              ((STT3DSprC *)this_01,'\x05',
               *(uint *)(&DAT_007976e4 + *(int *)&this_00->field_0x2c * 0x20));
    uVar2 = g_playSystem_00802A38->field_00E4;
  }
  else {
    iVar4 = GetPlayerRaceId(this_00->field_023D);
    iVar3 = *(int *)&this_00->field_0x2c;
    if ((char)iVar4 == '\x03') {
      if (iVar3 == 0) {
        iVar3 = STT3DSprC::LoadSequence((STT3DSprC *)this_01,5,DAT_0080678c,"si_emb5",0x1d)
        ;
        if (iVar3 != 0) {
          iVar4 = 0x9e;
LAB_004c9fb1:
          RaiseInternalException
                    (iVar3,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",
                     iVar4);
        }
      }
      else if (iVar3 == 1) {
        iVar3 = STT3DSprC::LoadSequence((STT3DSprC *)this_01,5,DAT_0080678c,"si_emb6",0x1d)
        ;
        if (iVar3 != 0) {
          iVar4 = 0x9f;
          goto LAB_004c9fb1;
        }
      }
      uVar2 = g_playSystem_00802A38->field_00E4;
    }
    else {
      if (iVar3 == 0) {
        iVar3 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)this_01,5,DAT_0080678c,"tlo_emb2",0x1d);
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
                          ((STT3DSprC *)this_01,5,DAT_0080678c,"tlo_emb3",0x1d);
        if (iVar3 != 0) {
          iVar4 = 0xa6;
          goto LAB_004ca02a;
        }
      }
      iVar3 = *(int *)&this_00->field_0x4bc;
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
      iVar3 = (iVar4 + *(int *)&this_00->field_0x2c * 4) * 8;
      thunk_FUN_004abce0(this_01,5,*(int *)(&DAT_007976c8 + iVar3),*(int *)(&DAT_007976cc + iVar3),
                         '\0');
      STT3DSprC::SetCurFase
                ((STT3DSprC *)this_01,'\x05',
                 *(uint *)(&DAT_007976c8 + (iVar4 + *(int *)&this_00->field_0x2c * 4) * 8));
      uVar2 = g_playSystem_00802A38->field_00E4;
    }
  }
  STT3DSprC::StartShow((STT3DSprC *)this_01,5,uVar2);
LAB_004ca0a2:
  sub_00415B30(this_00,*(short *)&this_00->field_0x5b0 * 0xc9 + 100,
               *(short *)&this_00->field_0x5b4 * 0xc9 + 100,
               *(short *)&this_00->field_0x5b8 * 200 + 100,0,0,0,1);
  g_currentExceptionFrame = local_54.previous;
  return 0;
}

