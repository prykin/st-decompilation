
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
    */

int __thiscall STBoatC::GetMessage(STBoatC *this,STMessage *message)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  STMessageId SVar7;
  STBoatC_field_045DState SVar8;
  code *pcVar9;
  STBoatC *this_00;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined2 extraout_var;
  void *extraout_EAX;
  void *pvVar13;
  uint *puVar14;
  STGroupBoatC *pSVar15;
  undefined4 *puVar16;
  undefined2 uVar18;
  AiPlrClassTy *pAVar17;
  undefined2 extraout_var_00;
  STGroupBoatC *this_01;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined2 extraout_var_03;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  STWorldObject *pSVar19;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  uint extraout_EDX;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined2 uVar22;
  undefined2 extraout_var_06;
  undefined2 extraout_var_07;
  undefined4 extraout_EDX_00;
  undefined2 extraout_var_08;
  undefined2 extraout_var_09;
  uint extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  STGroupBoatCVTable *pSVar20;
  uint extraout_EDX_06;
  uint extraout_EDX_07;
  uint extraout_EDX_08;
  uint extraout_EDX_09;
  uint extraout_EDX_10;
  uint extraout_EDX_11;
  uint extraout_EDX_12;
  uint extraout_EDX_13;
  uint extraout_EDX_14;
  uint extraout_EDX_15;
  uint extraout_EDX_16;
  uint extraout_EDX_17;
  uint extraout_EDX_18;
  uint extraout_EDX_19;
  uint extraout_EDX_20;
  uint uVar21;
  undefined2 extraout_var_10;
  int *unaff_ESI;
  int iVar23;
  byte *pbVar24;
  void *unaff_EDI;
  char *pcVar25;
  char *pcVar26;
  char *pcVar27;
  int *piVar28;
  byte *pbVar29;
  undefined4 *puVar30;
  longlong lVar31;
  STBoatC_field_06F7State SVar32;
  Global_sub_00498D20_param_1Enum orderType;
  undefined4 uVar33;
  short sVar34;
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
  undefined4 local_84;
  void *local_7c;
  void *local_78;
  char local_74 [20];
  uint local_60;
  undefined4 local_5c;
  undefined4 *local_58;
  undefined4 local_54;
  uint local_50;
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
  byte *local_20;
  STGroupBoatC *local_1c;
  short local_16;
  short local_14;
  short local_12;
  STWorldObject *local_10;
  uint local_c;
  uint local_8;
  
  iVar23 = 0;
  local_8 = 0;
  local_d4 = 0;
  local_184.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_184;
  local_ec = this;
  iVar10 = Library::MSVCRT::__setjmp3(local_184.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_ec;
  if (iVar10 != 0) {
    g_currentExceptionFrame = local_184.previous;
    if (iVar10 == -0x5001fff7) {
      return 0;
    }
    local_284 = '\0';
    puVar16 = local_283;
    for (iVar23 = 0x3f; iVar23 != 0; iVar23 = iVar23 + -1) {
      *puVar16 = 0;
      puVar16 = puVar16 + 1;
    }
    *(undefined2 *)puVar16 = 0;
    wsprintfA(&local_284,s_STBoatC__GetMessage___Name__d_Pl_007a9eac,local_ec->field_0018,
              *(undefined4 *)&local_ec->field_0x24,(uint)(ushort)local_ec->field_0032,
              (uint)(ushort)local_ec->field_0030);
    iVar23 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1380,0,iVar10,
                                &DAT_007a4ccc,&local_284);
    if (iVar23 == 0) {
      RaiseInternalException(iVar10,0,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1381);
      return 0xffff;
    }
    pcVar9 = (code *)swi(3);
    iVar10 = (*pcVar9)();
    return iVar10;
  }
  STSprGameObjC::GetMessage((STSprGameObjC *)local_ec,(AnonShape_0041AF40_F59F8577 *)message);
  SVar7 = message->id;
  if (MESS_ID_ALLCREATE < SVar7) {
    if (SVar7 < MESS_SHARED_0129) {
      if (SVar7 != MESS_HITKILL) {
        if (SVar7 == MESS_SHARED_0121) {
          if (this_00->field_06F7 != CASE_23) {
            *(undefined4 *)&this_00->field_0x736 = *(undefined4 *)((int)message->data + 4);
            if (this_00->field_045D == CASE_3) {
              g_currentExceptionFrame = local_184.previous;
              return 0;
            }
            local_54 = PTR_00802a38->field_00E4;
            CmdToObj(this_00,CASE_3,&local_54);
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          if (this_00->field_0722 != 0x14) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          if (*(int *)&this_00->field_0x72e != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          *(undefined4 *)&this_00->field_0x72e = 1;
          (*this_00->vtable->vfunc_90)(3,0x16c);
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        if (SVar7 != MESS_SHARED_0122) {
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        piVar28 = message->data;
        if (*piVar28 != *(int *)&this_00->field_0x24) {
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        *(int *)&this_00->field_0x782 = piVar28[1];
        *(int *)&this_00->field_0x786 = piVar28[2];
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      pSVar15 = message->data;
      local_1c = pSVar15;
      if (DAT_008117bc != (STWorldObject *)0x0) {
        if (pSVar15 != (STGroupBoatC *)0x0) {
          local_9c.id = MESS_SHARED_5DD5;
          local_9c.data = (void *)CONCAT22(this_00->field_0032,*(undefined2 *)&this_00->field_0x24);
          local_84 = CONCAT22(*(undefined2 *)&pSVar15->field_000C,
                              *(undefined2 *)&pSVar15->field_0008);
          (*DAT_008117bc->vtable->slots_00_28[0])(&local_9c);
        }
        if (((DAT_008117bc != (STWorldObject *)0x0) && (pSVar15 != (STGroupBoatC *)0x0)) &&
           (pSVar15->vtable != (STGroupBoatCVTable *)0x2710)) {
          local_9c.id = 0x5dd1;
          local_9c.data = (void *)CONCAT22(this_00->field_0032,*(undefined2 *)&this_00->field_0x24);
          local_84 = CONCAT22(*(undefined2 *)&pSVar15->field_000C,
                              *(undefined2 *)&pSVar15->field_0008);
          (*DAT_008117bc->vtable->slots_00_28[0])(&local_9c);
        }
      }
      if (this_00->field_07CA != 0) {
        iVar10 = FUN_006e62d0(PTR_00802a38,this_00->field_07CA,(int *)&local_4c);
        if (iVar10 == -4) {
          iVar10 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x12f7,0,0,
                                      &DAT_007a4ccc,s_STBoatC__GetMessage_MESS_HITKILL_007a9ef8);
          if (iVar10 != 0) {
            pcVar9 = (code *)swi(3);
            iVar10 = (*pcVar9)();
            return iVar10;
          }
          RaiseInternalException
                    (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,
                     0x12f8);
        }
        pSVar15 = local_1c;
        piVar28 = local_140;
        for (iVar10 = 7; iVar10 != 0; iVar10 = iVar10 + -1) {
          *piVar28 = (int)pSVar15->vtable;
          pSVar15 = (STGroupBoatC *)&pSVar15->field_0004;
          piVar28 = piVar28 + 1;
        }
        local_9c.id = MESS_HITKILL;
        local_9c.data = local_140;
        (**(code **)*local_4c)(&local_9c);
        pSVar15 = local_1c;
      }
      if (((this_00->field_045D == CASE_14) || (uVar11 = CheckPBoxCmd(this_00,CASE_14), uVar11 != 0)
          ) && (iVar10 = FUN_006e62d0(PTR_00802a38,this_00->field_05A2,(int *)&local_10),
               iVar10 != -4)) {
        thunk_FUN_00492510(local_10,this_00->field_0018);
      }
      this_00->field_0455 = 1;
      sub_0048D930(this_00);
      sub_0048DBA0(this_00);
      sVar34 = this_00->field_066F;
      sVar4 = this_00->field_0673;
      sVar5 = this_00->field_0671;
      if (((sVar34 < 0) || (pSVar15 = local_1c, SHORT_007fb240 <= sVar34)) ||
         ((sVar5 < 0 || (((SHORT_007fb242 <= sVar5 || (sVar4 < 0)) || (SHORT_007fb244 <= sVar4))))))
      {
        pSVar19 = (STWorldObject *)0x0;
      }
      else {
        pSVar19 = g_worldCells
                  [(int)SHORT_007fb246 * (int)sVar4 + (int)SHORT_007fb240 * (int)sVar5 + (int)sVar34
                  ].objects[0];
      }
      if (((pSVar19 != (STWorldObject *)0x0) &&
          (*(int *)&pSVar19->field_0x18 == this_00->field_0679)) &&
         ((this_00->field_0675 == 99 && (pSVar19->value_20 == 1000)))) {
        thunk_FUN_004b7d50(pSVar19,this_00);
      }
      sub_004952E0(this_00);
      uVar12 = STAllPlayersC::DeleteGuardBoat
                         (g_sTAllPlayers_007FA174,
                          CONCAT31((int3)((uint)extraout_ECX_04 >> 8),this_00->field_0x24),
                          this_00->field_0032,1);
      STAllPlayersC::DeleteGuardBoat
                (g_sTAllPlayers_007FA174,CONCAT31((int3)((uint)uVar12 >> 8),this_00->field_0x24),
                 this_00->field_0032,0);
      sub_00492420(this_00);
      thunk_FUN_004924a0(this_00);
      thunk_FUN_00492fc0((AnonShape_00492FC0_E6F586EF *)this_00);
      thunk_FUN_00493bc0((int)this_00);
      sVar34 = this_00->field_06A9;
      sVar4 = this_00->field_06AD;
      sVar5 = this_00->field_06AB;
      if (((sVar34 < 0) || (pSVar15 = local_1c, SHORT_007fb240 <= sVar34)) ||
         ((sVar5 < 0 || (((SHORT_007fb242 <= sVar5 || (sVar4 < 0)) || (SHORT_007fb244 <= sVar4))))))
      {
        local_24 = (AnonShape_004B9D90_4F3151F9 *)0x0;
      }
      else {
        local_24 = (AnonShape_004B9D90_4F3151F9 *)
                   g_worldCells
                   [(int)SHORT_007fb246 * (int)sVar4 + (int)SHORT_007fb240 * (int)sVar5 +
                    (int)sVar34].objects[0];
      }
      if (((local_24 == (AnonShape_004B9D90_4F3151F9 *)0x0) ||
          (*(int *)&local_24->field_0x18 != this_00->field_06AF)) ||
         (iVar10 = thunk_FUN_004b9d90(local_24), iVar10 == 0)) {
        FUN_006e62d0(PTR_00802a38,this_00->field_06AF,(int *)&local_24);
      }
      if (((local_24 != (AnonShape_004B9D90_4F3151F9 *)0x0) &&
          (*(int *)&local_24->field_0x20 == 1000)) &&
         (thunk_FUN_004b9d20(local_24,(int)this_00),
         *(int *)&local_24->field_0x4b0 == this_00->field_0018)) {
        *(undefined4 *)&local_24->field_0x4b0 = 0;
      }
      if (((this_00->field_045D == CASE_13) && (this_00->field_0524 != 0)) &&
         (iVar10 = FUN_006e62d0(PTR_00802a38,this_00->field_0524,(int *)&local_24), iVar10 != -4)) {
        thunk_FUN_004cf3e0(local_24,this_00->field_0018);
      }
      FUN_006e6780((void *)this_00->field_0211,
                   CONCAT22(CONCAT11(2,(char)((uint)this_00->field_0018 >> 0x10)),
                            *(undefined2 *)&this_00->field_0018));
      this_00->field_0826 = pSVar15->field_0008;
      iVar10 = (*this_00->vtable->vfunc_2C)();
      thunk_FUN_004b7710(CONCAT31((int3)((uint)extraout_ECX_05 >> 8),this_00->field_0x24),iVar10);
      if (*(uint *)&this_00->field_0x24 == (uint)*(byte *)(this_00->field_0010 + 0x112d)) {
        thunk_FUN_004d8b70((char)*(uint *)&this_00->field_0x24);
      }
      if (pSVar15->field_0018 != 2) {
        puVar16 = &this_00->field_01D5;
        STT3DSprC::StopShow((STT3DSprC *)puVar16,0xf);
        STT3DSprC::StopShow((STT3DSprC *)puVar16,0);
        STT3DSprC::StopShow((STT3DSprC *)puVar16,1);
        STT3DSprC::StopShow((STT3DSprC *)puVar16,0xe);
        STT3DSprC::StopShow((STT3DSprC *)puVar16,0xd);
        STT3DSprC::StopShow((STT3DSprC *)puVar16,0xc);
        STT3DSprC::StopShow((STT3DSprC *)puVar16,8);
        uVar12 = STT3DSprC::StopShow((STT3DSprC *)puVar16,0xb);
        this_01 = thunk_FUN_0042b760(CONCAT31((int3)((uint)uVar12 >> 8),this_00->field_0x24),
                                     CONCAT22(extraout_var_10,this_00->field_0030));
        pSVar15 = local_1c;
        if (this_01 != (STGroupBoatC *)0x0) {
          (*this_01->vtable->vfunc_08)(this_01,CASE_6A,&this_00->field_0032);
          pSVar15 = local_1c;
        }
      }
      if ((int *)this_00->field_0465 != (int *)0x0) {
        thunk_FUN_00635fd0((int *)this_00->field_0465);
        Library::MSVCRT::FUN_0072e2b0((HoloTy *)this_00->field_0465);
        this_00->field_0465 = 0;
      }
      if (((pSVar15->field_0004 == 0xa8) || (pSVar15->field_0018 == 0)) ||
         (pSVar15->field_0018 == 4)) {
        uVar33 = 0xffffffff;
        uVar12 = thunk_FUN_004ad650((int)&this_00->field_01D5);
        thunk_FUN_0062b770((int)this_00->field_0041,(int)this_00->field_0043,
                           (int)this_00->field_0045,this_00->field_06F7,(int)this_00,
                           (int)this_00->field_006C,uVar12,uVar33);
      }
      if (pSVar15->field_0018 == 3) {
        thunk_FUN_006377b0(this_00->field_01ED,0,(int)this_00->field_0041,(int)this_00->field_0043,
                           (int)this_00->field_0045,0x12);
      }
      if (pSVar15->field_0018 == 2) {
        *(undefined4 *)&this_00->field_0x2c0 = 1;
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
      thunk_FUN_0041c3f0(this_00,(undefined *)this_00->field_070A);
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
    if ((this_00->field_05A6 == 0) &&
       (iVar10 = FUN_006e62d0(PTR_00802a38,this_00->field_05A2,&this_00->field_05A6), iVar10 == -4))
    {
      RaiseInternalException
                (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1372);
    }
    local_9d = this_00->field_0x63;
    uVar2 = this_00->field_0061;
    uVar3 = this_00->field_0062;
    puVar16 = (undefined4 *)(this_00->field_05A6 + 0x34);
    puVar30 = (undefined4 *)&this_00->field_0x34;
    for (iVar10 = 0x17; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar30 = *puVar16;
      puVar16 = puVar16 + 1;
      puVar30 = puVar30 + 1;
    }
    *(undefined2 *)puVar30 = *(undefined2 *)puVar16;
    *(undefined1 *)((int)puVar30 + 2) = *(undefined1 *)((int)puVar16 + 2);
    this_00->field_0076 = 0;
    this_00->field_006E = 0x2f;
    this_00->field_0061 = uVar2;
    this_00->field_0062 = uVar3;
    this_00->field_0x63 = local_9d;
    iVar10 = (*this_00->vtable->vfunc_D8)();
    if (iVar10 == 0) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    iVar10 = 0x1377;
    goto cf_error_exit_0045AEE3;
  }
  if (SVar7 == MESS_ID_ALLCREATE) goto LAB_00450268;
  if (MESS_SHARED_0003 < SVar7) {
    if (SVar7 == MESS_SHARED_010F) {
      local_44 = (byte *)STT3DSprC::SaveSpr((STT3DSprC *)&this_00->field_01D5,&local_38);
      local_3c = (byte *)STAllPlayersC::SaveGObjData((STAllPlayersC *)this_00,(int *)&local_2c);
      local_40 = (byte *)SaveBoatData(this_00,(int *)&local_34);
      local_7c = (void *)(local_2c + local_34 + local_38);
      local_20 = (byte *)Library::DKW::LIB::FUN_006aac70((int)local_7c);
      pbVar24 = local_40;
      pbVar29 = local_20;
      for (uVar11 = local_34 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pbVar29 = *(undefined4 *)pbVar24;
        pbVar24 = pbVar24 + 4;
        pbVar29 = pbVar29 + 4;
      }
      for (uVar11 = local_34 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pbVar29 = *pbVar24;
        pbVar24 = pbVar24 + 1;
        pbVar29 = pbVar29 + 1;
      }
      pbVar24 = local_3c;
      pbVar29 = local_20 + local_34;
      for (uVar11 = local_2c >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pbVar29 = *(undefined4 *)pbVar24;
        pbVar24 = pbVar24 + 4;
        pbVar29 = pbVar29 + 4;
      }
      for (uVar11 = local_2c & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pbVar29 = *pbVar24;
        pbVar24 = pbVar24 + 1;
        pbVar29 = pbVar29 + 1;
      }
      *(uint *)(local_20 + 0x5fe) = local_34;
      *(uint *)(local_20 + 0x602) = local_2c;
      pbVar24 = local_44;
      pbVar29 = local_20 + local_34 + local_2c;
      for (uVar11 = local_38 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pbVar29 = *(undefined4 *)pbVar24;
        pbVar24 = pbVar24 + 4;
        pbVar29 = pbVar29 + 4;
      }
      for (uVar11 = local_38 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pbVar29 = *pbVar24;
        pbVar24 = pbVar24 + 1;
        pbVar29 = pbVar29 + 1;
      }
      *(uint *)(local_20 + 0x5f6) = local_34 + local_2c;
      *(uint *)(local_20 + 0x5fa) = local_38;
      STPlaySystemC::SaveObjData(PTR_00802a38,this_00->field_0018,local_20,(uint)local_7c);
      FUN_006ab060(&local_44);
      FUN_006ab060(&local_3c);
      FUN_006ab060(&local_40);
      FUN_006ab060(&local_20);
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    if (SVar7 != MESS_TORPHIT) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    pSVar15 = message->data;
    local_c = 0;
    local_7c = pSVar15->vtable;
    if (*(int *)&this_00->field_0x742 == 1) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    if ((this_00->field_045D == CASE_8) && (this_00->field_06E7 != 2)) {
      this_00->field_06E7 = 1;
    }
    iVar10 = *(int *)&this_00->field_0x786;
    if ((0 < iVar10) && (iVar10 < 0x65)) {
      *(int *)pSVar15 = *(int *)pSVar15 - (iVar10 * *(int *)pSVar15) / 100;
    }
    iVar10 = *(int *)((int)pSVar15 + 4);
    local_1c = pSVar15;
    if (iVar10 == 0x65) goto LAB_00459f59;
    if (iVar10 != 0x42) {
      switch(iVar10) {
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
        local_c = thunk_FUN_004e60d0(*(int *)&this_00->field_0x24,0x67);
        iVar10 = 0;
        if (local_c == 1) {
          iVar10 = *(int *)pSVar15;
          iVar23 = (iVar10 * 9) / 10 + (iVar10 * 9 >> 0x1f);
LAB_00459e30:
          iVar10 = iVar10 - (iVar23 - (iVar23 >> 0x1f));
        }
        else {
          if (local_c == 2) {
            iVar10 = *(int *)pSVar15;
            iVar23 = (iVar10 * 0x11) / 0x14 + (iVar10 * 0x11 >> 0x1f);
            goto LAB_00459e30;
          }
          if (local_c == 3) {
            iVar10 = *(int *)pSVar15;
            iVar23 = (iVar10 * 4) / 5 + (iVar10 * 4 >> 0x1f);
            goto LAB_00459e30;
          }
        }
        *(int *)pSVar15 = *(int *)pSVar15 - iVar10;
      }
      uVar11 = thunk_FUN_004406c0(this_00->field_0x24);
      uVar11 = uVar11 & 0xff;
      if (uVar11 == 1) {
        iVar10 = *(int *)&this_00->field_0x24;
        iVar23 = 4;
LAB_00459e71:
        local_c = thunk_FUN_004e60d0(iVar10,iVar23);
      }
      else {
        if (uVar11 == 2) {
          iVar10 = *(int *)&this_00->field_0x24;
          iVar23 = 0x81;
          goto LAB_00459e71;
        }
        if (uVar11 == 3) {
          iVar10 = *(int *)&this_00->field_0x24;
          iVar23 = 0x65;
          goto LAB_00459e71;
        }
      }
      iVar10 = 0;
      if (local_c == 1) {
        iVar10 = *(int *)pSVar15;
        iVar23 = iVar10 * 8;
LAB_00459eaa:
        iVar10 = iVar10 - iVar23 / 10;
      }
      else {
        if (local_c == 2) {
          iVar10 = *(int *)pSVar15;
          iVar23 = iVar10 * 6;
          goto LAB_00459eaa;
        }
        if (local_c == 3) {
          iVar10 = *(int *)pSVar15;
          iVar23 = iVar10 * 4;
          goto LAB_00459eaa;
        }
      }
      *(int *)pSVar15 = *(int *)pSVar15 - iVar10;
      if (*(int *)((int)pSVar15 + 4) == 0x9a) {
        iVar10 = *(int *)((int)pSVar15 + 8);
        *(int *)&this_00->field_0x772 = iVar10;
        if (((int)this_00->field_0776 < 2) && (iVar10 = thunk_FUN_004e60d0(iVar10,0x93), 0 < iVar10)
           ) {
          this_00->field_0776 = 2;
        }
        if ((int)this_00->field_076E < 0) {
          this_00->field_076E = 0;
        }
        iVar10 = (*this_00->vtable->vfunc_0C)();
        if (iVar10 == 3) {
          (*this_00->vtable->vfunc_C8)(0);
        }
      }
      if ((*(int *)((int)pSVar15 + 4) == 0xad) || (*(int *)((int)pSVar15 + 4) == 0xa1)) {
        if (this_00->field_06F7 == CASE_9) {
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        if (this_00->field_06F7 == CASE_15) {
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        thunk_FUN_00495010(this_00,*(int *)((int)pSVar15 + 0x10));
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
    uVar11 = thunk_FUN_004406c0(this_00->field_0x24);
    uVar11 = uVar11 & 0xff;
    if (uVar11 == 1) {
      iVar10 = *(int *)&this_00->field_0x24;
      iVar23 = 0x2d;
LAB_00459d8b:
      local_c = thunk_FUN_004e60d0(iVar10,iVar23);
    }
    else {
      if (uVar11 == 2) {
        iVar10 = *(int *)&this_00->field_0x24;
        iVar23 = 0x2d;
        goto LAB_00459d8b;
      }
      if (uVar11 == 3) {
        iVar10 = *(int *)&this_00->field_0x24;
        iVar23 = 0x6a;
        goto LAB_00459d8b;
      }
    }
    iVar10 = 0;
    if (local_c == 1) {
      iVar10 = *(int *)pSVar15 - (*(int *)pSVar15 * 9) / 10;
    }
    *(int *)pSVar15 = *(int *)pSVar15 - iVar10;
LAB_00459f59:
    if (200 < (int)local_7c - *(int *)pSVar15) {
      *(int *)pSVar15 = (int)local_7c + -200;
    }
    if ((int)this_00->field_0716 < 1) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    this_00->field_0716 = this_00->field_0716 - *(int *)pSVar15;
    pvVar13 = DAT_00811798;
    if ((((DAT_00811798 != (void *)0x0) && (*(int *)((int)pSVar15 + 8) != 0xff)) &&
        (pvVar13 = (void *)thunk_FUN_0041c710((int)this_00), pvVar13 != (void *)0x0)) &&
       (*(int *)((int)pSVar15 + 0x14) == 0)) {
      pvVar13 = (void *)thunk_FUN_0061f8b0(DAT_00811798,(int)this_00->field_005B,
                                           (int)this_00->field_005D,*(uint *)&this_00->field_0x24);
    }
    if ((DAT_008117bc != (STWorldObject *)0x0) && (pSVar15 != (STGroupBoatC *)0x0)) {
      local_9c.id = MESS_SHARED_5DD5;
      local_9c.data = (void *)CONCAT22(this_00->field_0032,*(undefined2 *)&this_00->field_0x24);
      local_84 = CONCAT22((short)*(int *)((int)pSVar15 + 0xc),(short)*(int *)((int)pSVar15 + 8));
      pvVar13 = (void *)(*DAT_008117bc->vtable->slots_00_28[0])(&local_9c);
    }
    if ((int)this_00->field_0716 < 1) {
      if (((DAT_008117bc != (STWorldObject *)0x0) && (pSVar15 != (STGroupBoatC *)0x0)) &&
         (*(int *)pSVar15 != 10000)) {
        local_9c.id = 0x5dd1;
        local_9c.data = (void *)CONCAT22(this_00->field_0032,*(undefined2 *)&this_00->field_0x24);
        local_84 = CONCAT22((short)*(int *)((int)pSVar15 + 0xc),(short)*(int *)((int)pSVar15 + 8));
        (*DAT_008117bc->vtable->slots_00_28[0])(&local_9c);
      }
      *(undefined4 *)&this_00->field_0x2c0 = 1;
      switch(this_00->field_06F7) {
      case CASE_1:
        uVar12 = 0xcb;
        break;
      case CASE_2:
        uVar12 = 0xd1;
        break;
      case CASE_3:
        uVar12 = 0xd7;
        break;
      case CASE_4:
        uVar12 = 0xdd;
        break;
      case CASE_5:
        uVar12 = 0xe3;
        break;
      case CASE_6:
        uVar12 = 0xea;
        break;
      case CASE_7:
        uVar12 = 0xf1;
        break;
      case CASE_8:
        uVar12 = 0xf8;
        break;
      case CASE_9:
        uVar12 = 0x100;
        break;
      case CASE_A:
        uVar12 = 0x105;
        break;
      case CASE_B:
        uVar12 = 0x10b;
        break;
      case CASE_C:
        uVar12 = 0x111;
        break;
      case CASE_D:
        uVar12 = 0x12f;
        break;
      case CASE_E:
        uVar12 = 0x135;
        break;
      case CASE_F:
        uVar12 = 0x13b;
        break;
      case CASE_10:
        uVar12 = 0x141;
        break;
      case CASE_11:
        uVar12 = 0x147;
        break;
      case CASE_12:
        uVar12 = 0x14e;
        break;
      case CASE_13:
        uVar12 = 0x155;
        break;
      case CASE_14:
        uVar12 = 0x15c;
        break;
      case CASE_15:
        uVar12 = 0x164;
        break;
      case CASE_16:
        uVar12 = 0x169;
        break;
      case CASE_17:
        uVar12 = 0x171;
        break;
      case CASE_18:
        uVar12 = 0x177;
        break;
      case CASE_19:
        uVar12 = 0x193;
        break;
      case CASE_1A:
        uVar12 = 0x19b;
        break;
      case CASE_1B:
        uVar12 = 0x1a3;
        break;
      case CASE_1C:
        uVar12 = 0x1a9;
        break;
      case CASE_1D:
        uVar12 = 0x1af;
        break;
      case CASE_1E:
        uVar12 = 0x1b6;
        break;
      case CASE_1F:
        uVar12 = 0x1bc;
        break;
      case CASE_20:
        uVar12 = 0x1c2;
        break;
      case CASE_21:
        uVar12 = 0x1c8;
        break;
      case CASE_22:
        uVar12 = 0x1cf;
        break;
      case CASE_23:
        uVar12 = 0x1d6;
        break;
      case CASE_24:
        uVar12 = 0x1dc;
        break;
      case CASE_25:
        uVar12 = 0x17d;
        break;
      case CASE_26:
        uVar12 = 0x117;
        break;
      case CASE_27:
        uVar12 = 0x183;
        break;
      case CASE_28:
        uVar12 = 0x1e2;
        break;
      default:
        uVar12 = 0;
      }
      (*this_00->vtable->vfunc_90)(2,uVar12);
      sub_0048D930(this_00);
      sub_0048DBA0(this_00);
      sVar34 = this_00->field_0671;
      sVar4 = this_00->field_0673;
      local_7c = (void *)CONCAT22(local_7c._2_2_,sVar34);
      sVar5 = this_00->field_066F;
      if (((((sVar5 < 0) || (SHORT_007fb240 <= sVar5)) || (sVar34 < 0)) ||
          ((SHORT_007fb242 <= sVar34 || (sVar4 < 0)))) || (SHORT_007fb244 <= sVar4)) {
        pSVar19 = (STWorldObject *)0x0;
      }
      else {
        pSVar19 = g_worldCells
                  [(int)SHORT_007fb246 * (int)sVar4 + (int)SHORT_007fb240 * (int)sVar34 + (int)sVar5
                  ].objects[0];
        pSVar15 = local_1c;
      }
      if (((pSVar19 != (STWorldObject *)0x0) &&
          (*(int *)&pSVar19->field_0x18 == this_00->field_0679)) &&
         ((this_00->field_0675 == 99 && (pSVar19->value_20 == 1000)))) {
        thunk_FUN_004b7d50(pSVar19,this_00);
      }
      sub_004952E0(this_00);
      uVar12 = STAllPlayersC::DeleteGuardBoat
                         (g_sTAllPlayers_007FA174,
                          CONCAT31((int3)((uint)extraout_ECX_03 >> 8),this_00->field_0x24),
                          this_00->field_0032,1);
      STAllPlayersC::DeleteGuardBoat
                (g_sTAllPlayers_007FA174,CONCAT31((int3)((uint)uVar12 >> 8),this_00->field_0x24),
                 this_00->field_0032,0);
      sub_00492420(this_00);
      if (this_00->field_07CA != 0) {
        iVar10 = FUN_006e62d0(PTR_00802a38,this_00->field_07CA,(int *)&local_58);
        if (iVar10 == -4) {
          iVar10 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1296,0,0,
                                      &DAT_007a4ccc,s_STBoatC__GetMessage_MESS_TORPHIT_007a9f3c);
          if (iVar10 != 0) {
            pcVar9 = (code *)swi(3);
            iVar10 = (*pcVar9)();
            return iVar10;
          }
          RaiseInternalException
                    (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,
                     0x1297);
        }
        pSVar15 = local_1c;
        piVar28 = local_124;
        for (iVar10 = 7; iVar10 != 0; iVar10 = iVar10 + -1) {
          *piVar28 = *(int *)pSVar15;
          pSVar15 = (STGroupBoatC *)((int)pSVar15 + 4);
          piVar28 = piVar28 + 1;
        }
        local_124[0] = 0x1716b;
        local_9c.id = MESS_TORPHIT;
        local_9c.data = local_124;
        (**(code **)*local_58)(&local_9c);
        pSVar15 = local_1c;
      }
      thunk_FUN_004924a0(this_00);
      thunk_FUN_00492fc0((AnonShape_00492FC0_E6F586EF *)this_00);
      thunk_FUN_00493bc0((int)this_00);
      sVar34 = this_00->field_06A9;
      local_7c = (void *)CONCAT22(extraout_var_00,sVar34);
      sVar4 = this_00->field_06AD;
      sVar5 = this_00->field_06AB;
      if ((((sVar34 < 0) || (SHORT_007fb240 <= sVar34)) || (sVar5 < 0)) ||
         (((SHORT_007fb242 <= sVar5 || (sVar4 < 0)) || (SHORT_007fb244 <= sVar4)))) {
        local_28 = (AnonShape_004B9D90_4F3151F9 *)0x0;
      }
      else {
        local_28 = (AnonShape_004B9D90_4F3151F9 *)
                   g_worldCells
                   [(int)SHORT_007fb246 * (int)sVar4 + (int)SHORT_007fb240 * (int)sVar5 +
                    (int)sVar34].objects[0];
      }
      if (((local_28 == (AnonShape_004B9D90_4F3151F9 *)0x0) ||
          (*(int *)&local_28->field_0x18 != this_00->field_06AF)) ||
         (iVar10 = thunk_FUN_004b9d90(local_28), iVar10 == 0)) {
        FUN_006e62d0(PTR_00802a38,this_00->field_06AF,(int *)&local_28);
      }
      if (((local_28 != (AnonShape_004B9D90_4F3151F9 *)0x0) &&
          (*(int *)&local_28->field_0x20 == 1000)) &&
         (thunk_FUN_004b9d20(local_28,(int)this_00),
         *(int *)&local_28->field_0x4b0 == this_00->field_0018)) {
        *(undefined4 *)&local_28->field_0x4b0 = 0;
      }
      if (((this_00->field_045D == CASE_13) && (this_00->field_0524 != 0)) &&
         (iVar10 = FUN_006e62d0(PTR_00802a38,this_00->field_0524,(int *)&local_28), iVar10 != -4)) {
        thunk_FUN_004cf3e0(local_28,this_00->field_0018);
      }
      FUN_006e6780((void *)this_00->field_0211,
                   CONCAT22(CONCAT11(2,(char)((uint)this_00->field_0018 >> 0x10)),
                            *(undefined2 *)&this_00->field_0018));
      this_00->field_0826 = *(int *)((int)pSVar15 + 8);
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    pSVar19 = DAT_008117bc;
    if ((this_00->field_045D == CASE_4) && (this_00->field_0580 == CASE_5)) {
      sVar34 = this_00->field_0554;
      local_7c = (void *)CONCAT22((short)((uint)pvVar13 >> 0x10),sVar34);
      sVar4 = this_00->field_0558;
      sVar5 = this_00->field_0556;
      if ((sVar34 < 0) ||
         ((((SHORT_007fb240 <= sVar34 || (sVar5 < 0)) || (SHORT_007fb242 <= sVar5)) ||
          ((sVar4 < 0 || (SHORT_007fb244 <= sVar4)))))) {
        pSVar19 = (STWorldObject *)0x0;
        pvVar13 = local_7c;
      }
      else {
        pvVar13 = (void *)((int)SHORT_007fb246 * (int)sVar4 + (int)SHORT_007fb240 * (int)sVar5 +
                          (int)sVar34);
        pSVar19 = g_worldCells[(int)pvVar13].objects[0];
      }
      local_10 = pSVar19;
      if ((pSVar19 != (STWorldObject *)0x0) &&
         (pvVar13 = *(void **)&pSVar19->field_0x18, pvVar13 == (void *)this_00->field_055A)) {
        thunk_FUN_004e2200(pSVar19,this_00->field_0568,this_00->field_0018,this_00->field_0716);
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
    }
    if (*(int *)((int)pSVar15 + 8) == 0xff) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    local_10 = (STWorldObject *)
               STAllPlayersC::GetObjPtr
                         (g_sTAllPlayers_007FA174,
                          CONCAT31((int3)((uint)pSVar19 >> 8),(char)*(int *)((int)pSVar15 + 8)),
                          CONCAT22((short)((uint)pvVar13 >> 0x10),
                                   (short)*(int *)((int)pSVar15 + 0xc)),CASE_1);
    if (local_10 == (STWorldObject *)0x0) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    if (this_00->field_045D != CASE_3) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    thunk_FUN_004162f0(local_10,&local_16,&local_14,&local_12);
    uVar11 = (int)this_00->field_0047 - (int)local_16;
    uVar21 = (int)uVar11 >> 0x1f;
    if (6 < (int)((uVar11 ^ uVar21) - uVar21)) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    uVar11 = (int)this_00->field_0049 - (int)local_14;
    uVar21 = (int)uVar11 >> 0x1f;
    if (6 < (int)((uVar11 ^ uVar21) - uVar21)) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    uVar11 = (int)this_00->field_004B - (int)local_12;
    uVar21 = (int)uVar11 >> 0x1f;
    if (2 < (int)((uVar11 ^ uVar21) - uVar21)) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    _AddDefenceShots(this_00,(char)*(int *)((int)pSVar15 + 8),(short)*(int *)((int)pSVar15 + 0xc),
                     *(int *)pSVar15);
    g_currentExceptionFrame = local_184.previous;
    return 0;
  }
  if (SVar7 == MESS_SHARED_0003) {
    thunk_FUN_0041c5a0((AnonShape_0041C5A0_167218F4 *)this_00);
    thunk_FUN_0041d590((AnonShape_0041D590_1DB01C7A *)this_00);
    uVar12 = thunk_FUN_004167a0((AnonShape_004167A0_C6E28A87 *)this_00);
    pSVar15 = thunk_FUN_0042b760(CONCAT31((int3)((uint)uVar12 >> 8),this_00->field_0x24),
                                 CONCAT22(extraout_var_08,this_00->field_0030));
    if (pSVar15 != (STGroupBoatC *)0x0) {
      thunk_FUN_0040cdb0(pSVar15,(uint)(ushort)this_00->field_0032);
    }
    uVar12 = thunk_FUN_004ad310((STT3DSprC *)&this_00->field_01D5);
    uVar12 = thunk_FUN_00495ff0(this_00->field_005B,this_00->field_005D,this_00->field_005F,
                                CONCAT31((int3)((uint)uVar12 >> 8),this_00->field_008E),
                                (AnonShape_00495FF0_59081BDD *)this_00);
    STAllPlayersC::UnRegisterObject
              (g_sTAllPlayers_007FA174,
               CONCAT31((int3)((uint)this_00->field_0826 >> 8),this_00->field_0x24),
               CONCAT22((short)((uint)uVar12 >> 0x10),this_00->field_0030),
               CONCAT22(extraout_var_09,this_00->field_0032),(int *)this_00,this_00->field_0826);
    thunk_FUN_00489950((int)this_00);
    if ((byte *)this_00->field_047B != (byte *)0x0) {
      FUN_006ae110((byte *)this_00->field_047B);
      this_00->field_047B = 0;
    }
    if ((int *)this_00->field_0465 != (int *)0x0) {
      thunk_FUN_00635fd0((int *)this_00->field_0465);
      Library::MSVCRT::FUN_0072e2b0((HoloTy *)this_00->field_0465);
      this_00->field_0465 = 0;
    }
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x37a
              );
    pvVar13 = extraout_EAX;
    uVar11 = extraout_EDX_01;
LAB_0045048a:
    if ((this_00->field_004D == '\x01') && (this_00->field_0x5a == '\x01')) {
      uVar11 = (uint)PTR_00802a38->field_00E4 % 0x32;
      pvVar13 = (void *)((uint)PTR_00802a38->field_00E4 / 0x32);
      if (uVar11 == 7) {
        iVar10 = (int)this_00->field_0041 % 0xc9;
        local_78 = (void *)((int)this_00->field_0043 % 0xc9);
        pvVar13 = (void *)((int)this_00->field_0045 / 200);
        uVar11 = (int)this_00->field_0045 % 200;
        if ((((0x46 < iVar10) && (iVar10 < 0x82)) && (pvVar13 = local_78, 0x46 < (int)local_78)) &&
           ((((int)local_78 < 0x82 && (0x47 < (int)uVar11)) && ((int)uVar11 < 0x81)))) {
          this_00->field_0x5a = 0;
          this_00->field_004D = 0;
        }
      }
    }
    lVar31 = CONCAT44(uVar11,pvVar13);
    if (((*(int *)&this_00->field_0x7ee == 1) &&
        (lVar31 = (*this_00->vtable->vfunc_7C)(), (int)lVar31 < 0x1a)) ||
       (((*(int *)&this_00->field_0x7ee == 2 &&
         (lVar31 = (*this_00->vtable->vfunc_7C)(), (int)lVar31 < 0x33)) ||
        ((*(int *)&this_00->field_0x7ee == 3 &&
         (lVar31 = (*this_00->vtable->vfunc_7C)(), (int)lVar31 < 0x4c)))))) {
      iVar10 = thunk_FUN_004e8030(this_00->field_06F7);
      SVar8 = this_00->field_045D;
      lVar31 = CONCAT44(extraout_EDX_02,SVar8);
      if (iVar10 == 3) {
        if (SVar8 != CASE_16) {
          uVar11 = CheckPBoxCmd(this_00,CASE_16);
          lVar31 = CONCAT44(extraout_EDX_04,uVar11);
          if ((uVar11 == 0) &&
             (lVar31 = (ulonglong)(uint)((char)this_00->field_0x24 * 0xa62) << 0x20,
             g_playerRuntime[(char)this_00->field_0x24].field320_0x15f != 0)) {
            puVar14 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
            Library::DKW::TBL::FUN_006ae1c0(puVar14,(undefined4 *)&this_00->field_0032);
            STAllPlayersC::AddObjsToGroup
                      (g_sTAllPlayers_007FA174,
                       CONCAT31((int3)((uint)extraout_EDX_05 >> 8),this_00->field_0x24),0xfffe,
                       puVar14,(undefined2 *)&local_60);
            FUN_006ae110((byte *)puVar14);
            pSVar15 = thunk_FUN_0042b760(CONCAT31((int3)((uint)extraout_ECX_02 >> 8),
                                                  this_00->field_0x24),local_60);
            puVar16 = local_b4;
            local_b4[0] = 1;
            pSVar20 = pSVar15->vtable;
            orderType = CASE_11;
            goto LAB_00450695;
          }
        }
      }
      else {
        lVar31 = CONCAT44(extraout_EDX_02,SVar8);
        if (SVar8 != CASE_4) {
          uVar11 = CheckPBoxCmd(this_00,CASE_4);
          lVar31 = CONCAT44(extraout_EDX_03,uVar11);
          if ((uVar11 == 0) &&
             (lVar31 = CONCAT44(extraout_EDX_03,uVar11),
             g_playerRuntime[(char)this_00->field_0x24].field317_0x15b != 0)) {
            puVar14 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
            Library::DKW::TBL::FUN_006ae1c0(puVar14,(undefined4 *)&this_00->field_0032);
            STAllPlayersC::AddObjsToGroup
                      (g_sTAllPlayers_007FA174,
                       CONCAT31((int3)((uint)extraout_ECX_01 >> 8),this_00->field_0x24),0xfffe,
                       puVar14,(undefined2 *)&local_50);
            uVar12 = FUN_006ae110((byte *)puVar14);
            pSVar15 = thunk_FUN_0042b760(CONCAT31((int3)((uint)uVar12 >> 8),this_00->field_0x24),
                                         local_50);
            puVar16 = &local_a8;
            local_a8 = 1;
            local_a4 = 0;
            pSVar20 = pSVar15->vtable;
            orderType = CASE_4;
LAB_00450695:
            lVar31 = (*pSVar20->vfunc_08)(pSVar15,orderType,puVar16);
          }
        }
      }
    }
    local_1c = thunk_FUN_0042b760(CONCAT31((int3)((ulonglong)lVar31 >> 8),this_00->field_0x24),
                                  CONCAT22((short)((ulonglong)lVar31 >> 0x30),this_00->field_0030));
    uVar11 = this_00->field_07AA + 1;
    this_00->field_07AA = uVar11;
    switch(this_00->field_06F7) {
    case CASE_1:
    case CASE_A:
    case CASE_1E:
    case CASE_20:
    case CASE_22:
    case CASE_23:
    case CASE_28:
      if (*(int *)&this_00->field_0x7a2 < 1) {
        uVar11 = *(uint *)&this_00->field_0x79e;
        *(uint *)&this_00->field_0x7a2 = uVar11;
      }
      break;
    default:
      if (*(int *)&this_00->field_0x7a2 < 1) {
        iVar10 = thunk_FUN_004de410(*(void **)&this_00->field_0x24,this_00->field_079A,
                                    *(int *)&this_00->field_0x79e);
        *(int *)&this_00->field_0x7a2 = iVar10;
        uVar11 = extraout_EDX_07;
      }
      break;
    case CASE_F:
    case CASE_12:
    case CASE_16:
    case CASE_17:
    case CASE_27:
      iVar10 = *(int *)&this_00->field_0x7ae % *(int *)&this_00->field_0x7b2 +
               *(int *)&this_00->field_0x7b2 * *(int *)&this_00->field_0x7a2;
      *(int *)&this_00->field_0x7ae = iVar10;
      if (iVar10 < *(int *)&this_00->field_0x79e * *(int *)&this_00->field_0x7b2) {
        *(int *)&this_00->field_0x7ae = iVar10 + 1;
        iVar10 = (iVar10 + 1) / *(int *)&this_00->field_0x7b2;
        *(int *)&this_00->field_0x7a2 = iVar10;
        if ((this_00->field_06F7 != CASE_A) && (iVar10 == 0)) {
          iVar10 = thunk_FUN_004dfb90(*(uint *)&this_00->field_0x24,*(int *)&this_00->field_0x79e,
                                      *(int *)(&DAT_00793ff0 + this_00->field_079A * 4));
          iVar23 = *(int *)&this_00->field_0x7ae + iVar10 * *(int *)&this_00->field_0x7b2;
          *(int *)&this_00->field_0x7ae = iVar23;
          iVar10 = *(int *)&this_00->field_0x79e * *(int *)&this_00->field_0x7b2;
          if (iVar10 < iVar23) {
            *(int *)&this_00->field_0x7ae = iVar10;
          }
          *(int *)&this_00->field_0x7a2 =
               *(int *)&this_00->field_0x7ae / *(int *)&this_00->field_0x7b2;
        }
      }
      iVar10 = thunk_FUN_004e60d0(*(int *)&this_00->field_0x24,0x3a);
      uVar11 = extraout_EDX_06;
      if (0 < iVar10) {
        this_00->field_07AA = this_00->field_07AA + 1;
      }
    }
    if (((this_00->field_06F7 != CASE_B) && (*(int *)&this_00->field_0x7b6 != 0)) &&
       (*(int *)&this_00->field_0x7be == 0)) {
      iVar10 = thunk_FUN_004de410(*(void **)&this_00->field_0x24,*(int *)&this_00->field_0x7b6,
                                  *(int *)&this_00->field_0x7ba);
      *(int *)&this_00->field_0x7be = iVar10;
      uVar11 = extraout_EDX_08;
    }
    SVar32 = this_00->field_06F7;
    if ((((SVar32 == CASE_24) || (SVar32 == CASE_1B)) || (SVar32 == CASE_1D)) &&
       (((int)this_00->field_071E < 0x14 &&
        (uVar11 = (uint)PTR_00802a38->field_00E4 % 0x3c, uVar11 == 0)))) {
      this_00->field_071E = this_00->field_071E + 1;
    }
    if (((this_00->field_06F7 == CASE_17) && ((int)this_00->field_072A < 0x28)) &&
       (uVar11 = (uint)PTR_00802a38->field_00E4 % 0xf, uVar11 == 0)) {
      this_00->field_072A = this_00->field_072A + 1;
    }
    if (this_00->field_06F7 == CASE_23) {
      if (*(int *)&this_00->field_0x72e == 1) {
        uVar11 = (uint)PTR_00802a38->field_00E4 % 0x28;
        if ((uVar11 == 0) &&
           (iVar10 = this_00->field_0722 + -1, this_00->field_0722 = iVar10, iVar10 == 0)) {
          *(undefined4 *)&this_00->field_0x72e = 0;
          (*this_00->vtable->vfunc_90)(3,0x16d);
          uVar11 = extraout_EDX_09;
        }
      }
      else if (((int)this_00->field_0722 < 0x14) &&
              (uVar11 = (uint)PTR_00802a38->field_00E4 % 0xf0, uVar11 == 0)) {
        this_00->field_0722 = this_00->field_0722 + 1;
      }
    }
    SVar32 = this_00->field_06F7;
    if ((SVar32 == CASE_16) || (SVar32 == CASE_25)) {
      if (*(int *)&this_00->field_0x732 == 1) {
        if ((((SVar32 == CASE_16) && ((uint)PTR_00802a38->field_00E4 % 0x1e == 0)) ||
            ((SVar32 == CASE_25 && ((uint)PTR_00802a38->field_00E4 % 0x5a == 0)))) &&
           (iVar10 = this_00->field_0726 + -1, this_00->field_0726 = iVar10, iVar10 == 0)) {
          *(undefined4 *)&this_00->field_0x732 = 0;
          (*this_00->vtable->vfunc_90)(3,0x16d);
        }
        thunk_FUN_004945c0((AnonShape_004945C0_2B3B394D *)this_00);
        uVar11 = extraout_EDX_10;
      }
      else if ((SVar32 == CASE_16) &&
              (iVar10 = thunk_FUN_004e60d0(*(int *)&this_00->field_0x24,0x92),
              uVar11 = extraout_EDX_11, 0 < iVar10)) {
        iVar10 = this_00->field_0726;
        if (iVar10 < 0x28) {
          uVar11 = (uint)PTR_00802a38->field_00E4 % 0x2d;
joined_r0x00450a10:
          if (uVar11 == 0) {
            this_00->field_0726 = iVar10 + 1;
          }
        }
      }
      else {
        iVar10 = this_00->field_0726;
        if (iVar10 < 0x28) {
          uVar11 = (uint)PTR_00802a38->field_00E4 % 0x5a;
          goto joined_r0x00450a10;
        }
      }
    }
    iVar10 = *(int *)&this_00->field_0x736 + -1;
    *(int *)&this_00->field_0x736 = iVar10;
    if (iVar10 < 0) {
      *(undefined4 *)&this_00->field_0x736 = 0;
    }
    if (this_00->field_0716 == this_00->field_0712) {
      this_00->field_076E = 0xffffffff;
    }
    if ((-1 < (int)this_00->field_076E) &&
       ((this_00->field_045D != CASE_14 || (this_00->field_05C0 != 3)))) {
      uVar11 = (int)this_00->field_076E % 0x7d;
      if (uVar11 == 0) {
        puVar16 = &this_00->field_01D5;
        iVar10 = STT3DSprC::LoadSequence
                           ((STT3DSprC *)puVar16,0xb,DAT_00806774,s_forcef0_007aa008,0x1d);
        if (iVar10 != 0) {
          RaiseInternalException
                    (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,
                     0x41b);
        }
        thunk_FUN_004ad670(puVar16,'\x0e');
        thunk_FUN_004ad150(puVar16,'\v');
        thunk_FUN_004ac700(puVar16,'\v');
        STT3DSprC::StartShow((STT3DSprC *)puVar16,0xb,PTR_00802a38->field_00E4);
        local_104 = 0x65;
        local_9c.data = &local_108;
        local_108 = this_00->field_0776 * 5;
        local_100 = *(undefined4 *)&this_00->field_0x772;
        local_f4 = 1;
        local_9c.id = MESS_TORPHIT;
        (*this_00->vtable->GetMessage)(this_00,&local_9c);
        uVar11 = extraout_EDX_12;
      }
      this_00->field_076E = this_00->field_076E + 1;
    }
    if ((0 < *(int *)&this_00->field_0x782) &&
       (iVar10 = *(int *)&this_00->field_0x782 + -1, *(int *)&this_00->field_0x782 = iVar10,
       iVar10 == 0)) {
      *(undefined4 *)&this_00->field_0x786 = 0;
    }
    if (0 < (int)this_00->field_073A) {
      if ((void *)this_00->field_0465 == (void *)0x0) {
        puVar16 = thunk_FUN_00631fd0();
        this_00->field_0465 = puVar16;
        uVar11 = extraout_EDX_14;
        if (puVar16 != (undefined4 *)0x0) {
          thunk_FUN_006324c0(puVar16,CASE_0,this_00->field_06F7);
          uVar11 = extraout_EDX_15;
        }
      }
      else {
        thunk_FUN_00636060((void *)this_00->field_0465,(int)this_00->field_0041,
                           (int)this_00->field_0043,(int)this_00->field_0045,
                           (int)this_00->field_006C,100);
        uVar11 = extraout_EDX_13;
      }
      if (this_00->field_045D == CASE_3) {
        this_00->field_073A = this_00->field_073A + -1;
      }
      if (this_00->field_045D == CASE_14) {
        if (this_00->field_05C0 == 3) {
          if ((this_00->field_05A6 == 0) &&
             (iVar10 = FUN_006e62d0(PTR_00802a38,this_00->field_05A2,&this_00->field_05A6),
             iVar10 == -4)) {
            RaiseInternalException
                      (-4,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x43c)
            ;
          }
          uVar11 = *(uint *)(this_00->field_05A6 + 0x24);
          if (uVar11 != *(uint *)&this_00->field_0x24) goto LAB_00450c1e;
        }
        this_00->field_073A = this_00->field_073A + -1;
      }
LAB_00450c1e:
      if (this_00->field_073A == 0) {
        if ((int *)this_00->field_0465 != (int *)0x0) {
          thunk_FUN_00635fd0((int *)this_00->field_0465);
          Library::MSVCRT::FUN_0072e2b0((HoloTy *)this_00->field_0465);
          this_00->field_0465 = 0;
          uVar11 = extraout_EDX_16;
        }
        if (this_00->field_045D != CASE_3) {
          local_5c = PTR_00802a38->field_00E4;
          CmdToObj(this_00,CASE_3,&local_5c);
          uVar11 = extraout_EDX_17;
        }
      }
    }
    if (((*(int *)&this_00->field_0x70e == 0) &&
        (uVar11 = (uint)PTR_00802a38->field_00E4 % 3, uVar11 == 0)) &&
       (iVar10 = thunk_FUN_004e60d0(*(int *)&this_00->field_0x24,10), uVar11 = extraout_EDX_18,
       0 < iVar10)) {
      thunk_FUN_0041c6e0(this_00,(undefined *)this_00->field_070A);
      *(undefined4 *)&this_00->field_0x70e = 1;
      uVar11 = extraout_EDX_19;
    }
    if (*(int *)&this_00->field_0x2c0 == 1) {
      *(undefined4 *)&this_00->field_0x2c0 = 0;
      if (this_00->field_06F7 == CASE_9) {
        iVar10 = thunk_FUN_004accd0(&this_00->field_01D5,'\b');
        if ((iVar10 == 0) &&
           (iVar10 = STT3DSprC::LoadSequence
                               ((STT3DSprC *)&this_00->field_01D5,8,DAT_00806774,s_expdstrw_007a9f80
                                ,0x1d), iVar10 != 0)) {
          iVar10 = 0x45d;
LAB_00450e28:
          RaiseInternalException
                    (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,
                     iVar10);
        }
      }
      else if (this_00->field_06F7 == CASE_15) {
        iVar10 = STT3DSprC::LoadSequence
                           ((STT3DSprC *)&this_00->field_01D5,8,DAT_00806774,s_expdstrw_007a9f80,
                            0x1d);
        if (iVar10 != 0) {
          iVar10 = 0x462;
          goto LAB_00450e28;
        }
      }
      else {
        uVar11 = thunk_FUN_00492ab0((int)this_00);
        *(uint *)&this_00->field_0x82a = uVar11;
        if (6 < (int)uVar11) {
          *(undefined4 *)&this_00->field_0x82a = 0;
        }
        puVar16 = &this_00->field_01D5;
        STT3DSprC::LoadSequence
                  ((STT3DSprC *)puVar16,8,DAT_00806774,
                   s_expl_bt0_007a8ee0 + *(int *)&this_00->field_0x82a * 0x45,0x1d);
        STT3DSprC::LoadSequence
                  ((STT3DSprC *)puVar16,9,DAT_00806764,
                   s_expl_bbt0_007a8eef + *(int *)&this_00->field_0x82a * 0x45,0x1d);
        STT3DSprC::LoadSequence
                  ((STT3DSprC *)puVar16,10,DAT_00806774,
                   s_expmask3_007a8efe + *(int *)&this_00->field_0x82a * 0x45,0x1d);
        thunk_FUN_004ac700(puVar16,'\n');
        STT3DSprC::StartShow((STT3DSprC *)puVar16,10,PTR_00802a38->field_00E4);
        thunk_FUN_004acf20(puVar16,DAT_008032b8,0x10);
        thunk_FUN_004acfe0(puVar16,'\n');
      }
      STT3DSprC::StartShow((STT3DSprC *)&this_00->field_01D5,8,PTR_00802a38->field_00E4);
      this_00->field_0455 = 1;
      iVar10 = (*this_00->vtable->vfunc_2C)();
      thunk_FUN_004b7710(CONCAT31((int3)((uint)iVar10 >> 8),this_00->field_0x24),iVar10);
      uVar11 = (uint)*(byte *)(this_00->field_0010 + 0x112d);
      if (*(uint *)&this_00->field_0x24 == uVar11) {
        thunk_FUN_004d8b70((char)*(uint *)&this_00->field_0x24);
        uVar11 = extraout_EDX_20;
      }
    }
    if (this_00->field_0455 == 1) {
      (*this_00->vtable->vfunc_D8)();
      puVar16 = &this_00->field_01D5;
      local_c = thunk_FUN_004ac910(puVar16,'\b');
      if (local_c == 2) {
        STT3DSprC::StopShow((STT3DSprC *)puVar16,0xf);
        STT3DSprC::StopShow((STT3DSprC *)puVar16,0);
        STT3DSprC::StopShow((STT3DSprC *)puVar16,1);
        STT3DSprC::StopShow((STT3DSprC *)puVar16,2);
      }
      if (local_c == *(uint *)(&DAT_007a8f11 + *(int *)&this_00->field_0x82a * 0x45)) {
        STT3DSprC::StopShow((STT3DSprC *)puVar16,0xe);
        STT3DSprC::StopShow((STT3DSprC *)puVar16,0xd);
        STT3DSprC::StopShow((STT3DSprC *)puVar16,0xc);
        STT3DSprC::StopShow((STT3DSprC *)puVar16,0xb);
        if (this_00->field_06F7 == CASE_21) {
          uVar11 = local_c;
          uVar12 = thunk_FUN_004ad650((int)puVar16);
          SVar32 = this_00->field_06F7;
          sVar6 = this_00->field_006C;
          sVar5 = this_00->field_0045;
          sVar4 = this_00->field_0043;
          sVar34 = this_00->field_0041;
        }
        else {
          uVar11 = 0xffffffff;
          uVar12 = thunk_FUN_004ad650((int)puVar16);
          sVar6 = this_00->field_006C;
          sVar5 = this_00->field_0045;
          SVar32 = this_00->field_06F7;
          sVar4 = this_00->field_0043;
          sVar34 = this_00->field_0041;
        }
        thunk_FUN_0062b770((int)sVar34,(int)sVar4,(int)sVar5,SVar32,(int)this_00,(int)sVar6,uVar12,
                           uVar11);
        if ((int *)this_00->field_0465 != (int *)0x0) {
          thunk_FUN_00635fd0((int *)this_00->field_0465);
          Library::MSVCRT::FUN_0072e2b0((HoloTy *)this_00->field_0465);
          this_00->field_0465 = 0;
        }
      }
      if ((this_00->field_06F7 == CASE_21) && (local_c == 0x18)) {
        thunk_FUN_00637350((int)this_00->field_0041,(int)this_00->field_0043,
                           (int)this_00->field_0045,3,*(uint *)&this_00->field_0x24,
                           (short)this_00->field_0018,this_00->field_0032,0x21,200);
      }
      if (local_c == *(uint *)(&DAT_007a8f15 + *(int *)&this_00->field_0x82a * 0x45)) {
        thunk_FUN_004ad5e0((int)puVar16);
      }
      if (((local_c == *(uint *)(&DAT_007a8f19 + *(int *)&this_00->field_0x82a * 0x45)) &&
          (this_00->field_06F7 != CASE_9)) && (this_00->field_06F7 != CASE_15)) {
        STT3DSprC::StartShow((STT3DSprC *)puVar16,9,PTR_00802a38->field_00E4);
      }
      if (((*(int *)(&DAT_007a8f19 + *(int *)&this_00->field_0x82a * 0x45) < (int)local_c) &&
          (this_00->field_06F7 != CASE_9)) &&
         ((this_00->field_06F7 != CASE_15 &&
          (iVar10 = thunk_FUN_004ac910(puVar16,'\b'),
          iVar10 == *(int *)(&DAT_007a8f0d + *(int *)&this_00->field_0x82a * 0x45) + -1)))) {
        STT3DSprC::StopShow((STT3DSprC *)puVar16,8);
      }
      if ((local_c == *(uint *)(&DAT_007a8f21 + *(int *)&this_00->field_0x82a * 0x45)) &&
         (local_1c != (STGroupBoatC *)0x0)) {
        (*local_1c->vtable->vfunc_08)(local_1c,CASE_6A,&this_00->field_0032);
      }
      if ((this_00->field_06F7 == CASE_9) || (this_00->field_06F7 == CASE_15)) {
        if (local_c != 0x27) {
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        local_9c.id = MESS_SYSTEMCLASSTY_000A;
        local_9c.unknown_0c = 0;
        local_9c.unknown_08 = *(dword *)&PTR_00802a38->field_0x14;
        local_9c.data = *(void **)&this_00->field_0x8;
        SystemClassTy::PostMessage((SystemClassTy *)PTR_00802a38,&local_9c.unknown_00);
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = thunk_FUN_004ac910(puVar16,'\t');
      if (iVar10 != 0x14) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
LAB_0045ad7b:
      local_9c.id = MESS_SYSTEMCLASSTY_000A;
      local_9c.unknown_0c = 0;
      local_9c.unknown_08 = *(dword *)&PTR_00802a38->field_0x14;
      local_9c.data = *(void **)&this_00->field_0x8;
      SystemClassTy::PostMessage((SystemClassTy *)PTR_00802a38,&local_9c.unknown_00);
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    if (this_00->field_0459 != 0) {
      switch(this_00->field_0459) {
      case CASE_65:
        local_8 = sub_00460360(this_00);
        break;
      case CASE_66:
        local_8 = BackAttack(this_00,(int *)0x2,(int)unaff_EDI,(int)unaff_ESI);
        break;
      case CASE_67:
        local_8 = thunk_FUN_004620f0(this_00);
        break;
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
        local_8 = BackLoadRC(this_00,(int *)0x2);
        break;
      case CASE_71:
        local_8 = BackUnLoadRC(this_00,(int *)0x2);
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
      case CASE_75:
        local_8 = BackBuild(this_00,(int *)0x2,unaff_EDI,unaff_ESI);
        break;
      case CASE_76:
        local_8 = BackDismant(this_00,(int *)0x2,unaff_EDI,unaff_ESI);
        break;
      case CASE_77:
        local_8 = thunk_FUN_0046d400((int *)this_00,uVar11);
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
                  (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x4cb)
        ;
      }
      uVar11 = local_8;
      if (local_8 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x4cd)
        ;
      }
      if (uVar11 == 0) {
        this_00->field_0459 = 0;
      }
      if (this_00->field_0459 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
    }
    if (this_00->field_02C4 == 1) {
      uVar11 = 0;
      if (0 < (int)this_00->field_073A) {
        local_c = (uint)(this_00->field_02D4 == 1);
        local_78 = (void *)(uint)(this_00->field_0314 == 1);
        local_7c = (void *)(uint)(this_00->field_02F4 == 1);
        puVar16 = &this_00->field_02CC;
        for (iVar10 = 0x17; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar16 = 0;
          puVar16 = puVar16 + 1;
        }
        this_00->field_02C4 = 0;
        if (local_c == 1) {
          this_00->field_02D4 = 1;
        }
        if (local_78 == (void *)0x1) {
          this_00->field_0314 = 1;
        }
        if (local_7c == (void *)0x1) {
          this_00->field_02F4 = 1;
        }
        if (((local_c == 1) || (local_78 == (void *)0x1)) || (local_7c == (void *)0x1)) {
          this_00->field_02C4 = 1;
        }
      }
      if (this_00->field_0314 == 1) {
        puVar16 = &this_00->field_02CC;
        for (iVar10 = 0x17; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar16 = 0;
          puVar16 = puVar16 + 1;
        }
        this_00->field_0314 = 1;
        uVar11 = *(uint *)&this_00->field_0x3c4;
      }
      if ((this_00->field_045D == CASE_14) && (this_00->field_05C0 == 3)) {
        puVar16 = &this_00->field_02CC;
        for (iVar10 = 0x17; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar16 = 0;
          puVar16 = puVar16 + 1;
        }
        this_00->field_02C4 = 0;
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      if ((this_00->field_02CC == 1) && (uVar11 < *(uint *)&this_00->field_0x328)) {
        uVar11 = *(uint *)&this_00->field_0x328;
      }
      if ((this_00->field_02D0 == 1) && (uVar11 < *(uint *)&this_00->field_0x332)) {
        uVar11 = *(uint *)&this_00->field_0x332;
      }
      if ((this_00->field_02D4 == 1) && (uVar11 < *(uint *)&this_00->field_0x343)) {
        uVar11 = *(uint *)&this_00->field_0x343;
      }
      if ((this_00->field_02E0 == 1) && (uVar11 < *(uint *)&this_00->field_0x347)) {
        uVar11 = *(uint *)&this_00->field_0x347;
      }
      if ((this_00->field_02F8 == 1) && (uVar11 < *(uint *)&this_00->field_0x34f)) {
        uVar11 = *(uint *)&this_00->field_0x34f;
      }
      if ((this_00->field_030C == 1) && (uVar11 < *(uint *)&this_00->field_0x36f)) {
        uVar11 = *(uint *)&this_00->field_0x36f;
      }
      if ((this_00->field_02FC == 1) && (uVar11 < *(uint *)&this_00->field_0x392)) {
        uVar11 = *(uint *)&this_00->field_0x392;
      }
      if ((this_00->field_02D8 == 1) && (uVar11 < *(uint *)&this_00->field_0x39c)) {
        uVar11 = *(uint *)&this_00->field_0x39c;
      }
      if ((this_00->field_02DC == 1) && (uVar11 < (uint)this_00->field_03A6)) {
        uVar11 = this_00->field_03A6;
      }
      if ((this_00->field_0304 == 1) && (uVar11 < *(uint *)&this_00->field_0x3b6)) {
        uVar11 = *(uint *)&this_00->field_0x3b6;
      }
      if ((this_00->field_0314 == 1) && (uVar11 < *(uint *)&this_00->field_0x3c4)) {
        uVar11 = *(uint *)&this_00->field_0x3c4;
      }
      if ((this_00->field_0308 == 1) && (uVar11 < *(uint *)&this_00->field_0x3ca)) {
        uVar11 = *(uint *)&this_00->field_0x3ca;
      }
      if ((this_00->field_02E4 == 1) && (uVar11 < *(uint *)&this_00->field_0x3d4)) {
        uVar11 = *(uint *)&this_00->field_0x3d4;
      }
      if ((this_00->field_02F0 == 1) && (uVar11 < *(uint *)&this_00->field_0x3de)) {
        uVar11 = *(uint *)&this_00->field_0x3de;
      }
      if ((this_00->field_02EC == 1) && (uVar11 < *(uint *)&this_00->field_0x3e8)) {
        uVar11 = *(uint *)&this_00->field_0x3e8;
      }
      if ((this_00->field_031C == 1) && (uVar11 < *(uint *)&this_00->field_0x3f3)) {
        uVar11 = *(uint *)&this_00->field_0x3f3;
      }
      if ((this_00->field_0318 == 1) && (uVar11 < *(uint *)&this_00->field_0x401)) {
        uVar11 = *(uint *)&this_00->field_0x401;
      }
      if ((this_00->field_0320 == 1) && (uVar11 < *(uint *)&this_00->field_0x415)) {
        uVar11 = *(uint *)&this_00->field_0x415;
      }
      if ((this_00->field_02F4 == 1) && (uVar11 < *(uint *)&this_00->field_0x41f)) {
        uVar11 = *(uint *)&this_00->field_0x41f;
      }
      if ((this_00->field_0310 == 1) && (uVar11 < *(uint *)&this_00->field_0x429)) {
        uVar11 = *(uint *)&this_00->field_0x429;
      }
      if ((this_00->field_02E8 == 1) && (uVar11 < *(uint *)&this_00->field_0x437)) {
        uVar11 = *(uint *)&this_00->field_0x437;
      }
      if ((this_00->field_0300 == 1) && (uVar11 < *(uint *)&this_00->field_0x447)) {
        uVar11 = *(uint *)&this_00->field_0x447;
      }
      if ((this_00->field_02CC == 1) && (*(uint *)&this_00->field_0x328 < uVar11)) {
        this_00->field_02CC = 0;
      }
      if ((this_00->field_02D0 == 1) && (*(uint *)&this_00->field_0x332 < uVar11)) {
        this_00->field_02D0 = 0;
      }
      if ((this_00->field_02D4 == 1) && (*(uint *)&this_00->field_0x343 < uVar11)) {
        this_00->field_02D4 = 0;
      }
      if ((this_00->field_02E0 == 1) && (*(uint *)&this_00->field_0x347 < uVar11)) {
        this_00->field_02E0 = 0;
      }
      if ((this_00->field_02F8 == 1) && (*(uint *)&this_00->field_0x34f < uVar11)) {
        this_00->field_02F8 = 0;
      }
      if ((this_00->field_030C == 1) && (*(uint *)&this_00->field_0x36f < uVar11)) {
        this_00->field_030C = 0;
      }
      if ((this_00->field_02FC == 1) && (*(uint *)&this_00->field_0x392 < uVar11)) {
        this_00->field_02FC = 0;
      }
      if ((this_00->field_02D8 == 1) && (*(uint *)&this_00->field_0x39c < uVar11)) {
        this_00->field_02D8 = 0;
      }
      if ((this_00->field_02DC == 1) && ((uint)this_00->field_03A6 < uVar11)) {
        this_00->field_02DC = 0;
      }
      if ((this_00->field_0304 == 1) && (*(uint *)&this_00->field_0x3b6 < uVar11)) {
        this_00->field_0304 = 0;
      }
      if ((this_00->field_0314 == 1) && (*(uint *)&this_00->field_0x3c4 < uVar11)) {
        this_00->field_0314 = 0;
      }
      if ((this_00->field_0308 == 1) && (*(uint *)&this_00->field_0x3ca < uVar11)) {
        this_00->field_0308 = 0;
      }
      if ((this_00->field_02E4 == 1) && (*(uint *)&this_00->field_0x3d4 < uVar11)) {
        this_00->field_02E4 = 0;
      }
      if ((this_00->field_02F0 == 1) && (*(uint *)&this_00->field_0x3de < uVar11)) {
        this_00->field_02F0 = 0;
      }
      if ((this_00->field_02EC == 1) && (*(uint *)&this_00->field_0x3e8 < uVar11)) {
        this_00->field_02EC = 0;
      }
      if ((this_00->field_031C == 1) && (*(uint *)&this_00->field_0x3f3 < uVar11)) {
        this_00->field_031C = 0;
      }
      if ((this_00->field_0318 == 1) && (*(uint *)&this_00->field_0x401 < uVar11)) {
        this_00->field_0318 = 0;
      }
      if ((this_00->field_0320 == 1) && (*(uint *)&this_00->field_0x415 < uVar11)) {
        this_00->field_0320 = 0;
      }
      if ((this_00->field_02F4 == 1) && (*(uint *)&this_00->field_0x41f < uVar11)) {
        this_00->field_02F4 = 0;
      }
      if ((this_00->field_0310 == 1) && (*(uint *)&this_00->field_0x429 < uVar11)) {
        this_00->field_0310 = 0;
      }
      if ((this_00->field_02E8 == 1) && (*(uint *)&this_00->field_0x437 < uVar11)) {
        this_00->field_02E8 = 0;
      }
      if ((this_00->field_0300 == 1) && (*(uint *)&this_00->field_0x447 < uVar11)) {
        this_00->field_0300 = 0;
      }
      if (this_00->field_02D0 == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_2;
          iVar10 = thunk_FUN_00462180(this_00,0);
          local_8 = iVar10;
          if (iVar10 == -1) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,
                       0x532);
          }
          if (iVar10 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = CASE_3;
          iVar10 = Defence(this_00,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0x536;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          uVar11 = sub_00460360(this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x53e;
          local_8 = uVar11;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          uVar11 = BackAttack(this_00,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x549;
          local_8 = uVar11;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          uVar11 = thunk_FUN_004620f0(this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x544;
          local_8 = uVar11;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          uVar11 = BackToDok(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x567;
          local_8 = uVar11;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          uVar11 = thunk_FUN_004732d0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x56c;
          local_8 = uVar11;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          uVar11 = BackPatrol(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x54e;
          local_8 = uVar11;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          uVar11 = thunk_FUN_004769f0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x580;
          local_8 = uVar11;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          uVar11 = thunk_FUN_004803b0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x5a8;
          local_8 = uVar11;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          uVar11 = BackCapture(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x58a;
          local_8 = uVar11;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          uVar11 = thunk_FUN_00476cc0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x585;
          local_8 = uVar11;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          uVar11 = BackAnnih(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x59e;
          local_8 = uVar11;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          uVar11 = BackLoadRC(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x553;
          local_8 = uVar11;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          uVar11 = BackUnLoadRC(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x562;
          local_8 = uVar11;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          uVar11 = thunk_FUN_004805b0(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x5ad;
          local_8 = uVar11;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          uVar11 = BackLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x571;
          local_8 = uVar11;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          uVar11 = BackUnLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x57b;
          local_8 = uVar11;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          uVar11 = BackBuild(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x558;
          local_8 = uVar11;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          uVar11 = BackDismant(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x5a3;
          local_8 = uVar11;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          uVar11 = thunk_FUN_0046d400((int *)this_00,uVar11);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x55d;
          local_8 = uVar11;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          uVar11 = BackWaitLoad(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x576;
          local_8 = uVar11;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          uVar11 = BackTeleport(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x594;
          local_8 = uVar11;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          uVar11 = thunk_FUN_004795e0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x58f;
          local_8 = uVar11;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          uVar11 = BackBring(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x599;
          local_8 = uVar11;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_02F8 == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_C;
          iVar10 = LoadRC(this_00,(int *)0x0,unaff_EDI,(int)unaff_ESI);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0x5b9;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          uVar11 = sub_00460360(this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x5c0;
          local_8 = uVar11;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          uVar11 = BackAttack(this_00,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x5cb;
          local_8 = uVar11;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          uVar11 = thunk_FUN_004620f0(this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x5c6;
          local_8 = uVar11;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          uVar11 = BackToDok(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x5e9;
          local_8 = uVar11;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          uVar11 = thunk_FUN_004732d0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x5ee;
          local_8 = uVar11;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          uVar11 = BackPatrol(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x5d0;
          local_8 = uVar11;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          uVar11 = thunk_FUN_004769f0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x602;
          local_8 = uVar11;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          uVar11 = thunk_FUN_004803b0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x62a;
          local_8 = uVar11;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          uVar11 = BackCapture(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x60c;
          local_8 = uVar11;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          uVar11 = thunk_FUN_00476cc0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x607;
          local_8 = uVar11;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          uVar11 = BackAnnih(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x620;
          local_8 = uVar11;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          uVar11 = BackLoadRC(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x5d5;
          local_8 = uVar11;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          uVar11 = BackUnLoadRC(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x5e4;
          local_8 = uVar11;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          uVar11 = thunk_FUN_004805b0(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x62f;
          local_8 = uVar11;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          uVar11 = BackLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x5f3;
          local_8 = uVar11;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          uVar11 = BackUnLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x5fd;
          local_8 = uVar11;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          uVar11 = BackBuild(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x5da;
          local_8 = uVar11;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          uVar11 = BackDismant(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x625;
          local_8 = uVar11;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          uVar11 = thunk_FUN_0046d400((int *)this_00,uVar11);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x5df;
          local_8 = uVar11;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          uVar11 = BackWaitLoad(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x5f8;
          local_8 = uVar11;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          uVar11 = BackTeleport(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x616;
          local_8 = uVar11;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          uVar11 = thunk_FUN_004795e0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x611;
          local_8 = uVar11;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          uVar11 = BackBring(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x61b;
          local_8 = uVar11;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_02CC == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_1;
          iVar10 = thunk_FUN_004602e0(this_00,0);
          local_8 = iVar10;
          if (iVar10 == -1) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,
                       0x63b);
          }
          if (iVar10 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = CASE_3;
          iVar10 = Defence(this_00,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0x63f;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          uVar11 = sub_00460360(this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x647;
          local_8 = uVar11;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          uVar11 = BackAttack(this_00,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x652;
          local_8 = uVar11;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          uVar11 = thunk_FUN_004620f0(this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x64d;
          local_8 = uVar11;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          uVar11 = BackToDok(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x670;
          local_8 = uVar11;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          uVar11 = thunk_FUN_004732d0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x675;
          local_8 = uVar11;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          uVar11 = BackPatrol(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x657;
          local_8 = uVar11;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          uVar11 = thunk_FUN_004769f0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x689;
          local_8 = uVar11;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          uVar11 = thunk_FUN_004803b0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x6b1;
          local_8 = uVar11;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          uVar11 = BackCapture(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x693;
          local_8 = uVar11;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          uVar11 = thunk_FUN_00476cc0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x68e;
          local_8 = uVar11;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          uVar11 = BackAnnih(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x6a7;
          local_8 = uVar11;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          uVar11 = BackLoadRC(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x65c;
          local_8 = uVar11;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          uVar11 = BackUnLoadRC(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x66b;
          local_8 = uVar11;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          uVar11 = thunk_FUN_004805b0(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x6b6;
          local_8 = uVar11;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          uVar11 = BackLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x67a;
          local_8 = uVar11;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          uVar11 = BackUnLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x684;
          local_8 = uVar11;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          uVar11 = BackBuild(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x661;
          local_8 = uVar11;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          uVar11 = BackDismant(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x6ac;
          local_8 = uVar11;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          uVar11 = thunk_FUN_0046d400((int *)this_00,uVar11);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x666;
          local_8 = uVar11;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          uVar11 = BackWaitLoad(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x67f;
          local_8 = uVar11;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          uVar11 = BackTeleport(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x69d;
          local_8 = uVar11;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          uVar11 = thunk_FUN_004795e0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x698;
          local_8 = uVar11;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          uVar11 = BackBring(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x6a2;
          local_8 = uVar11;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_02E0 == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_6;
          iVar10 = thunk_FUN_004658d0(this_00,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0x6c2;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          uVar11 = sub_00460360(this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x6c9;
          local_8 = uVar11;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          uVar11 = BackAttack(this_00,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x6d4;
          local_8 = uVar11;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          uVar11 = thunk_FUN_004620f0(this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x6cf;
          local_8 = uVar11;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          uVar11 = BackToDok(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x6f2;
          local_8 = uVar11;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          uVar11 = thunk_FUN_004732d0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x6f7;
          local_8 = uVar11;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          uVar11 = BackPatrol(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x6d9;
          local_8 = uVar11;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          uVar11 = thunk_FUN_004769f0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x70b;
          local_8 = uVar11;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          uVar11 = thunk_FUN_004803b0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x733;
          local_8 = uVar11;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          uVar11 = BackCapture(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x715;
          local_8 = uVar11;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          uVar11 = thunk_FUN_00476cc0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x710;
          local_8 = uVar11;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          uVar11 = BackAnnih(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x729;
          local_8 = uVar11;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          uVar11 = BackLoadRC(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x6de;
          local_8 = uVar11;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          uVar11 = BackUnLoadRC(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x6ed;
          local_8 = uVar11;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          uVar11 = thunk_FUN_004805b0(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x738;
          local_8 = uVar11;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          uVar11 = BackLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x6fc;
          local_8 = uVar11;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          uVar11 = BackUnLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x706;
          local_8 = uVar11;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          uVar11 = BackBuild(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x6e3;
          local_8 = uVar11;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          uVar11 = BackDismant(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x72e;
          local_8 = uVar11;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          uVar11 = thunk_FUN_0046d400((int *)this_00,uVar11);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x6e8;
          local_8 = uVar11;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          uVar11 = BackWaitLoad(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x701;
          local_8 = uVar11;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          uVar11 = BackTeleport(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x71f;
          local_8 = uVar11;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          uVar11 = thunk_FUN_004795e0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x71a;
          local_8 = uVar11;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          uVar11 = BackBring(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x724;
          local_8 = uVar11;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_030C == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_11;
          iVar10 = Build(this_00,0);
          local_8 = iVar10;
          if (iVar10 == -1) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,
                       0x744);
          }
          if (iVar10 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = CASE_3;
          iVar10 = Defence(this_00,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0x748;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          uVar11 = sub_00460360(this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x750;
          local_8 = uVar11;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          uVar11 = BackAttack(this_00,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x75b;
          local_8 = uVar11;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          uVar11 = thunk_FUN_004620f0(this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x756;
          local_8 = uVar11;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          uVar11 = BackToDok(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x779;
          local_8 = uVar11;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          uVar11 = thunk_FUN_004732d0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x77e;
          local_8 = uVar11;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          uVar11 = BackPatrol(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x760;
          local_8 = uVar11;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          uVar11 = thunk_FUN_004769f0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x792;
          local_8 = uVar11;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          uVar11 = thunk_FUN_004803b0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x7ba;
          local_8 = uVar11;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          uVar11 = BackCapture(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x79c;
          local_8 = uVar11;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          uVar11 = thunk_FUN_00476cc0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x797;
          local_8 = uVar11;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          uVar11 = BackAnnih(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x7b0;
          local_8 = uVar11;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          uVar11 = BackLoadRC(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x765;
          local_8 = uVar11;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          uVar11 = BackUnLoadRC(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x774;
          local_8 = uVar11;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          uVar11 = thunk_FUN_004805b0(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x7bf;
          local_8 = uVar11;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          uVar11 = BackLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x783;
          local_8 = uVar11;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          uVar11 = BackUnLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x78d;
          local_8 = uVar11;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          uVar11 = BackBuild(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x76a;
          local_8 = uVar11;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          uVar11 = BackDismant(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x7b5;
          local_8 = uVar11;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          uVar11 = thunk_FUN_0046d400((int *)this_00,uVar11);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x76f;
          local_8 = uVar11;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          uVar11 = BackWaitLoad(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x788;
          local_8 = uVar11;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          uVar11 = BackTeleport(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x7a6;
          local_8 = uVar11;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          uVar11 = thunk_FUN_004795e0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x7a1;
          local_8 = uVar11;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          uVar11 = BackBring(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x7ab;
          local_8 = uVar11;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_02FC == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_D;
          iVar10 = UnLoadRC(this_00,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0x7cb;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          uVar11 = sub_00460360(this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x7d2;
          local_8 = uVar11;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          uVar11 = BackAttack(this_00,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x7dc;
          local_8 = uVar11;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          uVar11 = thunk_FUN_004620f0(this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x7d7;
          local_8 = uVar11;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          uVar11 = BackToDok(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x7fa;
          local_8 = uVar11;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          uVar11 = thunk_FUN_004732d0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x7ff;
          local_8 = uVar11;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          uVar11 = BackPatrol(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x7e1;
          local_8 = uVar11;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          uVar11 = thunk_FUN_004769f0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x813;
          local_8 = uVar11;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          uVar11 = thunk_FUN_004803b0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x83b;
          local_8 = uVar11;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          uVar11 = BackCapture(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x81d;
          local_8 = uVar11;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          uVar11 = thunk_FUN_00476cc0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x818;
          local_8 = uVar11;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          uVar11 = BackAnnih(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x831;
          local_8 = uVar11;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          uVar11 = BackLoadRC(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x7e6;
          local_8 = uVar11;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          uVar11 = BackUnLoadRC(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x7f5;
          local_8 = uVar11;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          uVar11 = thunk_FUN_004805b0(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x840;
          local_8 = uVar11;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          uVar11 = BackLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x804;
          local_8 = uVar11;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          uVar11 = BackUnLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x80e;
          local_8 = uVar11;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          uVar11 = BackBuild(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x7eb;
          local_8 = uVar11;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          uVar11 = BackDismant(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x836;
          local_8 = uVar11;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          uVar11 = thunk_FUN_0046d400((int *)this_00,uVar11);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x7f0;
          local_8 = uVar11;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          uVar11 = BackWaitLoad(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x809;
          local_8 = uVar11;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          uVar11 = BackTeleport(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x827;
          local_8 = uVar11;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          uVar11 = thunk_FUN_004795e0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x822;
          local_8 = uVar11;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          uVar11 = BackBring(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x82c;
          local_8 = uVar11;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_02D8 == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_4;
          iVar10 = ToDok(this_00,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0x84c;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          uVar11 = sub_00460360(this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x853;
          local_8 = uVar11;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          uVar11 = BackAttack(this_00,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x85d;
          local_8 = uVar11;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          uVar11 = thunk_FUN_004620f0(this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x858;
          local_8 = uVar11;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          uVar11 = BackToDok(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x87b;
          local_8 = uVar11;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          uVar11 = thunk_FUN_004732d0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x880;
          local_8 = uVar11;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          uVar11 = BackPatrol(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x862;
          local_8 = uVar11;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          uVar11 = thunk_FUN_004769f0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x894;
          local_8 = uVar11;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          uVar11 = thunk_FUN_004803b0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x8bc;
          local_8 = uVar11;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          uVar11 = BackCapture(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x89e;
          local_8 = uVar11;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          uVar11 = thunk_FUN_00476cc0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x899;
          local_8 = uVar11;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          uVar11 = BackAnnih(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x8b2;
          local_8 = uVar11;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          uVar11 = BackLoadRC(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x867;
          local_8 = uVar11;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          uVar11 = BackUnLoadRC(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x876;
          local_8 = uVar11;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          uVar11 = thunk_FUN_004805b0(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x8c1;
          local_8 = uVar11;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          uVar11 = BackLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x885;
          local_8 = uVar11;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          uVar11 = BackUnLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x88f;
          local_8 = uVar11;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          uVar11 = BackBuild(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x86c;
          local_8 = uVar11;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          uVar11 = BackDismant(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x8b7;
          local_8 = uVar11;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          uVar11 = thunk_FUN_0046d400((int *)this_00,uVar11);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x871;
          local_8 = uVar11;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          uVar11 = BackWaitLoad(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x88a;
          local_8 = uVar11;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          uVar11 = BackTeleport(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x8a8;
          local_8 = uVar11;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          uVar11 = thunk_FUN_004795e0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x8a3;
          local_8 = uVar11;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          uVar11 = BackBring(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x8ad;
          local_8 = uVar11;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_02DC == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_5;
          iVar10 = Guard(this_00,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0x8cd;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          uVar11 = sub_00460360(this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x8d4;
          local_8 = uVar11;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          uVar11 = BackAttack(this_00,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x8de;
          local_8 = uVar11;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          uVar11 = thunk_FUN_004620f0(this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x8d9;
          local_8 = uVar11;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          uVar11 = BackToDok(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x8fc;
          local_8 = uVar11;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          uVar11 = thunk_FUN_004732d0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x901;
          local_8 = uVar11;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          uVar11 = BackPatrol(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x8e3;
          local_8 = uVar11;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          uVar11 = thunk_FUN_004769f0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x915;
          local_8 = uVar11;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          uVar11 = thunk_FUN_004803b0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x93d;
          local_8 = uVar11;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          uVar11 = BackCapture(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x91f;
          local_8 = uVar11;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          uVar11 = thunk_FUN_00476cc0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x91a;
          local_8 = uVar11;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          uVar11 = BackAnnih(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x933;
          local_8 = uVar11;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          uVar11 = BackLoadRC(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x8e8;
          local_8 = uVar11;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          uVar11 = BackUnLoadRC(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x8f7;
          local_8 = uVar11;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          uVar11 = thunk_FUN_004805b0(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x942;
          local_8 = uVar11;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          uVar11 = BackLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x906;
          local_8 = uVar11;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          uVar11 = BackUnLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x910;
          local_8 = uVar11;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          uVar11 = BackBuild(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x8ed;
          local_8 = uVar11;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          uVar11 = BackDismant(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x938;
          local_8 = uVar11;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          uVar11 = thunk_FUN_0046d400((int *)this_00,uVar11);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x8f2;
          local_8 = uVar11;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          uVar11 = BackWaitLoad(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x90b;
          local_8 = uVar11;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          uVar11 = BackTeleport(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x929;
          local_8 = uVar11;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          uVar11 = thunk_FUN_004795e0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x924;
          local_8 = uVar11;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          uVar11 = BackBring(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x92e;
          local_8 = uVar11;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_0304 == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_F;
          iVar10 = LoadObj(this_00,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0x94e;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          uVar11 = sub_00460360(this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x955;
          local_8 = uVar11;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          uVar11 = BackAttack(this_00,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x95f;
          local_8 = uVar11;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          uVar11 = thunk_FUN_004620f0(this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x95a;
          local_8 = uVar11;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          uVar11 = BackToDok(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x97d;
          local_8 = uVar11;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          uVar11 = thunk_FUN_004732d0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x982;
          local_8 = uVar11;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          uVar11 = BackPatrol(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x964;
          local_8 = uVar11;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          uVar11 = thunk_FUN_004769f0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x996;
          local_8 = uVar11;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          uVar11 = thunk_FUN_004803b0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x9be;
          local_8 = uVar11;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          uVar11 = BackCapture(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x9a0;
          local_8 = uVar11;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          uVar11 = thunk_FUN_00476cc0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x99b;
          local_8 = uVar11;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          uVar11 = BackAnnih(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x9b4;
          local_8 = uVar11;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          uVar11 = BackLoadRC(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x969;
          local_8 = uVar11;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          uVar11 = BackUnLoadRC(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x978;
          local_8 = uVar11;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          uVar11 = thunk_FUN_004805b0(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x9c3;
          local_8 = uVar11;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          uVar11 = BackLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x987;
          local_8 = uVar11;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          uVar11 = BackUnLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x991;
          local_8 = uVar11;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          uVar11 = BackBuild(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x96e;
          local_8 = uVar11;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          uVar11 = BackDismant(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x9b9;
          local_8 = uVar11;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          uVar11 = thunk_FUN_0046d400((int *)this_00,uVar11);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x973;
          local_8 = uVar11;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          uVar11 = BackWaitLoad(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x98c;
          local_8 = uVar11;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          uVar11 = BackTeleport(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x9aa;
          local_8 = uVar11;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          uVar11 = thunk_FUN_004795e0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x9a5;
          local_8 = uVar11;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          uVar11 = BackBring(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x9af;
          local_8 = uVar11;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_0314 == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_14;
          iVar10 = WaitLoad(this_00,(STBoatC *)0x0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0x9cf;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          uVar11 = sub_00460360(this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x9d6;
          local_8 = uVar11;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          uVar11 = BackAttack(this_00,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x9e0;
          local_8 = uVar11;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          uVar11 = thunk_FUN_004620f0(this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x9db;
          local_8 = uVar11;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          uVar11 = BackToDok(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x9fe;
          local_8 = uVar11;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          uVar11 = thunk_FUN_004732d0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xa03;
          local_8 = uVar11;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          uVar11 = BackPatrol(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x9e5;
          local_8 = uVar11;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          uVar11 = thunk_FUN_004769f0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xa17;
          local_8 = uVar11;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          uVar11 = thunk_FUN_004803b0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xa3f;
          local_8 = uVar11;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          uVar11 = BackCapture(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xa21;
          local_8 = uVar11;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          uVar11 = thunk_FUN_00476cc0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xa1c;
          local_8 = uVar11;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          uVar11 = BackAnnih(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xa35;
          local_8 = uVar11;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          uVar11 = BackLoadRC(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x9ea;
          local_8 = uVar11;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          uVar11 = BackUnLoadRC(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x9f9;
          local_8 = uVar11;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          uVar11 = thunk_FUN_004805b0(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xa44;
          local_8 = uVar11;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          uVar11 = BackLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xa08;
          local_8 = uVar11;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          uVar11 = BackUnLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xa12;
          local_8 = uVar11;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          uVar11 = BackBuild(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x9ef;
          local_8 = uVar11;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          uVar11 = BackDismant(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xa3a;
          local_8 = uVar11;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          uVar11 = thunk_FUN_0046d400((int *)this_00,uVar11);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x9f4;
          local_8 = uVar11;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          uVar11 = BackWaitLoad(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xa0d;
          local_8 = uVar11;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          uVar11 = BackTeleport(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xa2b;
          local_8 = uVar11;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          uVar11 = thunk_FUN_004795e0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xa26;
          local_8 = uVar11;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          uVar11 = BackBring(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xa30;
          local_8 = uVar11;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_0308 == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_10;
          iVar10 = UnLoadObj(this_00,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0xa50;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          uVar11 = sub_00460360(this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xa57;
          local_8 = uVar11;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          uVar11 = BackAttack(this_00,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xa61;
          local_8 = uVar11;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          uVar11 = thunk_FUN_004620f0(this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xa5c;
          local_8 = uVar11;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          uVar11 = BackToDok(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xa7f;
          local_8 = uVar11;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          uVar11 = thunk_FUN_004732d0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xa84;
          local_8 = uVar11;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          uVar11 = BackPatrol(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xa66;
          local_8 = uVar11;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          uVar11 = thunk_FUN_004769f0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xa98;
          local_8 = uVar11;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          uVar11 = thunk_FUN_004803b0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xac0;
          local_8 = uVar11;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          uVar11 = BackCapture(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xaa2;
          local_8 = uVar11;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          uVar11 = thunk_FUN_00476cc0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xa9d;
          local_8 = uVar11;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          uVar11 = BackAnnih(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xab6;
          local_8 = uVar11;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          uVar11 = BackLoadRC(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xa6b;
          local_8 = uVar11;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          uVar11 = BackUnLoadRC(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xa7a;
          local_8 = uVar11;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          uVar11 = thunk_FUN_004805b0(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xac5;
          local_8 = uVar11;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          uVar11 = BackLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xa89;
          local_8 = uVar11;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          uVar11 = BackUnLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xa93;
          local_8 = uVar11;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          uVar11 = BackBuild(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xa70;
          local_8 = uVar11;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          uVar11 = BackDismant(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xabb;
          local_8 = uVar11;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          uVar11 = thunk_FUN_0046d400((int *)this_00,uVar11);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xa75;
          local_8 = uVar11;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          uVar11 = BackWaitLoad(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xa8e;
          local_8 = uVar11;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          uVar11 = BackTeleport(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xaac;
          local_8 = uVar11;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          uVar11 = thunk_FUN_004795e0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xaa7;
          local_8 = uVar11;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          uVar11 = BackBring(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xab1;
          local_8 = uVar11;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_02E4 == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_7;
          iVar10 = SetMine(this_00,(int *)0x0,unaff_EDI,(int)unaff_ESI);
          local_8 = iVar10;
          if (iVar10 == -1) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,
                       0xad1);
          }
          if (iVar10 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = CASE_3;
          iVar10 = Defence(this_00,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0xad5;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          uVar11 = sub_00460360(this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xadd;
          local_8 = uVar11;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          uVar11 = BackAttack(this_00,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xae8;
          local_8 = uVar11;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          uVar11 = thunk_FUN_004620f0(this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xae3;
          local_8 = uVar11;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          uVar11 = BackToDok(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xb06;
          local_8 = uVar11;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          uVar11 = thunk_FUN_004732d0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xb0b;
          local_8 = uVar11;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          uVar11 = BackPatrol(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xaed;
          local_8 = uVar11;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          uVar11 = thunk_FUN_004769f0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xb1f;
          local_8 = uVar11;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          uVar11 = thunk_FUN_004803b0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xb47;
          local_8 = uVar11;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          uVar11 = BackCapture(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xb29;
          local_8 = uVar11;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          uVar11 = thunk_FUN_00476cc0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xb24;
          local_8 = uVar11;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          uVar11 = BackAnnih(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xb3d;
          local_8 = uVar11;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          uVar11 = BackLoadRC(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xaf2;
          local_8 = uVar11;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          uVar11 = BackUnLoadRC(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xb01;
          local_8 = uVar11;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          uVar11 = thunk_FUN_004805b0(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xb4c;
          local_8 = uVar11;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          uVar11 = BackLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xb10;
          local_8 = uVar11;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          uVar11 = BackUnLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xb1a;
          local_8 = uVar11;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          uVar11 = BackBuild(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xaf7;
          local_8 = uVar11;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          uVar11 = BackDismant(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xb42;
          local_8 = uVar11;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          uVar11 = thunk_FUN_0046d400((int *)this_00,uVar11);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xafc;
          local_8 = uVar11;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          uVar11 = BackWaitLoad(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xb15;
          local_8 = uVar11;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          uVar11 = BackTeleport(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xb33;
          local_8 = uVar11;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          uVar11 = thunk_FUN_004795e0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xb2e;
          local_8 = uVar11;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          uVar11 = BackBring(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xb38;
          local_8 = uVar11;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_02F0 == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_A;
          iVar10 = DCBomb(this_00,0);
          local_8 = iVar10;
          if (iVar10 == -1) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,
                       0xb58);
          }
          if (iVar10 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = CASE_3;
          iVar10 = Defence(this_00,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0xb5c;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          uVar11 = sub_00460360(this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xb64;
          local_8 = uVar11;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          uVar11 = BackAttack(this_00,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xb6f;
          local_8 = uVar11;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          uVar11 = thunk_FUN_004620f0(this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xb6a;
          local_8 = uVar11;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          uVar11 = BackToDok(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xb8d;
          local_8 = uVar11;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          uVar11 = thunk_FUN_004732d0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xb92;
          local_8 = uVar11;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          uVar11 = BackPatrol(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xb74;
          local_8 = uVar11;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          uVar11 = thunk_FUN_004769f0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xba6;
          local_8 = uVar11;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          uVar11 = thunk_FUN_004803b0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xbce;
          local_8 = uVar11;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          uVar11 = BackCapture(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xbb0;
          local_8 = uVar11;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          uVar11 = thunk_FUN_00476cc0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xbab;
          local_8 = uVar11;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          uVar11 = BackAnnih(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xbc4;
          local_8 = uVar11;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          uVar11 = BackLoadRC(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xb79;
          local_8 = uVar11;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          uVar11 = BackUnLoadRC(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xb88;
          local_8 = uVar11;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          uVar11 = thunk_FUN_004805b0(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xbd3;
          local_8 = uVar11;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          uVar11 = BackLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xb97;
          local_8 = uVar11;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          uVar11 = BackUnLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xba1;
          local_8 = uVar11;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          uVar11 = BackBuild(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xb7e;
          local_8 = uVar11;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          uVar11 = BackDismant(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xbc9;
          local_8 = uVar11;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          uVar11 = thunk_FUN_0046d400((int *)this_00,uVar11);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xb83;
          local_8 = uVar11;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          uVar11 = BackWaitLoad(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xb9c;
          local_8 = uVar11;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          uVar11 = BackTeleport(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xbba;
          local_8 = uVar11;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          uVar11 = thunk_FUN_004795e0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xbb5;
          local_8 = uVar11;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          uVar11 = BackBring(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xbbf;
          local_8 = uVar11;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_02EC == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_9;
          iVar10 = Capture(this_00,0);
          local_8 = iVar10;
          if (iVar10 == -1) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,
                       0xbdf);
          }
          if (iVar10 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = CASE_3;
          iVar10 = Defence(this_00,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0xbe3;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          uVar11 = sub_00460360(this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xbeb;
          local_8 = uVar11;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          uVar11 = BackAttack(this_00,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xbf6;
          local_8 = uVar11;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          uVar11 = thunk_FUN_004620f0(this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xbf1;
          local_8 = uVar11;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          uVar11 = BackToDok(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xc14;
          local_8 = uVar11;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          uVar11 = thunk_FUN_004732d0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xc19;
          local_8 = uVar11;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          uVar11 = BackPatrol(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xbfb;
          local_8 = uVar11;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          uVar11 = thunk_FUN_004769f0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xc2d;
          local_8 = uVar11;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          uVar11 = thunk_FUN_004803b0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xc55;
          local_8 = uVar11;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          uVar11 = BackCapture(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xc37;
          local_8 = uVar11;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          uVar11 = thunk_FUN_00476cc0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xc32;
          local_8 = uVar11;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          uVar11 = BackAnnih(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xc4b;
          local_8 = uVar11;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          uVar11 = BackLoadRC(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xc00;
          local_8 = uVar11;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          uVar11 = BackUnLoadRC(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xc0f;
          local_8 = uVar11;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          uVar11 = thunk_FUN_004805b0(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xc5a;
          local_8 = uVar11;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          uVar11 = BackLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xc1e;
          local_8 = uVar11;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          uVar11 = BackUnLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xc28;
          local_8 = uVar11;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          uVar11 = BackBuild(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xc05;
          local_8 = uVar11;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          uVar11 = BackDismant(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xc50;
          local_8 = uVar11;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          uVar11 = thunk_FUN_0046d400((int *)this_00,uVar11);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xc0a;
          local_8 = uVar11;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          uVar11 = BackWaitLoad(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xc23;
          local_8 = uVar11;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          uVar11 = BackTeleport(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xc41;
          local_8 = uVar11;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          uVar11 = thunk_FUN_004795e0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xc3c;
          local_8 = uVar11;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          uVar11 = BackBring(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xc46;
          local_8 = uVar11;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_031C == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_16;
          iVar10 = Recharge(this_00,0);
          local_8 = iVar10;
          if (iVar10 == -1) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,
                       0xc66);
          }
          if (iVar10 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = CASE_3;
          iVar10 = Defence(this_00,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0xc6a;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          uVar11 = sub_00460360(this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xc72;
          local_8 = uVar11;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          uVar11 = BackAttack(this_00,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xc7d;
          local_8 = uVar11;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          uVar11 = thunk_FUN_004620f0(this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xc78;
          local_8 = uVar11;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          uVar11 = BackToDok(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xc9b;
          local_8 = uVar11;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          uVar11 = thunk_FUN_004732d0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xca0;
          local_8 = uVar11;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          uVar11 = BackPatrol(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xc82;
          local_8 = uVar11;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          uVar11 = thunk_FUN_004769f0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xcb4;
          local_8 = uVar11;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          uVar11 = thunk_FUN_004803b0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xcdc;
          local_8 = uVar11;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          uVar11 = BackCapture(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xcbe;
          local_8 = uVar11;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          uVar11 = thunk_FUN_00476cc0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xcb9;
          local_8 = uVar11;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          uVar11 = BackAnnih(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xcd2;
          local_8 = uVar11;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          uVar11 = BackLoadRC(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xc87;
          local_8 = uVar11;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          uVar11 = BackUnLoadRC(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xc96;
          local_8 = uVar11;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          uVar11 = thunk_FUN_004805b0(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xce1;
          local_8 = uVar11;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          uVar11 = BackLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xca5;
          local_8 = uVar11;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          uVar11 = BackUnLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xcaf;
          local_8 = uVar11;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          uVar11 = BackBuild(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xc8c;
          local_8 = uVar11;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          uVar11 = BackDismant(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xcd7;
          local_8 = uVar11;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          uVar11 = thunk_FUN_0046d400((int *)this_00,uVar11);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xc91;
          local_8 = uVar11;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          uVar11 = BackWaitLoad(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xcaa;
          local_8 = uVar11;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          uVar11 = BackTeleport(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xcc8;
          local_8 = uVar11;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          uVar11 = thunk_FUN_004795e0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xcc3;
          local_8 = uVar11;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          uVar11 = BackBring(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xccd;
          local_8 = uVar11;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_0318 == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_15;
          iVar10 = Teleport(this_00,0);
          local_8 = iVar10;
          if (iVar10 == -1) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,
                       0xced);
          }
          if (iVar10 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = CASE_3;
          iVar10 = Defence(this_00,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0xcf1;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          uVar11 = sub_00460360(this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xcf9;
          local_8 = uVar11;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          uVar11 = BackAttack(this_00,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xd04;
          local_8 = uVar11;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          uVar11 = thunk_FUN_004620f0(this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xcff;
          local_8 = uVar11;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          uVar11 = BackToDok(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xd22;
          local_8 = uVar11;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          uVar11 = thunk_FUN_004732d0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xd27;
          local_8 = uVar11;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          uVar11 = BackPatrol(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xd09;
          local_8 = uVar11;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          uVar11 = thunk_FUN_004769f0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xd3b;
          local_8 = uVar11;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          uVar11 = thunk_FUN_004803b0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xd63;
          local_8 = uVar11;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          uVar11 = BackCapture(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xd45;
          local_8 = uVar11;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          uVar11 = thunk_FUN_00476cc0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xd40;
          local_8 = uVar11;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          uVar11 = BackAnnih(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xd59;
          local_8 = uVar11;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          uVar11 = BackLoadRC(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xd0e;
          local_8 = uVar11;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          uVar11 = BackUnLoadRC(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xd1d;
          local_8 = uVar11;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          uVar11 = thunk_FUN_004805b0(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xd68;
          local_8 = uVar11;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          uVar11 = BackLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xd2c;
          local_8 = uVar11;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          uVar11 = BackUnLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xd36;
          local_8 = uVar11;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          uVar11 = BackBuild(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xd13;
          local_8 = uVar11;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          uVar11 = BackDismant(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xd5e;
          local_8 = uVar11;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          uVar11 = thunk_FUN_0046d400((int *)this_00,uVar11);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xd18;
          local_8 = uVar11;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          uVar11 = BackWaitLoad(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xd31;
          local_8 = uVar11;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          uVar11 = BackTeleport(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xd4f;
          local_8 = uVar11;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          uVar11 = thunk_FUN_004795e0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xd4a;
          local_8 = uVar11;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          uVar11 = BackBring(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xd54;
          local_8 = uVar11;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_0320 == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_17;
          iVar10 = Bring(this_00,(STBoatC *)0x0);
          local_8 = iVar10;
          if (iVar10 == -1) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,
                       0xd74);
          }
          if (iVar10 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = CASE_3;
          iVar10 = Defence(this_00,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0xd78;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          uVar11 = sub_00460360(this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xd80;
          local_8 = uVar11;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          uVar11 = BackAttack(this_00,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xd8b;
          local_8 = uVar11;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          uVar11 = thunk_FUN_004620f0(this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xd86;
          local_8 = uVar11;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          uVar11 = BackToDok(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xda9;
          local_8 = uVar11;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          uVar11 = thunk_FUN_004732d0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xdae;
          local_8 = uVar11;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          uVar11 = BackPatrol(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xd90;
          local_8 = uVar11;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          uVar11 = thunk_FUN_004769f0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xdc2;
          local_8 = uVar11;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          uVar11 = thunk_FUN_004803b0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xdea;
          local_8 = uVar11;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          uVar11 = BackCapture(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xdcc;
          local_8 = uVar11;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          uVar11 = thunk_FUN_00476cc0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xdc7;
          local_8 = uVar11;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          uVar11 = BackAnnih(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xde0;
          local_8 = uVar11;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          uVar11 = BackLoadRC(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xd95;
          local_8 = uVar11;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          uVar11 = BackUnLoadRC(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xda4;
          local_8 = uVar11;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          uVar11 = thunk_FUN_004805b0(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xdef;
          local_8 = uVar11;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          uVar11 = BackLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xdb3;
          local_8 = uVar11;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          uVar11 = BackUnLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xdbd;
          local_8 = uVar11;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          uVar11 = BackBuild(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xd9a;
          local_8 = uVar11;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          uVar11 = BackDismant(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xde5;
          local_8 = uVar11;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          uVar11 = thunk_FUN_0046d400((int *)this_00,uVar11);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xd9f;
          local_8 = uVar11;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          uVar11 = BackWaitLoad(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xdb8;
          local_8 = uVar11;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          uVar11 = BackTeleport(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xdd6;
          local_8 = uVar11;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          uVar11 = thunk_FUN_004795e0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xdd1;
          local_8 = uVar11;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          uVar11 = BackBring(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xddb;
          local_8 = uVar11;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_02F4 == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_B;
          iVar10 = Annih(this_00,(undefined4 *)0x0);
          local_8 = iVar10;
          if (iVar10 == -1) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,
                       0xdfb);
          }
          if (iVar10 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = CASE_3;
          iVar10 = Defence(this_00,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0xdff;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          uVar11 = sub_00460360(this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xe07;
          local_8 = uVar11;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          uVar11 = BackAttack(this_00,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xe12;
          local_8 = uVar11;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          uVar11 = thunk_FUN_004620f0(this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xe0d;
          local_8 = uVar11;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          uVar11 = BackToDok(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xe30;
          local_8 = uVar11;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          uVar11 = thunk_FUN_004732d0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xe35;
          local_8 = uVar11;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          uVar11 = BackPatrol(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xe17;
          local_8 = uVar11;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          uVar11 = thunk_FUN_004769f0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xe49;
          local_8 = uVar11;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          uVar11 = thunk_FUN_004803b0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xe71;
          local_8 = uVar11;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          uVar11 = BackCapture(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xe53;
          local_8 = uVar11;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          uVar11 = thunk_FUN_00476cc0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xe4e;
          local_8 = uVar11;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          uVar11 = BackAnnih(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xe67;
          local_8 = uVar11;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          uVar11 = BackLoadRC(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xe1c;
          local_8 = uVar11;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          uVar11 = BackUnLoadRC(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xe2b;
          local_8 = uVar11;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          uVar11 = thunk_FUN_004805b0(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xe76;
          local_8 = uVar11;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          uVar11 = BackLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xe3a;
          local_8 = uVar11;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          uVar11 = BackUnLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xe44;
          local_8 = uVar11;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          uVar11 = BackBuild(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xe21;
          local_8 = uVar11;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          uVar11 = BackDismant(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xe6c;
          local_8 = uVar11;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          uVar11 = thunk_FUN_0046d400((int *)this_00,uVar11);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xe26;
          local_8 = uVar11;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          uVar11 = BackWaitLoad(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xe3f;
          local_8 = uVar11;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          uVar11 = BackTeleport(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xe5d;
          local_8 = uVar11;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          uVar11 = thunk_FUN_004795e0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xe58;
          local_8 = uVar11;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          uVar11 = BackBring(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xe62;
          local_8 = uVar11;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_0310 == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_12;
          iVar10 = Dismant(this_00,(AnonShape_004B9D90_4F3151F9 *)0x0,unaff_EDI,unaff_ESI);
          local_8 = iVar10;
          if (iVar10 == -1) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,
                       0xe82);
          }
          if (iVar10 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = CASE_3;
          iVar10 = Defence(this_00,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0xe86;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          uVar11 = sub_00460360(this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xe8e;
          local_8 = uVar11;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          uVar11 = BackAttack(this_00,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xe99;
          local_8 = uVar11;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          uVar11 = thunk_FUN_004620f0(this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xe94;
          local_8 = uVar11;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          uVar11 = BackToDok(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xeb7;
          local_8 = uVar11;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          uVar11 = thunk_FUN_004732d0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xebc;
          local_8 = uVar11;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          uVar11 = BackPatrol(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xe9e;
          local_8 = uVar11;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          uVar11 = thunk_FUN_004769f0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xed0;
          local_8 = uVar11;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          uVar11 = thunk_FUN_004803b0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xef8;
          local_8 = uVar11;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          uVar11 = BackCapture(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xeda;
          local_8 = uVar11;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          uVar11 = thunk_FUN_00476cc0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xed5;
          local_8 = uVar11;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          uVar11 = BackAnnih(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xeee;
          local_8 = uVar11;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          uVar11 = BackLoadRC(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xea3;
          local_8 = uVar11;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          uVar11 = BackUnLoadRC(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xeb2;
          local_8 = uVar11;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          uVar11 = thunk_FUN_004805b0(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xefd;
          local_8 = uVar11;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          uVar11 = BackLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xec1;
          local_8 = uVar11;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          uVar11 = BackUnLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xecb;
          local_8 = uVar11;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          uVar11 = BackBuild(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xea8;
          local_8 = uVar11;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          uVar11 = BackDismant(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xef3;
          local_8 = uVar11;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          uVar11 = thunk_FUN_0046d400((int *)this_00,uVar11);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xead;
          local_8 = uVar11;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          uVar11 = BackWaitLoad(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xec6;
          local_8 = uVar11;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          uVar11 = BackTeleport(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xee4;
          local_8 = uVar11;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          uVar11 = thunk_FUN_004795e0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xedf;
          local_8 = uVar11;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          uVar11 = BackBring(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xee9;
          local_8 = uVar11;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_02E8 == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_8;
          iVar10 = Scout(this_00,0);
          local_8 = iVar10;
          if (iVar10 == -1) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,
                       0xf09);
          }
          if (iVar10 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = CASE_3;
          iVar10 = Defence(this_00,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0xf0d;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          uVar11 = sub_00460360(this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xf15;
          local_8 = uVar11;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          uVar11 = BackAttack(this_00,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xf20;
          local_8 = uVar11;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          uVar11 = thunk_FUN_004620f0(this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xf1b;
          local_8 = uVar11;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          uVar11 = BackToDok(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xf3e;
          local_8 = uVar11;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          uVar11 = thunk_FUN_004732d0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xf43;
          local_8 = uVar11;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          uVar11 = BackPatrol(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xf25;
          local_8 = uVar11;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          uVar11 = thunk_FUN_004769f0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xf57;
          local_8 = uVar11;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          uVar11 = thunk_FUN_004803b0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xf7f;
          local_8 = uVar11;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          uVar11 = BackCapture(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xf61;
          local_8 = uVar11;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          uVar11 = thunk_FUN_00476cc0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xf5c;
          local_8 = uVar11;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          uVar11 = BackAnnih(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xf75;
          local_8 = uVar11;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          uVar11 = BackLoadRC(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xf2a;
          local_8 = uVar11;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          uVar11 = BackUnLoadRC(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xf39;
          local_8 = uVar11;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          uVar11 = thunk_FUN_004805b0(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xf84;
          local_8 = uVar11;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          uVar11 = BackLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xf48;
          local_8 = uVar11;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          uVar11 = BackUnLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xf52;
          local_8 = uVar11;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          uVar11 = BackBuild(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xf2f;
          local_8 = uVar11;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          uVar11 = BackDismant(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xf7a;
          local_8 = uVar11;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          uVar11 = thunk_FUN_0046d400((int *)this_00,uVar11);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xf34;
          local_8 = uVar11;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          uVar11 = BackWaitLoad(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xf4d;
          local_8 = uVar11;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          uVar11 = BackTeleport(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xf6b;
          local_8 = uVar11;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          uVar11 = thunk_FUN_004795e0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xf66;
          local_8 = uVar11;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          uVar11 = BackBring(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xf70;
          local_8 = uVar11;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_0300 == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_E;
          iVar10 = thunk_FUN_004803d0(this_00,0);
          local_8 = iVar10;
          if (iVar10 == -1) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,
                       0xf90);
          }
          if (iVar10 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = CASE_3;
          iVar10 = Defence(this_00,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0xf94;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          uVar11 = sub_00460360(this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xf9c;
          local_8 = uVar11;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          uVar11 = BackAttack(this_00,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xfa7;
          local_8 = uVar11;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          uVar11 = thunk_FUN_004620f0(this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xfa2;
          local_8 = uVar11;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          uVar11 = BackToDok(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xfc5;
          local_8 = uVar11;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          uVar11 = thunk_FUN_004732d0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xfca;
          local_8 = uVar11;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          uVar11 = BackPatrol(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xfac;
          local_8 = uVar11;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          uVar11 = thunk_FUN_004769f0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xfde;
          local_8 = uVar11;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          uVar11 = thunk_FUN_004803b0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x1006;
          local_8 = uVar11;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          uVar11 = BackCapture(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xfe8;
          local_8 = uVar11;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          uVar11 = thunk_FUN_00476cc0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xfe3;
          local_8 = uVar11;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          uVar11 = BackAnnih(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xffc;
          local_8 = uVar11;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          uVar11 = BackLoadRC(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xfb1;
          local_8 = uVar11;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          uVar11 = BackUnLoadRC(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xfc0;
          local_8 = uVar11;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          uVar11 = thunk_FUN_004805b0(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x100b;
          local_8 = uVar11;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          uVar11 = BackLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xfcf;
          local_8 = uVar11;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          uVar11 = BackUnLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xfd9;
          local_8 = uVar11;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          uVar11 = BackBuild(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xfb6;
          local_8 = uVar11;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          uVar11 = BackDismant(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x1001;
          local_8 = uVar11;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          uVar11 = thunk_FUN_0046d400((int *)this_00,uVar11);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xfbb;
          local_8 = uVar11;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          uVar11 = BackWaitLoad(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xfd4;
          local_8 = uVar11;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          uVar11 = BackTeleport(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xff2;
          local_8 = uVar11;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          uVar11 = thunk_FUN_004795e0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xfed;
          local_8 = uVar11;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          uVar11 = BackBring(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0xff7;
          local_8 = uVar11;
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
          iVar10 = Defence(this_00,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0x1017;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          uVar11 = sub_00460360(this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x101e;
          local_8 = uVar11;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          uVar11 = BackAttack(this_00,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x1028;
          local_8 = uVar11;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          uVar11 = thunk_FUN_004620f0(this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x1023;
          local_8 = uVar11;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          uVar11 = BackToDok(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x1046;
          local_8 = uVar11;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          uVar11 = thunk_FUN_004732d0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x104b;
          local_8 = uVar11;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          uVar11 = BackPatrol(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x102d;
          local_8 = uVar11;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          uVar11 = thunk_FUN_004769f0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x105f;
          local_8 = uVar11;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          uVar11 = thunk_FUN_004803b0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x1082;
          local_8 = uVar11;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          uVar11 = BackCapture(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x1069;
          local_8 = uVar11;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          uVar11 = thunk_FUN_00476cc0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x1064;
          local_8 = uVar11;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          uVar11 = BackAnnih(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x107d;
          local_8 = uVar11;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          uVar11 = BackLoadRC(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x1032;
          local_8 = uVar11;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          uVar11 = BackUnLoadRC(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x1041;
          local_8 = uVar11;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          uVar11 = thunk_FUN_004805b0(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x1087;
          local_8 = uVar11;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          uVar11 = BackLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x1050;
          local_8 = uVar11;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          uVar11 = BackUnLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x105a;
          local_8 = uVar11;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          uVar11 = BackBuild(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x1037;
          local_8 = uVar11;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          uVar11 = thunk_FUN_0046d400((int *)this_00,uVar11);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x103c;
          local_8 = uVar11;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          uVar11 = BackWaitLoad(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x1055;
          local_8 = uVar11;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          uVar11 = BackTeleport(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x1073;
          local_8 = uVar11;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          uVar11 = thunk_FUN_004795e0((int *)this_00);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x106e;
          local_8 = uVar11;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          uVar11 = BackBring(this_00,(int *)0x0);
          if (uVar11 != -1) goto cf_common_exit_00458C5B;
          iVar10 = 0x1078;
          local_8 = uVar11;
        }
      }
      uVar11 = local_8;
      RaiseInternalException
                (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,iVar10);
cf_common_exit_00458C5B:
      if (uVar11 != 0) {
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
      iVar10 = thunk_FUN_004602e0(this_00,2);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1094
                  );
      }
      if (iVar10 == 0) {
        this_00->field_045D = CASE_3;
        iVar10 = Defence(this_00,0);
        if (iVar10 != -1) {
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        iVar10 = 0x1099;
        local_8 = -1;
      }
      else {
        if (iVar10 != 3) {
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        if (((*(int *)&this_00->field_0xb3 == 0) &&
            (uVar11 = this_00->field_00BB - (int)this_00->field_005B, uVar21 = (int)uVar11 >> 0x1f,
            (int)((uVar11 ^ uVar21) - uVar21) < 2)) &&
           (uVar11 = this_00->field_00BF - (int)this_00->field_005D, uVar21 = (int)uVar11 >> 0x1f,
           (int)((uVar11 ^ uVar21) - uVar21) < 2)) {
          uVar11 = this_00->field_00C3 - (int)this_00->field_005F;
          uVar21 = (int)uVar11 >> 0x1f;
          iVar10 = (uVar11 ^ uVar21) - uVar21;
          if ((iVar10 < 2) &&
             (uVar18 = (undefined2)((uint)iVar10 >> 0x10),
             iVar10 = (*this_00->vtable->vfunc_18)
                                (CONCAT22(uVar18,*(undefined2 *)&this_00->field_00BB),
                                 CONCAT22(this_00->field_005F >> 0xf,
                                          *(undefined2 *)&this_00->field_00BF),
                                 CONCAT22(uVar18,*(undefined2 *)&this_00->field_00C3)), iVar10 == 0)
             ) {
            this_00->field_045D = CASE_3;
            iVar10 = Defence(this_00,0);
            if (iVar10 != -1) {
              g_currentExceptionFrame = local_184.previous;
              return 0;
            }
            iVar10 = 0x10ad;
            local_8 = -1;
            break;
          }
        }
        iVar10 = thunk_FUN_0040ae40(local_1c,(uint)(ushort)this_00->field_0032,'\0');
        if (iVar10 != -4) {
          uVar11 = this_00->field_001C * 0x41c64e6d + 0x3039;
          this_00->field_001C = uVar11;
          *(short *)&this_00->field_0xf8 = (short)((ulonglong)(uVar11 >> 0x10) % 0x1f) + 0x1e;
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        this_00->field_045D = CASE_3;
        iVar10 = Defence(this_00,0);
        if (iVar10 != -1) {
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        iVar10 = 0x10b3;
        local_8 = -1;
      }
      break;
    case CASE_2:
      iVar10 = thunk_FUN_00462180(this_00,2);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x10be
                  );
      }
      if (iVar10 != 0) {
        if (iVar10 == 3) {
          thunk_FUN_0040ae40(local_1c,(uint)(ushort)this_00->field_0032,'\0');
          iVar10 = this_00->field_001C * 0x41c64e6d + 0x3039;
          this_00->field_001C = iVar10;
          *(ushort *)&this_00->field_0xf8 = ((ushort)((uint)iVar10 >> 0x10) & 0xf) + 0xf;
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        if (iVar10 == 4) {
          (*local_1c->vtable->vfunc_08)(local_1c,CASE_66,&this_00->field_0032);
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        if (iVar10 == 6) {
          (*local_1c->vtable->vfunc_08)(local_1c,CASE_68,&this_00->field_0032);
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        if (iVar10 != 7) {
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        (*local_1c->vtable->vfunc_08)(local_1c,CASE_69,&this_00->field_0032);
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      local_46 = this_00->field_07F2;
      local_48 = this_00->field_0032;
      this_00->field_0816 = 5;
      (*local_1c->vtable->vfunc_08)(local_1c,CASE_67,&local_48);
      this_00->field_07F2 = 0xffff;
      this_00->field_045D = CASE_3;
      iVar10 = Defence(this_00,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x10c8;
      local_8 = -1;
      break;
    case CASE_3:
      iVar10 = Defence(this_00,2);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x10bb;
      local_8 = -1;
      break;
    case CASE_4:
      iVar10 = ToDok(this_00,2);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x111a
                  );
      }
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      pAVar17 = thunk_FUN_004357f0(this_00->field_0x24);
      if (pAVar17 != (AiPlrClassTy *)0x0) {
        local_9c.id = MESS_AIPLRCLASSTY_5D94;
        local_9c.data = (void *)CONCAT22(this_00->field_0032,*(undefined2 *)&this_00->field_0x24);
        local_84 = this_00->field_0018;
        (*(code *)**(undefined4 **)pAVar17)(&local_9c);
      }
      this_00->field_045D = CASE_3;
      iVar10 = Defence(this_00,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x1127;
      local_8 = -1;
      break;
    case CASE_5:
      iVar10 = Guard(this_00,2);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x112c
                  );
      }
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      iVar10 = Defence(this_00,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x1131;
      local_8 = -1;
      break;
    case CASE_6:
      iVar10 = thunk_FUN_004658d0(this_00,2);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x10e8
                  );
      }
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      iVar10 = Defence(this_00,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x10ed;
      local_8 = -1;
      break;
    case CASE_7:
      iVar10 = SetMine(this_00,(int *)0x2,unaff_EDI,(int)unaff_ESI);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1154
                  );
      }
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      iVar10 = Defence(this_00,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x1159;
      local_8 = -1;
      break;
    case CASE_8:
      iVar10 = Scout(this_00,2);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x11ac
                  );
      }
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      iVar10 = Defence(this_00,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x11b1;
      local_8 = -1;
      break;
    case CASE_9:
      iVar10 = Capture(this_00,2);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1168
                  );
      }
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      iVar10 = Defence(this_00,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x116d;
      local_8 = -1;
      break;
    case CASE_A:
      iVar10 = DCBomb(this_00,2);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x115e
                  );
      }
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      iVar10 = Defence(this_00,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x1163;
      local_8 = -1;
      break;
    case CASE_B:
      iVar10 = Annih(this_00,(undefined4 *)0x2);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1198
                  );
      }
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      iVar10 = Defence(this_00,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x119d;
      local_8 = -1;
      break;
    case CASE_C:
      iVar10 = LoadRC(this_00,(int *)0x2,unaff_EDI,(int)unaff_ESI);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x10f2
                  );
      }
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      iVar10 = Defence(this_00,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x10f7;
      local_8 = -1;
      break;
    case CASE_D:
      iVar10 = UnLoadRC(this_00,2);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1110
                  );
      }
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      iVar10 = Defence(this_00,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x1115;
      local_8 = -1;
      break;
    case CASE_E:
      iVar10 = thunk_FUN_004803d0(this_00,2);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x11b6
                  );
      }
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      iVar10 = Defence(this_00,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x11bb;
      local_8 = -1;
      break;
    case CASE_F:
      iVar10 = LoadObj(this_00,2);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1136
                  );
      }
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      iVar10 = Defence(this_00,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x113b;
      local_8 = -1;
      break;
    case CASE_10:
      iVar10 = UnLoadObj(this_00,2);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x114a
                  );
      }
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      iVar10 = Defence(this_00,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x114f;
      local_8 = -1;
      break;
    case CASE_11:
      iVar10 = Build(this_00,2);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x10fc
                  );
      }
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      iVar10 = Defence(this_00,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x1101;
      local_8 = -1;
      break;
    case CASE_12:
      iVar10 = Dismant(this_00,(AnonShape_004B9D90_4F3151F9 *)0x2,unaff_EDI,unaff_ESI);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x11a2
                  );
      }
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      iVar10 = Defence(this_00,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x11a7;
      local_8 = -1;
      break;
    case CASE_13:
      uVar11 = CreateGame(this_00,(int *)0x2,unaff_EDI);
      local_8 = uVar11;
      if (uVar11 == 0xffffffff) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1106
                  );
      }
      if (uVar11 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      iVar10 = Defence(this_00,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x110b;
      local_8 = -1;
      break;
    case CASE_14:
      iVar10 = WaitLoad(this_00,(STBoatC *)0x2);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1140
                  );
      }
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      iVar10 = Defence(this_00,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x1145;
      local_8 = -1;
      break;
    case CASE_15:
      iVar10 = Teleport(this_00,2);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1184
                  );
      }
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      iVar10 = Defence(this_00,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x1189;
      local_8 = -1;
      break;
    case CASE_16:
      iVar10 = Recharge(this_00,2);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1172
                  );
      }
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      pAVar17 = thunk_FUN_004357f0(this_00->field_0x24);
      if (pAVar17 != (AiPlrClassTy *)0x0) {
        local_9c.id = MESS_AIPLRCLASSTY_5D94;
        local_9c.data = (void *)CONCAT22(this_00->field_0032,*(undefined2 *)&this_00->field_0x24);
        local_84 = this_00->field_0018;
        (*(code *)**(undefined4 **)pAVar17)(&local_9c);
      }
      this_00->field_045D = CASE_3;
      iVar10 = Defence(this_00,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x117f;
      local_8 = -1;
      break;
    case CASE_17:
      iVar10 = Bring(this_00,(STBoatC *)0x2);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x118e
                  );
      }
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      iVar10 = Defence(this_00,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x1193;
      local_8 = -1;
      break;
    default:
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
cf_error_exit_0045AEE3:
    RaiseInternalException
              (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,iVar10);
    g_currentExceptionFrame = local_184.previous;
    return 0;
  }
  pvVar13 = (void *)0x0;
  uVar11 = extraout_EDX;
  if (SVar7 == MESS_ID_NONE) goto LAB_0045048a;
  if (SVar7 != MESS_ID_CREATE) {
    g_currentExceptionFrame = local_184.previous;
    return 0;
  }
  local_1c = message->data;
  thunk_FUN_00417a00(this_00,0);
  if (local_1c->field_000C == 0) {
    pvVar13 = message->data;
    this_00->field_06F3 = *(STBoatC_field_06F3State *)((int)pvVar13 + 0x14);
    this_00->field_06F7 = *(STBoatC_field_06F7State *)((int)pvVar13 + 0x18);
    iVar10 = *(int *)((int)pvVar13 + 0x2a);
    if (iVar10 < 0) {
      this_00->field_07D6 = 0;
    }
    else if (iVar10 < 0x79) {
      this_00->field_07D6 = iVar10 / 3;
    }
    else {
      this_00->field_07D6 = 0x28;
    }
    iVar10 = *(int *)((int)pvVar13 + 0x2e);
    if (iVar10 < 0) {
      this_00->field_07DA = 0;
    }
    else if (iVar10 < 0x321) {
      this_00->field_07DA = iVar10 / 0x14;
    }
    else {
      this_00->field_07DA = 0x28;
    }
    iVar10 = this_00->field_07DA + this_00->field_07D6;
    if (0x28 < iVar10) {
      iVar10 = (this_00->field_07D6 * 0x28) / iVar10;
      this_00->field_07D6 = iVar10;
      this_00->field_07DA = 0x28 - iVar10;
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
    sVar34 = *(short *)((int)pvVar13 + 0x1c);
    local_c = CONCAT22((short)(this_00->field_06F7 - CASE_16 >> 0x10),sVar34);
    sVar4 = *(short *)((int)pvVar13 + 0x20);
    sVar5 = *(short *)((int)pvVar13 + 0x1e);
    if (((sVar34 < 0) || (SHORT_007fb240 <= sVar34)) ||
       ((sVar5 < 0 || (((SHORT_007fb242 <= sVar5 || (sVar4 < 0)) || (SHORT_007fb244 <= sVar4)))))) {
      local_10 = (STWorldObject *)0x0;
    }
    else {
      local_10 = g_worldCells
                 [(int)sVar4 * (int)SHORT_007fb246 + (int)sVar5 * (int)SHORT_007fb240 + (int)sVar34]
                 .objects[(byte)this_00->field_008E];
    }
    if (local_10 != (STWorldObject *)0x0) {
      iVar10 = (*local_10->vtable[5].slots_00_28[9])(this_00->field_06F7);
      if (iVar10 == 0) {
        iVar10 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x197,0,0,&DAT_007a4ccc,
                                    s_STBoatC__GetMessage_MESS_ID_CREA_007aa02c);
        if (iVar10 != 0) {
          pcVar9 = (code *)swi(3);
          iVar10 = (*pcVar9)();
          return iVar10;
        }
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x198)
        ;
      }
      (*local_10->vtable[5].slots_00_28[10])(this_00->field_0018);
      SVar32 = this_00->field_06F7;
      if (((SVar32 == CASE_7) || (SVar32 == CASE_13)) || (SVar32 == CASE_1B)) {
        this_00->field_07CA = *(undefined4 *)&local_10->field_0x18;
        FUN_006ea3e0((void *)this_00->field_0211,this_00->field_01ED,
                     *(int *)&local_10[0xd].field_0x19);
      }
    }
    this_00->field_06FB = *(undefined4 *)((int)pvVar13 + 0x36);
    this_00->field_06FF = *(undefined4 *)((int)pvVar13 + 0x3a);
    this_00->field_0703 = *(undefined4 *)((int)pvVar13 + 0x3e);
    this_00->field_0707 = *(undefined2 *)((int)pvVar13 + 0x42);
    this_00->field_0709 = *(undefined1 *)((int)pvVar13 + 0x44);
    this_00->field_073E = *(undefined4 *)((int)pvVar13 + 0x32);
    if (local_10 == (STWorldObject *)0x0) {
      this_00->field_0076 = 1;
      uVar11 = this_00->field_001C * 0x41c64e6d + 0x3039;
      this_00->field_001C = uVar11;
      this_00->field_006E = (short)((ulonglong)(uVar11 >> 0x10) % 0x30);
    }
    else {
      this_00->field_006E = *(undefined2 *)((int)&local_10[3].vtable + 2);
      SVar32 = this_00->field_06F7;
      if (((SVar32 == CASE_7) || (SVar32 == CASE_13)) || (SVar32 == CASE_1B)) {
        this_00->field_0076 = 1;
      }
      else {
        this_00->field_0076 = 0;
      }
    }
    thunk_FUN_00416390((AnonShape_00416390_86C8F938 *)this_00);
    this_00->field_00E3 = 0;
    _SetSpeedFireLife(this_00,unaff_EDI);
    iVar10 = *(int *)((int)pvVar13 + 0x26);
    if (iVar10 < 0) {
      this_00->field_0716 = 1;
    }
    else {
      if (iVar10 < 100) {
        iVar10 = (this_00->field_0712 * iVar10) / 100;
      }
      else {
        iVar10 = this_00->field_0712;
      }
      this_00->field_0716 = iVar10;
    }
    thunk_FUN_0048a910((AnonShape_0048A910_6D6DD7B1 *)this_00);
    thunk_FUN_0048a840((AnonShape_0048A840_34A87A21 *)this_00);
    if ((((local_10 == (STWorldObject *)0x0) || (SVar32 = this_00->field_06F7, SVar32 == CASE_7)) ||
        (SVar32 == CASE_13)) || (SVar32 == CASE_1B)) {
      thunk_FUN_00417a20(this_00,*(short *)((int)pvVar13 + 0x1c),*(short *)((int)pvVar13 + 0x1e),
                         *(short *)((int)pvVar13 + 0x20),1);
    }
    else {
      thunk_FUN_00417a20(this_00,*(short *)((int)pvVar13 + 0x1c),*(short *)((int)pvVar13 + 0x1e),
                         *(short *)((int)pvVar13 + 0x20),0);
      this_00->field_0041 = *(short *)&local_10[1].field_0x1d;
      this_00->field_0043 = *(short *)&local_10[1].field_0x1f;
      this_00->field_0045 = *(short *)((int)&local_10[1].value_20 + 1);
      this_00->field_004D = local_10[2].field_0x5;
    }
    if ((this_00->field_06F7 == CASE_9) || (this_00->field_06F7 == CASE_15)) {
      sVar34 = 8;
    }
    else {
      sVar34 = 0x18;
    }
    thunk_FUN_00417e70(this_00,sVar34);
    if (local_10 == (STWorldObject *)0x0) {
      iVar10 = this_00->field_001C * 0x41c64e6d + 0x3039;
      this_00->field_001C = iVar10;
      thunk_FUN_00417ee0(this_00,((ushort)((uint)iVar10 >> 0x10) & 7) * 0x2d);
      uVar18 = extraout_var_02;
      uVar22 = extraout_var_05;
    }
    else {
      this_00->field_006C = *(short *)&local_10[3].vtable;
      uVar18 = extraout_var_01;
      uVar22 = extraout_var_04;
    }
    STAllPlayersC::RegisterObject
              (g_sTAllPlayers_007FA174,
               CONCAT31((int3)((uint)*(int *)((int)pvVar13 + 0x49) >> 8),this_00->field_0x24),
               CONCAT22(uVar22,*(undefined2 *)((int)pvVar13 + 0x24)),
               CONCAT22(uVar18,*(undefined2 *)((int)pvVar13 + 0x22)),(int *)this_00,1,
               *(int *)((int)pvVar13 + 0x49));
    *(undefined4 *)&this_00->field_0x487 = 0xffffffff;
    this_00->field_048B = 0xffff;
    this_00->field_0814 = this_00->field_0816 * 0xc9;
    if (((local_10 == (STWorldObject *)0x0) || (SVar32 = this_00->field_06F7, SVar32 == CASE_7)) ||
       ((SVar32 == CASE_13 || (SVar32 == CASE_1B)))) {
      this_00->field_082E = 0xffffffff;
      this_00->field_0836 = 4;
      this_00->field_0475 = this_00->field_0047;
      this_00->field_0477 = this_00->field_0049;
      this_00->field_0479 = this_00->field_004B;
    }
    else {
      this_00->field_045D = CASE_14;
      this_00->field_07C2 = 1;
      (*this_00->vtable->vfunc_100)(this_00->field_01D1 | 0xd);
      this_00->field_05C0 = 3;
      this_00->field_05A0 = this_00->field_0030;
      this_00->field_05A2 = *(undefined4 *)&local_10->field_0x18;
      this_00->field_05A6 = 0;
      this_00->field_05C4 = 7;
    }
    uVar11 = this_00->field_001C * 0x41c64e6d + 0x3039;
    this_00->field_001C = uVar11;
    local_d4 = (uVar11 >> 0x10) % 0x13;
    iVar10 = (*this_00->vtable->vfunc_2C)();
    thunk_FUN_004b76d0(CONCAT31((int3)((uint)iVar10 >> 8),this_00->field_0x24),iVar10);
    if (*(uint *)&this_00->field_0x24 == (uint)*(byte *)(this_00->field_0010 + 0x112d)) {
      thunk_FUN_004d8b70((char)*(uint *)&this_00->field_0x24);
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
    thunk_FUN_0041c3f0(this_00,(undefined *)this_00->field_070A);
    uVar11 = this_00->field_001C * 0x41c64e6d + 0x3039;
    this_00->field_001C = uVar11;
    iVar10 = ((uVar11 >> 0x10) % 5) * 0x19;
    this_00->field_077E = iVar10 + -0xf;
    uVar11 = this_00->field_001C * 0x41c64e6d + 0x3039;
    this_00->field_001C = uVar11;
    this_00->field_077A = (uVar11 >> 0x10) % (iVar10 - 0xeU);
  }
  if (local_1c->field_000C == 1) {
    pvVar13 = message->data;
    this_00->field_06F3 = *(STBoatC_field_06F3State *)((int)pvVar13 + 0x14);
    this_00->field_06F7 = *(STBoatC_field_06F7State *)((int)pvVar13 + 0x18);
    this_00->field_06FB = *(undefined4 *)((int)pvVar13 + 0x32);
    this_00->field_06FF = *(undefined4 *)((int)pvVar13 + 0x36);
    this_00->field_0703 = *(undefined4 *)((int)pvVar13 + 0x3a);
    this_00->field_0707 = *(undefined2 *)((int)pvVar13 + 0x3e);
    this_00->field_0709 = *(undefined1 *)((int)pvVar13 + 0x40);
    this_00->field_081E = *(undefined4 *)((int)pvVar13 + 0x41);
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
    thunk_FUN_00416390((AnonShape_00416390_86C8F938 *)this_00);
    this_00->field_00E3 = 0;
    _SetSpeedFireLife(this_00,unaff_EDI);
    thunk_FUN_0048a910((AnonShape_0048A910_6D6DD7B1 *)this_00);
    uVar12 = thunk_FUN_0048a840((AnonShape_0048A840_34A87A21 *)this_00);
    thunk_FUN_00495ff0(*(short *)((int)pvVar13 + 0x1c),*(short *)((int)pvVar13 + 0x1e),
                       *(short *)((int)pvVar13 + 0x20),
                       CONCAT31((int3)((uint)uVar12 >> 8),this_00->field_008E),
                       (AnonShape_00495FF0_59081BDD *)this_00);
    this_00->field_0047 = *(short *)((int)pvVar13 + 0x1c);
    this_00->field_0041 = *(short *)((int)pvVar13 + 0x22);
    this_00->field_0049 = *(short *)((int)pvVar13 + 0x1e);
    this_00->field_0043 = *(short *)((int)pvVar13 + 0x24);
    sVar34 = *(short *)((int)pvVar13 + 0x20);
    this_00->field_004B = sVar34;
    this_00->field_0045 = *(short *)((int)pvVar13 + 0x26);
    DumpClassC::WritePtr
              (this_00->field_0047,this_00->field_0049,this_00->field_004B,
               CONCAT31((int3)(CONCAT22(extraout_var_06,sVar34) >> 8),this_00->field_008E),
               (AnonShape_00495EC0_95A268C6 *)this_00);
    if ((this_00->field_06F7 == CASE_9) || (this_00->field_06F7 == CASE_15)) {
      sVar34 = 8;
    }
    else {
      sVar34 = 0x18;
    }
    thunk_FUN_00417e70(this_00,sVar34);
    uVar12 = thunk_FUN_00417ee0(this_00,0x5a);
    uVar12 = STAllPlayersC::RegisterObject
                       (g_sTAllPlayers_007FA174,
                        CONCAT31((int3)((uint)extraout_ECX >> 8),this_00->field_0x24),
                        CONCAT22((short)((uint)uVar12 >> 0x10),*(undefined2 *)((int)pvVar13 + 0x2a))
                        ,0xffff,(int *)this_00,0,0);
    this_00->field_045D = CASE_13;
    this_00->field_0510 = *(undefined2 *)((int)pvVar13 + 0x1c);
    this_00->field_0512 = *(undefined2 *)((int)pvVar13 + 0x1e);
    this_00->field_0514 = *(undefined2 *)((int)pvVar13 + 0x20);
    this_00->field_0516 = *(undefined2 *)((int)pvVar13 + 0x22);
    this_00->field_0518 = *(undefined2 *)((int)pvVar13 + 0x24);
    this_00->field_051A = *(undefined2 *)((int)pvVar13 + 0x26);
    this_00->field_051C = *(undefined2 *)((int)pvVar13 + 0x2c);
    uVar18 = *(undefined2 *)((int)pvVar13 + 0x2e);
    this_00->field_051E = uVar18;
    this_00->field_0520 = *(undefined2 *)((int)pvVar13 + 0x30);
    local_10 = (STWorldObject *)
               STAllPlayersC::GetObjPtr
                         (g_sTAllPlayers_007FA174,
                          CONCAT31((int3)(CONCAT22((short)((uint)uVar12 >> 0x10),uVar18) >> 8),
                                   this_00->field_0x24),
                          CONCAT22(extraout_var_07,*(undefined2 *)((int)pvVar13 + 0x28)),CASE_1);
    if (local_10 == (STWorldObject *)0x0) {
      this_00->field_0524 = 0;
    }
    else {
      this_00->field_0524 = *(undefined4 *)&local_10->field_0x18;
    }
    this_00->field_0528 = 0;
    FUN_006ea460((void *)this_00->field_0211,this_00->field_01ED,*(int *)&local_10[0xd].field_0x19);
    local_d4 = DAT_008073fc * 5;
    iVar10 = (*this_00->vtable->vfunc_2C)();
    thunk_FUN_004b76d0(CONCAT31((int3)((uint)extraout_ECX_00 >> 8),this_00->field_0x24),iVar10);
    if (*(uint *)&this_00->field_0x24 == (uint)*(byte *)(this_00->field_0010 + 0x112d)) {
      thunk_FUN_004d8b70((char)*(uint *)&this_00->field_0x24);
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
    thunk_FUN_0041c3f0(this_00,(undefined *)this_00->field_070A);
    uVar11 = this_00->field_001C * 0x41c64e6d + 0x3039;
    this_00->field_001C = uVar11;
    iVar10 = ((uVar11 >> 0x10) % 5) * 0x19;
    this_00->field_077E = iVar10 + -0xf;
    uVar11 = this_00->field_001C * 0x41c64e6d + 0x3039;
    this_00->field_001C = uVar11;
    this_00->field_077A = (uVar11 >> 0x10) % (iVar10 - 0xeU);
    if (DAT_008117bc != (STWorldObject *)0x0) {
      local_9c.id = MESS_AIBOSSCLASSTY_5DD0;
      local_9c.data = (void *)CONCAT22(this_00->field_0032,*(undefined2 *)&this_00->field_0x24);
      local_84 = CONCAT22(*(undefined2 *)((int)pvVar13 + 0x28),*(undefined2 *)&this_00->field_0x24);
      (*DAT_008117bc->vtable->slots_00_28[0])(&local_9c);
    }
    switch(this_00->field_06F7) {
    case CASE_1:
      uVar12 = 200;
      break;
    case CASE_2:
      uVar12 = 0xce;
      break;
    case CASE_3:
      uVar12 = 0xd4;
      break;
    case CASE_4:
      uVar12 = 0xda;
      break;
    case CASE_5:
      uVar12 = 0xe0;
      break;
    case CASE_6:
      uVar12 = 0xe7;
      break;
    case CASE_7:
      uVar12 = 0xee;
      break;
    case CASE_8:
      uVar12 = 0xf5;
      break;
    case CASE_9:
      uVar12 = 0xfd;
      break;
    case CASE_A:
      uVar12 = 0x102;
      break;
    case CASE_B:
      uVar12 = 0x108;
      break;
    case CASE_C:
      uVar12 = 0x10e;
      break;
    case CASE_D:
      uVar12 = 300;
      break;
    case CASE_E:
      uVar12 = 0x132;
      break;
    case CASE_F:
      uVar12 = 0x138;
      break;
    case CASE_10:
      uVar12 = 0x13e;
      break;
    case CASE_11:
      uVar12 = 0x144;
      break;
    case CASE_12:
      uVar12 = 0x14b;
      break;
    case CASE_13:
      uVar12 = 0x152;
      break;
    case CASE_14:
      uVar12 = 0x159;
      break;
    case CASE_15:
      uVar12 = 0x161;
      break;
    case CASE_16:
      uVar12 = 0x166;
      break;
    case CASE_17:
      uVar12 = 0x16e;
      break;
    case CASE_18:
      uVar12 = 0x174;
      break;
    case CASE_19:
      uVar12 = 400;
      break;
    case CASE_1A:
      uVar12 = 0x198;
      break;
    case CASE_1B:
      uVar12 = 0x1a0;
      break;
    case CASE_1C:
      uVar12 = 0x1a6;
      break;
    case CASE_1D:
      uVar12 = 0x1ac;
      break;
    case CASE_1E:
      uVar12 = 0x1b3;
      break;
    case CASE_1F:
      uVar12 = 0x1b9;
      break;
    case CASE_20:
      uVar12 = 0x1bf;
      break;
    case CASE_21:
      uVar12 = 0x1c5;
      break;
    case CASE_22:
      uVar12 = 0x1cc;
      break;
    case CASE_23:
      uVar12 = 0x1d3;
      break;
    case CASE_24:
      uVar12 = 0x1d9;
      break;
    case CASE_25:
      uVar12 = 0x17a;
      break;
    case CASE_26:
      uVar12 = 0x114;
      break;
    case CASE_27:
      uVar12 = 0x180;
      break;
    case CASE_28:
      uVar12 = 0x1df;
      break;
    default:
      uVar12 = 0;
    }
    (*this_00->vtable->vfunc_90)(4,uVar12);
  }
  if (local_1c->field_000C == 2) {
    pvVar13 = message->data;
    local_d0 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(0x44);
    do {
      *(int **)(iVar23 + (int)local_d0) = DAT_0080677c;
      iVar23 = iVar23 + 4;
    } while (iVar23 < 0x44);
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
               (AnonShape_004ADBA0_E7CEFF88 *)(*(int *)((int)pvVar13 + 0x5f6) + (int)pvVar13));
    FUN_006ab060(&local_d0);
    STAllPlayersC::RestoreGObjData
              ((STAllPlayersC *)this_00,
               (undefined4 *)(*(int *)((int)pvVar13 + 0x5fe) + (int)pvVar13));
    RestoreBoatData(this_00,(int)pvVar13);
    this_00->field_05A6 = 0;
    STAllPlayersC::RegisterObject
              (g_sTAllPlayers_007FA174,
               CONCAT31((int3)((uint)extraout_EDX_00 >> 8),this_00->field_0x24),
               CONCAT22(extraout_var_03,this_00->field_0030),
               CONCAT22(extraout_var,this_00->field_0032),(int *)this_00,1,0);
    if ((this_00->field_045D != CASE_14) || (this_00->field_05C0 != 3)) {
      DumpClassC::WritePtr
                (this_00->field_005B,this_00->field_005D,this_00->field_005F,0,
                 (AnonShape_00495EC0_95A268C6 *)this_00);
    }
    thunk_FUN_0048a910((AnonShape_0048A910_6D6DD7B1 *)this_00);
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2a6
              );
  }
  local_74[0] = '\0';
  local_e8[0] = '\0';
  switch(this_00->field_06F7) {
  case CASE_1:
    pcVar27 = local_74;
    pcVar26 = &DAT_007a9e8c;
    break;
  case CASE_2:
    pcVar27 = local_74;
    pcVar26 = &DAT_007a9e84;
    break;
  case CASE_3:
    pcVar27 = local_74;
    pcVar26 = &DAT_007a9e7c;
    break;
  case CASE_4:
    pcVar27 = local_74;
    pcVar26 = &DAT_007a9e74;
    break;
  case CASE_5:
    pcVar27 = local_74;
    pcVar26 = &DAT_007a9e6c;
    break;
  case CASE_6:
    pcVar27 = local_74;
    pcVar26 = &DAT_007a9e64;
    break;
  case CASE_7:
    pcVar27 = local_74;
    pcVar26 = &DAT_007a9e5c;
    break;
  case CASE_8:
    pcVar27 = local_74;
    pcVar26 = &DAT_007a9e54;
    break;
  case CASE_9:
    pcVar27 = local_74;
    pcVar26 = &DAT_007a9e50;
    break;
  case CASE_A:
    pcVar27 = local_74;
    pcVar26 = &DAT_007a9e48;
    break;
  case CASE_B:
    uVar11 = 0xffffffff;
    pcVar27 = &DAT_007a9e40;
    do {
      pcVar26 = pcVar27;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar26 = pcVar27 + 1;
      cVar1 = *pcVar27;
      pcVar27 = pcVar26;
    } while (cVar1 != '\0');
    uVar11 = ~uVar11;
    iVar10 = -1;
    pcVar27 = local_74;
    do {
      pcVar25 = pcVar27;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar25 = pcVar27 + 1;
      cVar1 = *pcVar27;
      pcVar27 = pcVar25;
    } while (cVar1 != '\0');
    pcVar26 = pcVar26 + -uVar11;
    pcVar25 = pcVar25 + -1;
    for (uVar21 = uVar11 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
      *(undefined4 *)pcVar25 = *(undefined4 *)pcVar26;
      pcVar26 = pcVar26 + 4;
      pcVar25 = pcVar25 + 4;
    }
    pcVar27 = local_e8;
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pcVar25 = *pcVar26;
      pcVar26 = pcVar26 + 1;
      pcVar25 = pcVar25 + 1;
    }
    pcVar26 = &DAT_007a9e94;
    break;
  case CASE_C:
    pcVar27 = local_74;
    pcVar26 = &DAT_007a9e38;
    break;
  case CASE_D:
    pcVar27 = local_74;
    pcVar26 = &DAT_007a9e30;
    break;
  case CASE_E:
    pcVar27 = local_74;
    pcVar26 = &DAT_007a9e28;
    break;
  case CASE_F:
    pcVar27 = local_74;
    pcVar26 = &DAT_007a9e20;
    break;
  case CASE_10:
    pcVar27 = local_74;
    pcVar26 = &DAT_007a9e18;
    break;
  case CASE_11:
    pcVar27 = local_74;
    pcVar26 = &DAT_007a9e10;
    break;
  case CASE_12:
    pcVar27 = local_74;
    pcVar26 = &DAT_007a9e08;
    break;
  case CASE_13:
    pcVar27 = local_74;
    pcVar26 = &DAT_007a9e00;
    break;
  case CASE_14:
    pcVar27 = local_74;
    pcVar26 = &DAT_007a9df8;
    break;
  case CASE_15:
    pcVar27 = local_74;
    pcVar26 = &DAT_007a9df4;
    break;
  case CASE_16:
    uVar11 = 0xffffffff;
    pcVar27 = &DAT_007a9dec;
    do {
      pcVar26 = pcVar27;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar26 = pcVar27 + 1;
      cVar1 = *pcVar27;
      pcVar27 = pcVar26;
    } while (cVar1 != '\0');
    uVar11 = ~uVar11;
    iVar10 = -1;
    pcVar27 = local_74;
    do {
      pcVar25 = pcVar27;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar25 = pcVar27 + 1;
      cVar1 = *pcVar27;
      pcVar27 = pcVar25;
    } while (cVar1 != '\0');
    pcVar26 = pcVar26 + -uVar11;
    pcVar25 = pcVar25 + -1;
    for (uVar21 = uVar11 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
      *(undefined4 *)pcVar25 = *(undefined4 *)pcVar26;
      pcVar26 = pcVar26 + 4;
      pcVar25 = pcVar25 + 4;
    }
    pcVar27 = local_e8;
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pcVar25 = *pcVar26;
      pcVar26 = pcVar26 + 1;
      pcVar25 = pcVar25 + 1;
    }
    pcVar26 = &DAT_007a9e9c;
    break;
  case CASE_17:
    pcVar27 = local_74;
    pcVar26 = &DAT_007a9de4;
    break;
  case CASE_18:
    pcVar27 = local_74;
    pcVar26 = &DAT_007a9ddc;
    break;
  case CASE_19:
    pcVar27 = local_74;
    pcVar26 = &DAT_007a9dd8;
    break;
  case CASE_1A:
    pcVar27 = local_74;
    pcVar26 = &DAT_007a9dd4;
    break;
  case CASE_1B:
    pcVar27 = local_74;
    pcVar26 = &DAT_007a9dd0;
    break;
  case CASE_1C:
    pcVar27 = local_74;
    pcVar26 = &DAT_007a9dcc;
    break;
  case CASE_1D:
    pcVar27 = local_74;
    pcVar26 = &DAT_007a9dc8;
    break;
  case CASE_1E:
    pcVar27 = local_74;
    pcVar26 = &DAT_007a9dc4;
    break;
  case CASE_1F:
    pcVar27 = local_74;
    pcVar26 = &DAT_007a9dc0;
    break;
  case CASE_20:
    pcVar27 = local_74;
    pcVar26 = &DAT_007a9dbc;
    break;
  case CASE_21:
    pcVar27 = local_74;
    pcVar26 = &DAT_007a9db8;
    break;
  case CASE_22:
    pcVar27 = local_74;
    pcVar26 = &DAT_007a9db4;
    break;
  case CASE_23:
    uVar11 = 0xffffffff;
    pcVar27 = &DAT_007a9db0;
    do {
      pcVar26 = pcVar27;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar26 = pcVar27 + 1;
      cVar1 = *pcVar27;
      pcVar27 = pcVar26;
    } while (cVar1 != '\0');
    uVar11 = ~uVar11;
    iVar10 = -1;
    pcVar27 = local_74;
    do {
      pcVar25 = pcVar27;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar25 = pcVar27 + 1;
      cVar1 = *pcVar27;
      pcVar27 = pcVar25;
    } while (cVar1 != '\0');
    pcVar26 = pcVar26 + -uVar11;
    pcVar25 = pcVar25 + -1;
    for (uVar21 = uVar11 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
      *(undefined4 *)pcVar25 = *(undefined4 *)pcVar26;
      pcVar26 = pcVar26 + 4;
      pcVar25 = pcVar25 + 4;
    }
    pcVar27 = local_e8;
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pcVar25 = *pcVar26;
      pcVar26 = pcVar26 + 1;
      pcVar25 = pcVar25 + 1;
    }
    pcVar26 = &DAT_007a9ea4;
    break;
  case CASE_24:
    pcVar27 = local_74;
    pcVar26 = &DAT_007a9dac;
    break;
  case CASE_25:
    pcVar27 = local_74;
    pcVar26 = &DAT_007a9da4;
    break;
  case CASE_26:
    pcVar27 = local_74;
    pcVar26 = &DAT_007a9d9c;
    break;
  case CASE_27:
    pcVar27 = local_74;
    pcVar26 = &DAT_007a9d94;
    break;
  case CASE_28:
    pcVar27 = local_74;
    pcVar26 = &DAT_007a9d8c;
    break;
  default:
    goto switchD_0044fb10_default;
  }
  uVar11 = 0xffffffff;
  do {
    pcVar25 = pcVar26;
    if (uVar11 == 0) break;
    uVar11 = uVar11 - 1;
    pcVar25 = pcVar26 + 1;
    cVar1 = *pcVar26;
    pcVar26 = pcVar25;
  } while (cVar1 != '\0');
  uVar11 = ~uVar11;
  iVar10 = -1;
  do {
    pcVar26 = pcVar27;
    if (iVar10 == 0) break;
    iVar10 = iVar10 + -1;
    pcVar26 = pcVar27 + 1;
    cVar1 = *pcVar27;
    pcVar27 = pcVar26;
  } while (cVar1 != '\0');
  pcVar27 = pcVar25 + -uVar11;
  pcVar26 = pcVar26 + -1;
  for (uVar21 = uVar11 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
    *(undefined4 *)pcVar26 = *(undefined4 *)pcVar27;
    pcVar27 = pcVar27 + 4;
    pcVar26 = pcVar26 + 4;
  }
  for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    *pcVar26 = *pcVar27;
    pcVar27 = pcVar27 + 1;
    pcVar26 = pcVar26 + 1;
  }
switchD_0044fb10_default:
  iVar10 = STT3DSprC::LoadSequence((STT3DSprC *)&this_00->field_01D5,0xe,DAT_0080677c,local_74,0x1d)
  ;
  if (iVar10 != 0) {
    RaiseInternalException
              (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2da);
  }
  SVar32 = this_00->field_06F7;
  if ((((SVar32 == CASE_B) || (SVar32 == CASE_16)) || (SVar32 == CASE_23)) &&
     (iVar10 = STT3DSprC::LoadSequence
                         ((STT3DSprC *)&this_00->field_01D5,0xd,DAT_0080677c,local_e8,0x1d),
     iVar10 != 0)) {
    RaiseInternalException
              (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2de);
  }
  switch(this_00->field_06F3) {
  case CASE_0:
    pcVar27 = &DAT_007a9d88;
    break;
  case CASE_1:
    pcVar27 = &DAT_007a4ffc;
    break;
  case CASE_2:
    pcVar27 = &DAT_007aa028;
    break;
  case CASE_3:
    pcVar27 = &DAT_007aa024;
    break;
  case CASE_4:
    pcVar27 = &DAT_007aa020;
    break;
  case CASE_5:
    pcVar27 = &DAT_007aa01c;
    break;
  case CASE_6:
    pcVar27 = &DAT_007aa018;
    break;
  case CASE_7:
    pcVar27 = &DAT_007aa014;
    break;
  default:
    goto switchD_0044fe4c_default;
  }
  uVar11 = 0xffffffff;
  do {
    pcVar26 = pcVar27;
    if (uVar11 == 0) break;
    uVar11 = uVar11 - 1;
    pcVar26 = pcVar27 + 1;
    cVar1 = *pcVar27;
    pcVar27 = pcVar26;
  } while (cVar1 != '\0');
  uVar11 = ~uVar11;
  iVar10 = -1;
  pcVar27 = local_74;
  do {
    pcVar25 = pcVar27;
    if (iVar10 == 0) break;
    iVar10 = iVar10 + -1;
    pcVar25 = pcVar27 + 1;
    cVar1 = *pcVar27;
    pcVar27 = pcVar25;
  } while (cVar1 != '\0');
  pcVar27 = pcVar26 + -uVar11;
  pcVar26 = pcVar25 + -1;
  for (uVar21 = uVar11 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
    *(undefined4 *)pcVar26 = *(undefined4 *)pcVar27;
    pcVar27 = pcVar27 + 4;
    pcVar26 = pcVar26 + 4;
  }
  for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    *pcVar26 = *pcVar27;
    pcVar27 = pcVar27 + 1;
    pcVar26 = pcVar26 + 1;
  }
switchD_0044fe4c_default:
  puVar16 = &this_00->field_01D5;
  iVar10 = STT3DSprC::LoadSequence((STT3DSprC *)puVar16,0xc,DAT_0080677c,local_74,0x1d);
  if (iVar10 != 0) {
    RaiseInternalException
              (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2eb);
  }
  switch(this_00->field_06F7) {
  case CASE_9:
    local_c = ((8 - (int)this_00->field_006C / 0x2d) * 0xf) % 0x78;
    uVar21 = 0xe;
    uVar11 = this_00->field_001C * 0x41c64e6d + 0x3039;
    this_00->field_001C = uVar11;
    break;
  default:
    local_c = ((0x18 - (int)this_00->field_006C / 0xf) % 0x18 + (4 - DAT_008073fc) * 6) % 0x18;
    goto LAB_0045003f;
  case CASE_15:
    local_c = ((8 - (int)this_00->field_006C / 0x2d) * 0x14) % 0xa0;
    uVar21 = 0x13;
    uVar11 = this_00->field_001C * 0x41c64e6d + 0x3039;
    this_00->field_001C = uVar11;
    break;
  case CASE_24:
  case CASE_25:
    uVar11 = this_00->field_001C * 0x41c64e6d + 0x3039;
    this_00->field_001C = uVar11;
    local_c = (uVar11 >> 0x10) % 10;
LAB_0045003f:
    STT3DSprC::SetCurFase((STT3DSprC *)puVar16,'\x0e',local_c);
    uVar11 = local_c;
    goto LAB_00450050;
  }
  uVar21 = (uVar11 >> 0x10) % uVar21;
  this_00->field_0822 = uVar21;
  STT3DSprC::SetCurFase((STT3DSprC *)puVar16,'\x0e',uVar21 + local_c);
  uVar11 = this_00->field_0822 + local_c;
LAB_00450050:
  STT3DSprC::SetCurFase((STT3DSprC *)puVar16,'\f',uVar11);
  if ((this_00->field_06F7 != CASE_25) && (this_00->field_06F7 != CASE_24)) {
    thunk_FUN_004ac610(puVar16,'\x0e');
    thunk_FUN_004ac610(puVar16,'\f');
  }
  STT3DSprC::StartShow((STT3DSprC *)puVar16,0xe,PTR_00802a38->field_00E4);
  STT3DSprC::StartShow((STT3DSprC *)puVar16,0xc,PTR_00802a38->field_00E4);
  SVar32 = this_00->field_06F7;
  if (((SVar32 == CASE_B) || (SVar32 == CASE_16)) || (SVar32 == CASE_23)) {
    thunk_FUN_004acd60(puVar16,'\r',PTR_00802a38->field_00E4 & 1);
    STT3DSprC::StartShow((STT3DSprC *)puVar16,0xd,PTR_00802a38->field_00E4);
    STT3DSprC::SetCurFase((STT3DSprC *)puVar16,'\r',local_d4);
  }
  local_78 = (void *)(int)this_00->field_0041;
  thunk_FUN_004ad3c0(puVar16,(float)(int)local_78 * _DAT_007904f8 * _DAT_007904f0,
                     (float)(int)this_00->field_0043 * _DAT_007904f8 * _DAT_007904f0,
                     (float)(int)this_00->field_0045 * _DAT_007904f8 * _DAT_007904f0);
  uVar11 = local_c;
  if ((this_00->field_06F7 != CASE_25) && (this_00->field_06F7 != CASE_24)) {
    uVar11 = (0x18 - (int)this_00->field_006C / 0xf) % 0x18;
  }
  STT3DSprC::SetCurShad((STT3DSprC *)puVar16,'\x0e',uVar11);
  thunk_FUN_0041f630((AnonShape_0041F630_B1BEE81C *)this_00);
  if (DAT_00807326 == '\0') {
    thunk_FUN_004ad5e0((int)puVar16);
  }
  if (local_1c->field_000C == 0) {
    local_78 = message->data;
    if (*(int *)((int)local_78 + 0x45) == 1) {
      iVar10 = STT3DSprC::LoadSequence
                         ((STT3DSprC *)puVar16,0xb,DAT_00806774,s_forcef0_007aa008,0x1d);
      if (iVar10 != 0) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x31b)
        ;
      }
      thunk_FUN_004ad670(puVar16,'\x0e');
      thunk_FUN_004ad150(puVar16,'\v');
      thunk_FUN_004ac700(puVar16,'\v');
      STT3DSprC::StartShow((STT3DSprC *)puVar16,0xb,PTR_00802a38->field_00E4);
    }
    if (*(int *)((int)local_78 + 0x45) == 3) {
      thunk_FUN_006377b0(this_00->field_01ED,1,-1,-1,-1,0x12);
    }
  }
  RaiseInternalException
            (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x329);
LAB_00450268:
  this_00->field_046B = 0;
  FUN_006e62d0(PTR_00802a38,this_00->field_0471,&this_00->field_046B);
  if (this_00->field_07CA != 0) {
    iVar10 = FUN_006e62d0(PTR_00802a38,this_00->field_07CA,&local_30);
    if (iVar10 == -4) {
      iVar10 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x335,0,0,&DAT_007a4ccc,
                                  s_STBoatC__GetMessage_MESS_ID_ALLC_007a9fc8);
      if (iVar10 != 0) {
        pcVar9 = (code *)swi(3);
        iVar10 = (*pcVar9)();
        return iVar10;
      }
      RaiseInternalException
                (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x336);
    }
    FUN_006ea3e0((void *)this_00->field_0211,this_00->field_01ED,*(int *)(local_30 + 0x1ed));
  }
  if ((this_00->field_045D == CASE_F) && (this_00->field_0596 == 3)) {
    iVar10 = FUN_006e62d0(PTR_00802a38,this_00->field_058E,&local_30);
    if (iVar10 == -4) {
      iVar10 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x33c,0,0,&DAT_007a4ccc,
                                  s_STBoatC__GetMessage_MESS_ID_ALLC_007a9f8c);
      if (iVar10 != 0) {
        pcVar9 = (code *)swi(3);
        iVar10 = (*pcVar9)();
        return iVar10;
      }
      RaiseInternalException
                (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x33d);
    }
    FUN_006ea3e0((void *)this_00->field_0211,this_00->field_01ED,*(int *)(local_30 + 0x1ed));
    g_currentExceptionFrame = local_184.previous;
    return 0;
  }
  g_currentExceptionFrame = local_184.previous;
  return 0;
}

