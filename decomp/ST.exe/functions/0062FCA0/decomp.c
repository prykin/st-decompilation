
int __thiscall STRubbishC::FUN_0062fca0(STRubbishC *this,AnonShape_0062FCA0_22A9EE35 *param_1)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;

  iVar3 = RubbishCreatePart(this);
  iVar4 = this->field_01E1;
  if (iVar3 < 0) {
    if (iVar4 == 0) {
      thunk_FUN_0062f900(this);
      return 0xffff;
    }
  }
  else {
    if (4 < iVar4) {
      sVar2 = (short)((uint)param_1->field_0028 >> 0x10);
      if ((sVar2 != 3) && (sVar2 != 6)) {
        iVar4 = param_1->field_0020;
        puVar5 = &this->field_01E5;
        iVar3 = 5;
        do {
          piVar1 = (int *)*puVar5;
          if (((piVar1 != (int *)0x0) && (piVar1[1] != 3)) && (piVar1[1] != 6)) {
            *piVar1 = *piVar1 + iVar4 / 5;
          }
          puVar5 = puVar5 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      return this->field_01E1;
    }
    this->field_01E1 = iVar4 + 1;
    thunk_FUN_0062ef00(this,iVar3,param_1);
    if (this->field_01F9 != '\0') {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar4 = thunk_FUN_0062f080(this,iVar3,*(undefined4 *)((&this->field_01E5)[iVar3] + 0xc),
                                 *(undefined4 *)((&this->field_01E5)[iVar3] + 4));
      if (iVar4 != 0) {
        thunk_FUN_0062f0d0(this,iVar3);
        return iVar3;
      }
      if (this->field_01E1 == 0) {
        thunk_FUN_0062f900(this);
        return 0xffff;
      }
      thunk_FUN_0062f6c0(this,iVar3);
      iVar3 = -1;
    }
  }
  return iVar3;
}

