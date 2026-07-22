
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=10;
   incoming_edx_uses=2; incoming_stack_parameter_uses=6; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall TLOBaseTy::sub_004C56B0(TLOBaseTy *this,void *param_1)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  int local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;

  pvVar2 = param_1;
  sVar5 = 0;
  sVar6 = 0;
  local_8 = 0;
  if (&stack0x00000000 != (undefined1 *)0x8) {
    local_8 = (uint)(ushort)this->field_0041;
  }
  if (&stack0x00000000 != (undefined1 *)0xfffffffc) {
    sVar6 = this->field_0043;
    sVar5 = this->field_0045;
  }
  if (*(int *)(&this->field_0x2cd + (int)param_1 * 0x80) <
      *(int *)(&this->field_0x2d1 + (int)param_1 * 0x80)) {
    pvVar1 = (void *)((int)param_1 + this->field_0235 * 2);
    if ((&DAT_00792ca0)[(int)pvVar1 * 3] == 0xb3) {
      param_1 = (void *)0x0;
      if ((this->field_04EC != 0) &&
         (iVar3 = FUN_006e62d0(g_playSystem_00802A38,this->field_04EC,(int *)&param_1), iVar3 == 0))
      {
        uVar4 = this->field_001C * 0x41c64e6d + 0x3039;
        this->field_001C = uVar4;
        iVar3 = thunk_FUN_00617ca0(param_1,(int *)&local_8,&local_10,&local_18,&local_c,&local_14,
                                   &local_1c,uVar4 >> 0x10);
        if (iVar3 != 0) {
          (&this->field_02A5)[(int)pvVar2 * 0x20] = local_8;
          this->field_04F4 = local_c;
          (&this->field_02A9)[(int)pvVar2 * 0x20] = local_10;
          this->field_04F8 = local_14;
          (&this->field_02AD)[(int)pvVar2 * 0x20] = local_18;
          this->field_04FC = local_1c;
          return 1;
        }
      }
    }
    else {
      iVar3 = (int)pvVar1 * 0x16;
      iVar8 = (int)sVar5 + (int)*(short *)(&DAT_007932d8 + iVar3);
      sVar5 = (short)(iVar8 >> 0x1f);
      if (iVar8 < 0) {
        sVar5 = (((short)(iVar8 / 200) + sVar5) - (short)((longlong)iVar8 * 0x51eb851f >> 0x3f)) +
                -1;
      }
      else {
        sVar5 = ((short)(iVar8 / 200) + sVar5) - (short)((longlong)iVar8 * 0x51eb851f >> 0x3f);
      }
      iVar8 = (int)*(short *)(&DAT_007932d6 + iVar3) + (int)sVar6;
      sVar6 = (short)(iVar8 >> 0x1f);
      if (iVar8 < 0) {
        sVar6 = (((short)(iVar8 / 0xc9) + sVar6) - (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)) +
                -1;
      }
      else {
        sVar6 = ((short)(iVar8 / 0xc9) + sVar6) - (short)((longlong)iVar8 * 0x28c1979 >> 0x3f);
      }
      iVar3 = (int)*(short *)(&DAT_007932d4 + iVar3) + (int)(short)local_8;
      sVar7 = (short)(iVar3 >> 0x1f);
      if (iVar3 < 0) {
        sVar7 = (((short)(iVar3 / 0xc9) + sVar7) - (short)((longlong)iVar3 * 0x28c1979 >> 0x3f)) +
                -1;
      }
      else {
        sVar7 = ((short)(iVar3 / 0xc9) + sVar7) - (short)((longlong)iVar3 * 0x28c1979 >> 0x3f);
      }
      if (((((sVar7 < 0) || (g_worldGrid.sizeX <= sVar7)) || (sVar6 < 0)) ||
          ((g_worldGrid.sizeY <= sVar6 || (sVar5 < 0)))) ||
         ((g_worldGrid.sizeZ <= sVar5 ||
          (g_worldGrid.cells
           [(int)sVar6 * (int)g_worldGrid.sizeX + (int)sVar5 * (int)g_worldGrid.planeStride +
            (int)sVar7].objects[1] == (STWorldObject *)0x0)))) {
        return 1;
      }
    }
  }
  return 0;
}

