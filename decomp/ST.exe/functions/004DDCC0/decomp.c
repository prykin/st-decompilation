
undefined4 __fastcall FUN_004ddcc0(AnonShape_004DDCC0_33DEB43E *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = &param_1->field_04D0;
  iVar4 = 0;
  iVar2 = param_1->field_04D0;
  while (-1 < iVar2) {
    if (piVar3[2] != 0) {
      iVar4 = iVar4 + (*(int *)(&DAT_007e6028 + (*piVar3 + -0x96) * 0x14) - piVar3[1]) *
                      (&DAT_007e6024)[(*piVar3 + -0x96) * 5];
    }
    piVar1 = piVar3 + 5;
    piVar3 = piVar3 + 5;
    iVar2 = *piVar1;
  }
  thunk_FUN_004d76e0(param_1->field_0024,3,param_1->field_0018,0,iVar4,0,0);
  return 0;
}

