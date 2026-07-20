
void __thiscall FUN_005801c0(void *this,int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  AnonShape_004E0250_5A3B9236 *pAVar4;
  
  STResourceC::SetResource(this,*(int *)((int)this + 0x259) - param_1,1);
  if (*(int *)((int)this + 0x25d) == 1) {
    sVar1 = *(short *)((int)this + 0x245);
    sVar2 = *(short *)((int)this + 0x24d);
    sVar3 = *(short *)((int)this + 0x249);
    if ((((sVar1 < 0) || (SHORT_007fb240 <= sVar1)) || (sVar3 < 0)) ||
       (((SHORT_007fb242 <= sVar3 || (sVar2 < 0)) || (SHORT_007fb244 <= sVar2)))) {
      pAVar4 = (AnonShape_004E0250_5A3B9236 *)0x0;
    }
    else {
      pAVar4 = *(AnonShape_004E0250_5A3B9236 **)
                (DAT_007fb248 +
                ((int)SHORT_007fb246 * (int)sVar2 + (int)SHORT_007fb240 * (int)sVar3 + (int)sVar1) *
                8);
    }
    if (pAVar4->field_0018 == *(int *)((int)this + 0x269)) {
      thunk_FUN_004e0250(pAVar4);
    }
  }
  return;
}

