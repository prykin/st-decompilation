
void FUN_00753ff7(void)

{
  undefined1 *puVar1;
  int iVar2;
  int unaff_EBP;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  bool bVar6;
  
  bVar6 = false;
  if ((*(byte *)(unaff_EBP + 0x3f) & 0x80) == 0) {
    iVar2 = *(int *)(unaff_EBP + 0x24);
    puVar3 = (undefined1 *)(unaff_EBP + 0x4e);
    puVar4 = *(undefined1 **)(unaff_EBP + 0x1c);
    do {
      *(int *)(unaff_EBP + 0x40) = *(int *)(unaff_EBP + 0x40) + 1;
      puVar5 = puVar4 + 1;
      puVar1 = puVar3 + 1;
      *puVar4 = *puVar3;
      iVar2 = iVar2 + -1;
      if (iVar2 == 0) {
        *(undefined4 *)(unaff_EBP + 0x24) = 0;
        FUN_00753fa7();
        if (bVar6) {
          *(undefined4 *)(unaff_EBP + 0x3c) = 0xffffffcd;
        }
        puVar5 = *(undefined1 **)(unaff_EBP + 0x1c);
        iVar2 = *(int *)(unaff_EBP + 0x24);
      }
      bVar6 = puVar1 < *(undefined1 **)(unaff_EBP + 0x48);
      puVar3 = puVar1;
      puVar4 = puVar5;
    } while (puVar1 != *(undefined1 **)(unaff_EBP + 0x48));
    *(undefined1 **)(unaff_EBP + 0x1c) = puVar5;
    *(int *)(unaff_EBP + 0x24) = iVar2;
  }
  *(undefined2 *)(unaff_EBP + 0x4c) = 1;
  *(undefined2 *)(unaff_EBP + 0x4e) = 0;
  *(int *)(unaff_EBP + 0x48) = unaff_EBP + 0x50;
  return;
}

