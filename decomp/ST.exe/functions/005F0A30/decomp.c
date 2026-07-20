
/* [STPrototypeApplier] Propagated return.
   Evidence: 005F0A30 returns return of FUN_004b7d50 @ 005F0B4F */

bool __fastcall FUN_005f0a30(STBoatC *param_1)

{
  short sVar1;
  short sVar2;
  int *this;
  bool bVar3;
  ushort uVar4;
  undefined3 extraout_var;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  uVar5 = (uint)(byte)param_1->field_0x24f;
  if ((param_1->field_0x24f != 0) &&
     (uVar5 = (uint)*(ushort *)&param_1->field_0x246, 0 < (short)*(ushort *)&param_1->field_0x246))
  {
    bVar3 = thunk_FUN_004961b0(*(short *)&param_1->field_0x242,*(short *)&param_1->field_0x244,
                               (short)(uVar5 - 1));
    uVar5 = CONCAT31(extraout_var,bVar3);
    if (uVar5 == 0) {
      sVar1 = *(short *)&param_1->field_0x242;
      sVar2 = *(short *)&param_1->field_0x244;
      uVar4 = *(short *)&param_1->field_0x246 - 1;
      uVar5 = (uint)uVar4;
      if ((((-1 < sVar1) && (sVar1 < SHORT_007fb240)) && (-1 < sVar2)) &&
         (((sVar2 < SHORT_007fb242 && (-1 < (short)uVar4)) && ((short)uVar4 < SHORT_007fb244)))) {
        uVar5 = (uint)sVar1;
        this = *(int **)(DAT_007fb248 +
                        ((int)SHORT_007fb246 * (int)(short)uVar4 + (int)SHORT_007fb240 * (int)sVar2
                        + uVar5) * 8);
        if (this != (int *)0x0) {
          uVar5 = (**(code **)(*this + 0x2c))();
          if (uVar5 == 99) {
            iVar6 = (*param_1->vtable[1].vfunc_14)();
            iVar7 = (*param_1->vtable[1].vfunc_0C)();
            iVar8 = (*param_1->vtable->vfunc_2C)();
            thunk_FUN_004b7e30(this,iVar8,iVar7,iVar6);
            iVar6 = (*param_1->vtable->vfunc_AC)(this[6]);
            uVar5 = 0;
            if (iVar6 != 0) {
              thunk_FUN_004b7de0(this);
              bVar3 = thunk_FUN_004b7d50(this,param_1);
              uVar5 = (uint)bVar3;
            }
          }
        }
      }
    }
  }
  return SUB41(uVar5,0);
}

