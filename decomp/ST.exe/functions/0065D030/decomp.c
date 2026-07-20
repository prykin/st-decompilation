
void __cdecl FUN_0065d030(AnonShape_0065D030_CB0F82F0 *param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  if (param_1->field_0005 != '\0') {
    iVar1 = param_1->field_0462;
    uVar2 = 0;
    if (0 < *(int *)(iVar1 + 0xc)) {
      bVar3 = *(int *)(iVar1 + 0xc) != 0;
      do {
        if (bVar3) {
          iVar1 = *(int *)(iVar1 + 8) * uVar2 + *(int *)(iVar1 + 0x1c);
        }
        else {
          iVar1 = 0;
        }
        if (*(byte **)(iVar1 + 0xf) != (byte *)0x0) {
          FUN_006ae110(*(byte **)(iVar1 + 0xf));
          *(undefined4 *)(iVar1 + 0xf) = 0;
        }
        iVar1 = param_1->field_0462;
        uVar2 = uVar2 + 1;
        bVar3 = uVar2 < *(uint *)(iVar1 + 0xc);
      } while ((int)uVar2 < (int)*(uint *)(iVar1 + 0xc));
    }
    FUN_006ae110((byte *)param_1->field_0462);
    param_1->field_0462 = 0;
    FUN_006b5570((AnonShape_006B5570_4D68B99C *)param_1->field_0456);
    param_1->field_0456 = 0;
    thunk_FUN_0064a7c0((undefined4 *)&param_1[1].field_0x6);
  }
  return;
}

