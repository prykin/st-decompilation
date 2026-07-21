
void __thiscall FUN_0056aa00(void *this,byte param_1,char param_2)

{
  char *pcVar1;
  VisibleClassTy *this_00;
  byte bVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *local_8;

  if (*(char *)((int)this + 0x146f) != '\0') {
    puVar4 = (undefined *)(uint)param_1;
    pcVar1 = (char *)((int)puVar4 * 0x51 + 0x11ca + (int)this);
    if (*pcVar1 != param_2) {
      if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
        if (param_1 == *(byte *)((int)this + 0x112d)) {
          bVar2 = 0;
          local_8 = (undefined *)0x0;
          pcVar3 = (char *)((int)this + 0x11ca);
          do {
            if (((pcVar3[-1] != -1) && (bVar2 != param_1)) && (*pcVar1 == *pcVar3)) {
              thunk_FUN_0055b7f0(g_visibleClass_00802A88,0,local_8);
            }
            bVar2 = bVar2 + 1;
            local_8 = local_8 + 1;
            pcVar3 = pcVar3 + 0x51;
          } while (bVar2 < 8);
        }
        else if (*pcVar1 ==
                 *(char *)((uint)*(byte *)((int)this + 0x112d) * 0x51 + 0x11ca + (int)this)) {
          thunk_FUN_0055b7f0(g_visibleClass_00802A88,0,puVar4);
        }
      }
      *pcVar1 = param_2;
      if ((g_visibleClass_00802A88 != (VisibleClassTy *)0x0) &&
         (*(char *)((int)this + 0x1474) != '\0')) {
        if (param_1 == *(byte *)((int)this + 0x112d)) {
          bVar2 = 0;
          puVar4 = (undefined *)0x0;
          pcVar3 = (char *)((int)this + 0x11ca);
          this_00 = g_visibleClass_00802A88;
          do {
            if (((pcVar3[-1] != -1) && (bVar2 != param_1)) && (*pcVar1 == *pcVar3)) {
              thunk_FUN_0055b7f0(this_00,1,puVar4);
              this_00 = g_visibleClass_00802A88;
            }
            bVar2 = bVar2 + 1;
            puVar4 = puVar4 + 1;
            pcVar3 = pcVar3 + 0x51;
          } while (bVar2 < 8);
          return;
        }
        if (param_2 == *(char *)((uint)*(byte *)((int)this + 0x112d) * 0x51 + 0x11ca + (int)this)) {
          thunk_FUN_0055b7f0(g_visibleClass_00802A88,1,puVar4);
        }
      }
    }
  }
  return;
}

