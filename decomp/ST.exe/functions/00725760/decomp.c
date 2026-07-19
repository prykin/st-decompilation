
int __thiscall FUN_00725760(void *this,int param_1,int param_2)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int exceptionCode;
  int iVar6;
  int local_30;
  int local_28;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0079e2d8;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  exceptionCode = 0;
  if (param_1 == 0) {
    ExceptionList = &local_14;
    if (*(int *)((int)this + 0x2dc) != 0) {
      ExceptionList = &local_14;
      *(undefined4 *)((int)this + 0x2d8) = 1;
      *(undefined4 *)((int)this + 0x2dc) = 0;
    }
  }
  else {
    ExceptionList = &local_14;
    if (*(int *)((int)this + 0x2dc) == 0) {
      ExceptionList = &local_14;
      if (((*(uint *)(*(int *)((int)this + 4) + 0xc) & 0x1100) != 0x100) &&
         (ExceptionList = &local_14, param_2 != 0)) {
        ExceptionList = &local_14;
        exceptionCode = FUN_006bb8b0(*(int *)((int)this + 4));
        if (exceptionCode != 0) goto LAB_007258d0;
        iVar3 = *(int *)((int)this + 0x20) + *(int *)((int)this + 0x30);
        iVar5 = *(int *)((int)this + 0x24) + *(int *)((int)this + 0x34);
        iVar6 = *(int *)((int)this + 0x38) - *(int *)((int)this + 0x30);
        iVar1 = *(int *)((int)this + 0x3c) - *(int *)((int)this + 0x34);
        pbVar2 = (byte *)(*(int *)(*(int *)((int)this + 4) + 0x478) * iVar5 +
                          *(int *)(*(int *)((int)this + 4) + 0x474) + iVar3);
        local_30 = iVar1;
        while (local_30 = local_30 + -1, pbVar4 = pbVar2, local_28 = iVar6, -1 < local_30) {
          while (-1 < local_28 + -1) {
            *pbVar4 = *(byte *)((uint)*pbVar4 + param_2);
            pbVar4 = pbVar4 + 1;
            local_28 = local_28 + -1;
          }
          pbVar2 = pbVar2 + *(int *)(*(int *)((int)this + 4) + 0x478);
        }
        local_8 = 0xffffffff;
        FUN_006bb980(*(int *)((int)this + 4));
        if (*(int **)this != (int *)0x0) {
          FUN_006b5f80(*(int **)this,iVar3,iVar5,iVar6,iVar1);
        }
      }
      *(undefined4 *)((int)this + 0x2dc) = 1;
      *(int *)((int)this + 0x2e0) = param_2;
    }
  }
  if (exceptionCode == 0) {
    ExceptionList = local_14;
    return 0;
  }
LAB_007258d0:
  RaiseInternalException(exceptionCode,DAT_007ed77c,s_E__ourlib_St3dpaus_cpp_007f0c68,0x38);
  ExceptionList = local_14;
  return exceptionCode;
}

