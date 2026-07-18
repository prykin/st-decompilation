
void FUN_005e10a0(uint *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint *puVar4;
  undefined4 local_48;
  undefined4 local_44 [16];
  
  local_48 = DAT_00858df8;
  DAT_00858df8 = &local_48;
  iVar2 = __setjmp3(local_44,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if (param_1 != (uint *)0x0) {
      if (-1 < (int)*param_1) {
        FUN_006b3bb0(DAT_008075a8,*param_1);
      }
      *param_1 = 0xffffffff;
      iVar2 = 3;
      puVar4 = param_1;
      do {
        puVar4 = puVar4 + 1;
        if (*puVar4 != 0) {
          FUN_006ab060(puVar4);
        }
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      if (*(int **)((int)param_1 + 0x31) != (int *)0x0) {
        FUN_00714060(*(int **)((int)param_1 + 0x31));
        FUN_0072e2b0(*(undefined4 **)((int)param_1 + 0x31));
        *(undefined4 *)((int)param_1 + 0x31) = 0;
      }
      if (*(int *)((int)param_1 + 0x3a) != 0) {
        FUN_006ab060((undefined4 *)((int)param_1 + 0x3a));
      }
    }
    DAT_00858df8 = (undefined4 *)local_48;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_48;
  iVar3 = FUN_006ad4d0(s_E____titans_Start_task_obj_cpp_007cd994,0x1ab,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7cd994,0x1ab);
  return;
}

