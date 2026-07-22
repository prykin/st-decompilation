
/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 00679F00 -> 0068FC70 @ 00679F51 | 00679F90 -> 0068FC70 @ 00679FBC

   [STPrototypeApplier] Propagated return.
   Evidence: 0068FC70 returns forwarded through return of FUN_00679f00 @ 00679F57 */

int __thiscall FUN_0068fc70(void *this,int aiMess,short param_2)

{
  AiFltClassTy *this_00;
  int iVar1;
  uint uVar2;
  bool bVar3;

  uVar2 = 0;
  iVar1 = *(int *)((int)this + 0xa5);
  if (0 < *(int *)(iVar1 + 0xc)) {
    bVar3 = *(int *)(iVar1 + 0xc) != 0;
    do {
      if ((((bVar3) && (iVar1 = *(int *)(iVar1 + 8) * uVar2 + *(int *)(iVar1 + 0x1c), iVar1 != 0))
          && (this_00 = *(AiFltClassTy **)(iVar1 + 4), this_00 != (AiFltClassTy *)0x0)) &&
         ((uint)(ushort)this_00->field_007D == (int)param_2)) {
        AiFltClassTy::GetAiMess(this_00,(uint *)aiMess);
      }
      iVar1 = *(int *)((int)this + 0xa5);
      uVar2 = uVar2 + 1;
      bVar3 = uVar2 < *(uint *)(iVar1 + 0xc);
    } while ((int)uVar2 < (int)*(uint *)(iVar1 + 0xc));
    return 0;
  }
  return 0;
}

