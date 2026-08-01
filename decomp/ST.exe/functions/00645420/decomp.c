#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_torp.cpp
   STTorpC::SaveTorpData

   [STPrototypeApplier] Propagated return.
   Evidence: 00645420 returns used as parameter 2 of STPlaySystemC::SaveObjData @ 00642D4E */

byte * __thiscall STTorpC::SaveTorpData(STTorpC *this,int *param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  STAllPlayersC *this_00;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  byte *puVar10;
  byte *pbVar11;
  InternalExceptionFrame local_6c;
  byte *local_28;
  int local_24;
  STAllPlayersC *local_20;
  byte *local_1c;
  byte *local_18;
  byte *local_14;
  uint local_10;
  uint local_c;
  uint local_8;

  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  local_20 = (STAllPlayersC *)this;
  iVar5 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0);
  this_00 = local_20;
  if (iVar5 == 0) {
    *param_1 = 0x80;
    local_14 = (byte *)FUN_006b0020(*(uint **)&local_20->field_0x241,(int *)&local_8);
    FreeAndNull(&local_14);
    *param_1 = *param_1 + local_8;
    local_18 = (byte *)STT3DSprC::SaveSpr((STT3DSprC *)&this_00->field_0x1d5,&local_c);
    *param_1 = *param_1 + local_c;
    local_1c = (byte *)STAllPlayersC::SaveGObjData(this_00,(int *)&local_10);
    iVar5 = *param_1;
    *param_1 = iVar5 + local_10;
    pbVar6 = Library::DKW::LIB::MemAlloc(iVar5 + local_10);
    *(undefined4 *)pbVar6 = this_00->field_0020;
    uVar2 = this_00->field_0x25;
    uVar3 = this_00->field_0x26;
    uVar4 = this_00->field_0x27;
    pbVar6[4] = this_00->field_0x24;
    pbVar6[5] = uVar2;
    pbVar6[6] = uVar3;
    pbVar6[7] = uVar4;
    uVar2 = this_00->field_0x29;
    uVar3 = this_00->field_0x2a;
    uVar4 = this_00->field_0x2b;
    pbVar6[8] = this_00->field_0x28;
    pbVar6[9] = uVar2;
    pbVar6[10] = uVar3;
    pbVar6[0xb] = uVar4;
    pbVar6[0xc] = 2;
    pbVar6[0xd] = 0;
    pbVar6[0xe] = 0;
    pbVar6[0xf] = 0;
    uVar2 = this_00->field_0x2d;
    uVar3 = this_00->field_0x2e;
    uVar4 = this_00->field_0x2f;
    pbVar6[0x10] = this_00->field_0x2c;
    pbVar6[0x11] = uVar2;
    pbVar6[0x12] = uVar3;
    pbVar6[0x13] = uVar4;
    puVar10 = (byte *)&this_00->field_0x245;
    pbVar8 = pbVar6 + 0x14;
    memmove(pbVar8, puVar10, 0x44); /* compiler REP MOVS byte copy */
    uVar2 = local_20->field_0x232;
    uVar3 = local_20->field_0x233;
    uVar4 = local_20->field_0x234;
    pbVar6[0x58] = local_20->field_0x231;
    pbVar6[0x59] = uVar2;
    pbVar6[0x5a] = uVar3;
    pbVar6[0x5b] = uVar4;
    uVar2 = local_20->field_0x236;
    uVar3 = local_20->field_0x237;
    uVar4 = local_20->field_0x238;
    pbVar6[0x5c] = local_20->field_0x235;
    pbVar6[0x5d] = uVar2;
    pbVar6[0x5e] = uVar3;
    pbVar6[0x5f] = uVar4;
    *(undefined4 *)(pbVar6 + 0x60) = *(undefined4 *)&local_20->field_0x239;
    *(undefined4 *)(pbVar6 + 100) = *(undefined4 *)((int)&local_20->field_023A + 3);
    local_28 = pbVar6;
    local_14 = (byte *)FUN_006b0020(*(uint **)&local_20->field_0x241,(int *)&local_8);
    pbVar8 = local_14;
    pbVar11 = pbVar6 + 0x80;
    memmove(pbVar11, pbVar8, local_8); /* compiler REP MOVS byte copy */
    uVar9 = 0;
    pbVar6[0x68] = 0x80;
    pbVar6[0x69] = 0;
    pbVar6[0x6a] = 0;
    pbVar6[0x6b] = 0;
    *(uint *)(pbVar6 + 0x6c) = local_8;
    FreeAndNull(&local_14);
    local_24 = local_8 + 0x80;
    pbVar8 = local_18;
    pbVar11 = pbVar6 + local_24;
    memmove(pbVar11, pbVar8, local_c); /* compiler REP MOVS byte copy */
    uVar9 = 0;
    *(int *)(pbVar6 + 0x70) = local_24;
    *(uint *)(pbVar6 + 0x74) = local_c;
    FreeAndNull(&local_18);
    pbVar8 = local_1c;
    pbVar11 = pbVar6 + local_24 + local_c;
    memmove(pbVar11, pbVar8, local_10); /* compiler REP MOVS byte copy */
    *(uint *)(pbVar6 + 0x78) = local_24 + local_c;
    *(uint *)(pbVar6 + 0x7c) = local_10;
    FreeAndNull(&local_1c);
    g_currentExceptionFrame = local_6c.previous;
    return pbVar6;
  }
  g_currentExceptionFrame = local_6c.previous;
  iVar7 = ReportDebugMessage("E:\\__titans\\nick\\to_torp.cpp",0x4d4,0,iVar5,"%s",
                             "STTorpC::SaveTorpData");
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar5,0,"E:\\__titans\\nick\\to_torp.cpp",0x4d5);
  return local_28;
}

