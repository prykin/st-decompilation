
void __thiscall FUN_0056abc0(void *this,char *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  undefined *puVar6;
  char *pcVar7;
  bool bVar8;
  
  if (param_1 == (char *)0x0) {
    if (*(char *)((int)this + 0x1474) != '\0') {
      if (DAT_00802a88 != (void *)0x0) {
        bVar5 = 0;
        puVar6 = (undefined *)0x0;
        pcVar7 = (char *)((int)this + 0x11c9);
        do {
          if ((*pcVar7 != -1) && (bVar5 != *(byte *)((int)this + 0x112d))) {
            thunk_FUN_0055b7f0(DAT_00802a88,0,puVar6);
          }
          bVar5 = bVar5 + 1;
          puVar6 = puVar6 + 1;
          pcVar7 = pcVar7 + 0x51;
        } while (bVar5 < 8);
      }
      *(undefined1 *)((int)this + 0x1474) = 0;
    }
  }
  else if ((*(char *)((int)this + 0x1474) == '\0') &&
          (*(undefined1 *)((int)this + 0x1474) = 1, DAT_00802a88 != (void *)0x0)) {
    param_1 = (char *)((int)this + 0x11c9);
    bVar4 = 0;
    puVar6 = (undefined *)0x0;
    pcVar7 = &DAT_008087ea;
    bVar5 = DAT_0080874d;
    do {
      if ((*param_1 != -1) && (bVar4 != *(byte *)((int)this + 0x112d))) {
        if (DAT_00808a8f == '\0') {
          if (bVar5 == bVar4) {
LAB_0056acb1:
            iVar3 = 0;
          }
          else {
            uVar2 = (uint)bVar5;
            cVar1 = puVar6[(int)(&DAT_00808a4f + uVar2 * 2)];
            if ((cVar1 == '\0') && (*(char *)((int)&DAT_00808a4f + (int)puVar6 * 8 + uVar2) == '\0')
               ) {
              iVar3 = -2;
            }
            else if ((cVar1 == '\x01') &&
                    (*(char *)((int)&DAT_00808a4f + (int)puVar6 * 8 + uVar2) == '\0')) {
              iVar3 = -1;
            }
            else if ((cVar1 == '\0') &&
                    (*(char *)((int)&DAT_00808a4f + (int)puVar6 * 8 + uVar2) == '\x01')) {
              iVar3 = 1;
            }
            else {
              if ((cVar1 != '\x01') ||
                 (*(char *)((int)&DAT_00808a4f + (int)puVar6 * 8 + uVar2) != '\x01'))
              goto LAB_0056acb1;
              iVar3 = 2;
            }
          }
          bVar8 = iVar3 < 0;
        }
        else {
          bVar8 = *pcVar7 != (&DAT_008087ea)[(uint)bVar5 * 0x51];
          bVar5 = DAT_0080874d;
        }
        if (!bVar8) {
          thunk_FUN_0055b7f0(DAT_00802a88,1,puVar6);
          bVar5 = DAT_0080874d;
        }
      }
      bVar4 = bVar4 + 1;
      puVar6 = puVar6 + 1;
      param_1 = param_1 + 0x51;
      pcVar7 = pcVar7 + 0x51;
      if (7 < bVar4) {
        return;
      }
    } while( true );
  }
  return;
}

