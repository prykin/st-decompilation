
/* Recovered from embedded debug metadata:
   E:\Ourlib\mfcfnt.cpp
   ccFntTy::CreateSurf */

undefined4 * __thiscall
ccFntTy::CreateSurf(ccFntTy *this,int param_1,uint param_2,int param_3,int param_4,int param_5,
                   int param_6,int param_7)

{
  code *pcVar1;
  ccFntTy *this_00;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_58;
  ccFntTy *local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;
  iVar2 = __setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_14;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar6 = ReportDebugMessage(s_E__Ourlib_mfcfnt_cpp_007f0190,0x4ab,0,iVar2,&DAT_007a4ccc,
                               s_ccFntTy__CreateSurf_007f0238);
    if (iVar6 == 0) {
      RaiseInternalException(iVar2,0,s_E__Ourlib_mfcfnt_cpp_007f0190,0x4ad);
      return (undefined4 *)0x0;
    }
    pcVar1 = (code *)swi(3);
    puVar4 = (undefined4 *)(*pcVar1)();
    return puVar4;
  }
  if (param_1 == 0) {
    if (((*(int *)(local_14 + 0xa0) != 0) && (*(int *)(local_14 + 0xa8) != 0)) &&
       (*(int *)(local_14 + 0xac) != *(int *)(*(int *)(local_14 + 0xa8) + 0xac))) {
      FUN_00710790((int)local_14);
    }
    param_1 = *(int *)(this_00 + 4);
  }
  else if (param_2 != 0) goto LAB_00710c1d;
  param_2 = FUN_006b4fa0(param_1);
LAB_00710c1d:
  if ((param_5 == 0) || (param_6 == 0)) {
    local_8 = *(int *)(param_1 + 4);
    local_c = *(int *)(param_1 + 8);
    param_4 = 0;
    param_3 = 0;
  }
  else {
    local_8 = param_5;
    local_c = param_6;
  }
  puVar4 = (undefined4 *)(param_1 + 0x28);
  iVar2 = 1;
  local_10 = param_2;
  uVar3 = FUN_006b4fe0(param_1);
  puVar4 = (undefined4 *)
           FUN_006b50c0(local_8,local_c,(uint)*(ushort *)(param_1 + 0xe),uVar3,puVar4,iVar2);
  if (puVar4 == (undefined4 *)0x0) {
    RaiseInternalException(-0x34,DAT_007ed77c,s_E__Ourlib_mfcfnt_cpp_007f0190,0x49d);
  }
  if (param_7 == 0) {
    FUN_006b55f0(puVar4,0,0,0,param_1,local_10,param_3,param_4,local_8,local_c);
  }
  else {
    local_10 = puVar4[5];
    if (local_10 == 0) {
      local_10 = ((uint)*(ushort *)((int)puVar4 + 0xe) * puVar4[1] + 0x1f >> 3 & 0x1ffffffc) *
                 puVar4[2];
    }
    puVar5 = (undefined4 *)FUN_006b4fa0((int)puVar4);
    for (uVar3 = local_10 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    for (uVar3 = local_10 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar5 = 0;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
  }
  EraseSufr(this_00);
  *(undefined4 **)(this_00 + 0x72) = puVar4;
  iVar2 = FUN_006b4fa0((int)puVar4);
  *(int *)(this_00 + 0x76) = iVar2;
  *(int *)(this_00 + 0x68) = local_8;
  *(undefined4 *)(this_00 + 0x7a) = 1;
  *(undefined4 *)(this_00 + 0x60) = 0;
  *(undefined4 *)(this_00 + 100) = 0;
  *(int *)(this_00 + 0x6c) = local_c;
  *(undefined4 *)(this_00 + 0x50) = 0;
  *(undefined4 *)(this_00 + 0x54) = 0;
  g_currentExceptionFrame = local_58.previous;
  return puVar4;
}

