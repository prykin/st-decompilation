
/* WARNING: Removing unreachable block (ram,0x00483fc6) */

undefined4 __fastcall thunk_FUN_00483f10(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  iVar2 = STAllPlayersC::IsTorpLive
                    (DAT_007fa174,*(short *)(param_1 + 0x46f),*(int *)(param_1 + 0x471));
  if (iVar2 != 0) {
    iVar2 = *(int *)(param_1 + 0x46b);
    uVar3 = (int)*(short *)(param_1 + 0x45) - (int)*(short *)(iVar2 + 0x45);
    uVar4 = (int)*(short *)(param_1 + 0x43) - (int)*(short *)(iVar2 + 0x43);
    uVar5 = (int)*(short *)(param_1 + 0x41) - (int)*(short *)(iVar2 + 0x41);
    uVar1 = *(uint *)(param_1 + 0x810);
    lVar6 = __allmul(uVar5,(int)uVar5 >> 0x1f,uVar5,(int)uVar5 >> 0x1f);
    lVar7 = __allmul(uVar4,(int)uVar4 >> 0x1f,uVar4,(int)uVar4 >> 0x1f);
    lVar8 = __allmul(uVar3,(int)uVar3 >> 0x1f,uVar3,(int)uVar3 >> 0x1f);
    lVar9 = __allmul(uVar1,(int)uVar1 >> 0x1f,uVar1,(int)uVar1 >> 0x1f);
    if (lVar9 < lVar7 + lVar6 + lVar8) {
      return 0;
    }
  }
  return 1;
}

