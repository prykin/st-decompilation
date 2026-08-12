

void FUN_00497110(AnonShape_00497110_11FEE69C *param_1,AnonShape_00497110_465BC742 *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  local_10 = param_1->field_01F1;
  iVar6 = param_1->field_01ED + 100;
  iVar5 = param_1->field_01E9 + 100;
  local_18 = param_2->field_01ED + 100;
  iVar4 = param_2->field_01E9 + 100;
  iVar2 = FUN_006aced8(iVar5,iVar6,iVar4,local_18);
  if (0 < iVar2) {
    iVar3 = local_18 - iVar6;
    local_c = iVar3 / 2 + iVar6;
    local_14 = (iVar4 - iVar5) / 2 + iVar5;
    local_8 = STBiasedDiv16(local_10, 200); /* exact signed 16-bit grid-index division */
    ST3DSMAPContext::sub_006E3310
              (g_sT3DSMAPContext_00807598,(g_sT3DSMAPContext_00807598->field_0380 * local_14) / 0xc9
               ,(int *)((g_sT3DSMAPContext_00807598->field_0380 * local_c) / 0xc9),local_8,&local_1c
              );
    local_8 = local_8 + 1;
    if (local_8 < local_1c) {
      local_8 = local_1c;
    }
    local_8 = local_8 * 200;
    iVar2 = iVar2 * 4;
    thunk_FUN_0061f5c0(param_1->field_01D9,(short)(((iVar4 - iVar5) * 600) / iVar2) + (short)iVar5,
                       (short)((iVar3 * 600) / iVar2) + (short)iVar6,(ushort)local_10,
                       (short)local_14,(short)local_c,(short)local_8);
    thunk_FUN_0061f5c0(param_2->field_01D9,(short)(((iVar5 - iVar4) * 600) / iVar2) + (short)iVar4,
                       (short)(((iVar6 - local_18) * 600) / iVar2) + (short)local_18,
                       (ushort)local_10,(short)local_14,(short)local_c,(short)local_8);
  }
  return;
}

