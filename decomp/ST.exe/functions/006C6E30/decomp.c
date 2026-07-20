
int FUN_006c6e30(AnonShape_006C6E30_3C2F0429 *param_1)

{
  undefined1 *puVar1;
  AnonShape_006C6E30_3C2F0429 *pAVar2;
  int iVar3;
  AnonShape_006C6E30_3C2F0429 *pAVar4;
  short local_10;
  short local_e;
  short local_c;
  short local_a;
  byte local_8;
  
  puVar1 = &param_1->field_0x2a;
  FUN_006ab060((LPVOID *)puVar1);
  iVar3 = (*(code *)param_1->field_0042)(param_1,&local_10,9);
  if (iVar3 == 9) {
    param_1->field_001A = (int)local_10;
    param_1->field_001E = (int)local_e;
    param_1->field_0026 = (int)local_a;
    param_1->field_0022 = (int)local_c;
    if ((local_8 & 0x80) == 0) {
      param_1->field_0019 = param_1->field_0010;
    }
    else {
      param_1->field_0019 = local_8 & 7;
      pAVar2 = (AnonShape_006C6E30_3C2F0429 *)((1 << (local_8 & 7) + 1) * 3);
      iVar3 = FUN_006bfb70((int)pAVar2);
      *(int *)puVar1 = iVar3;
      if (iVar3 == 0) {
        return -2;
      }
      pAVar4 = (AnonShape_006C6E30_3C2F0429 *)(*(code *)param_1->field_0042)(param_1,iVar3,pAVar2);
      if (pAVar4 != pAVar2) {
        FUN_006ab060((LPVOID *)puVar1);
        param_1 = pAVar4;
        if (-1 < (int)pAVar4) {
          param_1 = (AnonShape_006C6E30_3C2F0429 *)0xfffffffb;
        }
        return (int)param_1;
      }
    }
    param_1->field_0018 = (local_8 & 0x40) == 0x40;
    iVar3 = 0;
  }
  else if (-1 < iVar3) {
    return -5;
  }
  return iVar3;
}

