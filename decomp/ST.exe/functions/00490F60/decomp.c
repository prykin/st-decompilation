#include "../../pseudocode_runtime.h"


void __fastcall FUN_00490f60(STBoatC *param_1)

{
  DArrayTy *array;
  int iVar1;
  uint local_c;
  ushort local_8;
  if (((param_1->field_045D != CASE_14) || (param_1->field_07C2 != 0)) &&
     (param_1->field_0459 != CASE_78)) {
    iVar1 = param_1->field_07C2;
    if (param_1->field_045D != CASE_14) {
      if (iVar1 == 0) {
        local_8 = param_1->field_0030;
        local_c = g_playSystem_00802A38->field_00E4;
        array = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);

        Library::DKW::TBL::DArrayAppend(array,&param_1->field_0032);
        /* ST_CALLSITE[00491001]: CALL 0x0040178f; direct=0040178F STAllPlayersC::AddObjsToGroup */
        STAllPlayersC::AddObjsToGroup
                  (g_allPlayers_007FA174,(char)param_1->field_0024,0xfffe,array,
                   nullptr);
        DArrayDestroy(array);
        /* ST_CALLSITE[00491014]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
        STBoatC::CmdToObj(param_1,CASE_14,&local_c);
      }
      iVar1 = param_1->field_07C2;
    }
    param_1->field_07C2 = iVar1 + 1;
    return;
  }
  local_8 = param_1->field_0030;
  local_c = g_playSystem_00802A38->field_00E4;
  /* ST_CALLSITE[00490FA5]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
  STBoatC::CmdToObj(param_1,CASE_14,&local_c);
  return;
}

