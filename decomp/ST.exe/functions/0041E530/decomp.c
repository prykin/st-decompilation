
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tc_gobj.cpp
   STSprGameObjC::GetMessage
   
   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0044EE30 -> 0041E530 @ 0044EE8A | 004B9FA0 -> 0041E530 @ 004B9FEA | 004D0B90 ->
   0041E530 @ 004D0BCF | 004D55B0 -> 0041E530 @ 004D55F2 | 00578630 -> 0041E530 @ 00578691 |
   0057BF60 -> 0041E530 @ 0057BFBF | 0057E0A0 -> 0041E530 @ 0057E0FE | 00583270 -> 0041E530 @
   005832DB | 005859A0 -> 0041E530 @ 00585A02 | 00588BC0 -> 0041E530 @ 00588C30 | 00589C10 ->
   0041E530 @ 00589C58 | 0058C760 -> 0041E530 @ 0058C7C2 | 0058D7C0 -> 0041E530 @ 0058D81F |
   006406D0 -> 0041E530 @ 00640720 */

undefined4 __thiscall
STSprGameObjC::GetMessage(STSprGameObjC *this,AnonShape_0041AF40_F59F8577 *message)

{
  byte bVar1;
  code *pcVar2;
  STGameObjC *this_00;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  undefined1 *puVar7;
  int *unaff_EDI;
  bool bVar8;
  InternalExceptionFrame local_54;
  STGameObjC *local_10;
  byte local_c;
  undefined3 uStack_b;
  byte local_5;
  
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = (STGameObjC *)this;
  iVar3 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_10;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar4 = ReportDebugMessage(s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0xa91,0,iVar3,&DAT_007a4ccc,
                               s_STSprGameObjC__GetMessage_007a4f2c);
    if (iVar4 == 0) {
      RaiseInternalException(iVar3,0,s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0xa92);
      return 0xffff;
    }
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return uVar5;
  }
  STGameObjC::GetMessage(local_10,message);
  uVar6 = message->field_0010;
  if (0x113 < uVar6) {
    if (0x4403 < uVar6) {
      if (uVar6 == 0x4404) {
        thunk_FUN_0041f970((AnonShape_0041F970_0C561B1E *)this_00);
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      if (uVar6 != 0x440f) {
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      if (DAT_0080732c != 0) {
        if (*(int *)&this_00[1].field_0x4c != 1) {
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        puVar7 = &this_00[1].field_0x4;
        STT3DSprC::StopShow((STT3DSprC *)puVar7,0xf);
        STT3DSprC::StopShow((STT3DSprC *)puVar7,0);
        thunk_FUN_004abce0(puVar7,0,0,0x13,'\0');
        thunk_FUN_004abce0(puVar7,0xf,0x14,0x27,'\0');
        thunk_FUN_004acd60(puVar7,'\0',PTR_00802a38->field_00E4 & 1);
        thunk_FUN_004acd60(puVar7,'\x0f',PTR_00802a38->field_00E4 & 1);
        STT3DSprC::StartShow((STT3DSprC *)puVar7,0,PTR_00802a38->field_00E4);
        STT3DSprC::StartShow((STT3DSprC *)puVar7,0xf,PTR_00802a38->field_00E4);
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      if (*(int *)&this_00[1].field_0x4c != 1) {
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      puVar7 = &this_00[1].field_0x4;
      STT3DSprC::StopShow((STT3DSprC *)puVar7,0xf);
      STT3DSprC::StopShow((STT3DSprC *)puVar7,0);
      thunk_FUN_004abce0(puVar7,0,0,0,'\0');
      thunk_FUN_004abce0(puVar7,0xf,0x14,0x14,'\0');
      STT3DSprC::StartShow((STT3DSprC *)puVar7,0,PTR_00802a38->field_00E4);
      STT3DSprC::StartShow((STT3DSprC *)puVar7,0xf,PTR_00802a38->field_00E4);
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    if (uVar6 == 0x4403) {
      thunk_FUN_0041f630((AnonShape_0041F630_B1BEE81C *)this_00);
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    if (uVar6 == 0x11f) {
      if ((this_00->field_0020 != 0x14) && (this_00->field_0020 != 1000)) {
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      thunk_FUN_004ad4a0(&this_00[1].field_0x4,DAT_00806774,s_simmsk_007a4f4c);
      thunk_FUN_004ad4f0((int)&this_00[1].field_0x4);
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    if (uVar6 != 0x120) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    if ((this_00->field_0020 != 0x14) && (this_00->field_0020 != 1000)) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    thunk_FUN_004ad510((int)&this_00[1].field_0x4);
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  if (uVar6 == 0x113) {
    if ((this_00->field_0020 != 0x14) && (this_00->field_0020 != 1000)) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    (*(code *)**(undefined4 **)&this_00[1].field_0x4)();
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  if (0x109 < uVar6) {
    if (uVar6 == 0x110) {
      if (DAT_008033f0 == (void *)0x0) {
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      thunk_FUN_00566bd0(DAT_008033f0,(int)this_00);
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    if (uVar6 != 0x112) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    if ((this_00->field_0020 != 0x14) && (this_00->field_0020 != 1000)) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    thunk_FUN_004ad5e0((int)&this_00[1].field_0x4);
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  if (uVar6 == 0x109) {
    if (*(int *)&this_00[1].field_0x4c == 1) {
      LoadActFrame((STSprGameObjC *)this_00,unaff_EDI);
    }
    LoadLifeFrame((STSprGameObjC *)this_00,unaff_EDI);
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  if (uVar6 != 0) {
    if (uVar6 == 2) {
      *(undefined4 *)&this_00[1].field_0x48 = 10;
      *(undefined4 *)&this_00[1].field_0x44 = 10;
      iVar3 = this_00->field_002C;
      *(undefined4 *)&this_00[1].field_0x4c = 0;
      *(undefined4 *)&this_00[1].field_0x50 = 0xffffffff;
      *(undefined4 *)&this_00[1].field_0x54 = 0;
      *(undefined4 *)&this_00[1].field_0x58 = 0;
      *(undefined4 *)&this_00->field_0x101 = 0xffffffff;
      *(undefined4 *)&this_00->field_0x105 = 0xffffffff;
      *(undefined4 *)&this_00->field_0x109 = 0xffffffff;
      *(undefined4 *)&this_00[1].field_0x5c = 0;
      if (iVar3 != 0) {
        if (iVar3 == 1) {
          iVar3 = STT3DSprC::Init((STT3DSprC *)&this_00[1].field_0x4,DAT_008073cc,0x78,0x56,
                                  (uint)this_00,0xf0,0xbe,0x11);
          if (iVar3 != 0) {
            RaiseInternalException
                      (-1,g_overwriteContext_007ED77C,s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0x9d2)
            ;
          }
          FUN_006e9210(*(void **)&this_00[1].field_0x40,this_00[1].field_001C);
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        RaiseInternalException
                  (-1,g_overwriteContext_007ED77C,s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0x9d4);
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      iVar3 = STT3DSprC::Init((STT3DSprC *)&this_00[1].field_0x4,DAT_008073cc,0x5a,0x45,
                              (uint)this_00,0xb4,0x8c,0x11);
      if (iVar3 == 0) {
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0x9d1);
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    if (uVar6 != 3) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    thunk_FUN_0041f970((AnonShape_0041F970_0C561B1E *)this_00);
    FreeAndNull((void **)&this_00->field_011D);
    FreeAndNull((void **)&this_00->field_0121);
    FreeAndNull((void **)&this_00->field_0125);
    FreeAndNull((void **)&this_00->field_0129);
    iVar3 = this_00->field_0020;
    if (iVar3 != 0x14) {
      if (iVar3 == 0x1ae) {
        FreeAndNull(&this_00->field_01AD);
        FreeAndNull(&this_00->field_01B1);
        FreeAndNull((void **)&this_00->field_01C5);
        FreeAndNull((void **)&this_00->field_01C9);
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      if (iVar3 != 1000) {
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      if ((DArrayTy *)this_00->field_0135 != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)this_00->field_0135);
      }
      if ((DArrayTy *)this_00->field_0139 != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)this_00->field_0139);
      }
      this_00->field_0135 = 0;
      this_00->field_0139 = 0;
      if ((DArrayTy *)this_00->field_012D != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)this_00->field_012D);
      }
      if ((DArrayTy *)this_00->field_0131 != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)this_00->field_0131);
      }
      this_00->field_012D = 0;
      this_00->field_0131 = 0;
      if ((DArrayTy *)this_00->field_014D != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)this_00->field_014D);
      }
      if ((DArrayTy *)this_00->field_0151 != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)this_00->field_0151);
      }
      if ((DArrayTy *)this_00->field_0155 != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)this_00->field_0155);
      }
      if ((DArrayTy *)this_00->field_0159 != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)this_00->field_0159);
      }
      this_00->field_014D = 0;
      this_00->field_0151 = 0;
      this_00->field_0155 = 0;
      this_00->field_0159 = 0;
      if ((DArrayTy *)this_00->field_013D != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)this_00->field_013D);
      }
      if ((DArrayTy *)this_00->field_0141 != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)this_00->field_0141);
      }
      if ((DArrayTy *)this_00->field_0145 != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)this_00->field_0145);
      }
      if ((DArrayTy *)this_00->field_0149 != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)this_00->field_0149);
      }
      this_00->field_013D = 0;
      this_00->field_0141 = 0;
      this_00->field_0145 = 0;
      this_00->field_0149 = 0;
      FreeAndNull((void **)&this_00->field_0185);
      FreeAndNull((void **)&this_00->field_0189);
      FreeAndNull((void **)&this_00->field_018D);
      FreeAndNull((void **)&this_00->field_0191);
      if ((DArrayTy *)this_00->field_01A1 != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)this_00->field_01A1);
        this_00->field_01A1 = 0;
      }
      if ((DArrayTy *)this_00->field_019D != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)this_00->field_019D);
        this_00->field_019D = 0;
      }
      FreeAndNull((void **)&this_00->field_01A5);
      FreeAndNull((void **)&this_00->field_01A9);
      FreeAndNull((void **)&this_00->field_01B5);
      FreeAndNull((void **)&this_00->field_01B9);
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    if ((DArrayTy *)this_00->field_0171 != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)this_00->field_0171);
    }
    if ((DArrayTy *)this_00->field_0175 != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)this_00->field_0175);
    }
    if ((DArrayTy *)this_00->field_0179 != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)this_00->field_0179);
    }
    if ((DArrayTy *)this_00->field_017D != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)this_00->field_017D);
    }
    if ((DArrayTy *)this_00->field_0181 != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)this_00->field_0181);
    }
    this_00->field_0171 = 0;
    this_00->field_0175 = 0;
    this_00->field_0179 = 0;
    this_00->field_017D = 0;
    this_00->field_0181 = 0;
    if ((DArrayTy *)this_00->field_015D != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)this_00->field_015D);
    }
    if ((DArrayTy *)this_00->field_0161 != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)this_00->field_0161);
    }
    if ((DArrayTy *)this_00->field_0165 != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)this_00->field_0165);
    }
    if ((DArrayTy *)this_00->field_0169 != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)this_00->field_0169);
    }
    if ((DArrayTy *)this_00->field_016D != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)this_00->field_016D);
    }
    this_00->field_015D = 0;
    this_00->field_0161 = 0;
    this_00->field_0165 = 0;
    this_00->field_0169 = 0;
    this_00->field_016D = 0;
    FreeAndNull(&this_00->field_0195);
    FreeAndNull(&this_00->field_0199);
    FreeAndNull(&this_00->field_01AD);
    FreeAndNull(&this_00->field_01B1);
    FreeAndNull((void **)&this_00->field_01BD);
    FreeAndNull((void **)&this_00->field_01C1);
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  iVar3 = this_00->field_0020;
  if ((((iVar3 == 0x14) || (iVar3 == 1000)) || (iVar3 == 0x3e9)) ||
     ((iVar3 == 0x172 || (iVar3 == 0x1a4)))) {
    if (*(int *)&this_00[1].field_0x4c == 1) {
      *(undefined4 *)&this_00[1].field_0x50 = 2;
    }
    thunk_FUN_0041f3b0((STSprGameObjC *)this_00);
  }
  if ((uint)PTR_00802a38->field_00E4 % 0xc != 0) {
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  if (7 < (uint)this_00->field_0024) {
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  if ((PTR_00802a38 != (STPlaySystemC *)0x0) &&
     (7 < (byte)(&DAT_008087e9)[this_00->field_0024 * 0x51])) {
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  if (7 < DAT_0080874d) {
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  if ((PTR_00802a38 != (STPlaySystemC *)0x0) &&
     (7 < (byte)(&DAT_008087e9)[(uint)DAT_0080874d * 0x51])) {
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  local_5 = *(byte *)&this_00->field_0024;
  if (DAT_00808a8f == '\0') {
    if (DAT_0080874d == local_5) {
LAB_0041ebc0:
      iVar3 = 0;
    }
    else {
      uVar6 = (uint)DAT_0080874d;
      bVar1 = g_playerRelationMatrix[uVar6][local_5];
      if ((bVar1 == 0) && (g_playerRelationMatrix[local_5][uVar6] == 0)) {
        iVar3 = -2;
      }
      else if ((bVar1 == 1) && (g_playerRelationMatrix[local_5][uVar6] == 0)) {
        iVar3 = -1;
      }
      else if ((bVar1 == 0) && (g_playerRelationMatrix[local_5][uVar6] == 1)) {
        iVar3 = 1;
      }
      else {
        if ((bVar1 != 1) || (g_playerRelationMatrix[local_5][uVar6] != 1)) goto LAB_0041ebc0;
        iVar3 = 2;
      }
    }
    bVar8 = iVar3 < 0;
  }
  else {
    bVar8 = (&DAT_008087ea)[(uint)local_5 * 0x51] != (&DAT_008087ea)[(uint)DAT_0080874d * 0x51];
  }
  if (bVar8) goto LAB_0041eccc;
  _local_c = CONCAT31(uStack_b,local_5);
  if (DAT_00808a8f == '\0') {
    if (local_5 == DAT_0080874d) {
LAB_0041ec79:
      iVar3 = 0;
    }
    else {
      uVar6 = (uint)DAT_0080874d;
      bVar1 = g_playerRelationMatrix[local_5][uVar6];
      if ((bVar1 == 0) && (g_playerRelationMatrix[uVar6][local_5] == 0)) {
        iVar3 = -2;
      }
      else if ((bVar1 == 1) && (g_playerRelationMatrix[uVar6][local_5] == 0)) {
        iVar3 = -1;
      }
      else if ((bVar1 == 0) && (g_playerRelationMatrix[uVar6][local_5] == 1)) {
        iVar3 = 1;
      }
      else {
        if ((bVar1 != 1) || (g_playerRelationMatrix[uVar6][local_5] != 1)) goto LAB_0041ec79;
        iVar3 = 2;
      }
    }
    bVar8 = iVar3 < 0;
  }
  else {
    bVar8 = (&DAT_008087ea)[(uint)DAT_0080874d * 0x51] != (&DAT_008087ea)[(uint)local_5 * 0x51];
  }
  if (!bVar8) {
    if (*(int *)&this_00[1].field_0x5c != 0) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    *(undefined4 *)&this_00[1].field_0x5c = 1;
    FUN_006e97c0(*(void **)&this_00[1].field_0x40,this_00[1].field_001C,DAT_008032c0);
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
LAB_0041eccc:
  _local_c = CONCAT31(uStack_b,local_5);
  if (*(int *)&this_00[1].field_0x5c == 0) {
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  *(undefined4 *)&this_00[1].field_0x5c = 0;
  FUN_006e97c0(*(void **)&this_00[1].field_0x40,this_00[1].field_001C,0);
  g_currentExceptionFrame = local_54.previous;
  return 0;
}

