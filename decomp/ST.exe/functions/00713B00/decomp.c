
/* Recovered from embedded debug metadata:
   E:\Ourlib\mfcfnt.cpp
   cTypingTy::TypingInit */

int __thiscall
cTypingTy::TypingInit
          (cTypingTy *this,uint *param_1,void *param_2,int param_3,undefined4 param_4,
          undefined4 param_5,int param_6,int param_7,uint param_8,uint param_9,int param_10,
          int param_11,int param_12,undefined4 param_13)

{
  cTypingTy *pcVar1;
  code *pcVar2;
  cTypingTy *pcVar3;
  int iVar4;
  cTypingTy *pcVar5;
  undefined4 *puVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint *puVar11;
  undefined4 local_9c [18];
  InternalExceptionFrame local_54;
  uint local_10;
  cTypingTy *local_c;
  cTypingTy local_5;
  
  if ((param_1 != (uint *)0x0) && ((char)*param_1 == '\0')) {
    return 0;
  }
  local_c = this;
  if (param_2 != (void *)0x0) {
    ccFntTy::Save(param_2,local_9c);
  }
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  iVar4 = __setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar8 = ReportDebugMessage(s_E__Ourlib_mfcfnt_cpp_007f0190,0xa23,0,iVar4,&DAT_007a4ccc,
                               s_cTypingTy__TypingInit_007f03bc);
    if (iVar8 != 0) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    if (param_2 != (void *)0x0) {
      ccFntTy::EraseSufr(param_2);
    }
    pcVar3 = local_c;
    if (*(int *)(local_c + 0x88) != 0) {
      FUN_006ab060((undefined4 *)(local_c + 0x88));
    }
    if (*(int *)(pcVar3 + 0xa8) != 0) {
      FUN_006ab060((undefined4 *)(pcVar3 + 0xa8));
    }
    if (*(int *)(pcVar3 + 0x58) != 0) {
      FUN_006ab060((undefined4 *)(pcVar3 + 0x58));
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
  *(void **)local_c = param_2;
  *(undefined4 *)(local_c + 0x58) = 0;
  *(undefined4 *)(local_c + 0xc) = 0;
  *(undefined4 *)(local_c + 4) = 0;
  iVar4 = FUN_007114c0(param_2,param_1);
  *(int *)(pcVar3 + 8) = iVar4 + 3;
  *(uint *)(pcVar3 + 0x74) = param_8;
  *(uint *)(pcVar3 + 0x6c) = param_8;
  *(undefined4 *)(pcVar3 + 0xa0) = param_13;
  *(uint *)(pcVar3 + 0x78) = param_9;
  *(uint *)(pcVar3 + 0x70) = param_9;
  *(undefined4 *)(pcVar3 + 0x7c) = 0xffffffff;
  *(undefined4 *)(pcVar3 + 0x88) = 0;
  *(undefined4 *)(pcVar3 + 0x90) = 0;
  *(undefined4 *)(pcVar3 + 0x8c) = 0;
  *(undefined4 *)(pcVar3 + 0x84) = 0;
  *(undefined4 *)(pcVar3 + 0x80) = 0;
  *(undefined4 *)(pcVar3 + 0xa8) = 0;
  *(undefined4 *)(pcVar3 + 0xb0) = 0;
  *(undefined4 *)(pcVar3 + 0xac) = 0;
  *(int *)(pcVar3 + 0x94) = param_10;
  if (param_11 < 0) {
    param_11 = param_10 + 1;
  }
  *(int *)(pcVar3 + 0x98) = param_11;
  if (param_12 < 0) {
    param_12 = param_10 + -1;
  }
  *(int *)(pcVar3 + 0x9c) = param_12;
  iVar4 = FUN_00711370(param_2,param_1);
  *(int *)(pcVar3 + 100) = iVar4;
  iVar4 = FUN_007113e0(param_2,param_1);
  *(int *)(pcVar3 + 0x68) = iVar4;
  if (param_3 == 0) {
    iVar4 = (((int)param_8 < 1) - 1 & param_8) + *(int *)(pcVar3 + 100);
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
    puVar6 = ccFntTy::CreateSurf(param_2,0,0,0,0,param_6,param_7,1);
    uVar9 = puVar6[5];
    if (uVar9 == 0) {
      uVar9 = ((uint)*(ushort *)((int)puVar6 + 0xe) * puVar6[1] + 0x1f >> 3 & 0x1ffffffc) *
              puVar6[2];
    }
    local_5 = pcVar3[0xa0];
    pcVar5 = (cTypingTy *)FUN_006b4fa0((int)puVar6);
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(uint *)pcVar5 = CONCAT22(CONCAT11(local_5,local_5),CONCAT11(local_5,local_5));
      pcVar5 = pcVar5 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar5 = local_5;
      pcVar5 = pcVar5 + 1;
    }
    iVar4 = FUN_00711470(param_1);
    puVar6 = FUN_006aac10(iVar4 * 4 + 3);
    *(undefined4 **)(pcVar3 + 0xa8) = puVar6;
  }
  else {
    ccFntTy::SetSurf(param_2,param_3,0,param_4,param_5,param_6,param_7);
  }
  pcVar5 = pcVar3 + 0x5c;
  pcVar1 = pcVar3 + 0x60;
  if (pcVar5 != (cTypingTy *)0x0) {
    *(int *)pcVar5 = *(int *)((int)param_2 + 0x68);
  }
  if (pcVar1 != (cTypingTy *)0x0) {
    *(int *)pcVar1 = *(int *)((int)param_2 + 0x6c);
  }
  if (*(int *)(pcVar3 + 0x70) < 0) {
    *(int *)(pcVar3 + 0x70) = (*(int *)pcVar1 - *(int *)(pcVar3 + 0x68)) / 2;
  }
  if (*(int *)(pcVar3 + 0x70) < 0) {
    *(undefined4 *)(pcVar3 + 0x70) = 0;
  }
  *(undefined4 *)(pcVar3 + 0xa4) = *(undefined4 *)(pcVar3 + 0x70);
  iVar4 = *(int *)(pcVar3 + 0x6c);
  if (((iVar4 == -5) || (iVar4 == -6)) || (iVar4 == -7)) {
    *(int *)(pcVar3 + 0x6c) = iVar4 + 3;
  }
  if (*(int *)(pcVar3 + 0x6c) < -7) {
    *(undefined4 *)(pcVar3 + 0x6c) = 0xffffffff;
  }
  if (*(int *)(pcVar3 + 0x6c) == -1) {
    *(int *)(pcVar3 + 0x6c) = (*(int *)pcVar5 - *(int *)(pcVar3 + 100)) / 2;
  }
  puVar6 = FUN_006aac10(*(int *)(pcVar3 + 8) * 2 + 10);
  *(undefined4 **)(pcVar3 + 0x88) = puVar6;
  ccFntTy::Save(param_2,(undefined4 *)(pcVar3 + 0x10));
  uVar9 = 0xffffffff;
  puVar7 = param_1;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    uVar10 = *puVar7;
    puVar7 = (uint *)((int)puVar7 + 1);
  } while ((char)uVar10 != '\0');
  puVar7 = (uint *)FUN_006aac70(~uVar9);
  uVar9 = 0xffffffff;
  *(uint **)(pcVar3 + 0x58) = puVar7;
  puVar11 = param_1;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    uVar10 = *puVar11;
    puVar11 = (uint *)((int)puVar11 + 1);
  } while ((char)uVar10 != '\0');
  for (uVar10 = ~uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *puVar7 = *param_1;
    param_1 = param_1 + 1;
    puVar7 = puVar7 + 1;
  }
  for (uVar9 = ~uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(char *)puVar7 = (char)*param_1;
    param_1 = (uint *)((int)param_1 + 1);
    puVar7 = (uint *)((int)puVar7 + 1);
  }
  *(undefined4 *)(pcVar3 + 0x90) = *(undefined4 *)(pcVar3 + 0x58);
  *(undefined4 *)(pcVar3 + 0x8c) = *(undefined4 *)(pcVar3 + 0x58);
  iVar4 = *(int *)(pcVar3 + 8);
  FUN_007109f0(param_2,local_9c);
  g_currentExceptionFrame = local_54.previous;
  return iVar4;
}

