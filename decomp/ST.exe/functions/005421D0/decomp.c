
void __cdecl FUN_005421d0(int param_1,undefined *param_2,BYTE param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 local_90 [5];
  undefined1 local_7c;
  undefined1 local_7b;
  undefined1 local_7a;
  BYTE local_79;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  char local_74 [32];
  byte local_54 [60];
  byte local_18 [20];

  puVar6 = local_90;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_79 = param_3;
  uVar3 = 0xffffffff;
  pcVar5 = s_Small_Fonts_007c1bb4;
  do {
    pcVar7 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  local_90[0] = 0xfffffff8;
  local_90[1] = 0;
  local_90[2] = 0;
  local_90[3] = 0;
  local_90[4] = 400;
  local_7c = 0;
  local_7b = 0;
  local_7a = 0;
  local_78 = 1;
  local_77 = 2;
  local_76 = 1;
  local_75 = 0x22;
  pcVar5 = pcVar7 + -uVar3;
  pcVar7 = local_74;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar7 = pcVar7 + 4;
  }
  local_18[0] = 0;
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar7 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  }
  local_18[2] = 0x46;
  local_18[1] = 0x3f;
  local_18[3] = 0x28;
  local_18[4] = 0x29;
  local_18[5] = 0x43;
  local_18[6] = 0x43;
  local_18[7] = 0x45;
  local_18[8] = 0x47;
  local_18[9] = 0x28;
  local_18[10] = 0x28;
  local_18[0xb] = 0x28;
  local_18[0xc] = 0x28;
  local_18[0xd] = 0x3d;
  local_18[0xe] = 0x41;
  local_18[0xf] = 0x3f;
  local_18[0x10] = 0x3f;
  local_18[0x11] = 0x74;
  local_18[0x12] = 0x74;
  local_54[0] = 0x20;
  local_54[1] = 0x21;
  local_54[2] = 0x22;
  local_54[3] = 0x23;
  local_54[4] = 0x25;
  local_54[5] = 0x26;
  local_54[6] = 0x27;
  local_54[7] = 0x28;
  local_54[8] = 0x29;
  local_54[9] = 0x2c;
  local_54[10] = 0x2d;
  local_54[0xb] = 0x2e;
  local_54[0xc] = 0x2f;
  local_54[0xd] = 0x30;
  local_54[0xe] = 0x31;
  local_54[0xf] = 0x32;
  local_54[0x10] = 0x33;
  local_54[0x11] = 0x34;
  local_54[0x12] = 0x35;
  local_54[0x13] = 0x36;
  local_54[0x14] = 0x37;
  local_54[0x15] = 0x38;
  local_54[0x1a] = 0x3f;
  local_54[0x16] = 0x39;
  local_54[0x17] = 0x3a;
  local_54[0x18] = 0x3d;
  local_54[0x19] = 0x3e;
  local_54[0x1b] = 0x41;
  local_54[0x1c] = 0x42;
  local_54[0x1d] = 0x43;
  local_54[0x1e] = 0x44;
  local_54[0x1f] = 0x45;
  local_54[0x20] = 0xd;
  local_54[0x21] = 10;
  local_54[0x22] = 0x46;
  local_54[0x23] = 0x47;
  local_54[0x24] = 0x48;
  local_54[0x25] = 0x49;
  local_54[0x26] = 0x4a;
  local_54[0x27] = 0x4b;
  local_54[0x28] = 0x4c;
  local_54[0x29] = 0x4d;
  local_54[0x2a] = 0x4e;
  local_54[0x2b] = 0x4f;
  local_54[0x2c] = 0x50;
  local_54[0x2d] = 0x51;
  local_54[0x2e] = 0x52;
  local_54[0x2f] = 0x53;
  local_54[0x30] = 0x54;
  local_54[0x31] = 0x55;
  local_54[0x32] = 0x56;
  local_54[0x33] = 0x57;
  local_54[0x34] = 0x58;
  local_54[0x35] = 0x59;
  local_54[0x36] = 0x5a;
  local_54[0x37] = 0x5c;
  local_54[0x38] = 0x7c;
  local_54[0x39] = 0x7e;
  local_54[0x3a] = 0x2a;
  ccFntTy::operator((ccFntTy *)local_90,0x19d,(LOGFONTA *)local_90,(uint *)0x0,local_54,param_1,
                    local_18,3,6,1,0,0x10021c,param_2);
  return;
}

