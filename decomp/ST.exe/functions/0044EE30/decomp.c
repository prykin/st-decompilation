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
   direct_offsets={10:6,14:14,18:35,1c:30} */

int __thiscall STBoatC::GetMessage(STBoatC *this,STMessage *message)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  STMessageId SVar7;
  code *pcVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  STBoatC *this_00;
  int iVar12;
  dword dVar13;
  uint uVar14;
  undefined4 uVar16;
  dword dVar17;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  DArrayTy *pDVar18;
  STGroupBoatC *pSVar19;
  undefined4 *puVar20;
  int local_EAX_10888;
  AiPlrClassTy *pAVar21;
  int local_EAX_44850;
  int uVar15;
  void *pvVar22;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  void *extraout_EAX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_01;
  STGroupBoatC *this_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_03;
  undefined2 uVar24;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_04;
  STWorldObject *pSVar23;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_05;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_06;
  undefined2 uVar27;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_07;
  STGroupBoatCVTable *pSVar25;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EDX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EDX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EDX_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EDX_03;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EDX_04;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EDX_05;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EDX_06;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EDX_07;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EDX_08;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EDX_09;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EDX_10;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EDX_11;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EDX_12;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EDX_13;
  uint uVar26;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int *unaff_ESI;
  int iVar28;
  byte *pbVar29;
  ushort *puVar30;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  void *unaff_EDI;
  char *pcVar31;
  char *pcVar32;
  char *pcVar33;
  int *piVar34;
  AnonShape_0044EE30_F343D8F0 *pAVar35;
  byte *pbVar36;
  ushort *puVar37;
  short sVar38;
  CHAR local_284;
  undefined4 local_283 [63];
  InternalExceptionFrame local_184;
  int local_140 [7];
  int local_124 [7];
  int local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_f4;
  STBoatC *local_ec;
  char local_e8 [20];
  uint local_d4;
  undefined4 *local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4 [3];
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_9d;
  STMessage local_9c;
  AnonShape_0060EA30_DCEB68AD *local_7c;
  uint local_78;
  char local_74 [20];
  ushort local_60 [2];
  uint local_5c;
  undefined4 *local_58;
  uint local_54;
  ushort local_50 [2];
  undefined4 *local_4c;
  undefined2 local_48;
  undefined2 local_46;
  byte *local_44;
  byte *local_40;
  byte *local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  AnonShape_004B9D90_4F3151F9 *local_28;
  AnonShape_004B9D90_4F3151F9 *local_24;
  AnonShape_0044EE30_F343D8F0 *local_20;
  STGroupBoatC *local_1c;
  short local_16;
  short local_14;
  short local_12;
  STFishC *local_10;
  uint local_c;
  uint local_8;

  iVar28 = 0;
  local_8 = 0;
  local_d4 = 0;
  local_184.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_184;
  local_ec = this;
  iVar12 = Library::MSVCRT::__setjmp3(local_184.jumpBuffer,0);
  this_00 = local_ec;
  if (iVar12 != 0) {
    g_currentExceptionFrame = local_184.previous;
    if (iVar12 == -0x5001fff7) {
      return 0;
    }
    local_284 = '\0';
    memset(local_283, 0, 0xfe); /* compiler bulk-zero initialization */
    wsprintfA(&local_284,"STBoatC::GetMessage - Name=%d Player=%d obj_num=%d grp_num=%d\n",local_ec->field_0018,
              local_ec->field_0024,(uint)(ushort)local_ec->field_0032,
              (uint)(ushort)local_ec->field_0030);
    iVar28 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x1380,0,iVar12,
                                "%s",&local_284);
    if (iVar28 == 0) {
      RaiseInternalException(iVar12,0,"E:\\__titans\\wlad\\To_boat.cpp",0x1381);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  STSprGameObjC::GetMessage((STSprGameObjC *)local_ec,message);
  SVar7 = message->id;
  if (MESS_ID_ALLCREATE < SVar7) {
    if (SVar7 < MESS_SHARED_0129) {
      if (SVar7 != MESS_HITKILL) {
        if (SVar7 == MESS_SHARED_0121) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if (*(int *)((int)this_00->field_06CB + 0x2c) != 0x23) {
            this_00->field_0736 = *(undefined4 *)((message->arg0).u32 + 4);
            if (this_00->field_045D == CASE_3) {
              g_currentExceptionFrame = local_184.previous;
              return 0;
            }
            local_54 = g_playSystem_00802A38->field_00E4;
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
          this_00->vfunc_90(3,0x16c);
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        if (SVar7 != MESS_SHARED_0122) {
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        piVar34 = (message->arg0).ptr;
        if (*piVar34 != this_00->field_0024) {
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        this_00->field_0782 = piVar34[1];
        this_00->field_0786 = piVar34[2];
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      pSVar19 = (message->arg0).ptr;
      local_1c = pSVar19;
      if (DAT_008117bc != nullptr) {
        if (pSVar19 != nullptr) {
          local_9c.id = MESS_SHARED_5DD5;
          local_9c.arg0.words.high = this_00->field_0032;
          local_9c.arg0.words.low = *(undefined2 *)&this_00->field_0024;
          local_9c.arg1.words.high = *(undefined2 *)&pSVar19->field_0xc;
          local_9c.arg1.words.low = *(undefined2 *)&pSVar19->field_0008;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)*DAT_008117bc)(&local_9c);
        }
        if (((DAT_008117bc != nullptr) && (pSVar19 != nullptr)) &&
           (pSVar19->vtable != (STGroupBoatCVTable *)0x2710)) {
          local_9c.id = 0x5dd1;
          local_9c.arg0.words.high = this_00->field_0032;
          local_9c.arg0.words.low = *(undefined2 *)&this_00->field_0024;
          local_9c.arg1.words.high = *(undefined2 *)&pSVar19->field_0xc;
          local_9c.arg1.words.low = *(undefined2 *)&pSVar19->field_0008;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)*DAT_008117bc)(&local_9c);
        }
      }
      if (this_00->field_07CA != nullptr) {
        iVar12 = STPlaySystemC::sub_006E62D0
                           (g_playSystem_00802A38,this_00->field_07CA,(int *)&local_4c);
        if (iVar12 == -4) {
          iVar12 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x12f7,0,0,
                                      "%s","STBoatC::GetMessage MESS_HITKILL data.lname!=0 ptr=NULL");
          if (iVar12 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          RaiseInternalException
                    (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                     0x12f8);
        }
        pSVar19 = local_1c;
        piVar34 = local_140;
        for (iVar12 = 7; iVar12 != 0; iVar12 = iVar12 + -1) {
          *piVar34 = (int)pSVar19->vtable;
          pSVar19 = (STGroupBoatC *)&pSVar19->field_0x4;
          piVar34 = piVar34 + 1;
        }
        local_9c.id = MESS_HITKILL;
        local_9c.arg0.ptr = local_140;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)*local_4c)(&local_9c);
        pSVar19 = local_1c;
      }
      if (((this_00->field_045D == CASE_14) || (uVar14 = CheckPBoxCmd(this_00,CASE_14), uVar14 != 0)
          ) && (iVar12 = STPlaySystemC::sub_006E62D0
                                   (g_playSystem_00802A38,this_00->field_05A2,(int *)&local_10),
               iVar12 != -4)) {
        thunk_FUN_00492510(local_10,this_00->field_0018);
      }
      this_00->field_0455 = 1;
      sub_0048D930(this_00);
      sub_0048DBA0(this_00);
      sVar38 = this_00->field_066F;
      sVar4 = this_00->field_0673;
      sVar5 = this_00->field_0671;
      if (((sVar38 < 0) || (pSVar19 = local_1c, g_worldGrid.sizeX <= sVar38)) ||
         ((sVar5 < 0 ||
          (((g_worldGrid.sizeY <= sVar5 || (sVar4 < 0)) || (g_worldGrid.sizeZ <= sVar4)))))) {
        pSVar23 = nullptr;
      }
      else {
        pSVar23 = g_worldGrid.cells
                  [(int)g_worldGrid.planeStride * (int)sVar4 + (int)g_worldGrid.sizeX * (int)sVar5 +
                   (int)sVar38].objects[0];
      }
      if (((pSVar23 != nullptr) &&
          (*(int *)&pSVar23->field_0x18 == this_00->field_0679)) &&
         ((this_00->field_0675 == 99 && (pSVar23->value_20 == 1000)))) {
        thunk_FUN_004b7d50(pSVar23,this_00);
      }
      sub_004952E0(this_00);
      STAllPlayersC::DeleteGuardBoat
                (g_allPlayers_007FA174,*(char *)&this_00->field_0024,this_00->field_0032,1);
      STAllPlayersC::DeleteGuardBoat
                (g_allPlayers_007FA174,*(char *)&this_00->field_0024,this_00->field_0032,0);
      sub_00492420(this_00);
      thunk_FUN_004924a0(this_00);
      thunk_FUN_00492fc0((AnonShape_00492FC0_E6F586EF *)this_00);
      thunk_FUN_00493bc0(this_00);
      sVar38 = this_00->field_06A9;
      sVar4 = this_00->field_06AD;
      sVar5 = this_00->field_06AB;
      if (((sVar38 < 0) || (pSVar19 = local_1c, g_worldGrid.sizeX <= sVar38)) ||
         ((sVar5 < 0 ||
          (((g_worldGrid.sizeY <= sVar5 || (sVar4 < 0)) || (g_worldGrid.sizeZ <= sVar4)))))) {
        local_24 = nullptr;
      }
      else {
        local_24 = (AnonShape_004B9D90_4F3151F9 *)
                   g_worldGrid.cells
                   [(int)g_worldGrid.planeStride * (int)sVar4 + (int)g_worldGrid.sizeX * (int)sVar5
                    + (int)sVar38].objects[0];
      }
      if (((local_24 == nullptr) ||
          (*(AnonShape_005EFAE0_B406B78B **)&local_24->field_0x18 != this_00->field_06AF)) ||
         (iVar12 = thunk_FUN_004b9d90(local_24), iVar12 == 0)) {
        STPlaySystemC::sub_006E62D0(g_playSystem_00802A38,this_00->field_06AF,(int *)&local_24);
      }
      if (((local_24 != nullptr) &&
          (*(int *)&local_24->field_0x20 == 1000)) &&
         (thunk_FUN_004b9d20(local_24,this_00),
         *(int *)&local_24->field_0x4b0 == this_00->field_0018)) {
        *(undefined4 *)&local_24->field_0x4b0 = 0;
      }
      if (((this_00->field_045D == CASE_13) &&
          ((AnonShape_005EFAE0_B406B78B *)this_00->field_0524 != nullptr)
          ) && (iVar12 = STPlaySystemC::sub_006E62D0
                                   (g_playSystem_00802A38,
                                    (AnonShape_005EFAE0_B406B78B *)this_00->field_0524,
                                    (int *)&local_24), iVar12 != -4)) {
        thunk_FUN_004cf3e0(local_24,this_00->field_0018);
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      ST3DSMAPContext::sub_006E6780
                (this_00->field_0211,
                 CONCAT22(CONCAT11(2,(char)((uint)this_00->field_0018 >> 0x10)),
                          (short)this_00->field_0018));
      this_00->field_0826 = pSVar19->field_0008;
      dVar13 = this_00->slot_2C();
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      thunk_FUN_004b7710(CONCAT31((int3)((uint)extraout_ECX_00 >> 8),
                                  *(undefined1 *)&this_00->field_0024),dVar13);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (this_00->field_0024 == (uint)*(byte *)(this_00->field_0010 + 0x112d)) {
        thunk_FUN_004d8b70((char)this_00->field_0024);
      }
      if (pSVar19->field_0018 != 2) {
        puVar20 = &this_00->field_01D5;
        STT3DSprC::StopShow((STT3DSprC *)puVar20,0xf);
        STT3DSprC::StopShow((STT3DSprC *)puVar20,0);
        STT3DSprC::StopShow((STT3DSprC *)puVar20,1);
        STT3DSprC::StopShow((STT3DSprC *)puVar20,0xe);
        STT3DSprC::StopShow((STT3DSprC *)puVar20,0xd);
        STT3DSprC::StopShow((STT3DSprC *)puVar20,0xc);
        STT3DSprC::StopShow((STT3DSprC *)puVar20,8);
        STT3DSprC::StopShow((STT3DSprC *)puVar20,0xb);
        this_01 = thunk_FUN_0042b760(*(char *)&this_00->field_0024,this_00->field_0030);
        pSVar19 = local_1c;
        if (this_01 != nullptr) {
          this_01->sub_00498D20(0x6a,&this_00->field_0032);
          pSVar19 = local_1c;
        }
      }
      if (this_00->field_0465 != nullptr) {
        thunk_FUN_00635fd0(this_00->field_0465);
        Library::MSVCRT::FUN_0072e2b0(this_00->field_0465);
        this_00->field_0465 = nullptr;
      }
      if (((*(int *)&pSVar19->field_0x4 == 0xa8) || (pSVar19->field_0018 == 0)) ||
         (pSVar19->field_0018 == 4)) {
        uVar16 = 0xffffffff;
        iVar12 = thunk_FUN_004ad650((STT3DSprC *)&this_00->field_01D5);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        thunk_FUN_0062b770((int)this_00->field_0041,(int)this_00->field_0043,
                           (int)this_00->field_0045,*(undefined4 *)((int)this_00->field_06CB + 0x2c)
                           ,(int)this_00,(int)this_00->field_006C,iVar12,uVar16);
      }
      if (pSVar19->field_0018 == 3) {
        thunk_FUN_006377b0(this_00->field_01ED,0,(int)this_00->field_0041,(int)this_00->field_0043,
                           (int)this_00->field_0045,0x12);
      }
      if (pSVar19->field_0018 == 2) {
        this_00->field_02C0 = 1;
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      goto LAB_0045ad7b;
    }
    if (SVar7 != MESS_SHARED_0129) {
      if (SVar7 != MESS_STBOATC_4405) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      TLOEmbryoTy::sub_0041C3F0
                ((TLOEmbryoTy *)this_00,*(undefined **)((int)this_00->field_06CB + 0x3f));
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    if (this_00->field_045D != CASE_14) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    if (this_00->field_05C0 != 3) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    if (this_00->field_07C2 == 0) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    if ((this_00->field_05A6 == nullptr) &&
       (iVar12 = STPlaySystemC::sub_006E62D0
                           (g_playSystem_00802A38,this_00->field_05A2,(int *)&this_00->field_05A6),
       iVar12 == -4)) {
      RaiseInternalException
                (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x1372);
    }
    local_9d = this_00->field_0063;
    uVar2 = this_00->field_0061;
    uVar3 = this_00->field_0062;
    puVar30 = this_00->field_05A6 + 0x1a;
    puVar37 = &this_00->field_0034;
    for (iVar12 = 0x17; iVar12 != 0; iVar12 = iVar12 + -1) {
      *(undefined4 *)puVar37 = *(undefined4 *)puVar30;
      puVar30 = puVar30 + 2;
      puVar37 = puVar37 + 2;
    }
    *puVar37 = *puVar30;
    *(char *)(puVar37 + 1) = (char)puVar30[1];
    this_00->field_0076 = 0;
    this_00->field_006E = 0x2f;
    this_00->field_0061 = uVar2;
    this_00->field_0062 = uVar3;
    this_00->field_0063 = local_9d;
    iVar12 = this_00->vfunc_D8();
    if (iVar12 == 0) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    iVar12 = 0x1377;
    goto cf_error_exit_0045AEE3;
  }
  if (SVar7 == MESS_ID_ALLCREATE) goto LAB_00450268;
  if (MESS_SHARED_0003 < SVar7) {
    if (SVar7 == MESS_SHARED_010F) {
      local_44 = (byte *)STT3DSprC::SaveSpr((STT3DSprC *)&this_00->field_01D5,&local_38);
      local_3c = (byte *)STAllPlayersC::SaveGObjData((STAllPlayersC *)this_00,(int *)&local_2c);
      local_40 = (byte *)SaveBoatData(this_00,(int *)&local_34);
      local_7c = (AnonShape_0060EA30_DCEB68AD *)(local_2c + local_34 + local_38);
      local_20 = Library::DKW::LIB::MemAlloc((uint)local_7c);
      pbVar29 = local_40;
      pAVar35 = local_20;
      for (uVar14 = local_34 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
        bVar9 = pbVar29[1];
        bVar10 = pbVar29[2];
        bVar11 = pbVar29[3];
        pAVar35->field_0x0 = pbVar29[0];
        pAVar35->field_0x1 = bVar9;
        pAVar35->field_0x2 = bVar10;
        pAVar35->field_0x3 = bVar11;
        pbVar29 = pbVar29 + 4;
        pAVar35 = (AnonShape_0044EE30_F343D8F0 *)&pAVar35->field_0x4;
      }
      for (uVar14 = local_34 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *(byte *)pAVar35 = *pbVar29;
        pbVar29 = pbVar29 + 1;
        pAVar35 = (AnonShape_0044EE30_F343D8F0 *)&pAVar35->field_0x1;
      }
      pbVar29 = local_3c;
      pbVar36 = &local_20->field_0x0 + local_34;
      memmove(pbVar36, pbVar29, local_2c); /* compiler REP MOVS byte copy */
      uVar14 = 0;
      local_20->field_05FE = local_34;
      local_20->field_0602 = local_2c;
      pbVar29 = local_44;
      pbVar36 = &local_20->field_0x0 + local_34 + local_2c;
      memmove(pbVar36, pbVar29, local_38); /* compiler REP MOVS byte copy */
      local_20->field_05F6 = local_34 + local_2c;
      local_20->field_05FA = local_38;
      STPlaySystemC::SaveObjData
                (g_playSystem_00802A38,(int *)this_00->field_0018,(byte *)local_20,local_7c);
      FreeAndNull(&local_44);
      FreeAndNull(&local_3c);
      FreeAndNull(&local_40);
      FreeAndNull(&local_20);
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    if (SVar7 != MESS_TORPHIT) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    pSVar19 = (message->arg0).ptr;
    local_c = 0;
    local_7c = *(AnonShape_0060EA30_DCEB68AD **)pSVar19;
    if (this_00->field_0742 == 1) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((this_00->field_045D == CASE_8) && (*(int *)((int)this_00->field_06CB + 0x1c) != 2)) {
      *(undefined4 *)((int)this_00->field_06CB + 0x1c) = 1;
    }
    iVar12 = this_00->field_0786;
    if ((0 < iVar12) && (iVar12 < 0x65)) {
      *(int *)pSVar19 = *(int *)pSVar19 - (iVar12 * *(int *)pSVar19) / 100;
    }
    iVar12 = *(int *)((int)pSVar19 + 4);
    local_1c = pSVar19;
    if (iVar12 == 0x65) goto LAB_00459f59;
    if (iVar12 != 0x42) {
      switch(iVar12) {
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
        iVar12 = 0;
        if (local_c == 1) {
          iVar12 = *(int *)pSVar19;
          iVar28 = (iVar12 * 9) / 10 + (iVar12 * 9 >> 0x1f);
LAB_00459e30:
          iVar12 = iVar12 - (iVar28 - (iVar28 >> 0x1f));
        }
        else {
          if (local_c == 2) {
            iVar12 = *(int *)pSVar19;
            iVar28 = (iVar12 * 0x11) / 0x14 + (iVar12 * 0x11 >> 0x1f);
            goto LAB_00459e30;
          }
          if (local_c == 3) {
            iVar12 = *(int *)pSVar19;
            iVar28 = (iVar12 * 4) / 5 + (iVar12 * 4 >> 0x1f);
            goto LAB_00459e30;
          }
        }
        *(int *)pSVar19 = *(int *)pSVar19 - iVar12;
      }
      uVar15 = LookupRecordByte(*(char *)&this_00->field_0024);
      uVar14 = uVar15 & 0xff;
      if (uVar14 == 1) {
        iVar12 = this_00->field_0024;
        iVar28 = 4;
LAB_00459e71:
        local_c = thunk_FUN_004e60d0(iVar12,iVar28);
      }
      else {
        if (uVar14 == 2) {
          iVar12 = this_00->field_0024;
          iVar28 = 0x81;
          goto LAB_00459e71;
        }
        if (uVar14 == 3) {
          iVar12 = this_00->field_0024;
          iVar28 = 0x65;
          goto LAB_00459e71;
        }
      }
      iVar12 = 0;
      if (local_c == 1) {
        iVar12 = *(int *)pSVar19;
        iVar28 = iVar12 * 8;
LAB_00459eaa:
        iVar12 = iVar12 - iVar28 / 10;
      }
      else {
        if (local_c == 2) {
          iVar12 = *(int *)pSVar19;
          iVar28 = iVar12 * 6;
          goto LAB_00459eaa;
        }
        if (local_c == 3) {
          iVar12 = *(int *)pSVar19;
          iVar28 = iVar12 * 4;
          goto LAB_00459eaa;
        }
      }
      *(int *)pSVar19 = *(int *)pSVar19 - iVar12;
      if (*(int *)((int)pSVar19 + 4) == 0x9a) {
        iVar12 = *(int *)((int)pSVar19 + 8);
        this_00->field_0772 = iVar12;
        if ((this_00->field_0776 < 2) && (iVar12 = thunk_FUN_004e60d0(iVar12,0x93), 0 < iVar12)) {
          this_00->field_0776 = 2;
        }
        if (this_00->field_076E < 0) {
          this_00->field_076E = 0;
        }
        iVar12 = this_00->vfunc_0C();
        if (iVar12 == 3) {
          this_00->vfunc_C8(0);
        }
      }
      if ((*(int *)((int)pSVar19 + 4) == 0xad) || (*(int *)((int)pSVar19 + 4) == 0xa1)) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar12 = *(int *)((int)this_00->field_06CB + 0x2c);
        if (iVar12 == 9) {
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        if (iVar12 == 0x15) {
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        thunk_FUN_00495010(this_00,*(int *)((int)pSVar19 + 0x10));
      }
      goto LAB_00459f59;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar12 = *(int *)((int)this_00->field_06CB + 0x2c);
    if (iVar12 == 9) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    if (iVar12 == 0x15) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    local_EAX_44850 = LookupRecordByte(*(char *)&this_00->field_0024);
    uVar14 = local_EAX_44850 & 0xff;
    if (uVar14 == 1) {
      iVar12 = this_00->field_0024;
      iVar28 = 0x2d;
LAB_00459d8b:
      local_c = thunk_FUN_004e60d0(iVar12,iVar28);
    }
    else {
      if (uVar14 == 2) {
        iVar12 = this_00->field_0024;
        iVar28 = 0x2d;
        goto LAB_00459d8b;
      }
      if (uVar14 == 3) {
        iVar12 = this_00->field_0024;
        iVar28 = 0x6a;
        goto LAB_00459d8b;
      }
    }
    iVar12 = 0;
    if (local_c == 1) {
      iVar12 = *(int *)pSVar19 - (*(int *)pSVar19 * 9) / 10;
    }
    *(int *)pSVar19 = *(int *)pSVar19 - iVar12;
LAB_00459f59:
    if (200 < (int)local_7c - *(int *)pSVar19) {
      *(uint **)pSVar19 = &local_7c[-9].field_0010;
    }
    if (this_00->field_0716 < 1) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    this_00->field_0716 = this_00->field_0716 - *(int *)pSVar19;
    pvVar22 = DAT_00811798;
    if ((((DAT_00811798 != nullptr) && (*(int *)((int)pSVar19 + 8) != 0xff)) &&
        (pvVar22 = (void *)thunk_FUN_0041c710((AnonShape_0041C710_C4D46939 *)this_00),
        pvVar22 != nullptr)) && (*(int *)((int)pSVar19 + 0x14) == 0)) {
      thunk_FUN_0061f8b0(DAT_00811798,(int)this_00->field_005B,(int)this_00->field_005D,
                         this_00->field_0024);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      pvVar22 = extraout_EAX;
    }
    uVar24 = (undefined2)((uint)pvVar22 >> 0x10);
    if ((DAT_008117bc != nullptr) && (pSVar19 != nullptr)) {
      local_9c.id = MESS_SHARED_5DD5;
      local_9c.arg0.words.high = this_00->field_0032;
      local_9c.arg0.words.low = *(undefined2 *)&this_00->field_0024;
      local_9c.arg1.words.high = (short)*(int *)((int)pSVar19 + 0xc);
      local_9c.arg1.words.low = (short)*(int *)((int)pSVar19 + 8);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)*DAT_008117bc)(&local_9c);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar24 = extraout_var_00;
    }
    if (this_00->field_0716 < 1) {
      if (((DAT_008117bc != nullptr) && (pSVar19 != nullptr)) &&
         (*(int *)pSVar19 != 10000)) {
        local_9c.id = 0x5dd1;
        local_9c.arg0.words.high = this_00->field_0032;
        local_9c.arg0.words.low = *(undefined2 *)&this_00->field_0024;
        local_9c.arg1.words.high = (short)*(int *)((int)pSVar19 + 0xc);
        local_9c.arg1.words.low = (short)*(int *)((int)pSVar19 + 8);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)*DAT_008117bc)(&local_9c);
      }
      this_00->field_02C0 = 1;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      switch(*(undefined4 *)((int)this_00->field_06CB + 0x2c)) {
      case 1:
        uVar16 = 0xcb;
        break;
      case 2:
        uVar16 = 0xd1;
        break;
      case 3:
        uVar16 = 0xd7;
        break;
      case 4:
        uVar16 = 0xdd;
        break;
      case 5:
        uVar16 = 0xe3;
        break;
      case 6:
        uVar16 = 0xea;
        break;
      case 7:
        uVar16 = 0xf1;
        break;
      case 8:
        uVar16 = 0xf8;
        break;
      case 9:
        uVar16 = 0x100;
        break;
      case 10:
        uVar16 = 0x105;
        break;
      case 0xb:
        uVar16 = 0x10b;
        break;
      case 0xc:
        uVar16 = 0x111;
        break;
      case 0xd:
        uVar16 = 0x12f;
        break;
      case 0xe:
        uVar16 = 0x135;
        break;
      case 0xf:
        uVar16 = 0x13b;
        break;
      case 0x10:
        uVar16 = 0x141;
        break;
      case 0x11:
        uVar16 = 0x147;
        break;
      case 0x12:
        uVar16 = 0x14e;
        break;
      case 0x13:
        uVar16 = 0x155;
        break;
      case 0x14:
        uVar16 = 0x15c;
        break;
      case 0x15:
        uVar16 = 0x164;
        break;
      case 0x16:
        uVar16 = 0x169;
        break;
      case 0x17:
        uVar16 = 0x171;
        break;
      case 0x18:
        uVar16 = 0x177;
        break;
      case 0x19:
        uVar16 = 0x193;
        break;
      case 0x1a:
        uVar16 = 0x19b;
        break;
      case 0x1b:
        uVar16 = 0x1a3;
        break;
      case 0x1c:
        uVar16 = 0x1a9;
        break;
      case 0x1d:
        uVar16 = 0x1af;
        break;
      case 0x1e:
        uVar16 = 0x1b6;
        break;
      case 0x1f:
        uVar16 = 0x1bc;
        break;
      case 0x20:
        uVar16 = 0x1c2;
        break;
      case 0x21:
        uVar16 = 0x1c8;
        break;
      case 0x22:
        uVar16 = 0x1cf;
        break;
      case 0x23:
        uVar16 = 0x1d6;
        break;
      case 0x24:
        uVar16 = 0x1dc;
        break;
      case 0x25:
        uVar16 = 0x17d;
        break;
      case 0x26:
        uVar16 = 0x117;
        break;
      case 0x27:
        uVar16 = 0x183;
        break;
      case 0x28:
        uVar16 = 0x1e2;
        break;
      default:
        uVar16 = 0;
      }
      this_00->vfunc_90(2,uVar16);
      sub_0048D930(this_00);
      sub_0048DBA0(this_00);
      sVar38 = this_00->field_0671;
      sVar4 = this_00->field_0673;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_7c = (AnonShape_0060EA30_DCEB68AD *)CONCAT22(local_7c._2_2_,sVar38);
      sVar5 = this_00->field_066F;
      if (((((sVar5 < 0) || (g_worldGrid.sizeX <= sVar5)) || (sVar38 < 0)) ||
          ((g_worldGrid.sizeY <= sVar38 || (sVar4 < 0)))) || (g_worldGrid.sizeZ <= sVar4)) {
        pSVar23 = nullptr;
      }
      else {
        pSVar23 = g_worldGrid.cells
                  [(int)g_worldGrid.planeStride * (int)sVar4 + (int)g_worldGrid.sizeX * (int)sVar38
                   + (int)sVar5].objects[0];
        pSVar19 = local_1c;
      }
      if (((pSVar23 != nullptr) &&
          (*(int *)&pSVar23->field_0x18 == this_00->field_0679)) &&
         ((this_00->field_0675 == 99 && (pSVar23->value_20 == 1000)))) {
        thunk_FUN_004b7d50(pSVar23,this_00);
      }
      sub_004952E0(this_00);
      STAllPlayersC::DeleteGuardBoat
                (g_allPlayers_007FA174,*(char *)&this_00->field_0024,this_00->field_0032,1);
      STAllPlayersC::DeleteGuardBoat
                (g_allPlayers_007FA174,*(char *)&this_00->field_0024,this_00->field_0032,0);
      sub_00492420(this_00);
      if (this_00->field_07CA != nullptr) {
        iVar12 = STPlaySystemC::sub_006E62D0
                           (g_playSystem_00802A38,this_00->field_07CA,(int *)&local_58);
        if (iVar12 == -4) {
          iVar12 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x1296,0,0,
                                      "%s","STBoatC::GetMessage MESS_TORPHIT data.lname!=0 ptr=NULL");
          if (iVar12 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          RaiseInternalException
                    (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                     0x1297);
        }
        pSVar19 = local_1c;
        piVar34 = local_124;
        for (iVar12 = 7; iVar12 != 0; iVar12 = iVar12 + -1) {
          *piVar34 = *(int *)pSVar19;
          pSVar19 = (STGroupBoatC *)((int)pSVar19 + 4);
          piVar34 = piVar34 + 1;
        }
        local_124[0] = 0x1716b;
        local_9c.id = MESS_TORPHIT;
        local_9c.arg0.ptr = local_124;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)*local_58)(&local_9c);
        pSVar19 = local_1c;
      }
      thunk_FUN_004924a0(this_00);
      thunk_FUN_00492fc0((AnonShape_00492FC0_E6F586EF *)this_00);
      thunk_FUN_00493bc0(this_00);
      sVar38 = this_00->field_06A9;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      local_7c = (AnonShape_0060EA30_DCEB68AD *)CONCAT22(extraout_var_01,sVar38);
      sVar4 = this_00->field_06AD;
      sVar5 = this_00->field_06AB;
      if ((((sVar38 < 0) || (g_worldGrid.sizeX <= sVar38)) || (sVar5 < 0)) ||
         (((g_worldGrid.sizeY <= sVar5 || (sVar4 < 0)) || (g_worldGrid.sizeZ <= sVar4)))) {
        local_28 = nullptr;
      }
      else {
        local_28 = (AnonShape_004B9D90_4F3151F9 *)
                   g_worldGrid.cells
                   [(int)g_worldGrid.planeStride * (int)sVar4 + (int)g_worldGrid.sizeX * (int)sVar5
                    + (int)sVar38].objects[0];
      }
      if (((local_28 == nullptr) ||
          (*(AnonShape_005EFAE0_B406B78B **)&local_28->field_0x18 != this_00->field_06AF)) ||
         (iVar12 = thunk_FUN_004b9d90(local_28), iVar12 == 0)) {
        STPlaySystemC::sub_006E62D0(g_playSystem_00802A38,this_00->field_06AF,(int *)&local_28);
      }
      if (((local_28 != nullptr) &&
          (*(int *)&local_28->field_0x20 == 1000)) &&
         (thunk_FUN_004b9d20(local_28,this_00),
         *(int *)&local_28->field_0x4b0 == this_00->field_0018)) {
        *(undefined4 *)&local_28->field_0x4b0 = 0;
      }
      if (((this_00->field_045D == CASE_13) &&
          ((AnonShape_005EFAE0_B406B78B *)this_00->field_0524 != nullptr)
          ) && (iVar12 = STPlaySystemC::sub_006E62D0
                                   (g_playSystem_00802A38,
                                    (AnonShape_005EFAE0_B406B78B *)this_00->field_0524,
                                    (int *)&local_28), iVar12 != -4)) {
        thunk_FUN_004cf3e0(local_28,this_00->field_0018);
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      ST3DSMAPContext::sub_006E6780
                (this_00->field_0211,
                 CONCAT22(CONCAT11(2,(char)((uint)this_00->field_0018 >> 0x10)),
                          (short)this_00->field_0018));
      this_00->field_0826 = *(int *)((int)pSVar19 + 8);
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    if ((this_00->field_045D == CASE_4) && (this_00->field_0580 == CASE_5)) {
      sVar38 = this_00->field_0554;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_7c = (AnonShape_0060EA30_DCEB68AD *)CONCAT22(uVar24,sVar38);
      sVar4 = this_00->field_0558;
      sVar5 = this_00->field_0556;
      if ((sVar38 < 0) ||
         ((((g_worldGrid.sizeX <= sVar38 || (sVar5 < 0)) || (g_worldGrid.sizeY <= sVar5)) ||
          ((sVar4 < 0 || (g_worldGrid.sizeZ <= sVar4)))))) {
        local_10 = nullptr;
      }
      else {
        local_10 = (STFishC *)
                   g_worldGrid.cells
                   [(int)g_worldGrid.planeStride * (int)sVar4 + (int)g_worldGrid.sizeX * (int)sVar5
                    + (int)sVar38].objects[0];
      }
      if ((local_10 != nullptr) && (local_10->field_0018 == this_00->field_055A)) {
        thunk_FUN_004e2200(local_10,this_00->field_0568,this_00->field_0018,this_00->field_0716);
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
    }
    if (*(int *)((int)pSVar19 + 8) == 0xff) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    local_10 = (STFishC *)
               STAllPlayersC::GetObjPtr
                         (g_allPlayers_007FA174,(char)*(int *)((int)pSVar19 + 8),
                          *(ushort *)((int)pSVar19 + 0xc),CASE_1);
    if ((STGameObjC *)local_10 == nullptr) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    if (this_00->field_045D != CASE_3) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    STFishC::sub_004162F0(local_10,&local_16,&local_14,&local_12);
    uVar14 = (int)this_00->field_0047 - (int)local_16;
    uVar26 = (int)uVar14 >> 0x1f;
    if (6 < (int)((uVar14 ^ uVar26) - uVar26)) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    uVar14 = (int)this_00->field_0049 - (int)local_14;
    uVar26 = (int)uVar14 >> 0x1f;
    if (6 < (int)((uVar14 ^ uVar26) - uVar26)) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    uVar14 = (int)this_00->field_004B - (int)local_12;
    uVar26 = (int)uVar14 >> 0x1f;
    if (2 < (int)((uVar14 ^ uVar26) - uVar26)) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    _AddDefenceShots(this_00,(char)*(int *)((int)pSVar19 + 8),(short)*(int *)((int)pSVar19 + 0xc),
                     *(int *)pSVar19);
    g_currentExceptionFrame = local_184.previous;
    return 0;
  }
  if (SVar7 == MESS_SHARED_0003) {
    sub_0041C5A0(this_00);
    TLOBaseTy::sub_0041D590((TLOBaseTy *)this_00);
    sub_004167A0(this_00);
    pSVar19 = thunk_FUN_0042b760(*(char *)&this_00->field_0024,this_00->field_0030);
    if (pSVar19 != nullptr) {
      thunk_FUN_0040cdb0(pSVar19,(uint)(ushort)this_00->field_0032);
    }
    thunk_FUN_004ad310((STT3DSprC *)&this_00->field_01D5);
    uVar16 = thunk_FUN_00495ff0(this_00->field_005B,this_00->field_005D,this_00->field_005F,
                                this_00->field_008E,(AnonShape_00495FF0_59081BDD *)this_00);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    STAllPlayersC::UnRegisterObject
              (g_allPlayers_007FA174,*(char *)&this_00->field_0024,
               CONCAT22((short)((uint)uVar16 >> 0x10),this_00->field_0030),
               CONCAT22(extraout_var_07,this_00->field_0032),(int *)this_00,this_00->field_0826);
    thunk_FUN_00489950((int)this_00);
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
      iVar12 = (int)this_00->field_0041 % 0xc9;
      local_78 = (int)this_00->field_0043 % 0xc9;
      iVar28 = (int)this_00->field_0045 % 200;
      if ((((0x46 < iVar12) && (iVar12 < 0x82)) &&
          ((0x46 < (int)local_78 && (((int)local_78 < 0x82 && (0x47 < iVar28)))))) &&
         (iVar28 < 0x81)) {
        this_00->field_005A = 0;
        this_00->field_004D = 0;
      }
    }
    if (((this_00->field_07EE == 1) &&
        (iVar12 = this_00->vfunc_7C(), iVar12 < 0x1a)) ||
       (((this_00->field_07EE == 2 &&
         (iVar12 = this_00->vfunc_7C(), iVar12 < 0x33)) ||
        ((this_00->field_07EE == 3 &&
         (iVar12 = this_00->vfunc_7C(), iVar12 < 0x4c)))))) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar12 = thunk_FUN_004e8030(*(int *)((int)this_00->field_06CB + 0x2c));
      if (iVar12 == 3) {
        if (((this_00->field_045D != CASE_16) &&
            (uVar14 = CheckPBoxCmd(this_00,CASE_16), uVar14 == 0)) &&
           (g_packedRecords_A62x8[*(char *)&this_00->field_0024].field329_0x15f != 0)) {
          pDVar18 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
          Library::DKW::TBL::DArrayAppend(pDVar18,&this_00->field_0032);
          STAllPlayersC::AddObjsToGroup
                    (g_allPlayers_007FA174,*(char *)&this_00->field_0024,0xfffe,&pDVar18->flags,
                     local_60);
          DArrayDestroy(pDVar18);
          pSVar19 = thunk_FUN_0042b760(*(char *)&this_00->field_0024,local_60[0]);
          puVar20 = local_b4;
          local_b4[0] = 1;
          pSVar25 = pSVar19->vtable;
          uVar16 = 0x11;
          goto LAB_00450695;
        }
      }
      else if (((this_00->field_045D != CASE_4) &&
               (uVar14 = CheckPBoxCmd(this_00,CASE_4), uVar14 == 0)) &&
              (g_packedRecords_A62x8[*(char *)&this_00->field_0024].field326_0x15b != 0)) {
        pDVar18 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
        Library::DKW::TBL::DArrayAppend(pDVar18,&this_00->field_0032);
        STAllPlayersC::AddObjsToGroup
                  (g_allPlayers_007FA174,*(char *)&this_00->field_0024,0xfffe,&pDVar18->flags,
                   local_50);
        DArrayDestroy(pDVar18);
        pSVar19 = thunk_FUN_0042b760(*(char *)&this_00->field_0024,local_50[0]);
        puVar20 = &local_a8;
        local_a8 = 1;
        local_a4 = 0;
        pSVar25 = pSVar19->vtable;
        uVar16 = 4;
LAB_00450695:
        (*pSVar25->sub_00498D20)(pSVar19,uVar16,puVar20);
      }
    }
    local_1c = thunk_FUN_0042b760(*(char *)&this_00->field_0024,this_00->field_0030);
    uVar14 = this_00->field_07AA + 1;
    this_00->field_07AA = uVar14;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    switch(*(undefined4 *)((int)this_00->field_06CB + 0x2c)) {
    case 1:
    case 10:
    case 0x1e:
    case 0x20:
    case 0x22:
    case 0x23:
    case 0x28:
      if (this_00->field_07A2 < 1) {
        uVar14 = this_00->field_079E;
        this_00->field_07A2 = uVar14;
      }
      break;
    default:
      if (this_00->field_07A2 < 1) {
        iVar12 = thunk_FUN_004de410((void *)this_00->field_0024,this_00->field_079A,
                                    this_00->field_079E);
        this_00->field_07A2 = iVar12;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar14 = extraout_EDX_00;
      }
      break;
    case 0xf:
    case 0x12:
    case 0x16:
    case 0x17:
    case 0x27:
      iVar12 = this_00->field_07AE % this_00->field_07B2 + this_00->field_07B2 * this_00->field_07A2
      ;
      this_00->field_07AE = iVar12;
      if (iVar12 < this_00->field_079E * this_00->field_07B2) {
        this_00->field_07AE = iVar12 + 1;
        iVar12 = (iVar12 + 1) / this_00->field_07B2;
        this_00->field_07A2 = iVar12;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if ((*(int *)((int)this_00->field_06CB + 0x2c) != 10) && (iVar12 == 0)) {
          iVar12 = thunk_FUN_004dfb90(this_00->field_0024,this_00->field_079E,
                                      *(int *)(&DAT_00793ff0 + this_00->field_079A * 4));
          iVar28 = this_00->field_07AE + iVar12 * this_00->field_07B2;
          this_00->field_07AE = iVar28;
          iVar12 = this_00->field_079E * this_00->field_07B2;
          if (iVar12 < iVar28) {
            this_00->field_07AE = iVar12;
          }
          this_00->field_07A2 = this_00->field_07AE / this_00->field_07B2;
        }
      }
      iVar12 = thunk_FUN_004e60d0(this_00->field_0024,0x3a);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar14 = extraout_EDX;
      if (0 < iVar12) {
        this_00->field_07AA = this_00->field_07AA + 1;
      }
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (((*(int *)((int)this_00->field_06CB + 0x2c) != 0xb) && (this_00->field_07B6 != 0)) &&
       (this_00->field_07BE == 0)) {
      iVar12 = thunk_FUN_004de410((void *)this_00->field_0024,this_00->field_07B6,
                                  this_00->field_07BA);
      this_00->field_07BE = iVar12;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar14 = extraout_EDX_01;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar12 = *(int *)((int)this_00->field_06CB + 0x2c);
    if ((((iVar12 == 0x24) || (iVar12 == 0x1b)) || (iVar12 == 0x1d)) &&
       ((this_00->field_071E < 0x14 &&
        (uVar14 = g_playSystem_00802A38->field_00E4 % 0x3c, uVar14 == 0)))) {
      this_00->field_071E = this_00->field_071E + 1;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (((*(int *)((int)this_00->field_06CB + 0x2c) == 0x17) && (this_00->field_072A < 0x28)) &&
       (uVar14 = g_playSystem_00802A38->field_00E4 % 0xf, uVar14 == 0)) {
      this_00->field_072A = this_00->field_072A + 1;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)((int)this_00->field_06CB + 0x2c) == 0x23) {
      if (this_00->field_072E == 1) {
        uVar14 = g_playSystem_00802A38->field_00E4 % 0x28;
        if ((uVar14 == 0) &&
           (iVar12 = this_00->field_0722 + -1, this_00->field_0722 = iVar12, iVar12 == 0)) {
          this_00->field_072E = 0;
          this_00->vfunc_90(3,0x16d);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar14 = extraout_EDX_02;
        }
      }
      else if ((this_00->field_0722 < 0x14) &&
              (uVar14 = g_playSystem_00802A38->field_00E4 % 0xf0, uVar14 == 0)) {
        this_00->field_0722 = this_00->field_0722 + 1;
      }
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar12 = *(int *)((int)this_00->field_06CB + 0x2c);
    if ((iVar12 == 0x16) || (iVar12 == 0x25)) {
      if (this_00->field_0732 == 1) {
        if ((((iVar12 == 0x16) && (g_playSystem_00802A38->field_00E4 % 0x1e == 0)) ||
            ((iVar12 == 0x25 && (g_playSystem_00802A38->field_00E4 % 0x5a == 0)))) &&
           (iVar12 = this_00->field_0726 + -1, this_00->field_0726 = iVar12, iVar12 == 0)) {
          this_00->field_0732 = 0;
          this_00->vfunc_90(3,0x16d);
        }
        thunk_FUN_004945c0((AnonShape_004945C0_2B3B394D *)this_00);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar14 = extraout_EDX_03;
      }
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      else if ((iVar12 == 0x16) &&
              (iVar12 = thunk_FUN_004e60d0(this_00->field_0024,0x92), uVar14 = extraout_EDX_04,
              0 < iVar12)) {
        iVar12 = this_00->field_0726;
        if (iVar12 < 0x28) {
          uVar14 = g_playSystem_00802A38->field_00E4 % 0x2d;
joined_r0x00450a10:
          if (uVar14 == 0) {
            this_00->field_0726 = iVar12 + 1;
          }
        }
      }
      else {
        iVar12 = this_00->field_0726;
        if (iVar12 < 0x28) {
          uVar14 = g_playSystem_00802A38->field_00E4 % 0x5a;
          goto joined_r0x00450a10;
        }
      }
    }
    iVar12 = this_00->field_0736 + -1;
    this_00->field_0736 = iVar12;
    if (iVar12 < 0) {
      this_00->field_0736 = 0;
    }
    if (this_00->field_0716 == this_00->field_0712) {
      this_00->field_076E = -1;
    }
    if ((-1 < this_00->field_076E) &&
       ((this_00->field_045D != CASE_14 || (this_00->field_05C0 != 3)))) {
      uVar14 = this_00->field_076E % 0x7d;
      if (uVar14 == 0) {
        puVar20 = &this_00->field_01D5;
        iVar12 = STT3DSprC::LoadSequence
                           ((STT3DSprC *)puVar20,0xb,DAT_00806774,"forcef0",0x1d);
        if (iVar12 != 0) {
          RaiseInternalException
                    (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                     0x41b);
        }
        thunk_FUN_004ad670(puVar20,'\x0e');
        thunk_FUN_004ad150(puVar20,'\v');
        thunk_FUN_004ac700(puVar20,'\v');
        STT3DSprC::StartShow((STT3DSprC *)puVar20,0xb,g_playSystem_00802A38->field_00E4);
        local_104 = 0x65;
        local_9c.arg0.ptr = &local_108;
        local_108 = this_00->field_0776 * 5;
        local_100 = this_00->field_0772;
        local_f4 = 1;
        local_9c.id = MESS_TORPHIT;
        this_00->GetMessage(&local_9c);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar14 = extraout_EDX_05;
      }
      this_00->field_076E = this_00->field_076E + 1;
    }
    if ((0 < this_00->field_0782) &&
       (iVar12 = this_00->field_0782 + -1, this_00->field_0782 = iVar12, iVar12 == 0)) {
      this_00->field_0786 = 0;
    }
    if (0 < this_00->field_073A) {
      if (this_00->field_0465 == nullptr) {
        puVar20 = thunk_FUN_00631fd0();
        this_00->field_0465 = puVar20;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar14 = extraout_EDX_07;
        if (puVar20 != nullptr) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          thunk_FUN_006324c0(puVar20,CASE_0,*(undefined4 *)((int)this_00->field_06CB + 0x2c));
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar14 = extraout_EDX_08;
        }
      }
      else {
        thunk_FUN_00636060(this_00->field_0465,(int)this_00->field_0041,(int)this_00->field_0043,
                           (int)this_00->field_0045,(int)this_00->field_006C,100);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar14 = extraout_EDX_06;
      }
      if (this_00->field_045D == CASE_3) {
        this_00->field_073A = this_00->field_073A + -1;
      }
      if (this_00->field_045D == CASE_14) {
        if (this_00->field_05C0 == 3) {
          if ((this_00->field_05A6 == nullptr) &&
             (iVar12 = STPlaySystemC::sub_006E62D0
                                 (g_playSystem_00802A38,this_00->field_05A2,
                                  (int *)&this_00->field_05A6), iVar12 == -4)) {
            RaiseInternalException
                      (-4,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x43c);
          }
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          uVar14 = *(uint *)(this_00->field_05A6 + 0x12);
          if (uVar14 != this_00->field_0024) goto LAB_00450c1e;
        }
        this_00->field_073A = this_00->field_073A + -1;
      }
LAB_00450c1e:
      if (this_00->field_073A == 0) {
        if (this_00->field_0465 != nullptr) {
          thunk_FUN_00635fd0(this_00->field_0465);
          Library::MSVCRT::FUN_0072e2b0(this_00->field_0465);
          this_00->field_0465 = nullptr;
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar14 = extraout_EDX_09;
        }
        if (this_00->field_045D != CASE_3) {
          local_5c = g_playSystem_00802A38->field_00E4;
          CmdToObj(this_00,CASE_3,&local_5c);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar14 = extraout_EDX_10;
        }
      }
    }
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    if (((this_00->field_070E == 0) && (uVar14 = g_playSystem_00802A38->field_00E4 % 3, uVar14 == 0)
        ) && (iVar12 = thunk_FUN_004e60d0(this_00->field_0024,10), uVar14 = extraout_EDX_11,
             0 < iVar12)) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      thunk_FUN_0041c6e0(this_00,*(undefined **)((int)this_00->field_06CB + 0x3f));
      this_00->field_070E = 1;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar14 = extraout_EDX_12;
    }
    if (this_00->field_02C0 == 1) {
      this_00->field_02C0 = 0;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar12 = *(int *)((int)this_00->field_06CB + 0x2c);
      if (iVar12 == 9) {
        iVar12 = thunk_FUN_004accd0(&this_00->field_01D5,'\b');
        if ((iVar12 == 0) &&
           (iVar12 = STT3DSprC::LoadSequence
                               ((STT3DSprC *)&this_00->field_01D5,8,DAT_00806774,"expdstrw"
                                ,0x1d), iVar12 != 0)) {
          iVar12 = 0x45d;
LAB_00450e28:
          RaiseInternalException
                    (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                     iVar12);
        }
      }
      else if (iVar12 == 0x15) {
        iVar12 = STT3DSprC::LoadSequence
                           ((STT3DSprC *)&this_00->field_01D5,8,DAT_00806774,"expdstrw",
                            0x1d);
        if (iVar12 != 0) {
          iVar12 = 0x462;
          goto LAB_00450e28;
        }
      }
      else {
        uVar14 = thunk_FUN_00492ab0((AnonShape_00492AB0_63A128FD *)this_00);
        this_00->field_082A = uVar14;
        if (6 < (int)uVar14) {
          this_00->field_082A = 0;
        }
        puVar20 = &this_00->field_01D5;
        STT3DSprC::LoadSequence
                  ((STT3DSprC *)puVar20,8,DAT_00806774,
                   "expl_bt0" + this_00->field_082A * 0x45,0x1d);
        STT3DSprC::LoadSequence
                  ((STT3DSprC *)puVar20,9,DAT_00806764,
                   "expl_bbt0" + this_00->field_082A * 0x45,0x1d);
        STT3DSprC::LoadSequence
                  ((STT3DSprC *)puVar20,10,DAT_00806774,
                   "expmask3" + this_00->field_082A * 0x45,0x1d);
        thunk_FUN_004ac700(puVar20,'\n');
        STT3DSprC::StartShow((STT3DSprC *)puVar20,10,g_playSystem_00802A38->field_00E4);
        STT3DSprC::sub_004ACF20((STT3DSprC *)puVar20,DAT_008032b8,0x10);
        STT3DSprC::sub_004ACFE0((STT3DSprC *)puVar20,'\n');
      }
      STT3DSprC::StartShow((STT3DSprC *)&this_00->field_01D5,8,g_playSystem_00802A38->field_00E4);
      this_00->field_0455 = 1;
      dVar13 = this_00->slot_2C();
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      thunk_FUN_004b7710(CONCAT31((int3)(dVar13 >> 8),*(undefined1 *)&this_00->field_0024),dVar13);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      uVar14 = (uint)*(byte *)(this_00->field_0010 + 0x112d);
      if (this_00->field_0024 == uVar14) {
        thunk_FUN_004d8b70((char)this_00->field_0024);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar14 = extraout_EDX_13;
      }
    }
    if (this_00->field_0455 == 1) {
      this_00->vfunc_D8();
      puVar20 = &this_00->field_01D5;
      local_c = thunk_FUN_004ac910(puVar20,'\b');
      if (local_c == 2) {
        STT3DSprC::StopShow((STT3DSprC *)puVar20,0xf);
        STT3DSprC::StopShow((STT3DSprC *)puVar20,0);
        STT3DSprC::StopShow((STT3DSprC *)puVar20,1);
        STT3DSprC::StopShow((STT3DSprC *)puVar20,2);
      }
      if (local_c == *(uint *)(&DAT_007a8f11 + this_00->field_082A * 0x45)) {
        STT3DSprC::StopShow((STT3DSprC *)puVar20,0xe);
        STT3DSprC::StopShow((STT3DSprC *)puVar20,0xd);
        STT3DSprC::StopShow((STT3DSprC *)puVar20,0xc);
        STT3DSprC::StopShow((STT3DSprC *)puVar20,0xb);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (*(int *)((int)this_00->field_06CB + 0x2c) == 0x21) {
          uVar14 = local_c;
          iVar12 = thunk_FUN_004ad650((STT3DSprC *)puVar20);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          uVar16 = *(undefined4 *)((int)this_00->field_06CB + 0x2c);
          sVar6 = this_00->field_006C;
          sVar5 = this_00->field_0045;
          sVar4 = this_00->field_0043;
          sVar38 = this_00->field_0041;
        }
        else {
          uVar14 = 0xffffffff;
          iVar12 = thunk_FUN_004ad650((STT3DSprC *)puVar20);
          sVar6 = this_00->field_006C;
          sVar5 = this_00->field_0045;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          uVar16 = *(undefined4 *)((int)this_00->field_06CB + 0x2c);
          sVar4 = this_00->field_0043;
          sVar38 = this_00->field_0041;
        }
        thunk_FUN_0062b770((int)sVar38,(int)sVar4,(int)sVar5,uVar16,(int)this_00,(int)sVar6,iVar12,
                           uVar14);
        if (this_00->field_0465 != nullptr) {
          thunk_FUN_00635fd0(this_00->field_0465);
          Library::MSVCRT::FUN_0072e2b0(this_00->field_0465);
          this_00->field_0465 = nullptr;
        }
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if ((*(int *)((int)this_00->field_06CB + 0x2c) == 0x21) && (local_c == 0x18)) {
        thunk_FUN_00637350((int)this_00->field_0041,(int)this_00->field_0043,
                           (int)this_00->field_0045,3,this_00->field_0024,
                           (ushort)this_00->field_0018,this_00->field_0032,0x21,200);
      }
      if (local_c == *(uint *)(&DAT_007a8f15 + this_00->field_082A * 0x45)) {
        thunk_FUN_004ad5e0((STT3DSprC *)puVar20);
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (((local_c == *(uint *)(&DAT_007a8f19 + this_00->field_082A * 0x45)) &&
          (iVar12 = *(int *)((int)this_00->field_06CB + 0x2c), iVar12 != 9)) && (iVar12 != 0x15)) {
        STT3DSprC::StartShow((STT3DSprC *)puVar20,9,g_playSystem_00802A38->field_00E4);
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (((*(int *)(&DAT_007a8f19 + this_00->field_082A * 0x45) < (int)local_c) &&
          (iVar12 = *(int *)((int)this_00->field_06CB + 0x2c), iVar12 != 9)) &&
         ((iVar12 != 0x15 &&
          (iVar12 = thunk_FUN_004ac910(puVar20,'\b'),
          iVar12 == *(int *)(&DAT_007a8f0d + this_00->field_082A * 0x45) + -1)))) {
        STT3DSprC::StopShow((STT3DSprC *)puVar20,8);
      }
      if ((local_c == *(uint *)(&DAT_007a8f21 + this_00->field_082A * 0x45)) &&
         (local_1c != nullptr)) {
        local_1c->sub_00498D20(0x6a,&this_00->field_0032);
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar12 = *(int *)((int)this_00->field_06CB + 0x2c);
      if ((iVar12 == 9) || (iVar12 == 0x15)) {
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
      iVar12 = thunk_FUN_004ac910(puVar20,'\t');
      if (iVar12 != 0x14) {
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
        local_8 = sub_00460360(this_00);
        break;
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      case CASE_66:
        local_8 = BackAttack(this_00,(int *)0x2,(int)unaff_EDI,(int)unaff_ESI);
        break;
      case CASE_67:
        local_8 = thunk_FUN_004620f0(this_00);
        break;
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      case CASE_68:
        local_8 = BackToDok(this_00,(int *)0x2,unaff_EDI,unaff_ESI);
        break;
      case CASE_69:
        local_8 = thunk_FUN_004732d0((int *)this_00);
        break;
      case CASE_6A:
        local_8 = BackPatrol(this_00,(int *)0x2);
        break;
      case CASE_6B:
        local_8 = thunk_FUN_004769f0((int *)this_00);
        break;
      case CASE_6C:
        local_8 = thunk_FUN_004803b0((int *)this_00);
        break;
      case CASE_6D:
        local_8 = BackCapture(this_00,(int *)0x2);
        break;
      case CASE_6E:
        local_8 = thunk_FUN_00476cc0((int *)this_00);
        break;
      case CASE_6F:
        local_8 = BackAnnih(this_00,(int *)0x2);
        break;
      case CASE_70:
        local_8 = BackLoadRC(this_00,(STBoatC *)0x2);
        break;
      case CASE_71:
        local_8 = BackUnLoadRC(this_00,(STBoatC *)0x2);
        break;
      case CASE_72:
        local_8 = thunk_FUN_004805b0(this_00,(int *)0x2);
        break;
      case CASE_73:
        local_8 = BackLoadObj(this_00,(int *)0x2);
        break;
      case CASE_74:
        local_8 = BackUnLoadObj(this_00,(int *)0x2);
        break;
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      case CASE_75:
        local_8 = BackBuild(this_00,(int *)0x2,unaff_EDI,unaff_ESI);
        break;
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      case CASE_76:
        local_8 = BackDismant(this_00,(int *)0x2,unaff_EDI,unaff_ESI);
        break;
      case CASE_77:
        local_8 = thunk_FUN_0046d400((int *)this_00,uVar14);
        break;
      case CASE_78:
        local_8 = BackWaitLoad(this_00,(int *)0x2);
        break;
      case CASE_79:
        local_8 = BackTeleport(this_00,(int *)0x2);
        break;
      case CASE_7A:
        local_8 = thunk_FUN_004795e0((int *)this_00);
        break;
      case CASE_7B:
        local_8 = BackBring(this_00,(int *)0x2);
        break;
      default:
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x4cb);
      }
      uVar14 = local_8;
      if (local_8 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x4cd);
      }
      if (uVar14 == 0) {
        this_00->field_0459 = 0;
      }
      if (this_00->field_0459 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
    }
    if (this_00->field_02C4 == 1) {
      uVar14 = 0;
      if (0 < this_00->field_073A) {
        local_c = (uint)(this_00->field_02D4 == 1);
        local_78 = (uint)(this_00->field_0314 == 1);
        local_7c = (AnonShape_0060EA30_DCEB68AD *)(uint)(this_00->field_02F4 == 1);
        memset(&this_00->field_02CC, 0, 0x5c); /* compiler bulk-zero initialization */
        iVar12 = 0;
        this_00->field_02C4 = 0;
        if (local_c == 1) {
          this_00->field_02D4 = 1;
        }
        if (local_78 == 1) {
          this_00->field_0314 = 1;
        }
        if (local_7c == (AnonShape_0060EA30_DCEB68AD *)0x1) {
          this_00->field_02F4 = 1;
        }
        if (((local_c == 1) || (local_78 == 1)) || (local_7c == (AnonShape_0060EA30_DCEB68AD *)0x1))
        {
          this_00->field_02C4 = 1;
        }
      }
      if (this_00->field_0314 == 1) {
        memset(&this_00->field_02CC, 0, 0x5c); /* compiler bulk-zero initialization */
        iVar12 = 0;
        this_00->field_0314 = 1;
        uVar14 = this_00->field_03C4;
      }
      if ((this_00->field_045D == CASE_14) && (this_00->field_05C0 == 3)) {
        memset(&this_00->field_02CC, 0, 0x5c); /* compiler bulk-zero initialization */
        this_00->field_02C4 = 0;
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      if ((this_00->field_02CC == 1) && (uVar14 < this_00->field_0328)) {
        uVar14 = this_00->field_0328;
      }
      if ((this_00->field_02D0 == 1) && (uVar14 < this_00->field_0332)) {
        uVar14 = this_00->field_0332;
      }
      if ((this_00->field_02D4 == 1) && (uVar14 < this_00->field_0343)) {
        uVar14 = this_00->field_0343;
      }
      if ((this_00->field_02E0 == 1) && (uVar14 < this_00->field_0347)) {
        uVar14 = this_00->field_0347;
      }
      if ((this_00->field_02F8 == 1) && (uVar14 < this_00->field_034F)) {
        uVar14 = this_00->field_034F;
      }
      if ((this_00->field_030C == 1) && (uVar14 < this_00->field_036F)) {
        uVar14 = this_00->field_036F;
      }
      if ((this_00->field_02FC == 1) && (uVar14 < this_00->field_0392)) {
        uVar14 = this_00->field_0392;
      }
      if ((this_00->field_02D8 == 1) && (uVar14 < this_00->field_039C)) {
        uVar14 = this_00->field_039C;
      }
      if ((this_00->field_02DC == 1) && (uVar14 < this_00->field_03A6)) {
        uVar14 = this_00->field_03A6;
      }
      if ((this_00->field_0304 == 1) && (uVar14 < this_00->field_03B6)) {
        uVar14 = this_00->field_03B6;
      }
      if ((this_00->field_0314 == 1) && (uVar14 < this_00->field_03C4)) {
        uVar14 = this_00->field_03C4;
      }
      if ((this_00->field_0308 == 1) && (uVar14 < this_00->field_03CA)) {
        uVar14 = this_00->field_03CA;
      }
      if ((this_00->field_02E4 == 1) && (uVar14 < this_00->field_03D4)) {
        uVar14 = this_00->field_03D4;
      }
      if ((this_00->field_02F0 == 1) && (uVar14 < this_00->field_03DE)) {
        uVar14 = this_00->field_03DE;
      }
      if ((this_00->field_02EC == 1) && (uVar14 < this_00->field_03E8)) {
        uVar14 = this_00->field_03E8;
      }
      if ((this_00->field_031C == 1) && (uVar14 < this_00->field_03F3)) {
        uVar14 = this_00->field_03F3;
      }
      if ((this_00->field_0318 == 1) && (uVar14 < this_00->field_0401)) {
        uVar14 = this_00->field_0401;
      }
      if ((this_00->field_0320 == 1) && (uVar14 < this_00->field_0415)) {
        uVar14 = this_00->field_0415;
      }
      if ((this_00->field_02F4 == 1) && (uVar14 < this_00->field_041F)) {
        uVar14 = this_00->field_041F;
      }
      if ((this_00->field_0310 == 1) && (uVar14 < this_00->field_0429)) {
        uVar14 = this_00->field_0429;
      }
      if ((this_00->field_02E8 == 1) && (uVar14 < this_00->field_0437)) {
        uVar14 = this_00->field_0437;
      }
      if ((this_00->field_0300 == 1) && (uVar14 < this_00->field_0447)) {
        uVar14 = this_00->field_0447;
      }
      if ((this_00->field_02CC == 1) && (this_00->field_0328 < uVar14)) {
        this_00->field_02CC = 0;
      }
      if ((this_00->field_02D0 == 1) && (this_00->field_0332 < uVar14)) {
        this_00->field_02D0 = 0;
      }
      if ((this_00->field_02D4 == 1) && (this_00->field_0343 < uVar14)) {
        this_00->field_02D4 = 0;
      }
      if ((this_00->field_02E0 == 1) && (this_00->field_0347 < uVar14)) {
        this_00->field_02E0 = 0;
      }
      if ((this_00->field_02F8 == 1) && (this_00->field_034F < uVar14)) {
        this_00->field_02F8 = 0;
      }
      if ((this_00->field_030C == 1) && (this_00->field_036F < uVar14)) {
        this_00->field_030C = 0;
      }
      if ((this_00->field_02FC == 1) && (this_00->field_0392 < uVar14)) {
        this_00->field_02FC = 0;
      }
      if ((this_00->field_02D8 == 1) && (this_00->field_039C < uVar14)) {
        this_00->field_02D8 = 0;
      }
      if ((this_00->field_02DC == 1) && (this_00->field_03A6 < uVar14)) {
        this_00->field_02DC = 0;
      }
      if ((this_00->field_0304 == 1) && (this_00->field_03B6 < uVar14)) {
        this_00->field_0304 = 0;
      }
      if ((this_00->field_0314 == 1) && (this_00->field_03C4 < uVar14)) {
        this_00->field_0314 = 0;
      }
      if ((this_00->field_0308 == 1) && (this_00->field_03CA < uVar14)) {
        this_00->field_0308 = 0;
      }
      if ((this_00->field_02E4 == 1) && (this_00->field_03D4 < uVar14)) {
        this_00->field_02E4 = 0;
      }
      if ((this_00->field_02F0 == 1) && (this_00->field_03DE < uVar14)) {
        this_00->field_02F0 = 0;
      }
      if ((this_00->field_02EC == 1) && (this_00->field_03E8 < uVar14)) {
        this_00->field_02EC = 0;
      }
      if ((this_00->field_031C == 1) && (this_00->field_03F3 < uVar14)) {
        this_00->field_031C = 0;
      }
      if ((this_00->field_0318 == 1) && (this_00->field_0401 < uVar14)) {
        this_00->field_0318 = 0;
      }
      if ((this_00->field_0320 == 1) && (this_00->field_0415 < uVar14)) {
        this_00->field_0320 = 0;
      }
      if ((this_00->field_02F4 == 1) && (this_00->field_041F < uVar14)) {
        this_00->field_02F4 = 0;
      }
      if ((this_00->field_0310 == 1) && (this_00->field_0429 < uVar14)) {
        this_00->field_0310 = 0;
      }
      if ((this_00->field_02E8 == 1) && (this_00->field_0437 < uVar14)) {
        this_00->field_02E8 = 0;
      }
      if ((this_00->field_0300 == 1) && (this_00->field_0447 < uVar14)) {
        this_00->field_0300 = 0;
      }
      if (this_00->field_02D0 == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_2;
          iVar12 = thunk_FUN_00462180(this_00,0);
          local_8 = iVar12;
          if (iVar12 == -1) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0x532);
          }
          if (iVar12 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = CASE_3;
          iVar12 = Defence(this_00,0);
          if (iVar12 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar12 = 0x536;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          local_EAX_10888 = sub_00460360(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x53e;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackAttack(this_00,nullptr,(int)unaff_EDI,(int)unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x549;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          local_EAX_10888 = thunk_FUN_004620f0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x544;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackToDok(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x567;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          local_EAX_10888 = thunk_FUN_004732d0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x56c;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          local_EAX_10888 = BackPatrol(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x54e;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          local_EAX_10888 = thunk_FUN_004769f0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x580;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          local_EAX_10888 = thunk_FUN_004803b0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x5a8;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          local_EAX_10888 = BackCapture(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x58a;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          local_EAX_10888 = thunk_FUN_00476cc0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x585;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          local_EAX_10888 = BackAnnih(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x59e;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          local_EAX_10888 = BackLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x553;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          local_EAX_10888 = BackUnLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x562;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          local_EAX_10888 = thunk_FUN_004805b0(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x5ad;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          local_EAX_10888 = BackLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x571;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          local_EAX_10888 = BackUnLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x57b;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackBuild(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x558;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackDismant(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x5a3;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = thunk_FUN_0046d400((int *)this_00,uVar14);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x55d;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          local_EAX_10888 = BackWaitLoad(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x576;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          local_EAX_10888 = BackTeleport(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x594;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          local_EAX_10888 = thunk_FUN_004795e0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x58f;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          local_EAX_10888 = BackBring(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x599;
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
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          iVar12 = LoadRC(this_00,nullptr,unaff_EDI,(int)unaff_ESI);
          if (iVar12 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar12 = 0x5b9;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          local_EAX_10888 = sub_00460360(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x5c0;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackAttack(this_00,nullptr,(int)unaff_EDI,(int)unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x5cb;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          local_EAX_10888 = thunk_FUN_004620f0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x5c6;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackToDok(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x5e9;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          local_EAX_10888 = thunk_FUN_004732d0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x5ee;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          local_EAX_10888 = BackPatrol(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x5d0;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          local_EAX_10888 = thunk_FUN_004769f0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x602;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          local_EAX_10888 = thunk_FUN_004803b0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x62a;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          local_EAX_10888 = BackCapture(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x60c;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          local_EAX_10888 = thunk_FUN_00476cc0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x607;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          local_EAX_10888 = BackAnnih(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x620;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          local_EAX_10888 = BackLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x5d5;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          local_EAX_10888 = BackUnLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x5e4;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          local_EAX_10888 = thunk_FUN_004805b0(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x62f;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          local_EAX_10888 = BackLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x5f3;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          local_EAX_10888 = BackUnLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x5fd;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackBuild(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x5da;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackDismant(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x625;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = thunk_FUN_0046d400((int *)this_00,uVar14);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x5df;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          local_EAX_10888 = BackWaitLoad(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x5f8;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          local_EAX_10888 = BackTeleport(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x616;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          local_EAX_10888 = thunk_FUN_004795e0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x611;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          local_EAX_10888 = BackBring(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x61b;
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
          iVar12 = thunk_FUN_004602e0(this_00,0);
          local_8 = iVar12;
          if (iVar12 == -1) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0x63b);
          }
          if (iVar12 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = CASE_3;
          iVar12 = Defence(this_00,0);
          if (iVar12 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar12 = 0x63f;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          local_EAX_10888 = sub_00460360(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x647;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackAttack(this_00,nullptr,(int)unaff_EDI,(int)unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x652;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          local_EAX_10888 = thunk_FUN_004620f0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x64d;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackToDok(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x670;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          local_EAX_10888 = thunk_FUN_004732d0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x675;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          local_EAX_10888 = BackPatrol(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x657;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          local_EAX_10888 = thunk_FUN_004769f0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x689;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          local_EAX_10888 = thunk_FUN_004803b0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x6b1;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          local_EAX_10888 = BackCapture(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x693;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          local_EAX_10888 = thunk_FUN_00476cc0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x68e;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          local_EAX_10888 = BackAnnih(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x6a7;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          local_EAX_10888 = BackLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x65c;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          local_EAX_10888 = BackUnLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x66b;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          local_EAX_10888 = thunk_FUN_004805b0(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x6b6;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          local_EAX_10888 = BackLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x67a;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          local_EAX_10888 = BackUnLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x684;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackBuild(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x661;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackDismant(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x6ac;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = thunk_FUN_0046d400((int *)this_00,uVar14);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x666;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          local_EAX_10888 = BackWaitLoad(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x67f;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          local_EAX_10888 = BackTeleport(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x69d;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          local_EAX_10888 = thunk_FUN_004795e0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x698;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          local_EAX_10888 = BackBring(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x6a2;
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
          iVar12 = thunk_FUN_004658d0(this_00,0);
          if (iVar12 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar12 = 0x6c2;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          local_EAX_10888 = sub_00460360(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x6c9;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackAttack(this_00,nullptr,(int)unaff_EDI,(int)unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x6d4;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          local_EAX_10888 = thunk_FUN_004620f0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x6cf;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackToDok(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x6f2;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          local_EAX_10888 = thunk_FUN_004732d0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x6f7;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          local_EAX_10888 = BackPatrol(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x6d9;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          local_EAX_10888 = thunk_FUN_004769f0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x70b;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          local_EAX_10888 = thunk_FUN_004803b0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x733;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          local_EAX_10888 = BackCapture(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x715;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          local_EAX_10888 = thunk_FUN_00476cc0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x710;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          local_EAX_10888 = BackAnnih(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x729;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          local_EAX_10888 = BackLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x6de;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          local_EAX_10888 = BackUnLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x6ed;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          local_EAX_10888 = thunk_FUN_004805b0(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x738;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          local_EAX_10888 = BackLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x6fc;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          local_EAX_10888 = BackUnLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x706;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackBuild(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x6e3;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackDismant(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x72e;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = thunk_FUN_0046d400((int *)this_00,uVar14);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x6e8;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          local_EAX_10888 = BackWaitLoad(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x701;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          local_EAX_10888 = BackTeleport(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x71f;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          local_EAX_10888 = thunk_FUN_004795e0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x71a;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          local_EAX_10888 = BackBring(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x724;
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
          iVar12 = Build(this_00,0);
          local_8 = iVar12;
          if (iVar12 == -1) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0x744);
          }
          if (iVar12 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = CASE_3;
          iVar12 = Defence(this_00,0);
          if (iVar12 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar12 = 0x748;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          local_EAX_10888 = sub_00460360(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x750;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackAttack(this_00,nullptr,(int)unaff_EDI,(int)unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x75b;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          local_EAX_10888 = thunk_FUN_004620f0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x756;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackToDok(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x779;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          local_EAX_10888 = thunk_FUN_004732d0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x77e;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          local_EAX_10888 = BackPatrol(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x760;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          local_EAX_10888 = thunk_FUN_004769f0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x792;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          local_EAX_10888 = thunk_FUN_004803b0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x7ba;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          local_EAX_10888 = BackCapture(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x79c;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          local_EAX_10888 = thunk_FUN_00476cc0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x797;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          local_EAX_10888 = BackAnnih(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x7b0;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          local_EAX_10888 = BackLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x765;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          local_EAX_10888 = BackUnLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x774;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          local_EAX_10888 = thunk_FUN_004805b0(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x7bf;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          local_EAX_10888 = BackLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x783;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          local_EAX_10888 = BackUnLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x78d;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackBuild(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x76a;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackDismant(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x7b5;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = thunk_FUN_0046d400((int *)this_00,uVar14);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x76f;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          local_EAX_10888 = BackWaitLoad(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x788;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          local_EAX_10888 = BackTeleport(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x7a6;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          local_EAX_10888 = thunk_FUN_004795e0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x7a1;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          local_EAX_10888 = BackBring(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x7ab;
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
          iVar12 = UnLoadRC(this_00,0);
          if (iVar12 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar12 = 0x7cb;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          local_EAX_10888 = sub_00460360(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x7d2;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackAttack(this_00,nullptr,(int)unaff_EDI,(int)unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x7dc;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          local_EAX_10888 = thunk_FUN_004620f0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x7d7;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackToDok(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x7fa;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          local_EAX_10888 = thunk_FUN_004732d0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x7ff;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          local_EAX_10888 = BackPatrol(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x7e1;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          local_EAX_10888 = thunk_FUN_004769f0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x813;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          local_EAX_10888 = thunk_FUN_004803b0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x83b;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          local_EAX_10888 = BackCapture(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x81d;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          local_EAX_10888 = thunk_FUN_00476cc0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x818;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          local_EAX_10888 = BackAnnih(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x831;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          local_EAX_10888 = BackLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x7e6;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          local_EAX_10888 = BackUnLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x7f5;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          local_EAX_10888 = thunk_FUN_004805b0(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x840;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          local_EAX_10888 = BackLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x804;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          local_EAX_10888 = BackUnLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x80e;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackBuild(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x7eb;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackDismant(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x836;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = thunk_FUN_0046d400((int *)this_00,uVar14);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x7f0;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          local_EAX_10888 = BackWaitLoad(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x809;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          local_EAX_10888 = BackTeleport(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x827;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          local_EAX_10888 = thunk_FUN_004795e0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x822;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          local_EAX_10888 = BackBring(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x82c;
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
          iVar12 = ToDok(this_00,0);
          if (iVar12 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar12 = 0x84c;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          local_EAX_10888 = sub_00460360(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x853;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackAttack(this_00,nullptr,(int)unaff_EDI,(int)unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x85d;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          local_EAX_10888 = thunk_FUN_004620f0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x858;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackToDok(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x87b;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          local_EAX_10888 = thunk_FUN_004732d0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x880;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          local_EAX_10888 = BackPatrol(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x862;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          local_EAX_10888 = thunk_FUN_004769f0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x894;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          local_EAX_10888 = thunk_FUN_004803b0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x8bc;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          local_EAX_10888 = BackCapture(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x89e;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          local_EAX_10888 = thunk_FUN_00476cc0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x899;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          local_EAX_10888 = BackAnnih(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x8b2;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          local_EAX_10888 = BackLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x867;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          local_EAX_10888 = BackUnLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x876;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          local_EAX_10888 = thunk_FUN_004805b0(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x8c1;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          local_EAX_10888 = BackLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x885;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          local_EAX_10888 = BackUnLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x88f;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackBuild(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x86c;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackDismant(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x8b7;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = thunk_FUN_0046d400((int *)this_00,uVar14);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x871;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          local_EAX_10888 = BackWaitLoad(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x88a;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          local_EAX_10888 = BackTeleport(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x8a8;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          local_EAX_10888 = thunk_FUN_004795e0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x8a3;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          local_EAX_10888 = BackBring(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x8ad;
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
          iVar12 = Guard(this_00,0);
          if (iVar12 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar12 = 0x8cd;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          local_EAX_10888 = sub_00460360(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x8d4;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackAttack(this_00,nullptr,(int)unaff_EDI,(int)unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x8de;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          local_EAX_10888 = thunk_FUN_004620f0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x8d9;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackToDok(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x8fc;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          local_EAX_10888 = thunk_FUN_004732d0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x901;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          local_EAX_10888 = BackPatrol(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x8e3;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          local_EAX_10888 = thunk_FUN_004769f0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x915;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          local_EAX_10888 = thunk_FUN_004803b0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x93d;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          local_EAX_10888 = BackCapture(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x91f;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          local_EAX_10888 = thunk_FUN_00476cc0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x91a;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          local_EAX_10888 = BackAnnih(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x933;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          local_EAX_10888 = BackLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x8e8;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          local_EAX_10888 = BackUnLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x8f7;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          local_EAX_10888 = thunk_FUN_004805b0(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x942;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          local_EAX_10888 = BackLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x906;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          local_EAX_10888 = BackUnLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x910;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackBuild(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x8ed;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackDismant(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x938;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = thunk_FUN_0046d400((int *)this_00,uVar14);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x8f2;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          local_EAX_10888 = BackWaitLoad(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x90b;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          local_EAX_10888 = BackTeleport(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x929;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          local_EAX_10888 = thunk_FUN_004795e0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x924;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          local_EAX_10888 = BackBring(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x92e;
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
          iVar12 = LoadObj(this_00,nullptr);
          if (iVar12 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar12 = 0x94e;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          local_EAX_10888 = sub_00460360(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x955;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackAttack(this_00,nullptr,(int)unaff_EDI,(int)unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x95f;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          local_EAX_10888 = thunk_FUN_004620f0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x95a;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackToDok(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x97d;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          local_EAX_10888 = thunk_FUN_004732d0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x982;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          local_EAX_10888 = BackPatrol(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x964;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          local_EAX_10888 = thunk_FUN_004769f0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x996;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          local_EAX_10888 = thunk_FUN_004803b0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x9be;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          local_EAX_10888 = BackCapture(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x9a0;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          local_EAX_10888 = thunk_FUN_00476cc0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x99b;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          local_EAX_10888 = BackAnnih(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x9b4;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          local_EAX_10888 = BackLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x969;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          local_EAX_10888 = BackUnLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x978;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          local_EAX_10888 = thunk_FUN_004805b0(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x9c3;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          local_EAX_10888 = BackLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x987;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          local_EAX_10888 = BackUnLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x991;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackBuild(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x96e;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackDismant(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x9b9;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = thunk_FUN_0046d400((int *)this_00,uVar14);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x973;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          local_EAX_10888 = BackWaitLoad(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x98c;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          local_EAX_10888 = BackTeleport(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x9aa;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          local_EAX_10888 = thunk_FUN_004795e0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x9a5;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          local_EAX_10888 = BackBring(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x9af;
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
          iVar12 = WaitLoad(this_00,nullptr);
          if (iVar12 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar12 = 0x9cf;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          local_EAX_10888 = sub_00460360(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x9d6;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackAttack(this_00,nullptr,(int)unaff_EDI,(int)unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x9e0;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          local_EAX_10888 = thunk_FUN_004620f0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x9db;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackToDok(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x9fe;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          local_EAX_10888 = thunk_FUN_004732d0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xa03;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          local_EAX_10888 = BackPatrol(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x9e5;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          local_EAX_10888 = thunk_FUN_004769f0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xa17;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          local_EAX_10888 = thunk_FUN_004803b0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xa3f;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          local_EAX_10888 = BackCapture(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xa21;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          local_EAX_10888 = thunk_FUN_00476cc0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xa1c;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          local_EAX_10888 = BackAnnih(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xa35;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          local_EAX_10888 = BackLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x9ea;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          local_EAX_10888 = BackUnLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x9f9;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          local_EAX_10888 = thunk_FUN_004805b0(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xa44;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          local_EAX_10888 = BackLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xa08;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          local_EAX_10888 = BackUnLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xa12;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackBuild(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x9ef;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackDismant(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xa3a;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = thunk_FUN_0046d400((int *)this_00,uVar14);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x9f4;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          local_EAX_10888 = BackWaitLoad(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xa0d;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          local_EAX_10888 = BackTeleport(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xa2b;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          local_EAX_10888 = thunk_FUN_004795e0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xa26;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          local_EAX_10888 = BackBring(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xa30;
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
          iVar12 = UnLoadObj(this_00,0);
          if (iVar12 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar12 = 0xa50;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          local_EAX_10888 = sub_00460360(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xa57;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackAttack(this_00,nullptr,(int)unaff_EDI,(int)unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xa61;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          local_EAX_10888 = thunk_FUN_004620f0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xa5c;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackToDok(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xa7f;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          local_EAX_10888 = thunk_FUN_004732d0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xa84;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          local_EAX_10888 = BackPatrol(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xa66;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          local_EAX_10888 = thunk_FUN_004769f0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xa98;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          local_EAX_10888 = thunk_FUN_004803b0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xac0;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          local_EAX_10888 = BackCapture(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xaa2;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          local_EAX_10888 = thunk_FUN_00476cc0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xa9d;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          local_EAX_10888 = BackAnnih(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xab6;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          local_EAX_10888 = BackLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xa6b;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          local_EAX_10888 = BackUnLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xa7a;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          local_EAX_10888 = thunk_FUN_004805b0(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xac5;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          local_EAX_10888 = BackLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xa89;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          local_EAX_10888 = BackUnLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xa93;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackBuild(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xa70;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackDismant(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xabb;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = thunk_FUN_0046d400((int *)this_00,uVar14);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xa75;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          local_EAX_10888 = BackWaitLoad(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xa8e;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          local_EAX_10888 = BackTeleport(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xaac;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          local_EAX_10888 = thunk_FUN_004795e0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xaa7;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          local_EAX_10888 = BackBring(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xab1;
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
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          iVar12 = SetMine(this_00,nullptr,unaff_EDI,(int)unaff_ESI);
          local_8 = iVar12;
          if (iVar12 == -1) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0xad1);
          }
          if (iVar12 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = CASE_3;
          iVar12 = Defence(this_00,0);
          if (iVar12 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar12 = 0xad5;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          local_EAX_10888 = sub_00460360(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xadd;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackAttack(this_00,nullptr,(int)unaff_EDI,(int)unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xae8;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          local_EAX_10888 = thunk_FUN_004620f0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xae3;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackToDok(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xb06;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          local_EAX_10888 = thunk_FUN_004732d0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xb0b;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          local_EAX_10888 = BackPatrol(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xaed;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          local_EAX_10888 = thunk_FUN_004769f0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xb1f;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          local_EAX_10888 = thunk_FUN_004803b0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xb47;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          local_EAX_10888 = BackCapture(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xb29;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          local_EAX_10888 = thunk_FUN_00476cc0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xb24;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          local_EAX_10888 = BackAnnih(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xb3d;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          local_EAX_10888 = BackLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xaf2;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          local_EAX_10888 = BackUnLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xb01;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          local_EAX_10888 = thunk_FUN_004805b0(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xb4c;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          local_EAX_10888 = BackLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xb10;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          local_EAX_10888 = BackUnLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xb1a;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackBuild(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xaf7;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackDismant(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xb42;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = thunk_FUN_0046d400((int *)this_00,uVar14);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xafc;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          local_EAX_10888 = BackWaitLoad(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xb15;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          local_EAX_10888 = BackTeleport(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xb33;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          local_EAX_10888 = thunk_FUN_004795e0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xb2e;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          local_EAX_10888 = BackBring(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xb38;
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
          iVar12 = DCBomb(this_00,0);
          local_8 = iVar12;
          if (iVar12 == -1) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0xb58);
          }
          if (iVar12 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = CASE_3;
          iVar12 = Defence(this_00,0);
          if (iVar12 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar12 = 0xb5c;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          local_EAX_10888 = sub_00460360(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xb64;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackAttack(this_00,nullptr,(int)unaff_EDI,(int)unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xb6f;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          local_EAX_10888 = thunk_FUN_004620f0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xb6a;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackToDok(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xb8d;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          local_EAX_10888 = thunk_FUN_004732d0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xb92;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          local_EAX_10888 = BackPatrol(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xb74;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          local_EAX_10888 = thunk_FUN_004769f0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xba6;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          local_EAX_10888 = thunk_FUN_004803b0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xbce;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          local_EAX_10888 = BackCapture(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xbb0;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          local_EAX_10888 = thunk_FUN_00476cc0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xbab;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          local_EAX_10888 = BackAnnih(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xbc4;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          local_EAX_10888 = BackLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xb79;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          local_EAX_10888 = BackUnLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xb88;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          local_EAX_10888 = thunk_FUN_004805b0(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xbd3;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          local_EAX_10888 = BackLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xb97;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          local_EAX_10888 = BackUnLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xba1;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackBuild(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xb7e;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackDismant(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xbc9;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = thunk_FUN_0046d400((int *)this_00,uVar14);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xb83;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          local_EAX_10888 = BackWaitLoad(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xb9c;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          local_EAX_10888 = BackTeleport(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xbba;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          local_EAX_10888 = thunk_FUN_004795e0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xbb5;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          local_EAX_10888 = BackBring(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xbbf;
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
          iVar12 = Capture(this_00,0);
          local_8 = iVar12;
          if (iVar12 == -1) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0xbdf);
          }
          if (iVar12 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = CASE_3;
          iVar12 = Defence(this_00,0);
          if (iVar12 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar12 = 0xbe3;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          local_EAX_10888 = sub_00460360(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xbeb;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackAttack(this_00,nullptr,(int)unaff_EDI,(int)unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xbf6;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          local_EAX_10888 = thunk_FUN_004620f0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xbf1;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackToDok(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xc14;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          local_EAX_10888 = thunk_FUN_004732d0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xc19;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          local_EAX_10888 = BackPatrol(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xbfb;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          local_EAX_10888 = thunk_FUN_004769f0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xc2d;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          local_EAX_10888 = thunk_FUN_004803b0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xc55;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          local_EAX_10888 = BackCapture(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xc37;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          local_EAX_10888 = thunk_FUN_00476cc0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xc32;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          local_EAX_10888 = BackAnnih(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xc4b;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          local_EAX_10888 = BackLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xc00;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          local_EAX_10888 = BackUnLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xc0f;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          local_EAX_10888 = thunk_FUN_004805b0(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xc5a;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          local_EAX_10888 = BackLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xc1e;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          local_EAX_10888 = BackUnLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xc28;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackBuild(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xc05;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackDismant(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xc50;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = thunk_FUN_0046d400((int *)this_00,uVar14);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xc0a;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          local_EAX_10888 = BackWaitLoad(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xc23;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          local_EAX_10888 = BackTeleport(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xc41;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          local_EAX_10888 = thunk_FUN_004795e0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xc3c;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          local_EAX_10888 = BackBring(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xc46;
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
          iVar12 = Recharge(this_00,0);
          local_8 = iVar12;
          if (iVar12 == -1) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0xc66);
          }
          if (iVar12 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = CASE_3;
          iVar12 = Defence(this_00,0);
          if (iVar12 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar12 = 0xc6a;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          local_EAX_10888 = sub_00460360(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xc72;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackAttack(this_00,nullptr,(int)unaff_EDI,(int)unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xc7d;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          local_EAX_10888 = thunk_FUN_004620f0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xc78;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackToDok(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xc9b;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          local_EAX_10888 = thunk_FUN_004732d0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xca0;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          local_EAX_10888 = BackPatrol(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xc82;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          local_EAX_10888 = thunk_FUN_004769f0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xcb4;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          local_EAX_10888 = thunk_FUN_004803b0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xcdc;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          local_EAX_10888 = BackCapture(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xcbe;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          local_EAX_10888 = thunk_FUN_00476cc0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xcb9;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          local_EAX_10888 = BackAnnih(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xcd2;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          local_EAX_10888 = BackLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xc87;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          local_EAX_10888 = BackUnLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xc96;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          local_EAX_10888 = thunk_FUN_004805b0(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xce1;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          local_EAX_10888 = BackLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xca5;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          local_EAX_10888 = BackUnLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xcaf;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackBuild(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xc8c;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackDismant(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xcd7;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = thunk_FUN_0046d400((int *)this_00,uVar14);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xc91;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          local_EAX_10888 = BackWaitLoad(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xcaa;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          local_EAX_10888 = BackTeleport(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xcc8;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          local_EAX_10888 = thunk_FUN_004795e0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xcc3;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          local_EAX_10888 = BackBring(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xccd;
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
          iVar12 = Teleport(this_00,0);
          local_8 = iVar12;
          if (iVar12 == -1) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0xced);
          }
          if (iVar12 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = CASE_3;
          iVar12 = Defence(this_00,0);
          if (iVar12 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar12 = 0xcf1;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          local_EAX_10888 = sub_00460360(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xcf9;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackAttack(this_00,nullptr,(int)unaff_EDI,(int)unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xd04;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          local_EAX_10888 = thunk_FUN_004620f0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xcff;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackToDok(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xd22;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          local_EAX_10888 = thunk_FUN_004732d0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xd27;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          local_EAX_10888 = BackPatrol(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xd09;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          local_EAX_10888 = thunk_FUN_004769f0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xd3b;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          local_EAX_10888 = thunk_FUN_004803b0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xd63;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          local_EAX_10888 = BackCapture(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xd45;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          local_EAX_10888 = thunk_FUN_00476cc0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xd40;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          local_EAX_10888 = BackAnnih(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xd59;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          local_EAX_10888 = BackLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xd0e;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          local_EAX_10888 = BackUnLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xd1d;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          local_EAX_10888 = thunk_FUN_004805b0(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xd68;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          local_EAX_10888 = BackLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xd2c;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          local_EAX_10888 = BackUnLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xd36;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackBuild(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xd13;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackDismant(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xd5e;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = thunk_FUN_0046d400((int *)this_00,uVar14);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xd18;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          local_EAX_10888 = BackWaitLoad(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xd31;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          local_EAX_10888 = BackTeleport(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xd4f;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          local_EAX_10888 = thunk_FUN_004795e0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xd4a;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          local_EAX_10888 = BackBring(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xd54;
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
          iVar12 = Bring(this_00,nullptr);
          local_8 = iVar12;
          if (iVar12 == -1) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0xd74);
          }
          if (iVar12 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = CASE_3;
          iVar12 = Defence(this_00,0);
          if (iVar12 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar12 = 0xd78;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          local_EAX_10888 = sub_00460360(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xd80;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackAttack(this_00,nullptr,(int)unaff_EDI,(int)unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xd8b;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          local_EAX_10888 = thunk_FUN_004620f0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xd86;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackToDok(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xda9;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          local_EAX_10888 = thunk_FUN_004732d0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xdae;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          local_EAX_10888 = BackPatrol(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xd90;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          local_EAX_10888 = thunk_FUN_004769f0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xdc2;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          local_EAX_10888 = thunk_FUN_004803b0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xdea;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          local_EAX_10888 = BackCapture(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xdcc;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          local_EAX_10888 = thunk_FUN_00476cc0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xdc7;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          local_EAX_10888 = BackAnnih(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xde0;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          local_EAX_10888 = BackLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xd95;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          local_EAX_10888 = BackUnLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xda4;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          local_EAX_10888 = thunk_FUN_004805b0(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xdef;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          local_EAX_10888 = BackLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xdb3;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          local_EAX_10888 = BackUnLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xdbd;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackBuild(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xd9a;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackDismant(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xde5;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = thunk_FUN_0046d400((int *)this_00,uVar14);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xd9f;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          local_EAX_10888 = BackWaitLoad(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xdb8;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          local_EAX_10888 = BackTeleport(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xdd6;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          local_EAX_10888 = thunk_FUN_004795e0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xdd1;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          local_EAX_10888 = BackBring(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xddb;
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
          iVar12 = Annih(this_00,nullptr);
          local_8 = iVar12;
          if (iVar12 == -1) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0xdfb);
          }
          if (iVar12 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = CASE_3;
          iVar12 = Defence(this_00,0);
          if (iVar12 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar12 = 0xdff;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          local_EAX_10888 = sub_00460360(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xe07;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackAttack(this_00,nullptr,(int)unaff_EDI,(int)unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xe12;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          local_EAX_10888 = thunk_FUN_004620f0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xe0d;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackToDok(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xe30;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          local_EAX_10888 = thunk_FUN_004732d0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xe35;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          local_EAX_10888 = BackPatrol(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xe17;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          local_EAX_10888 = thunk_FUN_004769f0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xe49;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          local_EAX_10888 = thunk_FUN_004803b0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xe71;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          local_EAX_10888 = BackCapture(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xe53;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          local_EAX_10888 = thunk_FUN_00476cc0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xe4e;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          local_EAX_10888 = BackAnnih(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xe67;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          local_EAX_10888 = BackLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xe1c;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          local_EAX_10888 = BackUnLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xe2b;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          local_EAX_10888 = thunk_FUN_004805b0(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xe76;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          local_EAX_10888 = BackLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xe3a;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          local_EAX_10888 = BackUnLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xe44;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackBuild(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xe21;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackDismant(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xe6c;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = thunk_FUN_0046d400((int *)this_00,uVar14);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xe26;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          local_EAX_10888 = BackWaitLoad(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xe3f;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          local_EAX_10888 = BackTeleport(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xe5d;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          local_EAX_10888 = thunk_FUN_004795e0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xe58;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          local_EAX_10888 = BackBring(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xe62;
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
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          iVar12 = Dismant(this_00,nullptr,unaff_EDI,unaff_ESI);
          local_8 = iVar12;
          if (iVar12 == -1) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0xe82);
          }
          if (iVar12 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = CASE_3;
          iVar12 = Defence(this_00,0);
          if (iVar12 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar12 = 0xe86;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          local_EAX_10888 = sub_00460360(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xe8e;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackAttack(this_00,nullptr,(int)unaff_EDI,(int)unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xe99;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          local_EAX_10888 = thunk_FUN_004620f0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xe94;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackToDok(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xeb7;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          local_EAX_10888 = thunk_FUN_004732d0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xebc;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          local_EAX_10888 = BackPatrol(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xe9e;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          local_EAX_10888 = thunk_FUN_004769f0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xed0;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          local_EAX_10888 = thunk_FUN_004803b0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xef8;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          local_EAX_10888 = BackCapture(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xeda;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          local_EAX_10888 = thunk_FUN_00476cc0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xed5;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          local_EAX_10888 = BackAnnih(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xeee;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          local_EAX_10888 = BackLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xea3;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          local_EAX_10888 = BackUnLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xeb2;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          local_EAX_10888 = thunk_FUN_004805b0(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xefd;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          local_EAX_10888 = BackLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xec1;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          local_EAX_10888 = BackUnLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xecb;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackBuild(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xea8;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackDismant(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xef3;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = thunk_FUN_0046d400((int *)this_00,uVar14);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xead;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          local_EAX_10888 = BackWaitLoad(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xec6;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          local_EAX_10888 = BackTeleport(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xee4;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          local_EAX_10888 = thunk_FUN_004795e0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xedf;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          local_EAX_10888 = BackBring(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xee9;
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
          iVar12 = Scout(this_00,0);
          local_8 = iVar12;
          if (iVar12 == -1) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0xf09);
          }
          if (iVar12 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = CASE_3;
          iVar12 = Defence(this_00,0);
          if (iVar12 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar12 = 0xf0d;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          local_EAX_10888 = sub_00460360(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xf15;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackAttack(this_00,nullptr,(int)unaff_EDI,(int)unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xf20;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          local_EAX_10888 = thunk_FUN_004620f0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xf1b;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackToDok(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xf3e;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          local_EAX_10888 = thunk_FUN_004732d0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xf43;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          local_EAX_10888 = BackPatrol(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xf25;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          local_EAX_10888 = thunk_FUN_004769f0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xf57;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          local_EAX_10888 = thunk_FUN_004803b0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xf7f;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          local_EAX_10888 = BackCapture(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xf61;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          local_EAX_10888 = thunk_FUN_00476cc0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xf5c;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          local_EAX_10888 = BackAnnih(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xf75;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          local_EAX_10888 = BackLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xf2a;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          local_EAX_10888 = BackUnLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xf39;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          local_EAX_10888 = thunk_FUN_004805b0(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xf84;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          local_EAX_10888 = BackLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xf48;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          local_EAX_10888 = BackUnLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xf52;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackBuild(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xf2f;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackDismant(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xf7a;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = thunk_FUN_0046d400((int *)this_00,uVar14);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xf34;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          local_EAX_10888 = BackWaitLoad(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xf4d;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          local_EAX_10888 = BackTeleport(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xf6b;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          local_EAX_10888 = thunk_FUN_004795e0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xf66;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          local_EAX_10888 = BackBring(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xf70;
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
          iVar12 = thunk_FUN_004803d0(this_00,nullptr);
          local_8 = iVar12;
          if (iVar12 == -1) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0xf90);
          }
          if (iVar12 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = CASE_3;
          iVar12 = Defence(this_00,0);
          if (iVar12 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar12 = 0xf94;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          local_EAX_10888 = sub_00460360(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xf9c;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackAttack(this_00,nullptr,(int)unaff_EDI,(int)unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xfa7;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          local_EAX_10888 = thunk_FUN_004620f0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xfa2;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackToDok(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xfc5;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          local_EAX_10888 = thunk_FUN_004732d0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xfca;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          local_EAX_10888 = BackPatrol(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xfac;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          local_EAX_10888 = thunk_FUN_004769f0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xfde;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          local_EAX_10888 = thunk_FUN_004803b0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x1006;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          local_EAX_10888 = BackCapture(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xfe8;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          local_EAX_10888 = thunk_FUN_00476cc0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xfe3;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          local_EAX_10888 = BackAnnih(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xffc;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          local_EAX_10888 = BackLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xfb1;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          local_EAX_10888 = BackUnLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xfc0;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          local_EAX_10888 = thunk_FUN_004805b0(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x100b;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          local_EAX_10888 = BackLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xfcf;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          local_EAX_10888 = BackUnLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xfd9;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackBuild(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xfb6;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackDismant(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x1001;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = thunk_FUN_0046d400((int *)this_00,uVar14);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xfbb;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          local_EAX_10888 = BackWaitLoad(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xfd4;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          local_EAX_10888 = BackTeleport(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xff2;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          local_EAX_10888 = thunk_FUN_004795e0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xfed;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          local_EAX_10888 = BackBring(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0xff7;
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
          iVar12 = Defence(this_00,0);
          if (iVar12 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar12 = 0x1017;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          local_EAX_10888 = sub_00460360(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x101e;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackAttack(this_00,nullptr,(int)unaff_EDI,(int)unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x1028;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          local_EAX_10888 = thunk_FUN_004620f0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x1023;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackToDok(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x1046;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          local_EAX_10888 = thunk_FUN_004732d0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x104b;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          local_EAX_10888 = BackPatrol(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x102d;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          local_EAX_10888 = thunk_FUN_004769f0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x105f;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          local_EAX_10888 = thunk_FUN_004803b0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x1082;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          local_EAX_10888 = BackCapture(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x1069;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          local_EAX_10888 = thunk_FUN_00476cc0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x1064;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          local_EAX_10888 = BackAnnih(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x107d;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          local_EAX_10888 = BackLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x1032;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          local_EAX_10888 = BackUnLoadRC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x1041;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          local_EAX_10888 = thunk_FUN_004805b0(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x1087;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          local_EAX_10888 = BackLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x1050;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          local_EAX_10888 = BackUnLoadObj(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x105a;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_EAX_10888 = BackBuild(this_00,nullptr,unaff_EDI,unaff_ESI);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x1037;
          local_8 = local_EAX_10888;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = thunk_FUN_0046d400((int *)this_00,uVar14);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x103c;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          local_EAX_10888 = BackWaitLoad(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x1055;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          local_EAX_10888 = BackTeleport(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x1073;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          local_EAX_10888 = thunk_FUN_004795e0((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x106e;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          local_EAX_10888 = BackBring(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar12 = 0x1078;
          local_8 = local_EAX_10888;
        }
      }
      local_EAX_10888 = local_8;
      RaiseInternalException
                (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",iVar12);
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
      iVar12 = thunk_FUN_004602e0(this_00,2);
      local_8 = iVar12;
      if (iVar12 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x1094
                  );
      }
      if (iVar12 == 0) {
        this_00->field_045D = CASE_3;
        iVar12 = Defence(this_00,0);
        if (iVar12 != -1) {
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        iVar12 = 0x1099;
        local_8 = -1;
      }
      else {
        if (iVar12 != 3) {
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        if ((((this_00->field_00B3 == 0) &&
             (uVar14 = this_00->field_00BB - (int)this_00->field_005B, uVar26 = (int)uVar14 >> 0x1f,
             (int)((uVar14 ^ uVar26) - uVar26) < 2)) &&
            (uVar14 = this_00->field_00BF - (int)this_00->field_005D, uVar26 = (int)uVar14 >> 0x1f,
            (int)((uVar14 ^ uVar26) - uVar26) < 2)) &&
           ((uVar14 = this_00->field_00C3 - (int)this_00->field_005F, uVar26 = (int)uVar14 >> 0x1f,
            (int)((uVar14 ^ uVar26) - uVar26) < 2 &&
            (iVar12 = this_00->vfunc_18(*(short *)&this_00->field_00BB,
                                 *(short *)&this_00->field_00BF,*(short *)&this_00->field_00C3),
            iVar12 == 0)))) {
          this_00->field_045D = CASE_3;
          iVar12 = Defence(this_00,0);
          if (iVar12 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar12 = 0x10ad;
          local_8 = -1;
        }
        else {
          iVar12 = thunk_FUN_0040ae40(local_1c,(uint)(ushort)this_00->field_0032,'\0');
          if (iVar12 != -4) {
            uVar14 = this_00->field_001C * 0x41c64e6d + 0x3039;
            this_00->field_001C = uVar14;
            this_00->field_00F8 = (short)((ulonglong)(uVar14 >> 0x10) % 0x1f) + 0x1e;
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = CASE_3;
          iVar12 = Defence(this_00,0);
          if (iVar12 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar12 = 0x10b3;
          local_8 = -1;
        }
      }
      break;
    case CASE_2:
      iVar12 = thunk_FUN_00462180(this_00,2);
      local_8 = iVar12;
      if (iVar12 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x10be
                  );
      }
      if (iVar12 != 0) {
        if (iVar12 == 3) {
          thunk_FUN_0040ae40(local_1c,(uint)(ushort)this_00->field_0032,'\0');
          iVar12 = this_00->field_001C * 0x41c64e6d + 0x3039;
          this_00->field_001C = iVar12;
          this_00->field_00F8 = ((ushort)((uint)iVar12 >> 0x10) & 0xf) + 0xf;
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        if (iVar12 == 4) {
          local_1c->sub_00498D20(0x66,&this_00->field_0032);
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        if (iVar12 == 6) {
          local_1c->sub_00498D20(0x68,&this_00->field_0032);
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        if (iVar12 != 7) {
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        local_1c->sub_00498D20(0x69,&this_00->field_0032);
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      local_46 = this_00->field_07F2;
      local_48 = this_00->field_0032;
      this_00->field_0816 = 5;
      local_1c->sub_00498D20(0x67,&local_48);
      this_00->field_07F2 = 0xffff;
      this_00->field_045D = CASE_3;
      iVar12 = Defence(this_00,0);
      if (iVar12 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar12 = 0x10c8;
      local_8 = -1;
      break;
    case CASE_3:
      iVar12 = Defence(this_00,2);
      if (iVar12 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar12 = 0x10bb;
      local_8 = -1;
      break;
    case CASE_4:
      iVar12 = ToDok(this_00,2);
      local_8 = iVar12;
      if (iVar12 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x111a
                  );
      }
      if (iVar12 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      pAVar21 = thunk_FUN_004357f0(*(char *)&this_00->field_0024);
      if (pAVar21 != nullptr) {
        local_9c.id = MESS_AIPLRCLASSTY_5D94;
        local_9c.arg0.words.high = this_00->field_0032;
        local_9c.arg0.words.low = *(undefined2 *)&this_00->field_0024;
        local_9c.arg1 = (STMessageArg)this_00->field_0018;
        (*pAVar21->vtable->vfunc_00)(&local_9c);
      }
      this_00->field_045D = CASE_3;
      iVar12 = Defence(this_00,0);
      if (iVar12 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar12 = 0x1127;
      local_8 = -1;
      break;
    case CASE_5:
      iVar12 = Guard(this_00,2);
      local_8 = iVar12;
      if (iVar12 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x112c
                  );
      }
      if (iVar12 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      iVar12 = Defence(this_00,0);
      if (iVar12 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar12 = 0x1131;
      local_8 = -1;
      break;
    case CASE_6:
      iVar12 = thunk_FUN_004658d0(this_00,2);
      local_8 = iVar12;
      if (iVar12 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x10e8
                  );
      }
      if (iVar12 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      iVar12 = Defence(this_00,0);
      if (iVar12 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar12 = 0x10ed;
      local_8 = -1;
      break;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    case CASE_7:
      iVar12 = SetMine(this_00,(int *)0x2,unaff_EDI,(int)unaff_ESI);
      local_8 = iVar12;
      if (iVar12 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x1154
                  );
      }
      if (iVar12 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      iVar12 = Defence(this_00,0);
      if (iVar12 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar12 = 0x1159;
      local_8 = -1;
      break;
    case CASE_8:
      iVar12 = Scout(this_00,2);
      local_8 = iVar12;
      if (iVar12 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x11ac
                  );
      }
      if (iVar12 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      iVar12 = Defence(this_00,0);
      if (iVar12 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar12 = 0x11b1;
      local_8 = -1;
      break;
    case CASE_9:
      iVar12 = Capture(this_00,2);
      local_8 = iVar12;
      if (iVar12 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x1168
                  );
      }
      if (iVar12 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      iVar12 = Defence(this_00,0);
      if (iVar12 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar12 = 0x116d;
      local_8 = -1;
      break;
    case CASE_A:
      iVar12 = DCBomb(this_00,2);
      local_8 = iVar12;
      if (iVar12 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x115e
                  );
      }
      if (iVar12 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      iVar12 = Defence(this_00,0);
      if (iVar12 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar12 = 0x1163;
      local_8 = -1;
      break;
    case CASE_B:
      iVar12 = Annih(this_00,(undefined4 *)0x2);
      local_8 = iVar12;
      if (iVar12 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x1198
                  );
      }
      if (iVar12 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      iVar12 = Defence(this_00,0);
      if (iVar12 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar12 = 0x119d;
      local_8 = -1;
      break;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    case CASE_C:
      iVar12 = LoadRC(this_00,(int *)0x2,unaff_EDI,(int)unaff_ESI);
      local_8 = iVar12;
      if (iVar12 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x10f2
                  );
      }
      if (iVar12 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      iVar12 = Defence(this_00,0);
      if (iVar12 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar12 = 0x10f7;
      local_8 = -1;
      break;
    case CASE_D:
      iVar12 = UnLoadRC(this_00,2);
      local_8 = iVar12;
      if (iVar12 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x1110
                  );
      }
      if (iVar12 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      iVar12 = Defence(this_00,0);
      if (iVar12 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar12 = 0x1115;
      local_8 = -1;
      break;
    case CASE_E:
      iVar12 = thunk_FUN_004803d0(this_00,(AnonShape_004803D0_350EB461 *)0x2);
      local_8 = iVar12;
      if (iVar12 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x11b6
                  );
      }
      if (iVar12 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      iVar12 = Defence(this_00,0);
      if (iVar12 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar12 = 0x11bb;
      local_8 = -1;
      break;
    case CASE_F:
      iVar12 = LoadObj(this_00,(AnonShape_005EFAE0_B406B78B *)0x2);
      local_8 = iVar12;
      if (iVar12 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x1136
                  );
      }
      if (iVar12 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      iVar12 = Defence(this_00,0);
      if (iVar12 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar12 = 0x113b;
      local_8 = -1;
      break;
    case CASE_10:
      iVar12 = UnLoadObj(this_00,2);
      local_8 = iVar12;
      if (iVar12 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x114a
                  );
      }
      if (iVar12 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      iVar12 = Defence(this_00,0);
      if (iVar12 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar12 = 0x114f;
      local_8 = -1;
      break;
    case CASE_11:
      iVar12 = Build(this_00,2);
      local_8 = iVar12;
      if (iVar12 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x10fc
                  );
      }
      if (iVar12 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      iVar12 = Defence(this_00,0);
      if (iVar12 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar12 = 0x1101;
      local_8 = -1;
      break;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    case CASE_12:
      iVar12 = Dismant(this_00,(int *)0x2,unaff_EDI,unaff_ESI);
      local_8 = iVar12;
      if (iVar12 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x11a2
                  );
      }
      if (iVar12 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      iVar12 = Defence(this_00,0);
      if (iVar12 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar12 = 0x11a7;
      local_8 = -1;
      break;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    case CASE_13:
      uVar14 = CreateGame(this_00,(int *)0x2,unaff_EDI);
      local_8 = uVar14;
      if (uVar14 == 0xffffffff) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x1106
                  );
      }
      if (uVar14 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      iVar12 = Defence(this_00,0);
      if (iVar12 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar12 = 0x110b;
      local_8 = -1;
      break;
    case CASE_14:
      iVar12 = WaitLoad(this_00,(STBoatC *)0x2);
      local_8 = iVar12;
      if (iVar12 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x1140
                  );
      }
      if (iVar12 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      iVar12 = Defence(this_00,0);
      if (iVar12 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar12 = 0x1145;
      local_8 = -1;
      break;
    case CASE_15:
      iVar12 = Teleport(this_00,2);
      local_8 = iVar12;
      if (iVar12 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x1184
                  );
      }
      if (iVar12 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      iVar12 = Defence(this_00,0);
      if (iVar12 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar12 = 0x1189;
      local_8 = -1;
      break;
    case CASE_16:
      iVar12 = Recharge(this_00,2);
      local_8 = iVar12;
      if (iVar12 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x1172
                  );
      }
      if (iVar12 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      pAVar21 = thunk_FUN_004357f0(*(char *)&this_00->field_0024);
      if (pAVar21 != nullptr) {
        local_9c.id = MESS_AIPLRCLASSTY_5D94;
        local_9c.arg0.words.high = this_00->field_0032;
        local_9c.arg0.words.low = *(undefined2 *)&this_00->field_0024;
        local_9c.arg1 = (STMessageArg)this_00->field_0018;
        (*pAVar21->vtable->vfunc_00)(&local_9c);
      }
      this_00->field_045D = CASE_3;
      iVar12 = Defence(this_00,0);
      if (iVar12 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar12 = 0x117f;
      local_8 = -1;
      break;
    case CASE_17:
      iVar12 = Bring(this_00,(STBoatC *)0x2);
      local_8 = iVar12;
      if (iVar12 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x118e
                  );
      }
      if (iVar12 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      iVar12 = Defence(this_00,0);
      if (iVar12 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar12 = 0x1193;
      local_8 = -1;
      break;
    default:
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
cf_error_exit_0045AEE3:
    RaiseInternalException
              (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",iVar12);
    g_currentExceptionFrame = local_184.previous;
    return 0;
  }
  if (SVar7 == MESS_ID_NONE) goto LAB_0045048a;
  if (SVar7 != MESS_ID_CREATE) {
    g_currentExceptionFrame = local_184.previous;
    return 0;
  }
  local_1c = (STGroupBoatC *)(message->arg0).u32;
  thunk_FUN_00417a00(this_00,0);
  if (*(int *)&local_1c->field_0xc == 0) {
    dVar13 = (message->arg0).u32;
    *(undefined4 *)(this_00->field_06CB + 5) = *(undefined4 *)(dVar13 + 0x14);
    *(undefined4 *)((int)this_00->field_06CB + 0x2c) = *(undefined4 *)(dVar13 + 0x18);
    iVar12 = *(int *)(dVar13 + 0x2a);
    if (iVar12 < 0) {
      this_00->field_07D6 = 0;
    }
    else if (iVar12 < 0x79) {
      this_00->field_07D6 = iVar12 / 3;
    }
    else {
      this_00->field_07D6 = 0x28;
    }
    iVar12 = *(int *)(dVar13 + 0x2e);
    if (iVar12 < 0) {
      this_00->field_07DA = 0;
    }
    else if (iVar12 < 0x321) {
      this_00->field_07DA = iVar12 / 0x14;
    }
    else {
      this_00->field_07DA = 0x28;
    }
    iVar12 = this_00->field_07DA + this_00->field_07D6;
    if (0x28 < iVar12) {
      iVar12 = (this_00->field_07D6 * 0x28) / iVar12;
      this_00->field_07D6 = iVar12;
      this_00->field_07DA = 0x28 - iVar12;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar12 = *(int *)((int)this_00->field_06CB + 0x2c);
    switch(iVar12) {
    case 0x16:
    case 0x25:
      this_00->field_0726 = 0x28;
      break;
    case 0x17:
      this_00->field_072A = 0x28;
      break;
    case 0x1b:
    case 0x1d:
    case 0x24:
      this_00->field_071E = 0x14;
      break;
    case 0x23:
      this_00->field_0722 = 0x14;
    }
    sVar38 = *(short *)(dVar13 + 0x1c);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_c = CONCAT22((short)((uint)(iVar12 + -0x16) >> 0x10),sVar38);
    sVar4 = *(short *)(dVar13 + 0x20);
    sVar5 = *(short *)(dVar13 + 0x1e);
    if (((sVar38 < 0) || (g_worldGrid.sizeX <= sVar38)) ||
       ((sVar5 < 0 ||
        (((g_worldGrid.sizeY <= sVar5 || (sVar4 < 0)) || (g_worldGrid.sizeZ <= sVar4)))))) {
      local_10 = nullptr;
    }
    else {
      local_10 = (STFishC *)
                 g_worldGrid.cells
                 [(int)sVar4 * (int)g_worldGrid.planeStride + (int)sVar5 * (int)g_worldGrid.sizeX +
                  (int)sVar38].objects[(byte)this_00->field_008E];
    }
    if (local_10 != nullptr) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar12 = (*local_10->vtable->vfunc_114)(*(undefined4 *)((int)this_00->field_06CB + 0x2c));
      if (iVar12 == 0) {
        iVar12 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x197,0,0,"%s",
                                    "STBoatC::GetMessage MESS_ID_CREATE FLAG_BASE PairObjectAvail()==FALSE");
        if (iVar12 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x198);
      }
      (*local_10->vtable->vfunc_118)(this_00->field_0018);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar12 = *(int *)((int)this_00->field_06CB + 0x2c);
      if (((iVar12 == 7) || (iVar12 == 0x13)) || (iVar12 == 0x1b)) {
        this_00->field_07CA = (AnonShape_005EFAE0_B406B78B *)local_10->field_0018;
        Library::Ourlib::ST3DSMAP::SprSetLevAfter
                  (this_00->field_0211,this_00->field_01ED,*(int *)&local_10->field_0x1ed);
      }
    }
    *(undefined4 *)(this_00->field_06CB + 6) = *(undefined4 *)(dVar13 + 0x36);
    *(undefined4 *)((int)this_00->field_06CB + 0x34) = *(undefined4 *)(dVar13 + 0x3a);
    *(undefined4 *)(this_00->field_06CB + 7) = *(undefined4 *)(dVar13 + 0x3e);
    *(undefined2 *)((int)this_00->field_06CB + 0x3c) = *(undefined2 *)(dVar13 + 0x42);
    *(undefined1 *)((int)this_00->field_06CB + 0x3e) = *(undefined1 *)(dVar13 + 0x44);
    this_00->field_073E = *(undefined4 *)(dVar13 + 0x32);
    if (local_10 == nullptr) {
      this_00->field_0076 = 1;
      uVar14 = this_00->field_001C * 0x41c64e6d + 0x3039;
      this_00->field_001C = uVar14;
      this_00->field_006E = (short)((ulonglong)(uVar14 >> 0x10) % 0x30);
    }
    else {
      this_00->field_006E = *(undefined2 *)&local_10->field_0x6e;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar12 = *(int *)((int)this_00->field_06CB + 0x2c);
      if (((iVar12 == 7) || (iVar12 == 0x13)) || (iVar12 == 0x1b)) {
        this_00->field_0076 = 1;
      }
      else {
        this_00->field_0076 = 0;
      }
    }
    thunk_FUN_00416390((AnonShape_00416390_86C8F938 *)this_00);
    this_00->field_00E3 = 0;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    _SetSpeedFireLife(this_00,unaff_EDI);
    iVar12 = *(int *)(dVar13 + 0x26);
    if (iVar12 < 0) {
      this_00->field_0716 = 1;
    }
    else {
      if (iVar12 < 100) {
        iVar12 = (this_00->field_0712 * iVar12) / 100;
      }
      else {
        iVar12 = this_00->field_0712;
      }
      this_00->field_0716 = iVar12;
    }
    thunk_FUN_0048a910((AnonShape_0048A910_6D6DD7B1 *)this_00);
    thunk_FUN_0048a840((AnonShape_0048A840_34A87A21 *)this_00);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((((local_10 == nullptr) ||
         (iVar12 = *(int *)((int)this_00->field_06CB + 0x2c), iVar12 == 7)) || (iVar12 == 0x13)) ||
       (iVar12 == 0x1b)) {
      thunk_FUN_00417a20(this_00,*(short *)(dVar13 + 0x1c),*(short *)(dVar13 + 0x1e),
                         *(short *)(dVar13 + 0x20),1);
    }
    else {
      thunk_FUN_00417a20(this_00,*(short *)(dVar13 + 0x1c),*(short *)(dVar13 + 0x1e),
                         *(short *)(dVar13 + 0x20),0);
      this_00->field_0041 = *(short *)&local_10->field_0x41;
      this_00->field_0043 = *(short *)&local_10->field_0x43;
      this_00->field_0045 = *(short *)&local_10->field_0x45;
      this_00->field_004D = local_10->field_0x4d;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar12 = *(int *)((int)this_00->field_06CB + 0x2c);
    if ((iVar12 == 9) || (iVar12 == 0x15)) {
      sVar38 = 8;
    }
    else {
      sVar38 = 0x18;
    }
    thunk_FUN_00417e70(this_00,sVar38);
    if (local_10 == nullptr) {
      iVar12 = this_00->field_001C * 0x41c64e6d + 0x3039;
      this_00->field_001C = iVar12;
      thunk_FUN_00417ee0(this_00,((ushort)((uint)iVar12 >> 0x10) & 7) * 0x2d);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar24 = extraout_var_03;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar27 = extraout_var_06;
    }
    else {
      this_00->field_006C = local_10->field_006C;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar24 = extraout_var_02;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar27 = extraout_var_05;
    }
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    STAllPlayersC::RegisterObject
              (g_allPlayers_007FA174,*(char *)&this_00->field_0024,
               CONCAT22(uVar27,*(undefined2 *)(dVar13 + 0x24)),
               CONCAT22(uVar24,*(undefined2 *)(dVar13 + 0x22)),(int *)this_00,1,
               *(int *)(dVar13 + 0x49));
    this_00->field_0487 = 0xffffffff;
    this_00->field_048B = 0xffff;
    this_00->field_0814 = this_00->field_0816 * 0xc9;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (((local_10 == nullptr) ||
        (iVar12 = *(int *)((int)this_00->field_06CB + 0x2c), iVar12 == 7)) ||
       ((iVar12 == 0x13 || (iVar12 == 0x1b)))) {
      this_00->field_082E = 0xffffffff;
      this_00->field_0836 = 4;
      this_00->field_0475 = this_00->field_0047;
      this_00->field_0477 = this_00->field_0049;
      this_00->field_0479 = this_00->field_004B;
    }
    else {
      this_00->field_045D = CASE_14;
      this_00->field_07C2 = 1;
      this_00->vfunc_100((byte)this_00->field_01D1 | 0xd);
      this_00->field_05C0 = 3;
      this_00->field_05A0 = this_00->field_0030;
      this_00->field_05A2 = (AnonShape_005EFAE0_B406B78B *)local_10->field_0018;
      this_00->field_05A6 = nullptr;
      this_00->field_05C4 = 7;
    }
    uVar14 = this_00->field_001C * 0x41c64e6d + 0x3039;
    this_00->field_001C = uVar14;
    local_d4 = (uVar14 >> 0x10) % 0x13;
    dVar13 = this_00->slot_2C();
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    thunk_FUN_004b76d0(CONCAT31((int3)(dVar13 >> 8),*(undefined1 *)&this_00->field_0024),dVar13);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (this_00->field_0024 == (uint)*(byte *)(this_00->field_0010 + 0x112d)) {
      thunk_FUN_004d8b70((char)this_00->field_0024);
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    switch(*(undefined4 *)((int)this_00->field_06CB + 0x2c)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    case 5:
    case 0xb:
    case 0x11:
    case 0x1c:
    case 0x21:
    case 0x24:
    case 0x25:
      *(undefined4 *)((int)this_00->field_06CB + 0x3f) = 8;
      break;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    default:
      *(undefined4 *)((int)this_00->field_06CB + 0x3f) = 5;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    TLOEmbryoTy::sub_0041C3F0
              ((TLOEmbryoTy *)this_00,*(undefined **)((int)this_00->field_06CB + 0x3f));
    uVar14 = this_00->field_001C * 0x41c64e6d + 0x3039;
    this_00->field_001C = uVar14;
    iVar12 = ((uVar14 >> 0x10) % 5) * 0x19;
    this_00->field_077E = iVar12 + -0xf;
    uVar14 = this_00->field_001C * 0x41c64e6d + 0x3039;
    this_00->field_001C = uVar14;
    this_00->field_077A = (uVar14 >> 0x10) % (iVar12 - 0xeU);
  }
  if (*(int *)&local_1c->field_0xc == 1) {
    dVar13 = (message->arg0).u32;
    *(undefined4 *)(this_00->field_06CB + 5) = *(undefined4 *)(dVar13 + 0x14);
    *(undefined4 *)((int)this_00->field_06CB + 0x2c) = *(undefined4 *)(dVar13 + 0x18);
    *(undefined4 *)(this_00->field_06CB + 6) = *(undefined4 *)(dVar13 + 0x32);
    *(undefined4 *)((int)this_00->field_06CB + 0x34) = *(undefined4 *)(dVar13 + 0x36);
    *(undefined4 *)(this_00->field_06CB + 7) = *(undefined4 *)(dVar13 + 0x3a);
    *(undefined2 *)((int)this_00->field_06CB + 0x3c) = *(undefined2 *)(dVar13 + 0x3e);
    *(undefined1 *)((int)this_00->field_06CB + 0x3e) = *(undefined1 *)(dVar13 + 0x40);
    this_00->field_081E = *(undefined4 *)(dVar13 + 0x41);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    switch(*(undefined4 *)((int)this_00->field_06CB + 0x2c)) {
    case 0x16:
    case 0x25:
      this_00->field_0726 = 0x28;
      break;
    case 0x17:
      this_00->field_072A = 0x28;
      break;
    case 0x1b:
    case 0x1d:
    case 0x24:
      this_00->field_071E = 0x14;
      break;
    case 0x23:
      this_00->field_0722 = 0x14;
    }
    this_00->field_0076 = 1;
    this_00->field_006E = 0;
    thunk_FUN_00416390((AnonShape_00416390_86C8F938 *)this_00);
    this_00->field_00E3 = 0;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    _SetSpeedFireLife(this_00,unaff_EDI);
    thunk_FUN_0048a910((AnonShape_0048A910_6D6DD7B1 *)this_00);
    thunk_FUN_0048a840((AnonShape_0048A840_34A87A21 *)this_00);
    thunk_FUN_00495ff0(*(short *)(dVar13 + 0x1c),*(short *)(dVar13 + 0x1e),*(short *)(dVar13 + 0x20)
                       ,this_00->field_008E,(AnonShape_00495FF0_59081BDD *)this_00);
    this_00->field_0047 = *(short *)(dVar13 + 0x1c);
    this_00->field_0041 = *(short *)(dVar13 + 0x22);
    this_00->field_0049 = *(short *)(dVar13 + 0x1e);
    this_00->field_0043 = *(short *)(dVar13 + 0x24);
    this_00->field_004B = *(short *)(dVar13 + 0x20);
    this_00->field_0045 = *(short *)(dVar13 + 0x26);
    DumpClassC::WritePtr
              (this_00->field_0047,this_00->field_0049,this_00->field_004B,this_00->field_008E,
               (RecoveredRecord_DumpClassC_00495EC0 *)this_00);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar12 = *(int *)((int)this_00->field_06CB + 0x2c);
    if ((iVar12 == 9) || (iVar12 == 0x15)) {
      sVar38 = 8;
    }
    else {
      sVar38 = 0x18;
    }
    thunk_FUN_00417e70(this_00,sVar38);
    uVar16 = thunk_FUN_00417ee0(this_00,0x5a);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    STAllPlayersC::RegisterObject
              (g_allPlayers_007FA174,*(char *)&this_00->field_0024,
               CONCAT22((short)((uint)uVar16 >> 0x10),*(undefined2 *)(dVar13 + 0x2a)),0xffff,
               (int *)this_00,0,0);
    this_00->field_045D = CASE_13;
    this_00->field_0510 = *(undefined2 *)(dVar13 + 0x1c);
    this_00->field_0512 = *(undefined2 *)(dVar13 + 0x1e);
    this_00->field_0514 = *(undefined2 *)(dVar13 + 0x20);
    this_00->field_0516 = *(undefined2 *)(dVar13 + 0x22);
    this_00->field_0518 = *(undefined2 *)(dVar13 + 0x24);
    this_00->field_051A = *(undefined2 *)(dVar13 + 0x26);
    this_00->field_051C = *(short *)(dVar13 + 0x2c);
    this_00->field_051E = *(short *)(dVar13 + 0x2e);
    this_00->field_0520 = *(short *)(dVar13 + 0x30);
    local_10 = (STFishC *)
               STAllPlayersC::GetObjPtr
                         (g_allPlayers_007FA174,*(char *)&this_00->field_0024,
                          *(ushort *)(dVar13 + 0x28),CASE_1);
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
    dVar17 = this_00->slot_2C();
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    thunk_FUN_004b76d0(CONCAT31((int3)((uint)extraout_ECX >> 8),*(undefined1 *)&this_00->field_0024)
                       ,dVar17);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (this_00->field_0024 == (uint)*(byte *)(this_00->field_0010 + 0x112d)) {
      thunk_FUN_004d8b70((char)this_00->field_0024);
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    switch(*(undefined4 *)((int)this_00->field_06CB + 0x2c)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    case 5:
    case 0xb:
    case 0x11:
    case 0x1c:
    case 0x21:
    case 0x24:
    case 0x25:
      *(undefined4 *)((int)this_00->field_06CB + 0x3f) = 8;
      break;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    default:
      *(undefined4 *)((int)this_00->field_06CB + 0x3f) = 5;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    TLOEmbryoTy::sub_0041C3F0
              ((TLOEmbryoTy *)this_00,*(undefined **)((int)this_00->field_06CB + 0x3f));
    uVar14 = this_00->field_001C * 0x41c64e6d + 0x3039;
    this_00->field_001C = uVar14;
    iVar12 = ((uVar14 >> 0x10) % 5) * 0x19;
    this_00->field_077E = iVar12 + -0xf;
    uVar14 = this_00->field_001C * 0x41c64e6d + 0x3039;
    this_00->field_001C = uVar14;
    this_00->field_077A = (uVar14 >> 0x10) % (iVar12 - 0xeU);
    if (DAT_008117bc != nullptr) {
      local_9c.id = MESS_AIBOSSCLASSTY_5DD0;
      local_9c.arg0.words.high = this_00->field_0032;
      local_9c.arg0.words.low = *(undefined2 *)&this_00->field_0024;
      local_9c.arg1.words.high = *(undefined2 *)(dVar13 + 0x28);
      local_9c.arg1.words.low = *(undefined2 *)&this_00->field_0024;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)*DAT_008117bc)(&local_9c);
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    switch(*(undefined4 *)((int)this_00->field_06CB + 0x2c)) {
    case 1:
      uVar16 = 200;
      break;
    case 2:
      uVar16 = 0xce;
      break;
    case 3:
      uVar16 = 0xd4;
      break;
    case 4:
      uVar16 = 0xda;
      break;
    case 5:
      uVar16 = 0xe0;
      break;
    case 6:
      uVar16 = 0xe7;
      break;
    case 7:
      uVar16 = 0xee;
      break;
    case 8:
      uVar16 = 0xf5;
      break;
    case 9:
      uVar16 = 0xfd;
      break;
    case 10:
      uVar16 = 0x102;
      break;
    case 0xb:
      uVar16 = 0x108;
      break;
    case 0xc:
      uVar16 = 0x10e;
      break;
    case 0xd:
      uVar16 = 300;
      break;
    case 0xe:
      uVar16 = 0x132;
      break;
    case 0xf:
      uVar16 = 0x138;
      break;
    case 0x10:
      uVar16 = 0x13e;
      break;
    case 0x11:
      uVar16 = 0x144;
      break;
    case 0x12:
      uVar16 = 0x14b;
      break;
    case 0x13:
      uVar16 = 0x152;
      break;
    case 0x14:
      uVar16 = 0x159;
      break;
    case 0x15:
      uVar16 = 0x161;
      break;
    case 0x16:
      uVar16 = 0x166;
      break;
    case 0x17:
      uVar16 = 0x16e;
      break;
    case 0x18:
      uVar16 = 0x174;
      break;
    case 0x19:
      uVar16 = 400;
      break;
    case 0x1a:
      uVar16 = 0x198;
      break;
    case 0x1b:
      uVar16 = 0x1a0;
      break;
    case 0x1c:
      uVar16 = 0x1a6;
      break;
    case 0x1d:
      uVar16 = 0x1ac;
      break;
    case 0x1e:
      uVar16 = 0x1b3;
      break;
    case 0x1f:
      uVar16 = 0x1b9;
      break;
    case 0x20:
      uVar16 = 0x1bf;
      break;
    case 0x21:
      uVar16 = 0x1c5;
      break;
    case 0x22:
      uVar16 = 0x1cc;
      break;
    case 0x23:
      uVar16 = 0x1d3;
      break;
    case 0x24:
      uVar16 = 0x1d9;
      break;
    case 0x25:
      uVar16 = 0x17a;
      break;
    case 0x26:
      uVar16 = 0x114;
      break;
    case 0x27:
      uVar16 = 0x180;
      break;
    case 0x28:
      uVar16 = 0x1df;
      break;
    default:
      uVar16 = 0;
    }
    this_00->vfunc_90(4,uVar16);
  }
  if (*(int *)&local_1c->field_0xc == 2) {
    iVar12 = (message->arg0).i32;
    local_d0 = Library::DKW::LIB::MemAlloc(0x44);
    do {
      *(int **)(iVar28 + (int)local_d0) = DAT_0080677c;
      iVar28 = iVar28 + 4;
    } while (iVar28 < 0x44);
    local_d0[2] = DAT_00806774;
    local_d0[1] = DAT_00806774;
    *local_d0 = DAT_00806774;
    local_d0[0xf] = DAT_00806774;
    local_d0[9] = DAT_00806764;
    local_d0[8] = DAT_00806774;
    local_d0[10] = DAT_00806774;
    local_d0[0xb] = DAT_00806774;
    local_cc = 0;
    local_c8 = 0;
    local_c4 = DAT_008073cc;
    local_c0 = 0;
    local_bc = 0;
    local_b8 = 0;
    STT3DSprC::RestoreSpr
              ((STT3DSprC *)&this_00->field_01D5,(int *)&local_d0,
               (AnonShape_004AD790_77673787 *)(*(int *)(iVar12 + 0x5f6) + iVar12));
    FreeAndNull(&local_d0);
    STAllPlayersC::RestoreGObjData
              ((STAllPlayersC *)this_00,(undefined4 *)(*(int *)(iVar12 + 0x5fe) + iVar12));
    RestoreBoatData(this_00,iVar12);
    this_00->field_05A6 = nullptr;
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    STAllPlayersC::RegisterObject
              (g_allPlayers_007FA174,*(char *)&this_00->field_0024,
               CONCAT22(extraout_var_04,this_00->field_0030),
               CONCAT22(extraout_var,this_00->field_0032),(int *)this_00,1,0);
    if ((this_00->field_045D != CASE_14) || (this_00->field_05C0 != 3)) {
      DumpClassC::WritePtr
                (this_00->field_005B,this_00->field_005D,this_00->field_005F,0,
                 (RecoveredRecord_DumpClassC_00495EC0 *)this_00);
    }
    thunk_FUN_0048a910((AnonShape_0048A910_6D6DD7B1 *)this_00);
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x2a6
              );
  }
  local_74[0] = '\0';
  local_e8[0] = '\0';
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  switch(*(undefined4 *)((int)this_00->field_06CB + 0x2c)) {
  case 1:
    pcVar33 = local_74;
    pcVar32 = &DAT_007a9e8c;
    break;
  case 2:
    pcVar33 = local_74;
    pcVar32 = &DAT_007a9e84;
    break;
  case 3:
    pcVar33 = local_74;
    pcVar32 = &DAT_007a9e7c;
    break;
  case 4:
    pcVar33 = local_74;
    pcVar32 = &DAT_007a9e74;
    break;
  case 5:
    pcVar33 = local_74;
    pcVar32 = &DAT_007a9e6c;
    break;
  case 6:
    pcVar33 = local_74;
    pcVar32 = &DAT_007a9e64;
    break;
  case 7:
    pcVar33 = local_74;
    pcVar32 = &DAT_007a9e5c;
    break;
  case 8:
    pcVar33 = local_74;
    pcVar32 = &DAT_007a9e54;
    break;
  case 9:
    pcVar33 = local_74;
    pcVar32 = &DAT_007a9e50;
    break;
  case 10:
    pcVar33 = local_74;
    pcVar32 = &DAT_007a9e48;
    break;
  case 0xb:
    uVar14 = 0xffffffff;
    pcVar33 = &DAT_007a9e40;
    do {
      pcVar32 = pcVar33;
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      pcVar32 = pcVar33 + 1;
      cVar1 = *pcVar33;
      pcVar33 = pcVar32;
    } while (cVar1 != '\0');
    uVar14 = ~uVar14;
    iVar12 = -1;
    pcVar33 = local_74;
    do {
      pcVar31 = pcVar33;
      if (iVar12 == 0) break;
      iVar12 = iVar12 + -1;
      pcVar31 = pcVar33 + 1;
      cVar1 = *pcVar33;
      pcVar33 = pcVar31;
    } while (cVar1 != '\0');
    pcVar32 = pcVar32 + -uVar14;
    pcVar31 = pcVar31 + -1;
    for (uVar26 = uVar14 >> 2; uVar26 != 0; uVar26 = uVar26 - 1) {
      *(undefined4 *)pcVar31 = *(undefined4 *)pcVar32;
      pcVar32 = pcVar32 + 4;
      pcVar31 = pcVar31 + 4;
    }
    pcVar33 = local_e8;
    for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *pcVar31 = *pcVar32;
      pcVar32 = pcVar32 + 1;
      pcVar31 = pcVar31 + 1;
    }
    pcVar32 = &DAT_007a9e94;
    break;
  case 0xc:
    pcVar33 = local_74;
    pcVar32 = &DAT_007a9e38;
    break;
  case 0xd:
    pcVar33 = local_74;
    pcVar32 = &DAT_007a9e30;
    break;
  case 0xe:
    pcVar33 = local_74;
    pcVar32 = &DAT_007a9e28;
    break;
  case 0xf:
    pcVar33 = local_74;
    pcVar32 = &DAT_007a9e20;
    break;
  case 0x10:
    pcVar33 = local_74;
    pcVar32 = &DAT_007a9e18;
    break;
  case 0x11:
    pcVar33 = local_74;
    pcVar32 = &DAT_007a9e10;
    break;
  case 0x12:
    pcVar33 = local_74;
    pcVar32 = &DAT_007a9e08;
    break;
  case 0x13:
    pcVar33 = local_74;
    pcVar32 = &DAT_007a9e00;
    break;
  case 0x14:
    pcVar33 = local_74;
    pcVar32 = &DAT_007a9df8;
    break;
  case 0x15:
    pcVar33 = local_74;
    pcVar32 = &DAT_007a9df4;
    break;
  case 0x16:
    uVar14 = 0xffffffff;
    pcVar33 = &DAT_007a9dec;
    do {
      pcVar32 = pcVar33;
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      pcVar32 = pcVar33 + 1;
      cVar1 = *pcVar33;
      pcVar33 = pcVar32;
    } while (cVar1 != '\0');
    uVar14 = ~uVar14;
    iVar12 = -1;
    pcVar33 = local_74;
    do {
      pcVar31 = pcVar33;
      if (iVar12 == 0) break;
      iVar12 = iVar12 + -1;
      pcVar31 = pcVar33 + 1;
      cVar1 = *pcVar33;
      pcVar33 = pcVar31;
    } while (cVar1 != '\0');
    pcVar32 = pcVar32 + -uVar14;
    pcVar31 = pcVar31 + -1;
    for (uVar26 = uVar14 >> 2; uVar26 != 0; uVar26 = uVar26 - 1) {
      *(undefined4 *)pcVar31 = *(undefined4 *)pcVar32;
      pcVar32 = pcVar32 + 4;
      pcVar31 = pcVar31 + 4;
    }
    pcVar33 = local_e8;
    for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *pcVar31 = *pcVar32;
      pcVar32 = pcVar32 + 1;
      pcVar31 = pcVar31 + 1;
    }
    pcVar32 = &DAT_007a9e9c;
    break;
  case 0x17:
    pcVar33 = local_74;
    pcVar32 = &DAT_007a9de4;
    break;
  case 0x18:
    pcVar33 = local_74;
    pcVar32 = &DAT_007a9ddc;
    break;
  case 0x19:
    pcVar33 = local_74;
    pcVar32 = &DAT_007a9dd8;
    break;
  case 0x1a:
    pcVar33 = local_74;
    pcVar32 = &DAT_007a9dd4;
    break;
  case 0x1b:
    pcVar33 = local_74;
    pcVar32 = &DAT_007a9dd0;
    break;
  case 0x1c:
    pcVar33 = local_74;
    pcVar32 = &DAT_007a9dcc;
    break;
  case 0x1d:
    pcVar33 = local_74;
    pcVar32 = &DAT_007a9dc8;
    break;
  case 0x1e:
    pcVar33 = local_74;
    pcVar32 = &DAT_007a9dc4;
    break;
  case 0x1f:
    pcVar33 = local_74;
    pcVar32 = &DAT_007a9dc0;
    break;
  case 0x20:
    pcVar33 = local_74;
    pcVar32 = &DAT_007a9dbc;
    break;
  case 0x21:
    pcVar33 = local_74;
    pcVar32 = &DAT_007a9db8;
    break;
  case 0x22:
    pcVar33 = local_74;
    pcVar32 = &DAT_007a9db4;
    break;
  case 0x23:
    uVar14 = 0xffffffff;
    pcVar33 = &DAT_007a9db0;
    do {
      pcVar32 = pcVar33;
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      pcVar32 = pcVar33 + 1;
      cVar1 = *pcVar33;
      pcVar33 = pcVar32;
    } while (cVar1 != '\0');
    uVar14 = ~uVar14;
    iVar12 = -1;
    pcVar33 = local_74;
    do {
      pcVar31 = pcVar33;
      if (iVar12 == 0) break;
      iVar12 = iVar12 + -1;
      pcVar31 = pcVar33 + 1;
      cVar1 = *pcVar33;
      pcVar33 = pcVar31;
    } while (cVar1 != '\0');
    pcVar32 = pcVar32 + -uVar14;
    pcVar31 = pcVar31 + -1;
    for (uVar26 = uVar14 >> 2; uVar26 != 0; uVar26 = uVar26 - 1) {
      *(undefined4 *)pcVar31 = *(undefined4 *)pcVar32;
      pcVar32 = pcVar32 + 4;
      pcVar31 = pcVar31 + 4;
    }
    pcVar33 = local_e8;
    for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *pcVar31 = *pcVar32;
      pcVar32 = pcVar32 + 1;
      pcVar31 = pcVar31 + 1;
    }
    pcVar32 = &DAT_007a9ea4;
    break;
  case 0x24:
    pcVar33 = local_74;
    pcVar32 = &DAT_007a9dac;
    break;
  case 0x25:
    pcVar33 = local_74;
    pcVar32 = &DAT_007a9da4;
    break;
  case 0x26:
    pcVar33 = local_74;
    pcVar32 = &DAT_007a9d9c;
    break;
  case 0x27:
    pcVar33 = local_74;
    pcVar32 = &DAT_007a9d94;
    break;
  case 0x28:
    pcVar33 = local_74;
    pcVar32 = &DAT_007a9d8c;
    break;
  default:
    goto switchD_0044fb10_default;
  }
  uVar14 = 0xffffffff;
  do {
    pcVar31 = pcVar32;
    if (uVar14 == 0) break;
    uVar14 = uVar14 - 1;
    pcVar31 = pcVar32 + 1;
    cVar1 = *pcVar32;
    pcVar32 = pcVar31;
  } while (cVar1 != '\0');
  uVar14 = ~uVar14;
  iVar12 = -1;
  do {
    pcVar32 = pcVar33;
    if (iVar12 == 0) break;
    iVar12 = iVar12 + -1;
    pcVar32 = pcVar33 + 1;
    cVar1 = *pcVar33;
    pcVar33 = pcVar32;
  } while (cVar1 != '\0');
  pcVar33 = pcVar31 + -uVar14;
  pcVar32 = pcVar32 + -1;
  memmove(pcVar32, pcVar33, uVar14); /* compiler REP MOVS byte copy */
  uVar26 = 0;
switchD_0044fb10_default:
  iVar12 = STT3DSprC::LoadSequence((STT3DSprC *)&this_00->field_01D5,0xe,DAT_0080677c,local_74,0x1d);
  if (iVar12 != 0) {
    RaiseInternalException
              (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x2da);
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar12 = *(int *)((int)this_00->field_06CB + 0x2c);
  if ((((iVar12 == 0xb) || (iVar12 == 0x16)) || (iVar12 == 0x23)) &&
     (iVar12 = STT3DSprC::LoadSequence
                         ((STT3DSprC *)&this_00->field_01D5,0xd,DAT_0080677c,local_e8,0x1d),
     iVar12 != 0)) {
    RaiseInternalException
              (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x2de);
  }
  switch((int)this_00->field_06CB[5]) {
  case 0:
    pcVar33 = &DAT_007a9d88;
    break;
  case 1:
    pcVar33 = &DAT_007a4ffc;
    break;
  case 2:
    pcVar33 = &DAT_007aa028;
    break;
  case 3:
    pcVar33 = &DAT_007aa024;
    break;
  case 4:
    pcVar33 = &DAT_007aa020;
    break;
  case 5:
    pcVar33 = &DAT_007aa01c;
    break;
  case 6:
    pcVar33 = &DAT_007aa018;
    break;
  case 7:
    pcVar33 = &DAT_007aa014;
    break;
  default:
    goto switchD_0044fe4c_default;
  }
  uVar14 = 0xffffffff;
  do {
    pcVar32 = pcVar33;
    if (uVar14 == 0) break;
    uVar14 = uVar14 - 1;
    pcVar32 = pcVar33 + 1;
    cVar1 = *pcVar33;
    pcVar33 = pcVar32;
  } while (cVar1 != '\0');
  uVar14 = ~uVar14;
  iVar12 = -1;
  pcVar33 = local_74;
  do {
    pcVar31 = pcVar33;
    if (iVar12 == 0) break;
    iVar12 = iVar12 + -1;
    pcVar31 = pcVar33 + 1;
    cVar1 = *pcVar33;
    pcVar33 = pcVar31;
  } while (cVar1 != '\0');
  pcVar33 = pcVar32 + -uVar14;
  pcVar32 = pcVar31 + -1;
  memmove(pcVar32, pcVar33, uVar14); /* compiler REP MOVS byte copy */
switchD_0044fe4c_default:
  puVar20 = &this_00->field_01D5;
  iVar12 = STT3DSprC::LoadSequence((STT3DSprC *)puVar20,0xc,DAT_0080677c,local_74,0x1d);
  if (iVar12 != 0) {
    RaiseInternalException
              (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x2eb);
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  switch(*(undefined4 *)((int)this_00->field_06CB + 0x2c)) {
  case 9:
    local_c = ((8 - (int)this_00->field_006C / 0x2d) * 0xf) % 0x78;
    uVar26 = 0xe;
    uVar14 = this_00->field_001C * 0x41c64e6d + 0x3039;
    this_00->field_001C = uVar14;
    break;
  default:
    local_c = ((0x18 - (int)this_00->field_006C / 0xf) % 0x18 + (4 - DAT_008073fc) * 6) % 0x18;
    goto LAB_0045003f;
  case 0x15:
    local_c = ((8 - (int)this_00->field_006C / 0x2d) * 0x14) % 0xa0;
    uVar26 = 0x13;
    uVar14 = this_00->field_001C * 0x41c64e6d + 0x3039;
    this_00->field_001C = uVar14;
    break;
  case 0x24:
  case 0x25:
    uVar14 = this_00->field_001C * 0x41c64e6d + 0x3039;
    this_00->field_001C = uVar14;
    local_c = (uVar14 >> 0x10) % 10;
LAB_0045003f:
    STT3DSprC::SetCurFase((STT3DSprC *)puVar20,'\x0e',local_c);
    uVar14 = local_c;
    goto LAB_00450050;
  }
  uVar26 = (uVar14 >> 0x10) % uVar26;
  this_00->field_0822 = uVar26;
  STT3DSprC::SetCurFase((STT3DSprC *)puVar20,'\x0e',uVar26 + local_c);
  uVar14 = this_00->field_0822 + local_c;
LAB_00450050:
  STT3DSprC::SetCurFase((STT3DSprC *)puVar20,'\f',uVar14);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar12 = *(int *)((int)this_00->field_06CB + 0x2c);
  if ((iVar12 != 0x25) && (iVar12 != 0x24)) {
    thunk_FUN_004ac610(puVar20,'\x0e');
    thunk_FUN_004ac610(puVar20,'\f');
  }
  STT3DSprC::StartShow((STT3DSprC *)puVar20,0xe,g_playSystem_00802A38->field_00E4);
  STT3DSprC::StartShow((STT3DSprC *)puVar20,0xc,g_playSystem_00802A38->field_00E4);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar12 = *(int *)((int)this_00->field_06CB + 0x2c);
  if (((iVar12 == 0xb) || (iVar12 == 0x16)) || (iVar12 == 0x23)) {
    thunk_FUN_004acd60(puVar20,'\r',g_playSystem_00802A38->field_00E4 & 1);
    STT3DSprC::StartShow((STT3DSprC *)puVar20,0xd,g_playSystem_00802A38->field_00E4);
    STT3DSprC::SetCurFase((STT3DSprC *)puVar20,'\r',local_d4);
  }
  local_78 = (uint)this_00->field_0041;
  STT3DSprC::sub_004AD3C0
            ((STT3DSprC *)puVar20,(float)(int)local_78 * _DAT_007904f8 * _DAT_007904f0,
             (float)(int)this_00->field_0043 * _DAT_007904f8 * _DAT_007904f0,
             (float)(int)this_00->field_0045 * _DAT_007904f8 * _DAT_007904f0);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar12 = *(int *)((int)this_00->field_06CB + 0x2c);
  uVar14 = local_c;
  if ((iVar12 != 0x25) && (iVar12 != 0x24)) {
    uVar14 = (0x18 - (int)this_00->field_006C / 0xf) % 0x18;
  }
  STT3DSprC::SetCurShad((STT3DSprC *)puVar20,'\x0e',uVar14);
  thunk_FUN_0041f630((AnonShape_0041F630_B1BEE81C *)this_00);
  if (DAT_00807326 == '\0') {
    thunk_FUN_004ad5e0((STT3DSprC *)puVar20);
  }
  if (*(int *)&local_1c->field_0xc == 0) {
    local_78 = (message->arg0).u32;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)(local_78 + 0x45) == 1) {
      iVar12 = STT3DSprC::LoadSequence
                         ((STT3DSprC *)puVar20,0xb,DAT_00806774,"forcef0",0x1d);
      if (iVar12 != 0) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x31b);
      }
      thunk_FUN_004ad670(puVar20,'\x0e');
      thunk_FUN_004ad150(puVar20,'\v');
      thunk_FUN_004ac700(puVar20,'\v');
      STT3DSprC::StartShow((STT3DSprC *)puVar20,0xb,g_playSystem_00802A38->field_00E4);
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)(local_78 + 0x45) == 3) {
      thunk_FUN_006377b0(this_00->field_01ED,1,-1,-1,-1,0x12);
    }
  }
  RaiseInternalException
            (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x329);
LAB_00450268:
  this_00->field_046B = nullptr;
  STPlaySystemC::sub_006E62D0(g_playSystem_00802A38,this_00->field_0471,(int *)&this_00->field_046B);
  if (this_00->field_07CA != nullptr) {
    iVar12 = STPlaySystemC::sub_006E62D0(g_playSystem_00802A38,this_00->field_07CA,&local_30);
    if (iVar12 == -4) {
      iVar12 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x335,0,0,"%s",
                                  "STBoatC::GetMessage MESS_ID_ALLCREATE data.lname!=0");
      if (iVar12 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException
                (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x336);
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    Library::Ourlib::ST3DSMAP::SprSetLevAfter
              (this_00->field_0211,this_00->field_01ED,*(int *)(local_30 + 0x1ed));
  }
  if ((this_00->field_045D == CASE_F) && (this_00->field_0596 == 3)) {
    iVar12 = STPlaySystemC::sub_006E62D0(g_playSystem_00802A38,this_00->field_058E,&local_30);
    if (iVar12 == -4) {
      iVar12 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x33c,0,0,"%s",
                                  "STBoatC::GetMessage MESS_ID_ALLCREATE sloi.name");
      if (iVar12 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException
                (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x33d);
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    Library::Ourlib::ST3DSMAP::SprSetLevAfter
              (this_00->field_0211,this_00->field_01ED,*(int *)(local_30 + 0x1ed));
    g_currentExceptionFrame = local_184.previous;
    return 0;
  }
  g_currentExceptionFrame = local_184.previous;
  return 0;
}

