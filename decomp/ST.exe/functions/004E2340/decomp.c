#include "../../pseudocode_runtime.h"


int __thiscall FUN_004e2340(void *this,uint param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int local_c;
  int local_8;

  uVar3 = param_1;
  iVar5 = -1;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((*(int *)((int)this + param_1 * 0x28 + 0x4d0) == param_2) &&
     (*(int *)((int)this + param_1 * 0x28 + 0x4d4) != 0)) {
    iVar5 = param_1 * 5 + 0x9b;
    piVar1 = (int *)((int)this + iVar5 * 8);
    iVar5 = *(int *)(&DAT_007e091c + *(int *)((int)this + iVar5 * 8) * 4) / 100;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar6 = (**(code **)(*(int *)this + 0x2c))();
    iVar6 = thunk_FUN_004b72e0(STField<char>(this,0x24),iVar6);
    if ((iVar6 != 0) &&
       ((iVar6 = thunk_FUN_004b79c0(STField<char>(this,0x24),STField<int>(this,0x18)),
        iVar6 == 0 && (iVar5 = iVar5 * 4, g_sndUnderAttMeneg_00811798 != nullptr)))
       ) {
      SndUnderAttMenegC::sub_00621580(g_sndUnderAttMeneg_00811798,STField<byte *>(this,0x24),5);
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar6 = *(int *)((int)this + param_1 * 0x28 + 0x4e8);
    if ((uint)(iVar6 + iVar5) <= g_playSystem_00802A38->field_00E4) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      param_1 = ((g_playSystem_00802A38->field_00E4 - iVar6) *
                *(int *)((int)this + param_1 * 0x28 + 0x4e4)) /
                *(uint *)(&DAT_007e091c + *piVar1 * 4);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      iVar5 = (**(code **)(*(int *)this + 0x2c))();
      iVar5 = thunk_FUN_004b72e0(STField<char>(this,0x24),iVar5);
      if ((iVar5 != 0) &&
         (iVar5 = thunk_FUN_004b79c0(STField<char>(this,0x24),STField<int>(this,0x18)),
         iVar5 == 0)) {
        param_1 = (int)(param_1 + ((int)param_1 >> 0x1f & 3U)) >> 2;
        if (param_1 == 0) {
          param_1 = 1;
        }
        if (g_sndUnderAttMeneg_00811798 != nullptr) {
          SndUnderAttMenegC::sub_00621580
                    (g_sndUnderAttMeneg_00811798,STField<byte *>(this,0x24),5);
        }
      }
      iVar5 = *(int *)((int)this + uVar3 * 0x28 + 0x4e0);
      iVar6 = *(int *)((int)this + uVar3 * 0x28 + 0x4e4);
      if (iVar6 < (int)(iVar5 + param_1)) {
        param_1 = iVar6 - iVar5;
      }
      do {
        local_8 = 0;
        local_c = 0;
        iVar5 = *(int *)(&DAT_007e085c + *piVar1 * 4);
        param_2 = (int)(iVar5 * param_1) / iVar6;
        iVar5 = iVar5 - (iVar5 * *(int *)((int)this + uVar3 * 0x28 + 0x4dc)) / iVar6;
        iVar6 = *(int *)((int)this + uVar3 * 0x28 + 0x4ec);
        if ((0 < iVar6) && (local_8 = -iVar6, local_8 < 0)) {
          local_8 = 0;
        }
        iVar6 = *(int *)((int)this + uVar3 * 0x28 + 0x4f0);
        if ((0 < iVar6) && (local_c = -iVar6, local_c < 0)) {
          local_c = 0;
        }
        iVar6 = *(int *)((int)this + uVar3 * 0x28 + 0x4f4);
        if ((iVar5 < iVar6 + param_2) && (param_2 = iVar5 - iVar6, param_2 < 0)) {
          param_2 = 0;
        }
        if ((((local_8 == 0) ||
             (iVar5 = thunk_FUN_004d7b10(STField<char>(this,0x24),4), local_8 <= iVar5)) &&
            ((local_c == 0 ||
             (iVar5 = thunk_FUN_004d7b50(STField<char>(this,0x24),4), local_c <= iVar5)))) &&
           ((param_2 == 0 ||
            (iVar5 = thunk_FUN_004d7b90(STField<char>(this,0x24),4), param_2 <= iVar5)))) {
          if (local_8 != 0) {
            *(int *)((int)this + uVar3 * 0x28 + 0x4ec) =
                 *(int *)((int)this + uVar3 * 0x28 + 0x4ec) + local_8;
            thunk_FUN_004d7c10(STField<char>(this,0x24),4,STField<int>(this,0x18),local_8);
          }
          if (local_c != 0) {
            *(int *)((int)this + uVar3 * 0x28 + 0x4f0) =
                 *(int *)((int)this + uVar3 * 0x28 + 0x4f0) + local_c;
            thunk_FUN_004d7d30(STField<char>(this,0x24),4,STField<int>(this,0x18),local_c);
          }
          if (param_2 != 0) {
            *(int *)((int)this + uVar3 * 0x28 + 0x4f4) =
                 *(int *)((int)this + uVar3 * 0x28 + 0x4f4) + param_2;
            thunk_FUN_004d7e50(STField<char>(this,0x24),4,STField<int>(this,0x18),param_2);
          }
          *(uint *)((int)this + uVar3 * 0x28 + 0x4e0) =
               *(int *)((int)this + uVar3 * 0x28 + 0x4e0) + param_1;
          if ((param_3 != nullptr) &&
             (*param_3 = 0,
             *(int *)((int)this + uVar3 * 0x28 + 0x4e4) <=
             *(int *)((int)this + uVar3 * 0x28 + 0x4e0))) {
            *param_3 = 1;
          }
          if (STField<uint>(this,0x24) == (uint)*(byte *)(STField<int>(this,0x10) + 0x112d)) {
            thunk_FUN_004d8b70((char)STField<uint>(this,0x24));
          }
          break;
        }
        iVar6 = *(int *)((int)this + uVar3 * 0x28 + 0x4e4);
        bVar2 = iVar6 / 100 < (int)param_1;
        param_1 = iVar6 / 100;
      } while (bVar2);
      *(uint *)((int)this + uVar3 * 0x28 + 0x4e8) = g_playSystem_00802A38->field_00E4;
      if (STField<int>(this,0x524) + 0x19U < g_playSystem_00802A38->field_00E4) {
        STField<uint>(this,0x524) = g_playSystem_00802A38->field_00E4;
        bVar4 = LookupRecordByte(STField<char>(this,0x23d));
        if (bVar4 == 2) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (**(code **)(*(int *)this + 0x90))(3,0x2c8);
          return *(int *)((int)this + uVar3 * 0x28 + 0x4e0);
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(*(int *)this + 0x90))(3,0x200);
      }
    }
    iVar5 = *(int *)((int)this + uVar3 * 0x28 + 0x4e0);
  }
  return iVar5;
}

