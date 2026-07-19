
/* Recovered from embedded debug metadata:
   E:\Ourlib\mfcfnt.cpp
   cTypingTy::TypingInit */

int __thiscall
cTypingTy::TypingInit
          (cTypingTy *this,uint *param_1,void *param_2,int param_3,undefined4 param_4,
          undefined4 param_5,int param_6,int param_7,uint param_8,uint param_9,int param_10,
          int param_11,int param_12,undefined4 param_13)

{
  undefined4 *puVar1;
  code *pcVar2;
  cTypingTy *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint *puVar10;
  undefined4 local_9c [18];
  InternalExceptionFrame local_54;
  uint local_10;
  cTypingTy *local_c;
  undefined1 local_5;
  
  if ((param_1 != (uint *)0x0) && ((char)*param_1 == '\0')) {
    return 0;
  }
  local_c = this;
  if (param_2 != (void *)0x0) {
    ccFntTy::Save(param_2,local_9c);
  }
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  iVar4 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar7 = ReportDebugMessage(s_E__Ourlib_mfcfnt_cpp_007f0190,0xa23,0,iVar4,&DAT_007a4ccc,
                               s_cTypingTy__TypingInit_007f03bc);
    if (iVar7 != 0) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    if (param_2 != (void *)0x0) {
      ccFntTy::EraseSufr(param_2);
    }
    pcVar3 = local_c;
    if (local_c->field_0088 != 0) {
      FUN_006ab060(&local_c->field_0088);
    }
    if (pcVar3->field_00A8 != 0) {
      FUN_006ab060(&pcVar3->field_00A8);
    }
    if (pcVar3->field_0058 != 0) {
      FUN_006ab060(&pcVar3->field_0058);
    }
    if (param_2 != (void *)0x0) {
      FUN_007109f0(param_2,local_9c);
    }
    RaiseInternalException(iVar4,0,s_E__Ourlib_mfcfnt_cpp_007f0190,0xa2a);
    if (-1 < iVar4) {
      return -1;
    }
    return iVar4;
  }
  if ((param_1 == (uint *)0x0) || (param_2 == (void *)0x0)) {
    RaiseInternalException(-0x34,DAT_007ed77c,s_E__Ourlib_mfcfnt_cpp_007f0190,0x9ed);
  }
  pcVar3 = local_c;
  *(undefined4 *)((int)param_2 + 0x7e) = 1;
  *(undefined2 *)((int)param_2 + 0x9e) = 0;
  *(undefined1 *)((int)param_2 + 0x9e) = DAT_007cc854;
  local_c->field_0000 = param_2;
  local_c->field_0058 = 0;
  local_c->field_000C = 0;
  local_c->field_0004 = 0;
  iVar4 = FUN_007114c0(param_2,param_1);
  pcVar3->field_0008 = iVar4 + 3;
  pcVar3->field_0074 = param_8;
  pcVar3->field_006C = param_8;
  *(undefined4 *)&pcVar3->field_0xa0 = param_13;
  pcVar3->field_0078 = param_9;
  pcVar3->field_0070 = param_9;
  pcVar3->field_007C = 0xffffffff;
  pcVar3->field_0088 = 0;
  pcVar3->field_0090 = 0;
  pcVar3->field_008C = 0;
  pcVar3->field_0084 = 0;
  pcVar3->field_0080 = 0;
  pcVar3->field_00A8 = 0;
  pcVar3->field_00B0 = 0;
  pcVar3->field_00AC = 0;
  pcVar3->field_0094 = param_10;
  if (param_11 < 0) {
    param_11 = param_10 + 1;
  }
  pcVar3->field_0098 = param_11;
  if (param_12 < 0) {
    param_12 = param_10 + -1;
  }
  pcVar3->field_009C = param_12;
  iVar4 = FUN_00711370(param_2,param_1);
  pcVar3->field_0064 = iVar4;
  iVar4 = FUN_007113e0(param_2,param_1);
  pcVar3->field_0068 = iVar4;
  if (param_3 == 0) {
    iVar4 = (((int)param_8 < 1) - 1 & param_8) + pcVar3->field_0064;
    if (param_6 < iVar4) {
      param_6 = iVar4;
    }
    if (*(int *)((int)param_2 + 0xa0) != 0) {
      FUN_00710790((int)param_2);
    }
    local_10 = ((int)param_9 < 1) - 1 & param_9;
    if (param_7 < (int)(*(int *)((int)param_2 + 0x8a) + local_10)) {
      if (*(int *)((int)param_2 + 0xa0) != 0) {
        FUN_00710790((int)param_2);
      }
      param_7 = *(int *)((int)param_2 + 0x8a) + local_10;
    }
    puVar5 = ccFntTy::CreateSurf(param_2,0,0,0,0,param_6,param_7,1);
    uVar8 = puVar5[5];
    if (uVar8 == 0) {
      uVar8 = ((uint)*(ushort *)((int)puVar5 + 0xe) * puVar5[1] + 0x1f >> 3 & 0x1ffffffc) *
              puVar5[2];
    }
    local_5 = pcVar3->field_0xa0;
    puVar5 = (undefined4 *)FUN_006b4fa0((int)puVar5);
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar5 = CONCAT22(CONCAT11(local_5,local_5),CONCAT11(local_5,local_5));
      puVar5 = puVar5 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar5 = local_5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    iVar4 = FUN_00711470(param_1);
    puVar5 = Library::DKW::LIB::FUN_006aac10(iVar4 * 4 + 3);
    pcVar3->field_00A8 = puVar5;
  }
  else {
    ccFntTy::SetSurf(param_2,param_3,0,param_4,param_5,param_6,param_7);
  }
  puVar5 = &pcVar3->field_005C;
  puVar1 = &pcVar3->field_0060;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = *(undefined4 *)((int)param_2 + 0x68);
  }
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)((int)param_2 + 0x6c);
  }
  if ((int)pcVar3->field_0070 < 0) {
    pcVar3->field_0070 = (int)(*puVar1 - pcVar3->field_0068) / 2;
  }
  if ((int)pcVar3->field_0070 < 0) {
    pcVar3->field_0070 = 0;
  }
  pcVar3->field_00A4 = pcVar3->field_0070;
  iVar4 = pcVar3->field_006C;
  if (((iVar4 == -5) || (iVar4 == -6)) || (iVar4 == -7)) {
    pcVar3->field_006C = iVar4 + 3;
  }
  if ((int)pcVar3->field_006C < -7) {
    pcVar3->field_006C = 0xffffffff;
  }
  if (pcVar3->field_006C == -1) {
    pcVar3->field_006C = (int)(*puVar5 - pcVar3->field_0064) / 2;
  }
  puVar5 = Library::DKW::LIB::FUN_006aac10(pcVar3->field_0008 * 2 + 10);
  pcVar3->field_0088 = puVar5;
  ccFntTy::Save(param_2,(undefined4 *)&pcVar3->field_0x10);
  uVar8 = 0xffffffff;
  puVar6 = param_1;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    uVar9 = *puVar6;
    puVar6 = (uint *)((int)puVar6 + 1);
  } while ((char)uVar9 != '\0');
  puVar6 = (uint *)Library::DKW::LIB::FUN_006aac70(~uVar8);
  uVar8 = 0xffffffff;
  pcVar3->field_0058 = puVar6;
  puVar10 = param_1;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    uVar9 = *puVar10;
    puVar10 = (uint *)((int)puVar10 + 1);
  } while ((char)uVar9 != '\0');
  for (uVar9 = ~uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *puVar6 = *param_1;
    param_1 = param_1 + 1;
    puVar6 = puVar6 + 1;
  }
  for (uVar8 = ~uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(char *)puVar6 = (char)*param_1;
    param_1 = (uint *)((int)param_1 + 1);
    puVar6 = (uint *)((int)puVar6 + 1);
  }
  pcVar3->field_0090 = pcVar3->field_0058;
  pcVar3->field_008C = pcVar3->field_0058;
  iVar4 = pcVar3->field_0008;
  FUN_007109f0(param_2,local_9c);
  g_currentExceptionFrame = local_54.previous;
  return iVar4;
}

