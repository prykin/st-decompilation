#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_005ebd80(AnonShape_005EBD80_1A4ED01F *param_1)

{
  short sVar1;
  short sVar2;
  STWorldObject *this;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  short sVar8;

  sVar8 = param_1->field_034A;
  bVar4 = false;
  bVar3 = false;
  sVar8 = STBiasedDiv16(sVar8, 0xc9); /* exact signed 16-bit grid-index division */
  param_1->field_0242 = sVar8;
  sVar8 = param_1->field_034C;
  sVar8 = STBiasedDiv16(sVar8, 0xc9); /* exact signed 16-bit grid-index division */
  param_1->field_0244 = sVar8;
  sVar8 = param_1->field_034E;
  sVar8 = STBiasedDiv16(sVar8, 200); /* exact signed 16-bit grid-index division */
  param_1->field_0246 = sVar8;
  param_1->field_0231 = 0xfd;
  if ((((short)(param_1->field_046B * 0xc9 + 100) != param_1->field_034A) ||
      ((short)(param_1->field_046F * 0xc9 + 100) != param_1->field_034C)) ||
     ((short)(param_1->field_0473 * 200 + 100) != param_1->field_034E)) {
    param_1->field_0242 = param_1->field_046B;
    param_1->field_0244 = param_1->field_046F;
    param_1->field_0246 = param_1->field_0473;
    bVar4 = true;
  }
  sVar8 = param_1->field_0242;
  sVar1 = param_1->field_0244;
  sVar2 = param_1->field_0246;
  if ((((((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) ||
        ((sVar1 < 0 || ((g_worldGrid.sizeY <= sVar1 || (sVar2 < 0)))))) ||
       (g_worldGrid.sizeZ <= sVar2)) ||
      (STGridAt3D(g_worldGrid, sVar8, sVar1, sVar2).objects[0] == nullptr)) &&
     (iVar5 = DumpClassC::WritePtr
                        (sVar8,sVar1,sVar2,0,(RecoveredRecord_DumpClassC_00495EC0 *)param_1),
     iVar5 == 0)) {
    param_1->field_0252 = param_1->field_0252 + '\x01';
    bVar3 = true;
  }
  else {
    sVar8 = param_1->field_0242;
    sVar1 = param_1->field_0246;
    sVar2 = param_1->field_0244;
    if (sVar8 < 0) {
      return 0;
    }
    if (g_worldGrid.sizeX <= sVar8) {
      return 0;
    }
    if (sVar2 < 0) {
      return 0;
    }
    if (g_worldGrid.sizeY <= sVar2) {
      return 0;
    }
    if (sVar1 < 0) {
      return 0;
    }
    if (g_worldGrid.sizeZ <= sVar1) {
      return 0;
    }
    this = STGridAt3D(g_worldGrid, sVar8, sVar2, sVar1).objects[0];
    if (this == nullptr) {
      return 0;
    }
    iVar5 = this->GetObjectTypeId();
    if (((iVar5 != 0x1b) && (iVar5 != 7)) && (iVar5 != 0x13)) {
      return 0;
    }
    iVar5 = (*this->vtable[5].slots_00_28[9])(this,0xfe);
    if (iVar5 == 0) {
      return 0;
    }
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
    bVar4 = false;
  }
  param_1->field_0251 = (char)param_1->field_0350;
  param_1->field_0236 = 0;
  iVar5 = (int)((ulonglong)((longlong)param_1->field_0350 * -0x77777777) >> 0x20) +
          param_1->field_0350;
  param_1->field_0277 = (int)param_1->field_034A;
  param_1->field_02BE = (int)param_1->field_034A;
  param_1->field_027B = (int)param_1->field_034C;
  param_1->field_027F = (int)param_1->field_034E;
  param_1->field_02BA = (iVar5 >> 3) - (iVar5 >> 0x1f);
  param_1->field_02C2 = (int)param_1->field_034C;
  param_1->field_02C6 = (int)param_1->field_034E;
  uVar6 = thunk_FUN_005ec5e0(param_1->field_033E);
  param_1->field_02B1 = uVar6;
  param_1->field_0235 = param_1->field_0332;
  param_1->field_023E = 2000;
  if (bVar3) {
    if (bVar4) {
      iVar5 = thunk_FUN_005ecd70(param_1,(int)(short)(param_1->field_0242 * 0xc9 + 100),
                                 (int)(short)(param_1->field_0244 * 0xc9 + 100),
                                 (int)(short)(param_1->field_0246 * 200 + 100),param_1->field_0350,
                                 '\x01',0x1e);
      if (iVar5 != 0) {
        param_1->field_023A = 2;
      }
    }
    else {
      uVar7 = param_1->field_001C * 0x41c64e6d + 0x3039;
      param_1->field_001C = uVar7;
      thunk_FUN_005ecd70(param_1,param_1->field_0277,param_1->field_027B,param_1->field_027F + -0x1e
                         ,param_1->field_0350,'\0',0x1e - (uVar7 >> 0x10) % 0xb);
      param_1->field_023A = 1;
    }
  }
  param_1->field_02D6 = 0xffffffff;
  param_1->field_02D2 = 0xffffffff;
  param_1->field_02E0 = g_playSystem_00802A38->field_00E4;
  return 1;
}

