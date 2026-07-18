
void __thiscall
thunk_FUN_00631c20(void *this,int param_1,int param_2,byte param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  bool bVar9;
  
  if (*(int *)((int)this + 0x6d) != 0) {
    iVar3 = *(int *)(*(int *)((int)this + 0x6d) + 0xc);
    uVar8 = 0;
    if (0 < iVar3) {
      do {
        iVar6 = *(int *)((int)this + 0x6d);
        if (((((uVar8 < *(uint *)(iVar6 + 0xc)) &&
              (puVar7 = (uint *)(*(int *)(iVar6 + 8) * uVar8 + *(int *)(iVar6 + 0x1c)),
              puVar7 != (uint *)0x0)) &&
             (iVar6 = FUN_006aced8(param_1,param_2,puVar7[3],puVar7[4]), iVar6 < (int)puVar7[6])) &&
            (*puVar7 < 8)) && ((DAT_00802a38 == 0 || ((byte)(&DAT_008087e9)[*puVar7 * 0x51] < 8))))
        {
          bVar1 = (byte)*puVar7;
          if (DAT_00808a8f == '\0') {
            if (param_3 == bVar1) {
LAB_00631d60:
              iVar6 = 0;
            }
            else {
              uVar4 = (uint)param_3;
              uVar5 = (uint)bVar1;
              cVar2 = *(char *)((int)&DAT_00808a4f + uVar4 * 8 + uVar5);
              if ((cVar2 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar4) == '\0')) {
                iVar6 = -2;
              }
              else if ((cVar2 == '\x01') &&
                      (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar4) == '\0')) {
                iVar6 = -1;
              }
              else if ((cVar2 == '\0') &&
                      (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar4) == '\x01')) {
                iVar6 = 1;
              }
              else {
                if ((cVar2 != '\x01') ||
                   (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar4) != '\x01')) goto LAB_00631d60;
                iVar6 = 2;
              }
            }
            bVar9 = iVar6 < 0;
          }
          else {
            bVar9 = (&DAT_008087ea)[(uint)bVar1 * 0x51] != (&DAT_008087ea)[(uint)param_3 * 0x51];
          }
          if (bVar9) {
            *(undefined4 *)((int)puVar7 + 0x25) = param_5;
            *(byte *)(puVar7 + 8) = 1;
            *(undefined4 *)((int)puVar7 + 0x21) = param_6;
          }
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < iVar3);
    }
  }
  return;
}

