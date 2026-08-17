#include "../../pseudocode_runtime.h"


void __fastcall FUN_0041f3b0(STSprGameObjC *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  STSprGameObjC_field_0259State SVar5;

  iVar2 = param_1->field_0221;
  if (iVar2 == -1) {
    return;
  }
  if (iVar2 == 1) {
    param_1->field_0221 = 0;
    return;
  }
  if (iVar2 == 2) {
    if ((g_playSystem_00802A38->field_00E4 & 1) != 0) {
      return;
    }
    if (param_1->field_0225 == 0) {
      /* ST_CALLSITE[0041F3FC]: CALL 0x004036f7; direct=004036F7 STSprGameObjC::LoadLifeFrame */
      STSprGameObjC::LoadLifeFrame(param_1);
      /* ST_CALLSITE[0041F409]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
      iVar2 = STT3DSprC::sub_004ACD30((STT3DSprC *)&param_1->field_01D5,'\x01');
      param_1->field_0225 = iVar2 + -1;
    }
    /* ST_CALLSITE[0041F419]: CALL dword ptr [EDX + 0x7c] */
    uVar3 = param_1->vfunc_7C();
    if (1 < (int)uVar3) {
      uVar3 = (int)(uVar3 * param_1->field_0225) / 100;
    }
    if (uVar3 == 0) {
      uVar3 = 1;
    }
    puVar1 = &param_1->field_01D5;
    uVar4 = thunk_FUN_004ac910(puVar1,'\x01');
    if (uVar3 != uVar4) {
      /* ST_CALLSITE[0041F45F]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
      STT3DSprC::SetCurFase((STT3DSprC *)puVar1,'\x01',uVar3);
      /* ST_CALLSITE[0041F468]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
      STT3DSprC::ShowCurFase((STT3DSprC *)puVar1,'\x01');
    }
    iVar2 = param_1->field_0020;
    if ((((iVar2 == 0x14) || (iVar2 == 1000)) || (iVar2 == 0x172)) || (iVar2 == 0x1a4)) {
      /* ST_CALLSITE[0041F4A1]: CALL dword ptr [EDX + 0x2c] */
      SVar5 = param_1->slot_2C();
    }
    else {
      if (iVar2 != 0x3e9) goto LAB_0041f51a;
      SVar5 = param_1->field_0259;
    }
    /* ST_CALLSITE[0041F4AD]: CALL dword ptr [EAX + 0xc] */
    if (((SVar5 != 0xffffffff) && (iVar2 = param_1->vfunc_0C(), iVar2 == 3)) &&
       ((param_1->field_0020 != 0x172 && (param_1->field_0020 != 0x1a4)))) {
      /* ST_CALLSITE[0041F4CA]: CALL dword ptr [EDX + 0xc4] */
      uVar3 = param_1->vfunc_C4();
      if (1 < (int)uVar3) {
        uVar3 = (int)(uVar3 * param_1->field_0225) / 100;
      }
      if (uVar3 == 0) {
        uVar3 = 1;
      }
      uVar4 = thunk_FUN_004ac910(puVar1,'\x02');
      if (uVar3 != uVar4) {
        /* ST_CALLSITE[0041F50C]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
        STT3DSprC::SetCurFase((STT3DSprC *)puVar1,'\x02',uVar3);
        /* ST_CALLSITE[0041F515]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
        STT3DSprC::ShowCurFase((STT3DSprC *)puVar1,'\x02');
      }
    }
LAB_0041f51a:
    param_1->field_0221 = param_1->field_0221 + -1;
    return;
  }
  if (iVar2 != 0) {
    return;
  }
  puVar1 = &param_1->field_01D5;
  /* ST_CALLSITE[0041F53A]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
  STT3DSprC::SetCurFase((STT3DSprC *)puVar1,'\x01',0);
  /* ST_CALLSITE[0041F543]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
  STT3DSprC::ShowCurFase((STT3DSprC *)puVar1,'\x01');
  iVar2 = param_1->field_0020;
  if (((iVar2 == 0x14) || (iVar2 == 1000)) || ((iVar2 == 0x172 || (iVar2 == 0x1a4)))) {
    /* ST_CALLSITE[0041F578]: CALL dword ptr [EDX + 0x2c] */
    SVar5 = param_1->slot_2C();
  }
  else {
    if (iVar2 != 0x3e9) goto LAB_0041f5a0;
    SVar5 = param_1->field_0259;
  }
  /* ST_CALLSITE[0041F584]: CALL dword ptr [EAX + 0xc] */
  if ((SVar5 != 0xffffffff) && (iVar2 = param_1->vfunc_0C(), iVar2 == 3)) {
    /* ST_CALLSITE[0041F592]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
    STT3DSprC::SetCurFase((STT3DSprC *)puVar1,'\x02',0);
    /* ST_CALLSITE[0041F59B]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
    STT3DSprC::ShowCurFase((STT3DSprC *)puVar1,'\x02');
  }
LAB_0041f5a0:
  param_1->field_0221 = param_1->field_0221 + -1;
  return;
}

