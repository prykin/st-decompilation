#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_torp.cpp
   STTorpC::SaveTorpData

   [STPrototypeApplier] Propagated return.
   Evidence: 00645420 returns used as parameter 2 of STPlaySystemC::SaveObjData @ 00642D4E */

byte * __thiscall STTorpC::SaveTorpData(STTorpC *this,int *param_1)

{
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  STTorpC *this_00;
  int iVar5;
  byte *pbVar5;
  int iVar7;
  byte *pbVar6;
  int iVar8;
  uint uVar9;
  byte *puVar10;
  byte *pbVar11;
  InternalExceptionFrame local_6c;
  byte *local_28;
  int local_24;
  STTorpC *local_20;
  byte *local_1c;
  byte *local_18;
  byte *local_14;
  uint local_10;
  uint local_c;
  uint local_8;

  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  local_20 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0);
  this_00 = local_20;
  if (iVar5 == 0) {
    *param_1 = 0x80;
    local_14 = FUN_006b0020(&local_20->field_0241->flags,(int *)&local_8);
    FreeAndNull(&local_14);
    *param_1 = *param_1 + local_8;
    /* ST_CALLSITE[00645490]: CALL 0x004018d4; direct=004018D4 STT3DSprC::SaveSpr */
    local_18 = (byte *)STT3DSprC::SaveSpr((STT3DSprC *)&this_00->field_01D5,&local_c);
    *param_1 = *param_1 + local_c;
    /* ST_CALLSITE[006454A7]: CALL 0x0040119a; direct=0040119A STAllPlayersC::SaveGObjData */
    local_1c = (byte *)STAllPlayersC::SaveGObjData((STAllPlayersC *)this_00,(int *)&local_10);
    iVar8 = *param_1;
    *param_1 = iVar8 + local_10;
    pbVar5 = Library::DKW::LIB::MemAlloc(iVar8 + local_10);
    *(undefined4 *)pbVar5 = this_00->field_0020;
    *(undefined4 *)(pbVar5 + 4) = this_00->field_0024;
    *(undefined4 *)(pbVar5 + 8) = this_00->field_0028;
    pbVar5[0xc] = 2;
    pbVar5[0xd] = 0;
    pbVar5[0xe] = 0;
    pbVar5[0xf] = 0;
    *(undefined4 *)(pbVar5 + 0x10) = this_00->field_002C;
    puVar10 = (byte *)&this_00->field_0245;
    pbVar6 = pbVar5 + 0x14;
    memmove(pbVar6, puVar10, 0x44); /* compiler REP MOVS byte copy */
    *(undefined4 *)(pbVar5 + 0x58) = *(undefined4 *)&local_20->field_0231;
    uVar2 = local_20->field_0x236;
    uVar3 = local_20->field_0x237;
    uVar4 = local_20->field_0x238;
    pbVar5[0x5c] = local_20->field_0x235;
    pbVar5[0x5d] = uVar2;
    pbVar5[0x5e] = uVar3;
    pbVar5[0x5f] = uVar4;
    uVar2 = local_20->field_0x23a;
    uVar3 = local_20->field_0x23b;
    uVar4 = local_20->field_0x23c;
    pbVar5[0x60] = local_20->field_0x239;
    pbVar5[0x61] = uVar2;
    pbVar5[0x62] = uVar3;
    pbVar5[99] = uVar4;
    *(undefined4 *)(pbVar5 + 100) = local_20->field_023D;
    local_28 = pbVar5;
    local_14 = FUN_006b0020(&local_20->field_0241->flags,(int *)&local_8);
    pbVar6 = local_14;
    pbVar11 = pbVar5 + 0x80;
    memmove(pbVar11, pbVar6, local_8); /* compiler REP MOVS byte copy */
    uVar9 = 0;
    pbVar5[0x68] = 0x80;
    pbVar5[0x69] = 0;
    pbVar5[0x6a] = 0;
    pbVar5[0x6b] = 0;
    *(uint *)(pbVar5 + 0x6c) = local_8;
    FreeAndNull(&local_14);
    local_24 = local_8 + 0x80;
    pbVar6 = local_18;
    pbVar11 = pbVar5 + local_24;
    memmove(pbVar11, pbVar6, local_c); /* compiler REP MOVS byte copy */
    uVar9 = 0;
    *(int *)(pbVar5 + 0x70) = local_24;
    *(uint *)(pbVar5 + 0x74) = local_c;
    FreeAndNull(&local_18);
    pbVar6 = local_1c;
    pbVar11 = pbVar5 + local_24 + local_c;
    memmove(pbVar11, pbVar6, local_10); /* compiler REP MOVS byte copy */
    *(uint *)(pbVar5 + 0x78) = local_24 + local_c;
    *(uint *)(pbVar5 + 0x7c) = local_10;
    FreeAndNull(&local_1c);
    g_currentExceptionFrame = local_6c.previous;
    return pbVar5;
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

