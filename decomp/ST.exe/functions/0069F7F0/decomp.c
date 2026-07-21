
int __cdecl FUN_0069f7f0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_8;

  iVar6 = 0;
  iVar2 = -1;
  if (0 < param_2) {
    piVar1 = (int *)(param_1 + param_4);
    piVar4 = piVar1;
    iVar5 = param_2;
    do {
      iVar6 = iVar6 + *piVar4;
      piVar4 = (int *)((int)piVar4 + param_3);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if (0 < iVar6) {
      param_1 = *piVar1;
      iVar2 = 0;
      local_8 = 0;
      param_4 = param_1;
      if (0 < param_5) {
        do {
          uVar3 = Library::MSVCRT::FUN_0072e6c0();
          iVar7 = iVar6 + 1;
          iVar6 = 0;
          iVar5 = 0;
          piVar4 = piVar1;
          do {
            iVar6 = iVar6 + *piVar4;
            if ((int)uVar3 % iVar7 <= iVar6) {
              iVar2 = *piVar4;
              param_4 = iVar5;
              break;
            }
            iVar5 = iVar5 + 1;
            piVar4 = (int *)((int)piVar4 + param_3);
          } while (iVar5 < param_2);
          if (param_1 < iVar2) {
            local_8 = param_4;
            param_1 = iVar2;
          }
          param_5 = param_5 + -1;
          if (param_5 == 0) {
            return local_8;
          }
        } while( true );
      }
      iVar2 = 0;
    }
  }
  return iVar2;
}

