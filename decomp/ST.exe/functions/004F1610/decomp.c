
void __thiscall FUN_004f1610(void *this,char param_1)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 local_9c [19];
  undefined1 local_50 [16];
  undefined4 local_40;
  int local_3c;
  uint local_38;
  undefined4 local_30 [4];
  undefined4 local_20;
  undefined4 *local_1c;
  undefined2 local_18;
  uint local_10;
  int local_c;
  uint local_8;
  
  local_10 = (uint)(param_1 == '\0');
  iVar6 = *(int *)((int)this + local_10 * 4 + 0x2fe);
  if (iVar6 != 0) {
    local_40 = 0x5b;
    SystemClassTy::SendMessage(*(SystemClassTy **)((int)this + 0xc),2,iVar6,(int)local_50);
    local_c = local_3c;
    local_8 = local_8 & 0xffffff00;
    if (local_38 != 0) {
      do {
        uVar4 = local_8;
        iVar6 = local_c;
        puVar5 = local_30;
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
          local_20 = 0x50;
          iVar6 = *(int *)(iVar6 + (uVar4 & 0xff) * 4);
        }
        else {
          uVar4 = uVar4 & 0xff;
          puVar5 = local_9c;
          for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
          }
          local_9c[0] = 8;
          local_20 = 0x5a;
          local_9c[1] = *(undefined4 *)
                         (&DAT_00807e66 +
                         *(int *)((uVar4 + local_10 * 6) * 0x27 + 0x789 + (int)this) * 4);
          local_1c = local_9c;
          SystemClassTy::SendMessage
                    (*(SystemClassTy **)((int)this + 0xc),2,*(int *)(iVar6 + uVar4 * 4),
                     (int)local_30);
          local_20 = 0x51;
          iVar6 = *(int *)(local_c + uVar4 * 4);
        }
        local_18 = 1;
        SystemClassTy::SendMessage(*(SystemClassTy **)((int)this + 0xc),2,iVar6,(int)local_30);
        bVar3 = (char)local_8 + 1;
        local_8 = CONCAT31(local_8._1_3_,bVar3);
      } while (bVar3 < local_38);
    }
  }
  return;
}

