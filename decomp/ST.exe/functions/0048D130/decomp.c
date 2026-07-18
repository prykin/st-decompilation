
void __thiscall
FUN_0048d130(void *this,int param_1,short param_2,short param_3,short param_4,int param_5,
            undefined4 param_6)

{
  short sVar1;
  short sVar2;
  short sVar3;
  void *pvVar4;
  code *pcVar5;
  int iVar6;
  
  if ((param_5 != -1) &&
     ((((param_2 < 0 || (DAT_007fb240 <= param_2)) || (param_3 < 0)) ||
      (((DAT_007fb242 <= param_3 || (param_4 < 0)) ||
       ((DAT_007fb244 <= param_4 ||
        ((iVar6 = *(int *)(DAT_007fb248 +
                          ((int)DAT_007fb246 * (int)param_4 + (int)DAT_007fb240 * (int)param_3 +
                          (int)param_2) * 8), iVar6 == 0 || (*(int *)(iVar6 + 0x18) != param_5))))))
      )))) {
    iVar6 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x4bcc,0,0,&DAT_007a4ccc);
    if (iVar6 != 0) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FUN_006a5e40(0,DAT_007ed77c,0x7a9d3c,0x4bcd);
  }
  if (param_1 == 1) {
    if (*(int *)((int)this + 0x4a1) != param_5) {
      sVar1 = *(short *)((int)this + 0x49b);
      sVar2 = *(short *)((int)this + 0x49f);
      sVar3 = *(short *)((int)this + 0x49d);
      if (((-1 < sVar1) && (sVar1 < DAT_007fb240)) &&
         ((-1 < sVar3 &&
          ((((sVar3 < DAT_007fb242 && (-1 < sVar2)) && (sVar2 < DAT_007fb244)) &&
           (pvVar4 = *(void **)(DAT_007fb248 +
                               ((int)DAT_007fb246 * (int)sVar2 + (int)DAT_007fb240 * (int)sVar3 +
                               (int)sVar1) * 8), pvVar4 != (void *)0x0)))))) {
        thunk_FUN_004e18e0(pvVar4,*(int *)((int)this + 0x18));
        thunk_FUN_004e1690(pvVar4,*(int *)((int)this + 0x18));
      }
      *(int *)((int)this + 0x4a1) = param_5;
      *(undefined4 *)((int)this + 0x4bd) = 1;
      if (param_5 != -1) {
        *(short *)((int)this + 0x49b) = param_2;
        *(short *)((int)this + 0x49d) = param_3;
        *(short *)((int)this + 0x49f) = param_4;
        *(undefined4 *)((int)this + 0x4b5) = param_6;
        return;
      }
    }
  }
  else if (*(int *)((int)this + 0x4ab) != param_5) {
    sVar1 = *(short *)((int)this + 0x4a5);
    sVar2 = *(short *)((int)this + 0x4a9);
    sVar3 = *(short *)((int)this + 0x4a7);
    if (((((-1 < sVar1) && (sVar1 < DAT_007fb240)) && (-1 < sVar3)) &&
        ((sVar3 < DAT_007fb242 && (-1 < sVar2)))) &&
       ((sVar2 < DAT_007fb244 &&
        (pvVar4 = *(void **)(DAT_007fb248 +
                            ((int)DAT_007fb246 * (int)sVar2 + (int)DAT_007fb240 * (int)sVar3 +
                            (int)sVar1) * 8), pvVar4 != (void *)0x0)))) {
      thunk_FUN_004e18e0(pvVar4,*(int *)((int)this + 0x18));
      thunk_FUN_004e1690(pvVar4,*(int *)((int)this + 0x18));
    }
    *(int *)((int)this + 0x4ab) = param_5;
    *(undefined4 *)((int)this + 0x4c1) = 1;
    if (param_5 != -1) {
      *(short *)((int)this + 0x4a5) = param_2;
      *(short *)((int)this + 0x4a7) = param_3;
      *(short *)((int)this + 0x4a9) = param_4;
      *(undefined4 *)((int)this + 0x4b9) = param_6;
    }
  }
  return;
}

