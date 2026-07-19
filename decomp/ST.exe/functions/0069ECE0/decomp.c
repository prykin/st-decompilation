
void __thiscall FUN_0069ece0(void *this,int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int local_19c [100];
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_19c[0] = 0x3f2;
  local_19c[1] = 0x3ed;
  local_19c[2] = 0x3ec;
  local_19c[3] = 0x3f1;
  local_19c[4] = 0x3f2;
  local_19c[5] = 0x3ed;
  local_19c[6] = 0x3eb;
  local_19c[7] = 0x3f2;
  local_19c[8] = 0x3e9;
  local_19c[9] = 0x3ed;
  local_19c[10] = 0x3ef;
  local_19c[0xb] = 0x3ed;
  local_19c[0xc] = 0x3ee;
  local_19c[0xd] = 0x3f1;
  local_19c[0xe] = 0x3f2;
  local_19c[0xf] = 0x3ed;
  local_19c[0x10] = 0x3eb;
  local_19c[0x11] = 0x3f2;
  local_19c[0x12] = 0x3ee;
  local_19c[0x13] = 0x3ed;
  local_19c[0x14] = 0x3ed;
  local_19c[0x15] = 0x3ed;
  local_19c[0x16] = 0x3ed;
  local_19c[0x17] = 0x3f1;
  local_19c[0x18] = 0x3ed;
  local_19c[0x19] = 0x3ed;
  local_19c[0x1a] = 0x3ed;
  local_19c[0x1b] = 0x3ed;
  local_19c[0x1c] = 0x3ed;
  local_19c[0x1d] = 0x3ed;
  local_19c[0x1e] = 0x3ed;
  local_19c[0x1f] = 0x3ed;
  local_19c[0x20] = 0x3ed;
  local_19c[0x21] = 0x3f1;
  local_19c[0x22] = 0x3ed;
  local_19c[0x23] = 0x3ed;
  local_19c[0x24] = 0x3ed;
  local_19c[0x25] = 0x3ed;
  local_19c[0x26] = 0x3ed;
  local_19c[0x27] = 0x3ed;
  local_19c[0x28] = 0x3ed;
  local_19c[0x29] = 0x3ed;
  local_19c[0x2a] = 0x3ed;
  local_19c[0x2b] = 0x3f1;
  local_19c[0x2c] = 0x3ed;
  local_19c[0x2d] = 0x3ed;
  local_19c[0x2e] = 0x3ed;
  local_19c[0x2f] = 0x3ed;
  local_19c[0x30] = 0x3ed;
  local_19c[0x31] = 0x3ed;
  local_19c[0x32] = 0x3ee;
  local_19c[0x33] = 0x3ed;
  local_19c[0x34] = 0x3ee;
  local_19c[0x35] = 0x3f1;
  local_19c[0x36] = 0x3ee;
  local_19c[0x37] = 0x3ed;
  local_19c[0x38] = 0x3ee;
  local_19c[0x39] = 0x3ee;
  local_19c[0x3a] = 0x3ee;
  local_19c[0x3b] = 0x3ed;
  local_19c[0x3c] = 0x3f2;
  local_19c[0x3d] = 0x3ed;
  local_19c[0x3e] = 0x3ec;
  local_19c[0x3f] = 0x3f1;
  local_19c[0x40] = 0x3f2;
  local_19c[0x41] = 0x3ed;
  local_19c[0x42] = 0x3eb;
  local_19c[0x43] = 0x3f2;
  local_19c[0x44] = 0x3ee;
  local_19c[0x45] = 0x3ed;
  local_19c[0x46] = 0x3f2;
  local_19c[0x47] = 0x3ed;
  local_19c[0x49] = 0x3f1;
  local_19c[0x4a] = 0x3f2;
  local_19c[0x4b] = 0x3ed;
  local_19c[0x4d] = 0x3f2;
  local_19c[0x4f] = 0x3ed;
  local_19c[0x50] = 0x3f2;
  local_19c[0x51] = 0x3ed;
  local_19c[0x53] = 0x3f1;
  local_19c[0x54] = 0x3f2;
  local_19c[0x55] = 0x3ed;
  local_19c[0x57] = 0x3f2;
  local_19c[0x59] = 0x3ed;
  local_19c[0x48] = 0x3ec;
  local_19c[0x4c] = 0x3eb;
  local_19c[0x4e] = 0x3e9;
  local_19c[0x52] = 0x3ec;
  local_19c[0x56] = 0x3eb;
  local_19c[0x58] = 0x3e9;
  piVar5 = local_19c + 0x5a;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
  }
  thunk_FUN_006a0a70(this);
  if (0 < param_1) {
    do {
      uVar1 = Library::MSVCRT::FUN_0072e6c0();
      iVar3 = (int)uVar1 % (*(int *)((int)this + 0x5833) * 100 + -99);
      uVar1 = Library::MSVCRT::FUN_0072e6c0();
      local_c = (int)uVar1 % (*(int *)((int)this + 0x5837) * 100 + -99);
      uVar2 = thunk_FUN_00695010(this,iVar3 / 200,local_c / 200,param_2);
      uVar1 = Library::MSVCRT::FUN_0072e6c0();
      iVar4 = (int)uVar1 % 10;
      switch(uVar2) {
      case 1:
        local_8 = local_19c[iVar4];
        break;
      case 2:
        local_8 = local_19c[iVar4 + 10];
        break;
      case 3:
        local_8 = local_19c[iVar4 + 0x14];
        break;
      case 4:
        local_8 = local_19c[iVar4 + 0x1e];
        break;
      case 5:
        local_8 = local_19c[iVar4 + 0x28];
        break;
      case 6:
        local_8 = local_19c[iVar4 + 0x32];
        break;
      case 7:
        local_8 = local_19c[iVar4 + 0x3c];
        break;
      case 8:
        local_8 = local_19c[iVar4 + 0x46];
        break;
      case 9:
        local_8 = local_19c[iVar4 + 0x50];
      }
      iVar4 = local_8;
      uVar1 = thunk_FUN_006950f0(local_8);
      thunk_FUN_006a0ae0(this,iVar3,local_c,0,iVar4,uVar1);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  thunk_FUN_006a0c00(this);
  return;
}

