
uint __cdecl FUN_006d7d9a(AnonShape_006D7D9A_A5401417 *param_1)

{
  int iVar1;
  char cVar2;
  code *pcVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined1 *puVar15;
  int local_52;
  int local_3e;
  uint local_3a;
  undefined4 local_36;
  undefined1 local_2b;
  uint local_2a;
  int local_26;
  uint local_16;
  byte local_12;
  byte local_11 [5];
  undefined4 *local_c;
  undefined4 *local_8;

  pcVar3 = (code *)param_1->field_0042;
  pcVar4 = (code *)param_1->field_0046;
  iVar5 = param_1->field_0022;
  iVar6 = param_1->field_0026;
  cVar2 = param_1->field_0018;
  param_1->field_0017 = 0;
  local_52 = 0;
  local_2a = 0;
  local_2b = 0;
  local_36 = 0;
  local_3a = 1;
  if (cVar2 != '\0') {
    local_3a = 8;
  }
  local_8 = (undefined4 *)thunk_FUN_006a3be0(iVar5 + 0x4101);
  uVar8 = 0xfffffffe;
  if ((local_8 != (undefined4 *)0x0) && (uVar8 = (*pcVar3)(param_1,local_11,1), uVar8 == 1)) {
    if ((local_11[0] < 2) || (9 < local_11[0])) {
LAB_006d7faf:
      uVar8 = 0xfffffffb;
    }
    else {
      uVar9 = 1 << (local_11[0] & 0x1f);
      local_26 = uVar9 << 1;
      uVar10 = (uVar9 & 0x7fffffff) + 2;
      local_12 = local_11[0] + 1;
      local_c = local_8 + 0x1040;
      local_3e = iVar5;
      local_16 = uVar10;
      while (uVar11 = FUN_006d8036(), uVar8 = uVar11, -1 < (int)uVar11) {
        if (uVar11 == (uVar9 & 0x7fffffff) + 1) {
          uVar8 = 0;
          goto LAB_006d7fc6;
        }
        if (uVar11 == uVar9) {
          local_12 = local_11[0] + 1;
          local_26 = 1 << (local_12 & 0x1f);
          local_2a = uVar11;
          local_16 = uVar10;
        }
        else {
          puVar15 = (undefined1 *)((int)local_8 + 0xfff);
          if (local_2a == uVar9) {
            local_2b = (undefined1)uVar11;
            *puVar15 = local_2b;
            puVar15 = (undefined1 *)((int)local_8 + 0xffe);
          }
          else {
            if ((int)local_16 <= (int)uVar11) {
              if ((int)local_16 < (int)uVar11) goto LAB_006d7faf;
              *puVar15 = local_2b;
              puVar15 = (undefined1 *)((int)local_8 + 0xffe);
              uVar8 = local_2a;
            }
            for (; (int)uVar10 <= (int)uVar8;
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                uVar8 = (uint)*(ushort *)((int)local_8 + uVar8 * 2 + 0x2000)) {
              *puVar15 = *(undefined1 *)((int)local_8 + uVar8 + 0x1000);
              puVar15 = puVar15 + -1;
            }
            local_2b = (undefined1)uVar8;
            *puVar15 = local_2b;
            puVar15 = puVar15 + -1;
            *(undefined1 *)((int)local_8 + local_16 + 0x1000) = local_2b;
            *(short *)((int)local_8 + local_16 * 2 + 0x2000) = (short)local_2a;
            local_16 = (local_16 & 0x7fffffff) + 1;
            if ((local_26 <= (int)local_16) && ((char)local_12 < '\f')) {
              local_26 = local_26 << 1;
              local_12 = local_12 + 1;
            }
          }
          puVar15 = puVar15 + 1;
          iVar14 = (int)local_8 + (0x1000 - (int)puVar15);
          while (local_2a = uVar11, iVar14 != 0) {
            iVar12 = iVar14;
            if (local_3e < iVar14) {
              iVar12 = local_3e;
            }
            iVar14 = iVar14 - iVar12;
            iVar1 = local_3e - iVar12;
            for (iVar13 = iVar12; iVar13 != 0; iVar13 = iVar13 + -1) {
              *(undefined1 *)local_c = *puVar15;
              puVar15 = puVar15 + 1;
              local_c = (undefined4 *)((int)local_c + 1);
            }
            bVar7 = local_3e < iVar12;
            local_3e = iVar1;
            if (iVar1 == 0 || bVar7) {
              local_c = local_8 + 0x1040;
              uVar8 = (*pcVar4)(param_1,local_c,local_36);
              if (uVar8 != 0) goto LAB_006d7fb4;
              local_36 = local_36 + local_3a;
              local_3e = iVar5;
              if ((cVar2 != '\0') && (iVar6 <= local_36)) {
                local_52 = local_52 + 1;
                uVar8 = (uint)local_36 >> 0x10;
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_36 = CONCAT22((short)uVar8,
                                    (short)(char)*(undefined2 *)(&DAT_006d7d90 + local_52 * 2));
                local_3a = (uint)(ushort)(short)(char)((ushort)*(undefined2 *)
                                                                (&DAT_006d7d90 + local_52 * 2) >> 8)
                ;
              }
            }
          }
        }
      }
    }
  }
LAB_006d7fb4:
  if ((uVar8 != 0xffffffff) && (-1 < (int)uVar8)) {
    uVar8 = 0xfffffffb;
  }
LAB_006d7fc6:
  Library::MSVCRT::thunk_FUN_006a4950(local_8);
  return uVar8;
}

