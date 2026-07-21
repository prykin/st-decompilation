
void __thiscall FUN_00696dc0(void *this,int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  AnonShape_00696D00_CB3CB395 *pAVar6;
  int iVar7;
  bool bVar8;

  iVar3 = *(int *)((int)this + 0x5853);
  if (iVar3 == 0) {
    return;
  }
  uVar2 = *(uint *)(iVar3 + 0xc);
  iVar7 = 0;
  uVar5 = 0;
  if (0 < (int)uVar2) {
    bVar8 = uVar2 != 0;
    do {
      if ((((bVar8) &&
           (piVar1 = (int *)(*(int *)(iVar3 + 8) * uVar5 + *(int *)(iVar3 + 0x1c)),
           piVar1 != (int *)0x0)) && (*(int *)((int)piVar1 + 0x11) <= param_2)) &&
         (*piVar1 == param_1)) {
        iVar7 = iVar7 + 1;
      }
      uVar5 = uVar5 + 1;
      bVar8 = uVar5 < uVar2;
    } while ((int)uVar5 < (int)uVar2);
    iVar4 = 4;
    if (3 < iVar7) goto LAB_00696e1a;
  }
  iVar4 = 1;
LAB_00696e1a:
  uVar5 = 0;
  if (0 < (int)uVar2) {
    bVar8 = uVar2 != 0;
    do {
      if (((bVar8) &&
          (pAVar6 = (AnonShape_00696D00_CB3CB395 *)
                    (*(int *)(iVar3 + 8) * uVar5 + *(int *)(iVar3 + 0x1c)),
          pAVar6 != (AnonShape_00696D00_CB3CB395 *)0x0)) &&
         ((*(int *)&pAVar6->field_0x11 <= param_2 &&
          ((*(int *)pAVar6 == param_1 &&
           (uVar2 = Library::MSVCRT::FUN_0072e6c0(), (int)uVar2 % (iVar4 + 1) != 0)))))) {
        thunk_FUN_00696d00(this,pAVar6,uVar5);
      }
      uVar5 = uVar5 + 1;
      iVar3 = *(int *)((int)this + 0x5853);
      bVar8 = uVar5 < *(uint *)(iVar3 + 0xc);
    } while ((int)uVar5 < (int)*(uint *)(iVar3 + 0xc));
  }
  return;
}

