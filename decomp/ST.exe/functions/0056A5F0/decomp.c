
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079B0A8 (store 0056A67D)
   Evidence: final_vptr=0079B0A8; returns_this=true; calls_before=2; field_writes_after=38;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; table_confidence=high */

undefined4 * __thiscall STAppC::STAppC(STAppC *this,undefined4 param_1)

{
  DWORD DVar1;
  int iVar2;
  undefined4 *puVar3;
  
  AppClassTy::AppClassTy((AppClassTy *)this,0,param_1);
  thunk_FUN_00571cd0(&this->field_0038);
  this->field_1111 = 10;
  this->field_1115 = 10;
  this->field_0FC7 = 0;
  this->field_0FCB = 0;
  this->field_1119 = 1;
  this->field_111D = 0;
  this->field_1121 = 1;
  this->field_1125 = 0x14;
  this->field_0E27 = 0;
  this->field_0E2B = 0;
  this->field_0E2F = 0;
  this->field_0E33 = 1000;
  this->field_0E37 = 0;
  this->field_0E3F = 0xffffffff;
  this->field_0E3B = 0xffffffff;
  this->vtable = &STAppCVTable;
  g_appClass_00806728 = (AppClassTy *)this;
  this->field_115A = 0;
  DAT_0080673c = 0;
  this->field_115E = 1;
  this->field_115F = 0;
  this->field_1163 = 2;
  this->field_1164 = 0;
  this->field_1168 = 0;
  this->field_116C = 0;
  this->field_1170 = 0;
  this->field_1174 = 0;
  this->field_1181 = 0;
  this->field_1185 = 0;
  this->field_1189 = (LPVOID)0x0;
  this->field_118D = 0;
  this->field_1191 = 4;
  this->field_1195 = 0;
  this->field_1178 = 0;
  this->field_117C = 0;
  this->field_112D = 1;
  this->field_112E = 1;
  this->field_4EDE = 0;
  this->field_4EE2 = 0;
  this->field_4EE6 = 0;
  this->field_4EEA = 0;
  this->field_4EF2 = 0;
  this->field_7D12 = 0;
  this->field_7D16 = 0;
  this->field_4EF6 = 1;
  this->field_4EFA = 0;
  this->field_1138 = 0;
  this->field_7D0E = 0;
  DVar1 = FUN_006e51b0((int)this);
  this->field_1134 = DVar1;
  this->field_76F2 = 0;
  this->field_854E = 0;
  this->field_8552 = 0;
  this->field_8556 = 0;
  puVar3 = (undefined4 *)&this->field_0x1196;
  for (iVar2 = 0x666; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)puVar3 = 0;
  puVar3 = (undefined4 *)&this->field_4DA3;
  for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  this->field_4EA7 = 0;
  this->field_4EAB = 0;
  this->field_4EFE = 0;
  return &this->vtable;
}

