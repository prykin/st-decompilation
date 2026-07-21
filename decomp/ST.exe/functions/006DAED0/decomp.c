
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_006daed0(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,uint param_8)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_EDI;
  int iVar4;
  bool bVar5;
  int local_8;

  piVar3 = (int *)&stack0xffffffe8;
  Library::MSVCRT::FUN_0072da40();
  iVar1 = -(param_7 >> 1);
  iVar2 = -2;
  iVar4 = param_3;
  if (0 < param_3) {
    do {
      for (; iVar1 < 1; iVar1 = iVar1 + param_3) {
        iVar2 = iVar2 + 2;
      }
      *piVar3 = iVar2;
      iVar1 = iVar1 - param_7;
      piVar3 = piVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  local_8 = param_4;
  param_7 = -(param_8 >> 1);
  iVar1 = param_5 - param_6;
  do {
    if (param_7 < 1) {
      do {
        iVar1 = iVar1 + param_6;
        bVar5 = SCARRY4(param_7,param_4);
        param_7 = param_7 + param_4;
      } while (param_7 == 0 || bVar5 != param_7 < 0);
    }
    piVar3 = (int *)&stack0xffffffe8;
    iVar2 = param_3;
    if (((uint)param_1 & 2) == 0) {
joined_r0x006daf6b:
      while (1 < iVar2) {
        *param_1 = CONCAT22(*(undefined2 *)(iVar1 + piVar3[1]),*(undefined2 *)(iVar1 + *piVar3));
        param_1 = param_1 + 1;
        piVar3 = piVar3 + 2;
        iVar2 = iVar2 + -2;
      }
      if (iVar2 + -2 != -2) {
        *(undefined2 *)param_1 = *(undefined2 *)(iVar1 + *piVar3);
        param_1 = (undefined4 *)((int)param_1 + 2);
      }
    }
    else {
      piVar3 = (int *)&stack0xffffffec;
      *(undefined2 *)param_1 = *(undefined2 *)(iVar1 + unaff_EDI);
      param_1 = (undefined4 *)((int)param_1 + 2);
      iVar2 = param_3 + -1;
      if (iVar2 != 0 && 0 < param_3) goto joined_r0x006daf6b;
    }
    param_1 = (undefined4 *)((int)param_1 + param_2 + param_3 * -2);
    param_7 = param_7 - param_8;
    iVar2 = local_8 + -1;
    bVar5 = local_8 < 1;
    local_8 = iVar2;
    if (iVar2 == 0 || bVar5) {
      return;
    }
  } while( true );
}

