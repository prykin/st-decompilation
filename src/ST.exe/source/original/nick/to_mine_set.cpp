#include "st/generated.hpp"
// Generated translation unit: source/original/nick/to_mine_set.cpp

// 00621B50 STMineSetC::GetMessage
#line 4 "decomp/ST.exe/functions/00621B50/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_mine_set.cpp
   STMineSetC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00401672|00621B50; family_names=STMineSetC::GetMessage; ret4=13;
   direct_offsets={10:1,14:3,18:2,1c:0}

   [STSwitchEnumApplier] Switch target field_02AE uses
   /SubmarineTitans/Recovered/Enums/STMineSetC_field_02AEState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5 */

int __thiscall st::fn_00621B50(STMineSetC *this,STMessage *message)

{
  STMineSetC_field_02ADState SVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  STMessageId SVar5;
  dword dVar6;
  bool bVar8;
  STMineSetC *this_00;
  byte bVar9;
  int local_EAX_16;
  int iVar10;
  int local_EAX_831;
  STMineSetC_field_02AEState SVar10;
  STMineSetC_sub_00626B50_param_1Enum SVar11;
  int iVar12;
  int iVar13;
  byte *puVar14;
  STWorldObject *pSVar15;
  byte *puVar16;
  InternalExceptionFrame local_60;
  int local_1c;
  int local_18;
  uint local_14;
  byte *local_10;
  uint local_c;
  STMineSetC *local_8;

  local_8 = this;
  /* ST_CALLSITE[00621B60]: CALL 0x00404f07; direct=00404F07 STSprGameObjC::GetMessage */
  local_EAX_16 = st::fn_00404F07((STSprGameObjC *)this,message);
  if (local_EAX_16 == 0xffff) {
    return 0xffff;
  }
  local_60.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_60;
  iVar10 = st::fn_0072D7F0(local_60.jumpBuffer,0);
  this_00 = local_8;
  if (iVar10 != 0) {
    g_currentExceptionFrame = local_60.previous;
    iVar12 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\nick\\to_mine_set.cpp"),0x174,0,iVar10,
                                st::mutable_c_string("%s"),"STMineSetC::GetMessage");
    if (iVar12 == 0) {
      st::fn_006A5E40(iVar10,0,st::mutable_c_string("E:\\__titans\\nick\\to_mine_set.cpp"),0x176);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  SVar5 = message->id;
  if (MESS_TORPHIT < SVar5) {
    if (MESS_HITKILL < SVar5) {
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
    if (SVar5 == MESS_HITKILL) {
      st::fn_00403D0F((STT3DSprC *)&local_8->field_01D5);
      /* ST_CALLSITE[0062233F]: CALL 0x00404147; direct=00404147 STMineSetC::sub_00622670 */
      st::fn_00404147(this_00);
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
    if (SVar5 != MESS_STOCTOPUSC_0112) {
      if (SVar5 != MESS_STSPRGAMEOBJC_0113) {
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      if (local_8->field_02BA < 0) {
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      if (local_8->field_02AE != CASE_1) {
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      /* ST_CALLSITE[006222E6]: CALL dword ptr [EDX] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)local_8->field_01D5)();
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
    if (local_8->field_02BA < 0) {
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
    if (local_8->field_02AE != CASE_1) {
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
    st::fn_00402A90((STT3DSprC *)&local_8->field_01D5);
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  if (SVar5 == MESS_TORPHIT) {
    st::fn_0040525E(local_8);
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  if (MESS_SHARED_0003 < SVar5) {
    if (SVar5 == MESS_SHARED_0108) {
      SVar11 = st::fn_0040581C();
      /* ST_CALLSITE[00622276]: CALL 0x00402414; direct=00402414 STMineSetC::sub_00626B50 */
      st::fn_00402414(local_8,SVar11);
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
    if (SVar5 != MESS_SHARED_010F) {
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
    local_10 = st::fn_00401825((STAllPlayersC *)local_8,&local_c);
    /* ST_CALLSITE[00622246]: CALL 0x004025f9; direct=004025F9 STPlaySystemC::SaveObjData */
    st::fn_004025F9(g_playSystem_00802A38,(int *)this_00->field_0018,local_10,local_c);
    st::fn_006AB060(&local_10);
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  if (SVar5 == MESS_SHARED_0003) {
    /* ST_CALLSITE[006221D2]: CALL 0x00402374; direct=00402374 STMineSetC::sub_00622880 */
    st::fn_00402374(local_8);
    if (this_00->field_0363 == nullptr) {
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
    st::fn_00401B40((AnonShape_006366D0_80B1100F *)this_00->field_0363);
    st::fn_0072E2B0(this_00->field_0363);
    this_00->field_0363 = nullptr;
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  if (SVar5 == MESS_ID_NONE) {
    if ((local_8->field_02AD == CASE_3) &&
       (0x1194 < g_playSystem_00802A38->field_00E4 - local_8->field_035F)) {
      st::fn_0040525E(local_8);
    }
    /* ST_CALLSITE[00621F07]: CALL 0x00405bfa; direct=00405BFA STMineSetC::sub_006239A0 */
    iVar13 = st::fn_00405BFA(this_00);
    if (iVar13 == 0) {
      if ((this_00->field_02AE == CASE_2) && (this_00->field_0353 == '\0')) {
        /* ST_CALLSITE[00622101]: CALL 0x00405637; direct=00405637 STMineSetC::sub_006226C0 */
        bVar9 = st::fn_00405637(this_00,(int)this_00->field_0047,(int)this_00->field_0049);
        this_00->field_0353 = bVar9;
        if (bVar9 != 0) {
          /* ST_CALLSITE[00622114]: CALL 0x004012c6; direct=004012C6 STMineSetC::LoadImagMineSet */
          st::fn_004012C6(this_00,0);
          st::fn_00402982(&this_00->field_01D5,1);
        }
      }
    }
    else {
      if ((((this_00->field_0314 == '\0') && (SVar10 = this_00->field_02AE, SVar10 != CASE_2)) &&
          (SVar10 != CASE_3)) && ((SVar10 != CASE_4 && (SVar10 != CASE_5)))) {
        /* ST_CALLSITE[00621F3A]: CALL 0x00404093; direct=00404093 STMineSetC::sub_00627400 */
        SVar10 = st::fn_00404093(this_00,SVar10);
        this_00->field_02AE = SVar10;
      }
      SVar10 = this_00->field_02AE;
      if (((SVar10 != CASE_2) && (SVar10 != CASE_3)) && ((SVar10 != CASE_4 && (SVar10 != CASE_5))))
      {
        if (this_00->field_0353 == '\0') {
          /* ST_CALLSITE[00621F89]: CALL 0x00405637; direct=00405637 STMineSetC::sub_006226C0 */
          bVar9 = st::fn_00405637(this_00,(int)this_00->field_0047,(int)this_00->field_0049);
          this_00->field_0353 = bVar9;
          if ((bVar9 != 0) && (this_00->field_02BA < 0)) {
            /* ST_CALLSITE[00621FA6]: CALL 0x004012c6; direct=004012C6 STMineSetC::LoadImagMineSet */
            st::fn_004012C6(this_00,0);
            st::fn_00402982(&this_00->field_01D5,1);
          }
        }
        else if ((g_playSystem_00802A38->field_00E4 & 3) == 0) {
          /* ST_CALLSITE[00621FD8]: CALL 0x00405637; direct=00405637 STMineSetC::sub_006226C0 */
          bVar9 = st::fn_00405637(this_00,(int)this_00->field_0047,(int)this_00->field_0049);
          this_00->field_0353 = bVar9;
          if ((bVar9 == 0) && (this_00->field_02E9 != '\0')) {
            st::fn_00403D0F((STT3DSprC *)&this_00->field_01D5);
            this_00->field_02E9 = 0;
          }
        }
        this_00->field_0045 = (short)this_00->field_02CA;
        this_00->field_0041 = (short)this_00->field_02C2;
        this_00->field_0043 = (short)this_00->field_02C6;
        if (this_00->field_0353 != '\0') {
          st::fn_004012BC((AnonShape_00623600_61226D23 *)this_00);
        }
        SVar1 = this_00->field_02AD;
        if ((((SVar1 == CASE_0) || (SVar1 == CASE_1)) || (SVar1 == CASE_2)) &&
           ((((g_playSystem_00802A38->field_00E4 % 5 == 0 &&
              (0x19 < g_playSystem_00802A38->field_00E4 - this_00->field_0346)) &&
             ((this_00->field_02AE == CASE_0 || (this_00->field_02AE == CASE_1)))) &&
            /* ST_CALLSITE[006220A5]: CALL 0x00405c5e; direct=00405C5E STMineSetC::sub_00625730 */
            (iVar13 = st::fn_00405C5E(this_00), iVar13 != 0)))) {
          this_00->field_02AE = CASE_2;
          this_00->field_030F =
               *(int *)(&DAT_007d02a4 + (uint)this_00->field_02AD * 4) +
               g_playSystem_00802A38->field_00E4;
        }
      }
    }
    if (((this_00->field_0355 == 0) && (this_00->field_02AE != CASE_2)) &&
       ((this_00->field_02AE != CASE_4 &&
        (((short)(this_00->field_0047 * 0xc9 + 100) == this_00->field_0041 &&
         ((short)(this_00->field_0049 * 0xc9 + 100) == this_00->field_0043)))))) {
      this_00->field_0355 = 1;
    }
    if ((this_00->field_0363 != nullptr) &&
       (iVar13 = st::fn_00403C4C((int *)this_00->field_0363), iVar13 != 0)) {
      st::fn_00401B40((AnonShape_006366D0_80B1100F *)this_00->field_0363);
      st::fn_0072E2B0(this_00->field_0363);
      this_00->field_0363 = nullptr;
    }
    if (this_00->field_0359 == '\0') {
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
    st::fn_00401BCC((AnonShape_00627170_DB470A34 *)this_00);
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  if (SVar5 != MESS_ID_CREATE) {
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  dVar6 = (message->arg0).u32;
  local_8->field_0219 = 0x23a;
  local_8->field_0215 = 0x32;
  if (*(int *)(dVar6 + 0xc) == 2) {
    st::fn_00401A91((STAllPlayersC *)local_8,st::pointer_boundary_cast<undefined4 *>((message->arg0).ptr));
    if (this_00->field_0313 != '\0') {
      sVar2 = this_00->field_0047;
      local_1c = 1;
      local_14 = (uint)(byte)this_00->field_008E;
      sVar3 = this_00->field_004B;
      sVar4 = this_00->field_0049;
      local_18 = (int)sVar4;
      if ((((sVar2 < 0) || (g_worldGrid.sizeX <= sVar2)) || (sVar4 < 0)) ||
         (((g_worldGrid.sizeY <= sVar4 || (sVar3 < 0)) || (g_worldGrid.sizeZ <= sVar3)))) {
        pSVar15 = nullptr;
      }
      else {
        pSVar15 = STGridAt3D(g_worldGrid, sVar2, sVar4, sVar3).objects[local_14];
      }
      if ((pSVar15 == nullptr) &&
         /* ST_CALLSITE[00621E46]: CALL 0x00401325; direct=00401325 DumpClassC::WritePtr */
         (iVar13 = st::fn_00401325
                             (sVar2,sVar4,sVar3,this_00->field_008E,
                              (RecoveredRecord_DumpClassC_00495EC0 *)this_00), iVar13 == 0)) {
        this_00->field_0314 = this_00->field_0314 + '\x01';
        iVar13 = local_1c;
      }
      else {
        iVar13 = 0;
      }
      if (iVar13 == 0) {
        /* ST_CALLSITE[00621E6A]: CALL 0x00404147; direct=00404147 STMineSetC::sub_00622670 */
        st::fn_00404147(this_00);
      }
    }
    memset(&this_00->field_0x231, 0, 0x2d); /* compiler bulk-zero initialization */
    if (this_00->field_0353 != '\0') {
      local_EAX_831 = st::fn_004052CC((STT3DSprC *)&this_00->field_01D5);
      this_00->field_02BA = local_EAX_831;
    }
    this_00->field_0363 = nullptr;
    /* ST_CALLSITE[00621EB0]: CALL 0x004030b7; direct=004030B7 STAllPlayersC::RegisterMine */
    iVar13 = st::fn_004030B7(g_allPlayers_007FA174,this_00->field_0032,this_00);
    if (iVar13 == 0) {
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
    /* ST_CALLSITE[00621EBF]: CALL 0x00404147; direct=00404147 STMineSetC::sub_00622670 */
    st::fn_00404147(this_00);
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  puVar14 = (byte *)((message->arg0).ptr);
  puVar16 = (byte *)&local_8->field_0x25e;
  memmove(puVar16, puVar14, 0x4f); /* compiler REP MOVS byte copy */
  if (*(int *)(dVar6 + 0xc) == 0) {
    local_8->field_0276 = (int)(short)(*(short *)&local_8->field_0276 * 0xc9 + 100);
    local_8->field_027A = (int)(short)(*(short *)&local_8->field_027A * 0xc9 + 100);
    local_8->field_027E = (int)(short)(*(short *)&local_8->field_027E * 200 + 100);
    local_8->field_0282 = local_8->field_0276;
    local_8->field_0286 = local_8->field_027A;
    local_8->field_028A = local_8->field_027E;
  }
  /* ST_CALLSITE[00621C81]: CALL 0x00404b74; direct=00404B74 STMineSetC::sub_00622BA0 */
  iVar13 = st::fn_00404B74(local_8);
  if (iVar13 == 0) {
    /* ST_CALLSITE[00621C8C]: CALL 0x00404147; direct=00404147 STMineSetC::sub_00622670 */
    st::fn_00404147(this_00);
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  bVar8 = false;
  if (this_00->field_02F6 == 0) {
    this_00->field_0034 = this_00->field_0041;
    this_00->field_0036 = this_00->field_0043;
    this_00->field_0038 = this_00->field_0045;
    iVar13 = st::fn_00404D6D(this_00,CASE_1,this_00->field_02C2,this_00->field_02C6,
                                this_00->field_02CA);
    if (iVar13 == 0) goto cf_common_exit_00621D24;
    this_00->field_02EE = 1;
  }
  else {
    iVar13 = st::fn_00404D6D(this_00,CASE_2,(int)this_00->field_003A,(int)this_00->field_003C,
                                (int)this_00->field_003E);
    if (iVar13 == 0) goto cf_common_exit_00621D24;
    this_00->field_02EE = 2;
  }
  this_00->field_02AE = CASE_1;
  bVar8 = true;
cf_common_exit_00621D24:
  if (bVar8) {
    this_00->field_02AE = CASE_1;
    this_00->field_0353 = 1;
    /* ST_CALLSITE[00621D53]: CALL 0x004012c6; direct=004012C6 STMineSetC::LoadImagMineSet */
    st::fn_004012C6(this_00,0);
    /* ST_CALLSITE[00621D64]: CALL 0x004030b7; direct=004030B7 STAllPlayersC::RegisterMine */
    iVar13 = st::fn_004030B7(g_allPlayers_007FA174,0xffff,this_00);
    if (iVar13 != 0) {
      /* ST_CALLSITE[00621D6F]: CALL 0x00404147; direct=00404147 STMineSetC::sub_00622670 */
      st::fn_00404147(this_00);
    }
    st::fn_00402BB7((AnonShape_00627700_6F319351 *)this_00);
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  /* ST_CALLSITE[00621D2A]: CALL 0x00404147; direct=00404147 STMineSetC::sub_00622670 */
  st::fn_00404147(this_00);
  g_currentExceptionFrame = local_60.previous;
  return 0;
}

// 00623170 STMineSetC::LoadImagMineSet
#line 4 "decomp/ST.exe/functions/00623170/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_mine_set.cpp
   STMineSetC::LoadImagMineSet */

undefined4 __thiscall st::fn_00623170(STMineSetC *this,int param_1)

{
  undefined4 *this_00;
  STMineSetC *pSVar2;
  int local_EAX_41;
  int iVar3;
  int iVar5;
  int iVar4;
  uint uVar6;
  InternalExceptionFrame local_50;
  STMineSetC *local_c;
  undefined4 local_8;

  local_8 = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  local_EAX_41 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  pSVar2 = local_c;
  if (local_EAX_41 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\nick\\to_mine_set.cpp"),0x2df,0,local_EAX_41,
                               st::mutable_c_string("%s"),"STMineSetC::LoadImagMineSet");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(local_EAX_41,0,st::mutable_c_string("E:\\__titans\\nick\\to_mine_set.cpp"),0x2e1);
    return 0xffff;
  }
  this_00 = &local_c->field_01D5;
  iVar3 = st::fn_004052CC((STT3DSprC *)this_00);
  pSVar2->field_02BA = iVar3;
  if (param_1 == 0) {
    /* ST_CALLSITE[006231E9]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    iVar5 = st::fn_00404183
                      ((STT3DSprC *)this_00,0xe,PTR_00806774,st::pointer_boundary_cast<char *>((&PTR_DAT_007d02c4)[pSVar2->field_02AD])
                       ,CASE_1D);
    if (iVar5 != 0) {
      return local_8;
    }
    st::fn_004023C4(this_00,0x5a,0x45);
    st::fn_00405AA6(this_00,'\x0e');
    /* ST_CALLSITE[0062321C]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
    st::fn_00401064((STT3DSprC *)this_00,'\x0e',pSVar2->field_02CE);
    /* ST_CALLSITE[00623225]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
    st::fn_004030BC((STT3DSprC *)this_00,'\x0e');
    /* ST_CALLSITE[0062323B]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    st::fn_00405240((STT3DSprC *)this_00,0xe,g_playSystem_00802A38->field_00E4);
    /* ST_CALLSITE[00623244]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
    iVar5 = st::fn_004022AC((STT3DSprC *)this_00,'\x0e');
    pSVar2->field_02D2 = iVar5;
    if (pSVar2->field_0352 != '\0') {
      /* ST_CALLSITE[0062327F]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
      iVar5 = st::fn_00404183
                        ((STT3DSprC *)this_00,0xc,PTR_00806774,
                         (&PTR_s_mine0_007d02d4)[pSVar2->field_0262 + (uint)pSVar2->field_02AD * 8],
                         CASE_1D);
      if (iVar5 != 0) {
        return local_8;
      }
      /* ST_CALLSITE[0062329E]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
      st::fn_00401064((STT3DSprC *)this_00,'\f',pSVar2->field_02CE);
      st::fn_00405AA6(this_00,'\f');
      /* ST_CALLSITE[006232B0]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
      st::fn_004030BC((STT3DSprC *)this_00,'\f');
      /* ST_CALLSITE[006232C5]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
      st::fn_00405240((STT3DSprC *)this_00,0xc,g_playSystem_00802A38->field_00E4);
    }
    if (DAT_00807326 != '\0') {
      /* ST_CALLSITE[006232E4]: CALL 0x004052fe; direct=004052FE STT3DSprC::SetCurShad */
      st::fn_004052FE((STT3DSprC *)this_00,'\x0e',(uint)(byte)pSVar2->field_02D6);
    }
  }
  else {
    /* ST_CALLSITE[00623309]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    iVar5 = st::fn_00404183
                      ((STT3DSprC *)this_00,0xe,PTR_00806774,
                       (&PTR_s_expdeep_007d0354)[pSVar2->field_02AD],CASE_1D);
    if (iVar5 != 0) {
      return local_8;
    }
    st::fn_00405AA6(this_00,'\x0e');
    /* ST_CALLSITE[00623331]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
    st::fn_00401064((STT3DSprC *)this_00,'\x0e',pSVar2->field_02CE);
    /* ST_CALLSITE[0062333A]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
    st::fn_004030BC((STT3DSprC *)this_00,'\x0e');
    /* ST_CALLSITE[00623350]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    st::fn_00405240((STT3DSprC *)this_00,0xe,g_playSystem_00802A38->field_00E4);
    /* ST_CALLSITE[00623372]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    iVar5 = st::fn_00404183
                      ((STT3DSprC *)this_00,10,PTR_00806774,
                       st::pointer_boundary_cast<char *>((&PTR_CHAR_e_007d0364)[pSVar2->field_02AD]),CASE_1D);
    if (iVar5 != 0) {
      return local_8;
    }
    st::fn_00405AA6(this_00,'\n');
    /* ST_CALLSITE[0062339A]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
    st::fn_00401064((STT3DSprC *)this_00,'\n',pSVar2->field_02E1);
    /* ST_CALLSITE[006233A3]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
    st::fn_004030BC((STT3DSprC *)this_00,'\n');
    /* ST_CALLSITE[006233B3]: CALL 0x004044ee; direct=004044EE STT3DSprC::sub_004ACF20 */
    st::fn_004044EE((STT3DSprC *)this_00,PTR_008032b8,0x10);
    /* ST_CALLSITE[006233BC]: CALL 0x00403233; direct=00403233 STT3DSprC::sub_004ACFE0 */
    st::fn_00403233((STT3DSprC *)this_00,'\n');
    /* ST_CALLSITE[006233D2]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    st::fn_00405240((STT3DSprC *)this_00,10,g_playSystem_00802A38->field_00E4);
    pSVar2->field_02E0 = 1;
    /* ST_CALLSITE[006233FA]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    iVar5 = st::fn_00404183
                      ((STT3DSprC *)this_00,9,PTR_00806764,
                       st::pointer_boundary_cast<char *>((&PTR_CHAR_e_007d0374)[pSVar2->field_02AD]),CASE_1D);
    if (iVar5 != 0) {
      return local_8;
    }
    st::fn_00405AA6(this_00,'\t');
    /* ST_CALLSITE[00623422]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
    st::fn_00401064((STT3DSprC *)this_00,'\t',pSVar2->field_02DB);
    /* ST_CALLSITE[0062342B]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
    st::fn_004030BC((STT3DSprC *)this_00,'\t');
    /* ST_CALLSITE[00623441]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    st::fn_00405240((STT3DSprC *)this_00,9,g_playSystem_00802A38->field_00E4);
    /* ST_CALLSITE[0062344A]: CALL 0x00402761; direct=00402761 STT3DSprC::sub_004AD070 */
    st::fn_00402761((STT3DSprC *)this_00,9);
    pSVar2->field_02DF = 1;
  }
  /* ST_CALLSITE[006234A0]: CALL 0x004045d9; direct=004045D9 STT3DSprC::sub_004AD3C0 */
  st::fn_004045D9
            ((STT3DSprC *)this_00,(float)pSVar2->field_02C2 * _DAT_007904f8 * _DAT_007904f0,
             (float)pSVar2->field_02C6 * _DAT_007904f8 * _DAT_007904f0,
             (float)pSVar2->field_02CA * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
  pSVar2->field_02E9 = 1;
  g_currentExceptionFrame = local_50.previous;
  return 1;
}

