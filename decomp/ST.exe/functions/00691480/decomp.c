
void __cdecl FUN_00691480(AnonShape_00691480_E757992C *param_1)

{
  AnonShape_00691480_E757992C *pAVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  bool bVar5;
  
  pAVar1 = param_1;
  if (param_1->field_0018 != '\0') {
    if (param_1->field_0018 == '\x02') {
      iVar2 = param_1->field_0085;
      uVar3 = 0;
      if (0 < *(int *)(iVar2 + 0xc)) {
        bVar5 = *(int *)(iVar2 + 0xc) != 0;
        do {
          if (bVar5) {
            iVar2 = *(int *)(iVar2 + 8) * uVar3 + *(int *)(iVar2 + 0x1c);
          }
          else {
            iVar2 = 0;
          }
          if (*(int *)(iVar2 + 4) == 0) {
            param_1 = (AnonShape_00691480_E757992C *)0x0;
          }
          else {
            param_1 = (AnonShape_00691480_E757992C *)(*(int *)(iVar2 + 4) + 0x20);
          }
          thunk_FUN_006686c0((int *)&param_1);
          iVar2 = pAVar1->field_0085;
          uVar3 = uVar3 + 1;
          bVar5 = uVar3 < *(uint *)(iVar2 + 0xc);
        } while ((int)uVar3 < (int)*(uint *)(iVar2 + 0xc));
      }
    }
    piVar4 = &pAVar1->field_0085;
    iVar2 = 8;
    do {
      if ((DArrayTy *)*piVar4 != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)*piVar4);
        *piVar4 = 0;
      }
      piVar4 = piVar4 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

