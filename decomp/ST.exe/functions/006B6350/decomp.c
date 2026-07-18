
int FUN_006b6350(undefined4 *param_1,char *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *local_8;
  
  local_8 = (int *)0x0;
  *param_1 = 0;
  piVar1 = FUN_006aac10(0x54);
  if (piVar1 == (int *)0x0) {
    return -2;
  }
  piVar1[0xe] = -1;
  iVar2 = Ordinal_1(param_2,&local_8,0);
  if (iVar2 == 0) {
    iVar2 = (**(code **)*local_8)(local_8,&DAT_0079ecc8,piVar1);
    if (iVar2 == 0) {
      iVar3 = _strncmp(param_2,"",0x10);
      if (iVar3 == 0) {
        piVar1[10] = 1;
      }
      else {
        iVar3 = _strncmp(param_2,&DAT_0079ec98,0x10);
        if (iVar3 == 0) {
          piVar1[10] = 2;
        }
        else {
          iVar3 = _strncmp(param_2,&DAT_0079ec88,0x10);
          if (iVar3 == 0) {
            piVar1[10] = 3;
          }
          else {
            iVar3 = _strncmp(param_2,&DAT_0079ec78,0x10);
            if (iVar3 == 0) {
              piVar1[10] = 4;
            }
          }
        }
      }
      piVar1[2] = *param_3;
      piVar1[3] = param_3[1];
      piVar1[4] = param_3[2];
      piVar1[5] = param_3[3];
      FUN_006b64b0(piVar1);
    }
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  if (iVar2 != 0) {
    FUN_006b7740(piVar1);
    *param_1 = 0;
    FUN_006a5e40(iVar2,DAT_007ed77c,0x7edbc4,0x13e);
    return iVar2;
  }
  *param_1 = piVar1;
  return 0;
}

