
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::BackDismant */

int __thiscall STBoatC::BackDismant(STBoatC *this,int *param_1,undefined4 param_2,void *param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  code *pcVar4;
  int iVar5;
  int *unaff_ESI;
  undefined4 unaff_EDI;
  
  *(undefined4 *)(this + 0xb7) = 0;
  switch(*(undefined4 *)(this + 0x6c3)) {
  case 0:
  case 1:
  case 2:
  case 6:
    break;
  case 3:
    *(undefined4 *)(this + 0x6c3) = 5;
    *(undefined4 *)(this + 0x6c7) = 0;
    iVar5 = (**(code **)(*(int *)this + 0xd8))();
    return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
  case 4:
    sVar1 = *(short *)(this + 0x6a9);
    sVar2 = *(short *)(this + 0x6ad);
    sVar3 = *(short *)(this + 0x6ab);
    if (((((sVar1 < 0) || (DAT_007fb240 <= sVar1)) || (sVar3 < 0)) ||
        ((DAT_007fb242 <= sVar3 || (sVar2 < 0)))) || (DAT_007fb244 <= sVar2)) {
      param_1 = (int *)0x0;
    }
    else {
      param_1 = *(int **)(DAT_007fb248 +
                         ((int)DAT_007fb246 * (int)sVar2 + (int)DAT_007fb240 * (int)sVar3 +
                         (int)sVar1) * 8);
    }
    if (((param_1 == (int *)0x0) || (param_1[6] != *(int *)(this + 0x6af))) ||
       ((param_1[9] != *(int *)(this + 0x24) ||
        (iVar5 = thunk_FUN_004b9d90((int)param_1), iVar5 == 0)))) {
      FUN_006e62d0(DAT_00802a38,*(int *)(this + 0x6af),(int *)&param_1);
    }
    if (param_1 != (int *)0x0) {
      thunk_FUN_004b9d20(param_1,(int)this);
    }
    if (*(int *)(this + 0x6b9) == 1) {
      *(undefined4 *)(this + 0x6c3) = 5;
      *(undefined4 *)(this + 0x6c7) = 0;
    }
    else {
      *(undefined4 *)(this + 0x6c3) = 6;
    }
    iVar5 = (**(code **)(*(int *)this + 0xd8))();
    return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
  case 5:
    iVar5 = Dismant(this,(int *)0x2,unaff_EDI,unaff_ESI);
    return iVar5;
  default:
    iVar5 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3b30,0,0,&DAT_007a4ccc,
                               s_STBoatC__BackDismant_incorrect_e_007ab830);
    if (iVar5 == 0) {
      return -1;
    }
    pcVar4 = (code *)swi(3);
    iVar5 = (*pcVar4)();
    return iVar5;
  }
  iVar5 = thunk_FUN_00460360((int *)this);
  if (iVar5 == 0) {
    sVar1 = *(short *)(this + 0x6a9);
    sVar2 = *(short *)(this + 0x6ad);
    sVar3 = *(short *)(this + 0x6ab);
    if (((((sVar1 < 0) || (DAT_007fb240 <= sVar1)) || (sVar3 < 0)) ||
        ((DAT_007fb242 <= sVar3 || (sVar2 < 0)))) || (DAT_007fb244 <= sVar2)) {
      param_1 = (int *)0x0;
    }
    else {
      param_1 = *(int **)(DAT_007fb248 +
                         ((int)DAT_007fb246 * (int)sVar2 + (int)DAT_007fb240 * (int)sVar3 +
                         (int)sVar1) * 8);
    }
    if (((param_1 == (int *)0x0) || (param_1[6] != *(int *)(this + 0x6af))) ||
       ((param_1[9] != *(int *)(this + 0x24) ||
        (iVar5 = thunk_FUN_004b9d90((int)param_1), iVar5 == 0)))) {
      FUN_006e62d0(DAT_00802a38,*(int *)(this + 0x6af),(int *)&param_1);
    }
    if ((param_1 != (int *)0x0) && (param_1[300] == *(int *)(this + 0x18))) {
      param_1[300] = 0;
    }
    return 0;
  }
  return 2;
}

