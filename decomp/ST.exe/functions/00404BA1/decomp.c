
void __thiscall thunk_FUN_004f1610(void *this,char param_1)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 auStack_9c [19];
  undefined1 auStack_50 [16];
  undefined4 uStack_40;
  int iStack_3c;
  uint uStack_38;
  undefined4 auStack_30 [4];
  undefined4 uStack_20;
  undefined4 *puStack_1c;
  undefined2 uStack_18;
  uint uStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_10 = (uint)(param_1 == '\0');
  iVar6 = *(int *)((int)this + uStack_10 * 4 + 0x2fe);
  if (iVar6 != 0) {
    uStack_40 = 0x5b;
    FUN_006e5970(2,iVar6,(int)auStack_50);
    iStack_c = iStack_3c;
    uStack_8 = uStack_8 & 0xffffff00;
    if (uStack_38 != 0) {
      do {
        uVar4 = uStack_8;
        iVar6 = iStack_c;
        puVar5 = auStack_30;
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        if (param_1 == '\0') {
          cVar1 = *(char *)((int)this + 0xbfd);
        }
        else {
          cVar1 = *(char *)((int)this + 0xba1);
        }
        if (cVar1 == '\0') {
          uStack_20 = 0x50;
          iVar6 = *(int *)(iVar6 + (uVar4 & 0xff) * 4);
        }
        else {
          uVar4 = uVar4 & 0xff;
          puVar5 = auStack_9c;
          for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
          }
          auStack_9c[0] = 8;
          uStack_20 = 0x5a;
          auStack_9c[1] =
               *(undefined4 *)
                (&DAT_00807e66 + *(int *)((uVar4 + uStack_10 * 6) * 0x27 + 0x789 + (int)this) * 4);
          puStack_1c = auStack_9c;
          FUN_006e5970(2,*(int *)(iVar6 + uVar4 * 4),(int)auStack_30);
          uStack_20 = 0x51;
          iVar6 = *(int *)(iStack_c + uVar4 * 4);
        }
        uStack_18 = 1;
        FUN_006e5970(2,iVar6,(int)auStack_30);
        bVar3 = (char)uStack_8 + 1;
        uStack_8 = CONCAT31(uStack_8._1_3_,bVar3);
      } while (bVar3 < uStack_38);
    }
  }
  return;
}

