#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_005fc4a0(AnonShape_005FC4A0_70B17F95 *param_1)

{
  uint uVar1;
  short sVar2;
  short sVar3;
  STWorldObject *this;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  short sVar8;

  sVar8 = param_1->field_034E;
  bVar5 = false;
  bVar4 = false;
  sVar8 = STBiasedDiv16(sVar8, 0xc9); /* exact signed 16-bit grid-index division */
  param_1->field_0242 = sVar8;
  sVar8 = param_1->field_0350;
  sVar8 = STBiasedDiv16(sVar8, 0xc9); /* exact signed 16-bit grid-index division */
  param_1->field_0244 = sVar8;
  sVar8 = param_1->field_0352;
  sVar8 = STBiasedDiv16(sVar8, 200); /* exact signed 16-bit grid-index division */
  param_1->field_0246 = sVar8;
  param_1->field_0231 = 0xfe;
  if ((((short)(param_1->field_046F * 0xc9 + 100) != param_1->field_034E) ||
      ((short)(param_1->field_0473 * 0xc9 + 100) != param_1->field_0350)) ||
     ((short)(param_1->field_0477 * 200 + 100) != param_1->field_0352)) {
    bVar5 = true;
    param_1->field_0242 = param_1->field_046F;
    param_1->field_0244 = param_1->field_0473;
    param_1->field_0246 = param_1->field_0477;
  }
  sVar8 = param_1->field_0242;
  sVar2 = param_1->field_0244;
  sVar3 = param_1->field_0246;
  if ((((((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) ||
        ((sVar2 < 0 || ((g_worldGrid.sizeY <= sVar2 || (sVar3 < 0)))))) ||
       (g_worldGrid.sizeZ <= sVar3)) ||
      (STGridAt3D(g_worldGrid, sVar8, sVar2, sVar3).objects[0] == nullptr)) &&
     /* ST_CALLSITE[005FC67A]: CALL 0x00401325; direct=00401325 DumpClassC::WritePtr */
     (iVar6 = DumpClassC::WritePtr
                        (sVar8,sVar2,sVar3,0,(RecoveredRecord_DumpClassC_00495EC0 *)param_1),
     iVar6 == 0)) {
    param_1->field_0252 = param_1->field_0252 + '\x01';
    bVar4 = true;
  }
  else {
    sVar8 = param_1->field_0242;
    sVar2 = param_1->field_0246;
    sVar3 = param_1->field_0244;
    if (sVar8 < 0) {
      return 0;
    }
    if (g_worldGrid.sizeX <= sVar8) {
      return 0;
    }
    if (sVar3 < 0) {
      return 0;
    }
    if (g_worldGrid.sizeY <= sVar3) {
      return 0;
    }
    if (sVar2 < 0) {
      return 0;
    }
    if (g_worldGrid.sizeZ <= sVar2) {
      return 0;
    }
    this = STGridAt3D(g_worldGrid, sVar8, sVar3, sVar2).objects[0];
    if (this == nullptr) {
      return 0;
    }
    /* ST_CALLSITE[005FC72E]: CALL dword ptr [EDX + 0x2c] */
    iVar6 = this->GetObjectTypeId();
    if (((iVar6 != 0x1b) && (iVar6 != 7)) && (iVar6 != 0x13)) {
      return 0;
    }
    /* ST_CALLSITE[005FC74D]: CALL dword ptr [EAX + 0x114]; [STIndirectCallsiteApplier] exact slot 0x114; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/GlobalRecords/STWorldObject;/undefined4 */
    iVar6 = (*this->vtable[5].slots_00_28[9])(this,0xfe);
    if (iVar6 == 0) {
      return 0;
    }
    /* ST_CALLSITE[005FC763]: CALL dword ptr [EDX + 0x118]; [STIndirectCallsiteApplier] exact slot 0x118; mode=machine-void; signature=__thiscall;/void;pointer:/SubmarineTitans/Recovered/GlobalRecords/STWorldObject;/undefined4 */
    (*this->vtable[5].slots_00_28[10])(this,param_1->field_0018);
    param_1->field_02A3 = this[1].vtable;
    param_1->field_02AB = *(undefined2 *)&this[1].field_0xe;
    param_1->field_02A7 = *(undefined4 *)&this->field_0x18;
    param_1->field_024E = 1;
    param_1->field_024F = 1;
    param_1->field_023A = 4;
    if (param_1->field_0211 != nullptr) {
      Library::Ourlib::ST3DSMAP::SprSetLevBefore
                (param_1->field_0211,param_1->field_01ED,*(int *)&this[0xd].field_0x19);
    }
    bVar5 = false;
  }
  param_1->field_0251 = (byte)param_1->field_0354;
  iVar6 = (int)((ulonglong)((longlong)param_1->field_0354 * -0x77777777) >> 0x20) +
          param_1->field_0354;
  param_1->field_0277 = (int)param_1->field_034E;
  param_1->field_02BE = (int)param_1->field_034E;
  param_1->field_027B = (int)param_1->field_0350;
  param_1->field_027F = (int)param_1->field_0352;
  param_1->field_02BA = (iVar6 >> 3) - (iVar6 >> 0x1f);
  param_1->field_02C2 = (int)param_1->field_0350;
  param_1->field_02C6 = (int)param_1->field_0352;
  param_1->field_0231 = 0xfe;
  uVar7 = thunk_FUN_005fcd40(param_1->field_033E);
  param_1->field_02B1 = uVar7;
  param_1->field_0235 = param_1->field_0332;
  param_1->field_0236 = 0;
  param_1->field_023E = 2000;
  if (bVar4) {
    if (param_1->field_0342 == 1) {
      thunk_FUN_005ef4b0(param_1,(uint)param_1->field_0251);
      param_1->field_023A = 2;
      param_1->field_02E9 = 1;
    }
    else if (bVar5) {
      iVar6 = thunk_FUN_005ecd70(param_1,(int)(short)(param_1->field_0242 * 0xc9 + 100),
                                 (int)(short)(param_1->field_0244 * 0xc9 + 100),
                                 (int)(short)(param_1->field_0246 * 200 + 100),param_1->field_0354,
                                 '\x01',0x1e);
      if (iVar6 != 0) {
        param_1->field_023A = 2;
      }
    }
    else {
      uVar1 = param_1->field_001C * 0x41c64e6d + 0x3039;
      param_1->field_001C = uVar1;
      thunk_FUN_005ecd70(param_1,param_1->field_0277,param_1->field_027B,param_1->field_027F + -0x1e
                         ,param_1->field_0354,'\0',0x1e - (uVar1 >> 0x10) % 0xb);
      param_1->field_023A = 1;
    }
  }
  param_1->field_02D6 = 0xffffffff;
  param_1->field_02D2 = 0xffffffff;
  param_1->field_02E0 = g_playSystem_00802A38->field_00E4;
  return 1;
}

