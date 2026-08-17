#include "../../pseudocode_runtime.h"


int __thiscall FUN_004e1930(void *this,int *param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  STResourceC *this_00;
  STGroupBoatC *pSVar3;
  int local_EAX_269;
  int uVar3;
  undefined1 local_24 [16];
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  undefined4 local_c;

  if (STField<int>(this,0x4d4) == 0) {
    param_2 = 0;
    *param_1 = 0;
  }
  else {
    *param_1 = STField<int>(this,0x4dc);
    iVar1 = STField<int>(this,0x4e0);
    if (iVar1 < param_2) {
      param_2 = iVar1;
    }
    STField<int>(this,0x4e0) = iVar1 - param_2;
    this_00 = (STResourceC *)
              thunk_FUN_004d85e0(STField<int>(this,0x5b0),STField<int>(this,0x5b4),
                                 STField<int>(this,0x5b8));
    if (this_00 != nullptr) {
      /* ST_CALLSITE[004E199A]: CALL 0x00402973; direct=00402973 STResourceC::SetResource */
      STResourceC::SetResource(this_00,STField<int>(this,0x4e0),1);
    }
    if ((STField<int>(this,0x4e0) == 0) && (param_2 != 0)) {
      STField<undefined4>(this,0x4d4) = 0;
      pSVar3 = thunk_FUN_0042b760(STField<char>(this,0x24),STField<ushort>(this,0x30));
      if ((pSVar3 != nullptr) && ((undefined4 *)pSVar3->field_001C != nullptr)
         ) {
        local_c = STField<undefined4>(this,0x18);
        local_e = STField<undefined2>(this,0x32);
        local_14 = 0x5d99;
        local_10 = 1;
        /* ST_CALLSITE[004E19FF]: CALL dword ptr [EDX] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (*(code *)**(undefined4 **)pSVar3->field_001C)(local_24);
      }
      if (STField<uint>(this,0x24) == (uint)*(byte *)(STField<int>(this,0x10) + 0x112d)) {
        iVar1 = STField<int>(this,0x5ac);
        if ((iVar1 == 0x39) || (iVar1 == 0x5e)) {
          /* ST_CALLSITE[004E1A96]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
          uVar3 = LookupRecordByte(STField<char>(this,0x23d));
          uVar3 = (int)(byte)uVar3;
          if (uVar3 == 1) {
            /* ST_CALLSITE[004E1AF0]: CALL dword ptr [EDX + 0x90] */
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
            (**(code **)(*(int *)this + 0x90))(4,0x21e);
            return param_2;
          }
          if (uVar3 == 2) {
            /* ST_CALLSITE[004E1AD4]: CALL dword ptr [EAX + 0x90] */
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
            (**(code **)(*(int *)this + 0x90))(4,0x2e4);
            return param_2;
          }
          if (uVar3 == 3) {
            /* ST_CALLSITE[004E1AB8]: CALL dword ptr [EDX + 0x90] */
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
            (**(code **)(*(int *)this + 0x90))(4,0x3a5);
            return param_2;
          }
        }
        else if (iVar1 == 0x4f) {
          /* ST_CALLSITE[004E1A3D]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
          local_EAX_269 = LookupRecordByte(STField<char>(this,0x23d));
          local_EAX_269 = (int)(byte)local_EAX_269;
          if (local_EAX_269 == 1) {
            /* ST_CALLSITE[004E1A78]: CALL dword ptr [EAX + 0x90] */
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
            (**(code **)(*(int *)this + 0x90))(4,0x27c);
            return param_2;
          }
          if (local_EAX_269 == 2) {
            /* ST_CALLSITE[004E1A5C]: CALL dword ptr [EDX + 0x90] */
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
            (**(code **)(*(int *)this + 0x90))(4,0x34b);
            return param_2;
          }
        }
      }
    }
    else {
      switch(STField<undefined4>(this,0x5ac)) {
      case 0x39:
        iVar1 = *(int *)this;
        /* ST_CALLSITE[004E1B4D]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
        bVar2 = LookupRecordByte(STField<char>(this,0x23d));
        /* ST_CALLSITE[004E1B64]: CALL dword ptr [EBX + 0x90] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(iVar1 + 0x90))(3,(-(uint)(bVar2 != 2) & 0xffffff3a) + 0x2ea);
        return param_2;
      case 0x3b:
        iVar1 = *(int *)this;
        /* ST_CALLSITE[004E1BD7]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
        bVar2 = LookupRecordByte(STField<char>(this,0x23d));
        /* ST_CALLSITE[004E1BEE]: CALL dword ptr [EBX + 0x90] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(iVar1 + 0x90))(3,(-(uint)(bVar2 != 2) & 0xffffff3a) + 0x2f7);
        return param_2;
      case 0x4f:
        iVar1 = *(int *)this;
        /* ST_CALLSITE[004E1B84]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
        bVar2 = LookupRecordByte(STField<char>(this,0x23d));
        /* ST_CALLSITE[004E1B9B]: CALL dword ptr [EBX + 0x90] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(iVar1 + 0x90))(3,(-(uint)(bVar2 != 2) & 0xffffff32) + 0x350);
        return param_2;
      case 0x52:
        iVar1 = *(int *)this;
        /* ST_CALLSITE[004E1C0E]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
        bVar2 = LookupRecordByte(STField<char>(this,0x23d));
        /* ST_CALLSITE[004E1C25]: CALL dword ptr [EBX + 0x90] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(iVar1 + 0x90))(3,(-(uint)(bVar2 != 2) & 0xffffff3b) + 0x35d);
        return param_2;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      case 0x5e:
        /* ST_CALLSITE[004E1B2D]: CALL dword ptr [EDX + 0x90] */
        (**(code **)(*(int *)this + 0x90))(3,0x3ab);
        return param_2;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      case 0x60:
        /* ST_CALLSITE[004E1BB7]: CALL dword ptr [EDX + 0x90] */
        (**(code **)(*(int *)this + 0x90))(3,0x3ba);
        return param_2;
      }
    }
  }
  return param_2;
}

