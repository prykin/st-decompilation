
void __thiscall FUN_006799b0(void *this,uint param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  bool bVar6;
  uint local_3c [13];
  uint local_8;
  
  local_8 = *(uint *)((int)this + 0x640);
  if (*(char *)((int)this + 0x644) == '\x01') {
    uVar1 = (ushort)param_1;
    if ((uVar1 < 8) &&
       ((((DAT_00802a38 == 0 || ((byte)(&DAT_008087e9)[(short)uVar1 * 0x51] < 8)) &&
         (uVar4 = (uint)(short)uVar1, uVar4 != local_8)) &&
        (uVar2 = *(uint *)((int)this + 0x5d7), uVar4 != uVar2)))) {
      if (DAT_00808a8f == '\0') {
        iVar3 = thunk_FUN_005822e0(&DAT_00807620,(byte)param_1,(byte)uVar2);
        bVar6 = iVar3 < 0;
      }
      else {
        bVar6 = (&DAT_008087ea)[(uVar2 & 0xff) * 0x51] != (&DAT_008087ea)[(param_1 & 0xff) * 0x51];
      }
      if (bVar6) {
        if (*(uint *)((int)this + 0x649) == uVar4) {
          *(short *)((int)this + 0x64d) = *(short *)((int)this + 0x64d) + 1;
          uVar2 = *(uint *)((int)this + 0x640);
          if (*(char *)((int)&DAT_008087c4 + uVar4 * 0x51 + 3) == '\0') {
            if ((uVar2 < 8) && (*(char *)((int)&DAT_008087c4 + uVar2 * 0x51 + 3) == '\0')) {
              uVar2 = *(int *)((int)this + 0xa4) * 0x41c64e6d + 0x3039;
              *(uint *)((int)this + 0xa4) = uVar2;
              iVar3 = (uVar2 >> 0x10 & 7) + 8;
            }
            else {
              uVar2 = *(int *)((int)this + 0xa4) * 0x41c64e6d + 0x3039;
              *(uint *)((int)this + 0xa4) = uVar2;
              iVar3 = (uVar2 >> 0x10) % 3 + 1;
            }
          }
          else if ((uVar2 < 8) && (*(char *)((int)&DAT_008087c4 + uVar2 * 0x51 + 3) == '\0')) {
            uVar2 = *(int *)((int)this + 0xa4) * 0x41c64e6d + 0x3039;
            *(uint *)((int)this + 0xa4) = uVar2;
            iVar3 = (uVar2 >> 0x10) % 0xb + 0x14;
          }
          else {
            uVar2 = *(int *)((int)this + 0xa4) * 0x41c64e6d + 0x3039;
            *(uint *)((int)this + 0xa4) = uVar2;
            iVar3 = (uVar2 >> 0x10 & 7) + 8;
          }
          if (iVar3 < *(short *)((int)this + 0x64d)) {
            *(uint *)((int)this + 0x640) = uVar4;
            *(uint *)((int)this + 0x649) = uVar4;
            *(undefined2 *)((int)this + 0x64d) = 0;
          }
        }
        else {
          *(uint *)((int)this + 0x649) = uVar4;
          *(undefined2 *)((int)this + 0x64d) = 1;
        }
      }
    }
  }
  local_3c[2] = *(uint *)((int)this + 0x640);
  if (local_3c[2] != local_8) {
    puVar5 = local_3c;
    for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    local_3c[1] = *(undefined4 *)((int)this + 0x6fe);
    local_3c[0] = 0x6a;
    thunk_FUN_0067a020(this,local_3c,-1);
  }
  return;
}

