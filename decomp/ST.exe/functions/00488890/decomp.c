#include "../../pseudocode_runtime.h"


void __thiscall FUN_00488890(void *this,int param_1)

{
  uint index;
  uint *puVar1;
  uint *puVar2;
  void *pvVar3;
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
  int iVar9;
  int *piVar10;
  uint index_00;
  int local_7c [2];
  char local_74;
  int local_4c [2];
  char local_44;
  byte local_43;
  undefined2 local_42;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  uint local_3a [7];
  undefined4 *local_1c;
  int local_18;
  void *local_14;
  int local_10;
  int local_c;
  undefined4 *local_8;

  local_18 = 0;
  local_14 = this;
  do {
    iVar9 = local_18;
    local_8 = nullptr;
    /* ST_CALLSITE[004888B6]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
    local_EAX_38 = LookupRecordByte(STField<char>(this,0x24));
    local_EAX_38 = (int)(byte)local_EAX_38;
    local_1c = &DAT_00800fa0 + local_EAX_38 * 4;
    switch(iVar9) {
    case 0:
      local_8 = (undefined4 *)&DAT_008014a0;
      break;
    case 1:
      local_8 = (undefined4 *)&DAT_00800f90;
      break;
    case 2:
      local_8 = (undefined4 *)&DAT_00800f80;
      break;
    case 3:
      local_8 = (undefined4 *)&DAT_00801360;
      break;
    case 4:
      local_1c = nullptr;
      /* ST_CALLSITE[00488909]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      uVar4 = LookupRecordByte(STField<char>(this,0x24));
      uVar4 = (int)(byte)uVar4;
      local_8 = &DAT_00801370 + uVar4 * 4;
    }
    if (*(int *)(param_1 + iVar9 * 4) == 0) {
      pDVar5 = Library::DKW::TBL::DArrayCreate(nullptr,5,0x30,5);
      *(DArrayTy **)(param_1 + iVar9 * 4) = pDVar5;
    }
    local_10 = 0;
    local_c = 0x32;
    do {
      iVar8 = local_c;
      if (((((local_1c == nullptr) || (iVar6 = FUN_006b0fd0((int)local_1c), iVar6 != 0))
           && (iVar6 = FUN_006b0fd0((int)local_8), iVar6 != 0)) &&
          (iVar6 = thunk_FUN_004e6010(STField<int>(this,0x24),iVar8 + -0x32), iVar6 != 0)) &&
         ((iVar8 < 0x54 || (0x5a < iVar8)))) {
        piVar10 = local_4c;
        for (iVar8 = 0xc; iVar6 = local_c, iVar8 != 0; iVar8 = iVar8 + -1) {
          *piVar10 = 0;
          piVar10 = piVar10 + 1;
        }
        local_4c[0] = local_c;
        local_4c[1] = 0;
        iVar7 = thunk_FUN_004e6c20(STField<int>(this,0x24),local_c);
        if ((iVar7 == 0) ||
           /* ST_CALLSITE[004889DB]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
           (((bVar4 = LookupRecordByte(STField<char>(this,0x24)), bVar4 == 3 && (iVar6 != 0x5c))
            && (g_packedRecords_A62x8[STField<int>(this,0x24)].field1965_0x9ca == 0)))) {
          local_44 = '\0';
        }
        else {
          local_44 = '\x01';
        }
        /* ST_CALLSITE[00488A19]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
        local_EAX_393 = LookupRecordByte(STField<char>(this,0x24));
        iVar8 = local_10;
        local_EAX_393 = (int)(byte)local_EAX_393;
        local_3e = *(undefined2 *)(&DAT_008545a8 + (local_EAX_393 + local_10) * 4);
        /* ST_CALLSITE[00488A3E]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
        local_EAX_430 = LookupRecordByte(STField<char>(this,0x24));
        local_EAX_430 = (int)(byte)local_EAX_430;
        local_42 = *(undefined2 *)(&DAT_007e1c4c + (local_EAX_430 + iVar8) * 4);
        /* ST_CALLSITE[00488A60]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
        bVar4 = LookupRecordByte(STField<char>(this,0x24));
        if (bVar4 == 3) {
          /* ST_CALLSITE[00488A73]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
          local_EAX_483 = LookupRecordByte(STField<char>(this,0x24));
          local_EAX_483 = (int)(byte)local_EAX_483;
          local_40 = *(undefined2 *)(&DAT_007e315c + (local_EAX_483 + iVar8) * 4);
        }
        else {
          /* ST_CALLSITE[00488A97]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
          local_EAX_519 = LookupRecordByte(STField<char>(this,0x24));
          local_EAX_519 = (int)(byte)local_EAX_519;
          local_40 = *(undefined2 *)(&DAT_007e24f8 + (local_EAX_519 + iVar8) * 4);
        }
        local_3c = 0xffff;
        /* ST_CALLSITE[00488ABF]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
        local_43 = LookupRecordByte(STField<char>(this,0x24));
        thunk_FUN_004e6d00(STField<byte *>(this,0x24),local_4c[0],local_3a);
        Library::DKW::TBL::DArrayAppend(*(DArrayTy **)(param_1 + iVar9 * 4),local_4c);
        iVar8 = local_c;
      }
      local_c = iVar8 + 1;
      local_10 = local_10 + 3;
    } while (iVar8 + -0x31 < 0x42);
    pDVar5 = *(DArrayTy **)(param_1 + iVar9 * 4);
    puVar1 = (undefined4 *)pDVar5->count;
    puVar2 = puVar1;
    while (puVar2 != nullptr) {
      local_1c = nullptr;
      index_00 = 0;
      if ((int)puVar1 + -2 < 0) break;
      do {
        DArrayGetElement(pDVar5,index_00,local_4c);
        index = index_00 + 1;
        DArrayGetElement(*(DArrayTy **)(param_1 + iVar9 * 4),index,local_7c);
        pvVar3 = local_14;
        if (local_44 == '\0') {
          if (local_74 == '\0') {
LAB_00488b5f:
            /* ST_CALLSITE[00488B6C]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
            local_EAX_732 = LookupRecordByte(STField<char>(local_14,0x24));
            local_10 = (uint)(byte)local_EAX_732 + local_7c[0] * 3;
            /* ST_CALLSITE[00488B8E]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
            uVar7 = LookupRecordByte(STField<char>(pvVar3,0x24));
            iVar9 = local_18;
            if (*(int *)(&DAT_007e1dac + local_10 * 4) <=
                *(int *)(&DAT_007e1dac + ((uint)(byte)uVar7 + local_4c[0] * 3) * 4))
            goto LAB_00488bce;
          }
          FUN_006b0cd0(*(AnonShape_00413AF0_B6B4EE9A **)(param_1 + iVar9 * 4),index_00,index);
          local_1c = (undefined4 *)0x1;
        }
        else if (local_44 == local_74) goto LAB_00488b5f;
LAB_00488bce:
        pDVar5 = *(DArrayTy **)(param_1 + iVar9 * 4);
        puVar1 = (undefined4 *)pDVar5->count;
        index_00 = index;
        this = local_14;
        puVar2 = local_1c;
      } while ((int)index <= (int)puVar1 + -2);
    }
    local_18 = iVar9 + 1;
    if (4 < local_18) {
      return;
    }
  } while( true );
}

