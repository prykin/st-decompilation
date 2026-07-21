
void __thiscall FUN_0056abc0(void *this,char *param_1)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  undefined *puVar5;
  char *pcVar6;
  bool bVar7;
  
  if (param_1 == (char *)0x0) {
    if (*(char *)((int)this + 0x1474) != '\0') {
      if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
        bVar4 = 0;
        puVar5 = (undefined *)0x0;
        pcVar6 = (char *)((int)this + 0x11c9);
        do {
          if ((*pcVar6 != -1) && (bVar4 != *(byte *)((int)this + 0x112d))) {
            thunk_FUN_0055b7f0(g_visibleClass_00802A88,0,puVar5);
          }
          bVar4 = bVar4 + 1;
          puVar5 = puVar5 + 1;
          pcVar6 = pcVar6 + 0x51;
        } while (bVar4 < 8);
      }
      *(undefined1 *)((int)this + 0x1474) = 0;
    }
  }
  else if ((*(char *)((int)this + 0x1474) == '\0') &&
          (*(undefined1 *)((int)this + 0x1474) = 1, g_visibleClass_00802A88 != (VisibleClassTy *)0x0
          )) {
    param_1 = (char *)((int)this + 0x11c9);
    bVar3 = 0;
    puVar5 = (undefined *)0x0;
    pcVar6 = &DAT_008087ea;
    bVar4 = DAT_0080874d;
    do {
      if ((*param_1 != -1) && (bVar3 != *(byte *)((int)this + 0x112d))) {
        if (DAT_00808a8f == '\0') {
          if (bVar4 == bVar3) {
LAB_0056acb1:
            iVar2 = 0;
          }
          else {
            cVar1 = puVar5[(int)(g_playerRelationMatrix + bVar4)];
            if ((cVar1 == '\0') && (g_playerRelationMatrix[(int)puVar5][bVar4] == 0)) {
              iVar2 = -2;
            }
            else if ((cVar1 == '\x01') && (g_playerRelationMatrix[(int)puVar5][bVar4] == 0)) {
              iVar2 = -1;
            }
            else if ((cVar1 == '\0') && (g_playerRelationMatrix[(int)puVar5][bVar4] == 1)) {
              iVar2 = 1;
            }
            else {
              if ((cVar1 != '\x01') || (g_playerRelationMatrix[(int)puVar5][bVar4] != 1))
              goto LAB_0056acb1;
              iVar2 = 2;
            }
          }
          bVar7 = iVar2 < 0;
        }
        else {
          bVar7 = *pcVar6 != (&DAT_008087ea)[(uint)bVar4 * 0x51];
          bVar4 = DAT_0080874d;
        }
        if (!bVar7) {
          thunk_FUN_0055b7f0(g_visibleClass_00802A88,1,puVar5);
          bVar4 = DAT_0080874d;
        }
      }
      bVar3 = bVar3 + 1;
      puVar5 = puVar5 + 1;
      param_1 = param_1 + 0x51;
      pcVar6 = pcVar6 + 0x51;
      if (7 < bVar3) {
        return;
      }
    } while( true );
  }
  return;
}

