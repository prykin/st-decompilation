
undefined4 __cdecl FUN_006aced8(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  lVar3 = (longlong)(param_1 - param_3) * (longlong)(param_1 - param_3);
  iVar6 = (int)((ulonglong)lVar3 >> 0x20);
  if ((lVar3 < 0) ||
     (lVar4 = (longlong)(param_2 - param_4) * (longlong)(param_2 - param_4),
     iVar7 = (int)((ulonglong)lVar4 >> 0x20), uVar1 = (uint)CARRY4((uint)lVar4,(uint)lVar3),
     iVar2 = iVar7 + iVar6, uVar8 = iVar2 + uVar1,
     (SCARRY4(iVar7,iVar6) != SCARRY4(iVar2,uVar1)) != (int)uVar8 < 0)) {
    uVar5 = 0x7fffffff;
  }
  else {
    uVar5 = FUN_006ace70((uint)lVar3,uVar8);
  }
  return uVar5;
}

