
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005DB4F0 -> 005DA130 @ 005DB713 */

void __cdecl FUN_005da130(ushort *param_1,undefined *param_2,BYTE param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 local_78 [5];
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  BYTE local_61;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  char local_5c [32];
  byte local_3c [56];

  puVar6 = local_78;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_61 = param_3;
  uVar3 = 0xffffffff;
  pcVar5 = s_Verdana_007c1bc4;
  do {
    pcVar7 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  local_78[0] = 0xfffffff0;
  local_78[1] = 0;
  local_78[2] = 0;
  local_78[3] = 0;
  local_78[4] = 400;
  local_64 = 0;
  local_63 = 0;
  local_62 = 0;
  local_60 = 3;
  local_5f = 2;
  local_5e = 1;
  local_5d = 0x22;
  local_3c[0x20] = 0;
  pcVar5 = pcVar7 + -uVar3;
  pcVar7 = local_5c;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar7 = pcVar7 + 4;
  }
  local_3c[0x25] = 0xfa;
  local_3c[0x28] = 0xfa;
  local_3c[0x29] = 0xfa;
  local_3c[0x2b] = 0xfb;
  local_3c[0x2c] = 0xfb;
  local_3c[0x2e] = 6;
  local_3c[0x2f] = 6;
  local_3c[0x21] = 0x13;
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar7 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  }
  local_3c[0x22] = 2;
  local_3c[0x23] = 2;
  local_3c[0x24] = 0x14;
  local_3c[0x26] = 0x16;
  local_3c[0x27] = 0x15;
  local_3c[0x2a] = 0x10;
  local_3c[0x2d] = 0x33;
  local_3c[0x30] = 0xd;
  local_3c[0x31] = 0xfe;
  local_3c[0x32] = 0xfe;
  local_3c[0x33] = 0xe;
  local_3c[0x34] = 0xfe;
  local_3c[0x35] = 0xfe;
  local_3c[0] = 0x27;
  local_3c[1] = 0x28;
  local_3c[2] = 0x29;
  local_3c[3] = 0x2c;
  local_3c[4] = 0x2d;
  local_3c[5] = 0x2e;
  local_3c[6] = 0x41;
  local_3c[7] = 0x42;
  local_3c[8] = 0x43;
  local_3c[9] = 0x44;
  local_3c[10] = 0x45;
  local_3c[0xb] = 0x46;
  local_3c[0xc] = 0x47;
  local_3c[0xd] = 0x48;
  local_3c[0xe] = 0x49;
  local_3c[0xf] = 0x4a;
  local_3c[0x10] = 0x4b;
  local_3c[0x11] = 0x4c;
  local_3c[0x12] = 0x4d;
  local_3c[0x13] = 0x4e;
  local_3c[0x14] = 0x4f;
  local_3c[0x15] = 0x50;
  local_3c[0x16] = 0x51;
  local_3c[0x17] = 0x52;
  local_3c[0x18] = 0x53;
  local_3c[0x19] = 0x54;
  local_3c[0x1a] = 0x55;
  local_3c[0x1b] = 0x56;
  local_3c[0x1c] = 0x57;
  local_3c[0x1d] = 0x58;
  local_3c[0x1e] = 0x59;
  local_3c[0x1f] = 0x5a;
  ccFntTy::operator((ccFntTy *)local_78,0x19d,(LOGFONTA *)local_78,(uint *)0x0,local_3c,(int)param_1
                    ,local_3c + 0x20,7,3,1,1,0x100011c,param_2);
  return;
}

