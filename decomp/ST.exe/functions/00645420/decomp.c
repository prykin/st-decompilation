
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_torp.cpp
   STTorpC::SaveTorpData */

undefined4 * __thiscall STTorpC::SaveTorpData(STTorpC *this,int *param_1)

{
  code *pcVar1;
  STTorpC *this_00;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar7;
  InternalExceptionFrame local_6c;
  undefined4 *local_28;
  int local_24;
  STTorpC *local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  local_20 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_20;
  if (iVar2 == 0) {
    *param_1 = 0x80;
    local_14 = (undefined4 *)FUN_006b0020((uint *)local_20->field_0241,(int *)&local_8);
    FUN_006ab060(&local_14);
    *param_1 = *param_1 + local_8;
    local_18 = STT3DSprC::SaveSpr((STT3DSprC *)&this_00->field_0x1d5,&local_c);
    *param_1 = *param_1 + local_c;
    local_1c = STAllPlayersC::SaveGObjData((STAllPlayersC *)this_00,(int *)&local_10);
    iVar2 = *param_1;
    *param_1 = iVar2 + local_10;
    puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(iVar2 + local_10);
    *puVar3 = this_00->field_0020;
    puVar3[1] = this_00->field_0024;
    puVar3[2] = this_00->field_0028;
    puVar3[3] = 2;
    puVar3[4] = this_00->field_002C;
    puVar5 = (undefined4 *)&this_00->field_0x245;
    puVar7 = puVar3 + 5;
    for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    puVar3[0x16] = *(undefined4 *)&local_20->field_0x231;
    puVar3[0x17] = local_20->field_0235;
    puVar3[0x18] = local_20->field_0239;
    puVar3[0x19] = local_20->field_023D;
    local_28 = puVar3;
    local_14 = (undefined4 *)FUN_006b0020((uint *)local_20->field_0241,(int *)&local_8);
    puVar5 = local_14;
    puVar7 = puVar3 + 0x20;
    for (uVar6 = local_8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar6 = local_8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    puVar3[0x1a] = 0x80;
    puVar3[0x1b] = local_8;
    FUN_006ab060(&local_14);
    local_24 = local_8 + 0x80;
    puVar5 = local_18;
    puVar7 = (undefined4 *)(local_24 + (int)puVar3);
    for (uVar6 = local_c >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar6 = local_c & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    puVar3[0x1c] = local_24;
    puVar3[0x1d] = local_c;
    FUN_006ab060(&local_18);
    puVar5 = local_1c;
    puVar7 = (undefined4 *)(local_24 + local_c + (int)puVar3);
    for (uVar6 = local_10 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar6 = local_10 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    puVar3[0x1e] = local_24 + local_c;
    puVar3[0x1f] = local_10;
    FUN_006ab060(&local_1c);
    g_currentExceptionFrame = local_6c.previous;
    return puVar3;
  }
  g_currentExceptionFrame = local_6c.previous;
  iVar4 = ReportDebugMessage(s_E____titans_nick_to_torp_cpp_007d25c0,0x4d4,0,iVar2,&DAT_007a4ccc,
                             s_STTorpC__SaveTorpData_007d2638);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    puVar5 = (undefined4 *)(*pcVar1)();
    return puVar5;
  }
  RaiseInternalException(iVar2,0,s_E____titans_nick_to_torp_cpp_007d25c0,0x4d5);
  return local_28;
}

