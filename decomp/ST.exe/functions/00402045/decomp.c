
void __thiscall
thunk_FUN_0051fac0(void *this,char *param_1,byte param_2,char param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 *puVar8;
  
  if (*(byte *)((int)this + 0x11c) <= param_2) {
    if (param_1 != (char *)0x0) {
      uVar3 = 0xffffffff;
      do {
        pcVar6 = param_1;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar6 = param_1 + 1;
        cVar1 = *param_1;
        param_1 = pcVar6;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      pcVar6 = pcVar6 + -uVar3;
      pcVar7 = (char *)((int)this + 0x18);
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar7 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      }
      *(byte *)((int)this + 0x11c) = param_2;
      *(byte *)((int)this + 0x11d) = param_3 - 1U;
      if (1 < (byte)(param_3 - 1U)) {
        *(undefined1 *)((int)this + 0x11d) = 0;
      }
      *(undefined4 *)((int)this + 0x126) = param_4;
      uVar2 = FUN_006e51b0(*(int *)((int)this + 0x10));
      *(undefined4 *)((int)this + 0x122) = uVar2;
      *(undefined4 *)((int)this + 0x12e) = 1;
      HelpStringTy::OutStr(this);
      return;
    }
    puVar8 = (undefined4 *)((int)this + 0x18);
    for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    *(undefined4 *)((int)this + 0x12e) = 0;
    HelpStringTy::OutStr(this);
  }
  return;
}

