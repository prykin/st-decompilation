
void __fastcall FUN_0062fe00(STJellyGunC *param_1)

{
  AnonShape_004AB810_8E5693D5 *pAVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;

  iVar4 = 0;
  piVar5 = (int *)&param_1->field_0x1e5;
  do {
    if (*piVar5 != 0) {
      if (*(int *)(*piVar5 + 0x10) == 0) {
        pAVar1 = (AnonShape_004AB810_8E5693D5 *)Library::MSVCRT::FUN_0072e530(0x40);
        if (pAVar1 == (AnonShape_004AB810_8E5693D5 *)0x0) {
          uVar2 = 0;
        }
        else {
          uVar2 = thunk_FUN_004ab810(pAVar1);
        }
        *(undefined4 *)(*piVar5 + 0x10) = uVar2;
      }
      iVar3 = thunk_FUN_0062f080(param_1,iVar4,*(undefined4 *)(*piVar5 + 0xc),
                                 *(undefined4 *)(*piVar5 + 4));
      if (iVar3 == 0) {
        if (param_1->field_01E1 == 1) {
          STRubbishC::sub_0062F900((STRubbishC *)param_1);
        }
        else {
          thunk_FUN_0062f6c0(param_1,iVar4);
        }
      }
      else {
        thunk_FUN_0062f0d0(param_1,iVar4);
      }
    }
    iVar4 = iVar4 + 1;
    piVar5 = piVar5 + 1;
  } while (iVar4 < 5);
  return;
}

