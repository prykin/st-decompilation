#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 005F0A30 returns return of FUN_004b7d50 @ 005F0B4F */

bool __fastcall FUN_005f0a30(STSprGameObjC *param_1)

{
  short sVar1;
  short sVar2;
  STWorldObject *this;
  bool bVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  STBoatC_field_06F7State SVar8;

  uVar5 = (uint)(byte)param_1->field_024F;
  if ((param_1->field_024F != 0) &&
     (uVar5 = (uint)(ushort)param_1->field_0246, 0 < param_1->field_0246)) {
    uVar5 = thunk_FUN_004961b0(param_1->field_0242,param_1->field_0244,(short)(uVar5 - 1));
    if (uVar5 == 0) {
      sVar1 = param_1->field_0242;
      sVar2 = param_1->field_0244;
      uVar4 = param_1->field_0246 - 1;
      uVar5 = (uint)uVar4;
      if ((((-1 < sVar1) && (sVar1 < g_worldGrid.sizeX)) && (-1 < sVar2)) &&
         (((sVar2 < g_worldGrid.sizeY && (-1 < (short)uVar4)) && ((short)uVar4 < g_worldGrid.sizeZ))
         )) {
        uVar5 = (uint)sVar1;
        this = STGridAt3D(g_worldGrid, uVar5, sVar2, uVar4).objects[0];
        if (this != nullptr) {
          /* ST_CALLSITE[005F0AFF]: CALL dword ptr [EDX + 0x2c] */
          uVar5 = this->GetObjectTypeId();
          if (uVar5 == 99) {
            /* ST_CALLSITE[005F0B0B]: CALL dword ptr [EAX + 0x138] */
            iVar6 = param_1->vfunc_138();
            /* ST_CALLSITE[005F0B16]: CALL dword ptr [EDX + 0x130] */
            iVar7 = param_1->vfunc_130();
            /* ST_CALLSITE[005F0B21]: CALL dword ptr [EAX + 0x2c] */
            SVar8 = param_1->slot_2C();
            thunk_FUN_004b7e30(this,SVar8,iVar7,iVar6);
            /* ST_CALLSITE[005F0B34]: CALL dword ptr [EDX + 0xac] */
            iVar6 = param_1->vfunc_AC((short)*(undefined4 *)&this->field_0x18);
            uVar5 = 0;
            if (iVar6 != 0) {
              thunk_FUN_004b7de0((int *)this);
              bVar3 = thunk_FUN_004b7d50(this,(STBoatC *)param_1);
              uVar5 = (uint)bVar3;
            }
          }
        }
      }
    }
  }
  return SUB41(uVar5,0);
}

