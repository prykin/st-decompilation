
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00755830 -> 00753B40 @ 00755856 */

int FUN_00753b40(AnonShape_00753C80_4C8E695D *param_1)

{
  int iVar1;
  AnonShape_00753C80_4C8E695D *pAVar2;
  int iVar3;

  pAVar2 = param_1;
  iVar3 = param_1->field_0008;
  iVar1 = *(int *)(iVar3 + 0x1c);
  if (iVar1 == -1) {
    iVar3 = *(int *)(iVar3 + 0x18);
  }
  else {
    iVar3 = Library::DKW::FMM::FUN_006d4a40(iVar3,iVar1,&param_1);
    if (iVar3 == 0) {
      *(AnonShape_00753C80_4C8E695D **)(pAVar2->field_0008 + 0x1c) = param_1;
      return iVar1;
    }
  }
  return iVar3;
}

