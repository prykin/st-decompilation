
void __thiscall FUN_005007a0(void *this,byte param_1,undefined1 param_2)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  byte bVar10;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar11;
  undefined4 local_58;
  undefined4 local_54 [16];
  byte local_14;
  undefined3 uStack_13;
  void *local_10;
  undefined4 *local_c;
  undefined1 local_5;
  
  if (DAT_00808784 == 0) {
    if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      if (param_1 == 0) {
        if (*(char *)((int)this + 0xb80) == '\0') {
          return;
        }
        if (*(char *)((int)this + 0xb63) == '\0') {
          return;
        }
        if (*(char *)((int)this + 0xb63) == '\x03') {
          return;
        }
      }
      else {
        if (*(char *)((int)this + 0xc6e) == '\0') {
          return;
        }
        cVar1 = *(char *)((int)this + 0xc51);
        if (cVar1 == '\0') {
          return;
        }
        if (cVar1 == '\x03') {
          return;
        }
        if (cVar1 == '\x04') {
          return;
        }
      }
      local_58 = DAT_00858df8;
      DAT_00858df8 = &local_58;
      local_10 = this;
      iVar5 = __setjmp3(local_54,0,unaff_EDI,unaff_ESI);
      pvVar4 = local_10;
      if (iVar5 == 0) {
        puVar11 = (undefined4 *)(uint)param_1;
        bVar10 = *(byte *)((int)(puVar11 + 0xaa) + (int)local_10);
        local_c = puVar11;
        if (bVar10 != 0xff) {
          if (DAT_0080874e == '\x03') {
            if (param_1 == 0) {
              uVar7 = (uint)*(byte *)((int)local_10 + 0x2a8);
              if (*(char *)(uVar7 + 0xb8d + (int)local_10) == '\0') {
                uVar7 = uVar7 + 5;
              }
              uVar9 = (uint)*(byte *)((int)local_10 + 0x2a8);
              pbVar6 = (byte *)FUN_0070b3a0(*(int *)((int)local_10 + 0x2a2),uVar7);
              iVar5 = (5 - uVar9) * 0xb;
              puVar11 = *(undefined4 **)((int)pvVar4 + 0x18c);
            }
            else {
              uVar7 = (uint)bVar10;
              if (*(char *)(uVar7 + 0xc7b + (int)local_10) == '\0') {
                iVar5 = uVar7 + 0x14;
              }
              else {
                iVar5 = uVar7 + 0x19;
              }
              uVar9 = (uint)*(byte *)((int)(puVar11 + 0xaa) + (int)local_10);
              pbVar6 = (byte *)FUN_0070b3a0(*(int *)((int)local_10 + 0x2a2),iVar5);
              puVar11 = *(undefined4 **)((int)pvVar4 + 0x194);
              iVar5 = uVar9 * 0xb + 0x87;
            }
            thunk_FUN_00540760(puVar11,iVar5,uVar9 * 0xb + 0xb,'\x06',pbVar6);
            bVar10 = (-(param_1 != 0) & 2U) + 3;
            _local_14 = CONCAT31(uStack_13,bVar10);
            puVar11 = local_c;
            if (bVar10 < 0xb) {
              uVar9 = (uint)bVar10;
              uVar7 = *(uint *)((int)pvVar4 + uVar9 * 4 + 0x148);
              if (-1 < (int)uVar7) {
                FUN_006b3640(DAT_008075a8,uVar7,0xffffffff,*(uint *)((int)pvVar4 + uVar9 * 4 + 0x3c)
                             ,*(uint *)((int)pvVar4 + uVar9 * 4 + 0x94));
                puVar11 = local_c;
              }
            }
          }
          else {
            if (param_1 == 0) {
              cVar1 = *(char *)(*(byte *)((int)local_10 + 0x2a8) + 0xb8d + (int)local_10);
              local_c = *(undefined4 **)((int)local_10 + 0x188);
            }
            else {
              cVar1 = *(char *)(bVar10 + 0xc7b + (int)local_10);
              local_c = *(undefined4 **)((int)local_10 + 0x198);
            }
            pbVar6 = (byte *)FUN_0070b3a0(*(int *)((int)local_10 + 0x2a2),
                                          (-(uint)(cVar1 != '\0') & 0xfffffffe) + 2);
            thunk_FUN_00540760(local_c,7,
                               (uint)*(byte *)((int)(puVar11 + 0xaa) + (int)pvVar4) * 0x1d + 6,
                               '\x01',pbVar6);
            bVar10 = (-(param_1 != 0) & 4U) + 2;
            _local_14 = CONCAT31(uStack_13,bVar10);
            if (bVar10 < 0xb) {
              uVar9 = (uint)bVar10;
              uVar7 = *(uint *)((int)pvVar4 + uVar9 * 4 + 0x148);
              if (-1 < (int)uVar7) {
                FUN_006b3640(DAT_008075a8,uVar7,0xffffffff,*(uint *)((int)pvVar4 + uVar9 * 4 + 0x3c)
                             ,*(uint *)((int)pvVar4 + uVar9 * 4 + 0x94));
              }
            }
          }
        }
        *(undefined1 *)((int)puVar11 + 0x2a6U + (int)pvVar4) = 0;
        *(undefined1 *)((int)(puVar11 + 0xaa) + (int)pvVar4) = param_2;
        *(undefined4 *)((int)pvVar4 + (int)puVar11 * 4 + 0x2aa) = 0;
        thunk_FUN_005252c0(0xb4);
        local_5 = param_2;
        thunk_FUN_0054edf0((undefined4 *)0x15,(undefined4 *)&local_5,0,0xffffffff);
        DAT_00858df8 = (undefined4 *)local_58;
        return;
      }
      DAT_00858df8 = (undefined4 *)local_58;
      iVar8 = FUN_006ad4d0(s_E____titans_Andrey_cpanel1_cpp_007c23cc,0x1fb,0,iVar5,&DAT_007a4ccc);
      if (iVar8 != 0) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FUN_006a5e40(iVar5,0,0x7c23cc,0x1fb);
    }
  }
  return;
}

