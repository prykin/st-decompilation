
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00755830 -> 00753B40 @ 00755856 */

int FUN_00753b40(AnonShape_00753C80_4C8E695D *param_1)

{
  AnonNested_AnonShape_00753C80_4C8E695D_0008_9237F694 *pAVar1;
  int iVar2;
  AnonShape_00753C80_4C8E695D *pAVar3;
  int iVar4;

  pAVar3 = param_1;
  pAVar1 = param_1->field_0008;
  iVar2 = pAVar1->field_001C;
  if (iVar2 == -1) {
    iVar4 = *(int *)&pAVar1->field_0x18;
  }
  else {
    iVar4 = Library::DKW::FMM::FUN_006d4a40((int)pAVar1,iVar2,&param_1);
    if (iVar4 == 0) {
      pAVar3->field_0008->field_001C = param_1;
      return iVar2;
    }
  }
  return iVar4;
}

