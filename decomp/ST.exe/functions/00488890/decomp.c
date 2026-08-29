#include "../../pseudocode_runtime.h"


/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 007905A0
   Entries: 00405CEF
   Slots: 0x40
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=40/2106; unique_owner_for_target; unique physical vtable owner and slot type only
   the existing __thiscall receiver; explicit parameters and return are retained
   [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:1: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=6,
   pointer_dereferences=7, scalar_uses=0; sites=00488922 dereference: CMP dword ptr [EDI +
   EBX*0x4],0x0 | 00488935 dereference: MOV dword ptr [EDI + EBX*0x4],EAX | 00488AE5 dereference:
   MOV EDX,dword ptr [ECX + EBX*0x4] | 00488B0D dereference: MOV ECX,dword ptr [ECX + EBX*0x4] |
   00488B41 dereference: MOV ECX,dword ptr [ECX + EBX*0x4] | 00488BBE dereference: MOV ECX,dword ptr
   [EAX + EBX*0x4] | 00488BD3 dereference: MOV ECX,dword ptr [EDX + EBX*0x4] */

void __thiscall STBoatC::vfunc_40(STBoatC *this,void *param_1)

{
  uint index;
  uint *puVar1;
  uint *puVar2;
  STBoatC *pSVar3;
  byte bVar4;
  int local_EAX_38;
  int uVar4;
  DArrayTy *pDVar5;
  int iVar6;
  int iVar7;
  int local_EAX_393;
  int local_EAX_430;
  int local_EAX_483;
  int local_EAX_519;
  int local_EAX_732;
  int uVar7;
  int iVar8;
  void **ppvVar9;
  void *pvVar10;
  uint index_00;
  int local_7c [2];
  char local_74;
  void *local_4c [2];
  char local_44;
  byte local_43;
  ushort local_42;
  ushort local_40;
  ushort local_3e;
  ushort local_3c;
  uint local_3a [7];
  uint *local_1c;
  int local_18;
  STBoatC *local_14;
  int local_10;
  void *local_c;
  uint *local_8;

  local_18 = 0;
  local_14 = this;
  do {
    iVar8 = local_18;
    local_8 = nullptr;
    /* ST_CALLSITE[004888B6]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
    local_EAX_38 = LookupRecordByte((char)this->field_0024);
    local_EAX_38 = (int)(byte)local_EAX_38;
    local_1c = g_bitset_00800FA0 + local_EAX_38 * 4;
    switch(iVar8) {
    case 0:
      local_8 = g_bitset_008014A0;
      break;
    case 1:
      local_8 = g_bitset_00800F90;
      break;
    case 2:
      local_8 = g_bitset_00800F80;
      break;
    case 3:
      local_8 = g_bitset_00801360;
      break;
    case 4:
      local_1c = nullptr;
      /* ST_CALLSITE[00488909]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      uVar4 = LookupRecordByte((char)this->field_0024);
      uVar4 = (int)(byte)uVar4;
      local_8 = g_bitset_00801370 + uVar4 * 4;
    }
    if (*(int *)((int)param_1 + iVar8 * 4) == 0) {
      pDVar5 = Library::DKW::TBL::DArrayCreate(nullptr,5,0x30,5);
      *(DArrayTy **)((int)param_1 + iVar8 * 4) = pDVar5;
    }
    local_10 = 0;
    local_c = (void *)0x32;
    do {
      pvVar10 = local_c;

      if (((((local_1c == nullptr) || (iVar6 = FUN_006b0fd0((int)local_1c), iVar6 != 0)) &&

           (iVar6 = FUN_006b0fd0((int)local_8), iVar6 != 0)) &&

          (iVar6 = thunk_FUN_004e6010((byte *)this->field_0024,(int)pvVar10 + -0x32), iVar6 != 0))
         && (((int)pvVar10 < 0x54 || (0x5a < (int)pvVar10)))) {
        ppvVar9 = local_4c;
        for (iVar6 = 0xc; pvVar10 = local_c, iVar6 != 0; iVar6 = iVar6 + -1) {
          *ppvVar9 = nullptr;
          ppvVar9 = ppvVar9 + 1;
        }
        local_4c[0] = local_c;
        local_4c[1] = nullptr;
        /* ST_CALLSITE[004889C8]: CALL 0x0040469c; direct=0040469C STAllPlayersC::sub_004E6C20 */
        iVar7 = STAllPlayersC::sub_004E6C20
                          (g_allPlayers_007FA174,(byte *)this->field_0024,(int)local_c);
        if ((iVar7 == 0) ||
           /* ST_CALLSITE[004889DB]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
           (((bVar4 = LookupRecordByte((char)this->field_0024), bVar4 == 3 &&
             (pvVar10 != (void *)0x5c)) &&
            (g_packedRecords_A62x8[this->field_0024].field1965_0x9ca == 0)))) {
          local_44 = '\0';
        }
        else {
          local_44 = '\x01';
        }
        /* ST_CALLSITE[00488A19]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
        local_EAX_393 = LookupRecordByte((char)this->field_0024);
        iVar6 = local_10;
        local_EAX_393 = (int)(byte)local_EAX_393;
        local_3e = *(undefined2 *)(&DAT_008545a8 + (local_EAX_393 + local_10) * 4);
        /* ST_CALLSITE[00488A3E]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
        local_EAX_430 = LookupRecordByte((char)this->field_0024);
        local_EAX_430 = (int)(byte)local_EAX_430;
        local_42 = *(undefined2 *)(&DAT_007e1c4c + (local_EAX_430 + iVar6) * 4);
        /* ST_CALLSITE[00488A60]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
        bVar4 = LookupRecordByte((char)this->field_0024);
        if (bVar4 == 3) {
          /* ST_CALLSITE[00488A73]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
          local_EAX_483 = LookupRecordByte((char)this->field_0024);
          local_EAX_483 = (int)(byte)local_EAX_483;
          local_40 = *(undefined2 *)(&DAT_007e315c + (local_EAX_483 + iVar6) * 4);
        }
        else {
          /* ST_CALLSITE[00488A97]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
          local_EAX_519 = LookupRecordByte((char)this->field_0024);
          local_EAX_519 = (int)(byte)local_EAX_519;
          local_40 = *(undefined2 *)(&DAT_007e24f8 + (local_EAX_519 + iVar6) * 4);
        }
        local_3c = 0xffff;
        /* ST_CALLSITE[00488ABF]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
        local_43 = LookupRecordByte((char)this->field_0024);
        thunk_FUN_004e6d00(g_allPlayers_007FA174,(byte *)this->field_0024,local_4c[0],local_3a);

        Library::DKW::TBL::DArrayAppend(*(DArrayTy **)((int)param_1 + iVar8 * 4),local_4c);
        pvVar10 = local_c;
      }
      local_c = (void *)((int)pvVar10 + 1);
      local_10 = local_10 + 3;
    } while ((int)pvVar10 + -0x31 < 0x42);
    pDVar5 = *(DArrayTy **)((int)param_1 + iVar8 * 4);
    puVar1 = (uint *)pDVar5->count;
    puVar2 = puVar1;
    while (puVar2 != nullptr) {
      local_1c = nullptr;
      index_00 = 0;
      if ((int)puVar1 + -2 < 0) break;
      do {

        DArrayGetElement(pDVar5,index_00,local_4c);
        index = index_00 + 1;

        DArrayGetElement(*(DArrayTy **)((int)param_1 + iVar8 * 4),index,local_7c);
        pSVar3 = local_14;
        if (local_44 == '\0') {
          if (local_74 == '\0') {
LAB_00488b5f:
            /* ST_CALLSITE[00488B6C]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
            local_EAX_732 = LookupRecordByte((char)local_14->field_0024);
            local_10 = (uint)(byte)local_EAX_732 + local_7c[0] * 3;
            /* ST_CALLSITE[00488B8E]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
            uVar7 = LookupRecordByte((char)pSVar3->field_0024);
            iVar8 = local_18;
            if (*(int *)(&DAT_007e1dac + local_10 * 4) <=
                *(int *)(&DAT_007e1dac + ((uint)(byte)uVar7 + (int)local_4c[0] * 3) * 4))
            goto LAB_00488bce;
          }

          FUN_006b0cd0(*(RecoveredRecordView_00413AF0_B98DB3AE **)((int)param_1 + iVar8 * 4),
                       index_00,index);
          local_1c = (uint *)0x1;
        }
        else if (local_44 == local_74) goto LAB_00488b5f;
LAB_00488bce:
        pDVar5 = *(DArrayTy **)((int)param_1 + iVar8 * 4);
        puVar1 = (uint *)pDVar5->count;
        index_00 = index;
        this = local_14;
        puVar2 = local_1c;
      } while ((int)index <= (int)puVar1 + -2);
    }
    local_18 = iVar8 + 1;
    if (4 < local_18) {
      return;
    }
  } while( true );
}

