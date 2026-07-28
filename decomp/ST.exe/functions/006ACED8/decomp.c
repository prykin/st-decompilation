
/* [STPrototypeApplier] Propagated return.
   Evidence: 006ACED8 returns stored into /STBHEShellC+0xef @ 005F3D78 */

int __cdecl FUN_006aced8(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;

  lVar3 = (longlong)(param_1 - param_3) * (longlong)(param_1 - param_3);
  iVar5 = (int)((ulonglong)lVar3 >> 0x20);
  if ((lVar3 < 0) ||
     (lVar4 = (longlong)(param_2 - param_4) * (longlong)(param_2 - param_4),
     iVar6 = (int)((ulonglong)lVar4 >> 0x20), uVar1 = (uint)CARRY4((uint)lVar4,(uint)lVar3),
     iVar2 = iVar6 + iVar5, uVar7 = iVar2 + uVar1,
     (SCARRY4(iVar6,iVar5) != SCARRY4(iVar2,uVar1)) != (int)uVar7 < 0)) {
    iVar5 = 0x7fffffff;
  }
  else {
    iVar5 = FUN_006ace70((uint)lVar3,uVar7);
  }
  return iVar5;
}

