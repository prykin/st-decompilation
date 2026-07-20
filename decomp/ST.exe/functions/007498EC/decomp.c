
void FUN_007498ec(int *param_1,AnonShape_0074987C_9BF4FFD0 *param_2)

{
  short sVar1;
  int *piVar2;
  int local_14;
  undefined2 local_10;
  undefined2 local_e;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = param_2->field_0010;
  if ((local_14 == 0) || (local_14 == 3)) {
    sVar1 = *(short *)&param_2->field_0xe;
    if (sVar1 == 1) {
      piVar2 = (int *)&DAT_007a1bb0;
    }
    else if (sVar1 == 4) {
      piVar2 = (int *)&DAT_007a1ba0;
    }
    else if (sVar1 == 8) {
      piVar2 = &DAT_007a16e0;
    }
    else if (sVar1 == 0x10) {
      piVar2 = (int *)FUN_0074987c(&local_14,param_2);
    }
    else if (sVar1 == 0x18) {
      piVar2 = &DAT_007a16d0;
    }
    else if (sVar1 == 0x20) {
      piVar2 = &DAT_007a16c0;
    }
    else {
      piVar2 = &DAT_0079e368;
    }
  }
  else {
    local_10 = 0;
    local_e = 0x10;
    local_c = 0xaa000080;
    local_8 = 0x719b3800;
    piVar2 = &local_14;
  }
  *param_1 = *piVar2;
  param_1[1] = piVar2[1];
  param_1[2] = piVar2[2];
  param_1[3] = piVar2[3];
  return;
}

