
/* [STPrototypeApplier] Propagated return.
   Evidence: 006ACF0D returns stored into /STOctopusC+0x239 @ 0058AFD0 */

int __cdecl FUN_006acf0d(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;

  lVar1 = (longlong)(param_1 - param_4) * (longlong)(param_1 - param_4);
  iVar5 = (int)((ulonglong)lVar1 >> 0x20);
  if (-1 < lVar1) {
    lVar2 = (longlong)(param_2 - param_5) * (longlong)(param_2 - param_5);
    iVar6 = (int)((ulonglong)lVar2 >> 0x20);
    uVar3 = (uint)lVar2;
    uVar4 = (uint)lVar1 + uVar3;
    uVar3 = (uint)CARRY4((uint)lVar1,uVar3);
    iVar7 = iVar5 + iVar6;
    iVar9 = iVar7 + uVar3;
    if (((SCARRY4(iVar5,iVar6) != SCARRY4(iVar7,uVar3)) == iVar9 < 0) &&
       (lVar1 = (longlong)(param_3 - param_6) * (longlong)(param_3 - param_6),
       iVar7 = (int)((ulonglong)lVar1 >> 0x20), uVar3 = (uint)CARRY4((uint)lVar1,uVar4),
       iVar5 = iVar7 + iVar9, uVar8 = iVar5 + uVar3,
       (SCARRY4(iVar7,iVar9) != SCARRY4(iVar5,uVar3)) == (int)uVar8 < 0)) {
      iVar5 = FUN_006ace70(uVar4,uVar8);
      return iVar5;
    }
  }
  return 0x7fffffff;
}

