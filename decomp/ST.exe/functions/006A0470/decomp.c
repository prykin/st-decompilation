
void __fastcall FUN_006a0470(AnonShape_006A0470_E995C390 *param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  AnonNested_006A0470_0008_8D4C819A *pAVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  byte local_14;
  int local_10;
  int local_c;
  int local_8;

  pAVar4 = param_1->field_0008;
  iVar6 = pAVar4->field_0000 * 0x28;
  *(int *)&param_1[0x740].field_0x3 = iVar6;
  iVar2 = pAVar4->field_0004 * 0x28;
  *(int *)&param_1[0x740].field_0x7 = iVar2;
  puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(iVar6 * iVar2);
  uVar7 = *(int *)&param_1[0x740].field_0x3 * *(int *)&param_1[0x740].field_0x7;
  *(undefined4 **)((int)&param_1[0x73f].field_0008 + 3) = puVar3;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_10 = 0;
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  pAVar4 = param_1->field_0008;
  if (0 < pAVar4->field_0000) {
    local_8 = 0;
    do {
      iVar2 = 0;
      local_c = 0;
      if (0 < pAVar4->field_0004) {
        do {
          iVar6 = 0;
          do {
            pAVar4 = param_1->field_0008;
            iVar9 = (pAVar4->field_0004 * iVar6 + local_c) * pAVar4->field_0000 + local_10;
            if (((*(short *)((int)&pAVar4[1].field_0004 + iVar9 * 6) != 0) &&
                (uVar1 = *(ushort *)((int)&pAVar4[1].field_0004 + iVar9 * 6), (uVar1 & 0xf00) != 0))
               && (uVar1 != 0x1100)) {
              if ((uVar1 & 0x2000) == 0x2000) {
                uVar8 = (uVar1 & 0xf00) >> 8;
                local_14 = (byte)uVar1;
                pcVar5 = (char *)thunk_FUN_00692530(&param_1[0x255].field_0x7,
                                                    (uint)(local_14 >> 4) * 0xf + -0xe +
                                                    (uint)(local_14 & 0xf),(iVar6 - uVar8) + 1,uVar8
                                                   );
                if (pcVar5 != (char *)0x0) {
                  uVar11 = *(undefined4 *)&param_1[0x740].field_0x7;
                  iVar9 = *(int *)&param_1[0x740].field_0x3;
                  iVar10 = *(int *)((int)&param_1[0x73f].field_0008 + 3);
LAB_006a05f8:
                  thunk_FUN_006a2e50(iVar10,local_8,iVar2,iVar9,uVar11,pcVar5,0x28,0x28);
                }
              }
              else {
                uVar8 = uVar1 >> 8 & 0xf;
                pcVar5 = (char *)thunk_FUN_00692570(&param_1[0x255].field_0x7,(uVar1 & 0xff) - 1,
                                                    (iVar6 - uVar8) + 1,uVar8);
                if (pcVar5 != (char *)0x0) {
                  iVar9 = *(int *)&param_1[0x740].field_0x3;
                  uVar11 = *(undefined4 *)&param_1[0x740].field_0x7;
                  iVar10 = *(int *)((int)&param_1[0x73f].field_0008 + 3);
                  goto LAB_006a05f8;
                }
              }
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < 6);
          local_c = local_c + 1;
          iVar2 = iVar2 + 0x28;
        } while (local_c < param_1->field_0008->field_0004);
      }
      pAVar4 = param_1->field_0008;
      local_10 = local_10 + 1;
      local_8 = local_8 + 0x28;
    } while (local_10 < pAVar4->field_0000);
  }
  return;
}

