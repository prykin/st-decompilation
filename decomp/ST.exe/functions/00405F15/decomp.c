
void __thiscall thunk_FUN_0055b7f0(void *this,int param_1,undefined *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  bool bVar5;
  
  if ((((*(int *)((int)this + 0x114) != 0) && (param_2 < (undefined *)0x8)) &&
      ((DAT_00802a38 == 0 || ((byte)(&DAT_008087e9)[(int)param_2 * 0x51] < 8)))) &&
     (param_2 != (undefined *)(uint)DAT_0080874d)) {
    if (param_1 == 0) {
      if ((param_2 + 0xfc)[(int)this] == '\0') {
        return;
      }
    }
    else {
      if ((param_2 + 0xfc)[(int)this] == '\x01') {
        return;
      }
      (param_2 + 0xfc)[(int)this] = 1;
    }
    iVar2 = *(int *)((int)this + 0x110);
    uVar4 = 0;
    if (0 < *(int *)(iVar2 + 0xc)) {
      bVar5 = *(int *)(iVar2 + 0xc) != 0;
      do {
        if (bVar5) {
          pcVar1 = (char *)(*(int *)(iVar2 + 8) * uVar4 + *(int *)(iVar2 + 0x1c));
        }
        else {
          pcVar1 = (char *)0x0;
        }
        puVar3 = (undefined *)(uint)(byte)pcVar1[1];
        if (puVar3 == param_2) {
          if (*pcVar1 == '\0') {
            if (param_1 == 0) {
              thunk_FUN_00559110(this,(int)*(short *)(pcVar1 + 2),
                                 (undefined *)(int)*(short *)(pcVar1 + 4),(int)pcVar1[6],
                                 (uint)puVar3,(uint)(byte)pcVar1[7],*(int *)(pcVar1 + 8),0x4001);
            }
            else {
              thunk_FUN_00558dc0(this,(int)*(short *)(pcVar1 + 2),(int)*(short *)(pcVar1 + 4),
                                 (undefined *)(int)pcVar1[6],(uint)puVar3,
                                 (undefined *)(uint)(byte)pcVar1[7],*(int *)(pcVar1 + 8),0x6009);
            }
          }
          else if (*pcVar1 == '\x01') {
            if (param_1 == 0) {
              thunk_FUN_00559620(this,(int)*(short *)(pcVar1 + 2),(int)*(short *)(pcVar1 + 4),
                                 pcVar1[6],puVar3,(uint)(byte)pcVar1[7],*(undefined4 *)(pcVar1 + 8),
                                 2);
            }
            else {
              thunk_FUN_005594a0(this,(int)*(short *)(pcVar1 + 2),(int)*(short *)(pcVar1 + 4),
                                 pcVar1[6],puVar3,(uint)(byte)pcVar1[7],*(undefined4 *)(pcVar1 + 8),
                                 2);
            }
          }
        }
        iVar2 = *(int *)((int)this + 0x110);
        uVar4 = uVar4 + 1;
        bVar5 = uVar4 < *(uint *)(iVar2 + 0xc);
      } while ((int)uVar4 < (int)*(uint *)(iVar2 + 0xc));
    }
    if (param_1 == 0) {
      (param_2 + 0xfc)[(int)this] = 0;
    }
  }
  return;
}

