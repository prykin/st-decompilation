
int __cdecl FUN_006efdb0(undefined2 *param_1,int param_2,char *param_3,char param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  int *piVar4;
  void *unaff_EDI;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  InternalExceptionFrame local_64;
  undefined2 local_20;
  undefined2 uStack_1e;
  undefined2 local_1c;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  undefined4 local_18;
  int local_14;
  uint local_10;
  int local_c;
  byte *local_8;
  
  local_8 = (byte *)0x0;
  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  iVar2 = __setjmp3(local_64.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if ((param_2 == 0) || (param_1 == (undefined2 *)0x0)) {
      RaiseInternalException(-0x34,DAT_007ed77c,s_E__ourlib_Mfstmap_cpp_007eef88,0x144);
    }
    iVar2 = FUN_006ef410((int)param_1);
    local_14 = iVar2;
    if (iVar2 < 1) {
      RaiseInternalException(-0x33,DAT_007ed77c,s_E__ourlib_Mfstmap_cpp_007eef88,0x146);
    }
    uVar7 = iVar2 * 9;
    local_10 = uVar7;
    local_8 = (byte *)FUN_006aac10(uVar7);
    local_c = 0;
    if (0 < *(int *)((int)param_1 + 0x455)) {
      piVar4 = (int *)((int)param_1 + 0x459);
      pbVar5 = local_8 + 2;
      do {
        pbVar6 = pbVar5;
        if (*piVar4 != 0) {
          if (*(short *)(*piVar4 + 0x4e) == 0) {
            RaiseInternalException(-5,DAT_007ed77c,s_E__ourlib_Mfstmap_cpp_007eef88,0x14e);
          }
          pbVar5[-2] = *(byte *)(*piVar4 + 8);
          pbVar5[-1] = *(byte *)(*piVar4 + 4);
          *pbVar5 = *(byte *)(*piVar4 + 6);
          iVar2 = *piVar4;
          pbVar6 = pbVar5 + 9;
          *(undefined4 *)(pbVar5 + 1) = *(undefined4 *)(iVar2 + 0x4a);
          *(undefined2 *)(pbVar5 + 5) = *(undefined2 *)(iVar2 + 0x4e);
        }
        local_c = local_c + 1;
        piVar4 = piVar4 + 1;
        iVar2 = local_14;
        uVar7 = local_10;
        pbVar5 = pbVar6;
      } while (local_c < *(int *)((int)param_1 + 0x455));
    }
    _local_20 = CONCAT22(*param_1,(short)iVar2);
    _local_1c = CONCAT13(*(undefined1 *)(param_1 + 2),CONCAT12(8,param_1[1]));
    local_18 = 5;
    FUN_006f13f0(0xf,param_3,local_8,uVar7,(undefined4 *)&local_20,param_4,(uint *)0x0);
    if (local_8 != (byte *)0x0) {
      FUN_006ab060(&local_8);
    }
    g_currentExceptionFrame = local_64.previous;
    return 0;
  }
  g_currentExceptionFrame = local_64.previous;
  iVar3 = ReportDebugMessage(s_E__ourlib_Mfstmap_cpp_007eef88,0x166,0,iVar2,&DAT_007a4ccc,
                             s_mfTMapSave_007ef018);
  if (iVar3 == 0) {
    if (local_8 != (byte *)0x0) {
      FUN_006ab060(&local_8);
    }
    RaiseInternalException(iVar2,0,s_E__ourlib_Mfstmap_cpp_007eef88,0x16a);
    return iVar2;
  }
  pcVar1 = (code *)swi(3);
  iVar2 = (*pcVar1)();
  return iVar2;
}

