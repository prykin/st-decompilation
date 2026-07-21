#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_mine_set.cpp
   STMineSetC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00401672|00621B50; family_names=STMineSetC::GetMessage; ret4=13;
   direct_offsets={10:1,14:3,18:2,1c:0} */

int __thiscall STMineSetC::GetMessage(STMineSetC *this,STMessage *message)

{
  char cVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  STMessageId SVar5;
  dword dVar6;
  code *pcVar7;
  bool bVar8;
  STMineSetC *this_00;
  int iVar9;
  undefined4 uVar10;
  STMineSetC_field_02AEState SVar11;
  uint uVar12;
  Global_sub_00626B50_param_1Enum GVar13;
  int iVar14;
  undefined4 *puVar15;
  STWorldObject *pSVar16;
  undefined4 *puVar17;
  InternalExceptionFrame local_60;
  int local_1c;
  int local_18;
  uint local_14;
  byte *local_10;
  AnonShape_0060EA30_DCEB68AD *local_c;
  STMineSetC *local_8;

  local_8 = this;
  iVar9 = STSprGameObjC::GetMessage((STSprGameObjC *)this,message);
  if (iVar9 == 0xffff) {
    return 0xffff;
  }
  local_60.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_60;
  iVar9 = Library::MSVCRT::__setjmp3(local_60.jumpBuffer,0);
  this_00 = local_8;
  if (iVar9 != 0) {
    g_currentExceptionFrame = local_60.previous;
    iVar14 = ReportDebugMessage("E:\\__titans\\nick\\to_mine_set.cpp",0x174,0,iVar9,
                                "%s","STMineSetC::GetMessage");
    if (iVar14 == 0) {
      RaiseInternalException(iVar9,0,"E:\\__titans\\nick\\to_mine_set.cpp",0x176);
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
      thunk_FUN_004ad430((int)&local_8->field_01D5);
      thunk_FUN_00622670(this_00);
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
    if (SVar5 != MESS_STOCTOPUSC_0112) {
      if (SVar5 != MESS_STSPRGAMEOBJC_0113) {
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      if ((int)local_8->field_02BA < 0) {
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      if (local_8->field_02AE != CASE_1) {
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)local_8->field_01D5)();
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
    if ((int)local_8->field_02BA < 0) {
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
    if (local_8->field_02AE != CASE_1) {
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
    thunk_FUN_004ad5e0((int)&local_8->field_01D5);
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  if (SVar5 == MESS_TORPHIT) {
    thunk_FUN_00627390((int)local_8);
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  if (MESS_SHARED_0003 < SVar5) {
    if (SVar5 == MESS_SHARED_0108) {
      GVar13 = thunk_FUN_004ab050();
      thunk_FUN_00626b50(local_8,GVar13);
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
    if (SVar5 != MESS_SHARED_010F) {
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
    local_10 = thunk_FUN_00622990(local_8,(uint *)&local_c);
    STPlaySystemC::SaveObjData(PTR_00802a38,this_00->field_0018,local_10,local_c);
    FreeAndNull(&local_10);
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  if (SVar5 == MESS_SHARED_0003) {
    thunk_FUN_00622880((AnonShape_00622880_C4191DB5 *)local_8);
    if ((AnonShape_006366D0_80B1100F *)this_00->field_0363 == (AnonShape_006366D0_80B1100F *)0x0) {
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
    thunk_FUN_006366d0((AnonShape_006366D0_80B1100F *)this_00->field_0363);
    Library::MSVCRT::FUN_0072e2b0((HoloTy *)this_00->field_0363);
    this_00->field_0363 = 0;
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  if (SVar5 == MESS_ID_NONE) {
    if ((local_8->field_02AD == '\x03') &&
       (0x1194 < (uint)(PTR_00802a38->field_00E4 - local_8->field_035F))) {
      thunk_FUN_00627390((int)local_8);
    }
    iVar9 = thunk_FUN_006239a0(this_00);
    if (iVar9 == 0) {
      if ((this_00->field_02AE == CASE_2) && (this_00->field_0353 == '\0')) {
        uVar12 = thunk_FUN_006226c0(this_00,(int)this_00->field_0047,(int)this_00->field_0049);
        this_00->field_0353 = (char)uVar12;
        if ((char)uVar12 != '\0') {
          LoadImagMineSet(this_00,0);
          thunk_FUN_004ad460(&this_00->field_01D5,1);
        }
      }
    }
    else {
      if ((((this_00->field_0314 == '\0') && (SVar11 = this_00->field_02AE, SVar11 != CASE_2)) &&
          (SVar11 != CASE_3)) && ((SVar11 != CASE_4 && (SVar11 != (CASE_4|CASE_1))))) {
        SVar11 = thunk_FUN_00627400(this_00,SVar11);
        this_00->field_02AE = SVar11;
      }
      SVar11 = this_00->field_02AE;
      if (((SVar11 != CASE_2) && (SVar11 != CASE_3)) &&
         ((SVar11 != CASE_4 && (SVar11 != (CASE_4|CASE_1))))) {
        if (this_00->field_0353 == '\0') {
          uVar12 = thunk_FUN_006226c0(this_00,(int)this_00->field_0047,(int)this_00->field_0049);
          this_00->field_0353 = (char)uVar12;
          if (((char)uVar12 != '\0') && ((int)this_00->field_02BA < 0)) {
            LoadImagMineSet(this_00,0);
            thunk_FUN_004ad460(&this_00->field_01D5,1);
          }
        }
        else if ((*(byte *)&PTR_00802a38->field_00E4 & 3) == 0) {
          uVar12 = thunk_FUN_006226c0(this_00,(int)this_00->field_0047,(int)this_00->field_0049);
          this_00->field_0353 = (char)uVar12;
          if (((char)uVar12 == '\0') && (this_00->field_02E9 != '\0')) {
            thunk_FUN_004ad430((int)&this_00->field_01D5);
            this_00->field_02E9 = 0;
          }
        }
        this_00->field_0045 = (short)this_00->field_02CA;
        this_00->field_0041 = (short)this_00->field_02C2;
        this_00->field_0043 = (short)this_00->field_02C6;
        if (this_00->field_0353 != '\0') {
          thunk_FUN_00623600((AnonShape_00623600_61226D23 *)this_00);
        }
        cVar1 = this_00->field_02AD;
        if ((((cVar1 == '\0') || (cVar1 == '\x01')) || (cVar1 == '\x02')) &&
           (((((uint)PTR_00802a38->field_00E4 % 5 == 0 &&
              (0x19 < (uint)(PTR_00802a38->field_00E4 - this_00->field_0346))) &&
             ((this_00->field_02AE == CASE_0 || (this_00->field_02AE == CASE_1)))) &&
            (iVar9 = thunk_FUN_00625730(this_00), iVar9 != 0)))) {
          this_00->field_02AE = CASE_2;
          this_00->field_030F =
               *(int *)(&DAT_007d02a4 + (uint)(byte)this_00->field_02AD * 4) +
               PTR_00802a38->field_00E4;
        }
      }
    }
    if (((this_00->field_0355 == 0) && (this_00->field_02AE != CASE_2)) &&
       ((this_00->field_02AE != CASE_4 &&
        (((short)(this_00->field_0047 * 0xc9 + 100) == this_00->field_0041 &&
         ((short)(this_00->field_0049 * 0xc9 + 100) == this_00->field_0043)))))) {
      this_00->field_0355 = 1;
    }
    if (((int *)this_00->field_0363 != (int *)0x0) &&
       (iVar9 = thunk_FUN_006372e0((int *)this_00->field_0363), iVar9 != 0)) {
      thunk_FUN_006366d0((AnonShape_006366D0_80B1100F *)this_00->field_0363);
      Library::MSVCRT::FUN_0072e2b0((HoloTy *)this_00->field_0363);
      this_00->field_0363 = 0;
    }
    if (this_00->field_0359 == '\0') {
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
    thunk_FUN_00627170((AnonShape_00627170_DB470A34 *)this_00);
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
    thunk_FUN_00622ab0(local_8,(message->arg0).ptr);
    if (this_00->field_0313 != '\0') {
      sVar2 = this_00->field_0047;
      local_1c = 1;
      local_14 = (uint)(byte)this_00->field_008E;
      sVar3 = this_00->field_004B;
      sVar4 = this_00->field_0049;
      local_18 = (int)sVar4;
      if ((((sVar2 < 0) || (g_worldGrid.sizeX <= sVar2)) || (sVar4 < 0)) ||
         (((g_worldGrid.sizeY <= sVar4 || (sVar3 < 0)) || (g_worldGrid.sizeZ <= sVar3)))) {
        pSVar16 = (STWorldObject *)0x0;
      }
      else {
        pSVar16 = g_worldGrid.cells
                  [(int)g_worldGrid.planeStride * (int)sVar3 + (int)g_worldGrid.sizeX * (int)sVar4 +
                   (int)sVar2].objects[local_14];
      }
      if ((pSVar16 == (STWorldObject *)0x0) &&
         (iVar9 = DumpClassC::WritePtr
                            (sVar2,sVar4,sVar3,local_14,(AnonShape_00495EC0_95A268C6 *)this_00),
         iVar9 == 0)) {
        this_00->field_0314 = this_00->field_0314 + '\x01';
        iVar9 = local_1c;
      }
      else {
        iVar9 = 0;
      }
      if (iVar9 == 0) {
        thunk_FUN_00622670(this_00);
      }
    }
    puVar15 = (undefined4 *)&this_00->field_0x231;
    for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (this_00->field_0353 != '\0') {
      uVar10 = thunk_FUN_004ad650((int)&this_00->field_01D5);
      this_00->field_02BA = uVar10;
    }
    this_00->field_0363 = 0;
    iVar9 = STAllPlayersC::RegisterMine(g_sTAllPlayers_007FA174,this_00->field_0032,this_00);
    if (iVar9 == 0) {
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
    thunk_FUN_00622670(this_00);
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  puVar15 = (message->arg0).ptr;
  puVar17 = (undefined4 *)&local_8->field_0x25e;
  for (iVar9 = 0x13; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar17 = *puVar15;
    puVar15 = puVar15 + 1;
    puVar17 = puVar17 + 1;
  }
  *(undefined2 *)puVar17 = *(undefined2 *)puVar15;
  *(undefined1 *)((int)puVar17 + 2) = *(undefined1 *)((int)puVar15 + 2);
  if (*(int *)(dVar6 + 0xc) == 0) {
    local_8->field_0276 = (int)(short)(*(short *)&local_8->field_0276 * 0xc9 + 100);
    local_8->field_027A = (int)(short)(*(short *)&local_8->field_027A * 0xc9 + 100);
    local_8->field_027E = (int)(short)(*(short *)&local_8->field_027E * 200 + 100);
    local_8->field_0282 = local_8->field_0276;
    local_8->field_0286 = local_8->field_027A;
    local_8->field_028A = local_8->field_027E;
  }
  iVar9 = thunk_FUN_00622ba0(local_8);
  if (iVar9 == 0) {
    thunk_FUN_00622670(this_00);
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  bVar8 = false;
  if (this_00->field_02F6 == 0) {
    this_00->field_0034 = this_00->field_0041;
    this_00->field_0036 = this_00->field_0043;
    this_00->field_0038 = this_00->field_0045;
    iVar9 = thunk_FUN_00624570(this_00,CASE_1,this_00->field_02C2,this_00->field_02C6,
                               this_00->field_02CA);
    if (iVar9 == 0) goto cf_common_exit_00621D24;
    this_00->field_02EE = 1;
  }
  else {
    iVar9 = thunk_FUN_00624570(this_00,CASE_2,(int)this_00->field_003A,(int)this_00->field_003C,
                               (int)this_00->field_003E);
    if (iVar9 == 0) goto cf_common_exit_00621D24;
    this_00->field_02EE = 2;
  }
  this_00->field_02AE = CASE_1;
  bVar8 = true;
cf_common_exit_00621D24:
  if (bVar8) {
    this_00->field_02AE = CASE_1;
    this_00->field_0353 = 1;
    LoadImagMineSet(this_00,0);
    iVar9 = STAllPlayersC::RegisterMine(g_sTAllPlayers_007FA174,0xffff,this_00);
    if (iVar9 != 0) {
      thunk_FUN_00622670(this_00);
    }
    thunk_FUN_00627700((AnonShape_00627700_6F319351 *)this_00);
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  thunk_FUN_00622670(this_00);
  g_currentExceptionFrame = local_60.previous;
  return 0;
}

