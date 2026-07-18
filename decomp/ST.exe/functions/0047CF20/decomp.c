
int __fastcall FUN_0047cf20(int *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  void *this;
  code *pcVar4;
  int iVar5;
  
  sVar1 = *(short *)((int)param_1 + 0x66f);
  sVar2 = *(short *)((int)param_1 + 0x673);
  sVar3 = *(short *)((int)param_1 + 0x671);
  *(undefined4 *)((int)param_1 + 0xb7) = 0;
  if ((((((-1 < sVar1) && (sVar1 < DAT_007fb240)) && (-1 < sVar3)) &&
       ((sVar3 < DAT_007fb242 && (-1 < sVar2)))) &&
      ((sVar2 < DAT_007fb244 &&
       ((this = *(void **)(DAT_007fb248 +
                          ((int)DAT_007fb246 * (int)sVar2 + (int)DAT_007fb240 * (int)sVar3 +
                          (int)sVar1) * 8), this != (void *)0x0 &&
        (*(int *)((int)this + 0x18) == *(int *)((int)param_1 + 0x679))))))) &&
     (*(int *)((int)param_1 + 0x675) == 99)) {
    thunk_FUN_004b7d50(this,(int)param_1);
  }
  switch(*(undefined4 *)((int)param_1 + 0x687)) {
  case 0:
  case 1:
  case 2:
  case 4:
    iVar5 = thunk_FUN_00460360(param_1);
    return iVar5;
  case 3:
    iVar5 = thunk_FUN_004758e0(param_1,(undefined4 *)0x2);
    return iVar5;
  }
  iVar5 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3870,0,0,&DAT_007a4ccc);
  if (iVar5 == 0) {
    return -1;
  }
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}

