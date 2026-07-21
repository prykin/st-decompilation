
undefined4 __cdecl
FUN_006acf0d(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;

  lVar1 = (longlong)(param_1 - param_4) * (longlong)(param_1 - param_4);
  iVar6 = (int)((ulonglong)lVar1 >> 0x20);
  if (-1 < lVar1) {
    lVar2 = (longlong)(param_2 - param_5) * (longlong)(param_2 - param_5);
    iVar7 = (int)((ulonglong)lVar2 >> 0x20);
    uVar3 = (uint)lVar2;
    uVar5 = (uint)lVar1 + uVar3;
    uVar3 = (uint)CARRY4((uint)lVar1,uVar3);
    iVar8 = iVar6 + iVar7;
    iVar10 = iVar8 + uVar3;
    if (((SCARRY4(iVar6,iVar7) != SCARRY4(iVar8,uVar3)) == iVar10 < 0) &&
       (lVar1 = (longlong)(param_3 - param_6) * (longlong)(param_3 - param_6),
       iVar8 = (int)((ulonglong)lVar1 >> 0x20), uVar3 = (uint)CARRY4((uint)lVar1,uVar5),
       iVar6 = iVar8 + iVar10, uVar9 = iVar6 + uVar3,
       (SCARRY4(iVar8,iVar10) != SCARRY4(iVar6,uVar3)) == (int)uVar9 < 0)) {
      uVar4 = FUN_006ace70(uVar5,uVar9);
      return uVar4;
    }
  }
  return 0x7fffffff;
}

