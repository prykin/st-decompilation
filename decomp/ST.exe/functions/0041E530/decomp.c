#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tc_gobj.cpp
   STSprGameObjC::GetMessage

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0044EE30 -> 0041E530 @ 0044EE8A | 004B9FA0 -> 0041E530 @ 004B9FEA | 004D0B90 ->
   0041E530 @ 004D0BCF | 004D55B0 -> 0041E530 @ 004D55F2 | 00578630 -> 0041E530 @ 00578691 |
   0057BF60 -> 0041E530 @ 0057BFBF | 0057E0A0 -> 0041E530 @ 0057E0FE | 00583270 -> 0041E530 @
   005832DB | 005859A0 -> 0041E530 @ 00585A02 | 00588BC0 -> 0041E530 @ 00588C30 | 00589C10 ->
   0041E530 @ 00589C58 | 0058C760 -> 0041E530 @ 0058C7C2 | 0058D7C0 -> 0041E530 @ 0058D81F |
   006406D0 -> 0041E530 @ 00640720

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00404F07|0041E530; family_names=STSprGameObjC::GetMessage; ret4=19;
   direct_offsets={10:1,14:0,18:0,1c:0} */

int __thiscall STSprGameObjC::GetMessage(STSprGameObjC *this,STMessage *message)

