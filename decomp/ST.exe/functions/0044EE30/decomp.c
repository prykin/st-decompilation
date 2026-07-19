
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::GetMessage */

int __thiscall STBoatC::GetMessage(STBoatC *this,STMessage *message)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  STMessageId SVar8;
  code *pcVar9;
  STBoatC *this_00;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined2 extraout_var;
  void *extraout_EAX;
  void *pvVar13;
  uint *puVar14;
  int *piVar15;
  undefined4 *puVar16;
  undefined2 uVar17;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined2 extraout_var_03;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  int *piVar18;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  uint extraout_EDX;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined2 uVar21;
  undefined2 extraout_var_06;
  undefined2 extraout_var_07;
  undefined4 extraout_EDX_00;
  byte *pbVar19;
  undefined2 extraout_var_08;
  undefined2 extraout_var_09;
  uint extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
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
  uint uVar20;
  undefined2 extraout_var_10;
  int *unaff_ESI;
  int iVar22;
  byte *pbVar23;
  void *unaff_EDI;
  char *pcVar24;
  char *pcVar25;
  byte *pbVar26;
  undefined4 *puVar27;
  longlong lVar28;
  STBoatC_field_06F7State SVar29;
  undefined4 uVar30;
  short sVar31;
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
  byte local_e8 [20];
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
  byte local_74 [20];
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
  void *local_28;
  void *local_24;
  byte *local_20;
  int *local_1c;
  short local_16;
  short local_14;
  short local_12;
  int *local_10;
  uint local_c;
  uint local_8;
  
  iVar22 = 0;
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
    for (iVar22 = 0x3f; iVar22 != 0; iVar22 = iVar22 + -1) {
      *puVar16 = 0;
      puVar16 = puVar16 + 1;
    }
    *(undefined2 *)puVar16 = 0;
    wsprintfA(&local_284,s_STBoatC__GetMessage___Name__d_Pl_007a9eac,local_ec->field_0018,
              *(undefined4 *)&local_ec->field_0x24,(uint)(ushort)local_ec->field_0032,
              (uint)(ushort)local_ec->field_0030);
    iVar22 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1380,0,iVar10,
                                &DAT_007a4ccc,&local_284);
    if (iVar22 == 0) {
      RaiseInternalException(iVar10,0,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1381);
      return 0xffff;
    }
    pcVar9 = (code *)swi(3);
    iVar10 = (*pcVar9)();
    return iVar10;
  }
  STSprGameObjC::GetMessage((STSprGameObjC *)local_ec,(int)message);
  SVar8 = message->id;
  if (MESS_ID_ALLCREATE < SVar8) {
    if (SVar8 < MESS_SHARED_0129) {
      if (SVar8 != MESS_HITKILL) {
        if (SVar8 == MESS_SHARED_0121) {
          if (this_00->field_06F7 != CASE_23) {
            *(undefined4 *)&this_00->field_0x736 = *(undefined4 *)((int)message->data + 4);
            if (this_00->field_045D == 3) {
              g_currentExceptionFrame = local_184.previous;
              return 0;
            }
            local_54 = DAT_00802a38->field_00E4;
            CmdToObj(this_00,CASE_3,&local_54);
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          if (*(int *)&this_00->field_0x722 != 0x14) {
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
        if (SVar8 != MESS_SHARED_0122) {
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        piVar15 = message->data;
        if (*piVar15 != *(int *)&this_00->field_0x24) {
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        *(int *)&this_00->field_0x782 = piVar15[1];
        *(int *)&this_00->field_0x786 = piVar15[2];
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      piVar15 = message->data;
      local_1c = piVar15;
      if (DAT_008117bc != (int *)0x0) {
        if (piVar15 != (int *)0x0) {
          local_9c.id = MESS_SHARED_5DD5;
          local_9c.data = (void *)CONCAT22(this_00->field_0032,*(undefined2 *)&this_00->field_0x24);
          local_84 = CONCAT22((short)piVar15[3],(short)piVar15[2]);
          (**(code **)*DAT_008117bc)(&local_9c);
        }
        if (((DAT_008117bc != (int *)0x0) && (piVar15 != (int *)0x0)) && (*piVar15 != 10000)) {
          local_9c.id = 0x5dd1;
          local_9c.data = (void *)CONCAT22(this_00->field_0032,*(undefined2 *)&this_00->field_0x24);
          local_84 = CONCAT22((short)piVar15[3],(short)piVar15[2]);
          (**(code **)*DAT_008117bc)(&local_9c);
        }
      }
      if (this_00->field_07CA != 0) {
        iVar10 = FUN_006e62d0(DAT_00802a38,this_00->field_07CA,(int *)&local_4c);
        if (iVar10 == -4) {
          iVar10 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x12f7,0,0,
                                      &DAT_007a4ccc,s_STBoatC__GetMessage_MESS_HITKILL_007a9ef8);
          if (iVar10 != 0) {
            pcVar9 = (code *)swi(3);
            iVar10 = (*pcVar9)();
            return iVar10;
          }
          RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x12f8)
          ;
        }
        piVar15 = local_1c;
        piVar18 = local_140;
        for (iVar10 = 7; iVar10 != 0; iVar10 = iVar10 + -1) {
          *piVar18 = *piVar15;
          piVar15 = piVar15 + 1;
          piVar18 = piVar18 + 1;
        }
        local_9c.id = MESS_HITKILL;
        local_9c.data = local_140;
        (**(code **)*local_4c)(&local_9c);
        piVar15 = local_1c;
      }
      if (((this_00->field_045D == 0x14) || (uVar11 = CheckPBoxCmd(this_00,CASE_14), uVar11 != 0))
         && (iVar10 = FUN_006e62d0(DAT_00802a38,this_00->field_05A2,(int *)&local_10), iVar10 != -4)
         ) {
        thunk_FUN_00492510(local_10,this_00->field_0018);
      }
      this_00->field_0455 = 1;
      thunk_FUN_0048d930((int)this_00);
      thunk_FUN_0048dba0((int)this_00);
      sVar31 = this_00->field_066F;
      sVar5 = this_00->field_0673;
      sVar6 = this_00->field_0671;
      if (((sVar31 < 0) || (piVar15 = local_1c, DAT_007fb240 <= sVar31)) ||
         ((sVar6 < 0 || (((DAT_007fb242 <= sVar6 || (sVar5 < 0)) || (DAT_007fb244 <= sVar5)))))) {
        pvVar13 = (void *)0x0;
      }
      else {
        pvVar13 = *(void **)(DAT_007fb248 +
                            ((int)DAT_007fb246 * (int)sVar5 + (int)DAT_007fb240 * (int)sVar6 +
                            (int)sVar31) * 8);
      }
      if (((pvVar13 != (void *)0x0) && (*(int *)((int)pvVar13 + 0x18) == this_00->field_0679)) &&
         ((this_00->field_0675 == 99 && (*(int *)((int)pvVar13 + 0x20) == 1000)))) {
        thunk_FUN_004b7d50(pvVar13,(int)this_00);
      }
      thunk_FUN_004952e0((int)this_00);
      uVar12 = STAllPlayersC::DeleteGuardBoat
                         (DAT_007fa174,
                          CONCAT31((int3)((uint)extraout_ECX_04 >> 8),this_00->field_0x24),
                          this_00->field_0032,1);
      STAllPlayersC::DeleteGuardBoat
                (DAT_007fa174,CONCAT31((int3)((uint)uVar12 >> 8),this_00->field_0x24),
                 this_00->field_0032,0);
      thunk_FUN_00492420((int *)this_00);
      thunk_FUN_004924a0(this_00);
      thunk_FUN_00492fc0((int)this_00);
      thunk_FUN_00493bc0((int)this_00);
      sVar31 = this_00->field_06A9;
      sVar5 = this_00->field_06AD;
      sVar6 = this_00->field_06AB;
      if (((sVar31 < 0) || (piVar15 = local_1c, DAT_007fb240 <= sVar31)) ||
         ((sVar6 < 0 || (((DAT_007fb242 <= sVar6 || (sVar5 < 0)) || (DAT_007fb244 <= sVar5)))))) {
        local_24 = (void *)0x0;
      }
      else {
        local_24 = *(void **)(DAT_007fb248 +
                             ((int)DAT_007fb246 * (int)sVar5 + (int)DAT_007fb240 * (int)sVar6 +
                             (int)sVar31) * 8);
      }
      if (((local_24 == (void *)0x0) || (*(int *)((int)local_24 + 0x18) != this_00->field_06AF)) ||
         (iVar10 = thunk_FUN_004b9d90((int)local_24), iVar10 == 0)) {
        FUN_006e62d0(DAT_00802a38,this_00->field_06AF,(int *)&local_24);
      }
      if (((local_24 != (void *)0x0) && (*(int *)((int)local_24 + 0x20) == 1000)) &&
         (thunk_FUN_004b9d20(local_24,(int)this_00),
         *(int *)((int)local_24 + 0x4b0) == this_00->field_0018)) {
        *(undefined4 *)((int)local_24 + 0x4b0) = 0;
      }
      if (((this_00->field_045D == 0x13) && (*(int *)&this_00->field_0x524 != 0)) &&
         (iVar10 = FUN_006e62d0(DAT_00802a38,*(int *)&this_00->field_0x524,(int *)&local_24),
         iVar10 != -4)) {
        thunk_FUN_004cf3e0(local_24,this_00->field_0018);
      }
      FUN_006e6780(*(void **)&this_00->field_0x211,
                   CONCAT22(CONCAT11(2,(char)((uint)this_00->field_0018 >> 0x10)),
                            *(undefined2 *)&this_00->field_0018));
      this_00->field_0826 = piVar15[2];
      iVar10 = (*this_00->vtable->vfunc_2C)();
      thunk_FUN_004b7710(CONCAT31((int3)((uint)extraout_ECX_05 >> 8),this_00->field_0x24),iVar10);
      if (*(uint *)&this_00->field_0x24 == (uint)*(byte *)(*(int *)&this_00->field_0x10 + 0x112d)) {
        thunk_FUN_004d8b70((char)*(uint *)&this_00->field_0x24);
      }
      if (piVar15[6] != 2) {
        puVar16 = &this_00->field_01D5;
        STT3DSprC::StopShow((STT3DSprC *)puVar16,0xf);
        STT3DSprC::StopShow((STT3DSprC *)puVar16,0);
        STT3DSprC::StopShow((STT3DSprC *)puVar16,1);
        STT3DSprC::StopShow((STT3DSprC *)puVar16,0xe);
        STT3DSprC::StopShow((STT3DSprC *)puVar16,0xd);
        STT3DSprC::StopShow((STT3DSprC *)puVar16,0xc);
        STT3DSprC::StopShow((STT3DSprC *)puVar16,8);
        uVar12 = STT3DSprC::StopShow((STT3DSprC *)puVar16,0xb);
        piVar18 = (int *)thunk_FUN_0042b760(CONCAT31((int3)((uint)uVar12 >> 8),this_00->field_0x24),
                                            CONCAT22(extraout_var_10,this_00->field_0030));
        piVar15 = local_1c;
        if (piVar18 != (int *)0x0) {
          (**(code **)(*piVar18 + 8))(0x6a,&this_00->field_0032);
          piVar15 = local_1c;
        }
      }
      if ((int *)this_00->field_0465 != (int *)0x0) {
        thunk_FUN_00635fd0((int *)this_00->field_0465);
        Library::MSVCRT::FUN_0072e2b0((undefined4 *)this_00->field_0465);
        this_00->field_0465 = 0;
      }
      if (((piVar15[1] == 0xa8) || (piVar15[6] == 0)) || (piVar15[6] == 4)) {
        uVar30 = 0xffffffff;
        uVar12 = thunk_FUN_004ad650((int)&this_00->field_01D5);
        thunk_FUN_0062b770((int)(short)this_00->field_0041,(int)(short)this_00->field_0043,
                           (int)(short)this_00->field_0045,this_00->field_06F7,(int)this_00,
                           (int)*(short *)&this_00->field_0x6c,uVar12,uVar30);
      }
      if (piVar15[6] == 3) {
        thunk_FUN_006377b0(*(uint *)&this_00->field_0x1ed,0,(int)(short)this_00->field_0041,
                           (int)(short)this_00->field_0043,(int)(short)this_00->field_0045,0x12);
      }
      if (piVar15[6] == 2) {
        *(undefined4 *)&this_00->field_0x2c0 = 1;
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
      thunk_FUN_0041c3f0(this_00,*(undefined **)&this_00->field_0x70a);
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    if (this_00->field_045D != 0x14) {
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
    if ((*(int *)&this_00->field_0x5a6 == 0) &&
       (iVar10 = FUN_006e62d0(DAT_00802a38,this_00->field_05A2,(int *)&this_00->field_0x5a6),
       iVar10 == -4)) {
      RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1372);
    }
    local_9d = this_00->field_0x63;
    uVar3 = this_00->field_0x61;
    uVar4 = this_00->field_0x62;
    puVar16 = (undefined4 *)(*(int *)&this_00->field_0x5a6 + 0x34);
    puVar27 = (undefined4 *)&this_00->field_0x34;
    for (iVar10 = 0x17; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar27 = *puVar16;
      puVar16 = puVar16 + 1;
      puVar27 = puVar27 + 1;
    }
    *(undefined2 *)puVar27 = *(undefined2 *)puVar16;
    *(undefined1 *)((int)puVar27 + 2) = *(undefined1 *)((int)puVar16 + 2);
    this_00->field_0076 = 0;
    *(undefined2 *)&this_00->field_0x6e = 0x2f;
    this_00->field_0x61 = uVar3;
    this_00->field_0x62 = uVar4;
    this_00->field_0x63 = local_9d;
    iVar10 = (*this_00->vtable->vfunc_D8)();
    if (iVar10 == 0) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    iVar10 = 0x1377;
    goto LAB_0045aee3;
  }
  if (SVar8 == MESS_ID_ALLCREATE) goto LAB_00450268;
  if (MESS_SHARED_0003 < SVar8) {
    if (SVar8 == MESS_SHARED_010F) {
      local_44 = (byte *)STT3DSprC::SaveSpr((STT3DSprC *)&this_00->field_01D5,&local_38);
      local_3c = (byte *)STAllPlayersC::SaveGObjData((STAllPlayersC *)this_00,(int *)&local_2c);
      local_40 = (byte *)SaveBoatData(this_00,(int *)&local_34);
      local_7c = (void *)(local_2c + local_34 + local_38);
      local_20 = (byte *)Library::DKW::LIB::FUN_006aac70((int)local_7c);
      pbVar19 = local_40;
      pbVar26 = local_20;
      for (uVar11 = local_34 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pbVar26 = *(undefined4 *)pbVar19;
        pbVar19 = pbVar19 + 4;
        pbVar26 = pbVar26 + 4;
      }
      for (uVar11 = local_34 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pbVar26 = *pbVar19;
        pbVar19 = pbVar19 + 1;
        pbVar26 = pbVar26 + 1;
      }
      pbVar19 = local_3c;
      pbVar26 = local_20 + local_34;
      for (uVar11 = local_2c >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pbVar26 = *(undefined4 *)pbVar19;
        pbVar19 = pbVar19 + 4;
        pbVar26 = pbVar26 + 4;
      }
      for (uVar11 = local_2c & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pbVar26 = *pbVar19;
        pbVar19 = pbVar19 + 1;
        pbVar26 = pbVar26 + 1;
      }
      *(uint *)(local_20 + 0x5fe) = local_34;
      *(uint *)(local_20 + 0x602) = local_2c;
      pbVar19 = local_44;
      pbVar26 = local_20 + local_34 + local_2c;
      for (uVar11 = local_38 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pbVar26 = *(undefined4 *)pbVar19;
        pbVar19 = pbVar19 + 4;
        pbVar26 = pbVar26 + 4;
      }
      for (uVar11 = local_38 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pbVar26 = *pbVar19;
        pbVar19 = pbVar19 + 1;
        pbVar26 = pbVar26 + 1;
      }
      *(uint *)(local_20 + 0x5f6) = local_34 + local_2c;
      *(uint *)(local_20 + 0x5fa) = local_38;
      STPlaySystemC::SaveObjData(DAT_00802a38,this_00->field_0018,local_20,(uint)local_7c);
      FUN_006ab060(&local_44);
      FUN_006ab060(&local_3c);
      FUN_006ab060(&local_40);
      FUN_006ab060(&local_20);
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    if (SVar8 != MESS_TORPHIT) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    piVar15 = message->data;
    local_c = 0;
    local_7c = (void *)*piVar15;
    if (*(int *)&this_00->field_0x742 == 1) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    if ((this_00->field_045D == 8) && (this_00->field_06E7 != 2)) {
      this_00->field_06E7 = 1;
    }
    iVar10 = *(int *)&this_00->field_0x786;
    if ((0 < iVar10) && (iVar10 < 0x65)) {
      *piVar15 = *piVar15 - (iVar10 * *piVar15) / 100;
    }
    iVar10 = piVar15[1];
    local_1c = piVar15;
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
          iVar10 = *piVar15;
          iVar22 = (iVar10 * 9) / 10 + (iVar10 * 9 >> 0x1f);
LAB_00459e30:
          iVar10 = iVar10 - (iVar22 - (iVar22 >> 0x1f));
        }
        else {
          if (local_c == 2) {
            iVar10 = *piVar15;
            iVar22 = (iVar10 * 0x11) / 0x14 + (iVar10 * 0x11 >> 0x1f);
            goto LAB_00459e30;
          }
          if (local_c == 3) {
            iVar10 = *piVar15;
            iVar22 = (iVar10 * 4) / 5 + (iVar10 * 4 >> 0x1f);
            goto LAB_00459e30;
          }
        }
        *piVar15 = *piVar15 - iVar10;
      }
      uVar11 = thunk_FUN_004406c0(this_00->field_0x24);
      uVar11 = uVar11 & 0xff;
      if (uVar11 == 1) {
        iVar10 = *(int *)&this_00->field_0x24;
        iVar22 = 4;
LAB_00459e71:
        local_c = thunk_FUN_004e60d0(iVar10,iVar22);
      }
      else {
        if (uVar11 == 2) {
          iVar10 = *(int *)&this_00->field_0x24;
          iVar22 = 0x81;
          goto LAB_00459e71;
        }
        if (uVar11 == 3) {
          iVar10 = *(int *)&this_00->field_0x24;
          iVar22 = 0x65;
          goto LAB_00459e71;
        }
      }
      iVar10 = 0;
      if (local_c == 1) {
        iVar10 = *piVar15;
        iVar22 = iVar10 * 8;
LAB_00459eaa:
        iVar10 = iVar10 - iVar22 / 10;
      }
      else {
        if (local_c == 2) {
          iVar10 = *piVar15;
          iVar22 = iVar10 * 6;
          goto LAB_00459eaa;
        }
        if (local_c == 3) {
          iVar10 = *piVar15;
          iVar22 = iVar10 * 4;
          goto LAB_00459eaa;
        }
      }
      *piVar15 = *piVar15 - iVar10;
      if (piVar15[1] == 0x9a) {
        iVar10 = piVar15[2];
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
      if ((piVar15[1] == 0xad) || (piVar15[1] == 0xa1)) {
        if (this_00->field_06F7 == CASE_9) {
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        if (this_00->field_06F7 == CASE_15) {
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        thunk_FUN_00495010(this_00,piVar15[4]);
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
      iVar22 = 0x2d;
LAB_00459d8b:
      local_c = thunk_FUN_004e60d0(iVar10,iVar22);
    }
    else {
      if (uVar11 == 2) {
        iVar10 = *(int *)&this_00->field_0x24;
        iVar22 = 0x2d;
        goto LAB_00459d8b;
      }
      if (uVar11 == 3) {
        iVar10 = *(int *)&this_00->field_0x24;
        iVar22 = 0x6a;
        goto LAB_00459d8b;
      }
    }
    iVar10 = 0;
    if (local_c == 1) {
      iVar10 = *piVar15 - (*piVar15 * 9) / 10;
    }
    *piVar15 = *piVar15 - iVar10;
LAB_00459f59:
    if (200 < (int)local_7c - *piVar15) {
      *piVar15 = (int)local_7c + -200;
    }
    if ((int)this_00->field_0716 < 1) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    this_00->field_0716 = this_00->field_0716 - *piVar15;
    pvVar13 = DAT_00811798;
    if ((((DAT_00811798 != (void *)0x0) && (piVar15[2] != 0xff)) &&
        (pvVar13 = (void *)thunk_FUN_0041c710((int)this_00), pvVar13 != (void *)0x0)) &&
       (piVar15[5] == 0)) {
      pvVar13 = (void *)thunk_FUN_0061f8b0(DAT_00811798,(int)(short)this_00->field_005B,
                                           (int)(short)this_00->field_005D,
                                           *(uint *)&this_00->field_0x24);
    }
    if ((DAT_008117bc != (int *)0x0) && (piVar15 != (int *)0x0)) {
      local_9c.id = MESS_SHARED_5DD5;
      local_9c.data = (void *)CONCAT22(this_00->field_0032,*(undefined2 *)&this_00->field_0x24);
      local_84 = CONCAT22((short)piVar15[3],(short)piVar15[2]);
      pvVar13 = (void *)(**(code **)*DAT_008117bc)(&local_9c);
    }
    if ((int)this_00->field_0716 < 1) {
      if (((DAT_008117bc != (int *)0x0) && (piVar15 != (int *)0x0)) && (*piVar15 != 10000)) {
        local_9c.id = 0x5dd1;
        local_9c.data = (void *)CONCAT22(this_00->field_0032,*(undefined2 *)&this_00->field_0x24);
        local_84 = CONCAT22((short)piVar15[3],(short)piVar15[2]);
        (**(code **)*DAT_008117bc)(&local_9c);
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
      thunk_FUN_0048d930((int)this_00);
      thunk_FUN_0048dba0((int)this_00);
      sVar31 = this_00->field_0671;
      sVar5 = this_00->field_0673;
      local_7c = (void *)CONCAT22(local_7c._2_2_,sVar31);
      sVar6 = this_00->field_066F;
      if (((((sVar6 < 0) || (DAT_007fb240 <= sVar6)) || (sVar31 < 0)) ||
          ((DAT_007fb242 <= sVar31 || (sVar5 < 0)))) || (DAT_007fb244 <= sVar5)) {
        pvVar13 = (void *)0x0;
      }
      else {
        pvVar13 = *(void **)(DAT_007fb248 +
                            ((int)DAT_007fb246 * (int)sVar5 + (int)DAT_007fb240 * (int)sVar31 +
                            (int)sVar6) * 8);
        piVar15 = local_1c;
      }
      if (((pvVar13 != (void *)0x0) && (*(int *)((int)pvVar13 + 0x18) == this_00->field_0679)) &&
         ((this_00->field_0675 == 99 && (*(int *)((int)pvVar13 + 0x20) == 1000)))) {
        thunk_FUN_004b7d50(pvVar13,(int)this_00);
      }
      thunk_FUN_004952e0((int)this_00);
      uVar12 = STAllPlayersC::DeleteGuardBoat
                         (DAT_007fa174,
                          CONCAT31((int3)((uint)extraout_ECX_03 >> 8),this_00->field_0x24),
                          this_00->field_0032,1);
      STAllPlayersC::DeleteGuardBoat
                (DAT_007fa174,CONCAT31((int3)((uint)uVar12 >> 8),this_00->field_0x24),
                 this_00->field_0032,0);
      thunk_FUN_00492420((int *)this_00);
      if (this_00->field_07CA != 0) {
        iVar10 = FUN_006e62d0(DAT_00802a38,this_00->field_07CA,(int *)&local_58);
        if (iVar10 == -4) {
          iVar10 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1296,0,0,
                                      &DAT_007a4ccc,s_STBoatC__GetMessage_MESS_TORPHIT_007a9f3c);
          if (iVar10 != 0) {
            pcVar9 = (code *)swi(3);
            iVar10 = (*pcVar9)();
            return iVar10;
          }
          RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1297)
          ;
        }
        piVar15 = local_1c;
        piVar18 = local_124;
        for (iVar10 = 7; iVar10 != 0; iVar10 = iVar10 + -1) {
          *piVar18 = *piVar15;
          piVar15 = piVar15 + 1;
          piVar18 = piVar18 + 1;
        }
        local_124[0] = 0x1716b;
        local_9c.id = MESS_TORPHIT;
        local_9c.data = local_124;
        (**(code **)*local_58)(&local_9c);
        piVar15 = local_1c;
      }
      thunk_FUN_004924a0(this_00);
      thunk_FUN_00492fc0((int)this_00);
      thunk_FUN_00493bc0((int)this_00);
      sVar31 = this_00->field_06A9;
      local_7c = (void *)CONCAT22(extraout_var_00,sVar31);
      sVar5 = this_00->field_06AD;
      sVar6 = this_00->field_06AB;
      if ((((sVar31 < 0) || (DAT_007fb240 <= sVar31)) || (sVar6 < 0)) ||
         (((DAT_007fb242 <= sVar6 || (sVar5 < 0)) || (DAT_007fb244 <= sVar5)))) {
        local_28 = (void *)0x0;
      }
      else {
        local_28 = *(void **)(DAT_007fb248 +
                             ((int)DAT_007fb246 * (int)sVar5 + (int)DAT_007fb240 * (int)sVar6 +
                             (int)sVar31) * 8);
      }
      if (((local_28 == (void *)0x0) || (*(int *)((int)local_28 + 0x18) != this_00->field_06AF)) ||
         (iVar10 = thunk_FUN_004b9d90((int)local_28), iVar10 == 0)) {
        FUN_006e62d0(DAT_00802a38,this_00->field_06AF,(int *)&local_28);
      }
      if (((local_28 != (void *)0x0) && (*(int *)((int)local_28 + 0x20) == 1000)) &&
         (thunk_FUN_004b9d20(local_28,(int)this_00),
         *(int *)((int)local_28 + 0x4b0) == this_00->field_0018)) {
        *(undefined4 *)((int)local_28 + 0x4b0) = 0;
      }
      if (((this_00->field_045D == 0x13) && (*(int *)&this_00->field_0x524 != 0)) &&
         (iVar10 = FUN_006e62d0(DAT_00802a38,*(int *)&this_00->field_0x524,(int *)&local_28),
         iVar10 != -4)) {
        thunk_FUN_004cf3e0(local_28,this_00->field_0018);
      }
      FUN_006e6780(*(void **)&this_00->field_0x211,
                   CONCAT22(CONCAT11(2,(char)((uint)this_00->field_0018 >> 0x10)),
                            *(undefined2 *)&this_00->field_0018));
      this_00->field_0826 = piVar15[2];
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    piVar18 = DAT_008117bc;
    if ((this_00->field_045D == 4) && (this_00->field_0580 == CASE_5)) {
      sVar31 = this_00->field_0554;
      local_7c = (void *)CONCAT22((short)((uint)pvVar13 >> 0x10),sVar31);
      sVar5 = this_00->field_0558;
      sVar6 = this_00->field_0556;
      if ((sVar31 < 0) ||
         ((((DAT_007fb240 <= sVar31 || (sVar6 < 0)) || (DAT_007fb242 <= sVar6)) ||
          ((sVar5 < 0 || (DAT_007fb244 <= sVar5)))))) {
        piVar18 = (int *)0x0;
        pvVar13 = local_7c;
      }
      else {
        pvVar13 = (void *)((int)DAT_007fb246 * (int)sVar5 + (int)DAT_007fb240 * (int)sVar6 +
                          (int)sVar31);
        piVar18 = *(int **)(DAT_007fb248 + (int)pvVar13 * 8);
      }
      local_10 = piVar18;
      if ((piVar18 != (int *)0x0) &&
         (pvVar13 = (void *)piVar18[6], pvVar13 == *(void **)&this_00->field_0x55a)) {
        thunk_FUN_004e2200(piVar18,this_00->field_0568,this_00->field_0018,this_00->field_0716);
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
    }
    if (piVar15[2] == 0xff) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    local_10 = (int *)STAllPlayersC::GetObjPtr
                                (DAT_007fa174,CONCAT31((int3)((uint)piVar18 >> 8),(char)piVar15[2]),
                                 CONCAT22((short)((uint)pvVar13 >> 0x10),(short)piVar15[3]),CASE_1);
    if (local_10 == (int *)0x0) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    if (this_00->field_045D != 3) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    thunk_FUN_004162f0(local_10,&local_16,&local_14,&local_12);
    uVar11 = (int)(short)this_00->field_0047 - (int)local_16;
    uVar20 = (int)uVar11 >> 0x1f;
    if (6 < (int)((uVar11 ^ uVar20) - uVar20)) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    uVar11 = (int)(short)this_00->field_0049 - (int)local_14;
    uVar20 = (int)uVar11 >> 0x1f;
    if (6 < (int)((uVar11 ^ uVar20) - uVar20)) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    uVar11 = (int)(short)this_00->field_004B - (int)local_12;
    uVar20 = (int)uVar11 >> 0x1f;
    if (2 < (int)((uVar11 ^ uVar20) - uVar20)) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    _AddDefenceShots(this_00,(char)piVar15[2],(short)piVar15[3],*piVar15);
    g_currentExceptionFrame = local_184.previous;
    return 0;
  }
  if (SVar8 == MESS_SHARED_0003) {
    thunk_FUN_0041c5a0((int *)this_00);
    thunk_FUN_0041d590((int)this_00);
    uVar12 = thunk_FUN_004167a0((int)this_00);
    pvVar13 = (void *)thunk_FUN_0042b760(CONCAT31((int3)((uint)uVar12 >> 8),this_00->field_0x24),
                                         CONCAT22(extraout_var_08,this_00->field_0030));
    if (pvVar13 != (void *)0x0) {
      thunk_FUN_0040cdb0(pvVar13,(uint)(ushort)this_00->field_0032);
    }
    uVar12 = thunk_FUN_004ad310((int)&this_00->field_01D5);
    uVar12 = thunk_FUN_00495ff0(this_00->field_005B,this_00->field_005D,this_00->field_005F,
                                CONCAT31((int3)((uint)uVar12 >> 8),this_00->field_0x8e),(int)this_00
                               );
    STAllPlayersC::UnRegisterObject
              (DAT_007fa174,CONCAT31((int3)((uint)this_00->field_0826 >> 8),this_00->field_0x24),
               CONCAT22((short)((uint)uVar12 >> 0x10),this_00->field_0030),
               CONCAT22(extraout_var_09,this_00->field_0032),(int *)this_00,this_00->field_0826);
    thunk_FUN_00489950((int)this_00);
    if ((byte *)this_00->field_047B != (byte *)0x0) {
      FUN_006ae110((byte *)this_00->field_047B);
      this_00->field_047B = 0;
    }
    if ((int *)this_00->field_0465 != (int *)0x0) {
      thunk_FUN_00635fd0((int *)this_00->field_0465);
      Library::MSVCRT::FUN_0072e2b0((undefined4 *)this_00->field_0465);
      this_00->field_0465 = 0;
    }
    RaiseInternalException(-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x37a);
    pvVar13 = extraout_EAX;
    uVar11 = extraout_EDX_01;
LAB_0045048a:
    if ((this_00->field_0x4d == '\x01') && (this_00->field_0x5a == '\x01')) {
      uVar11 = (uint)DAT_00802a38->field_00E4 % 0x32;
      pvVar13 = (void *)((uint)DAT_00802a38->field_00E4 / 0x32);
      if (uVar11 == 7) {
        iVar10 = (int)(short)this_00->field_0041 % 0xc9;
        local_78 = (void *)((int)(short)this_00->field_0043 % 0xc9);
        pvVar13 = (void *)((int)(short)this_00->field_0045 / 200);
        uVar11 = (int)(short)this_00->field_0045 % 200;
        if ((((0x46 < iVar10) && (iVar10 < 0x82)) && (pvVar13 = local_78, 0x46 < (int)local_78)) &&
           ((((int)local_78 < 0x82 && (0x47 < (int)uVar11)) && ((int)uVar11 < 0x81)))) {
          this_00->field_0x5a = 0;
          this_00->field_0x4d = 0;
        }
      }
    }
    lVar28 = CONCAT44(uVar11,pvVar13);
    if (((*(int *)&this_00->field_0x7ee == 1) &&
        (lVar28 = (*this_00->vtable->vfunc_7C)(), (int)lVar28 < 0x1a)) ||
       (((*(int *)&this_00->field_0x7ee == 2 &&
         (lVar28 = (*this_00->vtable->vfunc_7C)(), (int)lVar28 < 0x33)) ||
        ((*(int *)&this_00->field_0x7ee == 3 &&
         (lVar28 = (*this_00->vtable->vfunc_7C)(), (int)lVar28 < 0x4c)))))) {
      iVar22 = thunk_FUN_004e8030(this_00->field_06F7);
      iVar10 = this_00->field_045D;
      lVar28 = CONCAT44(extraout_EDX_02,iVar10);
      if (iVar22 == 3) {
        if (iVar10 != 0x16) {
          uVar11 = CheckPBoxCmd(this_00,CASE_16);
          lVar28 = CONCAT44(extraout_EDX_04,uVar11);
          if ((uVar11 == 0) &&
             (uVar11 = (char)this_00->field_0x24 * 0xa62, lVar28 = (ulonglong)uVar11 << 0x20,
             *(short *)(&DAT_007f4f7f + uVar11) != 0)) {
            puVar14 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
            Library::DKW::TBL::FUN_006ae1c0(puVar14,(undefined4 *)&this_00->field_0032);
            STAllPlayersC::AddObjsToGroup
                      (DAT_007fa174,CONCAT31((int3)((uint)extraout_EDX_05 >> 8),this_00->field_0x24)
                       ,0xfffe,(int)puVar14,(undefined2 *)&local_60);
            FUN_006ae110((byte *)puVar14);
            piVar15 = (int *)thunk_FUN_0042b760(CONCAT31((int3)((uint)extraout_ECX_02 >> 8),
                                                         this_00->field_0x24),local_60);
            puVar16 = local_b4;
            local_b4[0] = 1;
            iVar10 = *piVar15;
            uVar12 = 0x11;
            goto LAB_00450695;
          }
        }
      }
      else {
        lVar28 = CONCAT44(extraout_EDX_02,iVar10);
        if (iVar10 != 4) {
          uVar11 = CheckPBoxCmd(this_00,CASE_4);
          lVar28 = CONCAT44(extraout_EDX_03,uVar11);
          if ((uVar11 == 0) &&
             (lVar28 = CONCAT44(extraout_EDX_03,uVar11),
             *(short *)(&DAT_007f4f7b + (char)this_00->field_0x24 * 0xa62) != 0)) {
            puVar14 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
            Library::DKW::TBL::FUN_006ae1c0(puVar14,(undefined4 *)&this_00->field_0032);
            STAllPlayersC::AddObjsToGroup
                      (DAT_007fa174,CONCAT31((int3)((uint)extraout_ECX_01 >> 8),this_00->field_0x24)
                       ,0xfffe,(int)puVar14,(undefined2 *)&local_50);
            uVar12 = FUN_006ae110((byte *)puVar14);
            piVar15 = (int *)thunk_FUN_0042b760(CONCAT31((int3)((uint)uVar12 >> 8),
                                                         this_00->field_0x24),local_50);
            puVar16 = &local_a8;
            local_a8 = 1;
            local_a4 = 0;
            iVar10 = *piVar15;
            uVar12 = 4;
LAB_00450695:
            lVar28 = (**(code **)(iVar10 + 8))(uVar12,puVar16);
          }
        }
      }
    }
    local_1c = (int *)thunk_FUN_0042b760(CONCAT31((int3)((ulonglong)lVar28 >> 8),this_00->field_0x24
                                                 ),
                                         CONCAT22((short)((ulonglong)lVar28 >> 0x30),
                                                  this_00->field_0030));
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
          iVar22 = *(int *)&this_00->field_0x7ae + iVar10 * *(int *)&this_00->field_0x7b2;
          *(int *)&this_00->field_0x7ae = iVar22;
          iVar10 = *(int *)&this_00->field_0x79e * *(int *)&this_00->field_0x7b2;
          if (iVar10 < iVar22) {
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
    SVar29 = this_00->field_06F7;
    if ((((SVar29 == CASE_24) || (SVar29 == CASE_1B)) || (SVar29 == CASE_1D)) &&
       ((*(int *)&this_00->field_0x71e < 0x14 &&
        (uVar11 = (uint)DAT_00802a38->field_00E4 % 0x3c, uVar11 == 0)))) {
      *(int *)&this_00->field_0x71e = *(int *)&this_00->field_0x71e + 1;
    }
    if (((this_00->field_06F7 == CASE_17) && (*(int *)&this_00->field_0x72a < 0x28)) &&
       (uVar11 = (uint)DAT_00802a38->field_00E4 % 0xf, uVar11 == 0)) {
      *(int *)&this_00->field_0x72a = *(int *)&this_00->field_0x72a + 1;
    }
    if (this_00->field_06F7 == CASE_23) {
      if (*(int *)&this_00->field_0x72e == 1) {
        uVar11 = (uint)DAT_00802a38->field_00E4 % 0x28;
        if ((uVar11 == 0) &&
           (iVar10 = *(int *)&this_00->field_0x722 + -1, *(int *)&this_00->field_0x722 = iVar10,
           iVar10 == 0)) {
          *(undefined4 *)&this_00->field_0x72e = 0;
          (*this_00->vtable->vfunc_90)(3,0x16d);
          uVar11 = extraout_EDX_09;
        }
      }
      else if ((*(int *)&this_00->field_0x722 < 0x14) &&
              (uVar11 = (uint)DAT_00802a38->field_00E4 % 0xf0, uVar11 == 0)) {
        *(int *)&this_00->field_0x722 = *(int *)&this_00->field_0x722 + 1;
      }
    }
    SVar29 = this_00->field_06F7;
    if ((SVar29 == CASE_16) || (SVar29 == CASE_25)) {
      if (*(int *)&this_00->field_0x732 == 1) {
        if ((((SVar29 == CASE_16) && ((uint)DAT_00802a38->field_00E4 % 0x1e == 0)) ||
            ((SVar29 == CASE_25 && ((uint)DAT_00802a38->field_00E4 % 0x5a == 0)))) &&
           (iVar10 = *(int *)&this_00->field_0x726 + -1, *(int *)&this_00->field_0x726 = iVar10,
           iVar10 == 0)) {
          *(undefined4 *)&this_00->field_0x732 = 0;
          (*this_00->vtable->vfunc_90)(3,0x16d);
        }
        thunk_FUN_004945c0(this_00);
        uVar11 = extraout_EDX_10;
      }
      else if ((SVar29 == CASE_16) &&
              (iVar10 = thunk_FUN_004e60d0(*(int *)&this_00->field_0x24,0x92),
              uVar11 = extraout_EDX_11, 0 < iVar10)) {
        iVar10 = *(int *)&this_00->field_0x726;
        if (iVar10 < 0x28) {
          uVar11 = (uint)DAT_00802a38->field_00E4 % 0x2d;
joined_r0x00450a10:
          if (uVar11 == 0) {
            *(int *)&this_00->field_0x726 = iVar10 + 1;
          }
        }
      }
      else {
        iVar10 = *(int *)&this_00->field_0x726;
        if (iVar10 < 0x28) {
          uVar11 = (uint)DAT_00802a38->field_00E4 % 0x5a;
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
       ((this_00->field_045D != 0x14 || (this_00->field_05C0 != 3)))) {
      uVar11 = (int)this_00->field_076E % 0x7d;
      if (uVar11 == 0) {
        puVar16 = &this_00->field_01D5;
        iVar10 = STT3DSprC::LoadSequence
                           ((STT3DSprC *)puVar16,0xb,DAT_00806774,(byte *)s_forcef0_007aa008,0x1d);
        if (iVar10 != 0) {
          RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x41b);
        }
        thunk_FUN_004ad670(puVar16,'\x0e');
        thunk_FUN_004ad150(puVar16,'\v');
        thunk_FUN_004ac700(puVar16,'\v');
        STT3DSprC::StartShow((STT3DSprC *)puVar16,0xb,DAT_00802a38->field_00E4);
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
        thunk_FUN_00636060((void *)this_00->field_0465,(int)(short)this_00->field_0041,
                           (int)(short)this_00->field_0043,(int)(short)this_00->field_0045,
                           (int)*(short *)&this_00->field_0x6c,100);
        uVar11 = extraout_EDX_13;
      }
      if (this_00->field_045D == 3) {
        this_00->field_073A = this_00->field_073A + -1;
      }
      if (this_00->field_045D == 0x14) {
        if (this_00->field_05C0 == 3) {
          if ((*(int *)&this_00->field_0x5a6 == 0) &&
             (iVar10 = FUN_006e62d0(DAT_00802a38,this_00->field_05A2,(int *)&this_00->field_0x5a6),
             iVar10 == -4)) {
            RaiseInternalException(-4,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x43c);
          }
          uVar11 = *(uint *)(*(int *)&this_00->field_0x5a6 + 0x24);
          if (uVar11 != *(uint *)&this_00->field_0x24) goto LAB_00450c1e;
        }
        this_00->field_073A = this_00->field_073A + -1;
      }
LAB_00450c1e:
      if (this_00->field_073A == 0) {
        if ((int *)this_00->field_0465 != (int *)0x0) {
          thunk_FUN_00635fd0((int *)this_00->field_0465);
          Library::MSVCRT::FUN_0072e2b0((undefined4 *)this_00->field_0465);
          this_00->field_0465 = 0;
          uVar11 = extraout_EDX_16;
        }
        if (this_00->field_045D != 3) {
          local_5c = DAT_00802a38->field_00E4;
          CmdToObj(this_00,CASE_3,&local_5c);
          uVar11 = extraout_EDX_17;
        }
      }
    }
    if (((*(int *)&this_00->field_0x70e == 0) &&
        (uVar11 = (uint)DAT_00802a38->field_00E4 % 3, uVar11 == 0)) &&
       (iVar10 = thunk_FUN_004e60d0(*(int *)&this_00->field_0x24,10), uVar11 = extraout_EDX_18,
       0 < iVar10)) {
      thunk_FUN_0041c6e0(this_00,*(undefined **)&this_00->field_0x70a);
      *(undefined4 *)&this_00->field_0x70e = 1;
      uVar11 = extraout_EDX_19;
    }
    if (*(int *)&this_00->field_0x2c0 == 1) {
      *(undefined4 *)&this_00->field_0x2c0 = 0;
      if (this_00->field_06F7 == CASE_9) {
        iVar10 = thunk_FUN_004accd0(&this_00->field_01D5,'\b');
        if ((iVar10 == 0) &&
           (iVar10 = STT3DSprC::LoadSequence
                               ((STT3DSprC *)&this_00->field_01D5,8,DAT_00806774,
                                (byte *)s_expdstrw_007a9f80,0x1d), iVar10 != 0)) {
          iVar10 = 0x45d;
LAB_00450e28:
          RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,iVar10)
          ;
        }
      }
      else if (this_00->field_06F7 == CASE_15) {
        iVar10 = STT3DSprC::LoadSequence
                           ((STT3DSprC *)&this_00->field_01D5,8,DAT_00806774,
                            (byte *)s_expdstrw_007a9f80,0x1d);
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
                   (byte *)(s_expl_bt0_007a8ee0 + *(int *)&this_00->field_0x82a * 0x45),0x1d);
        STT3DSprC::LoadSequence
                  ((STT3DSprC *)puVar16,9,DAT_00806764,
                   (byte *)(s_expl_bbt0_007a8eef + *(int *)&this_00->field_0x82a * 0x45),0x1d);
        STT3DSprC::LoadSequence
                  ((STT3DSprC *)puVar16,10,DAT_00806774,
                   (byte *)(s_expmask3_007a8efe + *(int *)&this_00->field_0x82a * 0x45),0x1d);
        thunk_FUN_004ac700(puVar16,'\n');
        STT3DSprC::StartShow((STT3DSprC *)puVar16,10,DAT_00802a38->field_00E4);
        thunk_FUN_004acf20(puVar16,DAT_008032b8,0x10);
        thunk_FUN_004acfe0(puVar16,'\n');
      }
      STT3DSprC::StartShow((STT3DSprC *)&this_00->field_01D5,8,DAT_00802a38->field_00E4);
      this_00->field_0455 = 1;
      iVar10 = (*this_00->vtable->vfunc_2C)();
      thunk_FUN_004b7710(CONCAT31((int3)((uint)iVar10 >> 8),this_00->field_0x24),iVar10);
      uVar11 = (uint)*(byte *)(*(int *)&this_00->field_0x10 + 0x112d);
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
          SVar29 = this_00->field_06F7;
          sVar7 = *(short *)&this_00->field_0x6c;
          sVar6 = this_00->field_0045;
          sVar5 = this_00->field_0043;
          sVar31 = this_00->field_0041;
        }
        else {
          uVar11 = 0xffffffff;
          uVar12 = thunk_FUN_004ad650((int)puVar16);
          sVar7 = *(short *)&this_00->field_0x6c;
          sVar6 = this_00->field_0045;
          SVar29 = this_00->field_06F7;
          sVar5 = this_00->field_0043;
          sVar31 = this_00->field_0041;
        }
        thunk_FUN_0062b770((int)sVar31,(int)sVar5,(int)sVar6,SVar29,(int)this_00,(int)sVar7,uVar12,
                           uVar11);
        if ((int *)this_00->field_0465 != (int *)0x0) {
          thunk_FUN_00635fd0((int *)this_00->field_0465);
          Library::MSVCRT::FUN_0072e2b0((undefined4 *)this_00->field_0465);
          this_00->field_0465 = 0;
        }
      }
      if ((this_00->field_06F7 == CASE_21) && (local_c == 0x18)) {
        thunk_FUN_00637350((int)(short)this_00->field_0041,(int)(short)this_00->field_0043,
                           (int)(short)this_00->field_0045,3,*(uint *)&this_00->field_0x24,
                           (short)this_00->field_0018,this_00->field_0032,0x21,200);
      }
      if (local_c == *(uint *)(&DAT_007a8f15 + *(int *)&this_00->field_0x82a * 0x45)) {
        thunk_FUN_004ad5e0((int)puVar16);
      }
      if (((local_c == *(uint *)(&DAT_007a8f19 + *(int *)&this_00->field_0x82a * 0x45)) &&
          (this_00->field_06F7 != CASE_9)) && (this_00->field_06F7 != CASE_15)) {
        STT3DSprC::StartShow((STT3DSprC *)puVar16,9,DAT_00802a38->field_00E4);
      }
      if (((*(int *)(&DAT_007a8f19 + *(int *)&this_00->field_0x82a * 0x45) < (int)local_c) &&
          (this_00->field_06F7 != CASE_9)) &&
         ((this_00->field_06F7 != CASE_15 &&
          (iVar10 = thunk_FUN_004ac910(puVar16,'\b'),
          iVar10 == *(int *)(&DAT_007a8f0d + *(int *)&this_00->field_0x82a * 0x45) + -1)))) {
        STT3DSprC::StopShow((STT3DSprC *)puVar16,8);
      }
      if ((local_c == *(uint *)(&DAT_007a8f21 + *(int *)&this_00->field_0x82a * 0x45)) &&
         (local_1c != (int *)0x0)) {
        (**(code **)(*local_1c + 8))(0x6a,&this_00->field_0032);
      }
      if ((this_00->field_06F7 == CASE_9) || (this_00->field_06F7 == CASE_15)) {
        if (local_c != 0x27) {
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        local_9c.id = MESS_SYSTEMCLASSTY_000A;
        local_9c.unknown_0c = 0;
        local_9c.unknown_08 = *(dword *)&DAT_00802a38->field_0x14;
        local_9c.data = *(void **)&this_00->field_0x8;
        SystemClassTy::PostMessage((SystemClassTy *)DAT_00802a38,&local_9c.unknown_00);
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
      local_9c.unknown_08 = *(dword *)&DAT_00802a38->field_0x14;
      local_9c.data = *(void **)&this_00->field_0x8;
      SystemClassTy::PostMessage((SystemClassTy *)DAT_00802a38,&local_9c.unknown_00);
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    if (this_00->field_0459 != 0) {
      switch(this_00->field_0459) {
      case 0x65:
        local_8 = thunk_FUN_00460360((int *)this_00);
        break;
      case 0x66:
        local_8 = BackAttack(this_00,(int *)0x2,(int)unaff_EDI,(int)unaff_ESI);
        break;
      case 0x67:
        local_8 = thunk_FUN_004620f0((int *)this_00);
        break;
      case 0x68:
        local_8 = BackToDok(this_00,(int *)0x2,unaff_EDI,unaff_ESI);
        break;
      case 0x69:
        local_8 = thunk_FUN_004732d0((int *)this_00);
        break;
      case 0x6a:
        local_8 = BackPatrol(this_00,(int *)0x2);
        break;
      case 0x6b:
        local_8 = thunk_FUN_004769f0((int *)this_00);
        break;
      case 0x6c:
        local_8 = thunk_FUN_004803b0((int *)this_00);
        break;
      case 0x6d:
        local_8 = BackCapture(this_00,2);
        break;
      case 0x6e:
        local_8 = thunk_FUN_00476cc0((int *)this_00);
        break;
      case 0x6f:
        local_8 = BackAnnih(this_00,(int *)0x2);
        break;
      case 0x70:
        local_8 = BackLoadRC(this_00,2);
        break;
      case 0x71:
        local_8 = BackUnLoadRC(this_00,2);
        break;
      case 0x72:
        local_8 = thunk_FUN_004805b0(this_00,(int *)0x2);
        break;
      case 0x73:
        local_8 = BackLoadObj(this_00,(int *)0x2);
        break;
      case 0x74:
        local_8 = BackUnLoadObj(this_00,(int *)0x2);
        break;
      case 0x75:
        local_8 = BackBuild(this_00,(int *)0x2,unaff_EDI,unaff_ESI);
        break;
      case 0x76:
        local_8 = BackDismant(this_00,(int *)0x2,unaff_EDI,unaff_ESI);
        break;
      case 0x77:
        local_8 = thunk_FUN_0046d400((int *)this_00,uVar11);
        break;
      case 0x78:
        local_8 = BackWaitLoad(this_00,(int *)0x2);
        break;
      case 0x79:
        local_8 = BackTeleport(this_00,(int *)0x2);
        break;
      case 0x7a:
        local_8 = thunk_FUN_004795e0((int *)this_00);
        break;
      case 0x7b:
        local_8 = BackBring(this_00,(int *)0x2);
        break;
      default:
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x4cb);
      }
      uVar11 = local_8;
      if (local_8 == -1) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x4cd);
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
      if ((this_00->field_045D == 0x14) && (this_00->field_05C0 == 3)) {
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
          this_00->field_045D = 2;
          iVar10 = thunk_FUN_00462180(this_00,0);
          local_8 = iVar10;
          if (iVar10 == -1) {
            RaiseInternalException
                      (0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x532);
          }
          if (iVar10 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = 3;
          iVar10 = Defence(this_00,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0x536;
          local_8 = -1;
          goto LAB_0045aee3;
        }
        switch(this_00->field_045D) {
        case 1:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x65;
          uVar11 = thunk_FUN_00460360((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x53e;
          local_8 = uVar11;
          break;
        case 2:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x66;
          uVar11 = BackAttack(this_00,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x549;
          local_8 = uVar11;
          break;
        case 3:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x67;
          uVar11 = thunk_FUN_004620f0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x544;
          local_8 = uVar11;
          break;
        case 4:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x68;
          uVar11 = BackToDok(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x567;
          local_8 = uVar11;
          break;
        case 5:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x69;
          uVar11 = thunk_FUN_004732d0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x56c;
          local_8 = uVar11;
          break;
        case 6:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6a;
          uVar11 = BackPatrol(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x54e;
          local_8 = uVar11;
          break;
        case 7:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6b;
          uVar11 = thunk_FUN_004769f0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x580;
          local_8 = uVar11;
          break;
        case 8:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6c;
          uVar11 = thunk_FUN_004803b0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x5a8;
          local_8 = uVar11;
          break;
        case 9:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6d;
          uVar11 = BackCapture(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x58a;
          local_8 = uVar11;
          break;
        case 10:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6e;
          uVar11 = thunk_FUN_00476cc0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x585;
          local_8 = uVar11;
          break;
        case 0xb:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6f;
          uVar11 = BackAnnih(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x59e;
          local_8 = uVar11;
          break;
        case 0xc:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x70;
          uVar11 = BackLoadRC(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x553;
          local_8 = uVar11;
          break;
        case 0xd:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x71;
          uVar11 = BackUnLoadRC(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x562;
          local_8 = uVar11;
          break;
        case 0xe:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x72;
          uVar11 = thunk_FUN_004805b0(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x5ad;
          local_8 = uVar11;
          break;
        case 0xf:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x73;
          uVar11 = BackLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x571;
          local_8 = uVar11;
          break;
        case 0x10:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x74;
          uVar11 = BackUnLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x57b;
          local_8 = uVar11;
          break;
        case 0x11:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x75;
          uVar11 = BackBuild(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x558;
          local_8 = uVar11;
          break;
        case 0x12:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x76;
          uVar11 = BackDismant(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x5a3;
          local_8 = uVar11;
          break;
        case 0x13:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x77;
          uVar11 = thunk_FUN_0046d400((int *)this_00,uVar11);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x55d;
          local_8 = uVar11;
          break;
        case 0x14:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x78;
          uVar11 = BackWaitLoad(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x576;
          local_8 = uVar11;
          break;
        case 0x15:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x79;
          uVar11 = BackTeleport(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x594;
          local_8 = uVar11;
          break;
        case 0x16:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x7a;
          uVar11 = thunk_FUN_004795e0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x58f;
          local_8 = uVar11;
          break;
        case 0x17:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x7b;
          uVar11 = BackBring(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
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
          this_00->field_045D = 0xc;
          iVar10 = LoadRC(this_00,(int *)0x0,unaff_EDI,(int)unaff_ESI);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0x5b9;
          local_8 = -1;
          goto LAB_0045aee3;
        }
        switch(this_00->field_045D) {
        case 1:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x65;
          uVar11 = thunk_FUN_00460360((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x5c0;
          local_8 = uVar11;
          break;
        case 2:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x66;
          uVar11 = BackAttack(this_00,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x5cb;
          local_8 = uVar11;
          break;
        case 3:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x67;
          uVar11 = thunk_FUN_004620f0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x5c6;
          local_8 = uVar11;
          break;
        case 4:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x68;
          uVar11 = BackToDok(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x5e9;
          local_8 = uVar11;
          break;
        case 5:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x69;
          uVar11 = thunk_FUN_004732d0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x5ee;
          local_8 = uVar11;
          break;
        case 6:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6a;
          uVar11 = BackPatrol(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x5d0;
          local_8 = uVar11;
          break;
        case 7:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6b;
          uVar11 = thunk_FUN_004769f0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x602;
          local_8 = uVar11;
          break;
        case 8:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6c;
          uVar11 = thunk_FUN_004803b0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x62a;
          local_8 = uVar11;
          break;
        case 9:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6d;
          uVar11 = BackCapture(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x60c;
          local_8 = uVar11;
          break;
        case 10:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6e;
          uVar11 = thunk_FUN_00476cc0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x607;
          local_8 = uVar11;
          break;
        case 0xb:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6f;
          uVar11 = BackAnnih(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x620;
          local_8 = uVar11;
          break;
        case 0xc:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x70;
          uVar11 = BackLoadRC(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x5d5;
          local_8 = uVar11;
          break;
        case 0xd:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x71;
          uVar11 = BackUnLoadRC(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x5e4;
          local_8 = uVar11;
          break;
        case 0xe:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x72;
          uVar11 = thunk_FUN_004805b0(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x62f;
          local_8 = uVar11;
          break;
        case 0xf:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x73;
          uVar11 = BackLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x5f3;
          local_8 = uVar11;
          break;
        case 0x10:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x74;
          uVar11 = BackUnLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x5fd;
          local_8 = uVar11;
          break;
        case 0x11:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x75;
          uVar11 = BackBuild(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x5da;
          local_8 = uVar11;
          break;
        case 0x12:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x76;
          uVar11 = BackDismant(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x625;
          local_8 = uVar11;
          break;
        case 0x13:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x77;
          uVar11 = thunk_FUN_0046d400((int *)this_00,uVar11);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x5df;
          local_8 = uVar11;
          break;
        case 0x14:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x78;
          uVar11 = BackWaitLoad(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x5f8;
          local_8 = uVar11;
          break;
        case 0x15:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x79;
          uVar11 = BackTeleport(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x616;
          local_8 = uVar11;
          break;
        case 0x16:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x7a;
          uVar11 = thunk_FUN_004795e0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x611;
          local_8 = uVar11;
          break;
        case 0x17:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x7b;
          uVar11 = BackBring(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
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
          this_00->field_045D = 1;
          iVar10 = thunk_FUN_004602e0(this_00,0);
          local_8 = iVar10;
          if (iVar10 == -1) {
            RaiseInternalException
                      (0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x63b);
          }
          if (iVar10 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = 3;
          iVar10 = Defence(this_00,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0x63f;
          local_8 = -1;
          goto LAB_0045aee3;
        }
        switch(this_00->field_045D) {
        case 1:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x65;
          uVar11 = thunk_FUN_00460360((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x647;
          local_8 = uVar11;
          break;
        case 2:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x66;
          uVar11 = BackAttack(this_00,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x652;
          local_8 = uVar11;
          break;
        case 3:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x67;
          uVar11 = thunk_FUN_004620f0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x64d;
          local_8 = uVar11;
          break;
        case 4:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x68;
          uVar11 = BackToDok(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x670;
          local_8 = uVar11;
          break;
        case 5:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x69;
          uVar11 = thunk_FUN_004732d0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x675;
          local_8 = uVar11;
          break;
        case 6:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6a;
          uVar11 = BackPatrol(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x657;
          local_8 = uVar11;
          break;
        case 7:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6b;
          uVar11 = thunk_FUN_004769f0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x689;
          local_8 = uVar11;
          break;
        case 8:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6c;
          uVar11 = thunk_FUN_004803b0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x6b1;
          local_8 = uVar11;
          break;
        case 9:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6d;
          uVar11 = BackCapture(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x693;
          local_8 = uVar11;
          break;
        case 10:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6e;
          uVar11 = thunk_FUN_00476cc0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x68e;
          local_8 = uVar11;
          break;
        case 0xb:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6f;
          uVar11 = BackAnnih(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x6a7;
          local_8 = uVar11;
          break;
        case 0xc:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x70;
          uVar11 = BackLoadRC(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x65c;
          local_8 = uVar11;
          break;
        case 0xd:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x71;
          uVar11 = BackUnLoadRC(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x66b;
          local_8 = uVar11;
          break;
        case 0xe:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x72;
          uVar11 = thunk_FUN_004805b0(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x6b6;
          local_8 = uVar11;
          break;
        case 0xf:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x73;
          uVar11 = BackLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x67a;
          local_8 = uVar11;
          break;
        case 0x10:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x74;
          uVar11 = BackUnLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x684;
          local_8 = uVar11;
          break;
        case 0x11:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x75;
          uVar11 = BackBuild(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x661;
          local_8 = uVar11;
          break;
        case 0x12:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x76;
          uVar11 = BackDismant(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x6ac;
          local_8 = uVar11;
          break;
        case 0x13:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x77;
          uVar11 = thunk_FUN_0046d400((int *)this_00,uVar11);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x666;
          local_8 = uVar11;
          break;
        case 0x14:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x78;
          uVar11 = BackWaitLoad(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x67f;
          local_8 = uVar11;
          break;
        case 0x15:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x79;
          uVar11 = BackTeleport(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x69d;
          local_8 = uVar11;
          break;
        case 0x16:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x7a;
          uVar11 = thunk_FUN_004795e0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x698;
          local_8 = uVar11;
          break;
        case 0x17:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x7b;
          uVar11 = BackBring(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
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
          this_00->field_045D = 6;
          iVar10 = thunk_FUN_004658d0(this_00,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0x6c2;
          local_8 = -1;
          goto LAB_0045aee3;
        }
        switch(this_00->field_045D) {
        case 1:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x65;
          uVar11 = thunk_FUN_00460360((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x6c9;
          local_8 = uVar11;
          break;
        case 2:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x66;
          uVar11 = BackAttack(this_00,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x6d4;
          local_8 = uVar11;
          break;
        case 3:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x67;
          uVar11 = thunk_FUN_004620f0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x6cf;
          local_8 = uVar11;
          break;
        case 4:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x68;
          uVar11 = BackToDok(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x6f2;
          local_8 = uVar11;
          break;
        case 5:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x69;
          uVar11 = thunk_FUN_004732d0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x6f7;
          local_8 = uVar11;
          break;
        case 6:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6a;
          uVar11 = BackPatrol(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x6d9;
          local_8 = uVar11;
          break;
        case 7:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6b;
          uVar11 = thunk_FUN_004769f0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x70b;
          local_8 = uVar11;
          break;
        case 8:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6c;
          uVar11 = thunk_FUN_004803b0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x733;
          local_8 = uVar11;
          break;
        case 9:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6d;
          uVar11 = BackCapture(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x715;
          local_8 = uVar11;
          break;
        case 10:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6e;
          uVar11 = thunk_FUN_00476cc0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x710;
          local_8 = uVar11;
          break;
        case 0xb:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6f;
          uVar11 = BackAnnih(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x729;
          local_8 = uVar11;
          break;
        case 0xc:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x70;
          uVar11 = BackLoadRC(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x6de;
          local_8 = uVar11;
          break;
        case 0xd:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x71;
          uVar11 = BackUnLoadRC(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x6ed;
          local_8 = uVar11;
          break;
        case 0xe:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x72;
          uVar11 = thunk_FUN_004805b0(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x738;
          local_8 = uVar11;
          break;
        case 0xf:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x73;
          uVar11 = BackLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x6fc;
          local_8 = uVar11;
          break;
        case 0x10:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x74;
          uVar11 = BackUnLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x706;
          local_8 = uVar11;
          break;
        case 0x11:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x75;
          uVar11 = BackBuild(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x6e3;
          local_8 = uVar11;
          break;
        case 0x12:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x76;
          uVar11 = BackDismant(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x72e;
          local_8 = uVar11;
          break;
        case 0x13:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x77;
          uVar11 = thunk_FUN_0046d400((int *)this_00,uVar11);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x6e8;
          local_8 = uVar11;
          break;
        case 0x14:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x78;
          uVar11 = BackWaitLoad(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x701;
          local_8 = uVar11;
          break;
        case 0x15:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x79;
          uVar11 = BackTeleport(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x71f;
          local_8 = uVar11;
          break;
        case 0x16:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x7a;
          uVar11 = thunk_FUN_004795e0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x71a;
          local_8 = uVar11;
          break;
        case 0x17:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x7b;
          uVar11 = BackBring(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
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
          this_00->field_045D = 0x11;
          iVar10 = Build(this_00,0);
          local_8 = iVar10;
          if (iVar10 == -1) {
            RaiseInternalException
                      (0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x744);
          }
          if (iVar10 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = 3;
          iVar10 = Defence(this_00,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0x748;
          local_8 = -1;
          goto LAB_0045aee3;
        }
        switch(this_00->field_045D) {
        case 1:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x65;
          uVar11 = thunk_FUN_00460360((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x750;
          local_8 = uVar11;
          break;
        case 2:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x66;
          uVar11 = BackAttack(this_00,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x75b;
          local_8 = uVar11;
          break;
        case 3:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x67;
          uVar11 = thunk_FUN_004620f0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x756;
          local_8 = uVar11;
          break;
        case 4:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x68;
          uVar11 = BackToDok(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x779;
          local_8 = uVar11;
          break;
        case 5:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x69;
          uVar11 = thunk_FUN_004732d0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x77e;
          local_8 = uVar11;
          break;
        case 6:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6a;
          uVar11 = BackPatrol(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x760;
          local_8 = uVar11;
          break;
        case 7:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6b;
          uVar11 = thunk_FUN_004769f0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x792;
          local_8 = uVar11;
          break;
        case 8:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6c;
          uVar11 = thunk_FUN_004803b0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x7ba;
          local_8 = uVar11;
          break;
        case 9:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6d;
          uVar11 = BackCapture(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x79c;
          local_8 = uVar11;
          break;
        case 10:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6e;
          uVar11 = thunk_FUN_00476cc0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x797;
          local_8 = uVar11;
          break;
        case 0xb:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6f;
          uVar11 = BackAnnih(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x7b0;
          local_8 = uVar11;
          break;
        case 0xc:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x70;
          uVar11 = BackLoadRC(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x765;
          local_8 = uVar11;
          break;
        case 0xd:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x71;
          uVar11 = BackUnLoadRC(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x774;
          local_8 = uVar11;
          break;
        case 0xe:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x72;
          uVar11 = thunk_FUN_004805b0(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x7bf;
          local_8 = uVar11;
          break;
        case 0xf:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x73;
          uVar11 = BackLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x783;
          local_8 = uVar11;
          break;
        case 0x10:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x74;
          uVar11 = BackUnLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x78d;
          local_8 = uVar11;
          break;
        case 0x11:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x75;
          uVar11 = BackBuild(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x76a;
          local_8 = uVar11;
          break;
        case 0x12:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x76;
          uVar11 = BackDismant(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x7b5;
          local_8 = uVar11;
          break;
        case 0x13:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x77;
          uVar11 = thunk_FUN_0046d400((int *)this_00,uVar11);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x76f;
          local_8 = uVar11;
          break;
        case 0x14:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x78;
          uVar11 = BackWaitLoad(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x788;
          local_8 = uVar11;
          break;
        case 0x15:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x79;
          uVar11 = BackTeleport(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x7a6;
          local_8 = uVar11;
          break;
        case 0x16:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x7a;
          uVar11 = thunk_FUN_004795e0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x7a1;
          local_8 = uVar11;
          break;
        case 0x17:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x7b;
          uVar11 = BackBring(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
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
          this_00->field_045D = 0xd;
          iVar10 = UnLoadRC(this_00,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0x7cb;
          local_8 = -1;
          goto LAB_0045aee3;
        }
        switch(this_00->field_045D) {
        case 1:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x65;
          uVar11 = thunk_FUN_00460360((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x7d2;
          local_8 = uVar11;
          break;
        case 2:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x66;
          uVar11 = BackAttack(this_00,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x7dc;
          local_8 = uVar11;
          break;
        case 3:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x67;
          uVar11 = thunk_FUN_004620f0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x7d7;
          local_8 = uVar11;
          break;
        case 4:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x68;
          uVar11 = BackToDok(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x7fa;
          local_8 = uVar11;
          break;
        case 5:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x69;
          uVar11 = thunk_FUN_004732d0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x7ff;
          local_8 = uVar11;
          break;
        case 6:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6a;
          uVar11 = BackPatrol(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x7e1;
          local_8 = uVar11;
          break;
        case 7:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6b;
          uVar11 = thunk_FUN_004769f0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x813;
          local_8 = uVar11;
          break;
        case 8:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6c;
          uVar11 = thunk_FUN_004803b0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x83b;
          local_8 = uVar11;
          break;
        case 9:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6d;
          uVar11 = BackCapture(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x81d;
          local_8 = uVar11;
          break;
        case 10:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6e;
          uVar11 = thunk_FUN_00476cc0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x818;
          local_8 = uVar11;
          break;
        case 0xb:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6f;
          uVar11 = BackAnnih(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x831;
          local_8 = uVar11;
          break;
        case 0xc:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x70;
          uVar11 = BackLoadRC(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x7e6;
          local_8 = uVar11;
          break;
        case 0xd:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x71;
          uVar11 = BackUnLoadRC(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x7f5;
          local_8 = uVar11;
          break;
        case 0xe:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x72;
          uVar11 = thunk_FUN_004805b0(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x840;
          local_8 = uVar11;
          break;
        case 0xf:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x73;
          uVar11 = BackLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x804;
          local_8 = uVar11;
          break;
        case 0x10:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x74;
          uVar11 = BackUnLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x80e;
          local_8 = uVar11;
          break;
        case 0x11:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x75;
          uVar11 = BackBuild(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x7eb;
          local_8 = uVar11;
          break;
        case 0x12:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x76;
          uVar11 = BackDismant(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x836;
          local_8 = uVar11;
          break;
        case 0x13:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x77;
          uVar11 = thunk_FUN_0046d400((int *)this_00,uVar11);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x7f0;
          local_8 = uVar11;
          break;
        case 0x14:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x78;
          uVar11 = BackWaitLoad(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x809;
          local_8 = uVar11;
          break;
        case 0x15:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x79;
          uVar11 = BackTeleport(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x827;
          local_8 = uVar11;
          break;
        case 0x16:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x7a;
          uVar11 = thunk_FUN_004795e0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x822;
          local_8 = uVar11;
          break;
        case 0x17:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x7b;
          uVar11 = BackBring(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
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
          this_00->field_045D = 4;
          iVar10 = ToDok(this_00,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0x84c;
          local_8 = -1;
          goto LAB_0045aee3;
        }
        switch(this_00->field_045D) {
        case 1:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x65;
          uVar11 = thunk_FUN_00460360((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x853;
          local_8 = uVar11;
          break;
        case 2:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x66;
          uVar11 = BackAttack(this_00,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x85d;
          local_8 = uVar11;
          break;
        case 3:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x67;
          uVar11 = thunk_FUN_004620f0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x858;
          local_8 = uVar11;
          break;
        case 4:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x68;
          uVar11 = BackToDok(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x87b;
          local_8 = uVar11;
          break;
        case 5:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x69;
          uVar11 = thunk_FUN_004732d0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x880;
          local_8 = uVar11;
          break;
        case 6:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6a;
          uVar11 = BackPatrol(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x862;
          local_8 = uVar11;
          break;
        case 7:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6b;
          uVar11 = thunk_FUN_004769f0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x894;
          local_8 = uVar11;
          break;
        case 8:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6c;
          uVar11 = thunk_FUN_004803b0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x8bc;
          local_8 = uVar11;
          break;
        case 9:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6d;
          uVar11 = BackCapture(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x89e;
          local_8 = uVar11;
          break;
        case 10:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6e;
          uVar11 = thunk_FUN_00476cc0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x899;
          local_8 = uVar11;
          break;
        case 0xb:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6f;
          uVar11 = BackAnnih(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x8b2;
          local_8 = uVar11;
          break;
        case 0xc:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x70;
          uVar11 = BackLoadRC(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x867;
          local_8 = uVar11;
          break;
        case 0xd:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x71;
          uVar11 = BackUnLoadRC(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x876;
          local_8 = uVar11;
          break;
        case 0xe:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x72;
          uVar11 = thunk_FUN_004805b0(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x8c1;
          local_8 = uVar11;
          break;
        case 0xf:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x73;
          uVar11 = BackLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x885;
          local_8 = uVar11;
          break;
        case 0x10:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x74;
          uVar11 = BackUnLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x88f;
          local_8 = uVar11;
          break;
        case 0x11:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x75;
          uVar11 = BackBuild(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x86c;
          local_8 = uVar11;
          break;
        case 0x12:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x76;
          uVar11 = BackDismant(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x8b7;
          local_8 = uVar11;
          break;
        case 0x13:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x77;
          uVar11 = thunk_FUN_0046d400((int *)this_00,uVar11);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x871;
          local_8 = uVar11;
          break;
        case 0x14:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x78;
          uVar11 = BackWaitLoad(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x88a;
          local_8 = uVar11;
          break;
        case 0x15:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x79;
          uVar11 = BackTeleport(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x8a8;
          local_8 = uVar11;
          break;
        case 0x16:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x7a;
          uVar11 = thunk_FUN_004795e0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x8a3;
          local_8 = uVar11;
          break;
        case 0x17:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x7b;
          uVar11 = BackBring(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
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
          this_00->field_045D = 5;
          iVar10 = Guard(this_00,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0x8cd;
          local_8 = -1;
          goto LAB_0045aee3;
        }
        switch(this_00->field_045D) {
        case 1:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x65;
          uVar11 = thunk_FUN_00460360((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x8d4;
          local_8 = uVar11;
          break;
        case 2:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x66;
          uVar11 = BackAttack(this_00,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x8de;
          local_8 = uVar11;
          break;
        case 3:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x67;
          uVar11 = thunk_FUN_004620f0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x8d9;
          local_8 = uVar11;
          break;
        case 4:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x68;
          uVar11 = BackToDok(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x8fc;
          local_8 = uVar11;
          break;
        case 5:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x69;
          uVar11 = thunk_FUN_004732d0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x901;
          local_8 = uVar11;
          break;
        case 6:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6a;
          uVar11 = BackPatrol(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x8e3;
          local_8 = uVar11;
          break;
        case 7:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6b;
          uVar11 = thunk_FUN_004769f0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x915;
          local_8 = uVar11;
          break;
        case 8:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6c;
          uVar11 = thunk_FUN_004803b0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x93d;
          local_8 = uVar11;
          break;
        case 9:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6d;
          uVar11 = BackCapture(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x91f;
          local_8 = uVar11;
          break;
        case 10:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6e;
          uVar11 = thunk_FUN_00476cc0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x91a;
          local_8 = uVar11;
          break;
        case 0xb:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6f;
          uVar11 = BackAnnih(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x933;
          local_8 = uVar11;
          break;
        case 0xc:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x70;
          uVar11 = BackLoadRC(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x8e8;
          local_8 = uVar11;
          break;
        case 0xd:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x71;
          uVar11 = BackUnLoadRC(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x8f7;
          local_8 = uVar11;
          break;
        case 0xe:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x72;
          uVar11 = thunk_FUN_004805b0(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x942;
          local_8 = uVar11;
          break;
        case 0xf:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x73;
          uVar11 = BackLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x906;
          local_8 = uVar11;
          break;
        case 0x10:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x74;
          uVar11 = BackUnLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x910;
          local_8 = uVar11;
          break;
        case 0x11:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x75;
          uVar11 = BackBuild(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x8ed;
          local_8 = uVar11;
          break;
        case 0x12:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x76;
          uVar11 = BackDismant(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x938;
          local_8 = uVar11;
          break;
        case 0x13:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x77;
          uVar11 = thunk_FUN_0046d400((int *)this_00,uVar11);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x8f2;
          local_8 = uVar11;
          break;
        case 0x14:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x78;
          uVar11 = BackWaitLoad(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x90b;
          local_8 = uVar11;
          break;
        case 0x15:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x79;
          uVar11 = BackTeleport(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x929;
          local_8 = uVar11;
          break;
        case 0x16:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x7a;
          uVar11 = thunk_FUN_004795e0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x924;
          local_8 = uVar11;
          break;
        case 0x17:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x7b;
          uVar11 = BackBring(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
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
          this_00->field_045D = 0xf;
          iVar10 = LoadObj(this_00,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0x94e;
          local_8 = -1;
          goto LAB_0045aee3;
        }
        switch(this_00->field_045D) {
        case 1:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x65;
          uVar11 = thunk_FUN_00460360((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x955;
          local_8 = uVar11;
          break;
        case 2:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x66;
          uVar11 = BackAttack(this_00,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x95f;
          local_8 = uVar11;
          break;
        case 3:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x67;
          uVar11 = thunk_FUN_004620f0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x95a;
          local_8 = uVar11;
          break;
        case 4:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x68;
          uVar11 = BackToDok(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x97d;
          local_8 = uVar11;
          break;
        case 5:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x69;
          uVar11 = thunk_FUN_004732d0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x982;
          local_8 = uVar11;
          break;
        case 6:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6a;
          uVar11 = BackPatrol(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x964;
          local_8 = uVar11;
          break;
        case 7:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6b;
          uVar11 = thunk_FUN_004769f0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x996;
          local_8 = uVar11;
          break;
        case 8:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6c;
          uVar11 = thunk_FUN_004803b0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x9be;
          local_8 = uVar11;
          break;
        case 9:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6d;
          uVar11 = BackCapture(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x9a0;
          local_8 = uVar11;
          break;
        case 10:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6e;
          uVar11 = thunk_FUN_00476cc0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x99b;
          local_8 = uVar11;
          break;
        case 0xb:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6f;
          uVar11 = BackAnnih(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x9b4;
          local_8 = uVar11;
          break;
        case 0xc:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x70;
          uVar11 = BackLoadRC(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x969;
          local_8 = uVar11;
          break;
        case 0xd:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x71;
          uVar11 = BackUnLoadRC(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x978;
          local_8 = uVar11;
          break;
        case 0xe:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x72;
          uVar11 = thunk_FUN_004805b0(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x9c3;
          local_8 = uVar11;
          break;
        case 0xf:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x73;
          uVar11 = BackLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x987;
          local_8 = uVar11;
          break;
        case 0x10:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x74;
          uVar11 = BackUnLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x991;
          local_8 = uVar11;
          break;
        case 0x11:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x75;
          uVar11 = BackBuild(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x96e;
          local_8 = uVar11;
          break;
        case 0x12:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x76;
          uVar11 = BackDismant(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x9b9;
          local_8 = uVar11;
          break;
        case 0x13:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x77;
          uVar11 = thunk_FUN_0046d400((int *)this_00,uVar11);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x973;
          local_8 = uVar11;
          break;
        case 0x14:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x78;
          uVar11 = BackWaitLoad(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x98c;
          local_8 = uVar11;
          break;
        case 0x15:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x79;
          uVar11 = BackTeleport(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x9aa;
          local_8 = uVar11;
          break;
        case 0x16:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x7a;
          uVar11 = thunk_FUN_004795e0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x9a5;
          local_8 = uVar11;
          break;
        case 0x17:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x7b;
          uVar11 = BackBring(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
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
          this_00->field_045D = 0x14;
          iVar10 = WaitLoad(this_00,(void *)0x0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0x9cf;
          local_8 = -1;
          goto LAB_0045aee3;
        }
        switch(this_00->field_045D) {
        case 1:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x65;
          uVar11 = thunk_FUN_00460360((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x9d6;
          local_8 = uVar11;
          break;
        case 2:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x66;
          uVar11 = BackAttack(this_00,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x9e0;
          local_8 = uVar11;
          break;
        case 3:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x67;
          uVar11 = thunk_FUN_004620f0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x9db;
          local_8 = uVar11;
          break;
        case 4:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x68;
          uVar11 = BackToDok(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x9fe;
          local_8 = uVar11;
          break;
        case 5:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x69;
          uVar11 = thunk_FUN_004732d0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xa03;
          local_8 = uVar11;
          break;
        case 6:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6a;
          uVar11 = BackPatrol(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x9e5;
          local_8 = uVar11;
          break;
        case 7:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6b;
          uVar11 = thunk_FUN_004769f0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xa17;
          local_8 = uVar11;
          break;
        case 8:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6c;
          uVar11 = thunk_FUN_004803b0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xa3f;
          local_8 = uVar11;
          break;
        case 9:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6d;
          uVar11 = BackCapture(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xa21;
          local_8 = uVar11;
          break;
        case 10:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6e;
          uVar11 = thunk_FUN_00476cc0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xa1c;
          local_8 = uVar11;
          break;
        case 0xb:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6f;
          uVar11 = BackAnnih(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xa35;
          local_8 = uVar11;
          break;
        case 0xc:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x70;
          uVar11 = BackLoadRC(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x9ea;
          local_8 = uVar11;
          break;
        case 0xd:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x71;
          uVar11 = BackUnLoadRC(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x9f9;
          local_8 = uVar11;
          break;
        case 0xe:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x72;
          uVar11 = thunk_FUN_004805b0(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xa44;
          local_8 = uVar11;
          break;
        case 0xf:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x73;
          uVar11 = BackLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xa08;
          local_8 = uVar11;
          break;
        case 0x10:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x74;
          uVar11 = BackUnLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xa12;
          local_8 = uVar11;
          break;
        case 0x11:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x75;
          uVar11 = BackBuild(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x9ef;
          local_8 = uVar11;
          break;
        case 0x12:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x76;
          uVar11 = BackDismant(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xa3a;
          local_8 = uVar11;
          break;
        case 0x13:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x77;
          uVar11 = thunk_FUN_0046d400((int *)this_00,uVar11);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x9f4;
          local_8 = uVar11;
          break;
        case 0x14:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x78;
          uVar11 = BackWaitLoad(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xa0d;
          local_8 = uVar11;
          break;
        case 0x15:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x79;
          uVar11 = BackTeleport(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xa2b;
          local_8 = uVar11;
          break;
        case 0x16:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x7a;
          uVar11 = thunk_FUN_004795e0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xa26;
          local_8 = uVar11;
          break;
        case 0x17:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x7b;
          uVar11 = BackBring(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
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
          this_00->field_045D = 0x10;
          iVar10 = UnLoadObj(this_00,(undefined4 *)0x0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0xa50;
          local_8 = -1;
          goto LAB_0045aee3;
        }
        switch(this_00->field_045D) {
        case 1:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x65;
          uVar11 = thunk_FUN_00460360((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xa57;
          local_8 = uVar11;
          break;
        case 2:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x66;
          uVar11 = BackAttack(this_00,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xa61;
          local_8 = uVar11;
          break;
        case 3:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x67;
          uVar11 = thunk_FUN_004620f0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xa5c;
          local_8 = uVar11;
          break;
        case 4:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x68;
          uVar11 = BackToDok(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xa7f;
          local_8 = uVar11;
          break;
        case 5:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x69;
          uVar11 = thunk_FUN_004732d0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xa84;
          local_8 = uVar11;
          break;
        case 6:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6a;
          uVar11 = BackPatrol(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xa66;
          local_8 = uVar11;
          break;
        case 7:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6b;
          uVar11 = thunk_FUN_004769f0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xa98;
          local_8 = uVar11;
          break;
        case 8:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6c;
          uVar11 = thunk_FUN_004803b0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xac0;
          local_8 = uVar11;
          break;
        case 9:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6d;
          uVar11 = BackCapture(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xaa2;
          local_8 = uVar11;
          break;
        case 10:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6e;
          uVar11 = thunk_FUN_00476cc0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xa9d;
          local_8 = uVar11;
          break;
        case 0xb:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6f;
          uVar11 = BackAnnih(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xab6;
          local_8 = uVar11;
          break;
        case 0xc:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x70;
          uVar11 = BackLoadRC(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xa6b;
          local_8 = uVar11;
          break;
        case 0xd:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x71;
          uVar11 = BackUnLoadRC(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xa7a;
          local_8 = uVar11;
          break;
        case 0xe:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x72;
          uVar11 = thunk_FUN_004805b0(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xac5;
          local_8 = uVar11;
          break;
        case 0xf:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x73;
          uVar11 = BackLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xa89;
          local_8 = uVar11;
          break;
        case 0x10:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x74;
          uVar11 = BackUnLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xa93;
          local_8 = uVar11;
          break;
        case 0x11:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x75;
          uVar11 = BackBuild(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xa70;
          local_8 = uVar11;
          break;
        case 0x12:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x76;
          uVar11 = BackDismant(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xabb;
          local_8 = uVar11;
          break;
        case 0x13:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x77;
          uVar11 = thunk_FUN_0046d400((int *)this_00,uVar11);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xa75;
          local_8 = uVar11;
          break;
        case 0x14:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x78;
          uVar11 = BackWaitLoad(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xa8e;
          local_8 = uVar11;
          break;
        case 0x15:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x79;
          uVar11 = BackTeleport(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xaac;
          local_8 = uVar11;
          break;
        case 0x16:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x7a;
          uVar11 = thunk_FUN_004795e0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xaa7;
          local_8 = uVar11;
          break;
        case 0x17:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x7b;
          uVar11 = BackBring(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
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
          this_00->field_045D = 7;
          iVar10 = SetMine(this_00,(int *)0x0,unaff_EDI,(int)unaff_ESI);
          local_8 = iVar10;
          if (iVar10 == -1) {
            RaiseInternalException
                      (0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0xad1);
          }
          if (iVar10 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = 3;
          iVar10 = Defence(this_00,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0xad5;
          local_8 = -1;
          goto LAB_0045aee3;
        }
        switch(this_00->field_045D) {
        case 1:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x65;
          uVar11 = thunk_FUN_00460360((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xadd;
          local_8 = uVar11;
          break;
        case 2:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x66;
          uVar11 = BackAttack(this_00,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xae8;
          local_8 = uVar11;
          break;
        case 3:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x67;
          uVar11 = thunk_FUN_004620f0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xae3;
          local_8 = uVar11;
          break;
        case 4:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x68;
          uVar11 = BackToDok(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xb06;
          local_8 = uVar11;
          break;
        case 5:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x69;
          uVar11 = thunk_FUN_004732d0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xb0b;
          local_8 = uVar11;
          break;
        case 6:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6a;
          uVar11 = BackPatrol(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xaed;
          local_8 = uVar11;
          break;
        case 7:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6b;
          uVar11 = thunk_FUN_004769f0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xb1f;
          local_8 = uVar11;
          break;
        case 8:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6c;
          uVar11 = thunk_FUN_004803b0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xb47;
          local_8 = uVar11;
          break;
        case 9:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6d;
          uVar11 = BackCapture(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xb29;
          local_8 = uVar11;
          break;
        case 10:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6e;
          uVar11 = thunk_FUN_00476cc0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xb24;
          local_8 = uVar11;
          break;
        case 0xb:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6f;
          uVar11 = BackAnnih(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xb3d;
          local_8 = uVar11;
          break;
        case 0xc:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x70;
          uVar11 = BackLoadRC(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xaf2;
          local_8 = uVar11;
          break;
        case 0xd:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x71;
          uVar11 = BackUnLoadRC(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xb01;
          local_8 = uVar11;
          break;
        case 0xe:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x72;
          uVar11 = thunk_FUN_004805b0(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xb4c;
          local_8 = uVar11;
          break;
        case 0xf:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x73;
          uVar11 = BackLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xb10;
          local_8 = uVar11;
          break;
        case 0x10:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x74;
          uVar11 = BackUnLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xb1a;
          local_8 = uVar11;
          break;
        case 0x11:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x75;
          uVar11 = BackBuild(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xaf7;
          local_8 = uVar11;
          break;
        case 0x12:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x76;
          uVar11 = BackDismant(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xb42;
          local_8 = uVar11;
          break;
        case 0x13:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x77;
          uVar11 = thunk_FUN_0046d400((int *)this_00,uVar11);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xafc;
          local_8 = uVar11;
          break;
        case 0x14:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x78;
          uVar11 = BackWaitLoad(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xb15;
          local_8 = uVar11;
          break;
        case 0x15:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x79;
          uVar11 = BackTeleport(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xb33;
          local_8 = uVar11;
          break;
        case 0x16:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x7a;
          uVar11 = thunk_FUN_004795e0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xb2e;
          local_8 = uVar11;
          break;
        case 0x17:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x7b;
          uVar11 = BackBring(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
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
          this_00->field_045D = 10;
          iVar10 = DCBomb(this_00,0);
          local_8 = iVar10;
          if (iVar10 == -1) {
            RaiseInternalException
                      (0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0xb58);
          }
          if (iVar10 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = 3;
          iVar10 = Defence(this_00,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0xb5c;
          local_8 = -1;
          goto LAB_0045aee3;
        }
        switch(this_00->field_045D) {
        case 1:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x65;
          uVar11 = thunk_FUN_00460360((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xb64;
          local_8 = uVar11;
          break;
        case 2:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x66;
          uVar11 = BackAttack(this_00,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xb6f;
          local_8 = uVar11;
          break;
        case 3:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x67;
          uVar11 = thunk_FUN_004620f0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xb6a;
          local_8 = uVar11;
          break;
        case 4:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x68;
          uVar11 = BackToDok(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xb8d;
          local_8 = uVar11;
          break;
        case 5:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x69;
          uVar11 = thunk_FUN_004732d0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xb92;
          local_8 = uVar11;
          break;
        case 6:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6a;
          uVar11 = BackPatrol(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xb74;
          local_8 = uVar11;
          break;
        case 7:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6b;
          uVar11 = thunk_FUN_004769f0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xba6;
          local_8 = uVar11;
          break;
        case 8:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6c;
          uVar11 = thunk_FUN_004803b0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xbce;
          local_8 = uVar11;
          break;
        case 9:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6d;
          uVar11 = BackCapture(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xbb0;
          local_8 = uVar11;
          break;
        case 10:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6e;
          uVar11 = thunk_FUN_00476cc0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xbab;
          local_8 = uVar11;
          break;
        case 0xb:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6f;
          uVar11 = BackAnnih(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xbc4;
          local_8 = uVar11;
          break;
        case 0xc:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x70;
          uVar11 = BackLoadRC(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xb79;
          local_8 = uVar11;
          break;
        case 0xd:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x71;
          uVar11 = BackUnLoadRC(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xb88;
          local_8 = uVar11;
          break;
        case 0xe:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x72;
          uVar11 = thunk_FUN_004805b0(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xbd3;
          local_8 = uVar11;
          break;
        case 0xf:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x73;
          uVar11 = BackLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xb97;
          local_8 = uVar11;
          break;
        case 0x10:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x74;
          uVar11 = BackUnLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xba1;
          local_8 = uVar11;
          break;
        case 0x11:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x75;
          uVar11 = BackBuild(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xb7e;
          local_8 = uVar11;
          break;
        case 0x12:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x76;
          uVar11 = BackDismant(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xbc9;
          local_8 = uVar11;
          break;
        case 0x13:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x77;
          uVar11 = thunk_FUN_0046d400((int *)this_00,uVar11);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xb83;
          local_8 = uVar11;
          break;
        case 0x14:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x78;
          uVar11 = BackWaitLoad(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xb9c;
          local_8 = uVar11;
          break;
        case 0x15:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x79;
          uVar11 = BackTeleport(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xbba;
          local_8 = uVar11;
          break;
        case 0x16:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x7a;
          uVar11 = thunk_FUN_004795e0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xbb5;
          local_8 = uVar11;
          break;
        case 0x17:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x7b;
          uVar11 = BackBring(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
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
          this_00->field_045D = 9;
          iVar10 = Capture(this_00,0);
          local_8 = iVar10;
          if (iVar10 == -1) {
            RaiseInternalException
                      (0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0xbdf);
          }
          if (iVar10 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = 3;
          iVar10 = Defence(this_00,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0xbe3;
          local_8 = -1;
          goto LAB_0045aee3;
        }
        switch(this_00->field_045D) {
        case 1:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x65;
          uVar11 = thunk_FUN_00460360((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xbeb;
          local_8 = uVar11;
          break;
        case 2:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x66;
          uVar11 = BackAttack(this_00,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xbf6;
          local_8 = uVar11;
          break;
        case 3:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x67;
          uVar11 = thunk_FUN_004620f0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xbf1;
          local_8 = uVar11;
          break;
        case 4:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x68;
          uVar11 = BackToDok(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xc14;
          local_8 = uVar11;
          break;
        case 5:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x69;
          uVar11 = thunk_FUN_004732d0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xc19;
          local_8 = uVar11;
          break;
        case 6:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6a;
          uVar11 = BackPatrol(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xbfb;
          local_8 = uVar11;
          break;
        case 7:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6b;
          uVar11 = thunk_FUN_004769f0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xc2d;
          local_8 = uVar11;
          break;
        case 8:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6c;
          uVar11 = thunk_FUN_004803b0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xc55;
          local_8 = uVar11;
          break;
        case 9:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6d;
          uVar11 = BackCapture(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xc37;
          local_8 = uVar11;
          break;
        case 10:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6e;
          uVar11 = thunk_FUN_00476cc0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xc32;
          local_8 = uVar11;
          break;
        case 0xb:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6f;
          uVar11 = BackAnnih(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xc4b;
          local_8 = uVar11;
          break;
        case 0xc:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x70;
          uVar11 = BackLoadRC(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xc00;
          local_8 = uVar11;
          break;
        case 0xd:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x71;
          uVar11 = BackUnLoadRC(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xc0f;
          local_8 = uVar11;
          break;
        case 0xe:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x72;
          uVar11 = thunk_FUN_004805b0(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xc5a;
          local_8 = uVar11;
          break;
        case 0xf:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x73;
          uVar11 = BackLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xc1e;
          local_8 = uVar11;
          break;
        case 0x10:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x74;
          uVar11 = BackUnLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xc28;
          local_8 = uVar11;
          break;
        case 0x11:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x75;
          uVar11 = BackBuild(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xc05;
          local_8 = uVar11;
          break;
        case 0x12:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x76;
          uVar11 = BackDismant(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xc50;
          local_8 = uVar11;
          break;
        case 0x13:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x77;
          uVar11 = thunk_FUN_0046d400((int *)this_00,uVar11);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xc0a;
          local_8 = uVar11;
          break;
        case 0x14:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x78;
          uVar11 = BackWaitLoad(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xc23;
          local_8 = uVar11;
          break;
        case 0x15:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x79;
          uVar11 = BackTeleport(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xc41;
          local_8 = uVar11;
          break;
        case 0x16:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x7a;
          uVar11 = thunk_FUN_004795e0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xc3c;
          local_8 = uVar11;
          break;
        case 0x17:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x7b;
          uVar11 = BackBring(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
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
          this_00->field_045D = 0x16;
          iVar10 = Recharge(this_00,0);
          local_8 = iVar10;
          if (iVar10 == -1) {
            RaiseInternalException
                      (0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0xc66);
          }
          if (iVar10 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = 3;
          iVar10 = Defence(this_00,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0xc6a;
          local_8 = -1;
          goto LAB_0045aee3;
        }
        switch(this_00->field_045D) {
        case 1:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x65;
          uVar11 = thunk_FUN_00460360((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xc72;
          local_8 = uVar11;
          break;
        case 2:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x66;
          uVar11 = BackAttack(this_00,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xc7d;
          local_8 = uVar11;
          break;
        case 3:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x67;
          uVar11 = thunk_FUN_004620f0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xc78;
          local_8 = uVar11;
          break;
        case 4:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x68;
          uVar11 = BackToDok(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xc9b;
          local_8 = uVar11;
          break;
        case 5:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x69;
          uVar11 = thunk_FUN_004732d0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xca0;
          local_8 = uVar11;
          break;
        case 6:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6a;
          uVar11 = BackPatrol(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xc82;
          local_8 = uVar11;
          break;
        case 7:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6b;
          uVar11 = thunk_FUN_004769f0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xcb4;
          local_8 = uVar11;
          break;
        case 8:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6c;
          uVar11 = thunk_FUN_004803b0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xcdc;
          local_8 = uVar11;
          break;
        case 9:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6d;
          uVar11 = BackCapture(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xcbe;
          local_8 = uVar11;
          break;
        case 10:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6e;
          uVar11 = thunk_FUN_00476cc0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xcb9;
          local_8 = uVar11;
          break;
        case 0xb:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6f;
          uVar11 = BackAnnih(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xcd2;
          local_8 = uVar11;
          break;
        case 0xc:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x70;
          uVar11 = BackLoadRC(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xc87;
          local_8 = uVar11;
          break;
        case 0xd:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x71;
          uVar11 = BackUnLoadRC(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xc96;
          local_8 = uVar11;
          break;
        case 0xe:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x72;
          uVar11 = thunk_FUN_004805b0(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xce1;
          local_8 = uVar11;
          break;
        case 0xf:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x73;
          uVar11 = BackLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xca5;
          local_8 = uVar11;
          break;
        case 0x10:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x74;
          uVar11 = BackUnLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xcaf;
          local_8 = uVar11;
          break;
        case 0x11:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x75;
          uVar11 = BackBuild(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xc8c;
          local_8 = uVar11;
          break;
        case 0x12:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x76;
          uVar11 = BackDismant(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xcd7;
          local_8 = uVar11;
          break;
        case 0x13:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x77;
          uVar11 = thunk_FUN_0046d400((int *)this_00,uVar11);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xc91;
          local_8 = uVar11;
          break;
        case 0x14:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x78;
          uVar11 = BackWaitLoad(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xcaa;
          local_8 = uVar11;
          break;
        case 0x15:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x79;
          uVar11 = BackTeleport(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xcc8;
          local_8 = uVar11;
          break;
        case 0x16:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x7a;
          uVar11 = thunk_FUN_004795e0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xcc3;
          local_8 = uVar11;
          break;
        case 0x17:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x7b;
          uVar11 = BackBring(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
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
          this_00->field_045D = 0x15;
          iVar10 = Teleport(this_00,0);
          local_8 = iVar10;
          if (iVar10 == -1) {
            RaiseInternalException
                      (0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0xced);
          }
          if (iVar10 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = 3;
          iVar10 = Defence(this_00,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0xcf1;
          local_8 = -1;
          goto LAB_0045aee3;
        }
        switch(this_00->field_045D) {
        case 1:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x65;
          uVar11 = thunk_FUN_00460360((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xcf9;
          local_8 = uVar11;
          break;
        case 2:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x66;
          uVar11 = BackAttack(this_00,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xd04;
          local_8 = uVar11;
          break;
        case 3:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x67;
          uVar11 = thunk_FUN_004620f0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xcff;
          local_8 = uVar11;
          break;
        case 4:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x68;
          uVar11 = BackToDok(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xd22;
          local_8 = uVar11;
          break;
        case 5:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x69;
          uVar11 = thunk_FUN_004732d0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xd27;
          local_8 = uVar11;
          break;
        case 6:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6a;
          uVar11 = BackPatrol(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xd09;
          local_8 = uVar11;
          break;
        case 7:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6b;
          uVar11 = thunk_FUN_004769f0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xd3b;
          local_8 = uVar11;
          break;
        case 8:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6c;
          uVar11 = thunk_FUN_004803b0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xd63;
          local_8 = uVar11;
          break;
        case 9:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6d;
          uVar11 = BackCapture(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xd45;
          local_8 = uVar11;
          break;
        case 10:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6e;
          uVar11 = thunk_FUN_00476cc0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xd40;
          local_8 = uVar11;
          break;
        case 0xb:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6f;
          uVar11 = BackAnnih(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xd59;
          local_8 = uVar11;
          break;
        case 0xc:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x70;
          uVar11 = BackLoadRC(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xd0e;
          local_8 = uVar11;
          break;
        case 0xd:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x71;
          uVar11 = BackUnLoadRC(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xd1d;
          local_8 = uVar11;
          break;
        case 0xe:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x72;
          uVar11 = thunk_FUN_004805b0(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xd68;
          local_8 = uVar11;
          break;
        case 0xf:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x73;
          uVar11 = BackLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xd2c;
          local_8 = uVar11;
          break;
        case 0x10:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x74;
          uVar11 = BackUnLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xd36;
          local_8 = uVar11;
          break;
        case 0x11:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x75;
          uVar11 = BackBuild(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xd13;
          local_8 = uVar11;
          break;
        case 0x12:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x76;
          uVar11 = BackDismant(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xd5e;
          local_8 = uVar11;
          break;
        case 0x13:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x77;
          uVar11 = thunk_FUN_0046d400((int *)this_00,uVar11);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xd18;
          local_8 = uVar11;
          break;
        case 0x14:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x78;
          uVar11 = BackWaitLoad(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xd31;
          local_8 = uVar11;
          break;
        case 0x15:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x79;
          uVar11 = BackTeleport(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xd4f;
          local_8 = uVar11;
          break;
        case 0x16:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x7a;
          uVar11 = thunk_FUN_004795e0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xd4a;
          local_8 = uVar11;
          break;
        case 0x17:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x7b;
          uVar11 = BackBring(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
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
          this_00->field_045D = 0x17;
          iVar10 = Bring(this_00,(int *)0x0);
          local_8 = iVar10;
          if (iVar10 == -1) {
            RaiseInternalException
                      (0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0xd74);
          }
          if (iVar10 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = 3;
          iVar10 = Defence(this_00,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0xd78;
          local_8 = -1;
          goto LAB_0045aee3;
        }
        switch(this_00->field_045D) {
        case 1:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x65;
          uVar11 = thunk_FUN_00460360((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xd80;
          local_8 = uVar11;
          break;
        case 2:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x66;
          uVar11 = BackAttack(this_00,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xd8b;
          local_8 = uVar11;
          break;
        case 3:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x67;
          uVar11 = thunk_FUN_004620f0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xd86;
          local_8 = uVar11;
          break;
        case 4:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x68;
          uVar11 = BackToDok(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xda9;
          local_8 = uVar11;
          break;
        case 5:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x69;
          uVar11 = thunk_FUN_004732d0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xdae;
          local_8 = uVar11;
          break;
        case 6:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6a;
          uVar11 = BackPatrol(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xd90;
          local_8 = uVar11;
          break;
        case 7:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6b;
          uVar11 = thunk_FUN_004769f0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xdc2;
          local_8 = uVar11;
          break;
        case 8:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6c;
          uVar11 = thunk_FUN_004803b0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xdea;
          local_8 = uVar11;
          break;
        case 9:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6d;
          uVar11 = BackCapture(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xdcc;
          local_8 = uVar11;
          break;
        case 10:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6e;
          uVar11 = thunk_FUN_00476cc0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xdc7;
          local_8 = uVar11;
          break;
        case 0xb:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6f;
          uVar11 = BackAnnih(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xde0;
          local_8 = uVar11;
          break;
        case 0xc:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x70;
          uVar11 = BackLoadRC(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xd95;
          local_8 = uVar11;
          break;
        case 0xd:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x71;
          uVar11 = BackUnLoadRC(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xda4;
          local_8 = uVar11;
          break;
        case 0xe:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x72;
          uVar11 = thunk_FUN_004805b0(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xdef;
          local_8 = uVar11;
          break;
        case 0xf:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x73;
          uVar11 = BackLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xdb3;
          local_8 = uVar11;
          break;
        case 0x10:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x74;
          uVar11 = BackUnLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xdbd;
          local_8 = uVar11;
          break;
        case 0x11:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x75;
          uVar11 = BackBuild(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xd9a;
          local_8 = uVar11;
          break;
        case 0x12:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x76;
          uVar11 = BackDismant(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xde5;
          local_8 = uVar11;
          break;
        case 0x13:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x77;
          uVar11 = thunk_FUN_0046d400((int *)this_00,uVar11);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xd9f;
          local_8 = uVar11;
          break;
        case 0x14:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x78;
          uVar11 = BackWaitLoad(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xdb8;
          local_8 = uVar11;
          break;
        case 0x15:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x79;
          uVar11 = BackTeleport(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xdd6;
          local_8 = uVar11;
          break;
        case 0x16:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x7a;
          uVar11 = thunk_FUN_004795e0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xdd1;
          local_8 = uVar11;
          break;
        case 0x17:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x7b;
          uVar11 = BackBring(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
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
          this_00->field_045D = 0xb;
          iVar10 = Annih(this_00,(undefined4 *)0x0);
          local_8 = iVar10;
          if (iVar10 == -1) {
            RaiseInternalException
                      (0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0xdfb);
          }
          if (iVar10 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = 3;
          iVar10 = Defence(this_00,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0xdff;
          local_8 = -1;
          goto LAB_0045aee3;
        }
        switch(this_00->field_045D) {
        case 1:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x65;
          uVar11 = thunk_FUN_00460360((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xe07;
          local_8 = uVar11;
          break;
        case 2:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x66;
          uVar11 = BackAttack(this_00,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xe12;
          local_8 = uVar11;
          break;
        case 3:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x67;
          uVar11 = thunk_FUN_004620f0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xe0d;
          local_8 = uVar11;
          break;
        case 4:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x68;
          uVar11 = BackToDok(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xe30;
          local_8 = uVar11;
          break;
        case 5:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x69;
          uVar11 = thunk_FUN_004732d0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xe35;
          local_8 = uVar11;
          break;
        case 6:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6a;
          uVar11 = BackPatrol(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xe17;
          local_8 = uVar11;
          break;
        case 7:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6b;
          uVar11 = thunk_FUN_004769f0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xe49;
          local_8 = uVar11;
          break;
        case 8:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6c;
          uVar11 = thunk_FUN_004803b0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xe71;
          local_8 = uVar11;
          break;
        case 9:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6d;
          uVar11 = BackCapture(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xe53;
          local_8 = uVar11;
          break;
        case 10:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6e;
          uVar11 = thunk_FUN_00476cc0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xe4e;
          local_8 = uVar11;
          break;
        case 0xb:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6f;
          uVar11 = BackAnnih(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xe67;
          local_8 = uVar11;
          break;
        case 0xc:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x70;
          uVar11 = BackLoadRC(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xe1c;
          local_8 = uVar11;
          break;
        case 0xd:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x71;
          uVar11 = BackUnLoadRC(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xe2b;
          local_8 = uVar11;
          break;
        case 0xe:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x72;
          uVar11 = thunk_FUN_004805b0(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xe76;
          local_8 = uVar11;
          break;
        case 0xf:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x73;
          uVar11 = BackLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xe3a;
          local_8 = uVar11;
          break;
        case 0x10:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x74;
          uVar11 = BackUnLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xe44;
          local_8 = uVar11;
          break;
        case 0x11:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x75;
          uVar11 = BackBuild(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xe21;
          local_8 = uVar11;
          break;
        case 0x12:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x76;
          uVar11 = BackDismant(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xe6c;
          local_8 = uVar11;
          break;
        case 0x13:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x77;
          uVar11 = thunk_FUN_0046d400((int *)this_00,uVar11);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xe26;
          local_8 = uVar11;
          break;
        case 0x14:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x78;
          uVar11 = BackWaitLoad(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xe3f;
          local_8 = uVar11;
          break;
        case 0x15:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x79;
          uVar11 = BackTeleport(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xe5d;
          local_8 = uVar11;
          break;
        case 0x16:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x7a;
          uVar11 = thunk_FUN_004795e0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xe58;
          local_8 = uVar11;
          break;
        case 0x17:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x7b;
          uVar11 = BackBring(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
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
          this_00->field_045D = 0x12;
          iVar10 = Dismant(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          local_8 = iVar10;
          if (iVar10 == -1) {
            RaiseInternalException
                      (0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0xe82);
          }
          if (iVar10 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = 3;
          iVar10 = Defence(this_00,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0xe86;
          local_8 = -1;
          goto LAB_0045aee3;
        }
        switch(this_00->field_045D) {
        case 1:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x65;
          uVar11 = thunk_FUN_00460360((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xe8e;
          local_8 = uVar11;
          break;
        case 2:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x66;
          uVar11 = BackAttack(this_00,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xe99;
          local_8 = uVar11;
          break;
        case 3:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x67;
          uVar11 = thunk_FUN_004620f0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xe94;
          local_8 = uVar11;
          break;
        case 4:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x68;
          uVar11 = BackToDok(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xeb7;
          local_8 = uVar11;
          break;
        case 5:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x69;
          uVar11 = thunk_FUN_004732d0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xebc;
          local_8 = uVar11;
          break;
        case 6:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6a;
          uVar11 = BackPatrol(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xe9e;
          local_8 = uVar11;
          break;
        case 7:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6b;
          uVar11 = thunk_FUN_004769f0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xed0;
          local_8 = uVar11;
          break;
        case 8:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6c;
          uVar11 = thunk_FUN_004803b0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xef8;
          local_8 = uVar11;
          break;
        case 9:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6d;
          uVar11 = BackCapture(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xeda;
          local_8 = uVar11;
          break;
        case 10:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6e;
          uVar11 = thunk_FUN_00476cc0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xed5;
          local_8 = uVar11;
          break;
        case 0xb:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6f;
          uVar11 = BackAnnih(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xeee;
          local_8 = uVar11;
          break;
        case 0xc:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x70;
          uVar11 = BackLoadRC(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xea3;
          local_8 = uVar11;
          break;
        case 0xd:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x71;
          uVar11 = BackUnLoadRC(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xeb2;
          local_8 = uVar11;
          break;
        case 0xe:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x72;
          uVar11 = thunk_FUN_004805b0(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xefd;
          local_8 = uVar11;
          break;
        case 0xf:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x73;
          uVar11 = BackLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xec1;
          local_8 = uVar11;
          break;
        case 0x10:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x74;
          uVar11 = BackUnLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xecb;
          local_8 = uVar11;
          break;
        case 0x11:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x75;
          uVar11 = BackBuild(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xea8;
          local_8 = uVar11;
          break;
        case 0x12:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x76;
          uVar11 = BackDismant(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xef3;
          local_8 = uVar11;
          break;
        case 0x13:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x77;
          uVar11 = thunk_FUN_0046d400((int *)this_00,uVar11);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xead;
          local_8 = uVar11;
          break;
        case 0x14:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x78;
          uVar11 = BackWaitLoad(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xec6;
          local_8 = uVar11;
          break;
        case 0x15:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x79;
          uVar11 = BackTeleport(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xee4;
          local_8 = uVar11;
          break;
        case 0x16:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x7a;
          uVar11 = thunk_FUN_004795e0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xedf;
          local_8 = uVar11;
          break;
        case 0x17:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x7b;
          uVar11 = BackBring(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
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
          this_00->field_045D = 8;
          iVar10 = Scout(this_00,0);
          local_8 = iVar10;
          if (iVar10 == -1) {
            RaiseInternalException
                      (0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0xf09);
          }
          if (iVar10 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = 3;
          iVar10 = Defence(this_00,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0xf0d;
          local_8 = -1;
          goto LAB_0045aee3;
        }
        switch(this_00->field_045D) {
        case 1:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x65;
          uVar11 = thunk_FUN_00460360((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xf15;
          local_8 = uVar11;
          break;
        case 2:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x66;
          uVar11 = BackAttack(this_00,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xf20;
          local_8 = uVar11;
          break;
        case 3:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x67;
          uVar11 = thunk_FUN_004620f0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xf1b;
          local_8 = uVar11;
          break;
        case 4:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x68;
          uVar11 = BackToDok(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xf3e;
          local_8 = uVar11;
          break;
        case 5:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x69;
          uVar11 = thunk_FUN_004732d0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xf43;
          local_8 = uVar11;
          break;
        case 6:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6a;
          uVar11 = BackPatrol(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xf25;
          local_8 = uVar11;
          break;
        case 7:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6b;
          uVar11 = thunk_FUN_004769f0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xf57;
          local_8 = uVar11;
          break;
        case 8:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6c;
          uVar11 = thunk_FUN_004803b0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xf7f;
          local_8 = uVar11;
          break;
        case 9:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6d;
          uVar11 = BackCapture(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xf61;
          local_8 = uVar11;
          break;
        case 10:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6e;
          uVar11 = thunk_FUN_00476cc0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xf5c;
          local_8 = uVar11;
          break;
        case 0xb:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6f;
          uVar11 = BackAnnih(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xf75;
          local_8 = uVar11;
          break;
        case 0xc:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x70;
          uVar11 = BackLoadRC(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xf2a;
          local_8 = uVar11;
          break;
        case 0xd:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x71;
          uVar11 = BackUnLoadRC(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xf39;
          local_8 = uVar11;
          break;
        case 0xe:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x72;
          uVar11 = thunk_FUN_004805b0(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xf84;
          local_8 = uVar11;
          break;
        case 0xf:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x73;
          uVar11 = BackLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xf48;
          local_8 = uVar11;
          break;
        case 0x10:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x74;
          uVar11 = BackUnLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xf52;
          local_8 = uVar11;
          break;
        case 0x11:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x75;
          uVar11 = BackBuild(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xf2f;
          local_8 = uVar11;
          break;
        case 0x12:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x76;
          uVar11 = BackDismant(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xf7a;
          local_8 = uVar11;
          break;
        case 0x13:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x77;
          uVar11 = thunk_FUN_0046d400((int *)this_00,uVar11);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xf34;
          local_8 = uVar11;
          break;
        case 0x14:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x78;
          uVar11 = BackWaitLoad(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xf4d;
          local_8 = uVar11;
          break;
        case 0x15:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x79;
          uVar11 = BackTeleport(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xf6b;
          local_8 = uVar11;
          break;
        case 0x16:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x7a;
          uVar11 = thunk_FUN_004795e0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xf66;
          local_8 = uVar11;
          break;
        case 0x17:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x7b;
          uVar11 = BackBring(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
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
          this_00->field_045D = 0xe;
          iVar10 = thunk_FUN_004803d0(this_00,0);
          local_8 = iVar10;
          if (iVar10 == -1) {
            RaiseInternalException
                      (0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0xf90);
          }
          if (iVar10 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = 3;
          iVar10 = Defence(this_00,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0xf94;
          local_8 = -1;
          goto LAB_0045aee3;
        }
        switch(this_00->field_045D) {
        case 1:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x65;
          uVar11 = thunk_FUN_00460360((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xf9c;
          local_8 = uVar11;
          break;
        case 2:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x66;
          uVar11 = BackAttack(this_00,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xfa7;
          local_8 = uVar11;
          break;
        case 3:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x67;
          uVar11 = thunk_FUN_004620f0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xfa2;
          local_8 = uVar11;
          break;
        case 4:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x68;
          uVar11 = BackToDok(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xfc5;
          local_8 = uVar11;
          break;
        case 5:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x69;
          uVar11 = thunk_FUN_004732d0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xfca;
          local_8 = uVar11;
          break;
        case 6:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6a;
          uVar11 = BackPatrol(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xfac;
          local_8 = uVar11;
          break;
        case 7:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6b;
          uVar11 = thunk_FUN_004769f0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xfde;
          local_8 = uVar11;
          break;
        case 8:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6c;
          uVar11 = thunk_FUN_004803b0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x1006;
          local_8 = uVar11;
          break;
        case 9:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6d;
          uVar11 = BackCapture(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xfe8;
          local_8 = uVar11;
          break;
        case 10:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6e;
          uVar11 = thunk_FUN_00476cc0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xfe3;
          local_8 = uVar11;
          break;
        case 0xb:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6f;
          uVar11 = BackAnnih(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xffc;
          local_8 = uVar11;
          break;
        case 0xc:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x70;
          uVar11 = BackLoadRC(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xfb1;
          local_8 = uVar11;
          break;
        case 0xd:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x71;
          uVar11 = BackUnLoadRC(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xfc0;
          local_8 = uVar11;
          break;
        case 0xe:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x72;
          uVar11 = thunk_FUN_004805b0(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x100b;
          local_8 = uVar11;
          break;
        case 0xf:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x73;
          uVar11 = BackLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xfcf;
          local_8 = uVar11;
          break;
        case 0x10:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x74;
          uVar11 = BackUnLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xfd9;
          local_8 = uVar11;
          break;
        case 0x11:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x75;
          uVar11 = BackBuild(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xfb6;
          local_8 = uVar11;
          break;
        case 0x12:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x76;
          uVar11 = BackDismant(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x1001;
          local_8 = uVar11;
          break;
        case 0x13:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x77;
          uVar11 = thunk_FUN_0046d400((int *)this_00,uVar11);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xfbb;
          local_8 = uVar11;
          break;
        case 0x14:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x78;
          uVar11 = BackWaitLoad(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xfd4;
          local_8 = uVar11;
          break;
        case 0x15:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x79;
          uVar11 = BackTeleport(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xff2;
          local_8 = uVar11;
          break;
        case 0x16:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x7a;
          uVar11 = thunk_FUN_004795e0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0xfed;
          local_8 = uVar11;
          break;
        case 0x17:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x7b;
          uVar11 = BackBring(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
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
          this_00->field_045D = 3;
          iVar10 = Defence(this_00,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0x1017;
          local_8 = -1;
          goto LAB_0045aee3;
        }
        switch(this_00->field_045D) {
        case 1:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x65;
          uVar11 = thunk_FUN_00460360((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x101e;
          local_8 = uVar11;
          break;
        case 2:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x66;
          uVar11 = BackAttack(this_00,(int *)0x0,(int)unaff_EDI,(int)unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x1028;
          local_8 = uVar11;
          break;
        case 3:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x67;
          uVar11 = thunk_FUN_004620f0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x1023;
          local_8 = uVar11;
          break;
        case 4:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x68;
          uVar11 = BackToDok(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x1046;
          local_8 = uVar11;
          break;
        case 5:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x69;
          uVar11 = thunk_FUN_004732d0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x104b;
          local_8 = uVar11;
          break;
        case 6:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6a;
          uVar11 = BackPatrol(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x102d;
          local_8 = uVar11;
          break;
        case 7:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6b;
          uVar11 = thunk_FUN_004769f0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x105f;
          local_8 = uVar11;
          break;
        case 8:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6c;
          uVar11 = thunk_FUN_004803b0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x1082;
          local_8 = uVar11;
          break;
        case 9:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6d;
          uVar11 = BackCapture(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x1069;
          local_8 = uVar11;
          break;
        case 10:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6e;
          uVar11 = thunk_FUN_00476cc0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x1064;
          local_8 = uVar11;
          break;
        case 0xb:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x6f;
          uVar11 = BackAnnih(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x107d;
          local_8 = uVar11;
          break;
        case 0xc:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x70;
          uVar11 = BackLoadRC(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x1032;
          local_8 = uVar11;
          break;
        case 0xd:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x71;
          uVar11 = BackUnLoadRC(this_00,0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x1041;
          local_8 = uVar11;
          break;
        case 0xe:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x72;
          uVar11 = thunk_FUN_004805b0(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x1087;
          local_8 = uVar11;
          break;
        case 0xf:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x73;
          uVar11 = BackLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x1050;
          local_8 = uVar11;
          break;
        case 0x10:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x74;
          uVar11 = BackUnLoadObj(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x105a;
          local_8 = uVar11;
          break;
        case 0x11:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x75;
          uVar11 = BackBuild(this_00,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x1037;
          local_8 = uVar11;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        case 0x13:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x77;
          uVar11 = thunk_FUN_0046d400((int *)this_00,uVar11);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x103c;
          local_8 = uVar11;
          break;
        case 0x14:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x78;
          uVar11 = BackWaitLoad(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x1055;
          local_8 = uVar11;
          break;
        case 0x15:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x79;
          uVar11 = BackTeleport(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x1073;
          local_8 = uVar11;
          break;
        case 0x16:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x7a;
          uVar11 = thunk_FUN_004795e0((int *)this_00);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x106e;
          local_8 = uVar11;
          break;
        case 0x17:
          this_00->field_045D = 0;
          this_00->field_0459 = 0x7b;
          uVar11 = BackBring(this_00,(int *)0x0);
          if (uVar11 != -1) goto LAB_00458c5b;
          iVar10 = 0x1078;
          local_8 = uVar11;
        }
      }
      uVar11 = local_8;
      RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,iVar10);
LAB_00458c5b:
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
    case 1:
      iVar10 = thunk_FUN_004602e0(this_00,2);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1094);
      }
      if (iVar10 == 0) {
        this_00->field_045D = 3;
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
            (uVar11 = *(int *)&this_00->field_0xbb - (int)(short)this_00->field_005B,
            uVar20 = (int)uVar11 >> 0x1f, (int)((uVar11 ^ uVar20) - uVar20) < 2)) &&
           (uVar11 = *(int *)&this_00->field_0xbf - (int)(short)this_00->field_005D,
           uVar20 = (int)uVar11 >> 0x1f, (int)((uVar11 ^ uVar20) - uVar20) < 2)) {
          uVar11 = *(int *)&this_00->field_0xc3 - (int)(short)this_00->field_005F;
          uVar20 = (int)uVar11 >> 0x1f;
          iVar10 = (uVar11 ^ uVar20) - uVar20;
          if ((iVar10 < 2) &&
             (uVar17 = (undefined2)((uint)iVar10 >> 0x10),
             iVar10 = (*this_00->vtable->vfunc_18)
                                (CONCAT22(uVar17,*(undefined2 *)&this_00->field_0xbb),
                                 CONCAT22((short)this_00->field_005F >> 0xf,
                                          *(undefined2 *)&this_00->field_0xbf),
                                 CONCAT22(uVar17,*(undefined2 *)&this_00->field_0xc3)), iVar10 == 0)
             ) {
            this_00->field_045D = 3;
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
          uVar11 = *(int *)&this_00->field_0x1c * 0x41c64e6d + 0x3039;
          *(uint *)&this_00->field_0x1c = uVar11;
          *(short *)&this_00->field_0xf8 = (short)((ulonglong)(uVar11 >> 0x10) % 0x1f) + 0x1e;
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        this_00->field_045D = 3;
        iVar10 = Defence(this_00,0);
        if (iVar10 != -1) {
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        iVar10 = 0x10b3;
        local_8 = -1;
      }
      break;
    case 2:
      iVar10 = thunk_FUN_00462180(this_00,2);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x10be);
      }
      if (iVar10 != 0) {
        if (iVar10 == 3) {
          thunk_FUN_0040ae40(local_1c,(uint)(ushort)this_00->field_0032,'\0');
          iVar10 = *(int *)&this_00->field_0x1c * 0x41c64e6d + 0x3039;
          *(int *)&this_00->field_0x1c = iVar10;
          *(ushort *)&this_00->field_0xf8 = ((ushort)((uint)iVar10 >> 0x10) & 0xf) + 0xf;
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        if (iVar10 == 4) {
          (**(code **)(*local_1c + 8))(0x66,&this_00->field_0032);
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        if (iVar10 == 6) {
          (**(code **)(*local_1c + 8))(0x68,&this_00->field_0032);
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        if (iVar10 != 7) {
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        (**(code **)(*local_1c + 8))(0x69,&this_00->field_0032);
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      local_46 = this_00->field_07F2;
      local_48 = this_00->field_0032;
      this_00->field_0816 = 5;
      (**(code **)(*local_1c + 8))(0x67,&local_48);
      this_00->field_07F2 = 0xffff;
      this_00->field_045D = 3;
      iVar10 = Defence(this_00,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x10c8;
      local_8 = -1;
      break;
    case 3:
      iVar10 = Defence(this_00,2);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x10bb;
      local_8 = -1;
      break;
    case 4:
      iVar10 = ToDok(this_00,2);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x111a);
      }
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      puVar16 = (undefined4 *)thunk_FUN_004357f0(this_00->field_0x24);
      if (puVar16 != (undefined4 *)0x0) {
        local_9c.id = MESS_AIPLRCLASSTY_5D94;
        local_9c.data = (void *)CONCAT22(this_00->field_0032,*(undefined2 *)&this_00->field_0x24);
        local_84 = this_00->field_0018;
        (**(code **)*puVar16)(&local_9c);
      }
      this_00->field_045D = 3;
      iVar10 = Defence(this_00,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x1127;
      local_8 = -1;
      break;
    case 5:
      iVar10 = Guard(this_00,2);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x112c);
      }
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = 3;
      iVar10 = Defence(this_00,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x1131;
      local_8 = -1;
      break;
    case 6:
      iVar10 = thunk_FUN_004658d0(this_00,2);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x10e8);
      }
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = 3;
      iVar10 = Defence(this_00,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x10ed;
      local_8 = -1;
      break;
    case 7:
      iVar10 = SetMine(this_00,(int *)0x2,unaff_EDI,(int)unaff_ESI);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1154);
      }
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = 3;
      iVar10 = Defence(this_00,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x1159;
      local_8 = -1;
      break;
    case 8:
      iVar10 = Scout(this_00,2);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x11ac);
      }
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = 3;
      iVar10 = Defence(this_00,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x11b1;
      local_8 = -1;
      break;
    case 9:
      iVar10 = Capture(this_00,2);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1168);
      }
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = 3;
      iVar10 = Defence(this_00,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x116d;
      local_8 = -1;
      break;
    case 10:
      iVar10 = DCBomb(this_00,2);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x115e);
      }
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = 3;
      iVar10 = Defence(this_00,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x1163;
      local_8 = -1;
      break;
    case 0xb:
      iVar10 = Annih(this_00,(undefined4 *)0x2);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1198);
      }
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = 3;
      iVar10 = Defence(this_00,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x119d;
      local_8 = -1;
      break;
    case 0xc:
      iVar10 = LoadRC(this_00,(int *)0x2,unaff_EDI,(int)unaff_ESI);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x10f2);
      }
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = 3;
      iVar10 = Defence(this_00,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x10f7;
      local_8 = -1;
      break;
    case 0xd:
      iVar10 = UnLoadRC(this_00,2);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1110);
      }
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = 3;
      iVar10 = Defence(this_00,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x1115;
      local_8 = -1;
      break;
    case 0xe:
      iVar10 = thunk_FUN_004803d0(this_00,2);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x11b6);
      }
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = 3;
      iVar10 = Defence(this_00,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x11bb;
      local_8 = -1;
      break;
    case 0xf:
      iVar10 = LoadObj(this_00,2);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1136);
      }
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = 3;
      iVar10 = Defence(this_00,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x113b;
      local_8 = -1;
      break;
    case 0x10:
      iVar10 = UnLoadObj(this_00,(undefined4 *)0x2);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x114a);
      }
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = 3;
      iVar10 = Defence(this_00,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x114f;
      local_8 = -1;
      break;
    case 0x11:
      iVar10 = Build(this_00,2);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x10fc);
      }
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = 3;
      iVar10 = Defence(this_00,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x1101;
      local_8 = -1;
      break;
    case 0x12:
      iVar10 = Dismant(this_00,(int *)0x2,unaff_EDI,unaff_ESI);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x11a2);
      }
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = 3;
      iVar10 = Defence(this_00,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x11a7;
      local_8 = -1;
      break;
    case 0x13:
      uVar11 = CreateGame(this_00,(int *)0x2,unaff_EDI);
      local_8 = uVar11;
      if (uVar11 == 0xffffffff) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1106);
      }
      if (uVar11 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = 3;
      iVar10 = Defence(this_00,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x110b;
      local_8 = -1;
      break;
    case 0x14:
      iVar10 = WaitLoad(this_00,(void *)0x2);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1140);
      }
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = 3;
      iVar10 = Defence(this_00,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x1145;
      local_8 = -1;
      break;
    case 0x15:
      iVar10 = Teleport(this_00,2);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1184);
      }
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = 3;
      iVar10 = Defence(this_00,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x1189;
      local_8 = -1;
      break;
    case 0x16:
      iVar10 = Recharge(this_00,2);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1172);
      }
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      puVar16 = (undefined4 *)thunk_FUN_004357f0(this_00->field_0x24);
      if (puVar16 != (undefined4 *)0x0) {
        local_9c.id = MESS_AIPLRCLASSTY_5D94;
        local_9c.data = (void *)CONCAT22(this_00->field_0032,*(undefined2 *)&this_00->field_0x24);
        local_84 = this_00->field_0018;
        (**(code **)*puVar16)(&local_9c);
      }
      this_00->field_045D = 3;
      iVar10 = Defence(this_00,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x117f;
      local_8 = -1;
      break;
    case 0x17:
      iVar10 = Bring(this_00,(int *)0x2);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x118e);
      }
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = 3;
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
LAB_0045aee3:
    RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,iVar10);
    g_currentExceptionFrame = local_184.previous;
    return 0;
  }
  pvVar13 = (void *)0x0;
  uVar11 = extraout_EDX;
  if (SVar8 == MESS_ID_NONE) goto LAB_0045048a;
  if (SVar8 != MESS_ID_CREATE) {
    g_currentExceptionFrame = local_184.previous;
    return 0;
  }
  local_1c = message->data;
  thunk_FUN_00417a00(this_00,0);
  if (local_1c[3] == 0) {
    pvVar13 = message->data;
    *(undefined4 *)&this_00->field_0x6f3 = *(undefined4 *)((int)pvVar13 + 0x14);
    this_00->field_06F7 = *(STBoatC_field_06F7State *)((int)pvVar13 + 0x18);
    iVar10 = *(int *)((int)pvVar13 + 0x2a);
    if (iVar10 < 0) {
      *(undefined4 *)&this_00->field_0x7d6 = 0;
    }
    else if (iVar10 < 0x79) {
      *(int *)&this_00->field_0x7d6 = iVar10 / 3;
    }
    else {
      *(undefined4 *)&this_00->field_0x7d6 = 0x28;
    }
    iVar10 = *(int *)((int)pvVar13 + 0x2e);
    if (iVar10 < 0) {
      *(undefined4 *)&this_00->field_0x7da = 0;
    }
    else if (iVar10 < 0x321) {
      *(int *)&this_00->field_0x7da = iVar10 / 0x14;
    }
    else {
      *(undefined4 *)&this_00->field_0x7da = 0x28;
    }
    iVar10 = *(int *)&this_00->field_0x7da + *(int *)&this_00->field_0x7d6;
    if (0x28 < iVar10) {
      iVar10 = (*(int *)&this_00->field_0x7d6 * 0x28) / iVar10;
      *(int *)&this_00->field_0x7d6 = iVar10;
      *(int *)&this_00->field_0x7da = 0x28 - iVar10;
    }
    switch(this_00->field_06F7) {
    case CASE_16:
    case CASE_25:
      *(undefined4 *)&this_00->field_0x726 = 0x28;
      break;
    case CASE_17:
      *(undefined4 *)&this_00->field_0x72a = 0x28;
      break;
    case CASE_1B:
    case CASE_1D:
    case CASE_24:
      *(undefined4 *)&this_00->field_0x71e = 0x14;
      break;
    case CASE_23:
      *(undefined4 *)&this_00->field_0x722 = 0x14;
    }
    sVar31 = *(short *)((int)pvVar13 + 0x1c);
    local_c = CONCAT22((short)(this_00->field_06F7 - CASE_16 >> 0x10),sVar31);
    sVar5 = *(short *)((int)pvVar13 + 0x20);
    sVar6 = *(short *)((int)pvVar13 + 0x1e);
    if (((sVar31 < 0) || (DAT_007fb240 <= sVar31)) ||
       ((sVar6 < 0 || (((DAT_007fb242 <= sVar6 || (sVar5 < 0)) || (DAT_007fb244 <= sVar5)))))) {
      local_10 = (int *)0x0;
    }
    else {
      local_10 = *(int **)(DAT_007fb248 +
                          ((uint)(byte)this_00->field_0x8e +
                          ((int)sVar5 * (int)DAT_007fb246 + (int)sVar6 * (int)DAT_007fb240 +
                          (int)sVar31) * 2) * 4);
    }
    if (local_10 != (int *)0x0) {
      iVar10 = (**(code **)(*local_10 + 0x114))(this_00->field_06F7);
      if (iVar10 == 0) {
        iVar10 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x197,0,0,&DAT_007a4ccc,
                                    s_STBoatC__GetMessage_MESS_ID_CREA_007aa02c);
        if (iVar10 != 0) {
          pcVar9 = (code *)swi(3);
          iVar10 = (*pcVar9)();
          return iVar10;
        }
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x198);
      }
      (**(code **)(*local_10 + 0x118))(this_00->field_0018);
      SVar29 = this_00->field_06F7;
      if (((SVar29 == CASE_7) || (SVar29 == CASE_13)) || (SVar29 == CASE_1B)) {
        this_00->field_07CA = local_10[6];
        FUN_006ea3e0(*(void **)&this_00->field_0x211,*(uint *)&this_00->field_0x1ed,
                     *(int *)((int)local_10 + 0x1ed));
      }
    }
    *(undefined4 *)&this_00->field_0x6fb = *(undefined4 *)((int)pvVar13 + 0x36);
    *(undefined4 *)&this_00->field_0x6ff = *(undefined4 *)((int)pvVar13 + 0x3a);
    *(undefined4 *)&this_00->field_0x703 = *(undefined4 *)((int)pvVar13 + 0x3e);
    *(undefined2 *)&this_00->field_0x707 = *(undefined2 *)((int)pvVar13 + 0x42);
    this_00->field_0x709 = *(undefined1 *)((int)pvVar13 + 0x44);
    this_00->field_073E = *(undefined4 *)((int)pvVar13 + 0x32);
    if (local_10 == (int *)0x0) {
      this_00->field_0076 = 1;
      uVar11 = *(int *)&this_00->field_0x1c * 0x41c64e6d + 0x3039;
      *(uint *)&this_00->field_0x1c = uVar11;
      *(short *)&this_00->field_0x6e = (short)((ulonglong)(uVar11 >> 0x10) % 0x30);
    }
    else {
      *(undefined2 *)&this_00->field_0x6e = *(undefined2 *)((int)local_10 + 0x6e);
      SVar29 = this_00->field_06F7;
      if (((SVar29 == CASE_7) || (SVar29 == CASE_13)) || (SVar29 == CASE_1B)) {
        this_00->field_0076 = 1;
      }
      else {
        this_00->field_0076 = 0;
      }
    }
    thunk_FUN_00416390((int)this_00);
    this_00->field_0xe3 = 0;
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
    thunk_FUN_0048a910((int)this_00);
    thunk_FUN_0048a840((int)this_00);
    if ((((local_10 == (int *)0x0) || (SVar29 = this_00->field_06F7, SVar29 == CASE_7)) ||
        (SVar29 == CASE_13)) || (SVar29 == CASE_1B)) {
      thunk_FUN_00417a20(this_00,*(short *)((int)pvVar13 + 0x1c),*(short *)((int)pvVar13 + 0x1e),
                         *(short *)((int)pvVar13 + 0x20),1);
    }
    else {
      thunk_FUN_00417a20(this_00,*(short *)((int)pvVar13 + 0x1c),*(short *)((int)pvVar13 + 0x1e),
                         *(short *)((int)pvVar13 + 0x20),0);
      this_00->field_0041 = *(undefined2 *)((int)local_10 + 0x41);
      this_00->field_0043 = *(undefined2 *)((int)local_10 + 0x43);
      this_00->field_0045 = *(undefined2 *)((int)local_10 + 0x45);
      this_00->field_0x4d = *(undefined1 *)((int)local_10 + 0x4d);
    }
    if ((this_00->field_06F7 == CASE_9) || (this_00->field_06F7 == CASE_15)) {
      sVar31 = 8;
    }
    else {
      sVar31 = 0x18;
    }
    thunk_FUN_00417e70(this_00,sVar31);
    if (local_10 == (int *)0x0) {
      iVar10 = *(int *)&this_00->field_0x1c * 0x41c64e6d + 0x3039;
      *(int *)&this_00->field_0x1c = iVar10;
      thunk_FUN_00417ee0(this_00,((ushort)((uint)iVar10 >> 0x10) & 7) * 0x2d);
      uVar17 = extraout_var_02;
      uVar21 = extraout_var_05;
    }
    else {
      *(short *)&this_00->field_0x6c = (short)local_10[0x1b];
      uVar17 = extraout_var_01;
      uVar21 = extraout_var_04;
    }
    STAllPlayersC::RegisterObject
              (DAT_007fa174,
               CONCAT31((int3)((uint)*(int *)((int)pvVar13 + 0x49) >> 8),this_00->field_0x24),
               CONCAT22(uVar21,*(undefined2 *)((int)pvVar13 + 0x24)),
               CONCAT22(uVar17,*(undefined2 *)((int)pvVar13 + 0x22)),(int *)this_00,1,
               *(int *)((int)pvVar13 + 0x49));
    *(undefined4 *)&this_00->field_0x487 = 0xffffffff;
    this_00->field_048B = 0xffff;
    this_00->field_0814 = this_00->field_0816 * 0xc9;
    if (((local_10 == (int *)0x0) || (SVar29 = this_00->field_06F7, SVar29 == CASE_7)) ||
       ((SVar29 == CASE_13 || (SVar29 == CASE_1B)))) {
      this_00->field_082E = 0xffffffff;
      this_00->field_0836 = 4;
      this_00->field_0475 = this_00->field_0047;
      this_00->field_0477 = this_00->field_0049;
      this_00->field_0479 = this_00->field_004B;
    }
    else {
      this_00->field_045D = 0x14;
      this_00->field_07C2 = 1;
      (*this_00->vtable->vfunc_100)(*(uint *)&this_00->field_0x1d1 | 0xd);
      this_00->field_05C0 = 3;
      this_00->field_05A0 = this_00->field_0030;
      this_00->field_05A2 = local_10[6];
      *(undefined4 *)&this_00->field_0x5a6 = 0;
      this_00->field_05C4 = 7;
    }
    uVar11 = *(int *)&this_00->field_0x1c * 0x41c64e6d + 0x3039;
    *(uint *)&this_00->field_0x1c = uVar11;
    local_d4 = (uVar11 >> 0x10) % 0x13;
    iVar10 = (*this_00->vtable->vfunc_2C)();
    thunk_FUN_004b76d0(CONCAT31((int3)((uint)iVar10 >> 8),this_00->field_0x24),iVar10);
    if (*(uint *)&this_00->field_0x24 == (uint)*(byte *)(*(int *)&this_00->field_0x10 + 0x112d)) {
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
      *(undefined4 *)&this_00->field_0x70a = 8;
      break;
    default:
      *(undefined4 *)&this_00->field_0x70a = 5;
    }
    thunk_FUN_0041c3f0(this_00,*(undefined **)&this_00->field_0x70a);
    uVar11 = *(int *)&this_00->field_0x1c * 0x41c64e6d + 0x3039;
    *(uint *)&this_00->field_0x1c = uVar11;
    iVar10 = ((uVar11 >> 0x10) % 5) * 0x19;
    *(int *)&this_00->field_0x77e = iVar10 + -0xf;
    uVar11 = *(int *)&this_00->field_0x1c * 0x41c64e6d + 0x3039;
    *(uint *)&this_00->field_0x1c = uVar11;
    *(uint *)&this_00->field_0x77a = (uVar11 >> 0x10) % (iVar10 - 0xeU);
  }
  if (local_1c[3] == 1) {
    pvVar13 = message->data;
    *(undefined4 *)&this_00->field_0x6f3 = *(undefined4 *)((int)pvVar13 + 0x14);
    this_00->field_06F7 = *(STBoatC_field_06F7State *)((int)pvVar13 + 0x18);
    *(undefined4 *)&this_00->field_0x6fb = *(undefined4 *)((int)pvVar13 + 0x32);
    *(undefined4 *)&this_00->field_0x6ff = *(undefined4 *)((int)pvVar13 + 0x36);
    *(undefined4 *)&this_00->field_0x703 = *(undefined4 *)((int)pvVar13 + 0x3a);
    *(undefined2 *)&this_00->field_0x707 = *(undefined2 *)((int)pvVar13 + 0x3e);
    this_00->field_0x709 = *(undefined1 *)((int)pvVar13 + 0x40);
    *(undefined4 *)&this_00->field_0x81e = *(undefined4 *)((int)pvVar13 + 0x41);
    switch(this_00->field_06F7) {
    case CASE_16:
    case CASE_25:
      *(undefined4 *)&this_00->field_0x726 = 0x28;
      break;
    case CASE_17:
      *(undefined4 *)&this_00->field_0x72a = 0x28;
      break;
    case CASE_1B:
    case CASE_1D:
    case CASE_24:
      *(undefined4 *)&this_00->field_0x71e = 0x14;
      break;
    case CASE_23:
      *(undefined4 *)&this_00->field_0x722 = 0x14;
    }
    this_00->field_0076 = 1;
    *(undefined2 *)&this_00->field_0x6e = 0;
    thunk_FUN_00416390((int)this_00);
    this_00->field_0xe3 = 0;
    _SetSpeedFireLife(this_00,unaff_EDI);
    thunk_FUN_0048a910((int)this_00);
    uVar12 = thunk_FUN_0048a840((int)this_00);
    thunk_FUN_00495ff0(*(short *)((int)pvVar13 + 0x1c),*(short *)((int)pvVar13 + 0x1e),
                       *(short *)((int)pvVar13 + 0x20),
                       CONCAT31((int3)((uint)uVar12 >> 8),this_00->field_0x8e),(int)this_00);
    this_00->field_0047 = *(undefined2 *)((int)pvVar13 + 0x1c);
    this_00->field_0041 = *(undefined2 *)((int)pvVar13 + 0x22);
    this_00->field_0049 = *(undefined2 *)((int)pvVar13 + 0x1e);
    this_00->field_0043 = *(undefined2 *)((int)pvVar13 + 0x24);
    uVar17 = *(undefined2 *)((int)pvVar13 + 0x20);
    this_00->field_004B = uVar17;
    this_00->field_0045 = *(undefined2 *)((int)pvVar13 + 0x26);
    DumpClassC::WritePtr
              (this_00->field_0047,this_00->field_0049,this_00->field_004B,
               CONCAT31((int3)(CONCAT22(extraout_var_06,uVar17) >> 8),this_00->field_0x8e),
               (int)this_00);
    if ((this_00->field_06F7 == CASE_9) || (this_00->field_06F7 == CASE_15)) {
      sVar31 = 8;
    }
    else {
      sVar31 = 0x18;
    }
    thunk_FUN_00417e70(this_00,sVar31);
    uVar12 = thunk_FUN_00417ee0(this_00,0x5a);
    uVar12 = STAllPlayersC::RegisterObject
                       (DAT_007fa174,CONCAT31((int3)((uint)extraout_ECX >> 8),this_00->field_0x24),
                        CONCAT22((short)((uint)uVar12 >> 0x10),*(undefined2 *)((int)pvVar13 + 0x2a))
                        ,0xffff,(int *)this_00,0,0);
    this_00->field_045D = 0x13;
    this_00->field_0510 = *(undefined2 *)((int)pvVar13 + 0x1c);
    this_00->field_0512 = *(undefined2 *)((int)pvVar13 + 0x1e);
    this_00->field_0514 = *(undefined2 *)((int)pvVar13 + 0x20);
    *(undefined2 *)&this_00->field_0x516 = *(undefined2 *)((int)pvVar13 + 0x22);
    *(undefined2 *)&this_00->field_0x518 = *(undefined2 *)((int)pvVar13 + 0x24);
    *(undefined2 *)&this_00->field_0x51a = *(undefined2 *)((int)pvVar13 + 0x26);
    *(undefined2 *)&this_00->field_0x51c = *(undefined2 *)((int)pvVar13 + 0x2c);
    uVar17 = *(undefined2 *)((int)pvVar13 + 0x2e);
    *(undefined2 *)&this_00->field_0x51e = uVar17;
    *(undefined2 *)&this_00->field_0x520 = *(undefined2 *)((int)pvVar13 + 0x30);
    local_10 = (int *)STAllPlayersC::GetObjPtr
                                (DAT_007fa174,
                                 CONCAT31((int3)(CONCAT22((short)((uint)uVar12 >> 0x10),uVar17) >> 8
                                                ),this_00->field_0x24),
                                 CONCAT22(extraout_var_07,*(undefined2 *)((int)pvVar13 + 0x28)),
                                 CASE_1);
    if (local_10 == (int *)0x0) {
      *(undefined4 *)&this_00->field_0x524 = 0;
    }
    else {
      *(int *)&this_00->field_0x524 = local_10[6];
    }
    this_00->field_0528 = 0;
    FUN_006ea460(*(void **)&this_00->field_0x211,*(uint *)&this_00->field_0x1ed,
                 *(int *)((int)local_10 + 0x1ed));
    local_d4 = DAT_008073fc * 5;
    iVar10 = (*this_00->vtable->vfunc_2C)();
    thunk_FUN_004b76d0(CONCAT31((int3)((uint)extraout_ECX_00 >> 8),this_00->field_0x24),iVar10);
    if (*(uint *)&this_00->field_0x24 == (uint)*(byte *)(*(int *)&this_00->field_0x10 + 0x112d)) {
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
      *(undefined4 *)&this_00->field_0x70a = 8;
      break;
    default:
      *(undefined4 *)&this_00->field_0x70a = 5;
    }
    thunk_FUN_0041c3f0(this_00,*(undefined **)&this_00->field_0x70a);
    uVar11 = *(int *)&this_00->field_0x1c * 0x41c64e6d + 0x3039;
    *(uint *)&this_00->field_0x1c = uVar11;
    iVar10 = ((uVar11 >> 0x10) % 5) * 0x19;
    *(int *)&this_00->field_0x77e = iVar10 + -0xf;
    uVar11 = *(int *)&this_00->field_0x1c * 0x41c64e6d + 0x3039;
    *(uint *)&this_00->field_0x1c = uVar11;
    *(uint *)&this_00->field_0x77a = (uVar11 >> 0x10) % (iVar10 - 0xeU);
    if (DAT_008117bc != (int *)0x0) {
      local_9c.id = MESS_AIBOSSCLASSTY_5DD0;
      local_9c.data = (void *)CONCAT22(this_00->field_0032,*(undefined2 *)&this_00->field_0x24);
      local_84 = CONCAT22(*(undefined2 *)((int)pvVar13 + 0x28),*(undefined2 *)&this_00->field_0x24);
      (**(code **)*DAT_008117bc)(&local_9c);
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
  if (local_1c[3] == 2) {
    pvVar13 = message->data;
    local_d0 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(0x44);
    do {
      *(int **)(iVar22 + (int)local_d0) = DAT_0080677c;
      iVar22 = iVar22 + 4;
    } while (iVar22 < 0x44);
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
               (undefined4 *)(*(int *)((int)pvVar13 + 0x5f6) + (int)pvVar13));
    FUN_006ab060(&local_d0);
    STAllPlayersC::RestoreGObjData
              ((STAllPlayersC *)this_00,
               (undefined4 *)(*(int *)((int)pvVar13 + 0x5fe) + (int)pvVar13));
    RestoreBoatData(this_00,(int)pvVar13);
    *(undefined4 *)&this_00->field_0x5a6 = 0;
    STAllPlayersC::RegisterObject
              (DAT_007fa174,CONCAT31((int3)((uint)extraout_EDX_00 >> 8),this_00->field_0x24),
               CONCAT22(extraout_var_03,this_00->field_0030),
               CONCAT22(extraout_var,this_00->field_0032),(int *)this_00,1,0);
    if ((this_00->field_045D != 0x14) || (this_00->field_05C0 != 3)) {
      DumpClassC::WritePtr
                (this_00->field_005B,this_00->field_005D,this_00->field_005F,0,(int)this_00);
    }
    thunk_FUN_0048a910((int)this_00);
    RaiseInternalException(-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2a6);
  }
  local_74[0] = 0;
  local_e8[0] = 0;
  switch(this_00->field_06F7) {
  case CASE_1:
    pbVar19 = local_74;
    pcVar24 = &DAT_007a9e8c;
    break;
  case CASE_2:
    pbVar19 = local_74;
    pcVar24 = &DAT_007a9e84;
    break;
  case CASE_3:
    pbVar19 = local_74;
    pcVar24 = &DAT_007a9e7c;
    break;
  case CASE_4:
    pbVar19 = local_74;
    pcVar24 = &DAT_007a9e74;
    break;
  case CASE_5:
    pbVar19 = local_74;
    pcVar24 = &DAT_007a9e6c;
    break;
  case CASE_6:
    pbVar19 = local_74;
    pcVar24 = &DAT_007a9e64;
    break;
  case CASE_7:
    pbVar19 = local_74;
    pcVar24 = &DAT_007a9e5c;
    break;
  case CASE_8:
    pbVar19 = local_74;
    pcVar24 = &DAT_007a9e54;
    break;
  case CASE_9:
    pbVar19 = local_74;
    pcVar24 = &DAT_007a9e50;
    break;
  case CASE_A:
    pbVar19 = local_74;
    pcVar24 = &DAT_007a9e48;
    break;
  case CASE_B:
    uVar11 = 0xffffffff;
    pcVar24 = &DAT_007a9e40;
    do {
      pcVar25 = pcVar24;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar25 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar25;
    } while (cVar1 != '\0');
    uVar11 = ~uVar11;
    iVar10 = -1;
    pbVar19 = local_74;
    do {
      pbVar26 = pbVar19;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pbVar26 = pbVar19 + 1;
      bVar2 = *pbVar19;
      pbVar19 = pbVar26;
    } while (bVar2 != 0);
    pbVar23 = (byte *)(pcVar25 + -uVar11);
    pbVar26 = pbVar26 + -1;
    for (uVar20 = uVar11 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
      *(undefined4 *)pbVar26 = *(undefined4 *)pbVar23;
      pbVar23 = pbVar23 + 4;
      pbVar26 = pbVar26 + 4;
    }
    pbVar19 = local_e8;
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pbVar26 = *pbVar23;
      pbVar23 = pbVar23 + 1;
      pbVar26 = pbVar26 + 1;
    }
    pcVar24 = &DAT_007a9e94;
    break;
  case CASE_C:
    pbVar19 = local_74;
    pcVar24 = &DAT_007a9e38;
    break;
  case CASE_D:
    pbVar19 = local_74;
    pcVar24 = &DAT_007a9e30;
    break;
  case CASE_E:
    pbVar19 = local_74;
    pcVar24 = &DAT_007a9e28;
    break;
  case CASE_F:
    pbVar19 = local_74;
    pcVar24 = &DAT_007a9e20;
    break;
  case CASE_10:
    pbVar19 = local_74;
    pcVar24 = &DAT_007a9e18;
    break;
  case CASE_11:
    pbVar19 = local_74;
    pcVar24 = &DAT_007a9e10;
    break;
  case CASE_12:
    pbVar19 = local_74;
    pcVar24 = &DAT_007a9e08;
    break;
  case CASE_13:
    pbVar19 = local_74;
    pcVar24 = &DAT_007a9e00;
    break;
  case CASE_14:
    pbVar19 = local_74;
    pcVar24 = &DAT_007a9df8;
    break;
  case CASE_15:
    pbVar19 = local_74;
    pcVar24 = &DAT_007a9df4;
    break;
  case CASE_16:
    uVar11 = 0xffffffff;
    pcVar24 = &DAT_007a9dec;
    do {
      pcVar25 = pcVar24;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar25 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar25;
    } while (cVar1 != '\0');
    uVar11 = ~uVar11;
    iVar10 = -1;
    pbVar19 = local_74;
    do {
      pbVar26 = pbVar19;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pbVar26 = pbVar19 + 1;
      bVar2 = *pbVar19;
      pbVar19 = pbVar26;
    } while (bVar2 != 0);
    pbVar23 = (byte *)(pcVar25 + -uVar11);
    pbVar26 = pbVar26 + -1;
    for (uVar20 = uVar11 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
      *(undefined4 *)pbVar26 = *(undefined4 *)pbVar23;
      pbVar23 = pbVar23 + 4;
      pbVar26 = pbVar26 + 4;
    }
    pbVar19 = local_e8;
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pbVar26 = *pbVar23;
      pbVar23 = pbVar23 + 1;
      pbVar26 = pbVar26 + 1;
    }
    pcVar24 = &DAT_007a9e9c;
    break;
  case CASE_17:
    pbVar19 = local_74;
    pcVar24 = &DAT_007a9de4;
    break;
  case CASE_18:
    pbVar19 = local_74;
    pcVar24 = &DAT_007a9ddc;
    break;
  case CASE_19:
    pbVar19 = local_74;
    pcVar24 = &DAT_007a9dd8;
    break;
  case CASE_1A:
    pbVar19 = local_74;
    pcVar24 = &DAT_007a9dd4;
    break;
  case CASE_1B:
    pbVar19 = local_74;
    pcVar24 = &DAT_007a9dd0;
    break;
  case CASE_1C:
    pbVar19 = local_74;
    pcVar24 = &DAT_007a9dcc;
    break;
  case CASE_1D:
    pbVar19 = local_74;
    pcVar24 = &DAT_007a9dc8;
    break;
  case CASE_1E:
    pbVar19 = local_74;
    pcVar24 = &DAT_007a9dc4;
    break;
  case CASE_1F:
    pbVar19 = local_74;
    pcVar24 = &DAT_007a9dc0;
    break;
  case CASE_20:
    pbVar19 = local_74;
    pcVar24 = &DAT_007a9dbc;
    break;
  case CASE_21:
    pbVar19 = local_74;
    pcVar24 = &DAT_007a9db8;
    break;
  case CASE_22:
    pbVar19 = local_74;
    pcVar24 = &DAT_007a9db4;
    break;
  case CASE_23:
    uVar11 = 0xffffffff;
    pcVar24 = &DAT_007a9db0;
    do {
      pcVar25 = pcVar24;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar25 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar25;
    } while (cVar1 != '\0');
    uVar11 = ~uVar11;
    iVar10 = -1;
    pbVar19 = local_74;
    do {
      pbVar26 = pbVar19;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pbVar26 = pbVar19 + 1;
      bVar2 = *pbVar19;
      pbVar19 = pbVar26;
    } while (bVar2 != 0);
    pbVar23 = (byte *)(pcVar25 + -uVar11);
    pbVar26 = pbVar26 + -1;
    for (uVar20 = uVar11 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
      *(undefined4 *)pbVar26 = *(undefined4 *)pbVar23;
      pbVar23 = pbVar23 + 4;
      pbVar26 = pbVar26 + 4;
    }
    pbVar19 = local_e8;
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pbVar26 = *pbVar23;
      pbVar23 = pbVar23 + 1;
      pbVar26 = pbVar26 + 1;
    }
    pcVar24 = &DAT_007a9ea4;
    break;
  case CASE_24:
    pbVar19 = local_74;
    pcVar24 = &DAT_007a9dac;
    break;
  case CASE_25:
    pbVar19 = local_74;
    pcVar24 = &DAT_007a9da4;
    break;
  case CASE_26:
    pbVar19 = local_74;
    pcVar24 = &DAT_007a9d9c;
    break;
  case CASE_27:
    pbVar19 = local_74;
    pcVar24 = &DAT_007a9d94;
    break;
  case CASE_28:
    pbVar19 = local_74;
    pcVar24 = &DAT_007a9d8c;
    break;
  default:
    goto switchD_0044fb10_default;
  }
  uVar11 = 0xffffffff;
  do {
    pcVar25 = pcVar24;
    if (uVar11 == 0) break;
    uVar11 = uVar11 - 1;
    pcVar25 = pcVar24 + 1;
    cVar1 = *pcVar24;
    pcVar24 = pcVar25;
  } while (cVar1 != '\0');
  uVar11 = ~uVar11;
  iVar10 = -1;
  do {
    pbVar26 = pbVar19;
    if (iVar10 == 0) break;
    iVar10 = iVar10 + -1;
    pbVar26 = pbVar19 + 1;
    bVar2 = *pbVar19;
    pbVar19 = pbVar26;
  } while (bVar2 != 0);
  pbVar19 = (byte *)(pcVar25 + -uVar11);
  pbVar26 = pbVar26 + -1;
  for (uVar20 = uVar11 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
    *(undefined4 *)pbVar26 = *(undefined4 *)pbVar19;
    pbVar19 = pbVar19 + 4;
    pbVar26 = pbVar26 + 4;
  }
  for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    *pbVar26 = *pbVar19;
    pbVar19 = pbVar19 + 1;
    pbVar26 = pbVar26 + 1;
  }
switchD_0044fb10_default:
  iVar10 = STT3DSprC::LoadSequence((STT3DSprC *)&this_00->field_01D5,0xe,DAT_0080677c,local_74,0x1d)
  ;
  if (iVar10 != 0) {
    RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2da);
  }
  SVar29 = this_00->field_06F7;
  if ((((SVar29 == CASE_B) || (SVar29 == CASE_16)) || (SVar29 == CASE_23)) &&
     (iVar10 = STT3DSprC::LoadSequence
                         ((STT3DSprC *)&this_00->field_01D5,0xd,DAT_0080677c,local_e8,0x1d),
     iVar10 != 0)) {
    RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2de);
  }
  switch(*(undefined4 *)&this_00->field_0x6f3) {
  case 0:
    pcVar24 = &DAT_007a9d88;
    break;
  case 1:
    pcVar24 = &DAT_007a4ffc;
    break;
  case 2:
    pcVar24 = &DAT_007aa028;
    break;
  case 3:
    pcVar24 = &DAT_007aa024;
    break;
  case 4:
    pcVar24 = &DAT_007aa020;
    break;
  case 5:
    pcVar24 = &DAT_007aa01c;
    break;
  case 6:
    pcVar24 = &DAT_007aa018;
    break;
  case 7:
    pcVar24 = &DAT_007aa014;
    break;
  default:
    goto switchD_0044fe4c_default;
  }
  uVar11 = 0xffffffff;
  do {
    pcVar25 = pcVar24;
    if (uVar11 == 0) break;
    uVar11 = uVar11 - 1;
    pcVar25 = pcVar24 + 1;
    cVar1 = *pcVar24;
    pcVar24 = pcVar25;
  } while (cVar1 != '\0');
  uVar11 = ~uVar11;
  iVar10 = -1;
  pbVar19 = local_74;
  do {
    pbVar26 = pbVar19;
    if (iVar10 == 0) break;
    iVar10 = iVar10 + -1;
    pbVar26 = pbVar19 + 1;
    bVar2 = *pbVar19;
    pbVar19 = pbVar26;
  } while (bVar2 != 0);
  pbVar19 = (byte *)(pcVar25 + -uVar11);
  pbVar26 = pbVar26 + -1;
  for (uVar20 = uVar11 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
    *(undefined4 *)pbVar26 = *(undefined4 *)pbVar19;
    pbVar19 = pbVar19 + 4;
    pbVar26 = pbVar26 + 4;
  }
  for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    *pbVar26 = *pbVar19;
    pbVar19 = pbVar19 + 1;
    pbVar26 = pbVar26 + 1;
  }
switchD_0044fe4c_default:
  puVar16 = &this_00->field_01D5;
  iVar10 = STT3DSprC::LoadSequence((STT3DSprC *)puVar16,0xc,DAT_0080677c,local_74,0x1d);
  if (iVar10 != 0) {
    RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2eb);
  }
  switch(this_00->field_06F7) {
  case CASE_9:
    local_c = ((8 - (int)*(short *)&this_00->field_0x6c / 0x2d) * 0xf) % 0x78;
    uVar20 = 0xe;
    uVar11 = *(int *)&this_00->field_0x1c * 0x41c64e6d + 0x3039;
    *(uint *)&this_00->field_0x1c = uVar11;
    break;
  default:
    local_c = ((0x18 - (int)*(short *)&this_00->field_0x6c / 0xf) % 0x18 + (4 - DAT_008073fc) * 6) %
              0x18;
    goto LAB_0045003f;
  case CASE_15:
    local_c = ((8 - (int)*(short *)&this_00->field_0x6c / 0x2d) * 0x14) % 0xa0;
    uVar20 = 0x13;
    uVar11 = *(int *)&this_00->field_0x1c * 0x41c64e6d + 0x3039;
    *(uint *)&this_00->field_0x1c = uVar11;
    break;
  case CASE_24:
  case CASE_25:
    uVar11 = *(int *)&this_00->field_0x1c * 0x41c64e6d + 0x3039;
    *(uint *)&this_00->field_0x1c = uVar11;
    local_c = (uVar11 >> 0x10) % 10;
LAB_0045003f:
    STT3DSprC::SetCurFase((STT3DSprC *)puVar16,'\x0e',local_c);
    uVar11 = local_c;
    goto LAB_00450050;
  }
  uVar20 = (uVar11 >> 0x10) % uVar20;
  *(uint *)&this_00->field_0x822 = uVar20;
  STT3DSprC::SetCurFase((STT3DSprC *)puVar16,'\x0e',uVar20 + local_c);
  uVar11 = *(int *)&this_00->field_0x822 + local_c;
LAB_00450050:
  STT3DSprC::SetCurFase((STT3DSprC *)puVar16,'\f',uVar11);
  if ((this_00->field_06F7 != CASE_25) && (this_00->field_06F7 != CASE_24)) {
    thunk_FUN_004ac610(puVar16,'\x0e');
    thunk_FUN_004ac610(puVar16,'\f');
  }
  STT3DSprC::StartShow((STT3DSprC *)puVar16,0xe,DAT_00802a38->field_00E4);
  STT3DSprC::StartShow((STT3DSprC *)puVar16,0xc,DAT_00802a38->field_00E4);
  SVar29 = this_00->field_06F7;
  if (((SVar29 == CASE_B) || (SVar29 == CASE_16)) || (SVar29 == CASE_23)) {
    thunk_FUN_004acd60(puVar16,'\r',DAT_00802a38->field_00E4 & 1);
    STT3DSprC::StartShow((STT3DSprC *)puVar16,0xd,DAT_00802a38->field_00E4);
    STT3DSprC::SetCurFase((STT3DSprC *)puVar16,'\r',local_d4);
  }
  local_78 = (void *)(int)(short)this_00->field_0041;
  thunk_FUN_004ad3c0(puVar16,(float)(int)local_78 * _DAT_007904f8 * _DAT_007904f0,
                     (float)(int)(short)this_00->field_0043 * _DAT_007904f8 * _DAT_007904f0,
                     (float)(int)(short)this_00->field_0045 * _DAT_007904f8 * _DAT_007904f0);
  uVar11 = local_c;
  if ((this_00->field_06F7 != CASE_25) && (this_00->field_06F7 != CASE_24)) {
    uVar11 = (0x18 - (int)*(short *)&this_00->field_0x6c / 0xf) % 0x18;
  }
  STT3DSprC::SetCurShad((STT3DSprC *)puVar16,'\x0e',uVar11);
  thunk_FUN_0041f630((int *)this_00);
  if (DAT_00807326 == '\0') {
    thunk_FUN_004ad5e0((int)puVar16);
  }
  if (local_1c[3] == 0) {
    local_78 = message->data;
    if (*(int *)((int)local_78 + 0x45) == 1) {
      iVar10 = STT3DSprC::LoadSequence
                         ((STT3DSprC *)puVar16,0xb,DAT_00806774,(byte *)s_forcef0_007aa008,0x1d);
      if (iVar10 != 0) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x31b);
      }
      thunk_FUN_004ad670(puVar16,'\x0e');
      thunk_FUN_004ad150(puVar16,'\v');
      thunk_FUN_004ac700(puVar16,'\v');
      STT3DSprC::StartShow((STT3DSprC *)puVar16,0xb,DAT_00802a38->field_00E4);
    }
    if (*(int *)((int)local_78 + 0x45) == 3) {
      thunk_FUN_006377b0(*(uint *)&this_00->field_0x1ed,1,-1,-1,-1,0x12);
    }
  }
  RaiseInternalException(-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x329);
LAB_00450268:
  *(undefined4 *)&this_00->field_0x46b = 0;
  FUN_006e62d0(DAT_00802a38,*(int *)&this_00->field_0x471,(int *)&this_00->field_0x46b);
  if (this_00->field_07CA != 0) {
    iVar10 = FUN_006e62d0(DAT_00802a38,this_00->field_07CA,&local_30);
    if (iVar10 == -4) {
      iVar10 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x335,0,0,&DAT_007a4ccc,
                                  s_STBoatC__GetMessage_MESS_ID_ALLC_007a9fc8);
      if (iVar10 != 0) {
        pcVar9 = (code *)swi(3);
        iVar10 = (*pcVar9)();
        return iVar10;
      }
      RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x336);
    }
    FUN_006ea3e0(*(void **)&this_00->field_0x211,*(uint *)&this_00->field_0x1ed,
                 *(int *)(local_30 + 0x1ed));
  }
  if ((this_00->field_045D == 0xf) && (this_00->field_0596 == 3)) {
    iVar10 = FUN_006e62d0(DAT_00802a38,this_00->field_058E,&local_30);
    if (iVar10 == -4) {
      iVar10 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x33c,0,0,&DAT_007a4ccc,
                                  s_STBoatC__GetMessage_MESS_ID_ALLC_007a9f8c);
      if (iVar10 != 0) {
        pcVar9 = (code *)swi(3);
        iVar10 = (*pcVar9)();
        return iVar10;
      }
      RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x33d);
    }
    FUN_006ea3e0(*(void **)&this_00->field_0x211,*(uint *)&this_00->field_0x1ed,
                 *(int *)(local_30 + 0x1ed));
    g_currentExceptionFrame = local_184.previous;
    return 0;
  }
  g_currentExceptionFrame = local_184.previous;
  return 0;
}

