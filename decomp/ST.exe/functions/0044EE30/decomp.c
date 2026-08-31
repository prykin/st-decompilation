#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::GetMessage

   [STSwitchEnumApplier] Switch target field_0459 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_0459State. Cases:
   CASE_65=101;CASE_66=102;CASE_67=103;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6B=107;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_71=113;CASE_72=114;CASE_73=115;CASE_74=116;CASE_75=117;CASE_76=118;CASE_77=119;CASE_78=120;CASE_79=121;CASE_7A=122;CASE_7B=123

   [STSwitchEnumApplier] Switch target field_045D uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_045DState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23

   [STSwitchEnumApplier] Switch target field_06F3 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_06F3State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7

   [STSwitchEnumApplier] Switch target field_06F7 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_06F7State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_18=24;CASE_19=25;CASE_1A=26;CASE_1B=27;CASE_1C=28;CASE_1D=29;CASE_1E=30;CASE_1F=31;CASE_20=32;CASE_21=33;CASE_22=34;CASE_23=35;CASE_24=36;CASE_25=37;CASE_26=38;CASE_27=39;CASE_28=40

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=004024EB|0044EE30; family_names=STBoatC::GetMessage; ret4=21;
   direct_offsets={10:6,14:14,18:35,1c:30}

   [STSwitchEnumApplier] Switch target field_06F7 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_06F7State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_18=24;CASE_19=25;CASE_1A=26;CASE_1B=27;CASE_1C=28;CASE_1D=29;CASE_1E=30;CASE_1F=31;CASE_20=32;CASE_21=33;CASE_22=34;CASE_23=35;CASE_24=36;CASE_25=37;CASE_26=38;CASE_27=39;CASE_28=40;CASE_31=49;CASE_32=50;CASE_34=52
    */

int __thiscall STBoatC::GetMessage(STBoatC *this,STMessage *message)

