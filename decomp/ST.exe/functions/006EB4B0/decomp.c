
int FUN_006eb4b0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar1 = param_1;
  iVar2 = FUN_006bb8b0((AnonShape_006BB8B0_D6DE56CA *)param_1);
  if (iVar2 == 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = 0;
    while( true ) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar3 = FUN_006bbe40(*(int **)(iVar1 + 0x44),(uint *)(param_2 + 0x4ea),
                           (int *)(param_2 + 0x4ee),0x20);
      if (iVar3 == 0) break;
      if (iVar3 != -0x7789fe3e) {
        if (iVar3 != 0) {
          FUN_006bb980((AnonShape_006BB980_E41494A1 *)iVar1);
          return iVar3;
        }
        break;
      }
      FUN_006cec40((AnonShape_006CEC40_BB23E716 *)iVar1);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = param_1 + 1;
      if (1 < param_1) {
        FUN_006bb980((AnonShape_006BB980_E41494A1 *)iVar1);
        return -0x7789fe3e;
      }
    }
    iVar2 = 0;
  }
  return iVar2;
}

