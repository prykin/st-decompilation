
/* Recovered from embedded debug metadata:
   E:\Ourlib\Mf32int.cpp
   cMf32::RecPut */

int __thiscall
cMf32::RecPut(cMf32 *this,byte param_1,char *param_2,byte *param_3,uint param_4,undefined4 *param_5,
             char param_6,uint *param_7)

{
  char cVar1;
  ushort uVar2;
  code *pcVar3;
  cMf32 *pcVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char *pcVar9;
  ushort *puVar10;
  CHAR local_1a4 [260];
  InternalExceptionFrame local_a0;
  InternalExceptionFrame local_5c;
  cMf32 *local_18;
  uint local_14;
  int local_10;
  byte *local_c;
  ushort *local_8;
  
  local_c = (byte *)0x0;
  local_8 = (ushort *)0x0;
  local_10 = 0;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_18 = this;
  iVar6 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    if (local_8 != (ushort *)0x0) {
      FUN_006ab060(&local_8);
    }
    if ((local_c != (byte *)0x0) && (local_10 != 0)) {
      FUN_006ab060(&local_c);
    }
    wsprintfA(local_1a4,s_cMf32__RecPut_File___s__Sect__s_N_007efafc,&local_18[0xb].field_0x21,
              s_M_ANY_007ef0a4 + (uint)param_1 * 10,param_2);
    iVar7 = ReportDebugMessage(s_E__Ourlib_Mf32int_cpp_007efaa4,0x106,0,iVar6,&DAT_007a4ccc,
                               local_1a4);
    if (iVar7 == 0) {
      RaiseInternalException(iVar6,0,s_E__Ourlib_Mf32int_cpp_007efaa4,0x108);
      return 0;
    }
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  if (((param_3 == (byte *)0x0) || (param_4 == 0)) || (param_2 == (char *)0x0)) {
    RaiseInternalException(-0x34,DAT_007ed77c,s_E__Ourlib_Mf32int_cpp_007efaa4,0xd2);
  }
  if (*param_2 == '\0') {
    RaiseInternalException(-0x34,DAT_007ed77c,s_E__Ourlib_Mf32int_cpp_007efaa4,0xd3);
  }
  if ((int)param_4 < 0x20) {
    param_6 = '\0';
  }
  if ((param_6 == '\x01') || (param_6 == '\x02')) {
    local_c = (byte *)Library::DKW::LIB::FUN_006aac10(param_4);
    local_10 = 1;
    local_a0.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_a0;
    iVar6 = Library::MSVCRT::__setjmp3(local_a0.jumpBuffer,0,unaff_EDI,unaff_ESI);
    if (iVar6 == 0) {
      if (param_6 == '\x01') {
        local_14 = FUN_00751140(param_3,param_4,local_c,param_4);
        g_currentExceptionFrame = local_a0.previous;
      }
      else if (param_6 == '\x02') {
        local_14 = Library::DKW::PK::FUN_00751170(param_3,param_4,local_c,param_4);
        g_currentExceptionFrame = local_a0.previous;
      }
      else {
        g_currentExceptionFrame = local_a0.previous;
      }
    }
    else {
      g_currentExceptionFrame = local_a0.previous;
      if (local_c != (byte *)0x0) {
        FUN_006ab060(&local_c);
      }
      local_c = param_3;
      local_10 = 0;
      local_14 = param_4;
      param_6 = '\0';
    }
  }
  else {
    local_c = param_3;
    local_14 = param_4;
  }
  uVar5 = local_14;
  uVar8 = 0xffffffff;
  pcVar9 = param_2;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  local_8 = (ushort *)Library::DKW::LIB::FUN_006aac10(~uVar8 + 0x17);
  pcVar4 = local_18;
  *(byte *)local_8 = param_1;
  iVar6 = -1;
  pcVar9 = param_2;
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  local_8[0xb] = ~(ushort)iVar6 - 1;
  uVar2 = local_8[0xb];
  puVar10 = local_8 + 0xc;
  for (uVar8 = (uint)(int)(short)uVar2 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)puVar10 = *(undefined4 *)param_2;
    param_2 = param_2 + 4;
    puVar10 = puVar10 + 2;
  }
  for (uVar8 = (int)(short)uVar2 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(char *)puVar10 = *param_2;
    param_2 = param_2 + 1;
    puVar10 = (ushort *)((int)puVar10 + 1);
  }
  FUN_00751100((uint *)local_18->field_0000,local_8);
  *(uint *)((int)local_8 + 1) = uVar5;
  *(char *)((int)local_8 + 5) = param_6;
  *(uint *)(local_8 + 3) = param_4;
  if (param_5 != (undefined4 *)0x0) {
    *(undefined4 *)(local_8 + 5) = *param_5;
    *(undefined4 *)(local_8 + 7) = param_5[1];
    *(undefined4 *)(local_8 + 9) = param_5[2];
  }
  uVar8 = Library::DKW::DB::FUN_00751050
                    ((uint *)pcVar4->field_0000,local_8,(undefined4 *)local_c,uVar5);
  if (param_7 != (uint *)0x0) {
    *param_7 = uVar5;
  }
  if (local_8 != (ushort *)0x0) {
    FUN_006ab060(&local_8);
  }
  if ((local_c != (byte *)0x0) && (local_10 != 0)) {
    FUN_006ab060(&local_c);
  }
  g_currentExceptionFrame = local_5c.previous;
  return *(int *)(*(int *)(pcVar4->field_0000 + 4) + 0x34) + uVar8;
}

