
void __fastcall FUN_006dbab0(AnonShape_006DBAB0_2B877B8C *param_1)

{
  uint uVar1;
  int iVar2;
  
  do {
    iVar2 = 0;
    if (*(int *)param_1 != 0) {
      *(undefined4 *)(*(int *)param_1 + 0x22c) = 0;
    }
    FUN_006b9890((int *)&param_1->field_0x44a);
    FUN_006b9890((int *)&param_1->field_0x44e);
    FUN_006b9890((int *)&param_1->field_0x452);
    FreeAndNull((void **)&param_1->field_0x420);
    *(undefined4 *)&param_1->field_0x428 = 0;
    *(undefined4 *)&param_1->field_0x42c = 0;
    *(undefined4 *)&param_1->field_0x430 = 0;
    *(undefined4 *)&param_1->field_0x434 = 0;
    param_1->field_04A2 = 0;
    param_1->field_04A6 = 0;
    param_1->field_04AA = 0;
    param_1->field_04AE = 0;
    param_1->field_04BA = 0;
    param_1->field_043E = 0;
    param_1->field_04C6 = 0;
    param_1->field_04CA = 0;
    param_1->field_04D6 = 0;
    param_1->field_04DA = 0;
    FreeAndNull((void **)&param_1->field_0x388);
    if (*(int *)&param_1->field_0x31c != 0) {
      uVar1 = 0;
      if (0 < *(int *)&param_1->field_0x310) {
        do {
          if ((*(uint *)(iVar2 + *(int *)&param_1->field_0x31c) & 0x8000) != 0) {
            FUN_006e8ba0(param_1,uVar1);
          }
          FUN_006a5e90(*(short **)(iVar2 + 0xec + *(int *)&param_1->field_0x31c));
          uVar1 = uVar1 + 1;
          iVar2 = iVar2 + 0x114;
        } while ((int)uVar1 < *(int *)&param_1->field_0x310);
      }
      FreeAndNull((void **)&param_1->field_0x31c);
      FreeAndNull((void **)&param_1->field_0x330);
    }
    *(undefined4 *)&param_1->field_0x2e0 = 0;
    *(int *)param_1 = 0;
    *(undefined4 *)&param_1->field_0x310 = 0;
    *(undefined4 *)&param_1->field_0x318 = 0;
    *(undefined4 *)&param_1->field_0x328 = 0;
    *(undefined4 *)&param_1->field_0x32c = 0;
    *(undefined4 *)&param_1->field_0x2dc = 0;
    *(undefined4 *)&param_1->field_0x2a8 = 0;
    FreeAndNull((void **)&param_1->field_0x8);
    FreeAndNull((void **)&param_1->field_0x10);
    FreeAndNull((void **)&param_1->field_0x18);
    FreeAndNull((void **)&param_1->field_0x158);
    FreeAndNull((void **)&param_1->field_0x154);
    FreeAndNull((void **)&param_1->field_0x1c);
    FreeAndNull((void **)&param_1->field_0x350);
    FreeAndNull((void **)&param_1->field_0x354);
    FreeAndNull((void **)&param_1->field_0x2b0);
    FUN_006b9890((int *)&param_1->field_0x294);
    FUN_006e6620((int)param_1);
    *(undefined4 *)&param_1->field_0x14 = 0;
    *(undefined4 *)&param_1->field_0x4 = 0;
    *(undefined4 *)&param_1->field_0x280 = 0;
    *(undefined4 *)&param_1->field_0x290 = 0;
    *(undefined4 *)&param_1->field_0x29c = 0;
    *(undefined4 *)&param_1->field_0x140 = 0;
    *(undefined4 *)&param_1->field_0x28c = 0;
    *(undefined4 *)&param_1->field_0x13c = 0;
    *(undefined4 *)&param_1->field_0x124 = 0;
    param_1 = *(AnonShape_006DBAB0_2B877B8C **)&param_1->field_0x358;
  } while (param_1 != (AnonShape_006DBAB0_2B877B8C *)0x0);
  return;
}

