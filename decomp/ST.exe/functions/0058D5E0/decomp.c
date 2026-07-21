
int __cdecl
FUN_0058d5e0(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;

  iVar3 = 0;
  iVar2 = DAT_00811720 + -1;
  if (iVar2 < 0) {
    return 0;
  }
  do {
    puVar1 = *(undefined4 **)(DAT_0081171c + iVar2 * 4);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((((param_1 * 0xc9 <= (int)*(short *)((int)puVar1 + 0x41)) &&
         ((int)*(short *)((int)puVar1 + 0x41) <= param_3 * 0xc9)) &&
        (param_2 * 0xc9 <= (int)*(short *)((int)puVar1 + 0x43))) &&
       ((int)*(short *)((int)puVar1 + 0x43) <= param_4 * 0xc9)) {
      if (param_6 == 1) {
        if ((puVar1[8] == 0x10e) || (puVar1[8] == 0x118)) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)*puVar1)(param_5);
          iVar3 = iVar3 + 1;
        }
      }
      else if (((param_6 == 0) && (puVar1[8] != 0x32)) && (puVar1[8] != 0x8c)) goto LAB_0058d697;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)*puVar1)(param_5);
      iVar3 = iVar3 + 1;
    }
LAB_0058d697:
    iVar2 = iVar2 + -1;
    if (iVar2 < 0) {
      return iVar3;
    }
  } while( true );
}

