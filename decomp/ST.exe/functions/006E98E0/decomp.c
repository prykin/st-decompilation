
undefined4 __thiscall
FUN_006e98e0(void *this,uint param_1,uint param_2,int param_3,int param_4,int param_5)

{
  AnonShape_006E8840_CF3FA5BA *pAVar1;
  byte *pbVar2;
  int *piVar3;
  
  if ((param_1 < *(uint *)((int)this + 0x310)) &&
     (pAVar1 = (AnonShape_006E8840_CF3FA5BA *)(*(int *)((int)this + 0x31c) + param_1 * 0x114),
     (*(uint *)(*(int *)((int)this + 0x31c) + param_1 * 0x114) & 0x8000) != 0)) {
    if ((uint)pAVar1->field_0094 <= param_2) {
      FUN_006e91a0();
      return 0;
    }
    if (pAVar1->field_00A0 == (int *)0x0) {
      piVar3 = Library::DKW::LIB::FUN_006aac10(pAVar1->field_0094 * 8);
      pAVar1->field_00A0 = piVar3;
      if (piVar3 == (int *)0x0) {
        return 0xfffffffe;
      }
      *(uint *)&pAVar1->field_0x4 = *(uint *)&pAVar1->field_0x4 | 1;
    }
    if (param_4 != pAVar1->field_00A0[param_2 * 2 + 1]) {
      *(uint *)pAVar1 = *(uint *)pAVar1 & 0xff87ffff | 0x4c;
      *(undefined2 *)(*(int *)(pAVar1 + 1) + 2 + param_2 * 4) = 0;
    }
    pAVar1->field_00A0[param_2 * 2] = param_3;
    pAVar1->field_00A0[param_2 * 2 + 1] = param_4;
    if ((*(uint *)pAVar1 & 0x1000) == 0) {
      FUN_006e8840(pAVar1);
    }
    if (param_4 != 0) {
      pbVar2 = (byte *)(*(int *)(pAVar1 + 1) + 3 + param_2 * 4);
      *pbVar2 = *pbVar2 | 0x80;
      if (param_5 != 0) {
        pbVar2 = (byte *)(*(int *)(pAVar1 + 1) + 3 + param_2 * 4);
        *pbVar2 = *pbVar2 | 0x40;
      }
      FUN_006e9a10((uint *)pAVar1,param_2,0xfffffffe);
      return 0;
    }
  }
  else if (param_1 != 0xffffffff) {
    FUN_006e8c50();
  }
  return 0;
}