{
  char cVar1;
  byte uVar2;
  byte uVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  STMessageId SVar8;
  int *piVar9;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  STBoatC *this_00;
  int local_EAX_60;
  int iVar14;
  int local_EAX_595;
  dword dVar15;
  uint uVar17;
  dword dVar18;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  int iVar30_mg4A;
  int local_EAX_5256;
  int iVar30_mg4C;
  int local_EAX_5399;
  STGroupBoatC *pSVar21_mg4;
  uint uVar19;
  int local_EAX_5934;
  uint local_EAX_5967;
  DArrayTy *pDVar20;
  STGroupBoatC *pSVar21_mg5;
  uint local_EAX_6122;
  int local_EAX_6464;
  int local_EAX_6595;
  int local_EAX_6651;
  byte *puVar21;
  int iVar30_mg2E;
  uint local_EAX_7866;
  int local_EAX_8444;
  int local_EAX_10750;
  int local_EAX_10813;
  int local_EAX_10888;
  int local_EAX_12188;
  int local_EAX_13626;
  int local_EAX_15012;
  int local_EAX_16398;
  int local_EAX_16460;
  int local_EAX_17823;
  int local_EAX_19186;
  int local_EAX_20549;
  int local_EAX_21912;
  int local_EAX_23275;
  int local_EAX_24638;
  int local_EAX_26001;
  int local_EAX_26064;
  int local_EAX_27439;
  int local_EAX_27502;
  int local_EAX_28888;
  int local_EAX_28950;
  int local_EAX_30313;
  int local_EAX_30376;
  int local_EAX_31751;
  int local_EAX_31814;
  int local_EAX_33262;
  int local_EAX_34625;
  int local_EAX_34688;
  int local_EAX_36063;
  int local_EAX_36126;
  int local_EAX_37512;
  int local_EAX_37574;
  int local_EAX_38937;
  int local_EAX_39000;
  int local_EAX_40375;
  int local_EAX_41779;
  int local_EAX_41949;
  int local_EAX_41987;
  int local_EAX_42010;
  int local_EAX_42115;
  int local_EAX_42158;
  int local_EAX_42267;
  int local_EAX_42517;
  int local_EAX_42580;
  int local_EAX_42623;
  int local_EAX_42685;
  int local_EAX_42716;
  int local_EAX_42779;
  uint local_EAX_42821;
  int local_EAX_42884;
  int local_EAX_42927;
  int local_EAX_42989;
  int local_EAX_43020;
  int local_EAX_43153;
  int local_EAX_43196;
  int local_EAX_43258;
  int local_EAX_43289;
  int local_EAX_43352;
  int local_EAX_43394;
  int local_EAX_43457;
  int local_EAX_43500;
  int local_EAX_43562;
  int local_EAX_43593;
  int local_EAX_43656;
  int local_EAX_43698;
  int local_EAX_43761;
  int local_EAX_43804;
  int local_EAX_43866;
  int local_EAX_43897;
  AiPlrClassTy *pAVar22;
  int local_EAX_44030;
  int local_EAX_44073;
  int local_EAX_44135;
  int local_EAX_44229;
  int local_EAX_44271;
  int local_EAX_44334;
  int local_EAX_44377;
  int local_EAX_44439;
  int local_EAX_44470;
  int local_EAX_44533;
  int local_EAX_44575;
  int local_EAX_44638;
  int local_EAX_44850;
  int uVar15;
  SndUnderAttMenegC *pSVar23;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  SndUnderAttMenegC *extraout_EAX;
  int iVar30_mg1A;
  int local_EAX_46313;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  int iVar30_mg1E;
  int iVar30_mg3;
  int iVar13;
  uint uVar16;
  int iVar30_mg6;
  int iVar30_mg8;
  STGroupBoatC *this_01;
  int local_EAX_48884;
  int iVar30_mg9;
  int iVar29;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_02;
  ushort uVar26;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_ECX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_03;
  STGroupBoatCVTable *pSVar24;
  STWorldObject *pSVar25;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_ECX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_04;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_05;
  ushort uVar28;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_06;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  uint extraout_EDX;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  uint extraout_EDX_00;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  uint extraout_EDX_01;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  uint extraout_EDX_02;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  uint extraout_EDX_03;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  uint extraout_EDX_04;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  uint extraout_EDX_05;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  uint extraout_EDX_06;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  uint extraout_EDX_07;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  uint extraout_EDX_08;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  uint extraout_EDX_09;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  uint extraout_EDX_10;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  uint extraout_EDX_11;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  uint extraout_EDX_12;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  uint extraout_EDX_13;
  uint uVar27;
  int iVar30;
  STGroupBoatC *pSVar31;
  byte *pbVar32;
  ushort *puVar33;
  char *pcVar34;
  char *pcVar35;
  char *pcVar36;
  AnonShape_0044EE30_F343D8F0 *pAVar37;
  byte *pbVar38;
  short *psVar39;
  STBoatC_field_06F7State SVar40;
  short sVar41;
  CHAR local_284;
  uint local_283 [63];
  InternalExceptionFrame local_184;
  uint local_140[7];
  uint local_124[7];
  int local_108;
  uint local_104;
  uint local_100;
  uint local_f4;
  STBoatC *local_ec;
  char local_e8 [20];
  uint local_d4;
  undefined4 *local_d0;
  uint local_cc;
  uint local_c8;
  ushort *local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4 [3];
  uint local_a8;
  uint local_a4;
  byte local_9d;
  STMessage local_9c;
  RecoveredRecordView_0060EA30_C6688588 *local_7c;
  uint local_78;
  char local_74 [20];
  ushort local_60 [2];
  uint local_5c;
  undefined4 *local_58;
  uint local_54;
  ushort local_50 [2];
  undefined4 *local_4c;
  ushort local_48;
  ushort local_46;
  byte *local_44;
  byte *local_40;
  byte *local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  RecoveredRecordView_004B9D90_09AED060 *local_28;
  RecoveredRecordView_004B9D90_09AED060 *local_24;
  AnonShape_0044EE30_F343D8F0 *local_20;
  STGroupBoatC *local_1c;
  short local_16;
  short local_14;
  short local_12;
  STFishC *local_10;
  uint local_c;
  uint local_8;

  iVar30 = 0;
  local_8 = 0;
  local_d4 = 0;
  local_184.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_184;
  local_ec = this;

  local_EAX_60 = Library::MSVCRT::__setjmp3(local_184.jumpBuffer,0);
  this_00 = local_ec;
  if (local_EAX_60 != 0) {
    g_currentExceptionFrame = local_184.previous;
    if (local_EAX_60 == -0x5001fff7) {
      return 0;
    }
    local_284 = '\0';
    memset(local_283, 0, 0xfe); /* compiler bulk-zero initialization */
    /* ST_CALLSITE[0045AF57]: CALL dword ptr [0x0085bde8] */
    wsprintfA(&local_284,"STBoatC::GetMessage - Name=%d Player=%d obj_num=%d grp_num=%d\n",local_ec->field_0018,
              local_ec->field_0024,(uint)(ushort)local_ec->field_0032,
              (uint)(ushort)local_ec->field_0030);

    iVar29 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x1380,0,local_EAX_60,
                                "%s",&local_284);
    if (iVar29 == 0) {
      RaiseInternalException(local_EAX_60,0,"E:\\__titans\\wlad\\To_boat.cpp",0x1381);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  /* ST_CALLSITE[0044EE8A]: CALL 0x00404f07; direct=00404F07 STSprGameObjC::GetMessage */
  STSprGameObjC::GetMessage((STSprGameObjC *)local_ec,message);
  SVar8 = message->id;
  sVar41 = (short)this_00;
  if (MESS_ID_ALLCREATE < SVar8) {
    if (SVar8 < MESS_SHARED_0129) {
      if (SVar8 != MESS_HITKILL) {
        if (SVar8 == MESS_SHARED_0121) {
          if (this_00->field_06F7 != CASE_23) {
            this_00->field_0736 = *(undefined4 *)((message->arg0).u32 + 4);
            if (this_00->field_045D == CASE_3) {
              g_currentExceptionFrame = local_184.previous;
              return 0;
            }
            local_54 = g_playSystem_00802A38->field_00E4;
            /* ST_CALLSITE[0045A865]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
            CmdToObj(this_00,CASE_3,&local_54);
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          if (this_00->field_0722 != 0x14) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          if (this_00->field_072E != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_072E = 1;
          /* ST_CALLSITE[0045A819]: CALL dword ptr [EAX + 0x90] */
          this_00->vfunc_90(3,0x16c);
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        if (SVar8 != MESS_SHARED_0122) {
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        piVar9 = (message->arg0).ptr;
        if (*piVar9 != this_00->field_0024) {
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        this_00->field_0782 = piVar9[1];
        this_00->field_0786 = piVar9[2];
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      pSVar31 = (message->arg0).ptr;
      local_1c = pSVar31;
      if (g_aiBossClass_008117BC != nullptr) {
        if (pSVar31 != nullptr) {
          local_9c.id = MESS_SHARED_5DD5;
          local_9c.arg0.words.high = this_00->field_0032;
          local_9c.arg0.words.low = *(undefined2 *)&this_00->field_0024;
          local_9c.arg1.words.high = *(undefined2 *)&pSVar31->field_0xc;
          local_9c.arg1.words.low = *(undefined2 *)&pSVar31->field_0008;
          /* ST_CALLSITE[0045A8D2]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/AiBossClassTy;pointer:/SubmarineTitans/Recovered/STMessage */
          g_aiBossClass_008117BC->GetMessage(&local_9c);
        }
        if (((g_aiBossClass_008117BC != nullptr) && (pSVar31 != nullptr))
           && (pSVar31->vtable != (STGroupBoatCVTable *)0x2710)) {
          local_9c.id = 0x5dd1;
          local_9c.arg0.words.high = this_00->field_0032;
          local_9c.arg0.words.low = *(undefined2 *)&this_00->field_0024;
          local_9c.arg1.words.high = *(undefined2 *)&pSVar31->field_0xc;
          local_9c.arg1.words.low = *(undefined2 *)&pSVar31->field_0008;
          /* ST_CALLSITE[0045A923]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/AiBossClassTy;pointer:/SubmarineTitans/Recovered/STMessage */
          g_aiBossClass_008117BC->GetMessage(&local_9c);
        }
      }
      if (this_00->field_07CA != nullptr) {

        iVar30_mg3 = STPlaySystemC::sub_006E62D0
                               (g_playSystem_00802A38,this_00->field_07CA,(int *)&local_4c);
        if (iVar30_mg3 == -4) {

          iVar13 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x12f7,0,0,
                                      "%s","STBoatC::GetMessage MESS_HITKILL data.lname!=0 ptr=NULL");
          if (iVar13 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          RaiseInternalException
                    (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                     0x12f8);
        }
        pSVar31 = local_1c;
        puVar21 = (byte *)(local_140);
        memmove(puVar21, pSVar31, 0x1c); /* compiler REP MOVS byte copy */
        iVar30 = 0;
        local_9c.id = MESS_HITKILL;
        local_9c.arg0.ptr = local_140;
        /* ST_CALLSITE[0045A9B8]: CALL dword ptr [EDX] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)*local_4c)(&local_9c);
        pSVar31 = local_1c;
      }
      /* ST_CALLSITE[0045A9CC]: CALL 0x00404df9; direct=00404DF9 STBoatC::CheckPBoxCmd */
      if (((this_00->field_045D == CASE_14) || (uVar16 = CheckPBoxCmd(this_00,CASE_14), uVar16 != 0)

          ) && (iVar30_mg6 = STPlaySystemC::sub_006E62D0
                                       (g_playSystem_00802A38,this_00->field_05A2,(int *)&local_10),
               iVar30_mg6 != -4)) {
        thunk_FUN_00492510(local_10,this_00->field_0018);
      }
      this_00->field_0455 = 1;
      /* ST_CALLSITE[0045AA08]: CALL 0x00403c0b; direct=00403C0B STBoatC::sub_0048D930 */
      sub_0048D930(this_00);
      /* ST_CALLSITE[0045AA0F]: CALL 0x004023ce; direct=004023CE STBoatC::sub_0048DBA0 */
      sub_0048DBA0(this_00);
      sVar4 = this_00->field_066F;
      sVar5 = this_00->field_0673;
      sVar7 = this_00->field_0671;
      if (((sVar4 < 0) || (pSVar31 = local_1c, g_worldGrid.sizeX <= sVar4)) ||
         ((sVar7 < 0 ||
          (((g_worldGrid.sizeY <= sVar7 || (sVar5 < 0)) || (g_worldGrid.sizeZ <= sVar5)))))) {
        pSVar25 = nullptr;
      }
      else {
        pSVar25 = STGridAt3D(g_worldGrid, sVar4, sVar7, sVar5).objects[0];
      }
      if (((pSVar25 != nullptr) &&
          (*(int *)&pSVar25->field_0x18 == this_00->field_0679)) &&
         ((this_00->field_0675 == 99 && (pSVar25->value_20 == 1000)))) {
        thunk_FUN_004b7d50(pSVar25,this_00);
      }
      /* ST_CALLSITE[0045AAB2]: CALL 0x004042a0; direct=004042A0 STBoatC::sub_004952E0 */
      sub_004952E0(this_00);
      /* ST_CALLSITE[0045AAC8]: CALL 0x00401028; direct=00401028 STAllPlayersC::DeleteGuardBoat; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STAllPlayersC; source view only; no Ghidra override */
      STAllPlayersC::DeleteGuardBoat
                (g_allPlayers_007FA174,(char)this_00->field_0024,this_00->field_0032,1);
      /* ST_CALLSITE[0045AADD]: CALL 0x00401028; direct=00401028 STAllPlayersC::DeleteGuardBoat */
      STAllPlayersC::DeleteGuardBoat
                (g_allPlayers_007FA174,(char)this_00->field_0024,this_00->field_0032,0);
      /* ST_CALLSITE[0045AAE4]: CALL 0x004027ca; direct=004027CA STBoatC::sub_00492420 */
      sub_00492420(this_00);
      thunk_FUN_004924a0((RecoveredRecordView_004924A0_8E78FEB0 *)this_00);
      thunk_FUN_00492fc0((RecoveredRecordView_00492FC0_9E014110 *)this_00);
      thunk_FUN_00493bc0(this_00);
      sVar4 = this_00->field_06A9;
      sVar5 = this_00->field_06AD;
      sVar7 = this_00->field_06AB;
      if (((sVar4 < 0) || (pSVar31 = local_1c, g_worldGrid.sizeX <= sVar4)) ||
         ((sVar7 < 0 ||
          (((g_worldGrid.sizeY <= sVar7 || (sVar5 < 0)) || (g_worldGrid.sizeZ <= sVar5)))))) {
        local_24 = nullptr;
      }
      else {
        local_24 = (RecoveredRecordView_004B9D90_09AED060 *)
                   STGridAt3D(g_worldGrid, sVar4, sVar7, sVar5).objects[0];
      }
      if (((local_24 == nullptr) ||
          (*(int *)&local_24->field_0x18 != *(int *)&this_00->field_0x6af)) ||

         (iVar30 = thunk_FUN_004b9d90(local_24), iVar30 == 0)) {

        STPlaySystemC::sub_006E62D0
                  (g_playSystem_00802A38,
                   *(RecoveredRecordView_005EFAE0_855D930D **)&this_00->field_0x6af,(int *)&local_24
                  );
      }
      if (((local_24 != nullptr) &&
          (*(int *)&local_24->field_0x20 == 1000)) &&

         (thunk_FUN_004b9d20(local_24,this_00),
         *(int *)&local_24->field_0x4b0 == this_00->field_0018)) {
        *(undefined4 *)&local_24->field_0x4b0 = 0;
      }
      if (((this_00->field_045D == CASE_13) &&
          ((RecoveredRecordView_005EFAE0_855D930D *)this_00->field_0524 !=
           nullptr)) &&

         (iVar30_mg8 = STPlaySystemC::sub_006E62D0
                                 (g_playSystem_00802A38,
                                  (RecoveredRecordView_005EFAE0_855D930D *)this_00->field_0524,
                                  (int *)&local_24), iVar30_mg8 != -4)) {

        thunk_FUN_004cf3e0(local_24,this_00->field_0018);
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      ST3DSMAPContext::sub_006E6780
                (this_00->field_0211,
                 CONCAT22(CONCAT11(2,(char)((uint)this_00->field_0018 >> 0x10)),
                          (short)this_00->field_0018));
      this_00->field_0826 = pSVar31->field_0008;
      /* ST_CALLSITE[0045AC36]: CALL dword ptr [EAX + 0x2c] */
      dVar15 = this_00->sub_0045EEE0();
      /* ST_CALLSITE[0045AC44]: CALL 0x00402f0e; direct=00402F0E STAllPlayersC::sub_004B7710 */
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      STAllPlayersC::sub_004B7710
                (g_allPlayers_007FA174,
                 STReplaceLowByte((uint32_t)(extraout_ECX_00), (uint8_t)(*(undefined1 *)&this_00->field_0024)),
                 dVar15);
      if (this_00->field_0024 == (uint)(byte)this_00->field_0010->field_112D) {
        /* ST_CALLSITE[0045AC62]: CALL 0x00404b8d; direct=00404B8D STAllPlayersC::sub_004D8B70 */
        STAllPlayersC::sub_004D8B70(g_allPlayers_007FA174,(char)this_00->field_0024);
      }
      if (pSVar31->field_0018 != 2) {
        puVar21 = (byte *)(&this_00->field_01D5);
        /* ST_CALLSITE[0045AC77]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
        STT3DSprC::StopShow((STT3DSprC *)puVar21,0xf);
        /* ST_CALLSITE[0045AC7F]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
        STT3DSprC::StopShow((STT3DSprC *)puVar21,0);
        /* ST_CALLSITE[0045AC88]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
        STT3DSprC::StopShow((STT3DSprC *)puVar21,1);
        /* ST_CALLSITE[0045AC91]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
        STT3DSprC::StopShow((STT3DSprC *)puVar21,0xe);
        /* ST_CALLSITE[0045AC9A]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
        STT3DSprC::StopShow((STT3DSprC *)puVar21,0xd);
        /* ST_CALLSITE[0045ACA3]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
        STT3DSprC::StopShow((STT3DSprC *)puVar21,0xc);
        /* ST_CALLSITE[0045ACAC]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
        STT3DSprC::StopShow((STT3DSprC *)puVar21,8);
        /* ST_CALLSITE[0045ACB5]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
        STT3DSprC::StopShow((STT3DSprC *)puVar21,0xb);
        this_01 = thunk_FUN_0042b760((char)this_00->field_0024,this_00->field_0030);
        pSVar31 = local_1c;
        if (this_01 != nullptr) {
          /* ST_CALLSITE[0045ACDC]: CALL dword ptr [EDX + 0x8] */
          this_01->sub_00498D20(0x6a,sVar41 + 0x32);
          pSVar31 = local_1c;
        }
      }
      if (this_00->field_0465 != nullptr) {
        thunk_FUN_00635fd0(this_00->field_0465);
        Library::MSVCRT::FUN_0072e2b0(this_00->field_0465);
        this_00->field_0465 = nullptr;
      }
      if (((*(int *)&pSVar31->field_0x4 == 0xa8) || (pSVar31->field_0018 == 0)) ||
         (pSVar31->field_0018 == 4)) {
        uVar19 = 0xffffffff;

        local_EAX_48884 = thunk_FUN_004ad650((STT3DSprC *)&this_00->field_01D5);
        thunk_FUN_0062b770((int)this_00->field_0041,(int)this_00->field_0043,
                           (int)this_00->field_0045,this_00->field_06F7,
                           (RecoveredRecord_0062B770_F0FEBA2F *)this_00,(int)this_00->field_006C,
                           local_EAX_48884,uVar19);
      }
      if (pSVar31->field_0018 == 3) {
        thunk_FUN_006377b0(this_00->field_01ED,0,(int)this_00->field_0041,(int)this_00->field_0043,
                           (int)this_00->field_0045,0x12);
      }
      if (pSVar31->field_0018 == 2) {
        this_00->field_02C0 = 1;
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      goto LAB_0045ad7b;
    }
    if (SVar8 != MESS_SHARED_0129) {
      if (SVar8 != MESS_STBOATC_4405) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      /* ST_CALLSITE[0045AE02]: CALL 0x004023a1; direct=004023A1 TLOEmbryoTy::sub_0041C3F0 */
      TLOEmbryoTy::sub_0041C3F0((TLOEmbryoTy *)this_00,(undefined *)this_00->field_070A);
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    if (this_00->field_045D != CASE_14) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    if (this_00->field_05C0 != CASE_3) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    if (this_00->field_07C2 == 0) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    if ((this_00->field_05A6 == nullptr) &&

       (iVar30_mg9 = STPlaySystemC::sub_006E62D0
                               (g_playSystem_00802A38,this_00->field_05A2,
                                (int *)&this_00->field_05A6), iVar30_mg9 == -4)) {
      RaiseInternalException
                (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x1372);
    }
    local_9d = this_00->field_0063;
    uVar2 = this_00->field_0061;
    uVar3 = this_00->field_0062;
    puVar33 = this_00->field_05A6 + 0x1a;
    psVar39 = &this_00->field_0034;
    for (iVar30 = 0x17; iVar30 != 0; iVar30 = iVar30 + -1) {
      *(undefined4 *)psVar39 = *(undefined4 *)puVar33;
      puVar33 = puVar33 + 2;
      psVar39 = psVar39 + 2;
    }
    *psVar39 = *puVar33;
    ((char *)psVar39)[1] = (char)puVar33[1];
    this_00->field_0076 = 0;
    this_00->field_006E = 0x2f;
    this_00->field_0061 = uVar2;
    this_00->field_0062 = uVar3;
    this_00->field_0063 = local_9d;
    /* ST_CALLSITE[0045AEC8]: CALL dword ptr [EAX + 0xd8] */
    iVar30 = this_00->vfunc_D8();
    if (iVar30 == 0) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    iVar30 = 0x1377;
    goto cf_error_exit_0045AEE3;
  }
  if (SVar8 == MESS_ID_ALLCREATE) goto LAB_00450268;
  if (MESS_SHARED_0003 < SVar8) {
    if (SVar8 == MESS_SHARED_010F) {
      /* ST_CALLSITE[0045A67A]: CALL 0x004018d4; direct=004018D4 STT3DSprC::SaveSpr */
      local_44 = STPointerBoundaryCast<byte *>(STT3DSprC::SaveSpr((STT3DSprC *)&this_00->field_01D5,&local_38));
      /* ST_CALLSITE[0045A688]: CALL 0x0040119a; direct=0040119A STAllPlayersC::SaveGObjData */
      local_3c = STPointerBoundaryCast<byte *>(STAllPlayersC::SaveGObjData((STAllPlayersC *)this_00,(int *)&local_2c));
      /* ST_CALLSITE[0045A696]: CALL 0x00401915; direct=00401915 STBoatC::SaveBoatData */
      local_40 = STPointerBoundaryCast<byte *>(SaveBoatData(this_00,(int *)&local_34));
      local_7c = (RecoveredRecordView_0060EA30_C6688588 *)(local_2c + local_34 + local_38);

      local_20 = Library::DKW::LIB::MemAlloc((uint)local_7c);
      pbVar32 = local_40;
      pAVar37 = local_20;
      for (uVar17 = local_34 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
        bVar11 = pbVar32[1];
        bVar12 = pbVar32[2];
        bVar13 = pbVar32[3];
        pAVar37->field_0x0 = pbVar32[0];
        pAVar37->field_0x1 = bVar11;
        pAVar37->field_0x2 = bVar12;
        pAVar37->field_0x3 = bVar13;
        pbVar32 = pbVar32 + 4;
        pAVar37 = (AnonShape_0044EE30_F343D8F0 *)&pAVar37->field_0x4;
      }
      for (uVar17 = local_34 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
        *(byte *)pAVar37 = *pbVar32;
        pbVar32 = pbVar32 + 1;
        pAVar37 = (AnonShape_0044EE30_F343D8F0 *)&pAVar37->field_0x1;
      }
      pbVar32 = local_3c;
      pbVar38 = &local_20->field_0x0 + local_34;
      memmove(pbVar38, pbVar32, local_2c); /* compiler REP MOVS byte copy */
      uVar17 = 0;
      local_20->field_05FE = local_34;
      local_20->field_0602 = local_2c;
      pbVar32 = local_44;
      pbVar38 = &local_20->field_0x0 + local_34 + local_2c;
      memmove(pbVar38, pbVar32, local_38); /* compiler REP MOVS byte copy */
      local_20->field_05F6 = local_34 + local_2c;
      local_20->field_05FA = local_38;
      /* ST_CALLSITE[0045A745]: CALL 0x004025f9; direct=004025F9 STPlaySystemC::SaveObjData */
      STPlaySystemC::SaveObjData
                (g_playSystem_00802A38,(int *)this_00->field_0018,(byte *)local_20,(uint)local_7c);
      FreeAndNull(&local_44);
      FreeAndNull(&local_3c);
      FreeAndNull(&local_40);
      FreeAndNull(&local_20);
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    if (SVar8 != MESS_TORPHIT) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    pSVar31 = (message->arg0).ptr;
    local_c = 0;
    local_7c = (RecoveredRecordView_0060EA30_C6688588 *)pSVar31->vtable;
    if (this_00->field_0742 == 1) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    if ((this_00->field_045D == CASE_8) && (this_00->field_06E7 != 2)) {
      this_00->field_06E7 = 1;
    }
    iVar30 = this_00->field_0786;
    if ((0 < iVar30) && (iVar30 < 0x65)) {
      pSVar31->vtable =
           (STGroupBoatCVTable *)((int)pSVar31->vtable - (iVar30 * (int)pSVar31->vtable) / 100);
    }
    iVar30 = *(int *)&pSVar31->field_0x4;
    local_1c = pSVar31;
    if (iVar30 == 0x65) goto LAB_00459f59;
    if (iVar30 != 0x42) {
      switch(iVar30) {
      case 0x9b:
      case 0x9c:
      case 0x9d:
      case 0x9e:
      case 0x9f:
      case 0xa0:
      case 0xa4:
      case 0xa5:
      case 0xb0:
      case 0xb2:
      case 0xb6:
      case 0xb7:
      case 0xb9:
      case 0xba:
      case 0xbb:
      case 0xbf:

        local_c = thunk_FUN_004e60d0(this_00->field_0024,0x67);
        iVar30 = 0;
        if (local_c == 1) {
          pSVar24 = pSVar31->vtable;
          iVar30 = ((int)pSVar24 * 9) / 10 + ((int)pSVar24 * 9 >> 0x1f);
LAB_00459e30:
          iVar30 = (int)pSVar24 - (iVar30 - (iVar30 >> 0x1f));
        }
        else {
          if (local_c == 2) {
            pSVar24 = pSVar31->vtable;
            iVar30 = ((int)pSVar24 * 0x11) / 0x14 + ((int)pSVar24 * 0x11 >> 0x1f);
            goto LAB_00459e30;
          }
          if (local_c == 3) {
            pSVar24 = pSVar31->vtable;
            iVar30 = ((int)pSVar24 * 4) / 5 + ((int)pSVar24 * 4 >> 0x1f);
            goto LAB_00459e30;
          }
        }
        pSVar31->vtable = (STGroupBoatCVTable *)((int)pSVar31->vtable - iVar30);
      }
      /* ST_CALLSITE[00459E45]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      uVar15 = LookupRecordByte((char)this_00->field_0024);
      uVar15 = (int)(byte)uVar15;
      if (uVar15 == 1) {
        iVar30 = this_00->field_0024;
        iVar14 = 4;
LAB_00459e71:

        local_c = thunk_FUN_004e60d0(iVar30,iVar14);
      }
      else {
        if (uVar15 == 2) {
          iVar30 = this_00->field_0024;
          iVar14 = 0x81;
          goto LAB_00459e71;
        }
        if (uVar15 == 3) {
          iVar30 = this_00->field_0024;
          iVar14 = 0x65;
          goto LAB_00459e71;
        }
      }
      iVar30 = 0;
      if (local_c == 1) {
        pSVar24 = pSVar31->vtable;
        iVar30 = (int)pSVar24 * 8;
LAB_00459eaa:
        iVar30 = (int)pSVar24 - iVar30 / 10;
      }
      else {
        if (local_c == 2) {
          pSVar24 = pSVar31->vtable;
          iVar30 = (int)pSVar24 * 6;
          goto LAB_00459eaa;
        }
        if (local_c == 3) {
          pSVar24 = pSVar31->vtable;
          iVar30 = (int)pSVar24 * 4;
          goto LAB_00459eaa;
        }
      }
      pSVar31->vtable = (STGroupBoatCVTable *)((int)pSVar31->vtable - iVar30);
      if (*(int *)&pSVar31->field_0x4 == 0x9a) {
        iVar30 = pSVar31->field_0008;
        this_00->field_0772 = iVar30;

        if ((this_00->field_0776 < 2) && (iVar30 = thunk_FUN_004e60d0(iVar30,0x93), 0 < iVar30)) {
          this_00->field_0776 = 2;
        }
        if (this_00->field_076E < 0) {
          this_00->field_076E = 0;
        }
        /* ST_CALLSITE[00459F12]: CALL dword ptr [EDX + 0xc] */
        iVar30 = this_00->vfunc_0C();
        if (iVar30 == 3) {
          /* ST_CALLSITE[00459F1F]: CALL dword ptr [EAX + 0xc8] */
          this_00->vfunc_C8(0);
        }
      }
      if ((*(int *)&pSVar31->field_0x4 == 0xad) || (*(int *)&pSVar31->field_0x4 == 0xa1)) {
        if (this_00->field_06F7 == CASE_9) {
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        if (this_00->field_06F7 == CASE_15) {
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        thunk_FUN_00495010(this_00,*(undefined4 *)&pSVar31->field_0x10);
      }
      goto LAB_00459f59;
    }
    if (this_00->field_06F7 == CASE_9) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    if (this_00->field_06F7 == CASE_15) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    /* ST_CALLSITE[00459D62]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
    local_EAX_44850 = LookupRecordByte((char)this_00->field_0024);
    local_EAX_44850 = (int)(byte)local_EAX_44850;
    if (local_EAX_44850 == 1) {
      iVar30 = this_00->field_0024;
      iVar14 = 0x2d;
LAB_00459d8b:

      local_c = thunk_FUN_004e60d0(iVar30,iVar14);
    }
    else {
      if (local_EAX_44850 == 2) {
        iVar30 = this_00->field_0024;
        iVar14 = 0x2d;
        goto LAB_00459d8b;
      }
      if (local_EAX_44850 == 3) {
        iVar30 = this_00->field_0024;
        iVar14 = 0x6a;
        goto LAB_00459d8b;
      }
    }
    iVar30 = 0;
    if (local_c == 1) {
      iVar30 = (int)pSVar31->vtable - ((int)pSVar31->vtable * 9) / 10;
    }
    pSVar31->vtable = (STGroupBoatCVTable *)((int)pSVar31->vtable - iVar30);
LAB_00459f59:
    if (200 < (int)local_7c - (int)pSVar31->vtable) {
      pSVar31->vtable = (STGroupBoatCVTable *)&local_7c[-9].field_0010;
    }
    if (this_00->field_0716 < 1) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    this_00->field_0716 = this_00->field_0716 - (int)pSVar31->vtable;
    pSVar23 = g_sndUnderAttMeneg_00811798;
    if ((((g_sndUnderAttMeneg_00811798 != nullptr) && (pSVar31->field_0008 != 0xff)
         ) && (pSVar23 = STPointerBoundaryCast<SndUnderAttMenegC *>(thunk_FUN_0041c710((RecoveredRecordView_0041C710_A35B7121 *)this_00)),
              pSVar23 != nullptr)) && (*(int *)&pSVar31->field_0x14 == 0)) {
      /* ST_CALLSITE[00459FC4]: CALL 0x004028c4; direct=004028C4 SndUnderAttMenegC::sub_0061F8B0 */
      SndUnderAttMenegC::sub_0061F8B0
                (g_sndUnderAttMeneg_00811798,(int)this_00->field_005B,(int)this_00->field_005D,
                 this_00->field_0024);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      pSVar23 = extraout_EAX;
    }
    uVar26 = (undefined2)((uint)pSVar23 >> 0x10);
    if ((g_aiBossClass_008117BC != nullptr) && (pSVar31 != nullptr)) {
      local_9c.id = MESS_SHARED_5DD5;
      local_9c.arg0.words.high = this_00->field_0032;
      local_9c.arg0.words.low = *(undefined2 *)&this_00->field_0024;
      local_9c.arg1.words.high = *(undefined2 *)&pSVar31->field_0xc;
      local_9c.arg1.words.low = *(undefined2 *)&pSVar31->field_0008;
      /* ST_CALLSITE[0045A010]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/AiBossClassTy;pointer:/SubmarineTitans/Recovered/STMessage */
      iVar30 = g_aiBossClass_008117BC->GetMessage(&local_9c);
      uVar26 = (undefined2)((uint)iVar30 >> 0x10);
    }
    if (this_00->field_0716 < 1) {
      if (((g_aiBossClass_008117BC != nullptr) && (pSVar31 != nullptr)) &&
         (pSVar31->vtable != (STGroupBoatCVTable *)0x2710)) {
        local_9c.id = 0x5dd1;
        local_9c.arg0.words.high = this_00->field_0032;
        local_9c.arg0.words.low = *(undefined2 *)&this_00->field_0024;
        local_9c.arg1.words.high = *(undefined2 *)&pSVar31->field_0xc;
        local_9c.arg1.words.low = *(undefined2 *)&pSVar31->field_0008;
        /* ST_CALLSITE[0045A06D]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/AiBossClassTy;pointer:/SubmarineTitans/Recovered/STMessage */
        g_aiBossClass_008117BC->GetMessage(&local_9c);
      }
      this_00->field_02C0 = 1;
      switch(this_00->field_06F7) {
      case CASE_1:
        uVar26 = 0xcb;
        break;
      case CASE_2:
        uVar26 = 0xd1;
        break;
      case CASE_3:
        uVar26 = 0xd7;
        break;
      case CASE_4:
        uVar26 = 0xdd;
        break;
      case CASE_5:
        uVar26 = 0xe3;
        break;
      case CASE_6:
        uVar26 = 0xea;
        break;
      case CASE_7:
        uVar26 = 0xf1;
        break;
      case CASE_8:
        uVar26 = 0xf8;
        break;
      case CASE_9:
        uVar26 = 0x100;
        break;
      case CASE_A:
        uVar26 = 0x105;
        break;
      case CASE_B:
        uVar26 = 0x10b;
        break;
      case CASE_C:
        uVar26 = 0x111;
        break;
      case CASE_D:
        uVar26 = 0x12f;
        break;
      case CASE_E:
        uVar26 = 0x135;
        break;
      case CASE_F:
        uVar26 = 0x13b;
        break;
      case CASE_10:
        uVar26 = 0x141;
        break;
      case CASE_11:
        uVar26 = 0x147;
        break;
      case CASE_12:
        uVar26 = 0x14e;
        break;
      case CASE_13:
        uVar26 = 0x155;
        break;
      case CASE_14:
        uVar26 = 0x15c;
        break;
      case CASE_15:
        uVar26 = 0x164;
        break;
      case CASE_16:
        uVar26 = 0x169;
        break;
      case CASE_17:
        uVar26 = 0x171;
        break;
      case CASE_18:
        uVar26 = 0x177;
        break;
      case CASE_19:
        uVar26 = 0x193;
        break;
      case CASE_1A:
        uVar26 = 0x19b;
        break;
      case CASE_1B:
        uVar26 = 0x1a3;
        break;
      case CASE_1C:
        uVar26 = 0x1a9;
        break;
      case CASE_1D:
        uVar26 = 0x1af;
        break;
      case CASE_1E:
        uVar26 = 0x1b6;
        break;
      case CASE_1F:
        uVar26 = 0x1bc;
        break;
      case CASE_20:
        uVar26 = 0x1c2;
        break;
      case CASE_21:
        uVar26 = 0x1c8;
        break;
      case CASE_22:
        uVar26 = 0x1cf;
        break;
      case CASE_23:
        uVar26 = 0x1d6;
        break;
      case CASE_24:
        uVar26 = 0x1dc;
        break;
      case CASE_25:
        uVar26 = 0x17d;
        break;
      case CASE_26:
        uVar26 = 0x117;
        break;
      case CASE_27:
        uVar26 = 0x183;
        break;
      case CASE_28:
        uVar26 = 0x1e2;
        break;
      default:
        uVar26 = 0;
      }
      /* ST_CALLSITE[0045A1F3]: CALL dword ptr [EDX + 0x90] */
      this_00->vfunc_90(2,uVar26);
      /* ST_CALLSITE[0045A1FB]: CALL 0x00403c0b; direct=00403C0B STBoatC::sub_0048D930 */
      sub_0048D930(this_00);
      /* ST_CALLSITE[0045A202]: CALL 0x004023ce; direct=004023CE STBoatC::sub_0048DBA0 */
      sub_0048DBA0(this_00);
      sVar41 = this_00->field_0671;
      sVar4 = this_00->field_0673;
      local_7c = (RecoveredRecordView_0060EA30_C6688588 *)STReplaceLowWord((uint32_t)(local_7c), (uint16_t)(sVar41));
      sVar5 = this_00->field_066F;
      if (((((sVar5 < 0) || (g_worldGrid.sizeX <= sVar5)) || (sVar41 < 0)) ||
          ((g_worldGrid.sizeY <= sVar41 || (sVar4 < 0)))) || (g_worldGrid.sizeZ <= sVar4)) {
        pSVar25 = nullptr;
      }
      else {
        pSVar25 = STGridAt3D(g_worldGrid, sVar5, sVar41, sVar4).objects[0];
        pSVar31 = local_1c;
      }
      if (((pSVar25 != nullptr) &&
          (*(int *)&pSVar25->field_0x18 == this_00->field_0679)) &&
         ((this_00->field_0675 == 99 && (pSVar25->value_20 == 1000)))) {
        thunk_FUN_004b7d50(pSVar25,this_00);
      }
      /* ST_CALLSITE[0045A2A9]: CALL 0x004042a0; direct=004042A0 STBoatC::sub_004952E0 */
      sub_004952E0(this_00);
      /* ST_CALLSITE[0045A2BF]: CALL 0x00401028; direct=00401028 STAllPlayersC::DeleteGuardBoat; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STAllPlayersC; source view only; no Ghidra override */
      STAllPlayersC::DeleteGuardBoat
                (g_allPlayers_007FA174,(char)this_00->field_0024,this_00->field_0032,1);
      /* ST_CALLSITE[0045A2D4]: CALL 0x00401028; direct=00401028 STAllPlayersC::DeleteGuardBoat */
      STAllPlayersC::DeleteGuardBoat
                (g_allPlayers_007FA174,(char)this_00->field_0024,this_00->field_0032,0);
      /* ST_CALLSITE[0045A2DB]: CALL 0x004027ca; direct=004027CA STBoatC::sub_00492420 */
      sub_00492420(this_00);
      if (this_00->field_07CA != nullptr) {

        iVar30_mg1A = STPlaySystemC::sub_006E62D0
                                (g_playSystem_00802A38,this_00->field_07CA,(int *)&local_58);
        if (iVar30_mg1A == -4) {

          local_EAX_46313 =
               ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x1296,0,0,"%s",
                                  "STBoatC::GetMessage MESS_TORPHIT data.lname!=0 ptr=NULL");
          if (local_EAX_46313 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          RaiseInternalException
                    (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                     0x1297);
        }
        pSVar31 = local_1c;
        puVar21 = (byte *)(local_124);
        memmove(puVar21, pSVar31, 0x1c); /* compiler REP MOVS byte copy */
        iVar30 = 0;
        local_124[0] = 0x1716b;
        local_9c.id = MESS_TORPHIT;
        local_9c.arg0.ptr = local_124;
        /* ST_CALLSITE[0045A37D]: CALL dword ptr [EDX] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)*local_58)(&local_9c);
        pSVar31 = local_1c;
      }
      thunk_FUN_004924a0((RecoveredRecordView_004924A0_8E78FEB0 *)this_00);
      thunk_FUN_00492fc0((RecoveredRecordView_00492FC0_9E014110 *)this_00);
      thunk_FUN_00493bc0(this_00);
      sVar41 = this_00->field_06A9;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      local_7c = (RecoveredRecordView_0060EA30_C6688588 *)CONCAT22(extraout_var_00,sVar41);
      sVar4 = this_00->field_06AD;
      sVar5 = this_00->field_06AB;
      if ((((sVar41 < 0) || (g_worldGrid.sizeX <= sVar41)) || (sVar5 < 0)) ||
         (((g_worldGrid.sizeY <= sVar5 || (sVar4 < 0)) || (g_worldGrid.sizeZ <= sVar4)))) {
        local_28 = nullptr;
      }
      else {
        local_28 = (RecoveredRecordView_004B9D90_09AED060 *)
                   STGridAt3D(g_worldGrid, sVar41, sVar5, sVar4).objects[0];
      }
      if (((local_28 == nullptr) ||
          (*(int *)&local_28->field_0x18 != *(int *)&this_00->field_0x6af)) ||

         (iVar30 = thunk_FUN_004b9d90(local_28), iVar30 == 0)) {

        STPlaySystemC::sub_006E62D0
                  (g_playSystem_00802A38,
                   *(RecoveredRecordView_005EFAE0_855D930D **)&this_00->field_0x6af,(int *)&local_28
                  );
      }
      if (((local_28 != nullptr) &&
          (*(int *)&local_28->field_0x20 == 1000)) &&

         (thunk_FUN_004b9d20(local_28,this_00),
         *(int *)&local_28->field_0x4b0 == this_00->field_0018)) {
        *(undefined4 *)&local_28->field_0x4b0 = 0;
      }
      if (((this_00->field_045D == CASE_13) &&
          ((RecoveredRecordView_005EFAE0_855D930D *)this_00->field_0524 !=
           nullptr)) &&

         (iVar30_mg1E = STPlaySystemC::sub_006E62D0
                                  (g_playSystem_00802A38,
                                   (RecoveredRecordView_005EFAE0_855D930D *)this_00->field_0524,
                                   (int *)&local_28), iVar30_mg1E != -4)) {

        thunk_FUN_004cf3e0(local_28,this_00->field_0018);
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      ST3DSMAPContext::sub_006E6780
                (this_00->field_0211,
                 CONCAT22(CONCAT11(2,(char)((uint)this_00->field_0018 >> 0x10)),
                          (short)this_00->field_0018));
      this_00->field_0826 = pSVar31->field_0008;
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    if ((this_00->field_045D == CASE_4) && (this_00->field_0580 == CASE_5)) {
      sVar41 = this_00->field_0554;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_7c = (RecoveredRecordView_0060EA30_C6688588 *)CONCAT22(uVar26,sVar41);
      sVar4 = this_00->field_0558;
      sVar5 = this_00->field_0556;
      if ((sVar41 < 0) ||
         ((((g_worldGrid.sizeX <= sVar41 || (sVar5 < 0)) || (g_worldGrid.sizeY <= sVar5)) ||
          ((sVar4 < 0 || (g_worldGrid.sizeZ <= sVar4)))))) {
        local_10 = nullptr;
      }
      else {
        local_10 = (STFishC *)
                   STGridAt3D(g_worldGrid, sVar41, sVar5, sVar4).objects[0];
      }
      if ((local_10 != nullptr) && (local_10->field_0018 == this_00->field_055A)) {

        thunk_FUN_004e2200(local_10,this_00->field_0568,this_00->field_0018,this_00->field_0716);
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
    }
    if (pSVar31->field_0008 == 0xff) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    /* ST_CALLSITE[0045A5CE]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STFishC; signature=__thiscall;pointer:/STFishC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
    local_10 = STAllPlayersC::GetObjPtr
                         (g_allPlayers_007FA174,(char)pSVar31->field_0008,
                          *(ushort *)&pSVar31->field_0xc,CASE_1);
    if (local_10 == nullptr) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    if (this_00->field_045D != CASE_3) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    /* ST_CALLSITE[0045A5F9]: CALL 0x00405f0b; direct=00405F0B STFishC::sub_004162F0 */
    STFishC::sub_004162F0(local_10,&local_16,&local_14,&local_12);
    uVar17 = (int)this_00->field_0047 - (int)local_16;
    uVar27 = (int)uVar17 >> 0x1f;
    if (6 < (int)((uVar17 ^ uVar27) - uVar27)) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    uVar17 = (int)this_00->field_0049 - (int)local_14;
    uVar27 = (int)uVar17 >> 0x1f;
    if (6 < (int)((uVar17 ^ uVar27) - uVar27)) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    uVar17 = (int)this_00->field_004B - (int)local_12;
    uVar27 = (int)uVar17 >> 0x1f;
    if (2 < (int)((uVar17 ^ uVar27) - uVar27)) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    /* ST_CALLSITE[0045A654]: CALL 0x00401d70; direct=00401D70 STBoatC::_AddDefenceShots */
    _AddDefenceShots(this_00,(char)pSVar31->field_0008,*(short *)&pSVar31->field_0xc,
                     (int)pSVar31->vtable);
    g_currentExceptionFrame = local_184.previous;
    return 0;
  }
  if (SVar8 == MESS_SHARED_0003) {
    /* ST_CALLSITE[004503A4]: CALL 0x0040464c; direct=0040464C sub_0041C5A0 */
    sub_0041C5A0(this_00);
    /* ST_CALLSITE[004503AB]: CALL 0x00404629; direct=00404629 TLOBaseTy::sub_0041D590 */
    TLOBaseTy::sub_0041D590((TLOBaseTy *)this_00);
    /* ST_CALLSITE[004503B2]: CALL 0x00405952; direct=00405952 sub_004167A0 */
    sub_004167A0(this_00);
    pSVar21_mg4 = thunk_FUN_0042b760((char)this_00->field_0024,this_00->field_0030);
    if (pSVar21_mg4 != nullptr) {
      /* ST_CALLSITE[004503D8]: CALL 0x00404ff2; direct=00404FF2 STGroupBoatC::sub_0040CDB0 */
      STGroupBoatC::sub_0040CDB0(pSVar21_mg4,(uint)(ushort)this_00->field_0032);
    }
    thunk_FUN_004ad310((STT3DSprC *)&this_00->field_01D5);

    uVar19 = thunk_FUN_00495ff0(this_00->field_005B,this_00->field_005D,this_00->field_005F,
                                this_00->field_008E,(RecoveredRecordView_00495FF0_A2A90B23 *)this_00
                               );
    /* ST_CALLSITE[0045042A]: CALL 0x004020ae; direct=004020AE STAllPlayersC::UnRegisterObject */
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    STAllPlayersC::UnRegisterObject
              (g_allPlayers_007FA174,(char)this_00->field_0024,
               STReplaceLowWord((uint32_t)(uVar19), (uint16_t)(this_00->field_0030)),
               CONCAT22(extraout_var_06,this_00->field_0032),(int *)this_00,this_00->field_0826);
    thunk_FUN_00489950((RecoveredRecord_00489950_C0CE8121 *)this_00);
    if (this_00->field_047B != nullptr) {
      DArrayDestroy(this_00->field_047B);
      this_00->field_047B = nullptr;
    }
    if (this_00->field_0465 != nullptr) {
      thunk_FUN_00635fd0(this_00->field_0465);
      Library::MSVCRT::FUN_0072e2b0(this_00->field_0465);
      this_00->field_0465 = nullptr;
    }
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x37a
              );
LAB_0045048a:
    if (((this_00->field_004D == '\x01') && (this_00->field_005A == '\x01')) &&
       (g_playSystem_00802A38->field_00E4 % 0x32 == 7)) {
      iVar30 = (int)this_00->field_0041 % 0xc9;
      local_78 = (int)this_00->field_0043 % 0xc9;
      iVar14 = (int)this_00->field_0045 % 200;
      if ((((0x46 < iVar30) && (iVar30 < 0x82)) &&
          ((0x46 < (int)local_78 && (((int)local_78 < 0x82 && (0x47 < iVar14)))))) &&
         (iVar14 < 0x81)) {
        this_00->field_005A = 0;
        this_00->field_004D = 0;
      }
    }
    if (((this_00->field_07EE == 1) &&
        /* ST_CALLSITE[00450517]: CALL dword ptr [EDX + 0x7c] */
        (iVar30 = this_00->vfunc_7C(), iVar30 < 0x1a)) ||
       (((this_00->field_07EE == 2 &&
         /* ST_CALLSITE[0045052C]: CALL dword ptr [EAX + 0x7c] */
         (iVar30 = this_00->vfunc_7C(), iVar30 < 0x33)) ||
        ((this_00->field_07EE == 3 &&
         /* ST_CALLSITE[00450545]: CALL dword ptr [EDX + 0x7c] */
         (iVar30 = this_00->vfunc_7C(), iVar30 < 0x4c)))))) {

      local_EAX_5934 = thunk_FUN_004e8030(this_00->field_06F7);
      if (local_EAX_5934 == 3) {
        if (((this_00->field_045D != CASE_16) &&
            /* ST_CALLSITE[0045061A]: CALL 0x00404df9; direct=00404DF9 STBoatC::CheckPBoxCmd */
            (local_EAX_6122 = CheckPBoxCmd(this_00,CASE_16), local_EAX_6122 == 0)) &&
           ((short)g_packedRecords_A62x8[(char)this_00->field_0024].field95_0x15f != 0)) {
          pDVar20 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);

          Library::DKW::TBL::DArrayAppend(pDVar20,&this_00->field_0032);
          /* ST_CALLSITE[00450662]: CALL 0x0040178f; direct=0040178F STAllPlayersC::AddObjsToGroup */
          STAllPlayersC::AddObjsToGroup
                    (g_allPlayers_007FA174,(char)this_00->field_0024,0xfffe,pDVar20,local_60);
          DArrayDestroy(pDVar20);
          pSVar21_mg5 = thunk_FUN_0042b760((char)this_00->field_0024,local_60[0]);
          uVar26 = SUB42(local_b4,0);
          local_b4[0] = 1;
          pSVar24 = pSVar21_mg5->vtable;
          uVar28 = 0x11;
          goto LAB_00450695;
        }
      }
      else if (((this_00->field_045D != CASE_4) &&
               /* ST_CALLSITE[0045057F]: CALL 0x00404df9; direct=00404DF9 STBoatC::CheckPBoxCmd */
               (local_EAX_5967 = CheckPBoxCmd(this_00,CASE_4), local_EAX_5967 == 0)) &&
              ((short)g_packedRecords_A62x8[(char)this_00->field_0024].field94_0x15b != 0)) {
        pDVar20 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);

        Library::DKW::TBL::DArrayAppend(pDVar20,&this_00->field_0032);
        /* ST_CALLSITE[004505CF]: CALL 0x0040178f; direct=0040178F STAllPlayersC::AddObjsToGroup */
        STAllPlayersC::AddObjsToGroup
                  (g_allPlayers_007FA174,(char)this_00->field_0024,0xfffe,pDVar20,local_50);
        DArrayDestroy(pDVar20);
        pSVar21_mg5 = thunk_FUN_0042b760((char)this_00->field_0024,local_50[0]);
        uVar26 = SUB42(&local_a8,0);
        local_a8 = 1;
        local_a4 = 0;
        pSVar24 = pSVar21_mg5->vtable;
        uVar28 = 4;
LAB_00450695:
        /* ST_CALLSITE[00450697]: CALL dword ptr [EDX + 0x8] */
        (*pSVar24->sub_00498D20)(pSVar21_mg5,uVar28,uVar26);
      }
    }
    local_1c = thunk_FUN_0042b760((char)this_00->field_0024,this_00->field_0030);
    uVar17 = this_00->field_07AA + 1;
    this_00->field_07AA = uVar17;
    switch(this_00->field_06F7) {
    case CASE_1:
    case CASE_A:
    case CASE_1E:
    case CASE_20:
    case CASE_22:
    case CASE_23:
    case CASE_28:
      if (this_00->field_07A2 < 1) {
        uVar17 = this_00->field_079E;
        this_00->field_07A2 = uVar17;
      }
      break;
    default:
      if (this_00->field_07A2 < 1) {

        local_EAX_6595 =
             thunk_FUN_004de410((void *)this_00->field_0024,this_00->field_079A,this_00->field_079E);
        this_00->field_07A2 = local_EAX_6595;
        /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
        uVar17 = extraout_EDX_00;
      }
      break;
    case CASE_F:
    case CASE_12:
    case CASE_16:
    case CASE_17:
    case CASE_27:
      iVar30 = this_00->field_07AE % this_00->field_07B2 + this_00->field_07B2 * this_00->field_07A2
      ;
      this_00->field_07AE = iVar30;
      if (iVar30 < this_00->field_079E * this_00->field_07B2) {
        this_00->field_07AE = iVar30 + 1;
        iVar30 = (iVar30 + 1) / this_00->field_07B2;
        this_00->field_07A2 = iVar30;
        if ((this_00->field_06F7 != CASE_A) && (iVar30 == 0)) {

          local_EAX_6464 =
               thunk_FUN_004dfb90(this_00->field_0024,this_00->field_079E,
                                  *(RecoveredRecord_004DFB90_1056A84E **)
                                   (&DAT_00793ff0 + this_00->field_079A * 4));
          iVar14 = this_00->field_07AE + local_EAX_6464 * this_00->field_07B2;
          this_00->field_07AE = iVar14;
          iVar30 = this_00->field_079E * this_00->field_07B2;
          if (iVar30 < iVar14) {
            this_00->field_07AE = iVar30;
          }
          this_00->field_07A2 = this_00->field_07AE / this_00->field_07B2;
        }
      }

      iVar30 = thunk_FUN_004e60d0(this_00->field_0024,0x3a);
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      uVar17 = extraout_EDX;
      if (0 < iVar30) {
        this_00->field_07AA = this_00->field_07AA + 1;
      }
    }
    if (((this_00->field_06F7 != CASE_B) && (this_00->field_07B6 != 0)) &&
       (this_00->field_07BE == 0)) {

      local_EAX_6651 =
           thunk_FUN_004de410((void *)this_00->field_0024,this_00->field_07B6,this_00->field_07BA);
      this_00->field_07BE = local_EAX_6651;
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      uVar17 = extraout_EDX_01;
    }
    SVar40 = this_00->field_06F7;
    if ((((SVar40 == CASE_24) || (SVar40 == CASE_1B)) || (SVar40 == CASE_1D)) &&
       ((this_00->field_071E < 0x14 &&
        (uVar17 = g_playSystem_00802A38->field_00E4 % 0x3c, uVar17 == 0)))) {
      this_00->field_071E = this_00->field_071E + 1;
    }
    if (((this_00->field_06F7 == CASE_17) && (this_00->field_072A < 0x28)) &&
       (uVar17 = g_playSystem_00802A38->field_00E4 % 0xf, uVar17 == 0)) {
      this_00->field_072A = this_00->field_072A + 1;
    }
    if (this_00->field_06F7 == CASE_23) {
      if (this_00->field_072E == 1) {
        uVar17 = g_playSystem_00802A38->field_00E4 % 0x28;
        if ((uVar17 == 0) &&
           (iVar30 = this_00->field_0722 + -1, this_00->field_0722 = iVar30, iVar30 == 0)) {
          this_00->field_072E = 0;
          /* ST_CALLSITE[004508F3]: CALL dword ptr [EDX + 0x90] */
          this_00->vfunc_90(3,0x16d);
          /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
          uVar17 = extraout_EDX_02;
        }
      }
      else if ((this_00->field_0722 < 0x14) &&
              (uVar17 = g_playSystem_00802A38->field_00E4 % 0xf0, uVar17 == 0)) {
        this_00->field_0722 = this_00->field_0722 + 1;
      }
    }
    SVar40 = this_00->field_06F7;
    if ((SVar40 == CASE_16) || (SVar40 == CASE_25)) {
      if (this_00->field_0732 == 1) {
        if ((((SVar40 == CASE_16) && (g_playSystem_00802A38->field_00E4 % 0x1e == 0)) ||
            ((SVar40 == CASE_25 && (g_playSystem_00802A38->field_00E4 % 0x5a == 0)))) &&
           (iVar30 = this_00->field_0726 + -1, this_00->field_0726 = iVar30, iVar30 == 0)) {
          this_00->field_0732 = 0;
          /* ST_CALLSITE[0045099D]: CALL dword ptr [EDX + 0x90] */
          this_00->vfunc_90(3,0x16d);
        }
        thunk_FUN_004945c0((RecoveredRecordView_004945C0_EEF10AEC *)this_00);
        /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
        uVar17 = extraout_EDX_03;
      }
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      else if ((SVar40 == CASE_16) &&

              (iVar30 = thunk_FUN_004e60d0(this_00->field_0024,0x92), uVar17 = extraout_EDX_04,
              0 < iVar30)) {
        iVar30 = this_00->field_0726;
        if (iVar30 < 0x28) {
          uVar17 = g_playSystem_00802A38->field_00E4 % 0x2d;
joined_r0x00450a10:
          if (uVar17 == 0) {
            this_00->field_0726 = iVar30 + 1;
          }
        }
      }
      else {
        iVar30 = this_00->field_0726;
        if (iVar30 < 0x28) {
          uVar17 = g_playSystem_00802A38->field_00E4 % 0x5a;
          goto joined_r0x00450a10;
        }
      }
    }
    iVar30 = this_00->field_0736 + -1;
    this_00->field_0736 = iVar30;
    if (iVar30 < 0) {
      this_00->field_0736 = 0;
    }
    if (this_00->field_0716 == this_00->field_0712) {
      this_00->field_076E = -1;
    }
    if ((-1 < this_00->field_076E) &&
       ((this_00->field_045D != CASE_14 || (this_00->field_05C0 != CASE_3)))) {
      uVar17 = this_00->field_076E % 0x7d;
      if (uVar17 == 0) {
        puVar21 = (byte *)(&this_00->field_01D5);
        /* ST_CALLSITE[00450A94]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
        iVar30 = STT3DSprC::LoadSequence
                           ((STT3DSprC *)puVar21,0xb,PTR_00806774,"forcef0",CASE_1D);
        if (iVar30 != 0) {
          RaiseInternalException
                    (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                     0x41b);
        }

        thunk_FUN_004ad670(puVar21,'\x0e');
        thunk_FUN_004ad150(puVar21,'\v');

        thunk_FUN_004ac700(puVar21,'\v');
        /* ST_CALLSITE[00450AE3]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
        STT3DSprC::StartShow((STT3DSprC *)puVar21,0xb,g_playSystem_00802A38->field_00E4);
        local_104 = 0x65;
        local_9c.arg0.ptr = &local_108;
        local_108 = this_00->field_0776 * 5;
        local_100 = this_00->field_0772;
        local_f4 = 1;
        local_9c.id = MESS_TORPHIT;
        /* ST_CALLSITE[00450B38]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/STBoatC;pointer:/SubmarineTitans/Recovered/STMessage */
        this_00->GetMessage(&local_9c);
        /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
        uVar17 = extraout_EDX_05;
      }
      this_00->field_076E = this_00->field_076E + 1;
    }
    if ((0 < this_00->field_0782) &&
       (iVar30 = this_00->field_0782 + -1, this_00->field_0782 = iVar30, iVar30 == 0)) {
      this_00->field_0786 = 0;
    }
    if (0 < this_00->field_073A) {
      if (this_00->field_0465 == nullptr) {

        puVar21 = (byte *)(thunk_FUN_00631fd0());
        this_00->field_0465 = puVar21;
        /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
        uVar17 = extraout_EDX_07;
        if (puVar21 != nullptr) {
          thunk_FUN_006324c0(puVar21,CASE_0,this_00->field_06F7);
          /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
          uVar17 = extraout_EDX_08;
        }
      }
      else {
        thunk_FUN_00636060(this_00->field_0465,(int)this_00->field_0041,(int)this_00->field_0043,
                           (int)this_00->field_0045,(int)this_00->field_006C,100);
        /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
        uVar17 = extraout_EDX_06;
      }
      if (this_00->field_045D == CASE_3) {
        this_00->field_073A = this_00->field_073A + -1;
      }
      if (this_00->field_045D == CASE_14) {
        if (this_00->field_05C0 == CASE_3) {
          if ((this_00->field_05A6 == nullptr) &&

             (iVar30_mg2E = STPlaySystemC::sub_006E62D0
                                      (g_playSystem_00802A38,this_00->field_05A2,
                                       (int *)&this_00->field_05A6), iVar30_mg2E == -4)) {
            RaiseInternalException
                      (-4,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x43c);
          }
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          uVar17 = *(uint *)(this_00->field_05A6 + 0x12);
          if (uVar17 != this_00->field_0024) goto LAB_00450c1e;
        }
        this_00->field_073A = this_00->field_073A + -1;
      }
LAB_00450c1e:
      if (this_00->field_073A == 0) {
        if (this_00->field_0465 != nullptr) {
          thunk_FUN_00635fd0(this_00->field_0465);
          Library::MSVCRT::FUN_0072e2b0(this_00->field_0465);
          this_00->field_0465 = nullptr;
          /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
          uVar17 = extraout_EDX_09;
        }
        if (this_00->field_045D != CASE_3) {
          local_5c = g_playSystem_00802A38->field_00E4;
          /* ST_CALLSITE[00450C6A]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
          CmdToObj(this_00,CASE_3,&local_5c);
          /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
          uVar17 = extraout_EDX_10;
        }
      }
    }
    /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
    if (((this_00->field_070E == 0) && (uVar17 = g_playSystem_00802A38->field_00E4 % 3, uVar17 == 0)

        ) && (iVar30 = thunk_FUN_004e60d0(this_00->field_0024,10), uVar17 = extraout_EDX_11,
             0 < iVar30)) {
      thunk_FUN_0041c6e0(this_00,(undefined *)this_00->field_070A);
      this_00->field_070E = 1;
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      uVar17 = extraout_EDX_12;
    }
    if (this_00->field_02C0 == 1) {
      this_00->field_02C0 = 0;
      if (this_00->field_06F7 == CASE_9) {

        iVar30 = thunk_FUN_004accd0(&this_00->field_01D5,'\b');
        if ((iVar30 == 0) &&
           /* ST_CALLSITE[00450E0E]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
           (iVar30 = STT3DSprC::LoadSequence
                               ((STT3DSprC *)&this_00->field_01D5,8,PTR_00806774,"expdstrw"
                                ,CASE_1D), iVar30 != 0)) {
          iVar30 = 0x45d;
LAB_00450e28:
          RaiseInternalException
                    (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                     iVar30);
        }
      }
      else if (this_00->field_06F7 == CASE_15) {
        /* ST_CALLSITE[00450DCE]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
        iVar30 = STT3DSprC::LoadSequence
                           ((STT3DSprC *)&this_00->field_01D5,8,PTR_00806774,"expdstrw",
                            CASE_1D);
        if (iVar30 != 0) {
          iVar30 = 0x462;
          goto LAB_00450e28;
        }
      }
      else {

        local_EAX_7866 = thunk_FUN_00492ab0((RecoveredRecordView_00492AB0_CF14C625 *)this_00);
        this_00->field_082A = local_EAX_7866;
        if (6 < (int)local_EAX_7866) {
          this_00->field_082A = 0;
        }
        puVar21 = (byte *)(&this_00->field_01D5);
        /* ST_CALLSITE[00450D29]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
        STT3DSprC::LoadSequence
                  ((STT3DSprC *)puVar21,8,PTR_00806774,
                   "expl_bt0" + this_00->field_082A * 0x45,CASE_1D);
        /* ST_CALLSITE[00450D51]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
        STT3DSprC::LoadSequence
                  ((STT3DSprC *)puVar21,9,PTR_00806764,
                   "expl_bbt0" + this_00->field_082A * 0x45,CASE_1D);
        /* ST_CALLSITE[00450D78]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
        STT3DSprC::LoadSequence
                  ((STT3DSprC *)puVar21,10,PTR_00806774,
                   "expmask3" + this_00->field_082A * 0x45,CASE_1D);

        thunk_FUN_004ac700(puVar21,'\n');
        /* ST_CALLSITE[00450D97]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
        STT3DSprC::StartShow((STT3DSprC *)puVar21,10,g_playSystem_00802A38->field_00E4);
        /* ST_CALLSITE[00450DA6]: CALL 0x004044ee; direct=004044EE STT3DSprC::sub_004ACF20 */
        STT3DSprC::sub_004ACF20((STT3DSprC *)puVar21,PTR_008032b8,0x10);
        /* ST_CALLSITE[00450DAF]: CALL 0x00403233; direct=00403233 STT3DSprC::sub_004ACFE0 */
        STT3DSprC::sub_004ACFE0((STT3DSprC *)puVar21,'\n');
      }
      /* ST_CALLSITE[00450E43]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
      STT3DSprC::StartShow((STT3DSprC *)&this_00->field_01D5,8,g_playSystem_00802A38->field_00E4);
      this_00->field_0455 = 1;
      /* ST_CALLSITE[00450E56]: CALL dword ptr [EDX + 0x2c] */
      dVar15 = this_00->sub_0045EEE0();
      /* ST_CALLSITE[00450E64]: CALL 0x00402f0e; direct=00402F0E STAllPlayersC::sub_004B7710 */
      STAllPlayersC::sub_004B7710
                (g_allPlayers_007FA174,
                 STReplaceLowByte((uint32_t)(dVar15), (uint8_t)(*(undefined1 *)&this_00->field_0024)),dVar15);
      uVar17 = (uint)(byte)this_00->field_0010->field_112D;
      if (this_00->field_0024 == uVar17) {
        /* ST_CALLSITE[00450E82]: CALL 0x00404b8d; direct=00404B8D STAllPlayersC::sub_004D8B70 */
        STAllPlayersC::sub_004D8B70(g_allPlayers_007FA174,(char)this_00->field_0024);
        /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
        uVar17 = extraout_EDX_13;
      }
    }
    if (this_00->field_0455 == 1) {
      /* ST_CALLSITE[00450E98]: CALL dword ptr [EDX + 0xd8] */
      this_00->vfunc_D8();
      puVar21 = (byte *)(&this_00->field_01D5);

      local_c = thunk_FUN_004ac910(puVar21,'\b');
      if (local_c == 2) {
        /* ST_CALLSITE[00450EB9]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
        STT3DSprC::StopShow((STT3DSprC *)puVar21,0xf);
        /* ST_CALLSITE[00450EC1]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
        STT3DSprC::StopShow((STT3DSprC *)puVar21,0);
        /* ST_CALLSITE[00450ECA]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
        STT3DSprC::StopShow((STT3DSprC *)puVar21,1);
        /* ST_CALLSITE[00450ED3]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
        STT3DSprC::StopShow((STT3DSprC *)puVar21,2);
      }
      if (local_c == *(uint *)(&DAT_007a8f11 + this_00->field_082A * 0x45)) {
        /* ST_CALLSITE[00450EFA]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
        STT3DSprC::StopShow((STT3DSprC *)puVar21,0xe);
        /* ST_CALLSITE[00450F03]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
        STT3DSprC::StopShow((STT3DSprC *)puVar21,0xd);
        /* ST_CALLSITE[00450F0C]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
        STT3DSprC::StopShow((STT3DSprC *)puVar21,0xc);
        /* ST_CALLSITE[00450F15]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
        STT3DSprC::StopShow((STT3DSprC *)puVar21,0xb);
        if (this_00->field_06F7 == CASE_21) {
          uVar17 = local_c;

          local_EAX_8444 = thunk_FUN_004ad650((STT3DSprC *)puVar21);
          SVar40 = this_00->field_06F7;
          sVar6 = this_00->field_006C;
          sVar7 = this_00->field_0045;
          sVar5 = this_00->field_0043;
          sVar4 = this_00->field_0041;
        }
        else {
          uVar17 = 0xffffffff;

          local_EAX_8444 = thunk_FUN_004ad650((STT3DSprC *)puVar21);
          sVar6 = this_00->field_006C;
          sVar7 = this_00->field_0045;
          SVar40 = this_00->field_06F7;
          sVar5 = this_00->field_0043;
          sVar4 = this_00->field_0041;
        }
        thunk_FUN_0062b770((int)sVar4,(int)sVar5,(int)sVar7,SVar40,
                           (RecoveredRecord_0062B770_F0FEBA2F *)this_00,(int)sVar6,local_EAX_8444,
                           uVar17);
        if (this_00->field_0465 != nullptr) {
          thunk_FUN_00635fd0(this_00->field_0465);
          Library::MSVCRT::FUN_0072e2b0(this_00->field_0465);
          this_00->field_0465 = nullptr;
        }
      }
      if ((this_00->field_06F7 == CASE_21) && (local_c == 0x18)) {

        thunk_FUN_00637350((int)this_00->field_0041,(int)this_00->field_0043,
                           (int)this_00->field_0045,3,this_00->field_0024,
                           (ushort)this_00->field_0018,this_00->field_0032,0x21,200);
      }
      if (local_c == *(uint *)(&DAT_007a8f15 + this_00->field_082A * 0x45)) {
        thunk_FUN_004ad5e0((STT3DSprC *)puVar21);
      }
      if (((local_c == *(uint *)(&DAT_007a8f19 + this_00->field_082A * 0x45)) &&
          (this_00->field_06F7 != CASE_9)) && (this_00->field_06F7 != CASE_15)) {
        /* ST_CALLSITE[0045103C]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
        STT3DSprC::StartShow((STT3DSprC *)puVar21,9,g_playSystem_00802A38->field_00E4);
      }
      if (((*(int *)(&DAT_007a8f19 + this_00->field_082A * 0x45) < (int)local_c) &&
          (this_00->field_06F7 != CASE_9)) &&
         ((this_00->field_06F7 != CASE_15 &&

          (iVar30 = thunk_FUN_004ac910(puVar21,'\b'),
          iVar30 == *(int *)(&DAT_007a8f0d + this_00->field_082A * 0x45) + -1)))) {
        /* ST_CALLSITE[00451092]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
        STT3DSprC::StopShow((STT3DSprC *)puVar21,8);
      }
      if ((local_c == *(uint *)(&DAT_007a8f21 + this_00->field_082A * 0x45)) &&
         (local_1c != nullptr)) {
        /* ST_CALLSITE[004510C2]: CALL dword ptr [EDX + 0x8] */
        local_1c->sub_00498D20(0x6a,sVar41 + 0x32);
      }
      if ((this_00->field_06F7 == CASE_9) || (this_00->field_06F7 == CASE_15)) {
        if (local_c != 0x27) {
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        local_9c.id = MESS_SYSTEMCLASSTY_000A;
        local_9c.unknown_0c = 0;
        local_9c.unknown_08 = g_playSystem_00802A38->field_0014;
        local_9c.arg0 = (STMessageArg)this_00->field_0008;

        SystemClassTy::PostMessage((SystemClassTy *)g_playSystem_00802A38,&local_9c.unknown_00);
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }

      iVar30 = thunk_FUN_004ac910(puVar21,'\t');
      if (iVar30 != 0x14) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
LAB_0045ad7b:
      local_9c.id = MESS_SYSTEMCLASSTY_000A;
      local_9c.unknown_0c = 0;
      local_9c.unknown_08 = g_playSystem_00802A38->field_0014;
      local_9c.arg0 = (STMessageArg)this_00->field_0008;

      SystemClassTy::PostMessage((SystemClassTy *)g_playSystem_00802A38,&local_9c.unknown_00);
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    if (this_00->field_0459 != 0) {
      switch(this_00->field_0459) {
      case CASE_65:
        /* ST_CALLSITE[00451166]: CALL 0x00403df0; direct=00403DF0 STBoatC::sub_00460360 */
        local_8 = sub_00460360(this_00);
        break;
      case CASE_66:
        /* ST_CALLSITE[0045118C]: CALL 0x00403553; direct=00403553 STBoatC::BackAttack */
        local_8 = BackAttack(this_00,(int *)0x2);
        break;
      case CASE_67:
        /* ST_CALLSITE[00451179]: CALL 0x0040493a; direct=0040493A STBoatC::sub_004620F0 */
        local_8 = sub_004620F0(this_00);
        break;
      case CASE_68:
        /* ST_CALLSITE[004511FE]: CALL 0x004058bc; direct=004058BC STBoatC::BackToDok */
        local_8 = BackToDok(this_00,(int *)0x2);
        break;
      case CASE_69:

        local_8 = thunk_FUN_004732d0((int *)this_00);
        break;
      case CASE_6A:
        /* ST_CALLSITE[0045119F]: CALL 0x004026f3; direct=004026F3 STBoatC::BackPatrol */
        local_8 = BackPatrol(this_00,(int *)0x2);
        break;
      case CASE_6B:

        local_8 = thunk_FUN_004769f0((int *)this_00);
        break;
      case CASE_6C:

        local_8 = thunk_FUN_004803b0((int *)this_00);
        break;
      case CASE_6D:
        /* ST_CALLSITE[00451283]: CALL 0x00402b58; direct=00402B58 STBoatC::BackCapture */
        local_8 = BackCapture(this_00,(int *)0x2);
        break;
      case CASE_6E:

        local_8 = thunk_FUN_00476cc0((int *)this_00);
        break;
      case CASE_6F:
        /* ST_CALLSITE[004512C6]: CALL 0x00405646; direct=00405646 STBoatC::BackAnnih */
        local_8 = BackAnnih(this_00,(int *)0x2);
        break;
      case CASE_70:
        /* ST_CALLSITE[004511B2]: CALL 0x004033dc; direct=004033DC STBoatC::BackLoadRC */
        local_8 = BackLoadRC(this_00,(STBoatC *)0x2);
        break;
      case CASE_71:
        /* ST_CALLSITE[004511EB]: CALL 0x0040344a; direct=0040344A STBoatC::BackUnLoadRC */
        local_8 = BackUnLoadRC(this_00,(STBoatC *)0x2);
        break;
      case CASE_72:

        local_8 = thunk_FUN_004805b0(this_00,(int *)0x2);
        break;
      case CASE_73:
        /* ST_CALLSITE[00451224]: CALL 0x00403f85; direct=00403F85 STBoatC::BackLoadObj */
        local_8 = BackLoadObj(this_00,(int *)0x2);
        break;
      case CASE_74:
        /* ST_CALLSITE[0045124A]: CALL 0x0040399a; direct=0040399A STBoatC::BackUnLoadObj */
        local_8 = BackUnLoadObj(this_00,(int *)0x2);
        break;
      case CASE_75:
        /* ST_CALLSITE[004511C5]: CALL 0x00401113; direct=00401113 STBoatC::BackBuild */
        local_8 = BackBuild(this_00,(int *)0x2);
        break;
      case CASE_76:
        /* ST_CALLSITE[004512D6]: CALL 0x004035e4; direct=004035E4 STBoatC::BackDismant */
        local_8 = BackDismant(this_00,(int *)0x2);
        break;
      case CASE_77:
        local_8 = thunk_FUN_0046d400((int *)this_00,uVar17);
        break;
      case CASE_78:
        /* ST_CALLSITE[00451237]: CALL 0x00402658; direct=00402658 STBoatC::BackWaitLoad */
        local_8 = BackWaitLoad(this_00,(int *)0x2);
        break;
      case CASE_79:
        /* ST_CALLSITE[004512A6]: CALL 0x00405b2d; direct=00405B2D STBoatC::BackTeleport */
        local_8 = BackTeleport(this_00,(int *)0x2);
        break;
      case CASE_7A:

        local_8 = thunk_FUN_004795e0((int *)this_00);
        break;
      case CASE_7B:
        /* ST_CALLSITE[004512B6]: CALL 0x00401938; direct=00401938 STBoatC::BackBring */
        local_8 = BackBring(this_00,(int *)0x2);
        break;
      default:
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x4cb);
      }
      uVar17 = local_8;
      if (local_8 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x4cd);
      }
      if (uVar17 == 0) {
        this_00->field_0459 = 0;
      }
      if (this_00->field_0459 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
    }
    if (this_00->field_02C4 == 1) {
      uVar17 = 0;
      if (0 < this_00->field_073A) {
        local_c = (uint)(this_00->field_02D4 == 1);
        local_78 = (uint)(this_00->field_0314 == 1);
        local_7c = (RecoveredRecordView_0060EA30_C6688588 *)(uint)(this_00->field_02F4 == 1);
        memset(&this_00->field_02CC, 0, 0x5c); /* compiler bulk-zero initialization */
        iVar30 = 0;
        this_00->field_02C4 = 0;
        if (local_c == 1) {
          this_00->field_02D4 = 1;
        }
        if (local_78 == 1) {
          this_00->field_0314 = 1;
        }
        if (local_7c == (RecoveredRecordView_0060EA30_C6688588 *)0x1) {
          this_00->field_02F4 = 1;
        }
        if (((local_c == 1) || (local_78 == 1)) ||
           (local_7c == (RecoveredRecordView_0060EA30_C6688588 *)0x1)) {
          this_00->field_02C4 = 1;
        }
      }
      if (this_00->field_0314 == 1) {
        memset(&this_00->field_02CC, 0, 0x5c); /* compiler bulk-zero initialization */
        iVar30 = 0;
        this_00->field_0314 = 1;
        uVar17 = this_00->field_03C4;
      }
      if ((this_00->field_045D == CASE_14) && (this_00->field_05C0 == CASE_3)) {
        memset(&this_00->field_02CC, 0, 0x5c); /* compiler bulk-zero initialization */
        this_00->field_02C4 = 0;
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      if ((this_00->field_02CC == 1) && (uVar17 < this_00->field_0328)) {
        uVar17 = this_00->field_0328;
      }
      if ((this_00->field_02D0 == 1) && (uVar17 < this_00->field_0332)) {
        uVar17 = this_00->field_0332;
      }
      if ((this_00->field_02D4 == 1) && (uVar17 < this_00->field_0343)) {
        uVar17 = this_00->field_0343;
      }
      if ((this_00->field_02E0 == 1) && (uVar17 < this_00->field_0347)) {
        uVar17 = this_00->field_0347;
      }
      if ((this_00->field_02F8 == 1) && (uVar17 < this_00->field_034F)) {
        uVar17 = this_00->field_034F;
      }
      if ((this_00->field_030C == 1) && (uVar17 < this_00->field_036F)) {
        uVar17 = this_00->field_036F;
      }
      if ((this_00->field_02FC == 1) && (uVar17 < this_00->field_0392)) {
        uVar17 = this_00->field_0392;
      }
      if ((this_00->field_02D8 == 1) && (uVar17 < this_00->field_039C)) {
        uVar17 = this_00->field_039C;
      }
      if ((this_00->field_02DC == 1) && (uVar17 < this_00->field_03A6)) {
        uVar17 = this_00->field_03A6;
      }
      if ((this_00->field_0304 == 1) && (uVar17 < this_00->field_03B6)) {
        uVar17 = this_00->field_03B6;
      }
      if ((this_00->field_0314 == 1) && (uVar17 < this_00->field_03C4)) {
        uVar17 = this_00->field_03C4;
      }
      if ((this_00->field_0308 == 1) && (uVar17 < this_00->field_03CA)) {
        uVar17 = this_00->field_03CA;
      }
      if ((this_00->field_02E4 == 1) && (uVar17 < this_00->field_03D4)) {
        uVar17 = this_00->field_03D4;
      }
      if ((this_00->field_02F0 == 1) && (uVar17 < this_00->field_03DE)) {
        uVar17 = this_00->field_03DE;
      }
      if ((this_00->field_02EC == 1) && (uVar17 < this_00->field_03E8)) {
        uVar17 = this_00->field_03E8;
      }
      if ((this_00->field_031C == 1) && (uVar17 < this_00->field_03F3)) {
        uVar17 = this_00->field_03F3;
      }
      if ((this_00->field_0318 == 1) && (uVar17 < this_00->field_0401)) {
        uVar17 = this_00->field_0401;
      }
      if ((this_00->field_0320 == 1) && (uVar17 < this_00->field_0415)) {
        uVar17 = this_00->field_0415;
      }
      if ((this_00->field_02F4 == 1) && (uVar17 < this_00->field_041F)) {
        uVar17 = this_00->field_041F;
      }
      if ((this_00->field_0310 == 1) && (uVar17 < this_00->field_0429)) {
        uVar17 = this_00->field_0429;
      }
      if ((this_00->field_02E8 == 1) && (uVar17 < this_00->field_0437)) {
        uVar17 = this_00->field_0437;
      }
      if ((this_00->field_0300 == 1) && (uVar17 < this_00->field_0447)) {
        uVar17 = this_00->field_0447;
      }
      if ((this_00->field_02CC == 1) && (this_00->field_0328 < uVar17)) {
        this_00->field_02CC = 0;
      }
      if ((this_00->field_02D0 == 1) && (this_00->field_0332 < uVar17)) {
        this_00->field_02D0 = 0;
      }
      if ((this_00->field_02D4 == 1) && (this_00->field_0343 < uVar17)) {
        this_00->field_02D4 = 0;
      }
      if ((this_00->field_02E0 == 1) && (this_00->field_0347 < uVar17)) {
        this_00->field_02E0 = 0;
      }
      if ((this_00->field_02F8 == 1) && (this_00->field_034F < uVar17)) {
        this_00->field_02F8 = 0;
      }
      if ((this_00->field_030C == 1) && (this_00->field_036F < uVar17)) {
        this_00->field_030C = 0;
      }
      if ((this_00->field_02FC == 1) && (this_00->field_0392 < uVar17)) {
        this_00->field_02FC = 0;
      }
      if ((this_00->field_02D8 == 1) && (this_00->field_039C < uVar17)) {
        this_00->field_02D8 = 0;
      }
      if ((this_00->field_02DC == 1) && (this_00->field_03A6 < uVar17)) {
        this_00->field_02DC = 0;
      }
      if ((this_00->field_0304 == 1) && (this_00->field_03B6 < uVar17)) {
        this_00->field_0304 = 0;
      }
      if ((this_00->field_0314 == 1) && (this_00->field_03C4 < uVar17)) {
        this_00->field_0314 = 0;
      }
      if ((this_00->field_0308 == 1) && (this_00->field_03CA < uVar17)) {
        this_00->field_0308 = 0;
      }
      if ((this_00->field_02E4 == 1) && (this_00->field_03D4 < uVar17)) {
        this_00->field_02E4 = 0;
      }
      if ((this_00->field_02F0 == 1) && (this_00->field_03DE < uVar17)) {
        this_00->field_02F0 = 0;
      }
      if ((this_00->field_02EC == 1) && (this_00->field_03E8 < uVar17)) {
        this_00->field_02EC = 0;
      }
      if ((this_00->field_031C == 1) && (this_00->field_03F3 < uVar17)) {
        this_00->field_031C = 0;
      }
      if ((this_00->field_0318 == 1) && (this_00->field_0401 < uVar17)) {
        this_00->field_0318 = 0;
      }
      if ((this_00->field_0320 == 1) && (this_00->field_0415 < uVar17)) {
        this_00->field_0320 = 0;
      }
      if ((this_00->field_02F4 == 1) && (this_00->field_041F < uVar17)) {
        this_00->field_02F4 = 0;
      }
      if ((this_00->field_0310 == 1) && (this_00->field_0429 < uVar17)) {
        this_00->field_0310 = 0;
      }
      if ((this_00->field_02E8 == 1) && (this_00->field_0437 < uVar17)) {
        this_00->field_02E8 = 0;
      }
      if ((this_00->field_0300 == 1) && (this_00->field_0447 < uVar17)) {
        this_00->field_0300 = 0;
      }
      if (this_00->field_02D0 == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_2;

          local_EAX_10750 = thunk_FUN_00462180(this_00,0);
          local_8 = local_EAX_10750;
          if (local_EAX_10750 == -1) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0x532);
          }
          if (local_EAX_10750 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = CASE_3;
          /* ST_CALLSITE[0045186D]: CALL 0x00403a2b; direct=00403A2B STBoatC::Defence */
          local_EAX_10813 = Defence(this_00,0);
          if (local_EAX_10813 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar30 = 0x536;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          /* ST_CALLSITE[004518B8]: CALL 0x00403df0; direct=00403DF0 STBoatC::sub_00460360 */
          local_EAX_10888 = sub_00460360(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x53e;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          /* ST_CALLSITE[00451924]: CALL 0x00403553; direct=00403553 STBoatC::BackAttack */
          local_EAX_10888 = BackAttack(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x549;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          /* ST_CALLSITE[004518E8]: CALL 0x0040493a; direct=0040493A STBoatC::sub_004620F0 */
          local_EAX_10888 = sub_004620F0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x544;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          /* ST_CALLSITE[00451A74]: CALL 0x004058bc; direct=004058BC STBoatC::BackToDok */
          local_EAX_10888 = BackToDok(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x567;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;

          local_EAX_10888 = thunk_FUN_004732d0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x56c;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          /* ST_CALLSITE[00451960]: CALL 0x004026f3; direct=004026F3 STBoatC::BackPatrol */
          local_EAX_10888 = BackPatrol(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x54e;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;

          local_EAX_10888 = thunk_FUN_004769f0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x580;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;

          local_EAX_10888 = thunk_FUN_004803b0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x5a8;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          /* ST_CALLSITE[00451C00]: CALL 0x00402b58; direct=00402B58 STBoatC::BackCapture */
          local_EAX_10888 = BackCapture(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x58a;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;

          local_EAX_10888 = thunk_FUN_00476cc0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x585;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          /* ST_CALLSITE[00451CD8]: CALL 0x00405646; direct=00405646 STBoatC::BackAnnih */
          local_EAX_10888 = BackAnnih(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x59e;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          /* ST_CALLSITE[00451990]: CALL 0x004033dc; direct=004033DC STBoatC::BackLoadRC */
          local_EAX_10888 = BackLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x553;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          /* ST_CALLSITE[00451A38]: CALL 0x0040344a; direct=0040344A STBoatC::BackUnLoadRC */
          local_EAX_10888 = BackUnLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x562;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;

          local_EAX_10888 = thunk_FUN_004805b0(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x5ad;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          /* ST_CALLSITE[00451AE0]: CALL 0x00403f85; direct=00403F85 STBoatC::BackLoadObj */
          local_EAX_10888 = BackLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x571;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          /* ST_CALLSITE[00451B58]: CALL 0x0040399a; direct=0040399A STBoatC::BackUnLoadObj */
          local_EAX_10888 = BackUnLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x57b;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          /* ST_CALLSITE[004519CC]: CALL 0x00401113; direct=00401113 STBoatC::BackBuild */
          local_EAX_10888 = BackBuild(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x558;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          /* ST_CALLSITE[00451D14]: CALL 0x004035e4; direct=004035E4 STBoatC::BackDismant */
          local_EAX_10888 = BackDismant(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x5a3;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = thunk_FUN_0046d400((int *)this_00,uVar17);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x55d;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          /* ST_CALLSITE[00451B1C]: CALL 0x00402658; direct=00402658 STBoatC::BackWaitLoad */
          local_EAX_10888 = BackWaitLoad(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x576;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          /* ST_CALLSITE[00451C6C]: CALL 0x00405b2d; direct=00405B2D STBoatC::BackTeleport */
          local_EAX_10888 = BackTeleport(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x594;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;

          local_EAX_10888 = thunk_FUN_004795e0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x58f;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          /* ST_CALLSITE[00451CA8]: CALL 0x00401938; direct=00401938 STBoatC::BackBring */
          local_EAX_10888 = BackBring(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x599;
          local_8 = local_EAX_10888;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_02F8 == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_C;
          /* ST_CALLSITE[00451DCC]: CALL 0x00405434; direct=00405434 STBoatC::LoadRC */
          local_EAX_12188 = LoadRC(this_00,nullptr);
          if (local_EAX_12188 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar30 = 0x5b9;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          /* ST_CALLSITE[00451E17]: CALL 0x00403df0; direct=00403DF0 STBoatC::sub_00460360 */
          local_EAX_10888 = sub_00460360(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x5c0;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          /* ST_CALLSITE[00451E83]: CALL 0x00403553; direct=00403553 STBoatC::BackAttack */
          local_EAX_10888 = BackAttack(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x5cb;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          /* ST_CALLSITE[00451E47]: CALL 0x0040493a; direct=0040493A STBoatC::sub_004620F0 */
          local_EAX_10888 = sub_004620F0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x5c6;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          /* ST_CALLSITE[00451FD3]: CALL 0x004058bc; direct=004058BC STBoatC::BackToDok */
          local_EAX_10888 = BackToDok(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x5e9;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;

          local_EAX_10888 = thunk_FUN_004732d0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x5ee;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          /* ST_CALLSITE[00451EBF]: CALL 0x004026f3; direct=004026F3 STBoatC::BackPatrol */
          local_EAX_10888 = BackPatrol(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x5d0;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;

          local_EAX_10888 = thunk_FUN_004769f0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x602;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;

          local_EAX_10888 = thunk_FUN_004803b0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x62a;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          /* ST_CALLSITE[0045215F]: CALL 0x00402b58; direct=00402B58 STBoatC::BackCapture */
          local_EAX_10888 = BackCapture(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x60c;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;

          local_EAX_10888 = thunk_FUN_00476cc0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x607;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          /* ST_CALLSITE[00452237]: CALL 0x00405646; direct=00405646 STBoatC::BackAnnih */
          local_EAX_10888 = BackAnnih(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x620;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          /* ST_CALLSITE[00451EEF]: CALL 0x004033dc; direct=004033DC STBoatC::BackLoadRC */
          local_EAX_10888 = BackLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x5d5;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          /* ST_CALLSITE[00451F97]: CALL 0x0040344a; direct=0040344A STBoatC::BackUnLoadRC */
          local_EAX_10888 = BackUnLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x5e4;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;

          local_EAX_10888 = thunk_FUN_004805b0(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x62f;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          /* ST_CALLSITE[0045203F]: CALL 0x00403f85; direct=00403F85 STBoatC::BackLoadObj */
          local_EAX_10888 = BackLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x5f3;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          /* ST_CALLSITE[004520B7]: CALL 0x0040399a; direct=0040399A STBoatC::BackUnLoadObj */
          local_EAX_10888 = BackUnLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x5fd;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          /* ST_CALLSITE[00451F2B]: CALL 0x00401113; direct=00401113 STBoatC::BackBuild */
          local_EAX_10888 = BackBuild(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x5da;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          /* ST_CALLSITE[00452273]: CALL 0x004035e4; direct=004035E4 STBoatC::BackDismant */
          local_EAX_10888 = BackDismant(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x625;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = thunk_FUN_0046d400((int *)this_00,uVar17);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x5df;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          /* ST_CALLSITE[0045207B]: CALL 0x00402658; direct=00402658 STBoatC::BackWaitLoad */
          local_EAX_10888 = BackWaitLoad(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x5f8;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          /* ST_CALLSITE[004521CB]: CALL 0x00405b2d; direct=00405B2D STBoatC::BackTeleport */
          local_EAX_10888 = BackTeleport(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x616;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;

          local_EAX_10888 = thunk_FUN_004795e0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x611;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          /* ST_CALLSITE[00452207]: CALL 0x00401938; direct=00401938 STBoatC::BackBring */
          local_EAX_10888 = BackBring(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x61b;
          local_8 = local_EAX_10888;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_02CC == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_1;
          iVar30 = thunk_FUN_004602e0(this_00,0);
          local_8 = iVar30;
          if (iVar30 == -1) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0x63b);
          }
          if (iVar30 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = CASE_3;
          /* ST_CALLSITE[0045236A]: CALL 0x00403a2b; direct=00403A2B STBoatC::Defence */
          local_EAX_13626 = Defence(this_00,0);
          if (local_EAX_13626 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar30 = 0x63f;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          /* ST_CALLSITE[004523B4]: CALL 0x00403df0; direct=00403DF0 STBoatC::sub_00460360 */
          local_EAX_10888 = sub_00460360(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x647;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          /* ST_CALLSITE[0045242C]: CALL 0x00403553; direct=00403553 STBoatC::BackAttack */
          local_EAX_10888 = BackAttack(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x652;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          /* ST_CALLSITE[004523F0]: CALL 0x0040493a; direct=0040493A STBoatC::sub_004620F0 */
          local_EAX_10888 = sub_004620F0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x64d;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          /* ST_CALLSITE[0045257C]: CALL 0x004058bc; direct=004058BC STBoatC::BackToDok */
          local_EAX_10888 = BackToDok(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x670;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;

          local_EAX_10888 = thunk_FUN_004732d0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x675;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          /* ST_CALLSITE[0045245C]: CALL 0x004026f3; direct=004026F3 STBoatC::BackPatrol */
          local_EAX_10888 = BackPatrol(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x657;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;

          local_EAX_10888 = thunk_FUN_004769f0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x689;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;

          local_EAX_10888 = thunk_FUN_004803b0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x6b1;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          /* ST_CALLSITE[004526FC]: CALL 0x00402b58; direct=00402B58 STBoatC::BackCapture */
          local_EAX_10888 = BackCapture(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x693;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;

          local_EAX_10888 = thunk_FUN_00476cc0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x68e;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          /* ST_CALLSITE[004527E0]: CALL 0x00405646; direct=00405646 STBoatC::BackAnnih */
          local_EAX_10888 = BackAnnih(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x6a7;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          /* ST_CALLSITE[00452498]: CALL 0x004033dc; direct=004033DC STBoatC::BackLoadRC */
          local_EAX_10888 = BackLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x65c;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          /* ST_CALLSITE[00452540]: CALL 0x0040344a; direct=0040344A STBoatC::BackUnLoadRC */
          local_EAX_10888 = BackUnLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x66b;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;

          local_EAX_10888 = thunk_FUN_004805b0(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x6b6;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          /* ST_CALLSITE[004525E8]: CALL 0x00403f85; direct=00403F85 STBoatC::BackLoadObj */
          local_EAX_10888 = BackLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x67a;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          /* ST_CALLSITE[00452654]: CALL 0x0040399a; direct=0040399A STBoatC::BackUnLoadObj */
          local_EAX_10888 = BackUnLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x684;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          /* ST_CALLSITE[004524D4]: CALL 0x00401113; direct=00401113 STBoatC::BackBuild */
          local_EAX_10888 = BackBuild(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x661;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          /* ST_CALLSITE[0045281C]: CALL 0x004035e4; direct=004035E4 STBoatC::BackDismant */
          local_EAX_10888 = BackDismant(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x6ac;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = thunk_FUN_0046d400((int *)this_00,uVar17);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x666;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          /* ST_CALLSITE[00452624]: CALL 0x00402658; direct=00402658 STBoatC::BackWaitLoad */
          local_EAX_10888 = BackWaitLoad(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x67f;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          /* ST_CALLSITE[00452774]: CALL 0x00405b2d; direct=00405B2D STBoatC::BackTeleport */
          local_EAX_10888 = BackTeleport(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x69d;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;

          local_EAX_10888 = thunk_FUN_004795e0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x698;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          /* ST_CALLSITE[004527A4]: CALL 0x00401938; direct=00401938 STBoatC::BackBring */
          local_EAX_10888 = BackBring(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x6a2;
          local_8 = local_EAX_10888;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_02E0 == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_6;

          local_EAX_15012 = thunk_FUN_004658d0(this_00,0);
          if (local_EAX_15012 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar30 = 0x6c2;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          /* ST_CALLSITE[0045291E]: CALL 0x00403df0; direct=00403DF0 STBoatC::sub_00460360 */
          local_EAX_10888 = sub_00460360(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x6c9;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          /* ST_CALLSITE[00452996]: CALL 0x00403553; direct=00403553 STBoatC::BackAttack */
          local_EAX_10888 = BackAttack(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x6d4;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          /* ST_CALLSITE[0045295A]: CALL 0x0040493a; direct=0040493A STBoatC::sub_004620F0 */
          local_EAX_10888 = sub_004620F0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x6cf;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          /* ST_CALLSITE[00452AE6]: CALL 0x004058bc; direct=004058BC STBoatC::BackToDok */
          local_EAX_10888 = BackToDok(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x6f2;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;

          local_EAX_10888 = thunk_FUN_004732d0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x6f7;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          /* ST_CALLSITE[004529C6]: CALL 0x004026f3; direct=004026F3 STBoatC::BackPatrol */
          local_EAX_10888 = BackPatrol(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x6d9;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;

          local_EAX_10888 = thunk_FUN_004769f0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x70b;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;

          local_EAX_10888 = thunk_FUN_004803b0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x733;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          /* ST_CALLSITE[00452C66]: CALL 0x00402b58; direct=00402B58 STBoatC::BackCapture */
          local_EAX_10888 = BackCapture(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x715;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;

          local_EAX_10888 = thunk_FUN_00476cc0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x710;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          /* ST_CALLSITE[00452D4A]: CALL 0x00405646; direct=00405646 STBoatC::BackAnnih */
          local_EAX_10888 = BackAnnih(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x729;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          /* ST_CALLSITE[00452A02]: CALL 0x004033dc; direct=004033DC STBoatC::BackLoadRC */
          local_EAX_10888 = BackLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x6de;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          /* ST_CALLSITE[00452AAA]: CALL 0x0040344a; direct=0040344A STBoatC::BackUnLoadRC */
          local_EAX_10888 = BackUnLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x6ed;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;

          local_EAX_10888 = thunk_FUN_004805b0(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x738;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          /* ST_CALLSITE[00452B52]: CALL 0x00403f85; direct=00403F85 STBoatC::BackLoadObj */
          local_EAX_10888 = BackLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x6fc;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          /* ST_CALLSITE[00452BBE]: CALL 0x0040399a; direct=0040399A STBoatC::BackUnLoadObj */
          local_EAX_10888 = BackUnLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x706;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          /* ST_CALLSITE[00452A3E]: CALL 0x00401113; direct=00401113 STBoatC::BackBuild */
          local_EAX_10888 = BackBuild(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x6e3;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          /* ST_CALLSITE[00452D86]: CALL 0x004035e4; direct=004035E4 STBoatC::BackDismant */
          local_EAX_10888 = BackDismant(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x72e;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = thunk_FUN_0046d400((int *)this_00,uVar17);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x6e8;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          /* ST_CALLSITE[00452B8E]: CALL 0x00402658; direct=00402658 STBoatC::BackWaitLoad */
          local_EAX_10888 = BackWaitLoad(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x701;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          /* ST_CALLSITE[00452CDE]: CALL 0x00405b2d; direct=00405B2D STBoatC::BackTeleport */
          local_EAX_10888 = BackTeleport(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x71f;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;

          local_EAX_10888 = thunk_FUN_004795e0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x71a;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          /* ST_CALLSITE[00452D0E]: CALL 0x00401938; direct=00401938 STBoatC::BackBring */
          local_EAX_10888 = BackBring(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x724;
          local_8 = local_EAX_10888;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_030C == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_11;
          /* ST_CALLSITE[00452E3E]: CALL 0x00404543; direct=00404543 STBoatC::Build */
          local_EAX_16398 = Build(this_00,nullptr);
          local_8 = local_EAX_16398;
          if (local_EAX_16398 == -1) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0x744);
          }
          if (local_EAX_16398 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = CASE_3;
          /* ST_CALLSITE[00452E7C]: CALL 0x00403a2b; direct=00403A2B STBoatC::Defence */
          local_EAX_16460 = Defence(this_00,0);
          if (local_EAX_16460 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar30 = 0x748;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          /* ST_CALLSITE[00452EBB]: CALL 0x00403df0; direct=00403DF0 STBoatC::sub_00460360 */
          local_EAX_10888 = sub_00460360(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x750;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          /* ST_CALLSITE[00452F27]: CALL 0x00403553; direct=00403553 STBoatC::BackAttack */
          local_EAX_10888 = BackAttack(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x75b;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          /* ST_CALLSITE[00452EF7]: CALL 0x0040493a; direct=0040493A STBoatC::sub_004620F0 */
          local_EAX_10888 = sub_004620F0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x756;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          /* ST_CALLSITE[00453077]: CALL 0x004058bc; direct=004058BC STBoatC::BackToDok */
          local_EAX_10888 = BackToDok(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x779;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;

          local_EAX_10888 = thunk_FUN_004732d0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x77e;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          /* ST_CALLSITE[00452F63]: CALL 0x004026f3; direct=004026F3 STBoatC::BackPatrol */
          local_EAX_10888 = BackPatrol(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x760;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;

          local_EAX_10888 = thunk_FUN_004769f0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x792;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;

          local_EAX_10888 = thunk_FUN_004803b0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x7ba;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          /* ST_CALLSITE[00453203]: CALL 0x00402b58; direct=00402B58 STBoatC::BackCapture */
          local_EAX_10888 = BackCapture(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x79c;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;

          local_EAX_10888 = thunk_FUN_00476cc0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x797;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          /* ST_CALLSITE[004532E7]: CALL 0x00405646; direct=00405646 STBoatC::BackAnnih */
          local_EAX_10888 = BackAnnih(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x7b0;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          /* ST_CALLSITE[00452F9F]: CALL 0x004033dc; direct=004033DC STBoatC::BackLoadRC */
          local_EAX_10888 = BackLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x765;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          /* ST_CALLSITE[00453047]: CALL 0x0040344a; direct=0040344A STBoatC::BackUnLoadRC */
          local_EAX_10888 = BackUnLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x774;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;

          local_EAX_10888 = thunk_FUN_004805b0(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x7bf;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          /* ST_CALLSITE[004530EF]: CALL 0x00403f85; direct=00403F85 STBoatC::BackLoadObj */
          local_EAX_10888 = BackLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x783;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          /* ST_CALLSITE[0045315B]: CALL 0x0040399a; direct=0040399A STBoatC::BackUnLoadObj */
          local_EAX_10888 = BackUnLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x78d;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          /* ST_CALLSITE[00452FCF]: CALL 0x00401113; direct=00401113 STBoatC::BackBuild */
          local_EAX_10888 = BackBuild(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x76a;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          /* ST_CALLSITE[00453317]: CALL 0x004035e4; direct=004035E4 STBoatC::BackDismant */
          local_EAX_10888 = BackDismant(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x7b5;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = thunk_FUN_0046d400((int *)this_00,uVar17);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x76f;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          /* ST_CALLSITE[0045311F]: CALL 0x00402658; direct=00402658 STBoatC::BackWaitLoad */
          local_EAX_10888 = BackWaitLoad(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x788;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          /* ST_CALLSITE[0045326F]: CALL 0x00405b2d; direct=00405B2D STBoatC::BackTeleport */
          local_EAX_10888 = BackTeleport(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x7a6;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;

          local_EAX_10888 = thunk_FUN_004795e0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x7a1;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          /* ST_CALLSITE[004532AB]: CALL 0x00401938; direct=00401938 STBoatC::BackBring */
          local_EAX_10888 = BackBring(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x7ab;
          local_8 = local_EAX_10888;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_02FC == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_D;
          /* ST_CALLSITE[004533CF]: CALL 0x00404c91; direct=00404C91 STBoatC::UnLoadRC */
          local_EAX_17823 = UnLoadRC(this_00,0);
          if (local_EAX_17823 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar30 = 0x7cb;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          /* ST_CALLSITE[0045340E]: CALL 0x00403df0; direct=00403DF0 STBoatC::sub_00460360 */
          local_EAX_10888 = sub_00460360(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x7d2;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          /* ST_CALLSITE[0045347A]: CALL 0x00403553; direct=00403553 STBoatC::BackAttack */
          local_EAX_10888 = BackAttack(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x7dc;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          /* ST_CALLSITE[0045344A]: CALL 0x0040493a; direct=0040493A STBoatC::sub_004620F0 */
          local_EAX_10888 = sub_004620F0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x7d7;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          /* ST_CALLSITE[004535CA]: CALL 0x004058bc; direct=004058BC STBoatC::BackToDok */
          local_EAX_10888 = BackToDok(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x7fa;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;

          local_EAX_10888 = thunk_FUN_004732d0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x7ff;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          /* ST_CALLSITE[004534B6]: CALL 0x004026f3; direct=004026F3 STBoatC::BackPatrol */
          local_EAX_10888 = BackPatrol(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x7e1;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;

          local_EAX_10888 = thunk_FUN_004769f0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x813;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;

          local_EAX_10888 = thunk_FUN_004803b0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x83b;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          /* ST_CALLSITE[00453756]: CALL 0x00402b58; direct=00402B58 STBoatC::BackCapture */
          local_EAX_10888 = BackCapture(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x81d;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;

          local_EAX_10888 = thunk_FUN_00476cc0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x818;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          /* ST_CALLSITE[0045383A]: CALL 0x00405646; direct=00405646 STBoatC::BackAnnih */
          local_EAX_10888 = BackAnnih(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x831;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          /* ST_CALLSITE[004534F2]: CALL 0x004033dc; direct=004033DC STBoatC::BackLoadRC */
          local_EAX_10888 = BackLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x7e6;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          /* ST_CALLSITE[0045359A]: CALL 0x0040344a; direct=0040344A STBoatC::BackUnLoadRC */
          local_EAX_10888 = BackUnLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x7f5;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;

          local_EAX_10888 = thunk_FUN_004805b0(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x840;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          /* ST_CALLSITE[00453642]: CALL 0x00403f85; direct=00403F85 STBoatC::BackLoadObj */
          local_EAX_10888 = BackLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x804;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          /* ST_CALLSITE[004536AE]: CALL 0x0040399a; direct=0040399A STBoatC::BackUnLoadObj */
          local_EAX_10888 = BackUnLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x80e;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          /* ST_CALLSITE[00453522]: CALL 0x00401113; direct=00401113 STBoatC::BackBuild */
          local_EAX_10888 = BackBuild(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x7eb;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          /* ST_CALLSITE[0045386A]: CALL 0x004035e4; direct=004035E4 STBoatC::BackDismant */
          local_EAX_10888 = BackDismant(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x836;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = thunk_FUN_0046d400((int *)this_00,uVar17);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x7f0;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          /* ST_CALLSITE[00453672]: CALL 0x00402658; direct=00402658 STBoatC::BackWaitLoad */
          local_EAX_10888 = BackWaitLoad(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x809;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          /* ST_CALLSITE[004537C2]: CALL 0x00405b2d; direct=00405B2D STBoatC::BackTeleport */
          local_EAX_10888 = BackTeleport(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x827;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;

          local_EAX_10888 = thunk_FUN_004795e0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x822;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          /* ST_CALLSITE[004537FE]: CALL 0x00401938; direct=00401938 STBoatC::BackBring */
          local_EAX_10888 = BackBring(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x82c;
          local_8 = local_EAX_10888;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_02D8 == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_4;
          /* ST_CALLSITE[00453922]: CALL 0x00403eb8; direct=00403EB8 STBoatC::ToDok */
          local_EAX_19186 = ToDok(this_00,0);
          if (local_EAX_19186 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar30 = 0x84c;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          /* ST_CALLSITE[00453961]: CALL 0x00403df0; direct=00403DF0 STBoatC::sub_00460360 */
          local_EAX_10888 = sub_00460360(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x853;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          /* ST_CALLSITE[004539CD]: CALL 0x00403553; direct=00403553 STBoatC::BackAttack */
          local_EAX_10888 = BackAttack(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x85d;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          /* ST_CALLSITE[0045399D]: CALL 0x0040493a; direct=0040493A STBoatC::sub_004620F0 */
          local_EAX_10888 = sub_004620F0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x858;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          /* ST_CALLSITE[00453B1D]: CALL 0x004058bc; direct=004058BC STBoatC::BackToDok */
          local_EAX_10888 = BackToDok(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x87b;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;

          local_EAX_10888 = thunk_FUN_004732d0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x880;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          /* ST_CALLSITE[00453A09]: CALL 0x004026f3; direct=004026F3 STBoatC::BackPatrol */
          local_EAX_10888 = BackPatrol(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x862;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;

          local_EAX_10888 = thunk_FUN_004769f0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x894;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;

          local_EAX_10888 = thunk_FUN_004803b0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x8bc;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          /* ST_CALLSITE[00453CA9]: CALL 0x00402b58; direct=00402B58 STBoatC::BackCapture */
          local_EAX_10888 = BackCapture(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x89e;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;

          local_EAX_10888 = thunk_FUN_00476cc0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x899;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          /* ST_CALLSITE[00453D8D]: CALL 0x00405646; direct=00405646 STBoatC::BackAnnih */
          local_EAX_10888 = BackAnnih(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x8b2;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          /* ST_CALLSITE[00453A45]: CALL 0x004033dc; direct=004033DC STBoatC::BackLoadRC */
          local_EAX_10888 = BackLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x867;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          /* ST_CALLSITE[00453AED]: CALL 0x0040344a; direct=0040344A STBoatC::BackUnLoadRC */
          local_EAX_10888 = BackUnLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x876;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;

          local_EAX_10888 = thunk_FUN_004805b0(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x8c1;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          /* ST_CALLSITE[00453B95]: CALL 0x00403f85; direct=00403F85 STBoatC::BackLoadObj */
          local_EAX_10888 = BackLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x885;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          /* ST_CALLSITE[00453C01]: CALL 0x0040399a; direct=0040399A STBoatC::BackUnLoadObj */
          local_EAX_10888 = BackUnLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x88f;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          /* ST_CALLSITE[00453A75]: CALL 0x00401113; direct=00401113 STBoatC::BackBuild */
          local_EAX_10888 = BackBuild(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x86c;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          /* ST_CALLSITE[00453DBD]: CALL 0x004035e4; direct=004035E4 STBoatC::BackDismant */
          local_EAX_10888 = BackDismant(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x8b7;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = thunk_FUN_0046d400((int *)this_00,uVar17);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x871;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          /* ST_CALLSITE[00453BC5]: CALL 0x00402658; direct=00402658 STBoatC::BackWaitLoad */
          local_EAX_10888 = BackWaitLoad(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x88a;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          /* ST_CALLSITE[00453D15]: CALL 0x00405b2d; direct=00405B2D STBoatC::BackTeleport */
          local_EAX_10888 = BackTeleport(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x8a8;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;

          local_EAX_10888 = thunk_FUN_004795e0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x8a3;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          /* ST_CALLSITE[00453D51]: CALL 0x00401938; direct=00401938 STBoatC::BackBring */
          local_EAX_10888 = BackBring(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x8ad;
          local_8 = local_EAX_10888;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_02DC == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_5;
          /* ST_CALLSITE[00453E75]: CALL 0x00404dcc; direct=00404DCC STBoatC::Guard */
          local_EAX_20549 = Guard(this_00,0);
          if (local_EAX_20549 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar30 = 0x8cd;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          /* ST_CALLSITE[00453EB4]: CALL 0x00403df0; direct=00403DF0 STBoatC::sub_00460360 */
          local_EAX_10888 = sub_00460360(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x8d4;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          /* ST_CALLSITE[00453F20]: CALL 0x00403553; direct=00403553 STBoatC::BackAttack */
          local_EAX_10888 = BackAttack(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x8de;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          /* ST_CALLSITE[00453EF0]: CALL 0x0040493a; direct=0040493A STBoatC::sub_004620F0 */
          local_EAX_10888 = sub_004620F0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x8d9;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          /* ST_CALLSITE[00454070]: CALL 0x004058bc; direct=004058BC STBoatC::BackToDok */
          local_EAX_10888 = BackToDok(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x8fc;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;

          local_EAX_10888 = thunk_FUN_004732d0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x901;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          /* ST_CALLSITE[00453F5C]: CALL 0x004026f3; direct=004026F3 STBoatC::BackPatrol */
          local_EAX_10888 = BackPatrol(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x8e3;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;

          local_EAX_10888 = thunk_FUN_004769f0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x915;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;

          local_EAX_10888 = thunk_FUN_004803b0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x93d;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          /* ST_CALLSITE[004541FC]: CALL 0x00402b58; direct=00402B58 STBoatC::BackCapture */
          local_EAX_10888 = BackCapture(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x91f;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;

          local_EAX_10888 = thunk_FUN_00476cc0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x91a;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          /* ST_CALLSITE[004542E0]: CALL 0x00405646; direct=00405646 STBoatC::BackAnnih */
          local_EAX_10888 = BackAnnih(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x933;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          /* ST_CALLSITE[00453F98]: CALL 0x004033dc; direct=004033DC STBoatC::BackLoadRC */
          local_EAX_10888 = BackLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x8e8;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          /* ST_CALLSITE[00454040]: CALL 0x0040344a; direct=0040344A STBoatC::BackUnLoadRC */
          local_EAX_10888 = BackUnLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x8f7;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;

          local_EAX_10888 = thunk_FUN_004805b0(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x942;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          /* ST_CALLSITE[004540E8]: CALL 0x00403f85; direct=00403F85 STBoatC::BackLoadObj */
          local_EAX_10888 = BackLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x906;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          /* ST_CALLSITE[00454154]: CALL 0x0040399a; direct=0040399A STBoatC::BackUnLoadObj */
          local_EAX_10888 = BackUnLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x910;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          /* ST_CALLSITE[00453FC8]: CALL 0x00401113; direct=00401113 STBoatC::BackBuild */
          local_EAX_10888 = BackBuild(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x8ed;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          /* ST_CALLSITE[00454310]: CALL 0x004035e4; direct=004035E4 STBoatC::BackDismant */
          local_EAX_10888 = BackDismant(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x938;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = thunk_FUN_0046d400((int *)this_00,uVar17);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x8f2;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          /* ST_CALLSITE[00454118]: CALL 0x00402658; direct=00402658 STBoatC::BackWaitLoad */
          local_EAX_10888 = BackWaitLoad(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x90b;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          /* ST_CALLSITE[00454268]: CALL 0x00405b2d; direct=00405B2D STBoatC::BackTeleport */
          local_EAX_10888 = BackTeleport(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x929;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;

          local_EAX_10888 = thunk_FUN_004795e0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x924;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          /* ST_CALLSITE[004542A4]: CALL 0x00401938; direct=00401938 STBoatC::BackBring */
          local_EAX_10888 = BackBring(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x92e;
          local_8 = local_EAX_10888;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_0304 == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_F;
          /* ST_CALLSITE[004543C8]: CALL 0x00404e1c; direct=00404E1C STBoatC::LoadObj */
          local_EAX_21912 = LoadObj(this_00,nullptr);
          if (local_EAX_21912 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar30 = 0x94e;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          /* ST_CALLSITE[00454407]: CALL 0x00403df0; direct=00403DF0 STBoatC::sub_00460360 */
          local_EAX_10888 = sub_00460360(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x955;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          /* ST_CALLSITE[00454473]: CALL 0x00403553; direct=00403553 STBoatC::BackAttack */
          local_EAX_10888 = BackAttack(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x95f;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          /* ST_CALLSITE[00454443]: CALL 0x0040493a; direct=0040493A STBoatC::sub_004620F0 */
          local_EAX_10888 = sub_004620F0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x95a;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          /* ST_CALLSITE[004545C3]: CALL 0x004058bc; direct=004058BC STBoatC::BackToDok */
          local_EAX_10888 = BackToDok(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x97d;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;

          local_EAX_10888 = thunk_FUN_004732d0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x982;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          /* ST_CALLSITE[004544AF]: CALL 0x004026f3; direct=004026F3 STBoatC::BackPatrol */
          local_EAX_10888 = BackPatrol(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x964;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;

          local_EAX_10888 = thunk_FUN_004769f0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x996;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;

          local_EAX_10888 = thunk_FUN_004803b0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x9be;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          /* ST_CALLSITE[0045474F]: CALL 0x00402b58; direct=00402B58 STBoatC::BackCapture */
          local_EAX_10888 = BackCapture(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x9a0;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;

          local_EAX_10888 = thunk_FUN_00476cc0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x99b;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          /* ST_CALLSITE[00454833]: CALL 0x00405646; direct=00405646 STBoatC::BackAnnih */
          local_EAX_10888 = BackAnnih(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x9b4;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          /* ST_CALLSITE[004544EB]: CALL 0x004033dc; direct=004033DC STBoatC::BackLoadRC */
          local_EAX_10888 = BackLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x969;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          /* ST_CALLSITE[00454593]: CALL 0x0040344a; direct=0040344A STBoatC::BackUnLoadRC */
          local_EAX_10888 = BackUnLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x978;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;

          local_EAX_10888 = thunk_FUN_004805b0(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x9c3;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          /* ST_CALLSITE[0045463B]: CALL 0x00403f85; direct=00403F85 STBoatC::BackLoadObj */
          local_EAX_10888 = BackLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x987;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          /* ST_CALLSITE[004546A7]: CALL 0x0040399a; direct=0040399A STBoatC::BackUnLoadObj */
          local_EAX_10888 = BackUnLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x991;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          /* ST_CALLSITE[0045451B]: CALL 0x00401113; direct=00401113 STBoatC::BackBuild */
          local_EAX_10888 = BackBuild(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x96e;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          /* ST_CALLSITE[00454863]: CALL 0x004035e4; direct=004035E4 STBoatC::BackDismant */
          local_EAX_10888 = BackDismant(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x9b9;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = thunk_FUN_0046d400((int *)this_00,uVar17);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x973;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          /* ST_CALLSITE[0045466B]: CALL 0x00402658; direct=00402658 STBoatC::BackWaitLoad */
          local_EAX_10888 = BackWaitLoad(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x98c;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          /* ST_CALLSITE[004547BB]: CALL 0x00405b2d; direct=00405B2D STBoatC::BackTeleport */
          local_EAX_10888 = BackTeleport(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x9aa;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;

          local_EAX_10888 = thunk_FUN_004795e0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x9a5;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          /* ST_CALLSITE[004547F7]: CALL 0x00401938; direct=00401938 STBoatC::BackBring */
          local_EAX_10888 = BackBring(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x9af;
          local_8 = local_EAX_10888;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_0314 == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_14;
          /* ST_CALLSITE[0045491B]: CALL 0x00404e08; direct=00404E08 STBoatC::WaitLoad */
          local_EAX_23275 = WaitLoad(this_00,nullptr);
          if (local_EAX_23275 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar30 = 0x9cf;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          /* ST_CALLSITE[0045495A]: CALL 0x00403df0; direct=00403DF0 STBoatC::sub_00460360 */
          local_EAX_10888 = sub_00460360(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x9d6;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          /* ST_CALLSITE[004549C6]: CALL 0x00403553; direct=00403553 STBoatC::BackAttack */
          local_EAX_10888 = BackAttack(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x9e0;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          /* ST_CALLSITE[00454996]: CALL 0x0040493a; direct=0040493A STBoatC::sub_004620F0 */
          local_EAX_10888 = sub_004620F0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x9db;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          /* ST_CALLSITE[00454B16]: CALL 0x004058bc; direct=004058BC STBoatC::BackToDok */
          local_EAX_10888 = BackToDok(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x9fe;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;

          local_EAX_10888 = thunk_FUN_004732d0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa03;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          /* ST_CALLSITE[00454A02]: CALL 0x004026f3; direct=004026F3 STBoatC::BackPatrol */
          local_EAX_10888 = BackPatrol(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x9e5;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;

          local_EAX_10888 = thunk_FUN_004769f0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa17;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;

          local_EAX_10888 = thunk_FUN_004803b0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa3f;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          /* ST_CALLSITE[00454CA2]: CALL 0x00402b58; direct=00402B58 STBoatC::BackCapture */
          local_EAX_10888 = BackCapture(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa21;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;

          local_EAX_10888 = thunk_FUN_00476cc0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa1c;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          /* ST_CALLSITE[00454D86]: CALL 0x00405646; direct=00405646 STBoatC::BackAnnih */
          local_EAX_10888 = BackAnnih(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa35;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          /* ST_CALLSITE[00454A3E]: CALL 0x004033dc; direct=004033DC STBoatC::BackLoadRC */
          local_EAX_10888 = BackLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x9ea;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          /* ST_CALLSITE[00454AE6]: CALL 0x0040344a; direct=0040344A STBoatC::BackUnLoadRC */
          local_EAX_10888 = BackUnLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x9f9;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;

          local_EAX_10888 = thunk_FUN_004805b0(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa44;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          /* ST_CALLSITE[00454B8E]: CALL 0x00403f85; direct=00403F85 STBoatC::BackLoadObj */
          local_EAX_10888 = BackLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa08;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          /* ST_CALLSITE[00454BFA]: CALL 0x0040399a; direct=0040399A STBoatC::BackUnLoadObj */
          local_EAX_10888 = BackUnLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa12;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          /* ST_CALLSITE[00454A6E]: CALL 0x00401113; direct=00401113 STBoatC::BackBuild */
          local_EAX_10888 = BackBuild(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x9ef;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          /* ST_CALLSITE[00454DB6]: CALL 0x004035e4; direct=004035E4 STBoatC::BackDismant */
          local_EAX_10888 = BackDismant(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa3a;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = thunk_FUN_0046d400((int *)this_00,uVar17);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x9f4;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          /* ST_CALLSITE[00454BBE]: CALL 0x00402658; direct=00402658 STBoatC::BackWaitLoad */
          local_EAX_10888 = BackWaitLoad(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa0d;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          /* ST_CALLSITE[00454D0E]: CALL 0x00405b2d; direct=00405B2D STBoatC::BackTeleport */
          local_EAX_10888 = BackTeleport(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa2b;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;

          local_EAX_10888 = thunk_FUN_004795e0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa26;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          /* ST_CALLSITE[00454D4A]: CALL 0x00401938; direct=00401938 STBoatC::BackBring */
          local_EAX_10888 = BackBring(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa30;
          local_8 = local_EAX_10888;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_0308 == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_10;
          /* ST_CALLSITE[00454E6E]: CALL 0x004011ae; direct=004011AE STBoatC::UnLoadObj */
          local_EAX_24638 = UnLoadObj(this_00,0);
          if (local_EAX_24638 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar30 = 0xa50;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          /* ST_CALLSITE[00454EAD]: CALL 0x00403df0; direct=00403DF0 STBoatC::sub_00460360 */
          local_EAX_10888 = sub_00460360(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa57;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          /* ST_CALLSITE[00454F19]: CALL 0x00403553; direct=00403553 STBoatC::BackAttack */
          local_EAX_10888 = BackAttack(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa61;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          /* ST_CALLSITE[00454EE9]: CALL 0x0040493a; direct=0040493A STBoatC::sub_004620F0 */
          local_EAX_10888 = sub_004620F0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa5c;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          /* ST_CALLSITE[00455069]: CALL 0x004058bc; direct=004058BC STBoatC::BackToDok */
          local_EAX_10888 = BackToDok(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa7f;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;

          local_EAX_10888 = thunk_FUN_004732d0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa84;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          /* ST_CALLSITE[00454F55]: CALL 0x004026f3; direct=004026F3 STBoatC::BackPatrol */
          local_EAX_10888 = BackPatrol(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa66;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;

          local_EAX_10888 = thunk_FUN_004769f0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa98;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;

          local_EAX_10888 = thunk_FUN_004803b0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xac0;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          /* ST_CALLSITE[004551F5]: CALL 0x00402b58; direct=00402B58 STBoatC::BackCapture */
          local_EAX_10888 = BackCapture(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xaa2;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;

          local_EAX_10888 = thunk_FUN_00476cc0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa9d;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          /* ST_CALLSITE[004552D9]: CALL 0x00405646; direct=00405646 STBoatC::BackAnnih */
          local_EAX_10888 = BackAnnih(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xab6;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          /* ST_CALLSITE[00454F91]: CALL 0x004033dc; direct=004033DC STBoatC::BackLoadRC */
          local_EAX_10888 = BackLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa6b;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          /* ST_CALLSITE[00455039]: CALL 0x0040344a; direct=0040344A STBoatC::BackUnLoadRC */
          local_EAX_10888 = BackUnLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa7a;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;

          local_EAX_10888 = thunk_FUN_004805b0(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xac5;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          /* ST_CALLSITE[004550E1]: CALL 0x00403f85; direct=00403F85 STBoatC::BackLoadObj */
          local_EAX_10888 = BackLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa89;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          /* ST_CALLSITE[0045514D]: CALL 0x0040399a; direct=0040399A STBoatC::BackUnLoadObj */
          local_EAX_10888 = BackUnLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa93;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          /* ST_CALLSITE[00454FC1]: CALL 0x00401113; direct=00401113 STBoatC::BackBuild */
          local_EAX_10888 = BackBuild(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa70;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          /* ST_CALLSITE[00455309]: CALL 0x004035e4; direct=004035E4 STBoatC::BackDismant */
          local_EAX_10888 = BackDismant(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xabb;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = thunk_FUN_0046d400((int *)this_00,uVar17);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa75;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          /* ST_CALLSITE[00455111]: CALL 0x00402658; direct=00402658 STBoatC::BackWaitLoad */
          local_EAX_10888 = BackWaitLoad(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa8e;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          /* ST_CALLSITE[00455261]: CALL 0x00405b2d; direct=00405B2D STBoatC::BackTeleport */
          local_EAX_10888 = BackTeleport(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xaac;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;

          local_EAX_10888 = thunk_FUN_004795e0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xaa7;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          /* ST_CALLSITE[0045529D]: CALL 0x00401938; direct=00401938 STBoatC::BackBring */
          local_EAX_10888 = BackBring(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xab1;
          local_8 = local_EAX_10888;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_02E4 == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_7;
          /* ST_CALLSITE[004553C1]: CALL 0x00404813; direct=00404813 STBoatC::SetMine */
          local_EAX_26001 = SetMine(this_00,nullptr);
          local_8 = local_EAX_26001;
          if (local_EAX_26001 == -1) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0xad1);
          }
          if (local_EAX_26001 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = CASE_3;
          /* ST_CALLSITE[00455400]: CALL 0x00403a2b; direct=00403A2B STBoatC::Defence */
          local_EAX_26064 = Defence(this_00,0);
          if (local_EAX_26064 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar30 = 0xad5;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          /* ST_CALLSITE[0045544B]: CALL 0x00403df0; direct=00403DF0 STBoatC::sub_00460360 */
          local_EAX_10888 = sub_00460360(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xadd;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          /* ST_CALLSITE[004554B7]: CALL 0x00403553; direct=00403553 STBoatC::BackAttack */
          local_EAX_10888 = BackAttack(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xae8;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          /* ST_CALLSITE[0045547B]: CALL 0x0040493a; direct=0040493A STBoatC::sub_004620F0 */
          local_EAX_10888 = sub_004620F0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xae3;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          /* ST_CALLSITE[00455607]: CALL 0x004058bc; direct=004058BC STBoatC::BackToDok */
          local_EAX_10888 = BackToDok(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xb06;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;

          local_EAX_10888 = thunk_FUN_004732d0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xb0b;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          /* ST_CALLSITE[004554F3]: CALL 0x004026f3; direct=004026F3 STBoatC::BackPatrol */
          local_EAX_10888 = BackPatrol(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xaed;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;

          local_EAX_10888 = thunk_FUN_004769f0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xb1f;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;

          local_EAX_10888 = thunk_FUN_004803b0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xb47;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          /* ST_CALLSITE[00455793]: CALL 0x00402b58; direct=00402B58 STBoatC::BackCapture */
          local_EAX_10888 = BackCapture(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xb29;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;

          local_EAX_10888 = thunk_FUN_00476cc0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xb24;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          /* ST_CALLSITE[0045586B]: CALL 0x00405646; direct=00405646 STBoatC::BackAnnih */
          local_EAX_10888 = BackAnnih(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xb3d;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          /* ST_CALLSITE[00455523]: CALL 0x004033dc; direct=004033DC STBoatC::BackLoadRC */
          local_EAX_10888 = BackLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xaf2;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          /* ST_CALLSITE[004555CB]: CALL 0x0040344a; direct=0040344A STBoatC::BackUnLoadRC */
          local_EAX_10888 = BackUnLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xb01;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;

          local_EAX_10888 = thunk_FUN_004805b0(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xb4c;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          /* ST_CALLSITE[00455673]: CALL 0x00403f85; direct=00403F85 STBoatC::BackLoadObj */
          local_EAX_10888 = BackLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xb10;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          /* ST_CALLSITE[004556EB]: CALL 0x0040399a; direct=0040399A STBoatC::BackUnLoadObj */
          local_EAX_10888 = BackUnLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xb1a;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          /* ST_CALLSITE[0045555F]: CALL 0x00401113; direct=00401113 STBoatC::BackBuild */
          local_EAX_10888 = BackBuild(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xaf7;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          /* ST_CALLSITE[004558A7]: CALL 0x004035e4; direct=004035E4 STBoatC::BackDismant */
          local_EAX_10888 = BackDismant(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xb42;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = thunk_FUN_0046d400((int *)this_00,uVar17);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xafc;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          /* ST_CALLSITE[004556AF]: CALL 0x00402658; direct=00402658 STBoatC::BackWaitLoad */
          local_EAX_10888 = BackWaitLoad(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xb15;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          /* ST_CALLSITE[004557FF]: CALL 0x00405b2d; direct=00405B2D STBoatC::BackTeleport */
          local_EAX_10888 = BackTeleport(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xb33;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;

          local_EAX_10888 = thunk_FUN_004795e0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xb2e;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          /* ST_CALLSITE[0045583B]: CALL 0x00401938; direct=00401938 STBoatC::BackBring */
          local_EAX_10888 = BackBring(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xb38;
          local_8 = local_EAX_10888;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_02F0 == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_A;
          /* ST_CALLSITE[0045595F]: CALL 0x004045e8; direct=004045E8 STBoatC::DCBomb */
          local_EAX_27439 = DCBomb(this_00,0);
          local_8 = local_EAX_27439;
          if (local_EAX_27439 == -1) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0xb58);
          }
          if (local_EAX_27439 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = CASE_3;
          /* ST_CALLSITE[0045599E]: CALL 0x00403a2b; direct=00403A2B STBoatC::Defence */
          local_EAX_27502 = Defence(this_00,0);
          if (local_EAX_27502 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar30 = 0xb5c;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          /* ST_CALLSITE[004559E8]: CALL 0x00403df0; direct=00403DF0 STBoatC::sub_00460360 */
          local_EAX_10888 = sub_00460360(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xb64;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          /* ST_CALLSITE[00455A60]: CALL 0x00403553; direct=00403553 STBoatC::BackAttack */
          local_EAX_10888 = BackAttack(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xb6f;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          /* ST_CALLSITE[00455A24]: CALL 0x0040493a; direct=0040493A STBoatC::sub_004620F0 */
          local_EAX_10888 = sub_004620F0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xb6a;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          /* ST_CALLSITE[00455BB0]: CALL 0x004058bc; direct=004058BC STBoatC::BackToDok */
          local_EAX_10888 = BackToDok(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xb8d;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;

          local_EAX_10888 = thunk_FUN_004732d0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xb92;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          /* ST_CALLSITE[00455A90]: CALL 0x004026f3; direct=004026F3 STBoatC::BackPatrol */
          local_EAX_10888 = BackPatrol(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xb74;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;

          local_EAX_10888 = thunk_FUN_004769f0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xba6;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;

          local_EAX_10888 = thunk_FUN_004803b0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xbce;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          /* ST_CALLSITE[00455D30]: CALL 0x00402b58; direct=00402B58 STBoatC::BackCapture */
          local_EAX_10888 = BackCapture(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xbb0;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;

          local_EAX_10888 = thunk_FUN_00476cc0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xbab;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          /* ST_CALLSITE[00455E14]: CALL 0x00405646; direct=00405646 STBoatC::BackAnnih */
          local_EAX_10888 = BackAnnih(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xbc4;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          /* ST_CALLSITE[00455ACC]: CALL 0x004033dc; direct=004033DC STBoatC::BackLoadRC */
          local_EAX_10888 = BackLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xb79;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          /* ST_CALLSITE[00455B74]: CALL 0x0040344a; direct=0040344A STBoatC::BackUnLoadRC */
          local_EAX_10888 = BackUnLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xb88;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;

          local_EAX_10888 = thunk_FUN_004805b0(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xbd3;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          /* ST_CALLSITE[00455C1C]: CALL 0x00403f85; direct=00403F85 STBoatC::BackLoadObj */
          local_EAX_10888 = BackLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xb97;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          /* ST_CALLSITE[00455C88]: CALL 0x0040399a; direct=0040399A STBoatC::BackUnLoadObj */
          local_EAX_10888 = BackUnLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xba1;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          /* ST_CALLSITE[00455B08]: CALL 0x00401113; direct=00401113 STBoatC::BackBuild */
          local_EAX_10888 = BackBuild(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xb7e;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          /* ST_CALLSITE[00455E50]: CALL 0x004035e4; direct=004035E4 STBoatC::BackDismant */
          local_EAX_10888 = BackDismant(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xbc9;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = thunk_FUN_0046d400((int *)this_00,uVar17);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xb83;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          /* ST_CALLSITE[00455C58]: CALL 0x00402658; direct=00402658 STBoatC::BackWaitLoad */
          local_EAX_10888 = BackWaitLoad(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xb9c;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          /* ST_CALLSITE[00455DA8]: CALL 0x00405b2d; direct=00405B2D STBoatC::BackTeleport */
          local_EAX_10888 = BackTeleport(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xbba;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;

          local_EAX_10888 = thunk_FUN_004795e0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xbb5;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          /* ST_CALLSITE[00455DD8]: CALL 0x00401938; direct=00401938 STBoatC::BackBring */
          local_EAX_10888 = BackBring(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xbbf;
          local_8 = local_EAX_10888;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_02EC == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_9;
          /* ST_CALLSITE[00455F08]: CALL 0x004055c4; direct=004055C4 STBoatC::Capture */
          local_EAX_28888 = Capture(this_00,0);
          local_8 = local_EAX_28888;
          if (local_EAX_28888 == -1) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0xbdf);
          }
          if (local_EAX_28888 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = CASE_3;
          /* ST_CALLSITE[00455F46]: CALL 0x00403a2b; direct=00403A2B STBoatC::Defence */
          local_EAX_28950 = Defence(this_00,0);
          if (local_EAX_28950 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar30 = 0xbe3;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          /* ST_CALLSITE[00455F85]: CALL 0x00403df0; direct=00403DF0 STBoatC::sub_00460360 */
          local_EAX_10888 = sub_00460360(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xbeb;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          /* ST_CALLSITE[00455FF1]: CALL 0x00403553; direct=00403553 STBoatC::BackAttack */
          local_EAX_10888 = BackAttack(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xbf6;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          /* ST_CALLSITE[00455FC1]: CALL 0x0040493a; direct=0040493A STBoatC::sub_004620F0 */
          local_EAX_10888 = sub_004620F0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xbf1;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          /* ST_CALLSITE[00456141]: CALL 0x004058bc; direct=004058BC STBoatC::BackToDok */
          local_EAX_10888 = BackToDok(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xc14;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;

          local_EAX_10888 = thunk_FUN_004732d0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xc19;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          /* ST_CALLSITE[0045602D]: CALL 0x004026f3; direct=004026F3 STBoatC::BackPatrol */
          local_EAX_10888 = BackPatrol(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xbfb;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;

          local_EAX_10888 = thunk_FUN_004769f0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xc2d;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;

          local_EAX_10888 = thunk_FUN_004803b0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xc55;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          /* ST_CALLSITE[004562CD]: CALL 0x00402b58; direct=00402B58 STBoatC::BackCapture */
          local_EAX_10888 = BackCapture(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xc37;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;

          local_EAX_10888 = thunk_FUN_00476cc0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xc32;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          /* ST_CALLSITE[004563B1]: CALL 0x00405646; direct=00405646 STBoatC::BackAnnih */
          local_EAX_10888 = BackAnnih(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xc4b;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          /* ST_CALLSITE[00456069]: CALL 0x004033dc; direct=004033DC STBoatC::BackLoadRC */
          local_EAX_10888 = BackLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xc00;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          /* ST_CALLSITE[00456111]: CALL 0x0040344a; direct=0040344A STBoatC::BackUnLoadRC */
          local_EAX_10888 = BackUnLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xc0f;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;

          local_EAX_10888 = thunk_FUN_004805b0(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xc5a;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          /* ST_CALLSITE[004561B9]: CALL 0x00403f85; direct=00403F85 STBoatC::BackLoadObj */
          local_EAX_10888 = BackLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xc1e;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          /* ST_CALLSITE[00456225]: CALL 0x0040399a; direct=0040399A STBoatC::BackUnLoadObj */
          local_EAX_10888 = BackUnLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xc28;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          /* ST_CALLSITE[00456099]: CALL 0x00401113; direct=00401113 STBoatC::BackBuild */
          local_EAX_10888 = BackBuild(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xc05;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          /* ST_CALLSITE[004563E1]: CALL 0x004035e4; direct=004035E4 STBoatC::BackDismant */
          local_EAX_10888 = BackDismant(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xc50;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = thunk_FUN_0046d400((int *)this_00,uVar17);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xc0a;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          /* ST_CALLSITE[004561E9]: CALL 0x00402658; direct=00402658 STBoatC::BackWaitLoad */
          local_EAX_10888 = BackWaitLoad(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xc23;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          /* ST_CALLSITE[00456339]: CALL 0x00405b2d; direct=00405B2D STBoatC::BackTeleport */
          local_EAX_10888 = BackTeleport(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xc41;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;

          local_EAX_10888 = thunk_FUN_004795e0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xc3c;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          /* ST_CALLSITE[00456375]: CALL 0x00401938; direct=00401938 STBoatC::BackBring */
          local_EAX_10888 = BackBring(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xc46;
          local_8 = local_EAX_10888;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_031C == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_16;
          /* ST_CALLSITE[00456499]: CALL 0x00402e28; direct=00402E28 STBoatC::Recharge */
          local_EAX_30313 = Recharge(this_00,0);
          local_8 = local_EAX_30313;
          if (local_EAX_30313 == -1) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0xc66);
          }
          if (local_EAX_30313 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = CASE_3;
          /* ST_CALLSITE[004564D8]: CALL 0x00403a2b; direct=00403A2B STBoatC::Defence */
          local_EAX_30376 = Defence(this_00,0);
          if (local_EAX_30376 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar30 = 0xc6a;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          /* ST_CALLSITE[00456523]: CALL 0x00403df0; direct=00403DF0 STBoatC::sub_00460360 */
          local_EAX_10888 = sub_00460360(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xc72;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          /* ST_CALLSITE[0045658F]: CALL 0x00403553; direct=00403553 STBoatC::BackAttack */
          local_EAX_10888 = BackAttack(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xc7d;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          /* ST_CALLSITE[00456553]: CALL 0x0040493a; direct=0040493A STBoatC::sub_004620F0 */
          local_EAX_10888 = sub_004620F0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xc78;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          /* ST_CALLSITE[004566DF]: CALL 0x004058bc; direct=004058BC STBoatC::BackToDok */
          local_EAX_10888 = BackToDok(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xc9b;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;

          local_EAX_10888 = thunk_FUN_004732d0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xca0;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          /* ST_CALLSITE[004565CB]: CALL 0x004026f3; direct=004026F3 STBoatC::BackPatrol */
          local_EAX_10888 = BackPatrol(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xc82;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;

          local_EAX_10888 = thunk_FUN_004769f0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xcb4;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;

          local_EAX_10888 = thunk_FUN_004803b0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xcdc;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          /* ST_CALLSITE[0045686B]: CALL 0x00402b58; direct=00402B58 STBoatC::BackCapture */
          local_EAX_10888 = BackCapture(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xcbe;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;

          local_EAX_10888 = thunk_FUN_00476cc0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xcb9;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          /* ST_CALLSITE[00456943]: CALL 0x00405646; direct=00405646 STBoatC::BackAnnih */
          local_EAX_10888 = BackAnnih(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xcd2;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          /* ST_CALLSITE[004565FB]: CALL 0x004033dc; direct=004033DC STBoatC::BackLoadRC */
          local_EAX_10888 = BackLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xc87;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          /* ST_CALLSITE[004566A3]: CALL 0x0040344a; direct=0040344A STBoatC::BackUnLoadRC */
          local_EAX_10888 = BackUnLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xc96;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;

          local_EAX_10888 = thunk_FUN_004805b0(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xce1;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          /* ST_CALLSITE[0045674B]: CALL 0x00403f85; direct=00403F85 STBoatC::BackLoadObj */
          local_EAX_10888 = BackLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xca5;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          /* ST_CALLSITE[004567C3]: CALL 0x0040399a; direct=0040399A STBoatC::BackUnLoadObj */
          local_EAX_10888 = BackUnLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xcaf;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          /* ST_CALLSITE[00456637]: CALL 0x00401113; direct=00401113 STBoatC::BackBuild */
          local_EAX_10888 = BackBuild(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xc8c;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          /* ST_CALLSITE[0045697F]: CALL 0x004035e4; direct=004035E4 STBoatC::BackDismant */
          local_EAX_10888 = BackDismant(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xcd7;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = thunk_FUN_0046d400((int *)this_00,uVar17);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xc91;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          /* ST_CALLSITE[00456787]: CALL 0x00402658; direct=00402658 STBoatC::BackWaitLoad */
          local_EAX_10888 = BackWaitLoad(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xcaa;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          /* ST_CALLSITE[004568D7]: CALL 0x00405b2d; direct=00405B2D STBoatC::BackTeleport */
          local_EAX_10888 = BackTeleport(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xcc8;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;

          local_EAX_10888 = thunk_FUN_004795e0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xcc3;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          /* ST_CALLSITE[00456913]: CALL 0x00401938; direct=00401938 STBoatC::BackBring */
          local_EAX_10888 = BackBring(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xccd;
          local_8 = local_EAX_10888;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_0318 == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_15;
          /* ST_CALLSITE[00456A37]: CALL 0x00405880; direct=00405880 STBoatC::Teleport */
          local_EAX_31751 = Teleport(this_00,0);
          local_8 = local_EAX_31751;
          if (local_EAX_31751 == -1) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0xced);
          }
          if (local_EAX_31751 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = CASE_3;
          /* ST_CALLSITE[00456A76]: CALL 0x00403a2b; direct=00403A2B STBoatC::Defence */
          local_EAX_31814 = Defence(this_00,0);
          if (local_EAX_31814 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar30 = 0xcf1;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          /* ST_CALLSITE[00456AC0]: CALL 0x00403df0; direct=00403DF0 STBoatC::sub_00460360 */
          local_EAX_10888 = sub_00460360(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xcf9;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          /* ST_CALLSITE[00456B38]: CALL 0x00403553; direct=00403553 STBoatC::BackAttack */
          local_EAX_10888 = BackAttack(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xd04;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          /* ST_CALLSITE[00456AFC]: CALL 0x0040493a; direct=0040493A STBoatC::sub_004620F0 */
          local_EAX_10888 = sub_004620F0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xcff;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          /* ST_CALLSITE[00456C88]: CALL 0x004058bc; direct=004058BC STBoatC::BackToDok */
          local_EAX_10888 = BackToDok(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xd22;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;

          local_EAX_10888 = thunk_FUN_004732d0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xd27;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          /* ST_CALLSITE[00456B68]: CALL 0x004026f3; direct=004026F3 STBoatC::BackPatrol */
          local_EAX_10888 = BackPatrol(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xd09;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;

          local_EAX_10888 = thunk_FUN_004769f0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xd3b;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;

          local_EAX_10888 = thunk_FUN_004803b0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xd63;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          /* ST_CALLSITE[00456E08]: CALL 0x00402b58; direct=00402B58 STBoatC::BackCapture */
          local_EAX_10888 = BackCapture(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xd45;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;

          local_EAX_10888 = thunk_FUN_00476cc0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xd40;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          /* ST_CALLSITE[00456EEC]: CALL 0x00405646; direct=00405646 STBoatC::BackAnnih */
          local_EAX_10888 = BackAnnih(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xd59;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          /* ST_CALLSITE[00456BA4]: CALL 0x004033dc; direct=004033DC STBoatC::BackLoadRC */
          local_EAX_10888 = BackLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xd0e;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          /* ST_CALLSITE[00456C4C]: CALL 0x0040344a; direct=0040344A STBoatC::BackUnLoadRC */
          local_EAX_10888 = BackUnLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xd1d;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;

          local_EAX_10888 = thunk_FUN_004805b0(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xd68;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          /* ST_CALLSITE[00456CF4]: CALL 0x00403f85; direct=00403F85 STBoatC::BackLoadObj */
          local_EAX_10888 = BackLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xd2c;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          /* ST_CALLSITE[00456D60]: CALL 0x0040399a; direct=0040399A STBoatC::BackUnLoadObj */
          local_EAX_10888 = BackUnLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xd36;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          /* ST_CALLSITE[00456BE0]: CALL 0x00401113; direct=00401113 STBoatC::BackBuild */
          local_EAX_10888 = BackBuild(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xd13;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          /* ST_CALLSITE[00456F28]: CALL 0x004035e4; direct=004035E4 STBoatC::BackDismant */
          local_EAX_10888 = BackDismant(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xd5e;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = thunk_FUN_0046d400((int *)this_00,uVar17);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xd18;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          /* ST_CALLSITE[00456D30]: CALL 0x00402658; direct=00402658 STBoatC::BackWaitLoad */
          local_EAX_10888 = BackWaitLoad(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xd31;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          /* ST_CALLSITE[00456E80]: CALL 0x00405b2d; direct=00405B2D STBoatC::BackTeleport */
          local_EAX_10888 = BackTeleport(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xd4f;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;

          local_EAX_10888 = thunk_FUN_004795e0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xd4a;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          /* ST_CALLSITE[00456EB0]: CALL 0x00401938; direct=00401938 STBoatC::BackBring */
          local_EAX_10888 = BackBring(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xd54;
          local_8 = local_EAX_10888;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_0320 == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_17;
          /* ST_CALLSITE[00456FE0]: CALL 0x0040480e; direct=0040480E STBoatC::Bring */
          iVar30 = Bring(this_00,nullptr);
          local_8 = iVar30;
          if (iVar30 == -1) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0xd74);
          }
          if (iVar30 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = CASE_3;
          /* ST_CALLSITE[0045701E]: CALL 0x00403a2b; direct=00403A2B STBoatC::Defence */
          local_EAX_33262 = Defence(this_00,0);
          if (local_EAX_33262 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar30 = 0xd78;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          /* ST_CALLSITE[0045705D]: CALL 0x00403df0; direct=00403DF0 STBoatC::sub_00460360 */
          local_EAX_10888 = sub_00460360(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xd80;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          /* ST_CALLSITE[004570C9]: CALL 0x00403553; direct=00403553 STBoatC::BackAttack */
          local_EAX_10888 = BackAttack(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xd8b;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          /* ST_CALLSITE[00457099]: CALL 0x0040493a; direct=0040493A STBoatC::sub_004620F0 */
          local_EAX_10888 = sub_004620F0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xd86;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          /* ST_CALLSITE[00457219]: CALL 0x004058bc; direct=004058BC STBoatC::BackToDok */
          local_EAX_10888 = BackToDok(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xda9;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;

          local_EAX_10888 = thunk_FUN_004732d0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xdae;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          /* ST_CALLSITE[00457105]: CALL 0x004026f3; direct=004026F3 STBoatC::BackPatrol */
          local_EAX_10888 = BackPatrol(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xd90;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;

          local_EAX_10888 = thunk_FUN_004769f0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xdc2;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;

          local_EAX_10888 = thunk_FUN_004803b0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xdea;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          /* ST_CALLSITE[004573A5]: CALL 0x00402b58; direct=00402B58 STBoatC::BackCapture */
          local_EAX_10888 = BackCapture(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xdcc;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;

          local_EAX_10888 = thunk_FUN_00476cc0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xdc7;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          /* ST_CALLSITE[00457489]: CALL 0x00405646; direct=00405646 STBoatC::BackAnnih */
          local_EAX_10888 = BackAnnih(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xde0;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          /* ST_CALLSITE[00457141]: CALL 0x004033dc; direct=004033DC STBoatC::BackLoadRC */
          local_EAX_10888 = BackLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xd95;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          /* ST_CALLSITE[004571E9]: CALL 0x0040344a; direct=0040344A STBoatC::BackUnLoadRC */
          local_EAX_10888 = BackUnLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xda4;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;

          local_EAX_10888 = thunk_FUN_004805b0(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xdef;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          /* ST_CALLSITE[00457291]: CALL 0x00403f85; direct=00403F85 STBoatC::BackLoadObj */
          local_EAX_10888 = BackLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xdb3;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          /* ST_CALLSITE[004572FD]: CALL 0x0040399a; direct=0040399A STBoatC::BackUnLoadObj */
          local_EAX_10888 = BackUnLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xdbd;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          /* ST_CALLSITE[00457171]: CALL 0x00401113; direct=00401113 STBoatC::BackBuild */
          local_EAX_10888 = BackBuild(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xd9a;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          /* ST_CALLSITE[004574B9]: CALL 0x004035e4; direct=004035E4 STBoatC::BackDismant */
          local_EAX_10888 = BackDismant(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xde5;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = thunk_FUN_0046d400((int *)this_00,uVar17);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xd9f;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          /* ST_CALLSITE[004572C1]: CALL 0x00402658; direct=00402658 STBoatC::BackWaitLoad */
          local_EAX_10888 = BackWaitLoad(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xdb8;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          /* ST_CALLSITE[00457411]: CALL 0x00405b2d; direct=00405B2D STBoatC::BackTeleport */
          local_EAX_10888 = BackTeleport(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xdd6;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;

          local_EAX_10888 = thunk_FUN_004795e0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xdd1;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          /* ST_CALLSITE[0045744D]: CALL 0x00401938; direct=00401938 STBoatC::BackBring */
          local_EAX_10888 = BackBring(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xddb;
          local_8 = local_EAX_10888;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_02F4 == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_B;
          /* ST_CALLSITE[00457571]: CALL 0x004014fb; direct=004014FB STBoatC::Annih */
          local_EAX_34625 = Annih(this_00,0);
          local_8 = local_EAX_34625;
          if (local_EAX_34625 == -1) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0xdfb);
          }
          if (local_EAX_34625 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = CASE_3;
          /* ST_CALLSITE[004575B0]: CALL 0x00403a2b; direct=00403A2B STBoatC::Defence */
          local_EAX_34688 = Defence(this_00,0);
          if (local_EAX_34688 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar30 = 0xdff;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          /* ST_CALLSITE[004575FB]: CALL 0x00403df0; direct=00403DF0 STBoatC::sub_00460360 */
          local_EAX_10888 = sub_00460360(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xe07;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          /* ST_CALLSITE[00457667]: CALL 0x00403553; direct=00403553 STBoatC::BackAttack */
          local_EAX_10888 = BackAttack(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xe12;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          /* ST_CALLSITE[0045762B]: CALL 0x0040493a; direct=0040493A STBoatC::sub_004620F0 */
          local_EAX_10888 = sub_004620F0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xe0d;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          /* ST_CALLSITE[004577B7]: CALL 0x004058bc; direct=004058BC STBoatC::BackToDok */
          local_EAX_10888 = BackToDok(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xe30;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;

          local_EAX_10888 = thunk_FUN_004732d0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xe35;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          /* ST_CALLSITE[004576A3]: CALL 0x004026f3; direct=004026F3 STBoatC::BackPatrol */
          local_EAX_10888 = BackPatrol(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xe17;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;

          local_EAX_10888 = thunk_FUN_004769f0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xe49;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;

          local_EAX_10888 = thunk_FUN_004803b0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xe71;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          /* ST_CALLSITE[00457943]: CALL 0x00402b58; direct=00402B58 STBoatC::BackCapture */
          local_EAX_10888 = BackCapture(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xe53;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;

          local_EAX_10888 = thunk_FUN_00476cc0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xe4e;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          /* ST_CALLSITE[00457A1B]: CALL 0x00405646; direct=00405646 STBoatC::BackAnnih */
          local_EAX_10888 = BackAnnih(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xe67;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          /* ST_CALLSITE[004576D3]: CALL 0x004033dc; direct=004033DC STBoatC::BackLoadRC */
          local_EAX_10888 = BackLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xe1c;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          /* ST_CALLSITE[0045777B]: CALL 0x0040344a; direct=0040344A STBoatC::BackUnLoadRC */
          local_EAX_10888 = BackUnLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xe2b;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;

          local_EAX_10888 = thunk_FUN_004805b0(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xe76;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          /* ST_CALLSITE[00457823]: CALL 0x00403f85; direct=00403F85 STBoatC::BackLoadObj */
          local_EAX_10888 = BackLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xe3a;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          /* ST_CALLSITE[0045789B]: CALL 0x0040399a; direct=0040399A STBoatC::BackUnLoadObj */
          local_EAX_10888 = BackUnLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xe44;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          /* ST_CALLSITE[0045770F]: CALL 0x00401113; direct=00401113 STBoatC::BackBuild */
          local_EAX_10888 = BackBuild(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xe21;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          /* ST_CALLSITE[00457A57]: CALL 0x004035e4; direct=004035E4 STBoatC::BackDismant */
          local_EAX_10888 = BackDismant(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xe6c;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = thunk_FUN_0046d400((int *)this_00,uVar17);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xe26;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          /* ST_CALLSITE[0045785F]: CALL 0x00402658; direct=00402658 STBoatC::BackWaitLoad */
          local_EAX_10888 = BackWaitLoad(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xe3f;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          /* ST_CALLSITE[004579AF]: CALL 0x00405b2d; direct=00405B2D STBoatC::BackTeleport */
          local_EAX_10888 = BackTeleport(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xe5d;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;

          local_EAX_10888 = thunk_FUN_004795e0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xe58;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          /* ST_CALLSITE[004579EB]: CALL 0x00401938; direct=00401938 STBoatC::BackBring */
          local_EAX_10888 = BackBring(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xe62;
          local_8 = local_EAX_10888;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_0310 == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_12;
          /* ST_CALLSITE[00457B0F]: CALL 0x00403c1f; direct=00403C1F STBoatC::Dismant */
          local_EAX_36063 = Dismant(this_00,nullptr);
          local_8 = local_EAX_36063;
          if (local_EAX_36063 == -1) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0xe82);
          }
          if (local_EAX_36063 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = CASE_3;
          /* ST_CALLSITE[00457B4E]: CALL 0x00403a2b; direct=00403A2B STBoatC::Defence */
          local_EAX_36126 = Defence(this_00,0);
          if (local_EAX_36126 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar30 = 0xe86;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          /* ST_CALLSITE[00457B98]: CALL 0x00403df0; direct=00403DF0 STBoatC::sub_00460360 */
          local_EAX_10888 = sub_00460360(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xe8e;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          /* ST_CALLSITE[00457C10]: CALL 0x00403553; direct=00403553 STBoatC::BackAttack */
          local_EAX_10888 = BackAttack(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xe99;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          /* ST_CALLSITE[00457BD4]: CALL 0x0040493a; direct=0040493A STBoatC::sub_004620F0 */
          local_EAX_10888 = sub_004620F0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xe94;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          /* ST_CALLSITE[00457D60]: CALL 0x004058bc; direct=004058BC STBoatC::BackToDok */
          local_EAX_10888 = BackToDok(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xeb7;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;

          local_EAX_10888 = thunk_FUN_004732d0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xebc;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          /* ST_CALLSITE[00457C40]: CALL 0x004026f3; direct=004026F3 STBoatC::BackPatrol */
          local_EAX_10888 = BackPatrol(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xe9e;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;

          local_EAX_10888 = thunk_FUN_004769f0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xed0;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;

          local_EAX_10888 = thunk_FUN_004803b0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xef8;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          /* ST_CALLSITE[00457EE0]: CALL 0x00402b58; direct=00402B58 STBoatC::BackCapture */
          local_EAX_10888 = BackCapture(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xeda;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;

          local_EAX_10888 = thunk_FUN_00476cc0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xed5;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          /* ST_CALLSITE[00457FC4]: CALL 0x00405646; direct=00405646 STBoatC::BackAnnih */
          local_EAX_10888 = BackAnnih(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xeee;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          /* ST_CALLSITE[00457C7C]: CALL 0x004033dc; direct=004033DC STBoatC::BackLoadRC */
          local_EAX_10888 = BackLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xea3;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          /* ST_CALLSITE[00457D24]: CALL 0x0040344a; direct=0040344A STBoatC::BackUnLoadRC */
          local_EAX_10888 = BackUnLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xeb2;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;

          local_EAX_10888 = thunk_FUN_004805b0(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xefd;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          /* ST_CALLSITE[00457DCC]: CALL 0x00403f85; direct=00403F85 STBoatC::BackLoadObj */
          local_EAX_10888 = BackLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xec1;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          /* ST_CALLSITE[00457E38]: CALL 0x0040399a; direct=0040399A STBoatC::BackUnLoadObj */
          local_EAX_10888 = BackUnLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xecb;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          /* ST_CALLSITE[00457CB8]: CALL 0x00401113; direct=00401113 STBoatC::BackBuild */
          local_EAX_10888 = BackBuild(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xea8;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          /* ST_CALLSITE[00458000]: CALL 0x004035e4; direct=004035E4 STBoatC::BackDismant */
          local_EAX_10888 = BackDismant(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xef3;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = thunk_FUN_0046d400((int *)this_00,uVar17);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xead;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          /* ST_CALLSITE[00457E08]: CALL 0x00402658; direct=00402658 STBoatC::BackWaitLoad */
          local_EAX_10888 = BackWaitLoad(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xec6;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          /* ST_CALLSITE[00457F58]: CALL 0x00405b2d; direct=00405B2D STBoatC::BackTeleport */
          local_EAX_10888 = BackTeleport(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xee4;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;

          local_EAX_10888 = thunk_FUN_004795e0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xedf;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          /* ST_CALLSITE[00457F88]: CALL 0x00401938; direct=00401938 STBoatC::BackBring */
          local_EAX_10888 = BackBring(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xee9;
          local_8 = local_EAX_10888;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_02E8 == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_8;
          /* ST_CALLSITE[004580B8]: CALL 0x00404cff; direct=00404CFF STBoatC::Scout */
          local_EAX_37512 = Scout(this_00,0);
          local_8 = local_EAX_37512;
          if (local_EAX_37512 == -1) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0xf09);
          }
          if (local_EAX_37512 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = CASE_3;
          /* ST_CALLSITE[004580F6]: CALL 0x00403a2b; direct=00403A2B STBoatC::Defence */
          local_EAX_37574 = Defence(this_00,0);
          if (local_EAX_37574 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar30 = 0xf0d;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          /* ST_CALLSITE[00458135]: CALL 0x00403df0; direct=00403DF0 STBoatC::sub_00460360 */
          local_EAX_10888 = sub_00460360(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xf15;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          /* ST_CALLSITE[004581A1]: CALL 0x00403553; direct=00403553 STBoatC::BackAttack */
          local_EAX_10888 = BackAttack(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xf20;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          /* ST_CALLSITE[00458171]: CALL 0x0040493a; direct=0040493A STBoatC::sub_004620F0 */
          local_EAX_10888 = sub_004620F0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xf1b;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          /* ST_CALLSITE[004582F1]: CALL 0x004058bc; direct=004058BC STBoatC::BackToDok */
          local_EAX_10888 = BackToDok(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xf3e;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;

          local_EAX_10888 = thunk_FUN_004732d0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xf43;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          /* ST_CALLSITE[004581DD]: CALL 0x004026f3; direct=004026F3 STBoatC::BackPatrol */
          local_EAX_10888 = BackPatrol(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xf25;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;

          local_EAX_10888 = thunk_FUN_004769f0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xf57;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;

          local_EAX_10888 = thunk_FUN_004803b0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xf7f;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          /* ST_CALLSITE[0045847D]: CALL 0x00402b58; direct=00402B58 STBoatC::BackCapture */
          local_EAX_10888 = BackCapture(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xf61;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;

          local_EAX_10888 = thunk_FUN_00476cc0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xf5c;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          /* ST_CALLSITE[00458561]: CALL 0x00405646; direct=00405646 STBoatC::BackAnnih */
          local_EAX_10888 = BackAnnih(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xf75;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          /* ST_CALLSITE[00458219]: CALL 0x004033dc; direct=004033DC STBoatC::BackLoadRC */
          local_EAX_10888 = BackLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xf2a;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          /* ST_CALLSITE[004582C1]: CALL 0x0040344a; direct=0040344A STBoatC::BackUnLoadRC */
          local_EAX_10888 = BackUnLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xf39;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;

          local_EAX_10888 = thunk_FUN_004805b0(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xf84;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          /* ST_CALLSITE[00458369]: CALL 0x00403f85; direct=00403F85 STBoatC::BackLoadObj */
          local_EAX_10888 = BackLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xf48;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          /* ST_CALLSITE[004583D5]: CALL 0x0040399a; direct=0040399A STBoatC::BackUnLoadObj */
          local_EAX_10888 = BackUnLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xf52;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          /* ST_CALLSITE[00458249]: CALL 0x00401113; direct=00401113 STBoatC::BackBuild */
          local_EAX_10888 = BackBuild(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xf2f;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          /* ST_CALLSITE[00458591]: CALL 0x004035e4; direct=004035E4 STBoatC::BackDismant */
          local_EAX_10888 = BackDismant(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xf7a;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = thunk_FUN_0046d400((int *)this_00,uVar17);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xf34;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          /* ST_CALLSITE[00458399]: CALL 0x00402658; direct=00402658 STBoatC::BackWaitLoad */
          local_EAX_10888 = BackWaitLoad(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xf4d;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          /* ST_CALLSITE[004584E9]: CALL 0x00405b2d; direct=00405B2D STBoatC::BackTeleport */
          local_EAX_10888 = BackTeleport(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xf6b;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;

          local_EAX_10888 = thunk_FUN_004795e0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xf66;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          /* ST_CALLSITE[00458525]: CALL 0x00401938; direct=00401938 STBoatC::BackBring */
          local_EAX_10888 = BackBring(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xf70;
          local_8 = local_EAX_10888;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_0300 == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_E;

          local_EAX_38937 = thunk_FUN_004803d0(this_00,nullptr);
          local_8 = local_EAX_38937;
          if (local_EAX_38937 == -1) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0xf90);
          }
          if (local_EAX_38937 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = CASE_3;
          /* ST_CALLSITE[00458688]: CALL 0x00403a2b; direct=00403A2B STBoatC::Defence */
          local_EAX_39000 = Defence(this_00,0);
          if (local_EAX_39000 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar30 = 0xf94;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          /* ST_CALLSITE[004586D3]: CALL 0x00403df0; direct=00403DF0 STBoatC::sub_00460360 */
          local_EAX_10888 = sub_00460360(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xf9c;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          /* ST_CALLSITE[0045873F]: CALL 0x00403553; direct=00403553 STBoatC::BackAttack */
          local_EAX_10888 = BackAttack(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xfa7;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          /* ST_CALLSITE[00458703]: CALL 0x0040493a; direct=0040493A STBoatC::sub_004620F0 */
          local_EAX_10888 = sub_004620F0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xfa2;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          /* ST_CALLSITE[0045888F]: CALL 0x004058bc; direct=004058BC STBoatC::BackToDok */
          local_EAX_10888 = BackToDok(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xfc5;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;

          local_EAX_10888 = thunk_FUN_004732d0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xfca;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          /* ST_CALLSITE[0045877B]: CALL 0x004026f3; direct=004026F3 STBoatC::BackPatrol */
          local_EAX_10888 = BackPatrol(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xfac;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;

          local_EAX_10888 = thunk_FUN_004769f0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xfde;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;

          local_EAX_10888 = thunk_FUN_004803b0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x1006;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          /* ST_CALLSITE[00458A1B]: CALL 0x00402b58; direct=00402B58 STBoatC::BackCapture */
          local_EAX_10888 = BackCapture(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xfe8;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;

          local_EAX_10888 = thunk_FUN_00476cc0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xfe3;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          /* ST_CALLSITE[00458AF3]: CALL 0x00405646; direct=00405646 STBoatC::BackAnnih */
          local_EAX_10888 = BackAnnih(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xffc;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          /* ST_CALLSITE[004587AB]: CALL 0x004033dc; direct=004033DC STBoatC::BackLoadRC */
          local_EAX_10888 = BackLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xfb1;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          /* ST_CALLSITE[00458853]: CALL 0x0040344a; direct=0040344A STBoatC::BackUnLoadRC */
          local_EAX_10888 = BackUnLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xfc0;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;

          local_EAX_10888 = thunk_FUN_004805b0(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x100b;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          /* ST_CALLSITE[004588FB]: CALL 0x00403f85; direct=00403F85 STBoatC::BackLoadObj */
          local_EAX_10888 = BackLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xfcf;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          /* ST_CALLSITE[00458973]: CALL 0x0040399a; direct=0040399A STBoatC::BackUnLoadObj */
          local_EAX_10888 = BackUnLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xfd9;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          /* ST_CALLSITE[004587E7]: CALL 0x00401113; direct=00401113 STBoatC::BackBuild */
          local_EAX_10888 = BackBuild(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xfb6;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          /* ST_CALLSITE[00458B2F]: CALL 0x004035e4; direct=004035E4 STBoatC::BackDismant */
          local_EAX_10888 = BackDismant(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x1001;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = thunk_FUN_0046d400((int *)this_00,uVar17);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xfbb;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          /* ST_CALLSITE[00458937]: CALL 0x00402658; direct=00402658 STBoatC::BackWaitLoad */
          local_EAX_10888 = BackWaitLoad(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xfd4;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          /* ST_CALLSITE[00458A87]: CALL 0x00405b2d; direct=00405B2D STBoatC::BackTeleport */
          local_EAX_10888 = BackTeleport(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xff2;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;

          local_EAX_10888 = thunk_FUN_004795e0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xfed;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          /* ST_CALLSITE[00458AC3]: CALL 0x00401938; direct=00401938 STBoatC::BackBring */
          local_EAX_10888 = BackBring(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xff7;
          local_8 = local_EAX_10888;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else {
        if (this_00->field_02D4 != 1) goto LAB_0045910d;
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_3;
          /* ST_CALLSITE[00458BE7]: CALL 0x00403a2b; direct=00403A2B STBoatC::Defence */
          local_EAX_40375 = Defence(this_00,0);
          if (local_EAX_40375 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar30 = 0x1017;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          /* ST_CALLSITE[00458C32]: CALL 0x00403df0; direct=00403DF0 STBoatC::sub_00460360 */
          local_EAX_10888 = sub_00460360(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x101e;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          /* ST_CALLSITE[00458CC8]: CALL 0x00403553; direct=00403553 STBoatC::BackAttack */
          local_EAX_10888 = BackAttack(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x1028;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          /* ST_CALLSITE[00458C93]: CALL 0x0040493a; direct=0040493A STBoatC::sub_004620F0 */
          local_EAX_10888 = sub_004620F0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x1023;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          /* ST_CALLSITE[00458E14]: CALL 0x004058bc; direct=004058BC STBoatC::BackToDok */
          local_EAX_10888 = BackToDok(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x1046;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;

          local_EAX_10888 = thunk_FUN_004732d0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x104b;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          /* ST_CALLSITE[00458D00]: CALL 0x004026f3; direct=004026F3 STBoatC::BackPatrol */
          local_EAX_10888 = BackPatrol(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x102d;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;

          local_EAX_10888 = thunk_FUN_004769f0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x105f;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;

          local_EAX_10888 = thunk_FUN_004803b0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x1082;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          /* ST_CALLSITE[00458FA0]: CALL 0x00402b58; direct=00402B58 STBoatC::BackCapture */
          local_EAX_10888 = BackCapture(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x1069;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;

          local_EAX_10888 = thunk_FUN_00476cc0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x1064;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          /* ST_CALLSITE[00459078]: CALL 0x00405646; direct=00405646 STBoatC::BackAnnih */
          local_EAX_10888 = BackAnnih(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x107d;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          /* ST_CALLSITE[00458D30]: CALL 0x004033dc; direct=004033DC STBoatC::BackLoadRC */
          local_EAX_10888 = BackLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x1032;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          /* ST_CALLSITE[00458DD8]: CALL 0x0040344a; direct=0040344A STBoatC::BackUnLoadRC */
          local_EAX_10888 = BackUnLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x1041;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;

          local_EAX_10888 = thunk_FUN_004805b0(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x1087;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          /* ST_CALLSITE[00458E80]: CALL 0x00403f85; direct=00403F85 STBoatC::BackLoadObj */
          local_EAX_10888 = BackLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x1050;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          /* ST_CALLSITE[00458EF8]: CALL 0x0040399a; direct=0040399A STBoatC::BackUnLoadObj */
          local_EAX_10888 = BackUnLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x105a;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          /* ST_CALLSITE[00458D6C]: CALL 0x00401113; direct=00401113 STBoatC::BackBuild */
          local_EAX_10888 = BackBuild(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x1037;
          local_8 = local_EAX_10888;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = thunk_FUN_0046d400((int *)this_00,uVar17);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x103c;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          /* ST_CALLSITE[00458EBC]: CALL 0x00402658; direct=00402658 STBoatC::BackWaitLoad */
          local_EAX_10888 = BackWaitLoad(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x1055;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          /* ST_CALLSITE[0045900C]: CALL 0x00405b2d; direct=00405B2D STBoatC::BackTeleport */
          local_EAX_10888 = BackTeleport(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x1073;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;

          local_EAX_10888 = thunk_FUN_004795e0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x106e;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          /* ST_CALLSITE[00459048]: CALL 0x00401938; direct=00401938 STBoatC::BackBring */
          local_EAX_10888 = BackBring(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x1078;
          local_8 = local_EAX_10888;
        }
      }
      local_EAX_10888 = local_8;
      RaiseInternalException
                (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",iVar30);
cf_common_exit_00458C5B:
      if (local_EAX_10888 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_0459 = 0;
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
LAB_0045910d:
    switch(this_00->field_045D) {
    case CASE_1:
      iVar30 = thunk_FUN_004602e0(this_00,2);
      local_8 = iVar30;
      if (iVar30 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x1094
                  );
      }
      if (iVar30 == 0) {
        this_00->field_045D = CASE_3;
        /* ST_CALLSITE[00459163]: CALL 0x00403a2b; direct=00403A2B STBoatC::Defence */
        local_EAX_41779 = Defence(this_00,0);
        if (local_EAX_41779 != -1) {
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        iVar30 = 0x1099;
        local_8 = -1;
      }
      else {
        if (iVar30 != 3) {
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        if ((((this_00->field_00B3 == 0) &&
             (uVar17 = this_00->field_00BB - (int)this_00->field_005B, uVar27 = (int)uVar17 >> 0x1f,
             (int)((uVar17 ^ uVar27) - uVar27) < 2)) &&
            (uVar17 = this_00->field_00BF - (int)this_00->field_005D, uVar27 = (int)uVar17 >> 0x1f,
            (int)((uVar17 ^ uVar27) - uVar27) < 2)) &&
           ((uVar17 = this_00->field_00C3 - (int)this_00->field_005F, uVar27 = (int)uVar17 >> 0x1f,
            (int)((uVar17 ^ uVar27) - uVar27) < 2 &&
            /* ST_CALLSITE[004591FD]: CALL dword ptr [EDX + 0x18] */
            (iVar30 = this_00->vfunc_18((short)this_00->field_00BB,(short)this_00->field_00BF,
                                 (short)this_00->field_00C3), iVar30 == 0)))) {
          this_00->field_045D = CASE_3;
          /* ST_CALLSITE[0045920D]: CALL 0x00403a2b; direct=00403A2B STBoatC::Defence */
          local_EAX_41949 = Defence(this_00,0);
          if (local_EAX_41949 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar30 = 0x10ad;
          local_8 = -1;
        }
        else {
          /* ST_CALLSITE[00459233]: CALL 0x00402b26; direct=00402B26 STGroupBoatC::sub_0040AE40 */
          local_EAX_41987 =
               STGroupBoatC::sub_0040AE40(local_1c,(uint)(ushort)this_00->field_0032,'\0');
          if (local_EAX_41987 != -4) {
            uVar17 = this_00->field_001C * 0x41c64e6d + 0x3039;
            this_00->field_001C = uVar17;
            this_00->field_00F8 = (short)((ulonglong)(uVar17 >> 0x10) % 0x1f) + 0x1e;
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = CASE_3;
          /* ST_CALLSITE[0045924A]: CALL 0x00403a2b; direct=00403A2B STBoatC::Defence */
          local_EAX_42010 = Defence(this_00,0);
          if (local_EAX_42010 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar30 = 0x10b3;
          local_8 = -1;
        }
      }
      break;
    case CASE_2:

      local_EAX_42158 = thunk_FUN_00462180(this_00,2);
      local_8 = local_EAX_42158;
      if (local_EAX_42158 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x10be
                  );
      }
      if (local_EAX_42158 != 0) {
        if (local_EAX_42158 == 3) {
          /* ST_CALLSITE[00459381]: CALL 0x00402b26; direct=00402B26 STGroupBoatC::sub_0040AE40 */
          STGroupBoatC::sub_0040AE40(local_1c,(uint)(ushort)this_00->field_0032,'\0');
          iVar30 = this_00->field_001C * 0x41c64e6d + 0x3039;
          this_00->field_001C = iVar30;
          this_00->field_00F8 = ((ushort)((uint)iVar30 >> 0x10) & 0xf) + 0xf;
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        if (local_EAX_42158 == 4) {
          /* ST_CALLSITE[004593CF]: CALL dword ptr [EAX + 0x8] */
          local_1c->sub_00498D20(0x66,sVar41 + 0x32);
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        if (local_EAX_42158 == 6) {
          /* ST_CALLSITE[004593F9]: CALL dword ptr [EDX + 0x8] */
          local_1c->sub_00498D20(0x68,sVar41 + 0x32);
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        if (local_EAX_42158 != 7) {
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        /* ST_CALLSITE[00459427]: CALL dword ptr [EAX + 0x8] */
        local_1c->sub_00498D20(0x69,sVar41 + 0x32);
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      local_46 = this_00->field_07F2;
      local_48 = this_00->field_0032;
      this_00->field_0816 = 5;
      /* ST_CALLSITE[00459332]: CALL dword ptr [EAX + 0x8] */
      local_1c->sub_00498D20(0x67,(short)&local_48);
      this_00->field_07F2 = 0xffff;
      this_00->field_045D = CASE_3;
      /* ST_CALLSITE[0045934B]: CALL 0x00403a2b; direct=00403A2B STBoatC::Defence */
      local_EAX_42267 = Defence(this_00,0);
      if (local_EAX_42267 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar30 = 0x10c8;
      local_8 = -1;
      break;
    case CASE_3:
      /* ST_CALLSITE[004592B3]: CALL 0x00403a2b; direct=00403A2B STBoatC::Defence */
      local_EAX_42115 = Defence(this_00,2);
      if (local_EAX_42115 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar30 = 0x10bb;
      local_8 = -1;
      break;
    case CASE_4:
      /* ST_CALLSITE[0045963C]: CALL 0x00403eb8; direct=00403EB8 STBoatC::ToDok */
      local_EAX_43020 = ToDok(this_00,2);
      local_8 = local_EAX_43020;
      if (local_EAX_43020 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x111a
                  );
      }
      if (local_EAX_43020 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      pAVar22 = thunk_FUN_004357f0((char)this_00->field_0024);
      if (pAVar22 != nullptr) {
        local_9c.id = MESS_AIPLRCLASSTY_5D94;
        local_9c.arg0.words.high = this_00->field_0032;
        local_9c.arg0.words.low = *(undefined2 *)&this_00->field_0024;
        local_9c.arg1 = (STMessageArg)this_00->field_0018;
        /* ST_CALLSITE[004596B2]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/AiPlrClassTy;pointer:/SubmarineTitans/Recovered/STMessage */
        pAVar22->GetMessage(&local_9c);
      }
      this_00->field_045D = CASE_3;
      /* ST_CALLSITE[004596C1]: CALL 0x00403a2b; direct=00403A2B STBoatC::Defence */
      local_EAX_43153 = Defence(this_00,0);
      if (local_EAX_43153 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar30 = 0x1127;
      local_8 = -1;
      break;
    case CASE_5:
      /* ST_CALLSITE[004596EC]: CALL 0x00404dcc; direct=00404DCC STBoatC::Guard */
      local_EAX_43196 = Guard(this_00,2);
      local_8 = local_EAX_43196;
      if (local_EAX_43196 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x112c
                  );
      }
      if (local_EAX_43196 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      /* ST_CALLSITE[0045972A]: CALL 0x00403a2b; direct=00403A2B STBoatC::Defence */
      local_EAX_43258 = Defence(this_00,0);
      if (local_EAX_43258 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar30 = 0x1131;
      local_8 = -1;
      break;
    case CASE_6:

      local_EAX_42517 = thunk_FUN_004658d0(this_00,2);
      local_8 = local_EAX_42517;
      if (local_EAX_42517 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x10e8
                  );
      }
      if (local_EAX_42517 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      /* ST_CALLSITE[00459484]: CALL 0x00403a2b; direct=00403A2B STBoatC::Defence */
      local_EAX_42580 = Defence(this_00,0);
      if (local_EAX_42580 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar30 = 0x10ed;
      local_8 = -1;
      break;
    case CASE_7:
      /* ST_CALLSITE[00459879]: CALL 0x00404813; direct=00404813 STBoatC::SetMine */
      local_EAX_43593 = SetMine(this_00,(int *)0x2);
      local_8 = local_EAX_43593;
      if (local_EAX_43593 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x1154
                  );
      }
      if (local_EAX_43593 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      /* ST_CALLSITE[004598B8]: CALL 0x00403a2b; direct=00403A2B STBoatC::Defence */
      local_EAX_43656 = Defence(this_00,0);
      if (local_EAX_43656 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar30 = 0x1159;
      local_8 = -1;
      break;
    case CASE_8:
      /* ST_CALLSITE[00459BE6]: CALL 0x00404cff; direct=00404CFF STBoatC::Scout */
      local_EAX_44470 = Scout(this_00,2);
      local_8 = local_EAX_44470;
      if (local_EAX_44470 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x11ac
                  );
      }
      if (local_EAX_44470 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      /* ST_CALLSITE[00459C25]: CALL 0x00403a2b; direct=00403A2B STBoatC::Defence */
      local_EAX_44533 = Defence(this_00,0);
      if (local_EAX_44533 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar30 = 0x11b1;
      local_8 = -1;
      break;
    case CASE_9:
      /* ST_CALLSITE[0045994C]: CALL 0x004055c4; direct=004055C4 STBoatC::Capture */
      local_EAX_43804 = Capture(this_00,2);
      local_8 = local_EAX_43804;
      if (local_EAX_43804 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x1168
                  );
      }
      if (local_EAX_43804 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      /* ST_CALLSITE[0045998A]: CALL 0x00403a2b; direct=00403A2B STBoatC::Defence */
      local_EAX_43866 = Defence(this_00,0);
      if (local_EAX_43866 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar30 = 0x116d;
      local_8 = -1;
      break;
    case CASE_A:
      /* ST_CALLSITE[004598E2]: CALL 0x004045e8; direct=004045E8 STBoatC::DCBomb */
      local_EAX_43698 = DCBomb(this_00,2);
      local_8 = local_EAX_43698;
      if (local_EAX_43698 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x115e
                  );
      }
      if (local_EAX_43698 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      /* ST_CALLSITE[00459921]: CALL 0x00403a2b; direct=00403A2B STBoatC::Defence */
      local_EAX_43761 = Defence(this_00,0);
      if (local_EAX_43761 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar30 = 0x1163;
      local_8 = -1;
      break;
    case CASE_B:
      /* ST_CALLSITE[00459B1F]: CALL 0x004014fb; direct=004014FB STBoatC::Annih */
      local_EAX_44271 = Annih(this_00,2);
      local_8 = local_EAX_44271;
      if (local_EAX_44271 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x1198
                  );
      }
      if (local_EAX_44271 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      /* ST_CALLSITE[00459B5E]: CALL 0x00403a2b; direct=00403A2B STBoatC::Defence */
      local_EAX_44334 = Defence(this_00,0);
      if (local_EAX_44334 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar30 = 0x119d;
      local_8 = -1;
      break;
    case CASE_C:
      /* ST_CALLSITE[004594AF]: CALL 0x00405434; direct=00405434 STBoatC::LoadRC */
      local_EAX_42623 = LoadRC(this_00,(int *)0x2);
      local_8 = local_EAX_42623;
      if (local_EAX_42623 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x10f2
                  );
      }
      if (local_EAX_42623 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      /* ST_CALLSITE[004594ED]: CALL 0x00403a2b; direct=00403A2B STBoatC::Defence */
      local_EAX_42685 = Defence(this_00,0);
      if (local_EAX_42685 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar30 = 0x10f7;
      local_8 = -1;
      break;
    case CASE_D:
      /* ST_CALLSITE[004595DF]: CALL 0x00404c91; direct=00404C91 STBoatC::UnLoadRC */
      local_EAX_42927 = UnLoadRC(this_00,2);
      local_8 = local_EAX_42927;
      if (local_EAX_42927 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x1110
                  );
      }
      if (local_EAX_42927 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      /* ST_CALLSITE[0045961D]: CALL 0x00403a2b; direct=00403A2B STBoatC::Defence */
      local_EAX_42989 = Defence(this_00,0);
      if (local_EAX_42989 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar30 = 0x1115;
      local_8 = -1;
      break;
    case CASE_E:

      local_EAX_44575 = thunk_FUN_004803d0(this_00,(RecoveredRecordView_004803D0_06C5639A *)0x2);
      local_8 = local_EAX_44575;
      if (local_EAX_44575 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x11b6
                  );
      }
      if (local_EAX_44575 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      /* ST_CALLSITE[00459C8E]: CALL 0x00403a2b; direct=00403A2B STBoatC::Defence */
      local_EAX_44638 = Defence(this_00,0);
      if (local_EAX_44638 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar30 = 0x11bb;
      local_8 = -1;
      break;
    case CASE_F:
      /* ST_CALLSITE[00459749]: CALL 0x00404e1c; direct=00404E1C STBoatC::LoadObj */
      local_EAX_43289 = LoadObj(this_00,(RecoveredRecordView_005EFAE0_855D930D *)0x2);
      local_8 = local_EAX_43289;
      if (local_EAX_43289 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x1136
                  );
      }
      if (local_EAX_43289 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      /* ST_CALLSITE[00459788]: CALL 0x00403a2b; direct=00403A2B STBoatC::Defence */
      local_EAX_43352 = Defence(this_00,0);
      if (local_EAX_43352 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar30 = 0x113b;
      local_8 = -1;
      break;
    case CASE_10:
      /* ST_CALLSITE[0045981C]: CALL 0x004011ae; direct=004011AE STBoatC::UnLoadObj */
      local_EAX_43500 = UnLoadObj(this_00,2);
      local_8 = local_EAX_43500;
      if (local_EAX_43500 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x114a
                  );
      }
      if (local_EAX_43500 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      /* ST_CALLSITE[0045985A]: CALL 0x00403a2b; direct=00403A2B STBoatC::Defence */
      local_EAX_43562 = Defence(this_00,0);
      if (local_EAX_43562 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar30 = 0x114f;
      local_8 = -1;
      break;
    case CASE_11:
      /* ST_CALLSITE[0045950C]: CALL 0x00404543; direct=00404543 STBoatC::Build */
      local_EAX_42716 = Build(this_00,(uint *)0x2);
      local_8 = local_EAX_42716;
      if (local_EAX_42716 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x10fc
                  );
      }
      if (local_EAX_42716 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      /* ST_CALLSITE[0045954B]: CALL 0x00403a2b; direct=00403A2B STBoatC::Defence */
      local_EAX_42779 = Defence(this_00,0);
      if (local_EAX_42779 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar30 = 0x1101;
      local_8 = -1;
      break;
    case CASE_12:
      /* ST_CALLSITE[00459B89]: CALL 0x00403c1f; direct=00403C1F STBoatC::Dismant */
      local_EAX_44377 = Dismant(this_00,(RecoveredRecordView_004B9D90_09AED060 *)0x2);
      local_8 = local_EAX_44377;
      if (local_EAX_44377 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x11a2
                  );
      }
      if (local_EAX_44377 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      /* ST_CALLSITE[00459BC7]: CALL 0x00403a2b; direct=00403A2B STBoatC::Defence */
      local_EAX_44439 = Defence(this_00,0);
      if (local_EAX_44439 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar30 = 0x11a7;
      local_8 = -1;
      break;
    case CASE_13:
      /* ST_CALLSITE[00459575]: CALL 0x004011d1; direct=004011D1 STBoatC::CreateGame */
      local_EAX_42821 = CreateGame(this_00,(int *)0x2);
      local_8 = local_EAX_42821;
      if (local_EAX_42821 == 0xffffffff) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x1106
                  );
      }
      if (local_EAX_42821 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      /* ST_CALLSITE[004595B4]: CALL 0x00403a2b; direct=00403A2B STBoatC::Defence */
      local_EAX_42884 = Defence(this_00,0);
      if (local_EAX_42884 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar30 = 0x110b;
      local_8 = -1;
      break;
    case CASE_14:
      /* ST_CALLSITE[004597B2]: CALL 0x00404e08; direct=00404E08 STBoatC::WaitLoad */
      local_EAX_43394 = WaitLoad(this_00,(STBoatC *)0x2);
      local_8 = local_EAX_43394;
      if (local_EAX_43394 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x1140
                  );
      }
      if (local_EAX_43394 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      /* ST_CALLSITE[004597F1]: CALL 0x00403a2b; direct=00403A2B STBoatC::Defence */
      local_EAX_43457 = Defence(this_00,0);
      if (local_EAX_43457 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar30 = 0x1145;
      local_8 = -1;
      break;
    case CASE_15:
      /* ST_CALLSITE[00459A59]: CALL 0x00405880; direct=00405880 STBoatC::Teleport */
      local_EAX_44073 = Teleport(this_00,2);
      local_8 = local_EAX_44073;
      if (local_EAX_44073 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x1184
                  );
      }
      if (local_EAX_44073 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      /* ST_CALLSITE[00459A97]: CALL 0x00403a2b; direct=00403A2B STBoatC::Defence */
      local_EAX_44135 = Defence(this_00,0);
      if (local_EAX_44135 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar30 = 0x1189;
      local_8 = -1;
      break;
    case CASE_16:
      /* ST_CALLSITE[004599A9]: CALL 0x00402e28; direct=00402E28 STBoatC::Recharge */
      local_EAX_43897 = Recharge(this_00,2);
      local_8 = local_EAX_43897;
      if (local_EAX_43897 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x1172
                  );
      }
      if (local_EAX_43897 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      pAVar22 = thunk_FUN_004357f0((char)this_00->field_0024);
      if (pAVar22 != nullptr) {
        local_9c.id = MESS_AIPLRCLASSTY_5D94;
        local_9c.arg0.words.high = this_00->field_0032;
        local_9c.arg0.words.low = *(undefined2 *)&this_00->field_0024;
        local_9c.arg1 = (STMessageArg)this_00->field_0018;
        /* ST_CALLSITE[00459A1F]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/AiPlrClassTy;pointer:/SubmarineTitans/Recovered/STMessage */
        pAVar22->GetMessage(&local_9c);
      }
      this_00->field_045D = CASE_3;
      /* ST_CALLSITE[00459A2E]: CALL 0x00403a2b; direct=00403A2B STBoatC::Defence */
      local_EAX_44030 = Defence(this_00,0);
      if (local_EAX_44030 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar30 = 0x117f;
      local_8 = -1;
      break;
    case CASE_17:
      /* ST_CALLSITE[00459AB6]: CALL 0x0040480e; direct=0040480E STBoatC::Bring */
      iVar30 = Bring(this_00,(STBoatC *)0x2);
      local_8 = iVar30;
      if (iVar30 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x118e
                  );
      }
      if (iVar30 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      /* ST_CALLSITE[00459AF5]: CALL 0x00403a2b; direct=00403A2B STBoatC::Defence */
      local_EAX_44229 = Defence(this_00,0);
      if (local_EAX_44229 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar30 = 0x1193;
      local_8 = -1;
      break;
    default:
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
cf_error_exit_0045AEE3:
    RaiseInternalException
              (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",iVar30);
    g_currentExceptionFrame = local_184.previous;
    return 0;
  }
  if (SVar8 == MESS_ID_NONE) goto LAB_0045048a;
  if (SVar8 != MESS_ID_CREATE) {
    g_currentExceptionFrame = local_184.previous;
    return 0;
  }
  local_1c = (message->arg0).ptr;
  thunk_FUN_00417a00(this_00,0);
  if (*(int *)&local_1c->field_0xc == 0) {
    dVar15 = (message->arg0).u32;
    this_00->field_06F3 = STField<STBoatC_field_06F3State>(dVar15,0x14);
    this_00->field_06F7 = STField<STBoatC_field_06F7State>(dVar15,0x18);
    iVar14 = STField<int>(dVar15,0x2A);
    if (iVar14 < 0) {
      this_00->field_07D6 = 0;
    }
    else if (iVar14 < 0x79) {
      this_00->field_07D6 = iVar14 / 3;
    }
    else {
      this_00->field_07D6 = 0x28;
    }
    iVar14 = STField<int>(dVar15,0x2E);
    if (iVar14 < 0) {
      this_00->field_07DA = 0;
    }
    else if (iVar14 < 0x321) {
      this_00->field_07DA = iVar14 / 0x14;
    }
    else {
      this_00->field_07DA = 0x28;
    }
    iVar14 = this_00->field_07DA + this_00->field_07D6;
    if (0x28 < iVar14) {
      iVar14 = (this_00->field_07D6 * 0x28) / iVar14;
      this_00->field_07D6 = iVar14;
      this_00->field_07DA = 0x28 - iVar14;
    }
    switch(this_00->field_06F7) {
    case CASE_16:
    case CASE_25:
      this_00->field_0726 = 0x28;
      break;
    case CASE_17:
      this_00->field_072A = 0x28;
      break;
    case CASE_1B:
    case CASE_1D:
    case CASE_24:
      this_00->field_071E = 0x14;
      break;
    case CASE_23:
      this_00->field_0722 = 0x14;
    }
    sVar41 = STField<short>(dVar15,0x1C);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_c = CONCAT22((short)(this_00->field_06F7 - CASE_16 >> 0x10),sVar41);
    sVar4 = STField<short>(dVar15,0x20);
    sVar5 = STField<short>(dVar15,0x1E);
    if (((sVar41 < 0) || (g_worldGrid.sizeX <= sVar41)) ||
       ((sVar5 < 0 ||
        (((g_worldGrid.sizeY <= sVar5 || (sVar4 < 0)) || (g_worldGrid.sizeZ <= sVar4)))))) {
      local_10 = nullptr;
    }
    else {
      local_10 = (STFishC *)
                 STGridAt3D(g_worldGrid, sVar41, sVar5, sVar4).objects[(byte)this_00->field_008E];
    }
    if (local_10 != nullptr) {
      /* ST_CALLSITE[0044F063]: CALL dword ptr [EDX + 0x114] */
      iVar14 = (*local_10->vtable->vfunc_114)(this_00->field_06F7);
      if (iVar14 == 0) {

        local_EAX_595 =
             ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x197,0,0,"%s",
                                "STBoatC::GetMessage MESS_ID_CREATE FLAG_BASE PairObjectAvail()==FALSE");
        if (local_EAX_595 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x198);
      }
      /* ST_CALLSITE[0044F0B4]: CALL dword ptr [EDX + 0x118] */
      (*local_10->vtable->vfunc_118)(this_00->field_0018);
      SVar40 = this_00->field_06F7;
      if (((SVar40 == CASE_7) || (SVar40 == CASE_13)) || (SVar40 == CASE_1B)) {
        this_00->field_07CA = (RecoveredRecordView_005EFAE0_855D930D *)local_10->field_0018;
        Library::Ourlib::ST3DSMAP::SprSetLevAfter
                  (this_00->field_0211,this_00->field_01ED,*(int *)&local_10->field_0x1ed);
      }
    }
    this_00->field_06FB = STField<undefined4>(dVar15,0x36);
    this_00->field_06FF = STField<undefined4>(dVar15,0x3A);
    this_00->field_0703 = STField<undefined4>(dVar15,0x3E);
    this_00->field_0707 = STField<undefined2>(dVar15,0x42);
    this_00->field_0709 = STField<undefined1>(dVar15,0x44);
    this_00->field_073E = STField<undefined4>(dVar15,0x32);
    if (local_10 == nullptr) {
      this_00->field_0076 = 1;
      uVar17 = this_00->field_001C * 0x41c64e6d + 0x3039;
      this_00->field_001C = uVar17;
      this_00->field_006E = (short)((ulonglong)(uVar17 >> 0x10) % 0x30);
    }
    else {
      this_00->field_006E = *(undefined2 *)&local_10->field_0x6e;
      SVar40 = this_00->field_06F7;
      if (((SVar40 == CASE_7) || (SVar40 == CASE_13)) || (SVar40 == CASE_1B)) {
        this_00->field_0076 = 1;
      }
      else {
        this_00->field_0076 = 0;
      }
    }

    thunk_FUN_00416390((RecoveredRecordView_00416390_AE365496 *)this_00);
    this_00->field_00E3 = '\0';
    /* ST_CALLSITE[0044F191]: CALL 0x00404796; direct=00404796 STBoatC::_SetSpeedFireLife */
    _SetSpeedFireLife(this_00);
    iVar14 = STField<int>(dVar15,0x26);
    if (iVar14 < 0) {
      this_00->field_0716 = 1;
    }
    else {
      if (iVar14 < 100) {
        iVar14 = (this_00->field_0712 * iVar14) / 100;
      }
      else {
        iVar14 = this_00->field_0712;
      }
      this_00->field_0716 = iVar14;
    }
    thunk_FUN_0048a910((RecoveredRecordView_0048A910_94DEC4B1 *)this_00);
    thunk_FUN_0048a840((RecoveredRecordView_0048A840_B5CC239D *)this_00);
    if ((((local_10 == nullptr) || (SVar40 = this_00->field_06F7, SVar40 == CASE_7)) ||
        (SVar40 == CASE_13)) || (SVar40 == CASE_1B)) {

      thunk_FUN_00417a20(this_00,STField<short>(dVar15,0x1C),STField<short>(dVar15,0x1E),
                         STField<short>(dVar15,0x20),1);
    }
    else {

      thunk_FUN_00417a20(this_00,STField<short>(dVar15,0x1C),STField<short>(dVar15,0x1E),
                         STField<short>(dVar15,0x20),0);
      this_00->field_0041 = local_10->field_0041;
      this_00->field_0043 = local_10->field_0043;
      this_00->field_0045 = local_10->field_0045;
      this_00->field_004D = local_10->field_0x4d;
    }
    if ((this_00->field_06F7 == CASE_9) || (this_00->field_06F7 == CASE_15)) {
      sVar41 = 8;
    }
    else {
      sVar41 = 0x18;
    }

    thunk_FUN_00417e70(this_00,sVar41);
    if (local_10 == nullptr) {
      iVar14 = this_00->field_001C * 0x41c64e6d + 0x3039;
      this_00->field_001C = iVar14;

      thunk_FUN_00417ee0(this_00,((ushort)((uint)iVar14 >> 0x10) & 7) * 0x2d);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar26 = extraout_var_02;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar28 = extraout_var_05;
    }
    else {
      this_00->field_006C = local_10->field_006C;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar26 = extraout_var_01;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar28 = extraout_var_04;
    }
    /* ST_CALLSITE[0044F2C8]: CALL 0x004052c2; direct=004052C2 STAllPlayersC::RegisterObject */
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    STAllPlayersC::RegisterObject
              (g_allPlayers_007FA174,(char)this_00->field_0024,
               CONCAT22(uVar28,STField<undefined2>(dVar15,0x24)),
               CONCAT22(uVar26,STField<undefined2>(dVar15,0x22)),(int *)this_00,1,
               STField<int>(dVar15,0x49));
    this_00->field_0487 = 0xffffffff;
    this_00->field_048B = 0xffff;
    this_00->field_0814 = this_00->field_0816 * 0xc9;
    if (((local_10 == nullptr) || (SVar40 = this_00->field_06F7, SVar40 == CASE_7)) ||
       ((SVar40 == CASE_13 || (SVar40 == CASE_1B)))) {
      this_00->field_082E = CASE_FFFFFFFF;
      this_00->field_0836 = 4;
      this_00->field_0475 = this_00->field_0047;
      this_00->field_0477 = this_00->field_0049;
      this_00->field_0479 = this_00->field_004B;
    }
    else {
      this_00->field_045D = CASE_14;
      this_00->field_07C2 = 1;
      /* ST_CALLSITE[0044F331]: CALL dword ptr [EDX + 0x100] */
      this_00->vfunc_100((byte)this_00->field_01D1 | 0xd);
      this_00->field_05C0 = CASE_3;
      this_00->field_05A0 = this_00->field_0030;
      this_00->field_05A2 = (RecoveredRecordView_005EFAE0_855D930D *)local_10->field_0018;
      this_00->field_05A6 = nullptr;
      this_00->field_05C4 = CASE_7;
    }
    uVar17 = this_00->field_001C * 0x41c64e6d + 0x3039;
    this_00->field_001C = uVar17;
    local_d4 = (uVar17 >> 0x10) % 0x13;
    /* ST_CALLSITE[0044F3C7]: CALL dword ptr [EDX + 0x2c] */
    dVar15 = this_00->sub_0045EEE0();
    /* ST_CALLSITE[0044F3D5]: CALL 0x00405e39; direct=00405E39 STAllPlayersC::sub_004B76D0 */
    STAllPlayersC::sub_004B76D0
              (g_allPlayers_007FA174,
               STReplaceLowByte((uint32_t)(dVar15), (uint8_t)(*(undefined1 *)&this_00->field_0024)),dVar15);
    if (this_00->field_0024 == (uint)(byte)this_00->field_0010->field_112D) {
      /* ST_CALLSITE[0044F3F3]: CALL 0x00404b8d; direct=00404B8D STAllPlayersC::sub_004D8B70 */
      STAllPlayersC::sub_004D8B70(g_allPlayers_007FA174,(char)this_00->field_0024);
    }
    switch(this_00->field_06F7) {
    case CASE_5:
    case CASE_B:
    case CASE_11:
    case CASE_1C:
    case CASE_21:
    case CASE_24:
    case CASE_25:
      this_00->field_070A = 8;
      break;
    default:
      this_00->field_070A = 5;
    }
    /* ST_CALLSITE[0044F434]: CALL 0x004023a1; direct=004023A1 TLOEmbryoTy::sub_0041C3F0 */
    TLOEmbryoTy::sub_0041C3F0((TLOEmbryoTy *)this_00,(undefined *)this_00->field_070A);
    uVar17 = this_00->field_001C * 0x41c64e6d + 0x3039;
    this_00->field_001C = uVar17;
    iVar14 = ((uVar17 >> 0x10) % 5) * 0x19;
    this_00->field_077E = iVar14 + -0xf;
    uVar17 = this_00->field_001C * 0x41c64e6d + 0x3039;
    this_00->field_001C = uVar17;
    this_00->field_077A = (uVar17 >> 0x10) % (iVar14 - 0xeU);
  }
  if (*(int *)&local_1c->field_0xc == 1) {
    dVar15 = (message->arg0).u32;
    this_00->field_06F3 = STField<STBoatC_field_06F3State>(dVar15,0x14);
    this_00->field_06F7 = STField<STBoatC_field_06F7State>(dVar15,0x18);
    this_00->field_06FB = STField<undefined4>(dVar15,0x32);
    this_00->field_06FF = STField<undefined4>(dVar15,0x36);
    this_00->field_0703 = STField<undefined4>(dVar15,0x3A);
    this_00->field_0707 = STField<undefined2>(dVar15,0x3E);
    this_00->field_0709 = STField<undefined1>(dVar15,0x40);
    this_00->field_081E = STField<undefined4>(dVar15,0x41);
    switch(this_00->field_06F7) {
    case CASE_16:
    case CASE_25:
      this_00->field_0726 = 0x28;
      break;
    case CASE_17:
      this_00->field_072A = 0x28;
      break;
    case CASE_1B:
    case CASE_1D:
    case CASE_24:
      this_00->field_071E = 0x14;
      break;
    case CASE_23:
      this_00->field_0722 = 0x14;
    }
    this_00->field_0076 = 1;
    this_00->field_006E = 0;

    thunk_FUN_00416390((RecoveredRecordView_00416390_AE365496 *)this_00);
    this_00->field_00E3 = '\0';
    /* ST_CALLSITE[0044F545]: CALL 0x00404796; direct=00404796 STBoatC::_SetSpeedFireLife */
    _SetSpeedFireLife(this_00);
    thunk_FUN_0048a910((RecoveredRecordView_0048A910_94DEC4B1 *)this_00);
    thunk_FUN_0048a840((RecoveredRecordView_0048A840_B5CC239D *)this_00);

    thunk_FUN_00495ff0(STField<short>(dVar15,0x1C),STField<short>(dVar15,0x1E),STField<short>(dVar15,0x20)
                       ,this_00->field_008E,(RecoveredRecordView_00495FF0_A2A90B23 *)this_00);
    this_00->field_0047 = STField<short>(dVar15,0x1C);
    this_00->field_0041 = STField<short>(dVar15,0x22);
    this_00->field_0049 = STField<short>(dVar15,0x1E);
    this_00->field_0043 = STField<short>(dVar15,0x24);
    this_00->field_004B = STField<short>(dVar15,0x20);
    this_00->field_0045 = STField<short>(dVar15,0x26);
    /* ST_CALLSITE[0044F5CF]: CALL 0x00401325; direct=00401325 DumpClassC::WritePtr */
    DumpClassC::WritePtr
              (this_00->field_0047,this_00->field_0049,this_00->field_004B,this_00->field_008E,
               (RecoveredRecord_DumpClassC_00495EC0 *)this_00);
    if ((this_00->field_06F7 == CASE_9) || (this_00->field_06F7 == CASE_15)) {
      sVar41 = 8;
    }
    else {
      sVar41 = 0x18;
    }

    thunk_FUN_00417e70(this_00,sVar41);

    iVar14 = thunk_FUN_00417ee0(this_00,0x5a);
    /* ST_CALLSITE[0044F611]: CALL 0x004052c2; direct=004052C2 STAllPlayersC::RegisterObject; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STAllPlayersC; source view only; no Ghidra override */
    STAllPlayersC::RegisterObject
              (g_allPlayers_007FA174,(char)this_00->field_0024,
               STReplaceLowWord((uint32_t)(iVar14), (uint16_t)(STField<undefined2>(dVar15,0x2A))),0xffff,
               (int *)this_00,0,0);
    this_00->field_045D = CASE_13;
    this_00->field_0510 = STField<undefined2>(dVar15,0x1C);
    this_00->field_0512 = STField<undefined2>(dVar15,0x1E);
    this_00->field_0514 = STField<undefined2>(dVar15,0x20);
    this_00->field_0516 = STField<undefined2>(dVar15,0x22);
    this_00->field_0518 = STField<undefined2>(dVar15,0x24);
    this_00->field_051A = STField<undefined2>(dVar15,0x26);
    this_00->field_051C = STField<short>(dVar15,0x2C);
    this_00->field_051E = STField<short>(dVar15,0x2E);
    this_00->field_0520 = STField<short>(dVar15,0x30);
    local_10 = (STFishC *)
               /* ST_CALLSITE[0044F694]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
               STAllPlayersC::GetObjPtr
                         (g_allPlayers_007FA174,(char)this_00->field_0024,
                          STField<ushort>(dVar15,0x28),CASE_1);
    if ((STGameObjC *)local_10 == nullptr) {
      this_00->field_0524 = 0;
    }
    else {
      this_00->field_0524 = ((STGameObjC *)local_10)->field_0018;
    }
    this_00->field_0528 = 0;
    Library::Ourlib::ST3DSMAP::SprSetLevBefore
              (this_00->field_0211,this_00->field_01ED,((STGameObjC *)local_10)->field_01ED);
    local_d4 = DAT_008073fc * 5;
    /* ST_CALLSITE[0044F6E5]: CALL dword ptr [EAX + 0x2c] */
    dVar18 = this_00->sub_0045EEE0();
    /* ST_CALLSITE[0044F6F3]: CALL 0x00405e39; direct=00405E39 STAllPlayersC::sub_004B76D0 */
    /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
    STAllPlayersC::sub_004B76D0
              (g_allPlayers_007FA174,
               STReplaceLowByte((uint32_t)(extraout_ECX), (uint8_t)(*(undefined1 *)&this_00->field_0024)),dVar18);
    if (this_00->field_0024 == (uint)(byte)this_00->field_0010->field_112D) {
      /* ST_CALLSITE[0044F711]: CALL 0x00404b8d; direct=00404B8D STAllPlayersC::sub_004D8B70 */
      STAllPlayersC::sub_004D8B70(g_allPlayers_007FA174,(char)this_00->field_0024);
    }
    switch(this_00->field_06F7) {
    case CASE_5:
    case CASE_B:
    case CASE_11:
    case CASE_1C:
    case CASE_21:
    case CASE_24:
    case CASE_25:
      this_00->field_070A = 8;
      break;
    default:
      this_00->field_070A = 5;
    }
    /* ST_CALLSITE[0044F752]: CALL 0x004023a1; direct=004023A1 TLOEmbryoTy::sub_0041C3F0 */
    TLOEmbryoTy::sub_0041C3F0((TLOEmbryoTy *)this_00,(undefined *)this_00->field_070A);
    uVar17 = this_00->field_001C * 0x41c64e6d + 0x3039;
    this_00->field_001C = uVar17;
    iVar14 = ((uVar17 >> 0x10) % 5) * 0x19;
    this_00->field_077E = iVar14 + -0xf;
    uVar17 = this_00->field_001C * 0x41c64e6d + 0x3039;
    this_00->field_001C = uVar17;
    this_00->field_077A = (uVar17 >> 0x10) % (iVar14 - 0xeU);
    if (g_aiBossClass_008117BC != nullptr) {
      local_9c.id = MESS_AIBOSSCLASSTY_5DD0;
      local_9c.arg0.words.high = this_00->field_0032;
      local_9c.arg0.words.low = *(undefined2 *)&this_00->field_0024;
      local_9c.arg1.words.high = STField<undefined2>(dVar15,0x28);
      local_9c.arg1.words.low = *(undefined2 *)&this_00->field_0024;
      /* ST_CALLSITE[0044F7E5]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/AiBossClassTy;pointer:/SubmarineTitans/Recovered/STMessage */
      g_aiBossClass_008117BC->GetMessage(&local_9c);
    }
    switch(this_00->field_06F7) {
    case CASE_1:
      uVar26 = 200;
      break;
    case CASE_2:
      uVar26 = 0xce;
      break;
    case CASE_3:
      uVar26 = 0xd4;
      break;
    case CASE_4:
      uVar26 = 0xda;
      break;
    case CASE_5:
      uVar26 = 0xe0;
      break;
    case CASE_6:
      uVar26 = 0xe7;
      break;
    case CASE_7:
      uVar26 = 0xee;
      break;
    case CASE_8:
      uVar26 = 0xf5;
      break;
    case CASE_9:
      uVar26 = 0xfd;
      break;
    case CASE_A:
      uVar26 = 0x102;
      break;
    case CASE_B:
      uVar26 = 0x108;
      break;
    case CASE_C:
      uVar26 = 0x10e;
      break;
    case CASE_D:
      uVar26 = 300;
      break;
    case CASE_E:
      uVar26 = 0x132;
      break;
    case CASE_F:
      uVar26 = 0x138;
      break;
    case CASE_10:
      uVar26 = 0x13e;
      break;
    case CASE_11:
      uVar26 = 0x144;
      break;
    case CASE_12:
      uVar26 = 0x14b;
      break;
    case CASE_13:
      uVar26 = 0x152;
      break;
    case CASE_14:
      uVar26 = 0x159;
      break;
    case CASE_15:
      uVar26 = 0x161;
      break;
    case CASE_16:
      uVar26 = 0x166;
      break;
    case CASE_17:
      uVar26 = 0x16e;
      break;
    case CASE_18:
      uVar26 = 0x174;
      break;
    case CASE_19:
      uVar26 = 400;
      break;
    case CASE_1A:
      uVar26 = 0x198;
      break;
    case CASE_1B:
      uVar26 = 0x1a0;
      break;
    case CASE_1C:
      uVar26 = 0x1a6;
      break;
    case CASE_1D:
      uVar26 = 0x1ac;
      break;
    case CASE_1E:
      uVar26 = 0x1b3;
      break;
    case CASE_1F:
      uVar26 = 0x1b9;
      break;
    case CASE_20:
      uVar26 = 0x1bf;
      break;
    case CASE_21:
      uVar26 = 0x1c5;
      break;
    case CASE_22:
      uVar26 = 0x1cc;
      break;
    case CASE_23:
      uVar26 = 0x1d3;
      break;
    case CASE_24:
      uVar26 = 0x1d9;
      break;
    case CASE_25:
      uVar26 = 0x17a;
      break;
    case CASE_26:
      uVar26 = 0x114;
      break;
    case CASE_27:
      uVar26 = 0x180;
      break;
    case CASE_28:
      uVar26 = 0x1df;
      break;
    default:
      uVar26 = 0;
    }
    /* ST_CALLSITE[0044F961]: CALL dword ptr [EDX + 0x90] */
    this_00->vfunc_90(4,uVar26);
  }
  if (*(int *)&local_1c->field_0xc == 2) {
    iVar14 = (message->arg0).i32;

    local_d0 = Library::DKW::LIB::MemAlloc(0x44);
    do {
      *(int **)(iVar30 + (int)local_d0) = PTR_0080677c;
      iVar30 = iVar30 + 4;
    } while (iVar30 < 0x44);
    local_d0[2] = PTR_00806774;
    local_d0[1] = PTR_00806774;
    *local_d0 = PTR_00806774;
    local_d0[0xf] = PTR_00806774;
    local_d0[9] = PTR_00806764;
    local_d0[8] = PTR_00806774;
    local_d0[10] = PTR_00806774;
    local_d0[0xb] = PTR_00806774;
    local_cc = 0;
    local_c8 = 0;
    local_c4 = PTR_008073cc;
    local_c0 = 0;
    local_bc = 0;
    local_b8 = 0;
    /* ST_CALLSITE[0044FA53]: CALL 0x00404ca5; direct=00404CA5 STT3DSprC::RestoreSpr */
    STT3DSprC::RestoreSpr
              ((STT3DSprC *)&this_00->field_01D5,(int *)&local_d0,
               (RecoveredRecordView_004AD790_D4DB5A31 *)(STField<int>(iVar14,0x5F6) + iVar14));
    FreeAndNull(&local_d0);
    /* ST_CALLSITE[0044FA6F]: CALL 0x0040551f; direct=0040551F STAllPlayersC::RestoreGObjData */
    STAllPlayersC::RestoreGObjData
              ((STAllPlayersC *)this_00,(undefined4 *)(STField<int>(iVar14,0x5FE) + iVar14));
    /* ST_CALLSITE[0044FA77]: CALL 0x0040333c; direct=0040333C STBoatC::RestoreBoatData */
    RestoreBoatData(this_00,iVar14);
    this_00->field_05A6 = nullptr;
    /* ST_CALLSITE[0044FA9A]: CALL 0x004052c2; direct=004052C2 STAllPlayersC::RegisterObject */
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    STAllPlayersC::RegisterObject
              (g_allPlayers_007FA174,(char)this_00->field_0024,
               CONCAT22(extraout_var_03,this_00->field_0030),
               CONCAT22(extraout_var,this_00->field_0032),(int *)this_00,1,0);
    if ((this_00->field_045D != CASE_14) || (this_00->field_05C0 != CASE_3)) {
      /* ST_CALLSITE[0044FACC]: CALL 0x00401325; direct=00401325 DumpClassC::WritePtr */
      DumpClassC::WritePtr
                (this_00->field_005B,this_00->field_005D,this_00->field_005F,0,
                 (RecoveredRecord_DumpClassC_00495EC0 *)this_00);
    }
    thunk_FUN_0048a910((RecoveredRecordView_0048A910_94DEC4B1 *)this_00);
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x2a6
              );
  }
  local_74[0] = '\0';
  local_e8[0] = '\0';
  switch(this_00->field_06F7) {
  case CASE_1:
    pcVar36 = local_74;
    pcVar35 = &CHAR_s_007a9e8c;
    break;
  case CASE_2:
    pcVar36 = local_74;
    pcVar35 = &CHAR_h_007a9e84;
    break;
  case CASE_3:
    pcVar36 = local_74;
    pcVar35 = &CHAR_c_007a9e7c;
    break;
  case CASE_4:
    pcVar36 = local_74;
    pcVar35 = &CHAR_d_007a9e74;
    break;
  case CASE_5:
    pcVar36 = local_74;
    pcVar35 = &CHAR_m_007a9e6c;
    break;
  case CASE_6:
    pcVar36 = local_74;
    pcVar35 = &CHAR_r_007a9e64;
    break;
  case CASE_7:
    pcVar36 = local_74;
    pcVar35 = &CHAR_r_007a9e5c;
    break;
  case CASE_8:
    pcVar36 = local_74;
    pcVar35 = &CHAR_l_007a9e54;
    break;
  case CASE_9:
    pcVar36 = local_74;
    pcVar35 = &CHAR_w_007a9e50;
    break;
  case CASE_A:
    pcVar36 = local_74;
    pcVar35 = &CHAR_t_007a9e48;
    break;
  case CASE_B:
    uVar17 = 0xffffffff;
    pcVar36 = &CHAR_l_007a9e40;
    do {
      pcVar35 = pcVar36;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar35 = pcVar36 + 1;
      cVar1 = *pcVar36;
      pcVar36 = pcVar35;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar30 = -1;
    pcVar36 = local_74;
    do {
      pcVar34 = pcVar36;
      if (iVar30 == 0) break;
      iVar30 = iVar30 + -1;
      pcVar34 = pcVar36 + 1;
      cVar1 = *pcVar36;
      pcVar36 = pcVar34;
    } while (cVar1 != '\0');
    pcVar35 = pcVar35 + -uVar17;
    pcVar34 = pcVar34 + -1;
    for (uVar27 = uVar17 >> 2; uVar27 != 0; uVar27 = uVar27 - 1) {
      *(undefined4 *)pcVar34 = *(undefined4 *)pcVar35;
      pcVar35 = pcVar35 + 4;
      pcVar34 = pcVar34 + 4;
    }
    pcVar36 = local_e8;
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pcVar34 = *pcVar35;
      pcVar35 = pcVar35 + 1;
      pcVar34 = pcVar34 + 1;
    }
    pcVar35 = &CHAR_l_007a9e94;
    break;
  case CASE_C:
    pcVar36 = local_74;
    pcVar35 = &CHAR_c_007a9e38;
    break;
  case CASE_D:
    pcVar36 = local_74;
    pcVar35 = &CHAR_c_007a9e30;
    break;
  case CASE_E:
    pcVar36 = local_74;
    pcVar35 = &CHAR_d_007a9e28;
    break;
  case CASE_F:
    pcVar36 = local_74;
    pcVar35 = &CHAR_h_007a9e20;
    break;
  case CASE_10:
    pcVar36 = local_74;
    pcVar35 = &CHAR_i_007a9e18;
    break;
  case CASE_11:
    pcVar36 = local_74;
    pcVar35 = &CHAR_l_007a9e10;
    break;
  case CASE_12:
    pcVar36 = local_74;
    pcVar35 = &CHAR_r_007a9e08;
    break;
  case CASE_13:
    pcVar36 = local_74;
    pcVar35 = &CHAR_r_007a9e00;
    break;
  case CASE_14:
    pcVar36 = local_74;
    pcVar35 = &CHAR_l_007a9df8;
    break;
  case CASE_15:
    pcVar36 = local_74;
    pcVar35 = &CHAR_d_007a9df4;
    break;
  case CASE_16:
    uVar17 = 0xffffffff;
    pcVar36 = &CHAR_p_007a9dec;
    do {
      pcVar35 = pcVar36;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar35 = pcVar36 + 1;
      cVar1 = *pcVar36;
      pcVar36 = pcVar35;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar30 = -1;
    pcVar36 = local_74;
    do {
      pcVar34 = pcVar36;
      if (iVar30 == 0) break;
      iVar30 = iVar30 + -1;
      pcVar34 = pcVar36 + 1;
      cVar1 = *pcVar36;
      pcVar36 = pcVar34;
    } while (cVar1 != '\0');
    pcVar35 = pcVar35 + -uVar17;
    pcVar34 = pcVar34 + -1;
    for (uVar27 = uVar17 >> 2; uVar27 != 0; uVar27 = uVar27 - 1) {
      *(undefined4 *)pcVar34 = *(undefined4 *)pcVar35;
      pcVar35 = pcVar35 + 4;
      pcVar34 = pcVar34 + 4;
    }
    pcVar36 = local_e8;
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pcVar34 = *pcVar35;
      pcVar35 = pcVar35 + 1;
      pcVar34 = pcVar34 + 1;
    }
    pcVar35 = &CHAR_p_007a9e9c;
    break;
  case CASE_17:
    pcVar36 = local_74;
    pcVar35 = &CHAR_a_007a9de4;
    break;
  case CASE_18:
    pcVar36 = local_74;
    pcVar35 = &CHAR_c_007a9ddc;
    break;
  case CASE_19:
    pcVar36 = local_74;
    pcVar35 = &CHAR_c_007a9dd8;
    break;
  case CASE_1A:
    pcVar36 = local_74;
    pcVar35 = &CHAR_t_007a9dd4;
    break;
  case CASE_1B:
    pcVar36 = local_74;
    pcVar35 = &CHAR_s_007a9dd0;
    break;
  case CASE_1C:
    pcVar36 = local_74;
    pcVar35 = &CHAR_p_007a9dcc;
    break;
  case CASE_1D:
    pcVar36 = local_74;
    pcVar35 = &CHAR_r_007a9dc8;
    break;
  case CASE_1E:
    pcVar36 = local_74;
    pcVar35 = &CHAR_s_007a9dc4;
    break;
  case CASE_1F:
    pcVar36 = local_74;
    pcVar35 = &CHAR_d_007a9dc0;
    break;
  case CASE_20:
    pcVar36 = local_74;
    pcVar35 = &CHAR_e_007a9dbc;
    break;
  case CASE_21:
    pcVar36 = local_74;
    pcVar35 = &CHAR_b_007a9db8;
    break;
  case CASE_22:
    pcVar36 = local_74;
    pcVar35 = &CHAR_u_007a9db4;
    break;
  case CASE_23:
    uVar17 = 0xffffffff;
    pcVar36 = &CHAR_g_007a9db0;
    do {
      pcVar35 = pcVar36;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar35 = pcVar36 + 1;
      cVar1 = *pcVar36;
      pcVar36 = pcVar35;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar30 = -1;
    pcVar36 = local_74;
    do {
      pcVar34 = pcVar36;
      if (iVar30 == 0) break;
      iVar30 = iVar30 + -1;
      pcVar34 = pcVar36 + 1;
      cVar1 = *pcVar36;
      pcVar36 = pcVar34;
    } while (cVar1 != '\0');
    pcVar35 = pcVar35 + -uVar17;
    pcVar34 = pcVar34 + -1;
    for (uVar27 = uVar17 >> 2; uVar27 != 0; uVar27 = uVar27 - 1) {
      *(undefined4 *)pcVar34 = *(undefined4 *)pcVar35;
      pcVar35 = pcVar35 + 4;
      pcVar34 = pcVar34 + 4;
    }
    pcVar36 = local_e8;
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pcVar34 = *pcVar35;
      pcVar35 = pcVar35 + 1;
      pcVar34 = pcVar34 + 1;
    }
    pcVar35 = &CHAR_g_007a9ea4;
    break;
  case CASE_24:
    pcVar36 = local_74;
    pcVar35 = &CHAR_e_007a9dac;
    break;
  case CASE_25:
    pcVar36 = local_74;
    pcVar35 = &CHAR_s_007a9da4;
    break;
  case CASE_26:
    pcVar36 = local_74;
    pcVar35 = &CHAR_f_007a9d9c;
    break;
  case CASE_27:
    pcVar36 = local_74;
    pcVar35 = &CHAR_f_007a9d94;
    break;
  case CASE_28:
    pcVar36 = local_74;
    pcVar35 = &CHAR_f_007a9d8c;
    break;
  default:
    goto switchD_0044fb10_default;
  }
  uVar17 = 0xffffffff;
  do {
    pcVar34 = pcVar35;
    if (uVar17 == 0) break;
    uVar17 = uVar17 - 1;
    pcVar34 = pcVar35 + 1;
    cVar1 = *pcVar35;
    pcVar35 = pcVar34;
  } while (cVar1 != '\0');
  uVar17 = ~uVar17;
  iVar30 = -1;
  do {
    pcVar35 = pcVar36;
    if (iVar30 == 0) break;
    iVar30 = iVar30 + -1;
    pcVar35 = pcVar36 + 1;
    cVar1 = *pcVar36;
    pcVar36 = pcVar35;
  } while (cVar1 != '\0');
  pcVar36 = pcVar34 + -uVar17;
  pcVar35 = pcVar35 + -1;
  memmove(pcVar35, pcVar36, uVar17); /* compiler REP MOVS byte copy */
  uVar27 = 0;
switchD_0044fb10_default:
  /* ST_CALLSITE[0044FDD0]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
  iVar30 = STT3DSprC::LoadSequence
                     ((STT3DSprC *)&this_00->field_01D5,0xe,PTR_0080677c,local_74,CASE_1D);
  if (iVar30 != 0) {
    RaiseInternalException
              (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x2da);
  }
  SVar40 = this_00->field_06F7;
  if ((((SVar40 == CASE_B) || (SVar40 == CASE_16)) || (SVar40 == CASE_23)) &&
     /* ST_CALLSITE[0044FE1D]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
     (iVar30 = STT3DSprC::LoadSequence
                         ((STT3DSprC *)&this_00->field_01D5,0xd,PTR_0080677c,local_e8,CASE_1D),
     iVar30 != 0)) {
    RaiseInternalException
              (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x2de);
  }
  switch(this_00->field_06F3) {
  case CASE_0:
    pcVar36 = &CHAR_0_007a9d88;
    break;
  case CASE_1:
    pcVar36 = &CHAR_1_007a4ffc;
    break;
  case CASE_2:
    pcVar36 = &CHAR_2_007aa028;
    break;
  case CASE_3:
    pcVar36 = &CHAR_3_007aa024;
    break;
  case CASE_4:
    pcVar36 = &CHAR_4_007aa020;
    break;
  case CASE_5:
    pcVar36 = &CHAR_5_007aa01c;
    break;
  case CASE_6:
    pcVar36 = &CHAR_6_007aa018;
    break;
  case CASE_7:
    pcVar36 = &CHAR_7_007aa014;
    break;
  default:
    goto switchD_0044fe4c_default;
  }
  uVar17 = 0xffffffff;
  do {
    pcVar35 = pcVar36;
    if (uVar17 == 0) break;
    uVar17 = uVar17 - 1;
    pcVar35 = pcVar36 + 1;
    cVar1 = *pcVar36;
    pcVar36 = pcVar35;
  } while (cVar1 != '\0');
  uVar17 = ~uVar17;
  iVar30 = -1;
  pcVar36 = local_74;
  do {
    pcVar34 = pcVar36;
    if (iVar30 == 0) break;
    iVar30 = iVar30 + -1;
    pcVar34 = pcVar36 + 1;
    cVar1 = *pcVar36;
    pcVar36 = pcVar34;
  } while (cVar1 != '\0');
  pcVar36 = pcVar35 + -uVar17;
  pcVar35 = pcVar34 + -1;
  memmove(pcVar35, pcVar36, uVar17); /* compiler REP MOVS byte copy */
switchD_0044fe4c_default:
  puVar21 = (byte *)(&this_00->field_01D5);
  /* ST_CALLSITE[0044FEDF]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
  iVar30 = STT3DSprC::LoadSequence((STT3DSprC *)puVar21,0xc,PTR_0080677c,local_74,CASE_1D);
  if (iVar30 != 0) {
    RaiseInternalException
              (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x2eb);
  }
  switch(this_00->field_06F7) {
  case CASE_9:
    local_c = ((8 - (int)this_00->field_006C / 0x2d) * 0xf) % 0x78;
    uVar27 = 0xe;
    uVar17 = this_00->field_001C * 0x41c64e6d + 0x3039;
    this_00->field_001C = uVar17;
    break;
  default:
    local_c = ((0x18 - (int)this_00->field_006C / 0xf) % 0x18 + (4 - DAT_008073fc) * 6) % 0x18;
    goto LAB_0045003f;
  case CASE_15:
    local_c = ((8 - (int)this_00->field_006C / 0x2d) * 0x14) % 0xa0;
    uVar27 = 0x13;
    uVar17 = this_00->field_001C * 0x41c64e6d + 0x3039;
    this_00->field_001C = uVar17;
    break;
  case CASE_24:
  case CASE_25:
    uVar17 = this_00->field_001C * 0x41c64e6d + 0x3039;
    this_00->field_001C = uVar17;
    local_c = (uVar17 >> 0x10) % 10;
LAB_0045003f:
    /* ST_CALLSITE[00450047]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
    STT3DSprC::SetCurFase((STT3DSprC *)puVar21,'\x0e',local_c);
    uVar17 = local_c;
    goto LAB_00450050;
  }
  uVar27 = (uVar17 >> 0x10) % uVar27;
  this_00->field_0822 = uVar27;
  /* ST_CALLSITE[0044FFCB]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
  STT3DSprC::SetCurFase((STT3DSprC *)puVar21,'\x0e',uVar27 + local_c);
  uVar17 = this_00->field_0822 + local_c;
LAB_00450050:
  /* ST_CALLSITE[00450054]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
  STT3DSprC::SetCurFase((STT3DSprC *)puVar21,'\f',uVar17);
  if ((this_00->field_06F7 != CASE_25) && (this_00->field_06F7 != CASE_24)) {

    thunk_FUN_004ac610(puVar21,'\x0e');

    thunk_FUN_004ac610(puVar21,'\f');
  }
  /* ST_CALLSITE[0045008B]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
  STT3DSprC::StartShow((STT3DSprC *)puVar21,0xe,g_playSystem_00802A38->field_00E4);
  /* ST_CALLSITE[004500A1]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
  STT3DSprC::StartShow((STT3DSprC *)puVar21,0xc,g_playSystem_00802A38->field_00E4);
  SVar40 = this_00->field_06F7;
  if (((SVar40 == CASE_B) || (SVar40 == CASE_16)) || (SVar40 == CASE_23)) {
    thunk_FUN_004acd60(puVar21,'\r',g_playSystem_00802A38->field_00E4 & 1);
    /* ST_CALLSITE[004500E4]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    STT3DSprC::StartShow((STT3DSprC *)puVar21,0xd,g_playSystem_00802A38->field_00E4);
    /* ST_CALLSITE[004500F4]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
    STT3DSprC::SetCurFase((STT3DSprC *)puVar21,'\r',local_d4);
  }
  local_78 = (uint)this_00->field_0041;
  /* ST_CALLSITE[00450149]: CALL 0x004045d9; direct=004045D9 STT3DSprC::sub_004AD3C0 */
  STT3DSprC::sub_004AD3C0
            ((STT3DSprC *)puVar21,(float)(int)local_78 * _DAT_007904f8 * _DAT_007904f0,
             (float)(int)this_00->field_0043 * _DAT_007904f8 * _DAT_007904f0,
             (float)(int)this_00->field_0045 * _DAT_007904f8 * _DAT_007904f0);
  uVar17 = local_c;
  if ((this_00->field_06F7 != CASE_25) && (this_00->field_06F7 != CASE_24)) {
    uVar17 = (0x18 - (int)this_00->field_006C / 0xf) % 0x18;
  }
  /* ST_CALLSITE[0045018E]: CALL 0x004052fe; direct=004052FE STT3DSprC::SetCurShad */
  STT3DSprC::SetCurShad((STT3DSprC *)puVar21,'\x0e',uVar17);
  thunk_FUN_0041f630((RecoveredRecordView_0041F630_FBFD9742 *)this_00);
  if (DAT_00807326 == '\0') {
    thunk_FUN_004ad5e0((STT3DSprC *)puVar21);
  }
  if (*(int *)&local_1c->field_0xc == 0) {
    local_78 = (message->arg0).u32;
    if (STField<int>(local_78,0x45) == 1) {
      /* ST_CALLSITE[004501D7]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
      iVar30 = STT3DSprC::LoadSequence
                         ((STT3DSprC *)puVar21,0xb,PTR_00806774,"forcef0",CASE_1D);
      if (iVar30 != 0) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x31b);
      }

      thunk_FUN_004ad670(puVar21,'\x0e');
      thunk_FUN_004ad150(puVar21,'\v');

      thunk_FUN_004ac700(puVar21,'\v');
      /* ST_CALLSITE[00450226]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
      STT3DSprC::StartShow((STT3DSprC *)puVar21,0xb,g_playSystem_00802A38->field_00E4);
    }
    if (STField<int>(local_78,0x45) == 3) {
      thunk_FUN_006377b0(this_00->field_01ED,1,-1,-1,-1,0x12);
    }
  }
  RaiseInternalException
            (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x329);
LAB_00450268:
  this_00->field_046B = nullptr;

  STPlaySystemC::sub_006E62D0(g_playSystem_00802A38,this_00->field_0471,(int *)&this_00->field_046B);
  if (this_00->field_07CA != nullptr) {

    iVar30_mg4A = STPlaySystemC::sub_006E62D0(g_playSystem_00802A38,this_00->field_07CA,&local_30);
    if (iVar30_mg4A == -4) {

      local_EAX_5256 =
           ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x335,0,0,"%s",
                              "STBoatC::GetMessage MESS_ID_ALLCREATE data.lname!=0");
      if (local_EAX_5256 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException
                (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x336);
    }
    Library::Ourlib::ST3DSMAP::SprSetLevAfter
              (this_00->field_0211,this_00->field_01ED,STField<int>(local_30,0x1ED));
  }
  if ((this_00->field_045D == CASE_F) && (this_00->field_0596 == CASE_3)) {

    iVar30_mg4C = STPlaySystemC::sub_006E62D0
                            (g_playSystem_00802A38,
                             *(RecoveredRecordView_005EFAE0_855D930D **)&this_00->field_0x58e,
                             &local_30);
    if (iVar30_mg4C == -4) {

      local_EAX_5399 =
           ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x33c,0,0,"%s",
                              "STBoatC::GetMessage MESS_ID_ALLCREATE sloi.name");
      if (local_EAX_5399 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException
                (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x33d);
    }
    Library::Ourlib::ST3DSMAP::SprSetLevAfter
              (this_00->field_0211,this_00->field_01ED,STField<int>(local_30,0x1ED));
    g_currentExceptionFrame = local_184.previous;
    return 0;
  }
  g_currentExceptionFrame = local_184.previous;
  return 0;
}

