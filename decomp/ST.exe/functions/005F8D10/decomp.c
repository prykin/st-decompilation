
undefined4 __fastcall FUN_005f8d10(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  short local_a;
  short local_8;
  short local_6;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  uVar2 = (**(code **)(*param_1 + 0x1c))();
  thunk_FUN_005fa0b0((int)param_1);
  switch(uVar2) {
  case 0:
    uVar2 = 5;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)((int)param_1 + 0x29d) == '\x01') {
      if (*(char *)((int)param_1 + 699) == '\x01') {
        STFishC::sub_004162B0((STFishC *)param_1,&local_a,&local_8,&local_6);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if ((((int)local_a == *(int *)((int)param_1 + 0x291)) &&
            ((int)local_8 == *(int *)((int)param_1 + 0x295))) &&
           ((int)local_6 == *(int *)((int)param_1 + 0x299))) {
          *(undefined1 *)((int)param_1 + 699) = 3;
          return 5;
        }
      }
      else {
        iVar3 = thunk_FUN_005fa180((AnonShape_005FA180_2D8671A3 *)param_1);
        if (*(short *)(DAT_00806724 + 0x23) <= iVar3) {
          *(undefined4 *)((int)param_1 + 0x2dd) = 2;
          return 5;
        }
      }
    }
    break;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case 1:
    if (*(int *)((int)param_1 + 0x2ea) != 0) {
      thunk_FUN_005f9450((AnonShape_005F9450_64149E40 *)param_1);
      *(uint *)((int)param_1 + 0x2d5) = PTR_00802a38->field_00E4;
      uVar1 = PTR_00802a38->field_00E4;
      *(undefined4 *)((int)param_1 + 0x2ef) = 0;
      *(uint *)((int)param_1 + 0x2d9) = uVar1 + 0x32;
      *(undefined1 *)((int)param_1 + 699) = 1;
      *(undefined4 *)((int)param_1 + 0x76) = 1;
      if (0 < param_1[0xa8]) {
        *(undefined1 *)((int)param_1 + 0x29f) = 1;
        return 0xc;
      }
      *(undefined1 *)((int)param_1 + 0x29f) = 0;
      return 0xc;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)((int)param_1 + 0x29f) == '\0') {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(char *)((int)param_1 + 0x29d) != '\x01') {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (*(char *)((int)param_1 + 0x29d) == '\x03') {
          *(uint *)((int)param_1 + 0x2d5) = PTR_00802a38->field_00E4;
          uVar1 = PTR_00802a38->field_00E4;
          *(undefined1 *)((int)param_1 + 699) = 1;
          *(undefined4 *)((int)param_1 + 0x76) = 1;
          *(uint *)((int)param_1 + 0x2d9) = uVar1 + 0x32;
          *(undefined4 *)((int)param_1 + 0x2ef) = 0;
          return 0xc;
        }
        goto LAB_005f8ea2;
      }
    }
    else {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if ((param_1[0xa8] != 0) && (*(char *)((int)param_1 + 0x29d) == '\0')) {
        STFishC::sub_004162B0((STFishC *)param_1,&local_a,&local_8,&local_6);
        return 10;
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(char *)((int)param_1 + 0x29d) != '\x01') {
LAB_005f8ea2:
        *(undefined1 *)((int)param_1 + 699) = 2;
        return 8;
      }
    }
  default:
    uVar2 = 6;
    *(undefined1 *)((int)param_1 + 699) = 3;
    break;
  case 2:
    iVar3 = thunk_FUN_005f8cc0(param_1);
    if (-1 < iVar3) {
      return 5;
    }
    *(undefined4 *)((int)param_1 + 0x2dd) = 0xc;
    *(undefined4 *)((int)param_1 + 0x76) = 1;
    *(uint *)((int)param_1 + 0x2d5) = PTR_00802a38->field_00E4;
    *(uint *)((int)param_1 + 0x2d9) = PTR_00802a38->field_00E4 + 0x32;
    return 0;
  }
  return uVar2;
}