{
  byte bVar1;
  STMessageId SVar2;
  code *pcVar3;
  STGameObjC *this_00;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  bool bVar8;
  InternalExceptionFrame local_54;
  STGameObjC *local_10;
  byte local_c;
  undefined3 uStack_b;
  byte local_5;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = (STGameObjC *)this;
  iVar4 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  this_00 = local_10;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\Tc_gobj.cpp",0xa91,0,iVar4,"%s",
                               "STSprGameObjC::GetMessage");
    if (iVar5 == 0) {
      RaiseInternalException(iVar4,0,"E:\\__titans\\wlad\\Tc_gobj.cpp",0xa92);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  STGameObjC::GetMessage(local_10,message);
  SVar2 = message->id;
  if (MESS_STSPRGAMEOBJC_0113 < SVar2) {
    if (MESS_STSPRGAMEOBJC_4403 < SVar2) {
      if (SVar2 == MESS_STSPRGAMEOBJC_4404) {
        sub_0041F970((STSprGameObjC *)this_00);
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      if (SVar2 != MESS_SHARED_440F) {
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      if (DAT_0080732c != 0) {
        if (*(int *)&this_00->field_0x21d != 1) {
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        puVar7 = &this_00->field_0x1d5;
        STT3DSprC::StopShow((STT3DSprC *)puVar7,0xf);
        STT3DSprC::StopShow((STT3DSprC *)puVar7,0);
        thunk_FUN_004abce0(puVar7,0,0,0x13,'\0');
        thunk_FUN_004abce0(puVar7,0xf,0x14,0x27,'\0');
        thunk_FUN_004acd60(puVar7,'\0',g_playSystem_00802A38->field_00E4 & 1);
        thunk_FUN_004acd60(puVar7,'\x0f',g_playSystem_00802A38->field_00E4 & 1);
        STT3DSprC::StartShow((STT3DSprC *)puVar7,0,g_playSystem_00802A38->field_00E4);
        STT3DSprC::StartShow((STT3DSprC *)puVar7,0xf,g_playSystem_00802A38->field_00E4);
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      if (*(int *)&this_00->field_0x21d != 1) {
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      puVar7 = &this_00->field_0x1d5;
      STT3DSprC::StopShow((STT3DSprC *)puVar7,0xf);
      STT3DSprC::StopShow((STT3DSprC *)puVar7,0);
      thunk_FUN_004abce0(puVar7,0,0,0,'\0');
      thunk_FUN_004abce0(puVar7,0xf,0x14,0x14,'\0');
      STT3DSprC::StartShow((STT3DSprC *)puVar7,0,g_playSystem_00802A38->field_00E4);
      STT3DSprC::StartShow((STT3DSprC *)puVar7,0xf,g_playSystem_00802A38->field_00E4);
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    if (SVar2 == MESS_STSPRGAMEOBJC_4403) {
      thunk_FUN_0041f630((AnonShape_0041F630_B1BEE81C *)this_00);
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    if (SVar2 == MESS_STSPRGAMEOBJC_011F) {
      if ((this_00->field_0020 != 0x14) && (this_00->field_0020 != 1000)) {
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      thunk_FUN_004ad4a0(&this_00->field_0x1d5,DAT_00806774,"simmsk");
      thunk_FUN_004ad4f0((int)&this_00->field_0x1d5);
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    if (SVar2 != MESS_STSPRGAMEOBJC_0120) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    if ((this_00->field_0020 != 0x14) && (this_00->field_0020 != 1000)) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    thunk_FUN_004ad510((int)&this_00->field_0x1d5);
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  if (SVar2 == MESS_STSPRGAMEOBJC_0113) {
    if ((this_00->field_0020 != 0x14) && (this_00->field_0020 != 1000)) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (*(code *)**(undefined4 **)&this_00->field_0x1d5)();
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  if (MESS_STSPRGAMEOBJC_0109 < SVar2) {
    if (SVar2 == MESS_TORPHIT) {
      if (DAT_008033f0 == nullptr) {
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      thunk_FUN_00566bd0(DAT_008033f0,(int)this_00);
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    if (SVar2 != MESS_STOCTOPUSC_0112) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    if ((this_00->field_0020 != 0x14) && (this_00->field_0020 != 1000)) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    thunk_FUN_004ad5e0((STT3DSprC *)&this_00->field_0x1d5);
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  if (SVar2 == MESS_STSPRGAMEOBJC_0109) {
    if (*(int *)&this_00->field_0x21d == 1) {
      LoadActFrame((STSprGameObjC *)this_00);
    }
    LoadLifeFrame((STSprGameObjC *)this_00);
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  if (SVar2 != MESS_ID_NONE) {
    if (SVar2 == MESS_ID_CREATE) {
      this_00->field_0219 = 10;
      this_00->field_0215 = 10;
      *(undefined4 *)&this_00->field_0x21d = 0;
      *(undefined4 *)&this_00->field_0x221 = 0xffffffff;
      *(undefined4 *)&this_00->field_0x225 = 0;
      *(undefined4 *)&this_00->field_0x229 = 0;
      this_00->field_0101 = 0xffffffff;
      this_00->field_0105 = 0xffffffff;
      this_00->field_0109 = 0xffffffff;
      *(undefined4 *)&this_00->field_0x22d = 0;
      if (this_00->field_002C != 0) {
        if (this_00->field_002C == 1) {
          iVar4 = STT3DSprC::Init((STT3DSprC *)&this_00->field_0x1d5,DAT_008073cc,0x78,0x56,
                                  (STDcResourcC *)this_00,0xf0,0xbe,0x11);
          if (iVar4 != 0) {
            RaiseInternalException
                      (-1,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\Tc_gobj.cpp",0x9d2);
          }
          Library::Ourlib::ST3DSMAP::SprSetSplit
                    (*(void **)&this_00->field_0x211,this_00->field_01ED);
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        RaiseInternalException
                  (-1,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\Tc_gobj.cpp",0x9d4);
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      iVar4 = STT3DSprC::Init((STT3DSprC *)&this_00->field_0x1d5,DAT_008073cc,0x5a,0x45,
                              (STDcResourcC *)this_00,0xb4,0x8c,0x11);
      if (iVar4 == 0) {
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\Tc_gobj.cpp",0x9d1);
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    if (SVar2 != MESS_SHARED_0003) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    sub_0041F970((STSprGameObjC *)this_00);
    FreeAndNull(&this_00->field_011D);
    FreeAndNull(&this_00->field_0121);
    FreeAndNull(&this_00->field_0125);
    FreeAndNull(&this_00->field_0129);
    uVar6 = this_00->field_0020;
    if (uVar6 != 0x14) {
      if (uVar6 == 0x1ae) {
        FreeAndNull(&this_00->field_01AD);
        FreeAndNull(&this_00->field_01B1);
        FreeAndNull(&this_00->field_01C5);
        FreeAndNull(&this_00->field_01C9);
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      if (uVar6 != 1000) {
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      if ((DArrayTy *)this_00->field_0135 != nullptr) {
        DArrayDestroy((DArrayTy *)this_00->field_0135);
      }
      if ((DArrayTy *)this_00->field_0139 != nullptr) {
        DArrayDestroy((DArrayTy *)this_00->field_0139);
      }
      this_00->field_0135 = 0;
      this_00->field_0139 = 0;
      if ((DArrayTy *)this_00->field_012D != nullptr) {
        DArrayDestroy((DArrayTy *)this_00->field_012D);
      }
      if ((DArrayTy *)this_00->field_0131 != nullptr) {
        DArrayDestroy((DArrayTy *)this_00->field_0131);
      }
      this_00->field_012D = 0;
      this_00->field_0131 = 0;
      if ((DArrayTy *)this_00->field_014D != nullptr) {
        DArrayDestroy((DArrayTy *)this_00->field_014D);
      }
      if ((DArrayTy *)this_00->field_0151 != nullptr) {
        DArrayDestroy((DArrayTy *)this_00->field_0151);
      }
      if ((DArrayTy *)this_00->field_0155 != nullptr) {
        DArrayDestroy((DArrayTy *)this_00->field_0155);
      }
      if ((DArrayTy *)this_00->field_0159 != nullptr) {
        DArrayDestroy((DArrayTy *)this_00->field_0159);
      }
      this_00->field_014D = 0;
      this_00->field_0151 = 0;
      this_00->field_0155 = 0;
      this_00->field_0159 = 0;
      if ((DArrayTy *)this_00->field_013D != nullptr) {
        DArrayDestroy((DArrayTy *)this_00->field_013D);
      }
      if ((DArrayTy *)this_00->field_0141 != nullptr) {
        DArrayDestroy((DArrayTy *)this_00->field_0141);
      }
      if ((DArrayTy *)this_00->field_0145 != nullptr) {
        DArrayDestroy((DArrayTy *)this_00->field_0145);
      }
      if ((DArrayTy *)this_00->field_0149 != nullptr) {
        DArrayDestroy((DArrayTy *)this_00->field_0149);
      }
      this_00->field_013D = 0;
      this_00->field_0141 = 0;
      this_00->field_0145 = 0;
      this_00->field_0149 = 0;
      FreeAndNull(&this_00->field_0185);
      FreeAndNull(&this_00->field_0189);
      FreeAndNull(&this_00->field_018D);
      FreeAndNull(&this_00->field_0191);
      if ((DArrayTy *)this_00->field_01A1 != nullptr) {
        DArrayDestroy((DArrayTy *)this_00->field_01A1);
        this_00->field_01A1 = 0;
      }
      if ((DArrayTy *)this_00->field_019D != nullptr) {
        DArrayDestroy((DArrayTy *)this_00->field_019D);
        this_00->field_019D = 0;
      }
      FreeAndNull(&this_00->field_01A5);
      FreeAndNull(&this_00->field_01A9);
      FreeAndNull(&this_00->field_01B5);
      FreeAndNull(&this_00->field_01B9);
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    if (this_00->field_0171 != nullptr) {
      DArrayDestroy(this_00->field_0171);
    }
    if (this_00->field_0175 != nullptr) {
      DArrayDestroy(this_00->field_0175);
    }
    if (this_00->field_0179 != nullptr) {
      DArrayDestroy(this_00->field_0179);
    }
    if (this_00->field_017D != nullptr) {
      DArrayDestroy(this_00->field_017D);
    }
    if (this_00->field_0181 != nullptr) {
      DArrayDestroy(this_00->field_0181);
    }
    this_00->field_0171 = nullptr;
    this_00->field_0175 = nullptr;
    this_00->field_0179 = nullptr;
    this_00->field_017D = nullptr;
    this_00->field_0181 = nullptr;
    if (this_00->field_015D != nullptr) {
      DArrayDestroy(this_00->field_015D);
    }
    if (this_00->field_0161 != nullptr) {
      DArrayDestroy(this_00->field_0161);
    }
    if (this_00->field_0165 != nullptr) {
      DArrayDestroy(this_00->field_0165);
    }
    if (this_00->field_0169 != nullptr) {
      DArrayDestroy(this_00->field_0169);
    }
    if (this_00->field_016D != nullptr) {
      DArrayDestroy(this_00->field_016D);
    }
    this_00->field_015D = nullptr;
    this_00->field_0161 = nullptr;
    this_00->field_0165 = nullptr;
    this_00->field_0169 = nullptr;
    this_00->field_016D = nullptr;
    FreeAndNull(&this_00->field_0195);
    FreeAndNull(&this_00->field_0199);
    FreeAndNull(&this_00->field_01AD);
    FreeAndNull(&this_00->field_01B1);
    FreeAndNull(&this_00->field_01BD);
    FreeAndNull(&this_00->field_01C1);
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  uVar6 = this_00->field_0020;
  if ((((uVar6 == 0x14) || (uVar6 == 1000)) || (uVar6 == 0x3e9)) ||
     ((uVar6 == 0x172 || (uVar6 == 0x1a4)))) {
    if (*(int *)&this_00->field_0x21d == 1) {
      *(undefined4 *)&this_00->field_0x221 = 2;
    }
    thunk_FUN_0041f3b0((STSprGameObjC *)this_00);
  }
  if (g_playSystem_00802A38->field_00E4 % 0xc != 0) {
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  if (7 < (uint)this_00->field_0024) {
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  if ((g_playSystem_00802A38 != nullptr) &&
     (7 < g_bulkInitializedRecords_008087C7[this_00->field_0024].field_0022)) {
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  if (7 < DAT_0080874d) {
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  if ((g_playSystem_00802A38 != nullptr) &&
     (7 < g_bulkInitializedRecords_008087C7[DAT_0080874d].field_0022)) {
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  local_5 = *(byte *)&this_00->field_0024;
  if (DAT_00808a8f == '\0') {
    if (DAT_0080874d == local_5) {
LAB_0041ebc0:
      iVar4 = 0;
    }
    else {
      uVar6 = (uint)DAT_0080874d;
      bVar1 = g_playerRelationMatrix[uVar6][local_5];
      if ((bVar1 == 0) && (g_playerRelationMatrix[local_5][uVar6] == 0)) {
        iVar4 = -2;
      }
      else if ((bVar1 == 1) && (g_playerRelationMatrix[local_5][uVar6] == 0)) {
        iVar4 = -1;
      }
      else if ((bVar1 == 0) && (g_playerRelationMatrix[local_5][uVar6] == 1)) {
        iVar4 = 1;
      }
      else {
        if ((bVar1 != 1) || (g_playerRelationMatrix[local_5][uVar6] != 1)) goto LAB_0041ebc0;
        iVar4 = 2;
      }
    }
    bVar8 = iVar4 < 0;
  }
  else {
    bVar8 = g_bulkInitializedRecords_008087C7[local_5].field_0023 !=
            g_bulkInitializedRecords_008087C7[DAT_0080874d].field_0023;
  }
  if (bVar8) goto LAB_0041eccc;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  _local_c = CONCAT31(uStack_b,local_5);
  if (DAT_00808a8f == '\0') {
    if (local_5 == DAT_0080874d) {
LAB_0041ec79:
      iVar4 = 0;
    }
    else {
      uVar6 = (uint)DAT_0080874d;
      bVar1 = g_playerRelationMatrix[local_5][uVar6];
      if ((bVar1 == 0) && (g_playerRelationMatrix[uVar6][local_5] == 0)) {
        iVar4 = -2;
      }
      else if ((bVar1 == 1) && (g_playerRelationMatrix[uVar6][local_5] == 0)) {
        iVar4 = -1;
      }
      else if ((bVar1 == 0) && (g_playerRelationMatrix[uVar6][local_5] == 1)) {
        iVar4 = 1;
      }
      else {
        if ((bVar1 != 1) || (g_playerRelationMatrix[uVar6][local_5] != 1)) goto LAB_0041ec79;
        iVar4 = 2;
      }
    }
    bVar8 = iVar4 < 0;
  }
  else {
    bVar8 = g_bulkInitializedRecords_008087C7[DAT_0080874d].field_0023 !=
            g_bulkInitializedRecords_008087C7[local_5].field_0023;
  }
  if (!bVar8) {
    if (*(int *)&this_00->field_0x22d != 0) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    *(undefined4 *)&this_00->field_0x22d = 1;
    Library::Ourlib::ST3DSMAP::SprSetShadedColorsTbl
              (*(void **)&this_00->field_0x211,this_00->field_01ED,DAT_008032c0);
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
/* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
LAB_0041eccc:
  _local_c = CONCAT31(uStack_b,local_5);
  if (*(int *)&this_00->field_0x22d == 0) {
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  *(undefined4 *)&this_00->field_0x22d = 0;
  Library::Ourlib::ST3DSMAP::SprSetShadedColorsTbl
            (*(void **)&this_00->field_0x211,this_00->field_01ED,0);
  g_currentExceptionFrame = local_54.previous;
  return 0;
}

